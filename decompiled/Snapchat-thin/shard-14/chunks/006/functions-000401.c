/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b518264; end: 10b5182a3;  */

undefined8 * FUN_10b518264(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c39da0();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b4d80e0();
  }
  puVar2[1] = unaff_x20;
  *puVar2 = &PTR_FUN_110cfa6c0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b51842c();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_10b5181f8();
  }
  puVar2[3] = unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  puVar2[6] = *(undefined8 *)(unaff_x19 + 0x30);
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  return puVar2;
}



/* Entry: 10b5182a4; end: 10b518397;  */

void FUN_10b5182a4(int *param_1,ulong param_2)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  long alStack_58 [3];
  
  func_0x00010564c19c(alStack_58);
  while (lVar1 = alStack_58[0], alStack_58[0] != 0) {
    piVar2 = (int *)(alStack_58[0] + 8);
    func_0x000107c28188();
    func_0x00010b5183b0();
    if (piVar2 == (int *)0x0) {
      uVar3 = (ulong)(*param_1 + 1);
      piVar2 = param_1;
      func_0x000107c27d60(param_1,uVar3);
      if ((int)piVar2 != 0) {
        func_0x000107c28188(lVar1 + 8);
        func_0x00010b5183b0();
        param_2 = uVar3;
      }
      piVar2 = param_1;
      func_0x000107c27d64(param_1,0x58);
      func_0x000107c2821c(piVar2 + 2,*(undefined8 *)(param_1 + 6),lVar1 + 8);
      uVar4 = *(undefined8 *)(param_1 + 6);
      *(undefined ***)(piVar2 + 8) = &PTR_FUN_110cfa6c0;
      *(undefined8 *)(piVar2 + 10) = uVar4;
      piVar2[0xe] = 0;
      piVar2[0xf] = 0;
      piVar2[0xc] = 0;
      piVar2[0xd] = 0;
      piVar2[0x12] = 0;
      piVar2[0x13] = 0;
      piVar2[0x10] = 0;
      piVar2[0x11] = 0;
      piVar2[0x14] = 0;
      piVar2[0x15] = 0;
      func_0x000107c27d68(param_1,param_2,piVar2);
      *param_1 = *param_1 + 1;
    }
    param_2 = lVar1 + 0x20;
    FUN_10b517d30(piVar2 + 8);
    func_0x000107c27d54(alStack_58);
  }
  return;
}



/* Entry: 10b518398; end: 10b5184b3;  */

