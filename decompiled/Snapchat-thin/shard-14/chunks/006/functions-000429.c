/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b55fd88; end: 10b55fdbf;  */

void FUN_10b55fd88(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b560a90();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b55fdc0; end: 10b55feaf;  */

uint * FUN_10b55fdc0(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int extraout_w8;
  ulong uVar6;
  uint *unaff_x19;
  uint *unaff_x20;
  long unaff_x21;
  int iVar7;
  undefined8 *unaff_x22;
  int iVar8;
  
  func_0x00010b560ab0();
  if (extraout_w8 != 0) {
    func_0x00010b56099c();
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    unaff_x22 = (undefined8 *)(ulong)uVar1;
    puVar2 = (uint *)0x15;
    func_0x000107c280a8();
    unaff_x20 = puVar2 + 1;
    *puVar2 = uVar1;
    param_2 = param_1;
  }
  func_0x00010b560a24(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) {
      puVar3 = (undefined8 *)*unaff_x22;
      goto LAB_10b55fe18;
    }
  }
  else {
    puVar3 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b55fe18:
      func_0x00010b5609c0(puVar3);
      param_2 = 3;
      unaff_x20 = unaff_x19;
      func_0x00010b560988();
    }
  }
  func_0x00010b560a24(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b55fe74;
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b55fe74;
  func_0x00010b5609c0(unaff_x22);
  unaff_x20 = unaff_x19;
  func_0x00010b560988();
LAB_10b55fe74:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  uVar6 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*(long *)unaff_x19 - (long)unaff_x20 < (long)(int)uVar5) {
    while( true ) {
      iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)unaff_x20) + 0x10;
      iVar7 = (int)uVar5;
      uVar1 = iVar7 - iVar8;
      uVar5 = (ulong)uVar1;
      if (uVar1 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (uint *)((long)unaff_x20 + (long)iVar7);
  }
  _memcpy(unaff_x20,lVar4,uVar5 & 0xffffffff);
  return (uint *)((long)unaff_x20 + (long)(int)uVar5);
}



/* Entry: 10b55feb0; end: 10b55ffd3;  */

void FUN_10b55feb0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1;
  func_0x00010b560a30(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  func_0x00010b560a30(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)lVar3 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 10b55ffd4; end: 10b560007;  */

long FUN_10b55ffd4(long param_1)

{
  func_0x00010b560a88();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b560008; end: 10b56000b;  */

long FUN_10b560008(long param_1)

{
  func_0x00010b560a88();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b56000c; end: 10b56001f;  */

void FUN_10b56000c(void)

{
  FUN_10b55ffd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b560020; end: 10b56002b;  */

undefined ** FUN_10b560020(void)

{
  return &PTR_DAT_110d08110;
}



/* Entry: 10b56002c; end: 10b560063;  */

void FUN_10b56002c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b560a90();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b560064; end: 10b560177;  */

uint * FUN_10b560064(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int extraout_w8;
  ulong uVar7;
  uint *unaff_x19;
  uint *unaff_x20;
  long unaff_x21;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  
  func_0x00010b560ab0();
  puVar2 = param_1;
  if (extraout_w8 != 0) {
    func_0x00010b56099c();
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    unaff_x22 = (undefined8 *)(ulong)uVar1;
    puVar2 = (uint *)0x1d;
    func_0x000107c280a8();
    unaff_x20 = puVar2 + 1;
    *puVar2 = uVar1;
    param_2 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x24) != 0) {
    func_0x00010b56099c();
    uVar1 = *(uint *)(unaff_x21 + 0x24);
    unaff_x22 = (undefined8 *)(ulong)uVar1;
    puVar3 = (uint *)0x25;
    func_0x000107c280a8();
    unaff_x20 = puVar3 + 1;
    *puVar3 = uVar1;
    param_2 = puVar2;
  }
  func_0x00010b560a24(*(undefined8 *)(unaff_x21 + 0x10));
  if ((long)param_2 < 0) {
    param_2 = (uint *)0x0;
    if (unaff_x22[1] != 0) {
      puVar4 = (undefined8 *)*unaff_x22;
      goto LAB_10b5600e0;
    }
  }
  else {
    puVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10b5600e0:
      func_0x00010b5609c0(puVar4);
      param_2 = (uint *)0x5;
      unaff_x20 = unaff_x19;
      func_0x00010b560988();
    }
  }
  func_0x00010b560a24(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b56013c;
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b56013c;
  func_0x00010b5609c0(unaff_x22);
  unaff_x20 = unaff_x19;
  func_0x00010b560988();
LAB_10b56013c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  uVar7 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar5 = *(long *)(uVar7 + 8);
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar5 = uVar7 + 8;
  }
  if (*(long *)unaff_x19 - (long)unaff_x20 < (long)(int)uVar6) {
    while( true ) {
      iVar9 = ((int)*(undefined8 *)unaff_x19 - (int)unaff_x20) + 0x10;
      iVar8 = (int)uVar6;
      uVar1 = iVar8 - iVar9;
      uVar6 = (ulong)uVar1;
      if (uVar1 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (uint *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20,lVar5,uVar6 & 0xffffffff);
  return (uint *)((long)unaff_x20 + (long)(int)uVar6);
}



/* Entry: 10b560178; end: 10b5602b7;  */

void FUN_10b560178(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1;
  func_0x00010b560a30(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  func_0x00010b560a30(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)lVar3 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + 5;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = iVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}



/* Entry: 10b5602b8; end: 10b56036b;  */

undefined8 * FUN_10b5602b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d08058;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5607b8(param_1 + 2,param_2,param_3 + 0x10);
  func_0x00010b5607d8(param_1 + 5,param_2,param_3 + 0x28);
  lVar1 = param_3 + 0x40;
  func_0x000107c2809c(lVar1,param_2);
  param_1[8] = lVar1;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 0x50);
  param_1[9] = uVar2;
  return param_1;
}



/* Entry: 10b56036c; end: 10b560397;  */

undefined8 FUN_10b56036c(undefined8 param_1)

{
  func_0x00010b560a88();
  FUN_10b560398(param_1);
  return param_1;
}



/* Entry: 10b560398; end: 10b5603bf;  */

long * FUN_10b560398(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x10);
  FUN_10b5607f8(param_1 + 0x28);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5603c0; end: 10b5603c3;  */

undefined8 FUN_10b5603c0(undefined8 param_1)

{
  func_0x00010b560a88();
  FUN_10b560398(param_1);
  return param_1;
}



/* Entry: 10b5603c4; end: 10b5603d7;  */

void FUN_10b5603c4(void)

{
  FUN_10b56036c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5603d8; end: 10b5603e3;  */

undefined ** FUN_10b5603d8(void)

{
  return &PTR_DAT_110d08188;
}



/* Entry: 10b5603e4; end: 10b560447;  */

void FUN_10b5603e4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  func_0x000107c3025c(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b560448; end: 10b5606e3;  */

uint * FUN_10b560448(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *unaff_x22;
  int iVar11;
  
  puVar2 = param_1;
  puVar4 = param_2;
  if (param_1[0x12] != 0) {
    param_2 = param_1;
    func_0x00010b5609a8();
    puVar2 = (uint *)0x8;
    func_0x000107c280a8();
    func_0x00010b560a70();
    puVar4 = puVar2;
  }
  puVar3 = puVar2;
  if (param_1[0x13] != 0) {
    func_0x00010b5609a8();
    uVar10 = param_1[0x13];
    unaff_x22 = (undefined8 *)(ulong)uVar10;
    puVar3 = (uint *)0x1d;
    func_0x000107c280a8();
    puVar4 = puVar3 + 1;
    *puVar3 = uVar10;
    param_2 = puVar2;
  }
  if (param_1[0x14] != 0) {
    func_0x00010b5609a8();
    puVar4 = (uint *)0x20;
    func_0x000107c280a8();
    func_0x00010b560a70();
    param_2 = puVar3;
  }
  func_0x00010b560a24(*(undefined8 *)(param_1 + 0x10));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b56051c;
    puVar5 = (undefined8 *)*unaff_x22;
  }
  else {
    puVar5 = unaff_x22;
    if ((int)param_2 == 0) goto LAB_10b56051c;
  }
  func_0x00010b5609c0(puVar5);
  puVar2 = param_3;
  func_0x000107c280a0(param_3,5,unaff_x22,puVar4);
  puVar4 = puVar2;
LAB_10b56051c:
  uVar1 = param_1[6];
  for (uVar10 = 0; uVar1 != uVar10; uVar10 = uVar10 + 1) {
    func_0x00010b5609f8();
    puVar4 = (uint *)0x6;
    func_0x00010b560a54();
  }
  uVar1 = param_1[0xc];
  for (uVar10 = 0; uVar1 != uVar10; uVar10 = uVar10 + 1) {
    func_0x00010b5609f8();
    puVar4 = (uint *)0x7;
    func_0x00010b560a54();
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar6 = *(long *)(uVar8 + 8);
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar6 = uVar8 + 8;
    }
    if (*(long *)param_3 - (long)puVar4 < (long)(int)uVar7) {
      while( true ) {
        iVar11 = ((int)*(undefined8 *)param_3 - (int)puVar4) + 0x10;
        iVar9 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar9 - iVar11);
        if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
        func_0x00010b4d5738();
        lVar6 = (long)puVar4 + (long)iVar11;
        puVar4 = param_3;
        func_0x000107c303e4(param_3,lVar6);
      }
      func_0x00010b4d5738();
      return (uint *)((long)puVar4 + (long)iVar9);
    }
    _memcpy(puVar4,lVar6,uVar7 & 0xffffffff);
    return (uint *)((long)puVar4 + (long)(int)uVar7);
  }
  return puVar4;
}



/* Entry: 10b5606e4; end: 10b5606e7;  */

void FUN_10b5606e4(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  FUN_10b560780(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(param_1 + 0x28);
  lVar2 = param_2 + 0x28;
  func_0x00010b560790();
  func_0x00010b560a48(*(undefined8 *)(param_2 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b560a3c();
    }
    puVar1 = (ulong *)(param_1 + 0x40);
    func_0x000107c30248();
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b560a14();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5606e8; end: 10b56077f;  */

void FUN_10b5606e8(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  FUN_10b560780(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(param_1 + 0x28);
  lVar2 = param_2 + 0x28;
  func_0x00010b560790();
  func_0x00010b560a48(*(undefined8 *)(param_2 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b560a3c();
    }
    puVar1 = (ulong *)(param_1 + 0x40);
    func_0x000107c30248();
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b560a14();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b560780; end: 10b5607b7;  */

void FUN_10b560780(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b5607b8; end: 10b5607f7;  */

void FUN_10b5607b8(void)

{
  func_0x00010b560a9c();
  FUN_10b560780();
  return;
}



/* Entry: 10b5607f8; end: 10b560827;  */

long * FUN_10b5607f8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b560828; end: 10b560857;  */

long * FUN_10b560828(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b560858; end: 10b56097f;  */

long * FUN_10b560858(long *param_1)

{
  FUN_10b5607f8(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b560980; end: 10b560ac3;  */

void FUN_10b560980(void)

{
  return;
}



/* Entry: 10b560ac4; end: 10b560e1f;  */

void FUN_10b560ac4(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010b561b98();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b560aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5be470)[extraout_x8] * 4 + 0x10b560af0))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b560e20; end: 10b560f93;  */

undefined8 * FUN_10b560e20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  *puVar2 = param_2;
  *param_1 = &PTR_DAT_110d08250;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar2,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
    func_0x00010b561af0();
    func_0x00010b5616cc();
    break;
  case 2:
    func_0x00010b561af0();
    func_0x00010b561700();
    break;
  case 3:
    func_0x00010b561af0();
    func_0x00010b561730();
    break;
  case 4:
    func_0x00010b561af0();
    func_0x00010b561760();
    break;
  case 5:
    func_0x00010b561af0();
    func_0x00010b561790();
    break;
  case 6:
    func_0x00010b561af0();
    func_0x00010b5617c4();
    break;
  case 7:
    func_0x00010b561af0();
    func_0x00010b5617f8();
    break;
  case 8:
    func_0x00010b561af0();
    func_0x00010b561828();
    break;
  case 9:
    func_0x00010b561af0();
    func_0x00010b56185c();
    break;
  case 10:
    func_0x00010b561af0();
    func_0x00010b56188c();
    break;
  case 0xb:
    func_0x00010b561af0();
    func_0x00010b5618bc();
    break;
  case 0xc:
    func_0x00010b561af0();
    func_0x00010b5618f8();
    break;
  case 0xd:
    func_0x00010b561af0();
    func_0x00010b561928();
    break;
  case 0xe:
    func_0x00010b561af0();
    func_0x00010b561958();
    break;
  case 0xf:
    func_0x00010b561af0();
    func_0x00010b561988();
    break;
  case 0x10:
    func_0x00010b561af0();
    func_0x00010b5619bc();
    break;
  case 0x11:
    func_0x00010b561af0();
    func_0x00010b5619ec();
    break;
  case 0x12:
    func_0x00010b561af0();
    func_0x00010b561a20();
    break;
  case 0x13:
    func_0x00010b561af0();
    func_0x00010b561a50();
    break;
  case 0x14:
    func_0x00010b561af0();
    func_0x00010b561a80();
    break;
  default:
    goto LAB_10b560f80;
  }
  param_1[2] = puVar2;
LAB_10b560f80:
  return param_1;
}



/* Entry: 10b560f94; end: 10b560fc3;  */

long FUN_10b560f94(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b560fc4(param_1);
  return param_1;
}



/* Entry: 10b560fc4; end: 10b560fd7;  */

void FUN_10b560fc4(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x00010b561b98();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b560aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5be470)[extraout_x8] * 4 + 0x10b560af0))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10b560fd8; end: 10b560feb;  */

void FUN_10b560fd8(void)

{
  FUN_10b560f94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b560fec; end: 10b560ff7;  */

undefined ** FUN_10b560fec(void)

{
  return &PTR_DAT_110d08290;
}



/* Entry: 10b560ff8; end: 10b56120f;  */

void FUN_10b560ff8(long param_1)

{
  ulong *puVar1;
  
  FUN_10b560ac4();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b561210; end: 10b561213;  */

void FUN_10b561210(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    lVar3 = param_1;
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_10b560ac4();
      }
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b562c00();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5616cc();
      break;
    case 2:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b563004();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561700();
      break;
    case 3:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b5606e8();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561730();
      break;
    case 4:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55ba24();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561760();
      break;
    case 5:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        func_0x00010b55a638();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561790();
      break;
    case 6:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55d2c0();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5617c4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55f2ac();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5617f8();
      break;
    case 8:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55f9ec();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561828();
      break;
    case 9:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55e624();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b56185c();
      break;
    case 10:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        func_0x00010b55a90c();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b56188c();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55d9b8();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5618bc();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55b350();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5618f8();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55cb88();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561928();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        func_0x00010b55fb50();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561958();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55c270();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561988();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55bdcc();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5619bc();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55eddc();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5619ec();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55e194();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561a20();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55eaa8();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561a50();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        func_0x00010b55f480();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561a80();
      break;
    default:
      goto LAB_10b56164c;
    }
    *(long *)(param_1 + 0x10) = lVar3;
  }
LAB_10b56164c:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b561214; end: 10b561687;  */

void FUN_10b561214(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    lVar3 = param_1;
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        FUN_10b560ac4();
      }
      *(int *)(param_1 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b562c00();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5616cc();
      break;
    case 2:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b563004();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561700();
      break;
    case 3:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b5606e8();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561730();
      break;
    case 4:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55ba24();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561760();
      break;
    case 5:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        func_0x00010b55a638();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561790();
      break;
    case 6:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55d2c0();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5617c4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55f2ac();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5617f8();
      break;
    case 8:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55f9ec();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561828();
      break;
    case 9:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55e624();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b56185c();
      break;
    case 10:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        func_0x00010b55a90c();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b56188c();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55d9b8();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5618bc();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55b350();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5618f8();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55cb88();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561928();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        func_0x00010b55fb50();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561958();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55c270();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561988();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55bdcc();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5619bc();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55eddc();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b5619ec();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55e194();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561a20();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        FUN_10b55eaa8();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561a50();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        FUN_10b561ab0();
        func_0x00010b55f480();
        goto LAB_10b56164c;
      }
      func_0x00010b561ac0();
      func_0x00010b561a80();
      break;
    default:
      goto LAB_10b56164c;
    }
    *(long *)(param_1 + 0x10) = lVar3;
  }
LAB_10b56164c:
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b561688; end: 10b56168f;  */

void FUN_10b561688(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b561b60();
  }
  else {
    func_0x00010b561b70();
  }
  *puVar1 = &PTR_DAT_110d08250;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b561690; end: 10b561aaf;  */

void FUN_10b561690(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b561b60();
  }
  else {
    func_0x00010b561b70();
  }
  *puVar1 = &PTR_DAT_110d08250;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b561ab0; end: 10b561bab;  */

undefined8 FUN_10b561ab0(void)

{
  long unaff_x21;
  
  return *(undefined8 *)(unaff_x21 + 0x10);
}



/* Entry: 10b561bac; end: 10b561c2f;  */

undefined8 * FUN_10b561bac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d083b8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b562610();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b562514(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b561c30; end: 10b561c5b;  */

undefined8 FUN_10b561c30(undefined8 param_1)

{
  func_0x00010b562670();
  FUN_10b561c5c(param_1);
  return param_1;
}



/* Entry: 10b561c5c; end: 10b561c8b;  */

void FUN_10b561c5c(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b562280();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b561c8c; end: 10b561c8f;  */

undefined8 FUN_10b561c8c(undefined8 param_1)

{
  func_0x00010b562670();
  FUN_10b561c5c(param_1);
  return param_1;
}



/* Entry: 10b561c90; end: 10b561ca3;  */

void FUN_10b561c90(void)

{
  FUN_10b561c30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b561ca4; end: 10b561caf;  */

undefined ** FUN_10b561ca4(void)

{
  return &PTR_DAT_110d083f8;
}



/* Entry: 10b561cb0; end: 10b561d2f;  */

void FUN_10b561cb0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b561cfc(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b561d30; end: 10b561e03;  */

long * FUN_10b561d30(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,param_3);
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar1);
    plVar1 = (long *)(ulong)*(byte *)(param_1 + 0x28);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280a8(plVar1,uVar3);
  }
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    plVar1 = param_3;
    func_0x000107c280a0(param_3,4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar5 = *(long *)(uVar6 + 8);
      uVar4 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar5 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar1 + (long)iVar8;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar7);
    }
    _memcpy(plVar1,lVar5,uVar4 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar4);
  }
  return plVar1;
}



/* Entry: 10b561e04; end: 10b561e8b;  */

void FUN_10b561e04(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar3 + 0x17) < '\0') {
    if (*(long *)(uVar3 + 8) == 0) goto LAB_10b561e3c;
  }
  else if (*(char *)(uVar3 + 0x17) == '\0') {
LAB_10b561e3c:
    iVar2 = 0;
    goto LAB_10b561e40;
  }
  func_0x000107c28098();
  iVar2 = (int)uVar3 + 1;
LAB_10b561e40:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    FUN_10b561e8c();
    iVar2 = iVar2 + iVar1 + 1;
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x28) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b561e8c; end: 10b561ea7;  */

long FUN_10b561e8c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5623a8();
  func_0x00010b562644();
  return param_1 + extraout_x8;
}



/* Entry: 10b561ea8; end: 10b561eab;  */

void FUN_10b561ea8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5626bc();
  if ((param_3 & 1) != 0) {
    param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x20) == 0) {
      FUN_10b562514(param_3,*(undefined8 *)(unaff_x20 + 0x20));
      *(ulong *)(unaff_x21 + 0x20) = param_3;
    }
    else {
      func_0x00010b561f6c();
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b561eac; end: 10b56203b;  */

void FUN_10b561eac(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5626bc();
  if ((param_3 & 1) != 0) {
    param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x20) == 0) {
      FUN_10b562514(param_3,*(undefined8 *)(unaff_x20 + 0x20));
      *(ulong *)(unaff_x21 + 0x20) = param_3;
    }
    else {
      func_0x00010b561f6c();
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b56203c; end: 10b562067;  */

long FUN_10b56203c(long param_1)

{
  func_0x00010b562670();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b562068; end: 10b56206b;  */

long FUN_10b562068(long param_1)

{
  func_0x00010b562670();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b56206c; end: 10b56207f;  */

void FUN_10b56206c(void)

{
  FUN_10b56203c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b562080; end: 10b56208b;  */

undefined ** FUN_10b562080(void)

{
  return &PTR_DAT_110d08450;
}



/* Entry: 10b56208c; end: 10b5620b7;  */

void FUN_10b56208c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b562678();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b5620b8; end: 10b56215f;  */

long * FUN_10b5620b8(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b562124;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b562124;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77ab74);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b562124:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b562160; end: 10b5621bb;  */

void FUN_10b562160(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00010b5626d0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5621bc; end: 10b5621bf;  */

void FUN_10b5621bc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5621c0; end: 10b56227f;  */

void FUN_10b5621c0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b562280; end: 10b5622ab;  */

undefined8 FUN_10b562280(undefined8 param_1)

{
  func_0x00010b562670();
  FUN_10b5622ac(param_1);
  return param_1;
}



/* Entry: 10b5622ac; end: 10b5622e3;  */

void FUN_10b5622ac(long param_1)

{
  ulong uVar1;
  
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x24) == 1) {
      uVar1 = *(ulong *)(param_1 + 8);
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
      }
      if (uVar1 == 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          FUN_10b56203c();
        }
        __ZdlPv();
      }
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



/* Entry: 10b5622e4; end: 10b5622e7;  */

undefined8 FUN_10b5622e4(undefined8 param_1)

{
  func_0x00010b562670();
  FUN_10b5622ac(param_1);
  return param_1;
}



/* Entry: 10b5622e8; end: 10b5622fb;  */

void FUN_10b5622e8(void)

{
  FUN_10b562280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5622fc; end: 10b562307;  */

undefined ** FUN_10b5622fc(void)

{
  return &PTR_DAT_110d084b8;
}



/* Entry: 10b562308; end: 10b56242b;  */

long * FUN_10b562308(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x24) == 1) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),param_2,param_3);
  }
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    plVar1 = param_3;
    func_0x000107c280a0(param_3,2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar2 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(uVar4 + 8);
      uVar2 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar3 = uVar4 + 8;
    }
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar5 = (int)uVar2;
        uVar2 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar1 + (long)iVar6;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar5);
    }
    _memcpy(plVar1,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar2);
  }
  return plVar1;
}