ulong * FUN_10b518398(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b5184b4; end: 10b5184db;  */

long FUN_10b5184b4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5184dc; end: 10b5184df;  */

long FUN_10b5184dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5184e0; end: 10b5184f3;  */

void FUN_10b5184e0(void)

{
  FUN_10b5184b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5184f4; end: 10b518517;  */

undefined ** FUN_10b5184f4(void)

{
  return &PTR_DAT_110cfa938;
}



/* Entry: 10b518518; end: 10b5185df;  */

long * FUN_10b518518(undefined4 *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  puVar2 = param_1;
  if (param_1[4] != 0) {
    puVar3 = param_1;
    func_0x00010b518fb4();
    uVar1 = param_1[4];
    puVar2 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,puVar3);
    param_2 = (long *)(puVar2 + 1);
    *puVar2 = uVar1;
  }
  puVar3 = puVar2;
  if (param_1[5] != 0) {
    func_0x00010b518fb4();
    uVar1 = param_1[5];
    puVar3 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,puVar2);
    param_2 = (long *)(puVar3 + 1);
    *puVar3 = uVar1;
  }
  if (param_1[6] != 0) {
    func_0x00010b518fb4();
    uVar1 = param_1[6];
    puVar2 = (undefined4 *)0x1d;
    func_0x000107c280a8(0x1d,puVar3);
    param_2 = (long *)(puVar2 + 1);
    *puVar2 = uVar1;
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 10b5185e0; end: 10b51863b;  */

long FUN_10b5185e0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b51863c; end: 10b518667;  */

undefined8 * FUN_10b51863c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cfa8f8;
  param_1[1] = param_2;
  FUN_10b518668();
  return param_1;
}



/* Entry: 10b518668; end: 10b5186a7;  */

void FUN_10b518668(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



/* Entry: 10b5186a8; end: 10b5186d7;  */

long FUN_10b5186a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5186d8(param_1);
  return param_1;
}



/* Entry: 10b5186d8; end: 10b518707;  */

long FUN_10b5186d8(long param_1)

{
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b5184b4();
  }
  __ZdlPv();
  func_0x000107c282dc(param_1 + 0x60);
  func_0x000107c282b4(param_1 + 0x48);
  func_0x000107c282dc(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b518708; end: 10b51870b;  */

long FUN_10b518708(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5186d8(param_1);
  return param_1;
}



/* Entry: 10b51870c; end: 10b51871f;  */

void FUN_10b51870c(void)

{
  FUN_10b5186a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b518720; end: 10b51872b;  */

undefined ** FUN_10b518720(void)

{
  return &PTR_DAT_110cfa9b0;
}



/* Entry: 10b51872c; end: 10b51878f;  */

void FUN_10b51872c(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  func_0x000107c282c0(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b518500(*(undefined8 *)(param_1 + 0x78));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
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



/* Entry: 10b518790; end: 10b518aeb;  */

long * FUN_10b518790(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar12;
  ulong extraout_x8_01;
  int iVar13;
  int *piVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  
  uVar3 = *(uint *)(param_1 + 5);
  plVar7 = param_1;
  if (0 < (int)uVar3) {
    plVar6 = param_1;
    FUN_10b518fa8();
    *(undefined1 *)plVar6 = 10;
    plVar7 = plVar6;
    while (0x7f < uVar3) {
      func_0x00010b518fd4();
    }
    *(char *)((long)plVar6 + 1) = (char)uVar3;
    piVar14 = (int *)param_1[4];
    do {
      FUN_10b518fa8();
      uVar11 = (ulong)*piVar14;
      param_2 = (long *)((long)plVar7 + 1);
      while (bVar5 = 0x7f < uVar11, bVar5) {
        func_0x00010b518fc0();
        uVar11 = extraout_x8;
      }
      func_0x00010b518ff0();
    } while (!bVar5);
  }
  plVar6 = plVar7;
  if ((int)param_1[0x10] != 0) {
    FUN_10b518fa8();
    lVar17 = param_1[0x10];
    plVar6 = (long *)0x15;
    func_0x000107c280a8(0x15,plVar7);
    param_2 = (long *)((long)plVar6 + 4);
    *(int *)plVar6 = (int)lVar17;
  }
  if (*(int *)((long)param_1 + 0x84) != 0) {
    plVar6 = param_3;
    func_0x000107c282ac(param_3,*(int *)((long)param_1 + 0x84),param_2);
    param_2 = plVar6;
  }
  plVar7 = plVar6;
  if ((int)param_1[0x11] != 0) {
    FUN_10b518fa8();
    lVar17 = param_1[0x11];
    plVar7 = (long *)0x25;
    func_0x000107c280a8(0x25,plVar6);
    param_2 = (long *)((long)plVar7 + 4);
    *(int *)plVar7 = (int)lVar17;
  }
  plVar6 = plVar7;
  if (*(int *)((long)param_1 + 0x8c) != 0) {
    FUN_10b518fa8();
    uVar4 = *(undefined4 *)((long)param_1 + 0x8c);
    plVar6 = (long *)0x2d;
    func_0x000107c280a8(0x2d,plVar7);
    param_2 = (long *)((long)plVar6 + 4);
    *(undefined4 *)plVar6 = uVar4;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar3) {
    FUN_10b518fa8();
    *(undefined1 *)plVar6 = 0x32;
    plVar7 = plVar6;
    while (0x7f < uVar3) {
      func_0x00010b518fd4();
    }
    *(char *)((long)plVar6 + 1) = (char)uVar3;
    piVar14 = (int *)param_1[7];
    plVar6 = plVar7;
    do {
      FUN_10b518fa8();
      uVar11 = (ulong)*piVar14;
      param_2 = (long *)((long)plVar6 + 1);
      while (bVar5 = 0x7f < uVar11, bVar5) {
        func_0x00010b518fc0();
        uVar11 = extraout_x8_00;
      }
      func_0x00010b518ff0();
    } while (!bVar5);
  }
  plVar7 = plVar6;
  if ((char)param_1[0x12] == '\x01') {
    FUN_10b518fa8();
    plVar7 = (long *)(ulong)*(byte *)(param_1 + 0x12);
    uVar8 = 0x38;
    func_0x000107c280a8(0x38,plVar6);
    func_0x000107c280a8(plVar7,uVar8);
    param_2 = plVar7;
  }
  lVar17 = 8;
  for (uVar11 = (ulong)(*(uint *)(param_1 + 10) &
                       ((int)*(uint *)(param_1 + 10) >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    uVar12 = param_1[9];
    puVar2 = (ulong *)(param_1 + 9);
    if ((uVar12 & 1) != 0) {
      puVar2 = (ulong *)(uVar12 + lVar17 + -1);
    }
    puVar15 = (undefined8 *)*puVar2;
    lVar10 = (long)*(char *)((long)puVar15 + 0x17);
    puVar9 = puVar15;
    if (lVar10 < 0) {
      lVar10 = puVar15[1];
      puVar9 = (undefined8 *)*puVar15;
    }
    func_0x000107c303d4(puVar9,lVar10,1,&UNK_10f7769ca);
    lVar10 = (long)*(char *)((long)puVar15 + 0x17);
    if (((lVar10 < 0) && (lVar10 = puVar15[1], 0x7f < lVar10)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar10)) {
      plVar7 = param_3;
      func_0x00010b4d5120(param_3,8,puVar15,param_2);
      param_2 = plVar7;
    }
    else {
      *(undefined1 *)param_2 = 0x42;
      *(char *)((long)param_2 + 1) = (char)lVar10;
      if (*(char *)((long)puVar15 + 0x17) < '\0') {
        puVar15 = (undefined8 *)*puVar15;
      }
      param_2 = (long *)((long)param_2 + 2);
      plVar7 = param_2;
      _memcpy(param_2,puVar15,lVar10);
      param_2 = (long *)((long)param_2 + lVar10);
    }
    lVar17 = lVar17 + 8;
  }
  uVar3 = *(uint *)(param_1 + 0xe);
  if (0 < (int)uVar3) {
    FUN_10b518fa8();
    *(undefined1 *)plVar7 = 0x4a;
    plVar6 = plVar7;
    while (0x7f < uVar3) {
      func_0x00010b518fd4();
    }
    *(char *)((long)plVar7 + 1) = (char)uVar3;
    piVar14 = (int *)param_1[0xd];
    do {
      FUN_10b518fa8();
      uVar11 = (ulong)*piVar14;
      param_2 = (long *)((long)plVar6 + 1);
      while (bVar5 = 0x7f < uVar11, bVar5) {
        func_0x00010b518fc0();
        uVar11 = extraout_x8_01;
      }
      func_0x00010b518ff0();
    } while (!bVar5);
  }
  plVar7 = param_2;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar7 = (long *)0xa;
    func_0x000107c303cc(10,param_1[0xf],*(undefined4 *)(param_1[0xf] + 0x1c),param_2,param_3);
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar7;
  }
  uVar12 = param_1[1] & 0xfffffffffffffffe;
  uVar11 = (ulong)*(char *)(uVar12 + 0x1f);
  if ((long)uVar11 < 0) {
    lVar17 = *(long *)(uVar12 + 8);
    uVar11 = *(ulong *)(uVar12 + 0x10);
  }
  else {
    lVar17 = uVar12 + 8;
  }
  if ((long)(int)uVar11 <= *param_3 - (long)plVar7) {
    _memcpy(plVar7,lVar17,uVar11 & 0xffffffff);
    return (long *)((long)plVar7 + (long)(int)uVar11);
  }
  while( true ) {
    iVar16 = ((int)*param_3 - (int)plVar7) + 0x10;
    iVar13 = (int)uVar11;
    uVar11 = (ulong)(uint)(iVar13 - iVar16);
    if (iVar13 - iVar16 == 0 || iVar13 < iVar16) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)plVar7 + (long)iVar16);
    plVar7 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar7 + (long)iVar13);
}



/* Entry: 10b518aec; end: 10b518c9b;  */

void FUN_10b518aec(long param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = param_1 + 0x18;
  FUN_10b4d3e0c();
  *(int *)(param_1 + 0x28) = (int)lVar10;
  lVar2 = 0;
  if (lVar10 != 0) {
    lVar2 = (ulong)((int)LZCOUNT((long)(int)lVar10) * -9 + 0x280U >> 6) + 1;
  }
  lVar7 = param_1 + 0x30;
  FUN_10b4d3e0c();
  *(int *)(param_1 + 0x40) = (int)lVar7;
  lVar3 = 0;
  if (lVar7 != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)(int)lVar7) * -9 + 0x280U >> 6) + 1;
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  lVar2 = lVar2 + lVar10 + lVar7 + lVar3 + (ulong)uVar4;
  lVar10 = 8;
  for (uVar9 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)); uVar9 != 0; uVar9 = uVar9 - 1) {
    uVar8 = *(ulong *)(param_1 + 0x48);
    puVar1 = (ulong *)(param_1 + 0x48);
    if ((uVar8 & 1) != 0) {
      puVar1 = (ulong *)(uVar8 + lVar10 + -1);
    }
    uVar8 = *puVar1;
    func_0x000107c282a0();
    lVar2 = uVar8 + lVar2;
    lVar10 = lVar10 + 8;
  }
  lVar10 = param_1 + 0x60;
  FUN_10b4d3e0c();
  iVar5 = (int)lVar10;
  *(int *)(param_1 + 0x70) = iVar5;
  if (lVar10 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = ((int)LZCOUNT((long)iVar5) * -9 + 0x280U >> 6) + 1;
  }
  iVar6 = iVar5 + (int)lVar2 + iVar6;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar5 = (int)*(undefined8 *)(param_1 + 0x78);
    FUN_10b5185e0();
    iVar6 = iVar6 + iVar5 + ((int)LZCOUNT(iVar5) * -9 + 0x160U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar6 = iVar6 + 5;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar6 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x84)) * -9 + 0x2c0U >> 6) + iVar6;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar6 = iVar6 + 5;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar6 = iVar6 + 5;
  }
  iVar6 = iVar6 + (uint)*(byte *)(param_1 + 0x90) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar10 = (long)*(char *)(uVar9 + 0x1f);
    if (lVar10 < 0) {
      lVar10 = *(long *)(uVar9 + 0x10);
    }
    iVar6 = (int)lVar10 + iVar6;
  }
  *(int *)(param_1 + 0x14) = iVar6;
  return;
}