/* Entry: 10b56242c; end: 10b562447;  */

void FUN_10b56242c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5626bc();
  if ((param_3 & 1) != 0) {
    param_3 = *(ulong *)(param_3 & 0xfffffffffffffffe);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c30248(unaff_x21 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 1) {
        FUN_10b5621c0(*(undefined8 *)(unaff_x21 + 0x18),*(undefined8 *)(unaff_x20 + 0x18));
      }
    }
    else {
      if (*(int *)(unaff_x21 + 0x24) != 0) {
        func_0x00010b56222c();
      }
      *(int *)(unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 1) {
        func_0x00010b562598(param_3,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = param_3;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b562448; end: 10b562513;  */

void FUN_10b562448(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x20;
    __Znwm();
  }
  else {
    func_0x00010b56269c();
  }
  func_0x00010b5626a8(&PTR_FUN_110d08318);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b562514; end: 10b5625fb;  */

undefined8 * FUN_10b562514(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b562690();
  }
  puVar3 = puVar2 + 1;
  *puVar3 = param_1;
  *puVar2 = &PTR_FUN_110d08368;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b562610();
  }
  func_0x00010b562664();
  puVar2[2] = puVar3;
  *(undefined4 *)(puVar2 + 4) = 0;
  iVar1 = *(int *)(param_2 + 0x24);
  *(int *)((long)puVar2 + 0x24) = iVar1;
  if (iVar1 == 1) {
    func_0x00010b562598(param_1,*(undefined8 *)(param_2 + 0x18));
    puVar2[3] = param_1;
  }
  return puVar2;
}



/* Entry: 10b5625fc; end: 10b56270f;  */

void FUN_10b5625fc(void)

{
  return;
}



/* Entry: 10b562710; end: 10b562737;  */

long FUN_10b562710(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b562738; end: 10b562783;  */

undefined8 * FUN_10b562738(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d08568;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x00010b5626e4(param_1,param_3);
  return param_1;
}



/* Entry: 10b562784; end: 10b562787;  */

long FUN_10b562784(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b562788; end: 10b56279b;  */

void FUN_10b562788(void)

{
  FUN_10b562710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b56279c; end: 10b5627bb;  */

undefined ** FUN_10b56279c(void)

{
  return &PTR_DAT_110d085a8;
}



/* Entry: 10b5627bc; end: 10b562857;  */

long * FUN_10b5627bc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b562858; end: 10b562897;  */

long FUN_10b562858(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b562898; end: 10b5628df;  */

void FUN_10b562898(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110d08568;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b5628e0; end: 10b5628e7;  */

void FUN_10b5628e0(void)

{
  return;
}



/* Entry: 10b5628e8; end: 10b562973;  */

undefined8 * FUN_10b5628e8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d08628;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b562974; end: 10b5629a3;  */

long FUN_10b562974(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5629a4(param_1);
  return param_1;
}



/* Entry: 10b5629a4; end: 10b5629d3;  */

void FUN_10b5629a4(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5629d4; end: 10b5629d7;  */

long FUN_10b5629d4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5629a4(param_1);
  return param_1;
}



/* Entry: 10b5629d8; end: 10b5629eb;  */

void FUN_10b5629d8(void)

{
  FUN_10b562974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5629ec; end: 10b5629f7;  */

undefined ** FUN_10b5629ec(void)

{
  return &PTR_DAT_110d08668;
}



/* Entry: 10b5629f8; end: 10b562a4b;  */

void FUN_10b5629f8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b562a4c; end: 10b562b53;  */

long * FUN_10b562a4c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,param_3);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar1);
    plVar1 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280b8(plVar1,uVar3);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b562b10;
    puVar4 = (undefined8 *)*puVar9;
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b562b10;
  }
  func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f77abbf);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,3,puVar9,plVar1);
  plVar1 = plVar2;
LAB_10b562b10:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar6 < 0) {
    lVar5 = *(long *)(uVar7 + 8);
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar5 = uVar7 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar6) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar8 = (int)uVar6;
      uVar6 = (ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar5 = (long)plVar1 + (long)iVar10;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar8);
  }
  _memcpy(plVar1,lVar5,uVar6 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar6);
}