/* Entry: 10b518c9c; end: 10b518c9f;  */

void FUN_10b518c9c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  func_0x000107c282d0(param_1 + 0x30,param_2 + 0x30);
  func_0x00010598fce8(param_1 + 0x48,param_2 + 0x48);
  func_0x000107c282d0(param_1 + 0x60,param_2 + 0x60);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      FUN_10b518f38(uVar2,*(undefined8 *)(param_2 + 0x78));
      *(ulong *)(param_1 + 0x78) = uVar2;
    }
    else {
      func_0x00010b518468();
    }
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)(param_2 + 0x88) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x8c) != 0) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_2 + 0x8c);
  }
  if (*(char *)(param_2 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 1;
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



/* Entry: 10b518ca0; end: 10b518dbb;  */

void FUN_10b518ca0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  func_0x000107c282d0(param_1 + 0x30,param_2 + 0x30);
  func_0x00010598fce8(param_1 + 0x48,param_2 + 0x48);
  func_0x000107c282d0(param_1 + 0x60,param_2 + 0x60);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      FUN_10b518f38(uVar2,*(undefined8 *)(param_2 + 0x78));
      *(ulong *)(param_1 + 0x78) = uVar2;
    }
    else {
      func_0x00010b518468();
    }
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)(param_2 + 0x88) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x8c) != 0) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_2 + 0x8c);
  }
  if (*(char *)(param_2 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 1;
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



/* Entry: 10b518dbc; end: 10b518e6b;  */

void FUN_10b518dbc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b51872c();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  func_0x000107c282d0(param_1 + 0x30,param_2 + 0x30);
  func_0x00010598fce8(param_1 + 0x48,param_2 + 0x48);
  func_0x000107c282d0(param_1 + 0x60,param_2 + 0x60);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      FUN_10b518f38(uVar2,*(undefined8 *)(param_2 + 0x78));
      *(ulong *)(param_1 + 0x78) = uVar2;
    }
    else {
      func_0x00010b518468();
    }
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)(param_2 + 0x88) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x8c) != 0) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_2 + 0x8c);
  }
  if (*(char *)(param_2 + 0x90) == '\x01') {
    *(undefined1 *)(param_1 + 0x90) = 1;
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



/* Entry: 10b518e6c; end: 10b518e7b;  */

void FUN_10b518e6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110cfa8a8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b518e7c; end: 10b518f37;  */

long FUN_10b518e7c(long param_1)

{
  func_0x000107c282dc(param_1 + 0x50);
  func_0x000107c282b4(param_1 + 0x38);
  func_0x000107c282dc(param_1 + 0x20);
  func_0x000107c282dc(param_1 + 8);
  return param_1;
}



/* Entry: 10b518f38; end: 10b518fa7;  */

undefined8 * FUN_10b518f38(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cfa8a8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x00010b518468();
  return puVar1;
}



/* Entry: 10b518fa8; end: 10b51903f;  */

ulong * FUN_10b518fa8(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 10b519040; end: 10b519063;  */

undefined8 FUN_10b519040(undefined8 param_1)

{
  func_0x00010b519afc();
  return param_1;
}



/* Entry: 10b519064; end: 10b519067;  */

undefined8 FUN_10b519064(undefined8 param_1)

{
  func_0x00010b519afc();
  return param_1;
}



/* Entry: 10b519068; end: 10b51907b;  */

void FUN_10b519068(void)

{
  FUN_10b519040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51907c; end: 10b51909b;  */

undefined ** FUN_10b51907c(void)

{
  return &PTR_DAT_110cfab28;
}



/* Entry: 10b51909c; end: 10b51910f;  */

long * FUN_10b51909c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b519aac();
  if ((int)param_1[2] != 0) {
    func_0x00010b519ae4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    param_4 = unaff_x19;
    func_0x00010598f43c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  return param_4;
}



/* Entry: 10b519110; end: 10b51917f;  */

ulong FUN_10b519110(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b519180; end: 10b5191d3;  */

void FUN_10b519180(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10b519040();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b5191d4; end: 10b519207;  */

long FUN_10b5191d4(long param_1)

{
  func_0x00010b519afc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b519180(param_1);
  }
  return param_1;
}



/* Entry: 10b519208; end: 10b51920b;  */

long FUN_10b519208(long param_1)

{
  func_0x00010b519afc();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b519180(param_1);
  }
  return param_1;
}



/* Entry: 10b51920c; end: 10b51921f;  */

void FUN_10b51920c(void)

{
  FUN_10b5191d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b519220; end: 10b51922b;  */

undefined ** FUN_10b519220(void)

{
  return &PTR_DAT_110cfab78;
}



/* Entry: 10b51922c; end: 10b519367;  */

void FUN_10b51922c(long param_1)

{
  ulong *puVar1;
  
  FUN_10b519180();
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



/* Entry: 10b519368; end: 10b51944f;  */

void FUN_10b519368(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b519180(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if (iVar2 == 2) {
      if (iVar3 == 2) {
        ppuVar1 = *(undefined ***)(param_2 + 0x10);
        if (*(int *)(param_2 + 0x1c) != 2) {
          ppuVar1 = &PTR_PTR_113384bd8;
        }
        func_0x00010b51900c(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      }
      else {
        FUN_10b519a04(uVar4,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar4;
      }
    }
    else if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    }
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



/* Entry: 10b519450; end: 10b5194e3;  */

undefined8 * FUN_10b519450(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfaae8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b519898(param_1 + 2,param_2,param_3 + 0x10);
  FUN_10b519898(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_3 + 0x48);
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 10b5194e4; end: 10b51950f;  */

long FUN_10b5194e4(long param_1)

{
  func_0x00010b519afc();
  FUN_10b5198f4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b519510; end: 10b519513;  */

long FUN_10b519510(long param_1)

{
  func_0x00010b519afc();
  FUN_10b5198f4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b519514; end: 10b519527;  */

void FUN_10b519514(void)

{
  FUN_10b5194e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b519528; end: 10b519533;  */

undefined ** FUN_10b519528(void)

{
  return &PTR_DAT_110cfabc8;
}



/* Entry: 10b519534; end: 10b51957b;  */

void FUN_10b519534(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5199f0(param_1 + 0x10);
  FUN_10b5199f0(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
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



/* Entry: 10b51957c; end: 10b51968f;  */

long * FUN_10b51957c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  func_0x00010b519aac();
  plVar7 = param_1;
  if ((char)param_1[9] == '\x01') {
    func_0x00010b519af0();
    plVar7 = (long *)(ulong)*(byte *)(unaff_x20 + 0x48);
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280a8(plVar7,uVar2);
    param_4 = plVar7;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b519af0();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    puVar3 = (undefined8 *)0x11;
    func_0x000107c280a8(0x11,plVar7);
    param_4 = puVar3 + 1;
    *puVar3 = uVar2;
  }
  iVar9 = *(int *)(unaff_x20 + 0x18);
  for (iVar8 = 0; iVar9 != iVar8; iVar8 = iVar8 + 1) {
    func_0x00010b519a84();
    param_4 = (long *)0x3;
    func_0x00010b519b04();
  }
  iVar9 = *(int *)(unaff_x20 + 0x30);
  for (iVar8 = 0; iVar9 != iVar8; iVar8 = iVar8 + 1) {
    func_0x00010b519a84();
    param_4 = (long *)0x4;
    func_0x00010b519b04();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar8 = (int)uVar5;
        uVar1 = iVar8 - iVar9;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar8);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 10b519690; end: 10b519753;  */

void FUN_10b519690(long param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar4 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar5 = lVar4 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    uVar3 = *puVar1;
    FUN_10b519754();
    lVar4 = uVar3 + lVar4;
    puVar1 = puVar1 + 1;
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  lVar4 = lVar4 + *(int *)(param_1 + 0x30);
  iVar2 = (int)lVar4;
  puVar1 = (ulong *)(param_1 + 0x28);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar5 = (long)*(int *)(param_1 + 0x30) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    uVar3 = *puVar1;
    FUN_10b519754();
    lVar4 = uVar3 + lVar4;
    iVar2 = (int)lVar4;
    puVar1 = puVar1 + 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar2 = iVar2 + 9;
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x48) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  return;
}



/* Entry: 10b519754; end: 10b51976f;  */

long FUN_10b519754(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5192e0();
  func_0x00010b519abc();
  return param_1 + extraout_x8;
}



/* Entry: 10b519770; end: 10b519773;  */

void FUN_10b519770(long param_1,long param_2)

{
  FUN_10b5197e8(param_1 + 0x10,param_2 + 0x10);
  FUN_10b5197e8(param_1 + 0x28,param_2 + 0x28);
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
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



/* Entry: 10b519774; end: 10b5197e7;  */

void FUN_10b519774(long param_1,long param_2)

{
  FUN_10b5197e8(param_1 + 0x10,param_2 + 0x10);
  FUN_10b5197e8(param_1 + 0x28,param_2 + 0x28);
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
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



/* Entry: 10b5197e8; end: 10b5197f7;  */

void FUN_10b5197e8(long *param_1,long param_2)

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



/* Entry: 10b5197f8; end: 10b51987f;  */

void FUN_10b5197f8(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  FUN_10b519534();
  FUN_10b5197e8(param_1 + 0x10,param_2 + 0x10);
  FUN_10b5197e8(param_1 + 0x28,param_2 + 0x28);
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
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



/* Entry: 10b519880; end: 10b519897;  */

void FUN_10b519880(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b519ad4();
  }
  else {
    func_0x00010b519adc();
  }
  *puVar1 = &PTR_FUN_110cfaa48;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b519898; end: 10b5198c3;  */

undefined8 * FUN_10b519898(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5197e8(param_1,param_3);
  return param_1;
}



/* Entry: 10b5198c4; end: 10b5198f3;  */

long * FUN_10b5198c4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5198f4; end: 10b5199ef;  */

long * FUN_10b5198f4(long *param_1)

{
  FUN_10b5198c4(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5199f0; end: 10b519a03;  */

void FUN_10b5199f0(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b519a04; end: 10b519a6f;  */

undefined8 * FUN_10b519a04(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b519ad4();
  }
  else {
    func_0x00010b519adc();
  }
  *puVar1 = &PTR_FUN_110cfaa48;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  func_0x00010b51900c();
  return puVar1;
}



/* Entry: 10b519a70; end: 10b519b0b;  */

void FUN_10b519a70(void)

{
  return;
}



/* Entry: 10b519b0c; end: 10b519b73;  */

undefined8 * FUN_10b519b0c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfac80;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10b519b74; end: 10b519ba3;  */

long FUN_10b519b74(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b519ba4; end: 10b519ba7;  */

long FUN_10b519ba4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b519ba8; end: 10b519bbb;  */

void FUN_10b519ba8(void)

{
  FUN_10b519b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b519bbc; end: 10b519bc7;  */

undefined ** FUN_10b519bbc(void)

{
  return &PTR_DAT_110cfad10;
}



/* Entry: 10b519bc8; end: 10b519c03;  */

void FUN_10b519bc8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b519c04; end: 10b519cfb;  */

long * FUN_10b519c04(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b519c70;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b519c70;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f776a08);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_10b519c70:
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  plVar3 = plVar2;
  if (*(int *)(param_1 + 0x1c) != 0) {
    plVar3 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x1c),plVar2);
  }
  plVar2 = plVar3;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar2 = param_3;
    func_0x000107c282c4(param_3,*(long *)(param_1 + 0x20),plVar3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar2 + (long)iVar9;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar7);
    }
    _memcpy(plVar2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar5);
  }
  return plVar2;
}



/* Entry: 10b519cfc; end: 10b519d9b;  */

void FUN_10b519cfc(long param_1)

{
  int iVar1;
  ulong uVar2;
  int extraout_w8;
  int extraout_w8_00;
  int iVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b519d34;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b519d34:
    iVar1 = 0;
    goto LAB_10b519d38;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b519d38:
  iVar3 = -9;
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x00010b51a1a4();
    iVar3 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010b51a1a4();
    iVar3 = extraout_w8_00;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * iVar3 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar4 + iVar1;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}



/* Entry: 10b519d9c; end: 10b519d9f;  */

void FUN_10b519d9c(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
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



/* Entry: 10b519da0; end: 10b519e67;  */

void FUN_10b519da0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
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



/* Entry: 10b519e68; end: 10b519e87;  */

undefined1  [16] FUN_10b519e68(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x28);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar7;
}



/* Entry: 10b519e88; end: 10b519eb7;  */

long FUN_10b519e88(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b51a108(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b519eb8; end: 10b519ebb;  */

long FUN_10b519eb8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b51a108(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b519ebc; end: 10b519ecf;  */

void FUN_10b519ebc(void)

{
  FUN_10b519e88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b519ed0; end: 10b519edb;  */

undefined ** FUN_10b519ed0(void)

{
  return &PTR_DAT_110cfad68;
}



/* Entry: 10b519edc; end: 10b519f23;  */

void FUN_10b519edc(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b519f24; end: 10b51a09b;  */

long * FUN_10b519f24(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x28),param_2,param_3);
    param_2 = plVar2;
  }
  plVar2 = param_2;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x28),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar2 + (long)iVar7;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar6);
    }
    _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  return plVar2;
}



/* Entry: 10b51a09c; end: 10b51a0f7;  */

void FUN_10b51a09c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10b51a0f8; end: 10b51a107;  */

void FUN_10b51a0f8(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfac80;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b51a108; end: 10b51a137;  */

long * FUN_10b51a108(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b51a138; end: 10b51a183;  */

void FUN_10b51a138(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110cfacd0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b51a184; end: 10b51a247;  */

void FUN_10b51a184(void)

{
  return;
}



/* Entry: 10b51a248; end: 10b51a26f;  */

long FUN_10b51a248(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b51a270; end: 10b51a2ab;  */

undefined8 FUN_10b51a270(undefined8 param_1)

{
  func_0x00010b51a5ac();
  func_0x00010b51a1c8();
  return param_1;
}



/* Entry: 10b51a2ac; end: 10b51a2af;  */

long FUN_10b51a2ac(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b51a2b0; end: 10b51a2c3;  */

void FUN_10b51a2b0(void)

{
  FUN_10b51a248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51a2c4; end: 10b51a2eb;  */

undefined ** FUN_10b51a2c4(void)

{
  return &PTR_DAT_110cfae38;
}



/* Entry: 10b51a2ec; end: 10b51a42f;  */

long * FUN_10b51a2ec(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if (*(char *)((long)param_1 + 0x1c) == '\x01') {
    plVar2 = param_1;
    FUN_10b51a58c();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b51a5a0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (param_1[2] != 0) {
    FUN_10b51a58c();
    lVar5 = param_1[2];
    plVar2 = (long *)0x11;
    func_0x000107c280a8(0x11,plVar1);
    param_2 = plVar2 + 1;
    *plVar2 = lVar5;
  }
  if ((int)param_1[3] != 0) {
    plVar2 = param_3;
    func_0x000107c282ac(param_3,(int)param_1[3],param_2);
    param_2 = plVar2;
  }
  if ((int)param_1[4] != 0) {
    plVar2 = param_3;
    func_0x0001088bdd44(param_3,(int)param_1[4],param_2);
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    plVar2 = param_3;
    func_0x0001088b96ec(param_3,*(int *)((long)param_1 + 0x24),param_2);
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x1d) == '\x01') {
    FUN_10b51a58c();
    plVar1 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b51a5a0();
    param_2 = plVar1;
  }
  if (param_1[5] != 0) {
    FUN_10b51a58c();
    lVar5 = param_1[5];
    plVar2 = (long *)0x39;
    func_0x000107c280a8(0x39,plVar1);
    param_2 = plVar2 + 1;
    *plVar2 = lVar5;
  }
  if ((param_1[1] & 1U) != 0) {
    uVar4 = param_1[1] & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar5 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar5 = uVar4 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar5,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b51a430; end: 10b51a4e3;  */

long FUN_10b51a430(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x1c) * 2 + (ulong)*(byte *)(param_1 + 0x1d) * 2;
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x30) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b51a4e4; end: 10b51a51b;  */

void FUN_10b51a4e4(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b51a2d0();
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
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



/* Entry: 10b51a51c; end: 10b51a53f;  */

undefined1  [16] FUN_10b51a51c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x30);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x30);
  return auVar6;
}



/* Entry: 10b51a540; end: 10b51a58b;  */

void FUN_10b51a540(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  *puVar1 = &PTR_FUN_110cfadf8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b51a58c; end: 10b51a5f7;  */

ulong * FUN_10b51a58c(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b51a5f8; end: 10b51a61b;  */

undefined8 FUN_10b51a5f8(undefined8 param_1)

{
  func_0x00010b51b6d4();
  return param_1;
}



/* Entry: 10b51a61c; end: 10b51a61f;  */

undefined8 FUN_10b51a61c(undefined8 param_1)

{
  func_0x00010b51b6d4();
  return param_1;
}



/* Entry: 10b51a620; end: 10b51a633;  */

void FUN_10b51a620(void)

{
  FUN_10b51a5f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51a634; end: 10b51a653;  */

undefined ** FUN_10b51a634(void)

{
  return &PTR_DAT_110cfb040;
}



/* Entry: 10b51a654; end: 10b51a6e7;  */

long * FUN_10b51a654(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b51b6c4();
  plVar2 = param_1;
  if ((char)param_1[2] == '\x01') {
    func_0x00010b51b680();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b51b6b0();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010b51b680();
    func_0x00010b51b708();
    func_0x00010b51b6b0();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b51b6fc();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b51a6e8; end: 10b51a71f;  */

long FUN_10b51a6e8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10)) & 3) * 2;
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



/* Entry: 10b51a720; end: 10b51a74b;  */

long FUN_10b51a720(long param_1)

{
  func_0x00010b51b6d4();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51a74c; end: 10b51a74f;  */

long FUN_10b51a74c(long param_1)

{
  func_0x00010b51b6d4();
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}