/* Entry: 10b562b54; end: 10b562bfb;  */

long FUN_10b562b54(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b562b8c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b562b8c:
    lVar3 = 0;
    goto LAB_10b562b90;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b562b90:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x000108c6cd50();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b562bfc; end: 10b562bff;  */

void FUN_10b562bfc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b535e30();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b562c00; end: 10b562cdf;  */

void FUN_10b562c00(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar3,uVar4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b535e30();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b562ce0; end: 10b562ce7;  */

void FUN_10b562ce0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110d08628;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b562ce8; end: 10b562d3b;  */

void FUN_10b562ce8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110d08628;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b562d3c; end: 10b562d4f;  */

void FUN_10b562d3c(void)

{
  return;
}



/* Entry: 10b562d50; end: 10b562dbf;  */

undefined8 * FUN_10b562d50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d086f0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  param_3 = param_3 + 0x18;
  func_0x000107c2809c(param_3,param_2);
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 10b562dc0; end: 10b562def;  */

long FUN_10b562dc0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b562df0(param_1);
  return param_1;
}



/* Entry: 10b562df0; end: 10b562e17;  */

/* WARNING: Possible PIC construction at 0x00010b562e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b562e08) */

void FUN_10b562df0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10b562e18; end: 10b562e1b;  */

long FUN_10b562e18(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b562df0(param_1);
  return param_1;
}



/* Entry: 10b562e1c; end: 10b562e2f;  */

void FUN_10b562e1c(void)

{
  FUN_10b562dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b562e30; end: 10b562e3b;  */

undefined ** FUN_10b562e30(void)

{
  return &PTR_DAT_110d08730;
}



/* Entry: 10b562e3c; end: 10b562e7f;  */

void FUN_10b562e3c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b562e80; end: 10b562f6f;  */

long * FUN_10b562e80(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)*puVar5;
      goto LAB_10b562ec4;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b562ec4:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f77abfe);
    param_2 = param_3;
    FUN_10b5630fc(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_10b562f2c;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b562f2c;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f77ac49);
  param_2 = param_3;
  FUN_10b5630fc(param_3,2);
LAB_10b562f2c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar2) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar2);
}


