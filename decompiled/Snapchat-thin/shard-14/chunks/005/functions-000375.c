/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4c33dc; end: 10b4c3453;  */

void FUN_10b4c33dc(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = 0;
  uStack_40 = 1;
  uStack_30 = 4;
  uStack_20 = 0;
  uStack_28 = param_1;
  FUN_10b4c3474(&uStack_40);
  return;
}



/* Entry: 10b4c3454; end: 10b4c3473;  */

ulong FUN_10b4c3454(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + 7U & 0xfffffffffffffff8;
}



/* Entry: 10b4c3474; end: 10b4c34ff;  */

long FUN_10b4c3474(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b4c3498();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 10b4c3500; end: 10b4c358f;  */

void FUN_10b4c3500(int *param_1,long param_2,int *param_3)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  uVar2 = param_2 - (long)param_1 >> 5;
  while (piVar3 = param_1, uVar2 != 0) {
    uVar4 = uVar2 >> 1;
    piVar1 = piVar3 + uVar4 * 8;
    uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    param_1 = piVar1 + 8;
    if (*param_3 <= *piVar1) {
      uVar2 = uVar4;
      param_1 = piVar3;
    }
  }
  return;
}



/* Entry: 10b4c3590; end: 10b4c35d3;  */

ulong * FUN_10b4c3590(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_28;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  puVar1 = &uStack_28;
  uStack_28 = uVar2;
  FUN_10b4c35d4();
  *param_1 = (ulong)puVar1 | 1;
  *puVar1 = uVar2;
  return puVar1 + 1;
}



/* Entry: 10b4c35d4; end: 10b4c3613;  */

void FUN_10b4c35d4(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    FUN_10b4d7e6c(param_1,0x20,8,FUN_10b4c3614);
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10b4c3614; end: 10b4c361b;  */

void FUN_10b4c3614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 8);
  return;
}



/* Entry: 10b4c361c; end: 10b4c37db;  */

void FUN_10b4c361c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x00010b4c53b8();
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x00010b4c520c();
    *param_1 = 0;
    param_1[1] = lVar1;
  }
  return;
}



/* Entry: 10b4c37dc; end: 10b4c3897;  */

void FUN_10b4c37dc(ulong *param_1)

{
  long lVar1;
  
  lVar1 = (long)(int)param_1[1] + -1;
  *(int *)(param_1 + 1) = (int)lVar1;
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + lVar1 * 8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b4c3808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))();
  return;
}



/* Entry: 10b4c3898; end: 10b4c3937;  */

void FUN_10b4c3898(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uStack_28;
  
  plVar1 = (long *)*param_1;
  if (*(char *)((long)plVar1 + 0xb) == '\0') {
    lVar2 = param_1[1];
    func_0x00010b4c34c4();
    lVar2 = plVar1[(int)lVar2 + 1U & 0xff];
    while (*param_1 = lVar2, *(char *)(lVar2 + 0xb) == '\0') {
      func_0x00010b4c343c();
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar5 = param_1[1];
    lVar2 = *param_1;
    uVar3 = *(uint *)(param_1 + 1);
    while (uVar3 == *(byte *)((long)plVar1 + 10)) {
      plVar4 = (long *)*plVar1;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar2;
        uStack_28 = (undefined4)lVar5;
        *(undefined4 *)(param_1 + 1) = uStack_28;
        return;
      }
      uVar3 = (uint)*(byte *)(plVar1 + 1);
      *(uint *)(param_1 + 1) = uVar3;
      *param_1 = (long)plVar4;
      plVar1 = plVar4;
    }
  }
  return;
}



/* Entry: 10b4c3938; end: 10b4c39cf;  */

ulong FUN_10b4c3938(ulong param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 in_stack_00000008;
  
  func_0x000107c398f0();
  uVar3 = param_1;
  while ((uVar3 < param_2 && (func_0x00010b4c5174(), uVar3 = param_1, param_1 != 0))) {
    uVar1 = param_3[2];
    (*(code *)param_3[1])(uVar1,in_stack_00000008);
    if ((int)uVar1 == 0) {
      param_1 = (ulong)(uint)param_3[4];
      puVar2 = (ulong *)param_3[3];
      if ((*puVar2 & 1) == 0) {
        FUN_10b4c3590();
      }
      else {
        puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
      }
      FUN_10b4d2160(param_1,(long)(int)in_stack_00000008,puVar2);
    }
    else {
      param_1 = *param_3;
      func_0x000107c2845c(param_1,in_stack_00000008);
    }
  }
  return uVar3;
}



/* Entry: 10b4c39d0; end: 10b4c3a43;  */

long FUN_10b4c39d0(ushort *param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  
  cVar3 = (char)*param_1;
  uVar1 = ((int)cVar3 & (uint)*param_1) + (int)cVar3;
  uVar5 = (ulong)(uVar1 >> 1);
  if ((uVar1 >> 0xf & 1) == 0) {
    bVar4 = (uint)(int)cVar3 <= uVar1;
  }
  else {
    uVar6 = 0xd;
    do {
      if (uVar6 == 0x45) {
        return 0;
      }
      param_1 = param_1 + 1;
      cVar3 = (char)*param_1;
      uVar1 = ((int)cVar3 & (uint)*param_1) + (int)cVar3;
      uVar5 = ((ulong)uVar1 - 2 << (uVar6 & 0x3f)) + uVar5;
      uVar6 = uVar6 + 0xe;
    } while ((uVar1 >> 0xf & 1) != 0);
    bVar4 = (uint)(int)cVar3 <= uVar1;
  }
  lVar2 = 1;
  if (!bVar4) {
    lVar2 = 2;
  }
  *param_2 = uVar5;
  return (long)param_1 + lVar2;
}



/* Entry: 10b4c3a44; end: 10b4c3b37;  */

void FUN_10b4c3a44(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    uVar2 = ((uint)bVar1 + (uint)param_1[1] * 0x80) - 0x80;
    if ((char)param_1[1] < '\0') {
      FUN_10b4d222c();
      *param_2 = uVar2;
    }
    else {
      *param_2 = uVar2;
    }
  }
  else {
    *param_2 = (uint)bVar1;
  }
  return;
}



/* Entry: 10b4c3b38; end: 10b4c3b57;  */

undefined1  [16] FUN_10b4c3b38(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    uVar1 = 0;
    param_2 = *(long *)(param_1 + 8);
    param_3 = (ulong)*(byte *)(param_2 + 10);
  }
  else {
    uVar1 = param_3 & 0xffffffff00000000;
  }
  auVar2._8_8_ = uVar1 | param_3 & 0xffffffff;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 10b4c3b58; end: 10b4c3b7f;  */

void FUN_10b4c3b58(void)

{
  FUN_10b4c3b80();
  FUN_10b4c3bdc();
  return;
}



/* Entry: 10b4c3b80; end: 10b4c3bdb;  */

undefined1  [16] FUN_10b4c3b80(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  func_0x000107c398c8();
  while( true ) {
    uVar2 = *param_1;
    uVar1 = uVar2;
    func_0x00010b4c3c10();
    if (*(char *)(uVar2 + 0xb) != '\0') break;
    uVar2 = uVar1;
    func_0x00010b4c53b0();
    param_1 = (ulong *)(uVar2 + (uVar1 & 0xff) * 8);
  }
  auVar3._8_8_ = uVar1 & 0xffffffff;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 10b4c3bdc; end: 10b4c3c5b;  */

undefined1  [16] FUN_10b4c3bdc(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  do {
    if ((uint)uVar1 != (uint)*(byte *)((long)param_1 + 10)) goto LAB_10b4c3c00;
    uVar1 = (ulong)*(byte *)(param_1 + 1);
    param_1 = (long *)*param_1;
  } while (*(char *)((long)param_1 + 0xb) == '\0');
  param_1 = (long *)0x0;
LAB_10b4c3c00:
  auVar2._8_8_ = param_2 & 0xffffffff00000000 | uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b4c3c5c; end: 10b4c3c7f;  */

void FUN_10b4c3c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b4c2ab8(param_3);
  func_0x00010b4c5884();
  return;
}



/* Entry: 10b4c3c80; end: 10b4c3cb3;  */

long FUN_10b4c3c80(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    FUN_10b4c3cb4(param_1);
  }
  return param_1;
}



/* Entry: 10b4c3cb4; end: 10b4c3cc7;  */

void FUN_10b4c3cb4(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4c3cc8; end: 10b4c3d43;  */

void FUN_10b4c3cc8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010b4c3cfc();
  FUN_10b4c3b38(param_1,uVar1,param_2 & 0xffffffff);
  return;
}



/* Entry: 10b4c3d44; end: 10b4c3de3;  */

void FUN_10b4c3d44(undefined8 *param_1,undefined8 *param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 uVar7;
  
  if (param_2[2] == 0) {
    uVar1 = 1;
    FUN_10b4c3de4();
    *param_2 = uVar1;
    param_2[1] = uVar1;
  }
  puVar2 = param_2;
  piVar5 = param_3;
  FUN_10b4c3b80();
  puVar3 = puVar2;
  piVar6 = piVar5;
  FUN_10b4c3bdc();
  uVar4 = SUB84(piVar6,0);
  if ((puVar3 == (undefined8 *)0x0) ||
     (*param_3 < *(int *)((long)puVar3 + (((long)piVar6 << 0x20) >> 0x1b) + 0x10))) {
    FUN_10b4c3e18(param_2,puVar2,piVar5,param_4);
    uVar4 = SUB84(puVar2,0);
    uVar7 = 1;
    puVar3 = param_2;
  }
  else {
    uVar7 = 0;
  }
  *param_1 = puVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined1 *)(param_1 + 2) = uVar7;
  return;
}



/* Entry: 10b4c3de4; end: 10b4c3e17;  */

void FUN_10b4c3de4(uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  FUN_10b4c33dc();
  FUN_10b4c3fd0();
  *(ulong *)uVar1 = uVar1;
  *(undefined2 *)(uVar1 + 8) = 0;
  *(undefined1 *)(uVar1 + 10) = 0;
  *(char *)(uVar1 + 0xb) = (char)param_1;
  return;
}



/* Entry: 10b4c3e18; end: 10b4c3fcf;  */

undefined1  [16]
FUN_10b4c3e18(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  uint uVar7;
  long lVar8;
  ulong extraout_x9;
  ulong uVar9;
  long extraout_x10;
  undefined8 *extraout_x11;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *in_stack_00000000;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  func_0x000107c398f0();
  in_stack_00000008 = (uint)param_3;
  in_stack_0000000c = (undefined4)((ulong)param_3 >> 0x20);
  bVar10 = *(byte *)((long)param_2 + 0xb);
  puVar4 = param_1;
  in_stack_00000000 = param_2;
  if (bVar10 == 0) {
    FUN_10b4c4210();
    in_stack_00000008 = in_stack_00000008 + 1;
    bVar10 = *(byte *)((long)in_stack_00000000 + 0xb);
    puVar4 = (undefined8 *)register0x00000008;
  }
  puVar5 = in_stack_00000000;
  uVar7 = 7;
  if (bVar10 != 0) {
    uVar7 = (uint)bVar10;
  }
  if (*(byte *)((long)in_stack_00000000 + 10) == uVar7) {
    if (uVar7 < 7) {
      uVar7 = (uVar7 & 0x7f) << 1;
      if (6 < uVar7) {
        uVar7 = 7;
      }
      puVar4 = (undefined8 *)(ulong)uVar7;
      FUN_10b4c3de4();
      bVar10 = *(byte *)((long)puVar5 + 10);
      for (lVar8 = 0x10; (ulong)bVar10 * -0x20 + lVar8 != 0x10; lVar8 = lVar8 + 0x20) {
        puVar1 = (undefined8 *)((long)puVar5 + lVar8);
        puVar2 = (undefined8 *)((long)puVar4 + lVar8);
        uVar11 = *puVar1;
        uVar13 = puVar1[3];
        uVar12 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar11;
        puVar2[3] = uVar13;
        puVar2[2] = uVar12;
      }
      *(undefined1 *)((long)puVar4 + 10) = *(undefined1 *)((long)puVar5 + 10);
      *(undefined1 *)((long)puVar5 + 10) = 0;
      in_stack_00000000 = puVar4;
      FUN_10b4c32e8();
      *param_1 = puVar4;
      param_1[1] = puVar4;
      puVar4 = puVar5;
    }
    else {
      puVar4 = param_1;
      FUN_10b4c3ff4();
    }
  }
  puVar5 = in_stack_00000000;
  uVar6 = (ulong)in_stack_00000008 & 0xff;
  bVar10 = *(byte *)((long)in_stack_00000000 + 10);
  uVar9 = uVar6;
  if ((in_stack_00000008 & 0xff) < (uint)bVar10) {
    func_0x00010b4c5864();
    puVar1 = extraout_x11;
    for (lVar8 = extraout_x10; lVar8 != 0; lVar8 = lVar8 + 0x20) {
      puVar1[1] = puVar1[-3];
      *puVar1 = puVar1[-4];
      puVar1[3] = puVar1[-1];
      puVar1[2] = puVar1[-2];
      puVar1 = puVar1 + -4;
    }
    bVar10 = *(byte *)((long)puVar5 + 10);
    uVar6 = extraout_x8;
    uVar9 = extraout_x9;
  }
  *(undefined4 *)(puVar5 + uVar9 * 4 + 2) = *param_4;
  uVar12 = *(undefined8 *)(param_4 + 4);
  uVar11 = *(undefined8 *)(param_4 + 2);
  puVar5[uVar9 * 4 + 5] = *(undefined8 *)(param_4 + 6);
  puVar5[uVar9 * 4 + 4] = uVar12;
  puVar5[uVar9 * 4 + 3] = uVar11;
  bVar10 = bVar10 + 1;
  *(byte *)((long)puVar5 + 10) = bVar10;
  if ((*(char *)((long)puVar5 + 0xb) == '\0') && (uVar7 = (int)uVar6 + 1, uVar7 < bVar10)) {
    while (uVar7 < bVar10) {
      func_0x00010b4c53b0();
      puVar1 = puVar4 + (byte)(bVar10 - 1);
      puVar4 = puVar5;
      func_0x00010b4c47c4(puVar5,bVar10,*puVar1);
      bVar10 = bVar10 - 1;
    }
    func_0x00010b4c5544();
  }
  param_1[2] = param_1[2] + 1;
  auVar3._8_4_ = in_stack_00000008;
  auVar3._0_8_ = in_stack_00000000;
  auVar3._12_4_ = in_stack_0000000c;
  return auVar3;
}



/* Entry: 10b4c3fd0; end: 10b4c3ff3;  */

void FUN_10b4c3fd0(long param_1)

{
  undefined1 uStack_11;
  
  func_0x000107c27d24(&uStack_11,param_1 + 7U >> 3);
  return;
}



/* Entry: 10b4c3ff4; end: 10b4c420f;  */

void FUN_10b4c3ff4(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  byte bVar6;
  int iVar7;
  ulong *unaff_x19;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  func_0x000107c398f0();
  func_0x000107c398c8();
  plVar5 = (long *)*param_2;
  lVar8 = *plVar5;
  if (plVar5 == (long *)*param_1) {
    lVar9 = 0;
    FUN_10b4c4590(0,lVar8);
    FUN_10b4c45d4();
    *unaff_x20 = lVar9;
    plVar5 = (long *)*unaff_x19;
LAB_10b4c4180:
    bVar3 = (char)plVar5[1] + 1;
    if (*(char *)((long)plVar5 + 0xb) == '\0') {
      plVar10 = (long *)(ulong)bVar3;
      FUN_10b4c4590(plVar10,lVar9);
      func_0x00010b4c55f4();
    }
    else {
      plVar10 = (long *)0x7;
      FUN_10b4c33dc();
      FUN_10b4c3fd0();
      *plVar10 = lVar9;
      *(byte *)(plVar10 + 1) = bVar3;
      *(undefined2 *)((long)plVar10 + 9) = 0;
      *(undefined1 *)((long)plVar10 + 0xb) = 7;
      func_0x00010b4c55f4();
      if (unaff_x20[1] == *unaff_x19) {
        unaff_x20[1] = (long)plVar10;
      }
    }
  }
  else {
    lVar9 = plVar5[1];
    if ((char)lVar9 != '\0') {
      func_0x00010b4c53b0();
      plVar10 = (long *)param_1[(byte)((char)lVar9 - 1)];
      bVar3 = *(byte *)((long)plVar10 + 10);
      if (bVar3 < 7) {
        uVar4 = (uint)((byte)(7 - bVar3) >> ((byte)unaff_x19[1] < 7));
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        plVar5 = (long *)*unaff_x19;
        if (uVar4 <= (byte)unaff_x19[1] || (uVar4 + bVar3 & 0xff) < 7) {
          FUN_10b4c42d0(plVar10,uVar4);
          iVar7 = (byte)unaff_x19[1] - uVar4;
          *(int *)(unaff_x19 + 1) = iVar7;
          if (-1 < iVar7) {
            return;
          }
          iVar7 = iVar7 + (uint)*(byte *)((long)plVar10 + 10) + 1;
          goto LAB_10b4c4200;
        }
      }
      else {
        plVar5 = (long *)*unaff_x19;
      }
    }
    bVar3 = *(byte *)(plVar5 + 1);
    bVar6 = *(byte *)(lVar8 + 10);
    if (bVar6 <= bVar3) {
LAB_10b4c4158:
      lVar9 = lVar8;
      if (bVar6 == 7) {
        FUN_10b4c3ff4();
        plVar5 = (long *)*unaff_x19;
        lVar9 = *plVar5;
      }
      goto LAB_10b4c4180;
    }
    func_0x00010b4c53b0();
    plVar10 = (long *)param_1[(ulong)bVar3 + 1];
    bVar3 = *(byte *)((long)plVar10 + 10);
    plVar5 = (long *)*unaff_x19;
    if (6 < bVar3) {
LAB_10b4c4154:
      bVar6 = *(byte *)(lVar8 + 10);
      goto LAB_10b4c4158;
    }
    uVar4 = (7 - bVar3 & 0xff) >> (0 < (int)(uint)unaff_x19[1]);
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    uVar2 = uVar4 + bVar3 & 0xff;
    bVar1 = (int)((uint)unaff_x19[1] & 0xff) <= (int)(*(byte *)((long)plVar5 + 10) - uVar4);
    if ((!bVar1 && 5 < uVar2) && (bVar1 || uVar2 != 6)) goto LAB_10b4c4154;
    func_0x00010b4c4424(plVar5,uVar4,plVar10);
  }
  if ((int)unaff_x19[1] <= (int)(uint)*(byte *)(*unaff_x19 + 10)) {
    return;
  }
  iVar7 = (int)unaff_x19[1] + ~(uint)*(byte *)(*unaff_x19 + 10);
LAB_10b4c4200:
  *(int *)(unaff_x19 + 1) = iVar7;
  *unaff_x19 = (ulong)plVar10;
  return;
}



/* Entry: 10b4c4210; end: 10b4c4237;  */

void FUN_10b4c4210(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iStack_28;
  
  if ((*(char *)(*param_1 + 0xb) != '\0') &&
     (lVar5 = param_1[1], *(int *)(param_1 + 1) = (int)lVar5 + -1, 0 < (int)lVar5)) {
    return;
  }
  plVar3 = (long *)*param_1;
  if (*(char *)((long)plVar3 + 0xb) == '\0') {
    bVar1 = *(byte *)(param_1 + 1);
    do {
      func_0x00010b4c34c4();
      plVar3 = (long *)plVar3[bVar1];
      *param_1 = (long)plVar3;
      bVar1 = *(byte *)((long)plVar3 + 10);
    } while (*(char *)((long)plVar3 + 0xb) == '\0');
    iStack_28 = bVar1 - 1;
LAB_10b4c42c4:
    *(int *)(param_1 + 1) = iStack_28;
  }
  else {
    lVar6 = param_1[1];
    lVar5 = *param_1;
    iVar2 = (int)param_1[1];
    while (iVar2 < 0) {
      plVar4 = (long *)*plVar3;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar5;
        iStack_28 = (int)lVar6;
        goto LAB_10b4c42c4;
      }
      iVar2 = *(byte *)(plVar3 + 1) - 1;
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = (long)plVar4;
      plVar3 = plVar4;
    }
  }
  return;
}



/* Entry: 10b4c4238; end: 10b4c42cf;  */

void FUN_10b4c4238(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iStack_28;
  
  plVar3 = (long *)*param_1;
  if (*(char *)((long)plVar3 + 0xb) == '\0') {
    bVar1 = *(byte *)(param_1 + 1);
    do {
      func_0x00010b4c34c4();
      plVar3 = (long *)plVar3[bVar1];
      *param_1 = (long)plVar3;
      bVar1 = *(byte *)((long)plVar3 + 10);
    } while (*(char *)((long)plVar3 + 0xb) == '\0');
    iStack_28 = bVar1 - 1;
LAB_10b4c42c4:
    *(int *)(param_1 + 1) = iStack_28;
  }
  else {
    lVar6 = param_1[1];
    lVar5 = *param_1;
    iVar2 = (int)param_1[1];
    while (iVar2 < 0) {
      plVar4 = (long *)*plVar3;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar5;
        iStack_28 = (int)lVar6;
        goto LAB_10b4c42c4;
      }
      iVar2 = *(byte *)(plVar3 + 1) - 1;
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = (long)plVar4;
      plVar3 = plVar4;
    }
  }
  return;
}



/* Entry: 10b4c42d0; end: 10b4c458f;  */

void FUN_10b4c42d0(long *param_1,uint param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar6 = (ulong)*(byte *)((long)param_1 + 10);
  lVar8 = *param_1 + (ulong)*(byte *)(param_1 + 1) * 0x20;
  lVar7 = *(long *)(lVar8 + 0x10);
  lVar13 = *(long *)(lVar8 + 0x28);
  lVar9 = *(long *)(lVar8 + 0x20);
  param_1[uVar6 * 4 + 3] = *(long *)(lVar8 + 0x18);
  param_1[uVar6 * 4 + 2] = lVar7;
  param_1[uVar6 * 4 + 5] = lVar13;
  param_1[uVar6 * 4 + 4] = lVar9;
  lVar7 = (ulong)param_2 * 0x20 + -0x20;
  lVar13 = param_3 + lVar7;
  uVar11 = (ulong)param_2;
  lVar8 = uVar6 * 0x20 + 0x30;
  lVar9 = 0x10;
  for (; lVar7 != 0; lVar7 = lVar7 + -0x20) {
    puVar2 = (undefined8 *)(param_3 + lVar9);
    puVar3 = (undefined8 *)((long)param_1 + lVar8);
    uVar12 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar12;
    puVar3[3] = uVar15;
    puVar3[2] = uVar14;
    lVar9 = lVar9 + 0x20;
    lVar8 = lVar8 + 0x20;
  }
  lVar8 = *param_1 + (ulong)*(byte *)(param_1 + 1) * 0x20;
  uVar12 = *(undefined8 *)(lVar13 + 0x10);
  uVar15 = *(undefined8 *)(lVar13 + 0x28);
  uVar14 = *(undefined8 *)(lVar13 + 0x20);
  *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar13 + 0x18);
  *(undefined8 *)(lVar8 + 0x10) = uVar12;
  *(undefined8 *)(lVar8 + 0x28) = uVar15;
  *(undefined8 *)(lVar8 + 0x20) = uVar14;
  lVar8 = 0x10;
  for (lVar9 = (ulong)*(byte *)(param_3 + 10) * 0x20 + uVar11 * -0x20; lVar9 != 0;
      lVar9 = lVar9 + -0x20) {
    puVar2 = (undefined8 *)(param_3 + uVar11 * 0x20 + lVar8);
    puVar3 = (undefined8 *)(param_3 + lVar8);
    uVar12 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar12;
    puVar3[3] = uVar15;
    puVar3[2] = uVar14;
    lVar8 = lVar8 + 0x20;
  }
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    plVar5 = param_1;
    uVar6 = 0;
    while (uVar11 != uVar6) {
      bVar4 = *(byte *)((long)param_1 + 10);
      func_0x00010b4c5604();
      plVar1 = plVar5 + uVar6;
      plVar5 = param_1;
      FUN_10b4c45d4(param_1,(uint)bVar4 + (int)(uVar6 + 1) & 0xff,*plVar1);
      uVar6 = uVar6 + 1;
    }
    for (uVar10 = 0; (int)(uVar10 & 0xff) <= (int)(*(byte *)(param_3 + 10) - param_2);
        uVar10 = uVar10 + 1) {
      func_0x00010b4c5604();
      func_0x00010b4c550c();
      FUN_10b4c4788(param_3);
    }
  }
  *(char *)((long)param_1 + 10) = *(char *)((long)param_1 + 10) + (char)param_2;
  *(char *)(param_3 + 10) = *(char *)(param_3 + 10) - (char)param_2;
  return;
}



/* Entry: 10b4c4590; end: 10b4c45d3;  */

undefined8 * FUN_10b4c4590(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010b4c3410();
  FUN_10b4c3fd0();
  *puVar1 = param_2;
  *(char *)(puVar1 + 1) = (char)param_1;
  *(undefined2 *)((long)puVar1 + 9) = 0;
  *(undefined1 *)((long)puVar1 + 0xb) = 0;
  FUN_10b4c4788();
  return puVar1;
}



/* Entry: 10b4c45d4; end: 10b4c45f3;  */

void FUN_10b4c45d4(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b4c58c0();
  func_0x00010b4c47c4();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 10b4c45f4; end: 10b4c4787;  */

void FUN_10b4c45f4(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong extraout_x8;
  long *extraout_x9;
  long *plVar8;
  long extraout_x10;
  long lVar9;
  undefined8 *extraout_x11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  func_0x00010b4c58c0();
  if (param_2 == 7) {
    bVar6 = 0;
  }
  else if (param_2 == 0) {
    bVar6 = *(char *)((long)unaff_x20 + 10) - 1;
  }
  else {
    bVar6 = *(byte *)((long)unaff_x20 + 10) >> 1;
  }
  *(byte *)(unaff_x19 + 10) = bVar6;
  bVar6 = *(char *)((long)unaff_x20 + 10) - bVar6;
  *(byte *)((long)unaff_x20 + 10) = bVar6;
  bVar5 = *(byte *)(unaff_x19 + 10);
  for (lVar9 = 0x10; (ulong)bVar5 * -0x20 + lVar9 != 0x10; lVar9 = lVar9 + 0x20) {
    puVar3 = (undefined8 *)((long)unaff_x20 + lVar9 + (ulong)bVar6 * 0x20);
    puVar4 = (undefined8 *)(unaff_x19 + lVar9);
    uVar10 = *puVar3;
    uVar14 = puVar3[3];
    uVar12 = puVar3[2];
    puVar4[1] = puVar3[1];
    *puVar4 = uVar10;
    puVar4[3] = uVar14;
    puVar4[2] = uVar12;
  }
  bVar6 = *(char *)((long)unaff_x20 + 10) - 1;
  *(byte *)((long)unaff_x20 + 10) = bVar6;
  lVar9 = *unaff_x20;
  uVar7 = (ulong)*(byte *)(unaff_x20 + 1);
  plVar8 = unaff_x20 + (ulong)bVar6 * 4 + 2;
  bVar6 = *(byte *)(lVar9 + 10);
  if (*(byte *)(unaff_x20 + 1) < bVar6) {
    func_0x00010b4c5864();
    puVar3 = extraout_x11;
    for (lVar2 = extraout_x10; lVar2 != 0; lVar2 = lVar2 + 0x20) {
      puVar3[1] = puVar3[-3];
      *puVar3 = puVar3[-4];
      puVar3[3] = puVar3[-1];
      puVar3[2] = puVar3[-2];
      puVar3 = puVar3 + -4;
    }
    bVar6 = *(byte *)(lVar9 + 10);
    uVar7 = extraout_x8;
    plVar8 = extraout_x9;
  }
  lVar2 = lVar9 + uVar7 * 0x20;
  lVar11 = *plVar8;
  lVar15 = plVar8[3];
  lVar13 = plVar8[2];
  *(long *)(lVar2 + 0x18) = plVar8[1];
  *(long *)(lVar2 + 0x10) = lVar11;
  *(long *)(lVar2 + 0x28) = lVar15;
  *(long *)(lVar2 + 0x20) = lVar13;
  bVar6 = bVar6 + 1;
  *(byte *)(lVar9 + 10) = bVar6;
  if ((*(char *)(lVar9 + 0xb) == '\0') && (uVar1 = (int)uVar7 + 1, uVar1 < bVar6)) {
    while (uVar1 < bVar6) {
      func_0x00010b4c53b0();
      puVar3 = (undefined8 *)(param_1 + (ulong)(byte)(bVar6 - 1) * 8);
      param_1 = lVar9;
      func_0x00010b4c47c4(lVar9,bVar6,*puVar3);
      bVar6 = bVar6 - 1;
    }
    func_0x00010b4c5544();
  }
  FUN_10b4c47e8(*unaff_x20,(char)unaff_x20[1] + '\x01');
  if (*(char *)((long)unaff_x20 + 0xb) == '\0') {
    for (bVar6 = 0; bVar6 <= *(byte *)(unaff_x19 + 10); bVar6 = bVar6 + 1) {
      func_0x00010b4c57a0();
      func_0x00010b4c5534();
      func_0x00010b4c4788();
    }
  }
  return;
}



/* Entry: 10b4c4788; end: 10b4c47e7;  */

long FUN_10b4c4788(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b4c5490(1,4);
  func_0x00010b4c3498();
  return param_1 + lVar1;
}



/* Entry: 10b4c47e8; end: 10b4c4817;  */

void FUN_10b4c47e8(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_10b4c4788();
  func_0x00010b4c5544();
  *(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8) = param_3;
  return;
}



/* Entry: 10b4c4818; end: 10b4c481b;  */

undefined8 FUN_10b4c4818(undefined8 param_1)

{
  FUN_10b4c32b0();
  return param_1;
}



/* Entry: 10b4c481c; end: 10b4c485f;  */

void FUN_10b4c481c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107c398c8();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      FUN_10b4c4210();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x00010b4c386c();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 10b4c4860; end: 10b4c4b2b;  */

void FUN_10b4c4860(long *param_1,long *param_2,long *param_3,ulong param_4,long *param_5,
                  uint param_6)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plStack_80;
  ulong uStack_78;
  long *plStack_70;
  uint uStack_68;
  
  uVar10 = (uint)param_4;
  if (param_5 == param_3) {
    if (*(char *)((long)param_5 + 0xb) != '\0') {
      lVar11 = (long)(int)(param_6 - uVar10);
      goto joined_r0x00010b4c499c;
    }
    if (param_6 != uVar10) goto LAB_10b4c48c0;
  }
  else {
LAB_10b4c48c0:
    if (*(char *)((long)param_3 + 0xb) == '\0') {
      plVar12 = param_3;
      func_0x00010b4c34c4();
      plVar12 = (long *)plVar12[(ulong)(uVar10 + 1) & 0xff];
      lVar11 = 1;
    }
    else {
      lVar11 = (long)(int)-uVar10;
      plVar12 = param_3;
    }
    while (*(char *)((long)plVar12 + 0xb) == '\0') {
      func_0x00010b4c343c();
    }
    uVar13 = (ulong)*(byte *)(plVar12 + 1);
    plVar12 = (long *)*plVar12;
    uVar7 = (ulong)(int)param_6;
    while( true ) {
      plVar4 = plVar12;
      func_0x00010b4c34c4();
      plVar4 = (long *)plVar4[uVar13 & 0xff];
      cVar3 = '\0';
      if (*(char *)((long)plVar4 + 0xb) == '\0') {
        while (cVar3 == '\0') {
          func_0x00010b4c343c();
          cVar3 = *(char *)((long)plVar4 + 0xb);
        }
        uVar13 = (ulong)*(byte *)(plVar4 + 1);
        plVar12 = (long *)*plVar4;
      }
      uVar6 = uVar7;
      if ((plVar4 == param_5) ||
         (uVar6 = (ulong)*(byte *)((long)plVar4 + 10), plVar12 == param_5 && uVar13 == uVar7))
      break;
      if (*(byte *)((long)plVar12 + 10) <= uVar13) {
        do {
          pbVar1 = (byte *)(plVar12 + 1);
          uVar13 = (ulong)*pbVar1;
          plVar12 = (long *)*plVar12;
          if (plVar12 == param_5 && uVar7 == uVar13) goto LAB_10b4c4998;
        } while (*(byte *)((long)plVar12 + 10) <= *pbVar1);
      }
      lVar11 = lVar11 + uVar6 + 1;
      uVar13 = uVar13 + 1;
    }
LAB_10b4c4998:
    lVar11 = uVar6 + lVar11;
joined_r0x00010b4c499c:
    if (lVar11 != 0) {
      uVar7 = param_2[2];
      uVar13 = uVar7 - lVar11;
      if (uVar13 == 0) {
        FUN_10b4c32b0(param_2);
        lVar8 = param_2[1];
        bVar2 = *(byte *)(lVar8 + 10);
        *param_1 = lVar11;
        param_1[1] = lVar8;
        *(uint *)(param_1 + 2) = (uint)bVar2;
        return;
      }
      if (param_5 == param_3) {
        uVar5 = uVar10 & 0xff;
        FUN_10b4c4c5c(param_3,uVar5,param_6 - uVar10 & 0xff);
        func_0x00010b4c54f8(param_2[2] - lVar11);
        *param_1 = lVar11;
        param_1[1] = (long)param_3;
        *(uint *)(param_1 + 2) = uVar5;
        return;
      }
      while (uVar6 = uVar7 - uVar13, uVar13 <= uVar7 && uVar6 != 0) {
        uVar10 = (uint)param_4;
        if (*(char *)((long)param_3 + 0xb) == '\0') {
          cVar3 = *(char *)((long)param_3 + 0xb);
          plStack_80 = param_3;
          uStack_78 = param_4;
          if (cVar3 == '\0') {
            FUN_10b4c4210(&plStack_80);
            lVar8 = (long)(param_4 << 0x20) >> 0x1b;
            lVar14 = plStack_80[(long)(int)uStack_78 * 4 + 2];
            lVar16 = plStack_80[(long)(int)uStack_78 * 4 + 5];
            lVar15 = plStack_80[(long)(int)uStack_78 * 4 + 4];
            *(long *)((long)param_3 + lVar8 + 0x18) = plStack_80[(long)(int)uStack_78 * 4 + 3];
            *(long *)((long)param_3 + lVar8 + 0x10) = lVar14;
            *(long *)((long)param_3 + lVar8 + 0x28) = lVar16;
            *(long *)((long)param_3 + lVar8 + 0x20) = lVar15;
            param_3 = plStack_80;
          }
          else if (((uint)*(byte *)((long)param_3 + 10) - (uVar10 + 1) & 0xff) != 0) {
            do {
              func_0x00010b4c5774();
            } while (extraout_x9 != 0);
          }
          *(char *)((long)param_3 + 10) = *(char *)((long)param_3 + 10) + -1;
          param_2[2] = param_2[2] + -1;
          plVar12 = param_2;
          plVar4 = plStack_80;
          FUN_10b4c4d2c(param_2,plStack_80,uStack_78);
          uStack_68 = (uint)plVar4;
          plStack_70 = plVar12;
          if (cVar3 == '\0') {
            func_0x00010b4c386c(&plStack_70);
          }
          uVar7 = (ulong)uStack_68;
          param_3 = plStack_70;
        }
        else {
          uVar9 = (ulong)(int)(*(byte *)((long)param_3 + 10) - uVar10);
          if (uVar6 <= uVar9) {
            uVar9 = uVar6;
          }
          uVar7 = (ulong)(uVar10 & 0xff);
          FUN_10b4c4c5c(param_3,uVar7,(uint)uVar9 & 0xff);
          func_0x00010b4c54f8(param_2[2] - (uVar9 & 0xff));
        }
        param_4 = param_4 & 0xffffffff00000000 | uVar7 & 0xffffffff;
        uVar7 = param_2[2];
      }
      *param_1 = lVar11;
      goto LAB_10b4c4b08;
    }
  }
  *param_1 = 0;
LAB_10b4c4b08:
  param_1[1] = (long)param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 10b4c4b2c; end: 10b4c4c0f;  */

void FUN_10b4c4b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte bStack_38;
  
  func_0x00010b4c4b94(&uStack_48);
  uVar1 = uStack_48;
  if ((bStack_38 & 1) == 0) {
    param_1[3] = uStack_40;
  }
  else {
    uVar2 = uStack_40;
    FUN_10b4c4c10(uStack_48,uStack_40,1);
    *(int *)(param_1 + 3) = (int)uVar2;
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_40;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10b4c4c10; end: 10b4c4c3b;  */

undefined1  [16] FUN_10b4c4c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10b4c481c(&uStack_20,param_3);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b4c4c3c; end: 10b4c4c5b;  */

undefined1  [16] FUN_10b4c4c3c(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    uVar1 = 0;
    param_2 = *(long *)(param_1 + 8);
    param_3 = (ulong)*(byte *)(param_2 + 10);
  }
  else {
    uVar1 = param_3 & 0xffffffff00000000;
  }
  auVar2._8_8_ = uVar1 | param_3 & 0xffffffff;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 10b4c4c5c; end: 10b4c4d2b;  */

void FUN_10b4c4c5c(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long extraout_x9;
  ulong uVar6;
  ulong uVar7;
  
  iVar4 = (int)param_2;
  bVar2 = *(byte *)(param_1 + 10);
  uVar6 = (ulong)(param_3 + iVar4);
  lVar5 = (ulong)bVar2 * 0x20 + (ulong)(param_3 + iVar4 & 0xff) * -0x20;
  lVar3 = param_1;
  while (lVar5 != 0) {
    func_0x00010b4c5774();
    iVar4 = (int)param_2;
    lVar5 = extraout_x9;
  }
  if (*(char *)(param_1 + 0xb) == '\0') {
    for (uVar7 = 0; param_3 != uVar7; uVar7 = uVar7 + 1) {
      func_0x00010b4c57a0();
      lVar3 = *(long *)(lVar3 + ((ulong)(uint)(iVar4 + 1 + (int)uVar7) & 0xff) * 8);
      FUN_10b4c32e8();
    }
    while( true ) {
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      if ((uint)bVar2 < (uVar1 & 0xff)) break;
      func_0x00010b4c57a0();
      func_0x00010b4c47c4(param_1,uVar1 - param_3 & 0xff,*(undefined8 *)(lVar3 + (uVar6 & 0xff) * 8)
                         );
      lVar3 = param_1;
      func_0x00010b4c4788();
    }
  }
  *(byte *)(param_1 + 10) = bVar2 - (char)param_3;
  return;
}



/* Entry: 10b4c4d2c; end: 10b4c4f4f;  */

void FUN_10b4c4d2c(undefined **param_1,undefined **param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  undefined **ppuVar6;
  uint uVar7;
  int extraout_w8;
  undefined4 extraout_w8_00;
  int extraout_w10;
  undefined4 extraout_w10_00;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  uint uVar11;
  bool bVar12;
  undefined8 unaff_x30;
  undefined **ppuStack_70;
  
  bVar12 = true;
  ppuVar6 = param_1;
  ppuVar8 = param_2;
  ppuStack_70 = param_2;
  uVar11 = param_3;
  uVar7 = param_3;
  while (ppuVar9 = (undefined **)*param_1, ppuVar8 != ppuVar9) {
    if (2 < *(byte *)((long)ppuVar8 + 10)) goto LAB_10b4c4f0c;
    puVar10 = *ppuVar8;
    cVar3 = *(char *)(ppuVar8 + 1);
    bVar4 = 0;
    if (cVar3 == '\0') {
LAB_10b4c4dbc:
      ppuVar9 = ppuVar8;
      if ((uint)bVar4 < (uint)(byte)puVar10[10]) {
        func_0x00010b4c5820();
        if (7 < (uint)*(byte *)((long)ppuVar8 + 10) + (uint)(byte)ppuVar6[bVar4 + 1][10] + 1) {
          bVar5 = 3 < (byte)ppuVar6[bVar4 + 1][10];
          if ((!bVar5) ||
             ((*(byte *)((long)ppuVar8 + 10) != 0 && (bVar5 = uVar11 != 0, (int)uVar11 < 1))))
          goto LAB_10b4c4e34;
          func_0x00010b4c566c();
          uVar2 = extraout_w8_00;
          if (bVar5) {
            uVar2 = extraout_w10_00;
          }
          ppuVar6 = ppuVar8;
          func_0x00010b4c42d0(ppuVar8,uVar2);
          goto LAB_10b4c4e98;
        }
        ppuVar6 = param_1;
        FUN_10b4c4f50(param_1,ppuVar8);
        bVar5 = true;
      }
      else {
LAB_10b4c4e34:
        cVar3 = *(char *)(ppuVar8 + 1);
        bVar5 = false;
        if (cVar3 != '\0') {
          func_0x00010b4c5820();
          ppuVar6 = (undefined **)ppuVar6[(byte)(cVar3 - 1)];
          if (3 < *(byte *)((long)ppuVar6 + 10)) {
            bVar4 = *(byte *)((long)ppuVar8 + 10);
            bVar5 = true;
            if ((bVar4 == 0) || (bVar5 = bVar4 <= uVar11, (int)uVar11 < (int)(uint)bVar4)) {
              func_0x00010b4c566c();
              iVar1 = extraout_w8;
              if (bVar5) {
                iVar1 = extraout_w10;
              }
              func_0x00010b4c4424();
              bVar5 = false;
              uVar11 = uVar11 + iVar1;
              goto LAB_10b4c4e9c;
            }
          }
LAB_10b4c4e98:
          bVar5 = false;
        }
      }
    }
    else {
      func_0x00010b4c5820();
      ppuVar9 = (undefined **)ppuVar6[(byte)(cVar3 - 1)];
      iVar1 = *(byte *)((long)ppuVar9 + 10) + 1;
      if (7 < iVar1 + (uint)*(byte *)((long)ppuVar8 + 10)) {
        bVar4 = *(byte *)(ppuVar8 + 1);
        goto LAB_10b4c4dbc;
      }
      uVar11 = iVar1 + uVar11;
      ppuVar6 = param_1;
      FUN_10b4c4f50(param_1,ppuVar9,ppuVar8);
      bVar5 = true;
    }
LAB_10b4c4e9c:
    if (bVar12) {
      param_2 = ppuVar9;
      ppuStack_70 = ppuVar9;
      param_3 = uVar11;
      uVar7 = uVar11;
    }
    if (!bVar5) goto LAB_10b4c4f0c;
    bVar12 = false;
    uVar11 = (uint)*(byte *)(ppuVar9 + 1);
    ppuVar8 = (undefined **)*ppuVar9;
  }
  if (*(char *)((long)ppuVar9 + 10) == '\0') {
    if (*(char *)((long)ppuVar9 + 0xb) == '\0') {
      ppuVar6 = ppuVar9;
      func_0x00010b4c343c();
      *ppuVar6 = *(undefined **)*ppuVar6;
    }
    else {
      ppuVar6 = &PTR_LOOP_110cf0bd0;
      param_1[1] = (undefined *)&PTR_LOOP_110cf0bd0;
    }
    *param_1 = (undefined *)ppuVar6;
    FUN_10b4c32e8(ppuVar9);
  }
  if (param_1[2] == (undefined *)0x0) {
    param_2 = (undefined **)param_1[1];
    uVar7 = (uint)*(byte *)((long)param_2 + 10);
  }
  else {
LAB_10b4c4f0c:
    if (param_3 == *(byte *)((long)param_2 + 10)) {
      uVar7 = param_3 - 1;
      func_0x00010b4c5688();
      param_2 = ppuStack_70;
    }
  }
  func_0x00010b4c538c(param_2,uVar7,unaff_x30);
  return;
}



/* Entry: 10b4c4f50; end: 10b4c5037;  */

void FUN_10b4c4f50(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = param_3;
  func_0x000107c398c8();
  uVar7 = (ulong)*(byte *)((long)param_2 + 10);
  lVar1 = *param_2 + (ulong)*(byte *)(param_2 + 1) * 0x20;
  lVar13 = *(long *)(lVar1 + 0x10);
  lVar12 = *(long *)(lVar1 + 0x28);
  lVar9 = *(long *)(lVar1 + 0x20);
  param_2[uVar7 * 4 + 3] = *(long *)(lVar1 + 0x18);
  param_2[uVar7 * 4 + 2] = lVar13;
  param_2[uVar7 * 4 + 5] = lVar12;
  param_2[uVar7 * 4 + 4] = lVar9;
  uVar8 = (ulong)*(byte *)(lVar5 + 10) << 5;
  lVar1 = uVar7 * 0x20 + 0x30;
  lVar9 = 0x10;
  uVar7 = (ulong)*(byte *)(lVar5 + 10);
  while (uVar7 != 0) {
    puVar2 = (undefined8 *)(param_3 + lVar9);
    puVar3 = (undefined8 *)((long)unaff_x19 + lVar1);
    uVar11 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar11;
    puVar3[3] = uVar15;
    puVar3[2] = uVar14;
    lVar9 = lVar9 + 0x20;
    lVar1 = lVar1 + 0x20;
    uVar8 = uVar8 - 0x20;
    uVar7 = uVar8;
  }
  cVar4 = *(char *)((long)unaff_x19 + 10);
  if (*(char *)((long)unaff_x19 + 0xb) == '\0') {
    for (bVar10 = 0; bVar6 = *(byte *)(param_3 + 10), bVar10 <= bVar6; bVar10 = bVar10 + 1) {
      func_0x00010b4c53b0();
      func_0x00010b4c550c();
      func_0x00010b4c5544();
    }
    cVar4 = *(char *)((long)unaff_x19 + 10);
  }
  else {
    bVar6 = *(byte *)(param_3 + 10);
  }
  *(byte *)((long)unaff_x19 + 10) = bVar6 + cVar4 + '\x01';
  *(undefined1 *)(param_3 + 10) = 0;
  FUN_10b4c4c5c(*unaff_x19,*(undefined1 *)(unaff_x19 + 1),1);
  if (*(long *)(unaff_x20 + 8) == param_3) {
    *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  }
  return;
}



/* Entry: 10b4c5038; end: 10b4c58cb;  */

void FUN_10b4c5038(void)

{
  return;
}



/* Entry: 10b4c58cc; end: 10b4c5963;  */

void FUN_10b4c58cc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uStack_48 = 0;
  puVar2 = param_1 + param_2 * 3;
  uStack_58 = param_3;
  uStack_50 = param_4;
  FUN_10b4c5964(param_1,puVar2,&uStack_58,0x10b4c5990);
  if (param_1 != puVar2) {
    uVar1 = *param_1;
    func_0x000107c27944(uVar1,param_1[1],param_3,param_4);
    if ((int)uVar1 != 0) {
      *param_5 = *(undefined4 *)(param_1 + 2);
    }
  }
  return;
}



/* Entry: 10b4c5964; end: 10b4c59b7;  */

void FUN_10b4c5964(void)

{
  func_0x00010b4c5b28();
  return;
}



/* Entry: 10b4c59b8; end: 10b4c5a3b;  */

ulong FUN_10b4c59b8(long param_1,int *param_2,ulong param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  
  uVar2 = param_3;
  piVar4 = param_2;
  while (piVar3 = piVar4, uVar2 != 0) {
    uVar5 = uVar2 >> 1;
    iVar1 = piVar3[uVar5];
    iVar6 = param_4;
    if (iVar1 != -1) {
      iVar6 = *(int *)(param_1 + (long)iVar1 * 0x18 + 0x10);
    }
    uVar2 = uVar2 + ~uVar5;
    piVar4 = piVar3 + uVar5 + 1;
    if (param_4 <= iVar6) {
      uVar2 = uVar5;
      piVar4 = piVar3;
    }
  }
  if ((piVar3 != param_2 + param_3) && (*(int *)(param_1 + (long)*piVar3 * 0x18 + 0x10) == param_4))
  {
    return (ulong)((long)piVar3 - (long)param_2) >> 2;
  }
  return 0xffffffff;
}



/* Entry: 10b4c5a3c; end: 10b4c5a9f;  */

undefined8 FUN_10b4c5a3c(long param_1,int *param_2,long param_3,long param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    func_0x000107c27958(param_4,param_1 + (long)*param_2 * 0x18);
    func_0x000107c302b8();
    param_4 = param_4 + 0x18;
    param_2 = param_2 + 1;
  }
  return 1;
}



/* Entry: 10b4c5aa0; end: 10b4c5b3f;  */

uint FUN_10b4c5aa0(uint param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = *param_2;
  uVar5 = (long)(int)param_1 - (long)(short)uVar4;
  if (uVar5 < uVar4 >> 0x10) {
    uVar4 = 1;
  }
  else {
    uVar2 = param_2[1];
    uVar5 = uVar5 - (uVar4 >> 0x10);
    if (uVar5 < (ushort)uVar2) {
      uVar4 = param_2[(uVar5 >> 5) + 2] >> (ulong)((uint)uVar5 & 0x1f) & 1;
    }
    else {
      uVar5 = 0;
      do {
        if (uVar2 >> 0x10 <= uVar5) {
          return 0;
        }
        lVar3 = uVar5 + 2;
        lVar1 = 1;
        if ((int)param_2[(ulong)(uVar2 >> 5 & 0x7ff) + lVar3] <= (int)param_1) {
          lVar1 = 2;
        }
        uVar5 = lVar1 + uVar5 * 2;
        uVar4 = 1;
      } while (param_2[(ulong)(uVar2 >> 5 & 0x7ff) + lVar3] != param_1);
    }
  }
  return uVar4;
}



/* Entry: 10b4c5b40; end: 10b4c5bc3;  */

long FUN_10b4c5b40(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  while (lVar1 = param_1, param_3 != 0) {
    uVar4 = param_3 >> 1;
    lVar3 = lVar1 + uVar4 * 0x18;
    lVar2 = lVar3;
    (*(code *)*param_4)(lVar3,param_2);
    param_3 = param_3 + (param_3 >> 1 ^ 0xffffffffffffffff);
    param_1 = lVar3 + 0x18;
    if ((int)lVar2 == 0) {
      param_3 = uVar4;
      param_1 = lVar1;
    }
  }
  return lVar1;
}



/* Entry: 10b4c5bc4; end: 10b4c5c83;  */

undefined **
FUN_10b4c5bc4(long param_1,undefined **param_2,long param_3,uint param_4,ushort *param_5,
             uint param_6)

{
  undefined **ppuVar1;
  ulong *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  if (param_2 == (undefined **)0x0) {
    param_2 = &PTR_FUN_110cf0be0;
  }
  else {
    uVar5 = (ulong)*param_5;
    if (uVar5 != 0) {
      *(uint *)(param_1 + uVar5) = *(uint *)(param_1 + uVar5) | param_6;
    }
    if ((param_4 != 0) && ((param_4 & 7) != 4)) {
      if ((ulong)param_5[1] == 0) {
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          FUN_10b4c3590();
        }
        ppuVar3 = (undefined **)(ulong)param_4;
        FUN_10b4d242c(ppuVar3,&stack0xffffffffffffffe8,param_2,param_3);
        return ppuVar3;
      }
      ppuVar4 = (undefined **)(ulong)param_4;
      uStack_48 = *(undefined8 *)(param_5 + 0x10);
      ppuVar3 = (undefined **)(param_1 + (ulong)param_5[1]);
      puVar2 = (ulong *)(param_1 + 8);
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      ppuVar1 = ppuVar3;
      FUN_10b4c12d0(ppuVar3,param_4 & 7,param_4 >> 3,&uStack_48,&uStack_80,&uStack_49);
      if (((ulong)ppuVar1 & 1) == 0) {
        if ((*puVar2 & 1) == 0) {
          FUN_10b4c3590(puVar2);
        }
        else {
          puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
        }
        FUN_10b4d2404(ppuVar4,puVar2,param_2,param_3);
      }
      else {
        FUN_10b4c134c(ppuVar3,param_4 >> 3,uStack_49,&uStack_80,puVar2,param_2,param_3);
        ppuVar4 = ppuVar3;
      }
      return ppuVar4;
    }
    *(uint *)(param_3 + 0x50) = param_4 - 1;
  }
  return param_2;
}



/* Entry: 10b4c5c84; end: 10b4c5d9b;  */

/* WARNING: Removing unreachable block (ram,0x00010b4c5cbc) */

undefined1  [16] FUN_10b4c5c84(long param_1)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  
  pcVar1 = (char *)((ulong)*(uint *)(param_1 + 0x18) + param_1 +
                   (ulong)*(ushort *)(param_1 + 0x16) * 8);
  auVar2._8_8_ = (long)*pcVar1;
  auVar2._0_8_ = pcVar1 + ((ulong)(*(ushort *)(param_1 + 0x14) + 8) & 0x3fff8);
  return auVar2;
}



/* Entry: 10b4c5d9c; end: 10b4c5e7b;  */

ulong FUN_10b4c5d9c(ulong param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  undefined1 in_ZR;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  
  func_0x00010b4cf0f8();
  if ((bool)in_ZR) {
    if (*param_5 != 0) {
      func_0x000107c399b0();
      func_0x00010b4cea6c();
    }
    uVar4 = *(ulong *)(unaff_x21 + (param_4 >> 0x30));
    if (uVar4 == 0) {
      func_0x000107c39a1c();
      func_0x00010b4cf0c4();
      if ((uVar4 & 1) != 0) {
        func_0x00010b4ce8e8();
      }
      func_0x000107c399cc();
      *(ulong *)(unaff_x21 + (param_4 >> 0x30)) = param_1;
      uVar4 = param_1;
    }
    lVar3 = unaff_x19;
    func_0x00010055e218();
    uVar2 = 0;
    if (lVar3 != 0) {
      func_0x00010055e2f0(uVar4,lVar3);
      *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x19 + 0x58) + 1;
      func_0x000100064534();
      uVar2 = uVar4;
      if ((int)unaff_x19 == 0) {
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  func_0x00010b4cea10();
  func_0x000100064c34();
  uVar4 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar4 = (uVar4 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            if (*param_5 != 0) {
              func_0x000107c39bb4();
            }
            return 0;
          }
          func_0x000107c39ba4();
          uVar4 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar4 = (uVar4 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar4 = uVar4 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar4 = uVar4 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  uVar2 = unaff_x20;
  func_0x000100064d5c(unaff_x20,uVar4 >> 3 & 0x1fffffff);
  if (uVar2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(uVar2 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}



/* Entry: 10b4c5e7c; end: 10b4c5fd7;  */

byte * FUN_10b4c5e7c(undefined8 param_1,byte *param_2,undefined8 param_3,ulong param_4,
                    short *param_5)

{
  byte bVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  byte *pbVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  long unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  func_0x00010b4cf0f8();
  if ((bool)in_ZR) {
    bVar1 = *unaff_x20;
    if (*param_5 != 0) {
      func_0x000107c399b0();
      func_0x00010b4cea6c();
    }
    pbVar2 = *(byte **)(unaff_x21 + (param_4 >> 0x30));
    if (pbVar2 == (byte *)0x0) {
      func_0x000107c39a1c();
      func_0x00010b4cf0c4();
      if (((ulong)param_2 & 1) != 0) {
        func_0x00010b4ce8e8();
      }
      func_0x000107c399cc();
      *(byte **)(unaff_x21 + (param_4 >> 0x30)) = pbVar2;
    }
    func_0x00010b4ce8a0();
    *(undefined4 *)(unaff_x19 + 0x58) = extraout_w8;
    if (in_NG == in_OV) {
      func_0x00010b4ce39c();
      func_0x000107c3032c();
      func_0x00010b4ce3ac(CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x58) >> 0x20) + -1,
                                   (int)*(undefined8 *)(unaff_x19 + 0x58) + 1));
      if (extraout_w8_00 != bVar1) {
        pbVar2 = (byte *)0x0;
      }
    }
    else {
      pbVar2 = (byte *)0x0;
    }
    return pbVar2;
  }
  func_0x00010b4cea10();
  func_0x000100064c34();
  uVar3 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar3 = (uVar3 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            if (*param_5 != 0) {
              func_0x000107c39bb4();
            }
            return (byte *)0x0;
          }
          func_0x000107c39ba4();
          uVar3 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar3 = (uVar3 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar3 = uVar3 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar3 = uVar3 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar2 = unaff_x20;
  func_0x000100064d5c(unaff_x20,uVar3 >> 3 & 0x1fffffff);
  if (pbVar2 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(pbVar2 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar2;
}



/* Entry: 10b4c5fd8; end: 10b4c6343;  */

undefined2 *
FUN_10b4c5fd8(undefined2 *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined2 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_w8;
  uint extraout_w8_00;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  uint extraout_w9;
  long extraout_x9;
  long unaff_x19;
  byte *unaff_x21;
  ulong uVar5;
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_00000040;
  
  func_0x000107c39b14();
  func_0x000107c39b70();
  cVar2 = '\0';
  cVar3 = '\0';
  if ((param_4 & 0xff) != 0) {
    func_0x00010b4ced64();
    func_0x000100064c34();
    uVar5 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar1 = param_2[1];
      if ((char)bVar1 < '\0') {
        uVar5 = (uVar5 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
        bVar1 = param_2[2];
        if ((char)bVar1 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x000100064e38(param_1);
              if (*param_5 != 0) {
                func_0x000107c39bb4();
              }
              return (undefined2 *)0x0;
            }
            func_0x000107c39ba4();
            uVar5 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar5 = (uVar5 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar5 = uVar5 >> 0x32 | (ulong)bVar1 << 0xe;
        }
      }
      else {
        uVar5 = uVar5 & 0x7f | (ulong)bVar1 << 7;
      }
    }
    puVar4 = in_stack_00000040;
    func_0x000100064d5c(in_stack_00000040,uVar5 >> 3 & 0x1fffffff);
    if (puVar4 == (undefined2 *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000040 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)(ushort)puVar4[5] & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar4;
  }
  bVar1 = *unaff_x21;
  puVar4 = param_1;
  if (*param_5 != 0) {
    func_0x000107c399b0();
    *(uint *)((long)param_1 + extraout_x8_00) =
         *(uint *)((long)param_1 + extraout_x8_00) | extraout_w9;
  }
  func_0x000107c39a1c();
  if (*(long *)((long)param_1 + (param_4 >> 0x30)) == 0) {
    puVar4 = *(undefined2 **)(*(long *)(extraout_x8_01 + extraout_x9 * 8) + 0x20);
    if ((*(ulong *)(param_1 + 4) & 1) != 0) {
      func_0x00010b4ce8e8();
    }
    func_0x000107c399cc();
    *(undefined2 **)((long)param_1 + (param_4 >> 0x30)) = puVar4;
  }
  func_0x00010b4ce8a0();
  *(undefined4 *)(unaff_x19 + 0x58) = extraout_w8;
  if (cVar2 == cVar3) {
    func_0x00010b4cef70(unaff_x21 + 1);
    do {
      func_0x000107c39a50();
      if ((((ulong)puVar4 & 1) != 0) ||
         (func_0x000107c39958(*in_stack_00000008), in_stack_00000008 = puVar4,
         puVar4 == (undefined2 *)0x0)) break;
    } while (*(int *)(unaff_x19 + 0x50) == 0);
    if ((unaff_x21[-0x2f] & 1) != 0) {
      func_0x00010b4ce550(*(undefined8 *)(unaff_x21 + -0x10));
      in_stack_00000008 = puVar4;
    }
    func_0x00010b4ce3ac(CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x58) >> 0x20) + -1,
                                 (int)*(undefined8 *)(unaff_x19 + 0x58) + 1));
    if (extraout_w8_00 != bVar1) {
      in_stack_00000008 = (undefined2 *)0x0;
    }
  }
  else {
    in_stack_00000008 = (undefined2 *)0x0;
  }
  return in_stack_00000008;
}



/* Entry: 10b4c6344; end: 10b4c6447;  */

byte * FUN_10b4c6344(byte *param_1,char *param_2,undefined8 param_3,ulong param_4,short *param_5,
                    undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_w8;
  byte *unaff_x20;
  byte *unaff_x22;
  long unaff_x23;
  uint uVar5;
  
  func_0x00010b4cdf54();
  if ((param_4 & 0xff) == 0) {
    bVar2 = *unaff_x22;
    func_0x000107c39a2c();
    while( true ) {
      func_0x00010b4ce840();
      iVar1 = *(int *)(unaff_x23 + 0x58);
      *(int *)(unaff_x23 + 0x58) = iVar1 + -1;
      if (iVar1 < 1) break;
      *(int *)(unaff_x23 + 0x5c) = *(int *)(unaff_x23 + 0x5c) + 1;
      func_0x000107c3032c();
      func_0x00010b4cef40();
      uVar5 = (uint)bVar2;
      bVar3 = extraout_w8 == uVar5;
      if (extraout_w8 != uVar5 || param_1 == (byte *)0x0) break;
      func_0x00010b4ceb2c();
      if (bVar3) {
        if (*(short *)unaff_x20 != 0) {
          func_0x000107c39990();
        }
        func_0x00010b4cf2f8();
        return unaff_x22;
      }
      if (*unaff_x22 != uVar5) {
        func_0x000107c398fc(*(undefined2 *)unaff_x22);
        func_0x00010b4cdf90();
        func_0x00010b4cf2f8();
                    /* WARNING: Could not recover jumptable at 0x00010b4c63f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
    func_0x00010b4ce184();
    func_0x00010b4cf2f8();
LAB_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (byte *)0x0;
  }
  func_0x00010b4cde74();
  func_0x00010b4cf2f8();
  func_0x000100064c34();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x000100064e38(param_1);
      goto LAB_10b4c5d10;
    }
    func_0x000107c39ba4();
  }
  pbVar4 = unaff_x20;
  func_0x000100064d5c();
  if (pbVar4 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(pbVar4 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar4;
}



/* Entry: 10b4c6448; end: 10b4c656b;  */

ushort * FUN_10b4c6448(ushort *param_1,char *param_2,undefined8 param_3,ulong param_4,short *param_5
                      ,undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  ushort *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_w8;
  ushort *unaff_x20;
  ushort *unaff_x22;
  long unaff_x23;
  
  func_0x00010b4cdf54();
  if ((param_4 & 0xffff) == 0) {
    func_0x000107c39a2c();
    uVar2 = *unaff_x22;
    while( true ) {
      func_0x00010b4ce840();
      iVar1 = *(int *)(unaff_x23 + 0x58);
      *(int *)(unaff_x23 + 0x58) = iVar1 + -1;
      if (iVar1 < 1) break;
      *(int *)(unaff_x23 + 0x5c) = *(int *)(unaff_x23 + 0x5c) + 1;
      func_0x000107c3032c();
      func_0x00010b4cef40();
      bVar4 = extraout_w8 != (uint)uVar2 + (int)(char)uVar2 >> 1;
      bVar3 = !bVar4;
      if (bVar4 || param_1 == (ushort *)0x0) break;
      func_0x00010b4ceb2c();
      if (bVar3) {
        if (*unaff_x20 != 0) {
          func_0x000107c39990();
        }
        func_0x00010b4ce8d0();
        return unaff_x22;
      }
      if (*unaff_x22 != uVar2) {
        func_0x00010b4cdde8();
        func_0x00010b4ce8d0();
                    /* WARNING: Could not recover jumptable at 0x00010b4c6508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
    func_0x00010b4ce184();
    func_0x00010b4ce8d0();
LAB_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (ushort *)0x0;
  }
  func_0x00010b4cde74();
  func_0x00010b4ce8d0();
  func_0x000100064c34();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x000100064e38(param_1);
      goto LAB_10b4c5d10;
    }
    func_0x000107c39ba4();
  }
  puVar5 = unaff_x20;
  func_0x000100064d5c();
  if (puVar5 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)puVar5[5] & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar5;
}



/* Entry: 10b4c656c; end: 10b4c669f;  */

short * FUN_10b4c656c(short *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte *pbVar1;
  short sVar2;
  byte bVar3;
  undefined1 uVar4;
  short *psVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x20;
  long unaff_x22;
  ulong uVar6;
  short *unaff_x25;
  code *UNRECOVERED_JUMPTABLE_00;
  short *psStack0000000000000018;
  short *in_stack_00000060;
  
  func_0x000107c39b38();
  func_0x000107c399b4();
  if ((param_4 & 0xffff) == 0) {
    sVar2 = *unaff_x25;
    func_0x000107c39a2c();
    func_0x000107c39ba0();
    while( true ) {
      func_0x000107c39aa0();
      psVar5 = param_1;
      func_0x000107c39a58();
      if ((unaff_x25 + 1 == (short *)0x0) || (uVar4 = 1, *(int *)(unaff_x22 + 0x58) < 1)) break;
      func_0x000107c399b8();
      func_0x000107c39b28();
      psStack0000000000000018 = unaff_x25 + 1;
      while (func_0x000107c39b80(), ((ulong)psVar5 & 1) == 0) {
        func_0x000107c399d4(*psStack0000000000000018);
        psVar5 = param_1;
        func_0x000107c39a74();
        psStack0000000000000018 = psVar5;
        if ((psVar5 == (short *)0x0) || (*(int *)(unaff_x22 + 0x50) != 0)) break;
      }
      param_1 = psVar5;
      pbVar1 = (byte *)((long)unaff_x25 + -0x2d);
      unaff_x25 = psStack0000000000000018;
      if ((*pbVar1 & 1) != 0) {
        func_0x00010b4cec54();
        unaff_x25 = param_1;
      }
      func_0x000107c39ae4();
      if ((((ulong)param_1 & 1) == 0) || (unaff_x25 == (short *)0x0)) break;
      func_0x000107c39b50();
      if ((bool)uVar4) {
        if (*unaff_x20 != 0) {
          func_0x000107c39c08();
        }
        return unaff_x25;
      }
      if (*unaff_x25 != sVar2) {
        func_0x00010b4cde8c();
        func_0x000107c399d8();
                    /* WARNING: Could not recover jumptable at 0x0001000647d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
LAB_10b4c5d10:
    if (*unaff_x20 != 0) {
      func_0x000107c39bb4();
    }
    return (short *)0x0;
  }
  func_0x00010b4ce014();
  func_0x000100064c34();
  uVar6 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar3 = param_2[1];
    if ((char)bVar3 < '\0') {
      uVar6 = (uVar6 & 0x7f) << 0x32 | (ulong)bVar3 << 0x39;
      bVar3 = param_2[2];
      if ((char)bVar3 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            unaff_x20 = param_5;
            goto LAB_10b4c5d10;
          }
          func_0x000107c39ba4();
          uVar6 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar6 = (uVar6 >> 7 | (long)(char)bVar3 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar6 = uVar6 >> 0x32 | (ulong)bVar3 << 0xe;
      }
    }
    else {
      uVar6 = uVar6 & 0x7f | (ulong)bVar3 << 7;
    }
  }
  psVar5 = in_stack_00000060;
  func_0x000100064d5c(in_stack_00000060,uVar6 >> 3 & 0x1fffffff);
  if (psVar5 == (short *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000060 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)(ushort)psVar5[5] & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return psVar5;
}



/* Entry: 10b4c66a0; end: 10b4c6997;  */

byte * FUN_10b4c66a0(byte *param_1,char *param_2,undefined8 param_3,ulong param_4,short *param_5,
                    undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_w8;
  long extraout_x8;
  short *psVar5;
  long extraout_x9;
  byte *unaff_x20;
  long unaff_x22;
  byte *unaff_x25;
  undefined8 unaff_x30;
  byte *pbStack_78;
  
  func_0x000107c399b4();
  if ((param_4 & 0xff) == 0) {
    func_0x000107c39a2c();
    psVar5 = *(short **)(extraout_x8 + extraout_x9 * 8);
    bVar2 = *unaff_x25;
    while( true ) {
      func_0x000107c39aa0();
      iVar1 = *(int *)(unaff_x22 + 0x58);
      *(int *)(unaff_x22 + 0x58) = iVar1 + -1;
      if (iVar1 < 1) break;
      pbVar4 = param_1;
      func_0x00010b4cf2cc(unaff_x25 + 1);
      while (func_0x000107c39b80(), ((ulong)pbVar4 & 1) == 0) {
        param_5 = psVar5;
        func_0x000107c399d4(*(undefined2 *)pbStack_78);
        pbVar4 = param_1;
        func_0x000107c39a74();
        pbStack_78 = pbVar4;
        if ((pbVar4 == (byte *)0x0) || (*(int *)(unaff_x22 + 0x50) != 0)) break;
      }
      param_1 = pbVar4;
      unaff_x25 = pbStack_78;
      if ((*(byte *)((long)psVar5 + 9) & 1) != 0) {
        func_0x00010b4cec40();
        unaff_x25 = param_1;
      }
      func_0x00010b4cefe8();
      bVar3 = bVar2 <= extraout_w8;
      if ((extraout_w8 != bVar2) || (unaff_x25 == (byte *)0x0)) break;
      func_0x000107c39b50();
      if (bVar3) {
        if (*(short *)unaff_x20 != 0) {
          func_0x000107c39990();
        }
        func_0x00010b4ce7dc(unaff_x25,unaff_x30);
        return unaff_x25;
      }
      if (*unaff_x25 != bVar2) {
        func_0x000107c398fc(*(undefined2 *)unaff_x25);
        func_0x00010b4ce174();
        func_0x00010b4ce7dc();
                    /* WARNING: Could not recover jumptable at 0x00010b4c67d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
    func_0x00010b4ce184();
    func_0x00010b4ce7dc();
LAB_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (byte *)0x0;
  }
  func_0x00010b4cdffc();
  func_0x00010b4ce7dc();
  func_0x000100064c34();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x000100064e38(param_1);
      goto LAB_10b4c5d10;
    }
    func_0x000107c39ba4();
  }
  pbVar4 = unaff_x20;
  func_0x000100064d5c();
  if (pbVar4 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(pbVar4 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar4;
}



/* Entry: 10b4c6998; end: 10b4c6a3f;  */

ushort * FUN_10b4c6998(ushort *param_1,char *param_2,undefined8 *param_3,ulong param_4,
                      short *param_5)

{
  ushort *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort *unaff_x20;
  
  if ((param_4 & 0xffff) != 0) {
    func_0x000100064c34();
    if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0'))
    {
      if (param_2[4] < '\0') {
        func_0x000100064e38(param_1);
        if (*param_5 != 0) {
          func_0x000107c39bb4();
        }
        return (ushort *)0x0;
      }
      func_0x000107c39ba4();
    }
    puVar1 = unaff_x20;
    func_0x000100064d5c();
    if (puVar1 == (ushort *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)puVar1[5] & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar1;
  }
  *(undefined4 *)((long)param_1 + (param_4 >> 0x30)) = *(undefined4 *)(param_2 + 2);
  puVar1 = (ushort *)(param_2 + 6);
  if ((ushort *)*param_3 <= puVar1) {
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000644b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + ((ulong)*puVar1 & (ulong)*(byte *)(param_5 + 4)) + 0x1c))();
  return param_1;
}



/* Entry: 10b4c6a40; end: 10b4c6c57;  */

char * FUN_10b4c6a40(undefined8 param_1,byte *param_2,undefined8 param_3,ulong param_4,
                    short *param_5)

{
  char cVar1;
  byte bVar2;
  undefined1 in_ZR;
  char *pcVar3;
  char *pcVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  char *unaff_x20;
  short *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  char *in_stack_00000030;
  
  func_0x000107c39bc4();
  func_0x00010b4ce96c();
  func_0x00010b4cf1d0();
  if (!(bool)in_ZR) {
    func_0x00010b4ce520();
    func_0x000100064c34();
    uVar5 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar2 = param_2[1];
      if ((char)bVar2 < '\0') {
        uVar5 = (uVar5 & 0x7f) << 0x32 | (ulong)bVar2 << 0x39;
        bVar2 = param_2[2];
        if ((char)bVar2 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x000100064e38(param_1);
              if (*param_5 != 0) {
                func_0x000107c39bb4();
              }
              return (char *)0x0;
            }
            func_0x000107c39ba4();
            uVar5 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar5 = (uVar5 >> 7 | (long)(char)bVar2 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar5 = uVar5 >> 0x32 | (ulong)bVar2 << 0xe;
        }
      }
      else {
        uVar5 = uVar5 & 0x7f | (ulong)bVar2 << 7;
      }
    }
    pcVar3 = in_stack_00000030;
    func_0x000100064d5c(in_stack_00000030,uVar5 >> 3 & 0x1fffffff);
    if (pcVar3 == (char *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000030 + 0x30);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(pcVar3 + 10) & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return pcVar3;
  }
  pcVar3 = (char *)(unaff_x22 + (param_4 >> 0x30));
  cVar1 = *unaff_x20;
  do {
    pcVar4 = pcVar3;
    func_0x000107c29100(pcVar3,*(undefined4 *)(unaff_x20 + 1));
    unaff_x20 = unaff_x20 + 5;
    if ((char *)*unaff_x23 <= unaff_x20) {
      if (*unaff_x21 != 0) {
        func_0x00010b4ce718();
      }
      return unaff_x20;
    }
  } while (*unaff_x20 == cVar1);
  func_0x000107c39948(*(undefined2 *)unaff_x20);
  func_0x00010b4ce520();
                    /* WARNING: Could not recover jumptable at 0x00010029f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return pcVar4;
}



/* Entry: 10b4c6c58; end: 10b4c6d97;  */

long FUN_10b4c6c58(long param_1,byte *param_2,undefined8 param_3,char param_4,short *param_5)

{
  byte bVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ulong uVar3;
  
  if (param_4 == '\0') {
    func_0x00010b4cf2e0(param_2 + 1);
    if (extraout_x8_00 != 0) {
      func_0x000107c39bb4();
    }
    func_0x000107c39a8c();
    func_0x00010b4ce794();
    FUN_10b4cbfb4();
    return param_1;
  }
  func_0x000100064c34(param_1,param_2,param_3);
  uVar3 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar3 = (uVar3 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            if (*param_5 != 0) {
              func_0x000107c39bb4();
            }
            return 0;
          }
          func_0x000107c39ba4();
          uVar3 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar3 = (uVar3 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar3 = uVar3 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar3 = uVar3 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  lVar2 = unaff_x20;
  func_0x000100064d5c(unaff_x20,uVar3 >> 3 & 0x1fffffff);
  if (lVar2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(lVar2 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return lVar2;
}



/* Entry: 10b4c6d98; end: 10b4c6f97;  */

ushort * FUN_10b4c6d98(ushort *param_1,char *param_2,undefined8 *param_3,ulong param_4,
                      short *param_5)

{
  undefined1 uVar1;
  ushort *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ushort *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  ushort *unaff_x20;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar1 = 0;
  if ((param_4 & 0xffff) == 0) {
    func_0x000107c39c24();
    if (-1 < extraout_x9) {
      puVar2 = (ushort *)(param_2 + 3);
      *(long *)((long)param_1 + (param_4 >> 0x30)) = extraout_x9;
      if ((ushort *)*param_3 <= puVar2) {
        if (*param_5 != 0) {
          func_0x000107c39bb4();
        }
        return puVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001000644b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_5 + ((ulong)*puVar2 & (ulong)*(byte *)(param_5 + 4)) + 0x1c))();
      return param_1;
    }
    puVar2 = extraout_x8;
    func_0x00010b4ce128();
    func_0x00010b4ce48c();
    func_0x00010b4ce644();
    if (puVar2 != (ushort *)0x0) {
      func_0x00010b4cecc0();
      *(undefined8 *)((long)param_1 + extraout_x9_00) = extraout_x8_00;
      func_0x00010b4cec88();
      if ((bool)uVar1) {
        if (*param_5 != 0) {
          func_0x000107c39bb4();
        }
        return puVar2;
      }
      func_0x00010b4cdf6c();
                    /* WARNING: Could not recover jumptable at 0x00010b4ce47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return param_1;
    }
LAB_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (ushort *)0x0;
  }
  func_0x000100064c34();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x000100064e38(param_1);
      goto LAB_10b4c5d10;
    }
    func_0x000107c39ba4();
  }
  puVar2 = unaff_x20;
  func_0x000100064d5c();
  if (puVar2 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)puVar2[5] & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar2;
}



/* Entry: 10b4c6f98; end: 10b4c7713;  */

char * FUN_10b4c6f98(char *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  char *pcVar4;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar5;
  ulong extraout_x8;
  uint uVar6;
  uint uVar7;
  short *unaff_x20;
  ulong uVar8;
  char *unaff_x24;
  code *UNRECOVERED_JUMPTABLE_00;
  char *in_stack_00000030;
  
  func_0x000107c39bc4();
  func_0x000107c399e8();
  func_0x000107c39b68();
  if ((param_4 & 0xff) != 0) {
    func_0x000107c39954();
    func_0x000100064c34();
    uVar8 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar3 = param_2[1];
      if ((char)bVar3 < '\0') {
        uVar8 = (uVar8 & 0x7f) << 0x32 | (ulong)bVar3 << 0x39;
        bVar3 = param_2[2];
        if ((char)bVar3 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x000100064e38(param_1);
LAB_10b4c5d10:
              if (*param_5 != 0) {
                func_0x000107c39bb4();
              }
              return (char *)0x0;
            }
            func_0x000107c39ba4();
            uVar8 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar8 = (uVar8 >> 7 | (long)(char)bVar3 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar8 = uVar8 >> 0x32 | (ulong)bVar3 << 0xe;
        }
      }
      else {
        uVar8 = uVar8 & 0x7f | (ulong)bVar3 << 7;
      }
    }
    pcVar4 = in_stack_00000030;
    func_0x000100064d5c(in_stack_00000030,uVar8 >> 3 & 0x1fffffff);
    if (pcVar4 == (char *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000030 + 0x30);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(pcVar4 + 10) & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return pcVar4;
  }
  cVar1 = *unaff_x24;
  do {
    bVar3 = unaff_x24[1];
    uVar2 = 0;
    if (1 < bVar3) {
      if ((char)bVar3 < '\0') {
        uVar6 = (uint)unaff_x24[2];
        uVar5 = uVar6 | bVar3 & 0x7f;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 & 0x7f | bVar3 & 0x7f;
          uVar7 = (uint)unaff_x24[3];
          uVar5 = uVar7 | uVar6;
          if ((int)uVar7 < 0) {
            uVar6 = uVar7 & 0x7f | uVar6;
            uVar7 = (uint)unaff_x24[4];
            uVar5 = uVar7 | uVar6;
            if ((int)uVar7 < 0) {
              uVar6 = uVar7 & 0x7f | uVar6;
              uVar7 = (uint)unaff_x24[5];
              uVar5 = uVar7 | uVar6;
              if ((int)uVar7 < 0) {
                uVar6 = uVar7 & 0x7f | uVar6;
                uVar7 = (uint)unaff_x24[6];
                uVar5 = uVar7 | uVar6;
                if ((int)uVar7 < 0) {
                  uVar6 = uVar7 & 0x7f | uVar6;
                  uVar7 = (uint)unaff_x24[7];
                  uVar5 = uVar7 | uVar6;
                  if ((int)uVar7 < 0) {
                    uVar6 = uVar7 & 0x7f | uVar6;
                    uVar7 = (uint)unaff_x24[8];
                    uVar5 = uVar7 | uVar6;
                    if ((int)uVar7 < 0) {
                      uVar6 = uVar7 & 0x7f | uVar6;
                      uVar7 = (uint)unaff_x24[9];
                      uVar5 = uVar7 | uVar6;
                      if ((int)uVar7 < 0) {
                        if (unaff_x24[10] < 0) {
                          func_0x00010b4ce184();
                          goto LAB_10b4c5d10;
                        }
                        uVar5 = (int)unaff_x24[10] & 0xffffff81U | uVar7 & 0x7f | uVar6;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar5 = 1;
      }
      bVar3 = uVar5 != 0;
      uVar2 = 1;
    }
    func_0x00010b4ced04(bVar3);
    func_0x000107c39af4();
    if ((bool)uVar2) {
      if (*unaff_x20 != 0) {
        func_0x000107c39990();
      }
      return unaff_x24;
    }
    if (*unaff_x24 != cVar1) {
      func_0x000107c398fc(*(undefined2 *)unaff_x24);
      func_0x00010b4ce0ec();
                    /* WARNING: Could not recover jumptable at 0x00010029f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return param_1;
    }
  } while( true );
}



/* Entry: 10b4c7714; end: 10b4c7f8f;  */

ushort * FUN_10b4c7714(ushort *param_1,ushort *param_2,undefined8 param_3,ulong param_4,
                      short *param_5)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 uVar5;
  ushort *puVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  ulong uVar7;
  uint unaff_w19;
  ushort *unaff_x21;
  undefined8 *unaff_x29;
  ushort *in_stack_00000070;
  undefined8 *in_stack_00000080;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  func_0x000107c39c1c();
  in_stack_00000080 = unaff_x29;
  func_0x000107c39940();
  uVar5 = (param_4 & 0xff) == 0;
  cVar2 = '\0';
  cVar4 = '\0';
  if ((bool)uVar5) {
    func_0x000107c39aec();
    if (extraout_x8_00 != 0) {
      func_0x000107c399e4();
    }
    func_0x000107c399c4((byte *)((long)param_2 + 1));
    func_0x000107c39ae8();
    if (param_1 != (ushort *)0x0) {
      while (func_0x000107c39a04(), !(bool)uVar5 && cVar2 == cVar4) {
        FUN_10b4cd808();
        if (param_1 == (ushort *)0x0) goto LAB_10b4c77b8;
        func_0x000107c39970();
        if ((bool)uVar5 || cVar2 != cVar4) {
          func_0x000107c398f4();
          if (param_1 != (ushort *)0x0) goto LAB_10b4c77e8;
          func_0x000107c3996c();
          FUN_10b4cd808();
          uVar5 = param_1 == unaff_x21;
          if ((bool)uVar5) {
            func_0x000107c39ad0();
          }
          else {
LAB_10b4c77b4:
            param_1 = (ushort *)0x0;
          }
          goto LAB_10b4c77b8;
        }
        func_0x00010b4ce6d4();
        if (cVar2 != cVar4) goto LAB_10b4c77b4;
        func_0x00010b4ce654();
        if (param_1 == (ushort *)0x0) goto LAB_10b4c77b8;
        func_0x00010b4ce160();
      }
      func_0x000107c399ec();
      FUN_10b4cd808();
      func_0x000107c39a90();
    }
LAB_10b4c77b8:
    func_0x000107c39924();
    if ((bool)uVar5) {
      return param_1;
    }
LAB_10b4c77e4:
    ___stack_chk_fail();
LAB_10b4c77e8:
    func_0x00010802bcb8();
    func_0x00010b4cde28();
    func_0x00010b4ce7b4();
    func_0x000107c39c1c();
    in_stack_00000080 = &stack0x00000080;
    func_0x000107c39940();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x000107c39aec();
      if (extraout_x8_01 != 0) {
        func_0x000107c399e4();
      }
      func_0x000107c399c4(param_2 + 1);
      func_0x000107c39ae8();
      if (param_1 != (ushort *)0x0) {
        while (func_0x000107c39a04(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x00010b4cd848();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7898;
          func_0x000107c39970();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x000107c398f4();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c78c8;
            func_0x000107c3996c();
            func_0x00010b4cd848();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x000107c39ad0();
            }
            else {
LAB_10b4c7894:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c7898;
          }
          func_0x00010b4ce6d4();
          if (cVar2 != cVar4) goto LAB_10b4c7894;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7898;
          func_0x00010b4ce160();
        }
        func_0x000107c399ec();
        func_0x00010b4cd848();
        func_0x000107c39a90();
      }
LAB_10b4c7898:
      func_0x000107c39924();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      if ((bool)uVar5) {
        func_0x00010b4ce7a8();
        goto LAB_10b4cdfa4;
      }
    }
    ___stack_chk_fail();
LAB_10b4c78c8:
    func_0x00010802bcb8();
    func_0x00010b4cde28();
    func_0x00010b4ce7b4();
    func_0x000107c39c1c();
    in_stack_00000080 = &stack0x00000080;
    func_0x000107c39940();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x000107c39aec();
      if (extraout_x8_02 != 0) {
        func_0x000107c399e4();
      }
      func_0x000107c399c4(param_2 + 1);
      func_0x000107c39ae8();
      if (param_1 != (ushort *)0x0) {
        while (func_0x000107c39a04(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x00010b4cd888();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7978;
          func_0x000107c39970();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x000107c398f4();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c79a8;
            func_0x000107c3996c();
            func_0x00010b4cd888();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x000107c39ad0();
            }
            else {
LAB_10b4c7974:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c7978;
          }
          func_0x00010b4ce6d4();
          if (cVar2 != cVar4) goto LAB_10b4c7974;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7978;
          func_0x00010b4ce160();
        }
        func_0x000107c399ec();
        func_0x00010b4cd888();
        func_0x000107c39a90();
      }
LAB_10b4c7978:
      func_0x000107c39924();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      if ((bool)uVar5) {
        func_0x00010b4ce7a8();
        goto LAB_10b4cdfa4;
      }
    }
    ___stack_chk_fail();
LAB_10b4c79a8:
    func_0x00010802bcb8();
    func_0x00010b4cde28();
    func_0x00010b4ce7b4();
    func_0x000107c39c1c();
    in_stack_00000080 = &stack0x00000080;
    func_0x000107c39940();
    uVar5 = (param_4 & 0xff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x000107c39aec();
      if (extraout_x8_03 != 0) {
        func_0x000107c399e4();
      }
      func_0x000107c399c4((byte *)((long)param_2 + 1));
      func_0x000107c39ae8();
      if (param_1 != (ushort *)0x0) {
        while (func_0x000107c39a04(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x00010b4cd8c8();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7a58;
          func_0x000107c39970();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x000107c398f4();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c7a88;
            func_0x000107c3996c();
            func_0x00010b4cd8c8();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x000107c39ad0();
            }
            else {
LAB_10b4c7a54:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c7a58;
          }
          func_0x00010b4ce6d4();
          if (cVar2 != cVar4) goto LAB_10b4c7a54;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7a58;
          func_0x00010b4ce160();
        }
        func_0x000107c399ec();
        func_0x00010b4cd8c8();
        func_0x000107c39a90();
      }
LAB_10b4c7a58:
      func_0x000107c39924();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      if ((bool)uVar5) {
        func_0x00010b4ce7a8();
        goto LAB_10b4cdfa4;
      }
    }
    ___stack_chk_fail();
LAB_10b4c7a88:
    func_0x00010802bcb8();
    func_0x00010b4cde28();
    func_0x00010b4ce7b4();
    func_0x000107c39c1c();
    in_stack_00000080 = &stack0x00000080;
    func_0x000107c39940();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x000107c39aec();
      if (extraout_x8_04 != 0) {
        func_0x000107c399e4();
      }
      func_0x000107c399c4(param_2 + 1);
      func_0x000107c39ae8();
      if (param_1 != (ushort *)0x0) {
        while (func_0x000107c39a04(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x00010b4cd908();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7b38;
          func_0x000107c39970();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x000107c398f4();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c7b68;
            func_0x000107c3996c();
            func_0x00010b4cd908();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x000107c39ad0();
            }
            else {
LAB_10b4c7b34:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c7b38;
          }
          func_0x00010b4ce6d4();
          if (cVar2 != cVar4) goto LAB_10b4c7b34;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7b38;
          func_0x00010b4ce160();
        }
        func_0x000107c399ec();
        func_0x00010b4cd908();
        func_0x000107c39a90();
      }
LAB_10b4c7b38:
      func_0x000107c39924();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      if ((bool)uVar5) {
        func_0x00010b4ce7a8();
        goto LAB_10b4cdfa4;
      }
    }
    ___stack_chk_fail();
LAB_10b4c7b68:
    func_0x00010802bcb8();
    func_0x00010b4cde28();
    func_0x00010b4ce7b4();
    func_0x000107c39c1c();
    in_stack_00000080 = &stack0x00000080;
    func_0x000107c39940();
    uVar5 = (param_4 & 0xff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x000107c39aec();
      if (extraout_x8_05 != 0) {
        func_0x000107c399e4();
      }
      func_0x000107c399c4((byte *)((long)param_2 + 1));
      func_0x000107c39ae8();
      if (param_1 != (ushort *)0x0) {
        while (func_0x000107c39a04(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x00010b4cd948();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7c18;
          func_0x000107c39970();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x000107c398f4();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c7c48;
            func_0x000107c3996c();
            func_0x00010b4cd948();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x000107c39ad0();
            }
            else {
LAB_10b4c7c14:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c7c18;
          }
          func_0x00010b4ce6d4();
          if (cVar2 != cVar4) goto LAB_10b4c7c14;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7c18;
          func_0x00010b4ce160();
        }
        func_0x000107c399ec();
        func_0x00010b4cd948();
        func_0x000107c39a90();
      }
LAB_10b4c7c18:
      func_0x000107c39924();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      if ((bool)uVar5) {
        func_0x00010b4ce7a8();
        goto LAB_10b4cdfa4;
      }
    }
    ___stack_chk_fail();
LAB_10b4c7c48:
    func_0x00010802bcb8();
    func_0x00010b4cde28();
    func_0x00010b4ce7b4();
    func_0x000107c39c1c();
    in_stack_00000080 = &stack0x00000080;
    func_0x000107c39940();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x000107c39aec();
      if (extraout_x8_06 != 0) {
        func_0x000107c399e4();
      }
      func_0x000107c399c4(param_2 + 1);
      func_0x000107c39ae8();
      if (param_1 != (ushort *)0x0) {
        while (func_0x000107c39a04(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x00010b4cd990();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7cf8;
          func_0x000107c39970();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x000107c398f4();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c7d28;
            func_0x000107c3996c();
            func_0x00010b4cd990();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x000107c39ad0();
            }
            else {
LAB_10b4c7cf4:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c7cf8;
          }
          func_0x00010b4ce6d4();
          if (cVar2 != cVar4) goto LAB_10b4c7cf4;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7cf8;
          func_0x00010b4ce160();
        }
        func_0x000107c399ec();
        func_0x00010b4cd990();
        func_0x000107c39a90();
      }
LAB_10b4c7cf8:
      func_0x000107c39924();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      if ((bool)uVar5) {
        func_0x00010b4ce7a8();
        goto LAB_10b4cdfa4;
      }
    }
    ___stack_chk_fail();
LAB_10b4c7d28:
    func_0x00010802bcb8();
    func_0x00010b4cde28();
    func_0x00010b4ce7b4();
    func_0x000107c39c1c();
    in_stack_00000080 = &stack0x00000080;
    func_0x000107c39940();
    uVar5 = (param_4 & 0xff) == 0;
    cVar2 = '\0';
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x000107c39aec();
      if (extraout_x8_07 != 0) {
        func_0x000107c399e4();
      }
      func_0x000107c399c4((byte *)((long)param_2 + 1));
      func_0x000107c39ae8();
      if (param_1 != (ushort *)0x0) {
        while (func_0x000107c39a04(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x00010b4cd9d8();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7dd8;
          func_0x000107c39970();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x000107c398f4();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c7e08;
            func_0x000107c3996c();
            func_0x00010b4cd9d8();
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x000107c39ad0();
            }
            else {
LAB_10b4c7dd4:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c7dd8;
          }
          func_0x00010b4ce6d4();
          if (cVar2 != cVar4) goto LAB_10b4c7dd4;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7dd8;
          func_0x00010b4ce160();
        }
        func_0x000107c399ec();
        func_0x00010b4cd9d8();
        func_0x000107c39a90();
      }
LAB_10b4c7dd8:
      func_0x000107c39924();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      if ((bool)uVar5) {
        func_0x00010b4ce7a8();
        goto LAB_10b4cdfa4;
      }
    }
    ___stack_chk_fail();
LAB_10b4c7e08:
    func_0x00010802bcb8();
    func_0x00010b4cde28();
    func_0x00010b4ce7b4();
    UNRECOVERED_JUMPTABLE_00 = (code *)0x10b4c7e14;
    func_0x000107c39c1c();
    in_stack_00000080 = &stack0x00000080;
    func_0x000107c39940();
    uVar5 = (param_4 & 0xffff) == 0;
    cVar2 = '\0';
    uVar3 = 0;
    cVar4 = '\0';
    if ((bool)uVar5) {
      func_0x000107c39aec();
      if (extraout_x8_08 != 0) {
        func_0x000107c399e4();
      }
      func_0x000107c399c4(param_2 + 1);
      func_0x000107c39ae8();
      if (param_1 != (ushort *)0x0) {
        while (func_0x000107c39a04(), !(bool)uVar5 && cVar2 == cVar4) {
          func_0x00010b4cda20();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7eb8;
          func_0x000107c39970();
          if ((bool)uVar5 || cVar2 != cVar4) {
            func_0x000107c398f4();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c7ee8;
            func_0x000107c3996c();
            func_0x00010b4cda20();
            uVar3 = unaff_x21 <= param_1;
            uVar5 = param_1 == unaff_x21;
            if ((bool)uVar5) {
              func_0x000107c39ad0();
            }
            else {
LAB_10b4c7eb4:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c7eb8;
          }
          func_0x00010b4ce6d4();
          if (cVar2 != cVar4) goto LAB_10b4c7eb4;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c7eb8;
          func_0x00010b4ce160();
        }
        func_0x000107c399ec();
        func_0x00010b4cda20();
        func_0x000107c39a90();
      }
LAB_10b4c7eb8:
      func_0x000107c39924();
      if ((bool)uVar5) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      if ((bool)uVar5) {
        func_0x00010b4ce7a8();
        goto LAB_10b4cdfa4;
      }
    }
    ___stack_chk_fail();
LAB_10b4c7ee8:
    func_0x00010802bcb8();
    func_0x00010b4cde28();
    func_0x00010b4ce7b4();
    func_0x00010b4ce96c();
    func_0x00010b4ce6b8(param_2,&uStack_4c);
    if ((param_2 != (ushort *)0x0) && (func_0x00010b4ce7fc(), param_2 != (ushort *)0x0)) {
      puVar6 = param_1;
      FUN_10b4c7f90(param_1,*(undefined8 *)(unaff_x21 + 0x18),uStack_4c,uStack_48);
      func_0x000107c39b9c();
      if (!(bool)uVar3) {
        func_0x000107c39948(*param_2);
        func_0x000107c39944();
                    /* WARNING: Could not recover jumptable at 0x00010b4ce694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return puVar6;
      }
      uVar7 = (ulong)*unaff_x21;
      if (uVar7 != 0) {
        *(uint *)((long)param_1 + uVar7) = *(uint *)((long)param_1 + uVar7) | unaff_w19;
      }
      return param_2;
    }
    func_0x00010b4ce498();
LAB_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (ushort *)0x0;
  }
  func_0x000107c39924();
  if (!(bool)uVar5) goto LAB_10b4c77e4;
  func_0x00010b4ce7a8();
LAB_10b4cdfa4:
  func_0x000100064c34();
  uVar7 = (ulong)(byte)*param_2;
  if ((char)(byte)*param_2 < '\0') {
    bVar1 = *(byte *)((long)param_2 + 1);
    if ((char)bVar1 < '\0') {
      uVar7 = (uVar7 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = (byte)param_2[1];
      if ((char)bVar1 < '\0') {
        if ((char)*(byte *)((long)param_2 + 3) < '\0') {
          if ((char)(byte)param_2[2] < '\0') {
            func_0x000100064e38(param_1);
            goto LAB_10b4c5d10;
          }
          func_0x000107c39ba4();
          uVar7 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar7 = (uVar7 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b |
                  (ulong)*(byte *)((long)param_2 + 3) << 0x15;
        }
      }
      else {
        uVar7 = uVar7 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar7 = uVar7 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  puVar6 = in_stack_00000070;
  func_0x000100064d5c(in_stack_00000070,uVar7 >> 3 & 0x1fffffff);
  if (puVar6 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(in_stack_00000070 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = (code *)(&PTR_LAB_110cf0bf0)[(ulong)puVar6[5] & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return puVar6;
}



/* Entry: 10b4c7f90; end: 10b4c7fd3;  */

void FUN_10b4c7f90(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010b4ce9cc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010b4c7fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_1,param_3 >> 3 & 0x1fffffff,param_4);
  return;
}



/* Entry: 10b4c7fd4; end: 10b4c807b;  */

undefined2 *
FUN_10b4c7fd4(undefined2 *param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4,
             short *param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  undefined1 in_CY;
  ulong uVar1;
  uint unaff_w19;
  ushort *unaff_x21;
  undefined4 auStack_48 [2];
  
  func_0x00010b4ce96c();
  func_0x000107c302a4(param_2,auStack_48);
  if (param_2 == (undefined2 *)0x0) {
    func_0x00010b4ce498();
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (undefined2 *)0x0;
  }
  FUN_10b4c7f90(param_1,*(undefined8 *)(unaff_x21 + 0x18),param_4,auStack_48[0]);
  func_0x00010b4ce960();
  if (!(bool)in_CY) {
    func_0x000107c39948(*param_2);
    func_0x00010b4ce6e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010b4ce694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  uVar1 = (ulong)*unaff_x21;
  if (uVar1 != 0) {
    *(uint *)((long)param_1 + uVar1) = *(uint *)((long)param_1 + uVar1) | unaff_w19;
  }
  return param_2;
}



/* Entry: 10b4c807c; end: 10b4c8353;  */

byte * FUN_10b4c807c(undefined8 param_1,byte *param_2,undefined8 param_3,ulong param_4,
                    short *param_5)

{
  byte bVar1;
  ushort *puVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  code *UNRECOVERED_JUMPTABLE;
  uint extraout_w8;
  undefined4 extraout_w8_00;
  ulong extraout_x8;
  ulong uVar10;
  long extraout_x9;
  uint extraout_w10;
  short *unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  long unaff_x24;
  code *UNRECOVERED_JUMPTABLE_01;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ushort *in_stack_00000038;
  byte *in_stack_00000040;
  undefined8 in_stack_00000048;
  
  func_0x000107c39b14();
  func_0x00010b4ce574();
  uVar7 = (param_4 & 0xff) == 0;
  cVar4 = '\0';
  cVar6 = '\0';
  if ((bool)uVar7) {
    func_0x00010b4ce55c();
    pbVar9 = (byte *)(unaff_x24 + 1);
    func_0x00010b4ce7fc();
    if (pbVar9 == (byte *)0x0) {
      func_0x00010b4ce430();
    }
    else {
      func_0x00010b4cef58();
      uVar5 = ((bool)uVar7 || cVar4 != cVar6) && extraout_w8 <= extraout_w10;
      if (((bool)uVar7 || cVar4 != cVar6) && (int)extraout_w8 < (int)extraout_w10) {
        pbVar8 = pbVar9;
        func_0x00010b4ce538();
        *(undefined4 *)(unaff_x20 + extraout_x9) = extraout_w8_00;
        if (pbVar9 < (byte *)*unaff_x21) {
          func_0x000107c39920();
                    /* WARNING: Could not recover jumptable at 0x000100068b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return pbVar9;
        }
        if (*unaff_x19 != 0) {
          func_0x000107c399e4();
        }
        return pbVar8;
      }
      func_0x00010b4ce028();
      uVar3 = in_stack_00000048;
      puVar2 = in_stack_00000038;
      func_0x00010b4ce96c();
      func_0x00010b4ce6b8(param_2,&stack0x00000014);
      if ((param_2 != (byte *)0x0) && (func_0x00010b4ce7fc(), param_2 != (byte *)0x0)) {
        pbVar8 = pbVar9;
        FUN_10b4c7f90(pbVar9,*(undefined8 *)(puVar2 + 0x18),in_stack_00000014,in_stack_00000018);
        func_0x000107c39b9c();
        if (!(bool)uVar5) {
          func_0x000107c39948(*(undefined2 *)param_2);
          func_0x000107c39944();
                    /* WARNING: Could not recover jumptable at 0x00010b4ce694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_01)();
          return pbVar8;
        }
        uVar10 = (ulong)*puVar2;
        if (uVar10 != 0) {
          *(uint *)(pbVar9 + uVar10) = *(uint *)(pbVar9 + uVar10) | (uint)uVar3;
        }
        return param_2;
      }
      func_0x00010b4ce498();
    }
LAB_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (byte *)0x0;
  }
  func_0x00010b4ce028();
  pbVar9 = in_stack_00000040;
  func_0x000100064c34();
  uVar10 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar10 = (uVar10 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            goto LAB_10b4c5d10;
          }
          func_0x000107c39ba4();
          uVar10 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar10 = (uVar10 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar10 = uVar10 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar10 = uVar10 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar8 = pbVar9;
  func_0x000100064d5c(pbVar9,uVar10 >> 3 & 0x1fffffff);
  if (pbVar8 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pbVar9 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(pbVar8 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar8;
}



/* Entry: 10b4c8354; end: 10b4c86cb;  */

char * FUN_10b4c8354(undefined8 param_1,byte *param_2,undefined8 param_3,ulong param_4,
                    short *param_5)

{
  char cVar1;
  byte bVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  ulong uVar9;
  long extraout_x8_00;
  short *unaff_x20;
  char *unaff_x24;
  char *unaff_x25;
  int unaff_w27;
  uint unaff_w28;
  code *UNRECOVERED_JUMPTABLE_01;
  uint in_stack_00000008;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ushort *in_stack_00000048;
  char *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  func_0x000107c39ab0();
  func_0x000107c399b4();
  if ((param_4 & 0xff) == 0) {
    cVar1 = *unaff_x25;
    func_0x00010b4ce8f4();
    func_0x00010b4ceea0(*(undefined8 *)(extraout_x8_00 + (param_4 >> 0x18 & 0xff) * 8));
    while( true ) {
      pcVar7 = unaff_x25 + 1;
      func_0x00010b4ce7fc();
      if (pcVar7 == (char *)0x0) {
        func_0x00010b4ce184();
        goto LAB_10b4c5d10;
      }
      pcVar8 = (char *)(ulong)in_stack_00000008;
      uVar5 = unaff_w27 <= (int)in_stack_00000008 && in_stack_00000008 <= unaff_w28;
      if ((int)in_stack_00000008 < unaff_w27 || (int)unaff_w28 <= (int)in_stack_00000008) break;
      func_0x00010b4cf040();
      func_0x000107c39af4();
      if ((bool)uVar5) {
        if (*unaff_x20 != 0) {
          func_0x000107c39990();
        }
        return unaff_x24;
      }
      unaff_x25 = unaff_x24;
      if (*unaff_x24 != cVar1) {
        func_0x000107c398fc(*(undefined2 *)unaff_x24);
        func_0x00010b4ce0ec();
                    /* WARNING: Could not recover jumptable at 0x0001000690fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_01)();
        return pcVar7;
      }
    }
    func_0x00010b4cdffc();
    uVar4 = in_stack_00000058;
    puVar3 = in_stack_00000048;
    func_0x00010b4ce96c();
    func_0x00010b4ce6b8(pcVar8,&stack0x00000024);
    if ((pcVar8 != (char *)0x0) && (func_0x00010b4ce7fc(), pcVar8 != (char *)0x0)) {
      pcVar6 = pcVar7;
      FUN_10b4c7f90(pcVar7,*(undefined8 *)(puVar3 + 0x18),in_stack_00000024,in_stack_00000028);
      func_0x000107c39b9c();
      if (!(bool)uVar5) {
        func_0x000107c39948(*(undefined2 *)pcVar8);
        func_0x000107c39944();
                    /* WARNING: Could not recover jumptable at 0x00010b4ce694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_01)();
        return pcVar6;
      }
      uVar9 = (ulong)*puVar3;
      if (uVar9 != 0) {
        *(uint *)(pcVar7 + uVar9) = *(uint *)(pcVar7 + uVar9) | (uint)uVar4;
      }
      return pcVar8;
    }
    func_0x00010b4ce498();
LAB_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (char *)0x0;
  }
  func_0x00010b4cdffc();
  pcVar7 = in_stack_00000050;
  func_0x000100064c34();
  uVar9 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar2 = param_2[1];
    if ((char)bVar2 < '\0') {
      uVar9 = (uVar9 & 0x7f) << 0x32 | (ulong)bVar2 << 0x39;
      bVar2 = param_2[2];
      if ((char)bVar2 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            goto LAB_10b4c5d10;
          }
          func_0x000107c39ba4();
          uVar9 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar9 = (uVar9 >> 7 | (long)(char)bVar2 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar9 = uVar9 >> 0x32 | (ulong)bVar2 << 0xe;
      }
    }
    else {
      uVar9 = uVar9 & 0x7f | (ulong)bVar2 << 7;
    }
  }
  pcVar8 = pcVar7;
  func_0x000100064d5c(pcVar7,uVar9 >> 3 & 0x1fffffff);
  if (pcVar8 == (char *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pcVar7 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(pcVar8 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pcVar8;
}



/* Entry: 10b4c86cc; end: 10b4c8adb;  */

ushort * FUN_10b4c86cc(ushort *param_1,byte *param_2,undefined1 *param_3,ulong param_4,
                      short *param_5)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  ushort *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  ushort *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong uVar10;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar11;
  undefined8 *******unaff_x29;
  code *unaff_x30;
  undefined1 auStack_300 [48];
  ushort auStack_2d0 [12];
  ushort *puStack_2b8;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [40];
  ushort auStack_210 [12];
  ushort *puStack_1f8;
  undefined8 ******ppppppuStack_190;
  code *pcStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [40];
  ushort auStack_150 [12];
  ushort *puStack_138;
  undefined8 ******ppppppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [40];
  ushort auStack_90 [12];
  ushort *puStack_78;
  
  puVar4 = auStack_c0;
  func_0x00010b4ce058();
  uVar8 = (param_4 & 0xff) == 0;
  cVar5 = '\0';
  cVar6 = '\0';
  if ((bool)uVar8) {
    if (*param_5 != 0) {
      func_0x000107c39bc0(*param_2);
    }
    func_0x00010b4ce774();
    func_0x00010b4ce9f4();
    func_0x00010b4ce4d8();
    func_0x00010b4cf0ac();
    if (param_1 != (ushort *)0x0) {
      while (func_0x00010b4ce4a8(), !(bool)uVar8 && cVar5 == cVar6) {
        param_3 = auStack_b8;
        func_0x00010b4cda68();
        puStack_78 = param_1;
        if (param_1 == (ushort *)0x0) goto LAB_10b4c878c;
        func_0x00010b4ce040();
        if ((bool)uVar8 || cVar5 != cVar6) {
          func_0x00010b4ce06c();
          if (param_1 != (ushort *)0x0) goto LAB_10b4c87bc;
          func_0x00010b4ce4b8();
          func_0x00010b4cf2ec();
          func_0x00010b4cda68();
          uVar8 = param_1 == unaff_x20;
          if ((bool)uVar8) {
            func_0x00010b4cedf0();
          }
          else {
LAB_10b4c8788:
            param_1 = (ushort *)0x0;
          }
          goto LAB_10b4c878c;
        }
        func_0x00010b4ce6d4();
        if (cVar5 != cVar6) goto LAB_10b4c8788;
        func_0x00010b4ce654();
        if (param_1 == (ushort *)0x0) goto LAB_10b4c878c;
        func_0x00010b4ce4c8();
        puStack_78 = param_1;
      }
      func_0x00010b4ceb8c();
      func_0x00010b4cda68();
      func_0x000107c39a90();
    }
LAB_10b4c878c:
    func_0x000107c39924();
    if ((bool)uVar8) {
      return param_1;
    }
LAB_10b4c87b8:
    ___stack_chk_fail();
LAB_10b4c87bc:
    func_0x00010802bcb8();
    func_0x00010b4cdfb8();
    param_1 = auStack_90;
    func_0x00010b4ce6c0();
    func_0x00010b4cee44();
    puVar4 = auStack_180;
    pcStack_c8 = (code *)0x10b4c87d0;
    ppppppuStack_d0 = (undefined8 ******)&stack0xfffffffffffffff0;
    func_0x00010b4ce058();
    uVar8 = (param_4 & 0xffff) == 0;
    cVar5 = '\0';
    cVar6 = '\0';
    if ((bool)uVar8) {
      if (*param_5 != 0) {
        func_0x000107c39bc0(*(undefined2 *)param_2);
      }
      func_0x00010b4ce774();
      func_0x00010b4ce9f4();
      func_0x00010b4ce4d8();
      func_0x00010b4cf0ac();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00010b4ce4a8(), !(bool)uVar8 && cVar5 == cVar6) {
          param_3 = auStack_178;
          func_0x00010b4cdabc();
          puStack_138 = param_1;
          if (param_1 == (ushort *)0x0) goto LAB_10b4c8890;
          func_0x00010b4ce040();
          if ((bool)uVar8 || cVar5 != cVar6) {
            func_0x00010b4ce06c();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c88c0;
            func_0x00010b4ce4b8();
            func_0x00010b4cf2ec();
            func_0x00010b4cdabc();
            uVar8 = param_1 == unaff_x20;
            if ((bool)uVar8) {
              func_0x00010b4cedf0();
            }
            else {
LAB_10b4c888c:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c8890;
          }
          func_0x00010b4ce6d4();
          if (cVar5 != cVar6) goto LAB_10b4c888c;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c8890;
          func_0x00010b4ce4c8();
          puStack_138 = param_1;
        }
        func_0x00010b4ceb8c();
        func_0x00010b4cdabc();
        func_0x000107c39a90();
      }
LAB_10b4c8890:
      func_0x000107c39924();
      if ((bool)uVar8) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      unaff_x29 = (undefined8 *******)ppppppuStack_d0;
      unaff_x30 = pcStack_c8;
      if ((bool)uVar8) goto LAB_10b4ce388;
    }
    ___stack_chk_fail();
LAB_10b4c88c0:
    func_0x00010802bcb8();
    func_0x00010b4cdfb8();
    param_1 = auStack_150;
    func_0x00010b4ce6c0();
    func_0x00010b4cee44();
    puVar4 = auStack_240;
    pcStack_188 = (code *)0x10b4c88d4;
    ppppppuStack_190 = &ppppppuStack_d0;
    func_0x00010b4ce058();
    uVar8 = (param_4 & 0xff) == 0;
    cVar5 = '\0';
    cVar6 = '\0';
    if ((bool)uVar8) {
      if (*param_5 != 0) {
        func_0x000107c39bc0(*param_2);
      }
      func_0x00010b4ce774();
      func_0x00010b4ce9f4();
      func_0x00010b4ce4d8();
      func_0x00010b4cf0ac();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00010b4ce4a8(), !(bool)uVar8 && cVar5 == cVar6) {
          param_3 = auStack_238;
          func_0x00010b4cdb10();
          puStack_1f8 = param_1;
          if (param_1 == (ushort *)0x0) goto LAB_10b4c8994;
          func_0x00010b4ce040();
          if ((bool)uVar8 || cVar5 != cVar6) {
            func_0x00010b4ce06c();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c89c4;
            func_0x00010b4ce4b8();
            func_0x00010b4cf2ec();
            func_0x00010b4cdb10();
            uVar8 = param_1 == unaff_x20;
            if ((bool)uVar8) {
              func_0x00010b4cedf0();
            }
            else {
LAB_10b4c8990:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c8994;
          }
          func_0x00010b4ce6d4();
          if (cVar5 != cVar6) goto LAB_10b4c8990;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c8994;
          func_0x00010b4ce4c8();
          puStack_1f8 = param_1;
        }
        func_0x00010b4ceb8c();
        func_0x00010b4cdb10();
        func_0x000107c39a90();
      }
LAB_10b4c8994:
      func_0x000107c39924();
      if ((bool)uVar8) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      unaff_x29 = (undefined8 *******)ppppppuStack_190;
      unaff_x30 = pcStack_188;
      if ((bool)uVar8) goto LAB_10b4ce388;
    }
    ___stack_chk_fail();
LAB_10b4c89c4:
    func_0x00010802bcb8();
    func_0x00010b4cdfb8();
    param_1 = auStack_210;
    func_0x00010b4ce6c0();
    func_0x00010b4cee44();
    puVar4 = auStack_300;
    pcStack_248 = (code *)0x10b4c89d8;
    pppppppuVar11 = &ppppppuStack_250;
    ppppppuStack_250 = &ppppppuStack_190;
    func_0x00010b4ce058();
    uVar8 = (param_4 & 0xffff) == 0;
    cVar5 = '\0';
    cVar6 = '\0';
    if ((bool)uVar8) {
      if (*param_5 != 0) {
        func_0x000107c39bc0(*(undefined2 *)param_2);
      }
      func_0x00010b4ce774();
      func_0x00010b4ce9f4();
      func_0x00010b4ce4d8();
      func_0x00010b4cf0ac();
      if (param_1 != (ushort *)0x0) {
        while (func_0x00010b4ce4a8(), !(bool)uVar8 && cVar5 == cVar6) {
          func_0x00010b4cdb98();
          puStack_2b8 = param_1;
          if (param_1 == (ushort *)0x0) goto LAB_10b4c8a98;
          func_0x00010b4ce040();
          if ((bool)uVar8 || cVar5 != cVar6) {
            func_0x00010b4ce06c();
            if (param_1 != (ushort *)0x0) goto LAB_10b4c8ac8;
            func_0x00010b4ce4b8();
            func_0x00010b4cf2ec();
            func_0x00010b4cdb98();
            uVar8 = param_1 == unaff_x20;
            if ((bool)uVar8) {
              func_0x00010b4cedf0();
            }
            else {
LAB_10b4c8a94:
              param_1 = (ushort *)0x0;
            }
            goto LAB_10b4c8a98;
          }
          func_0x00010b4ce6d4();
          if (cVar5 != cVar6) goto LAB_10b4c8a94;
          func_0x00010b4ce654();
          if (param_1 == (ushort *)0x0) goto LAB_10b4c8a98;
          func_0x00010b4ce4c8();
          puStack_2b8 = param_1;
        }
        func_0x00010b4ceb8c();
        func_0x00010b4cdb98();
        func_0x000107c39a90();
      }
LAB_10b4c8a98:
      func_0x000107c39924();
      if ((bool)uVar8) {
        return param_1;
      }
    }
    else {
      func_0x000107c39924();
      unaff_x29 = (undefined8 *******)ppppppuStack_250;
      unaff_x30 = pcStack_248;
      if ((bool)uVar8) goto LAB_10b4ce388;
    }
    ___stack_chk_fail();
LAB_10b4c8ac8:
    func_0x00010802bcb8();
    func_0x00010b4cdfb8();
    param_1 = auStack_2d0;
    func_0x00010b4ce6c0();
    unaff_x30 = FUN_10b4c8adc;
    func_0x00010b4cee44();
    puVar3 = auStack_300;
    if ((param_4 & 0xff) == 0) {
      bVar2 = param_2[1];
      uVar1 = (uint)param_4 >> 0x18;
      bVar7 = uVar1 <= bVar2;
      puVar3 = auStack_300;
      if (bVar2 <= uVar1) {
        *(uint *)((long)param_1 + (param_4 >> 0x30)) = (uint)bVar2;
        puVar9 = (ushort *)(param_2 + 2);
        func_0x000107c39b54();
        if (!bVar7) {
                    /* WARNING: Could not recover jumptable at 0x0001000644b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_5 + ((ulong)*puVar9 & (ulong)*(byte *)(param_5 + 4)) + 0x1c))();
          return param_1;
        }
        if (*param_5 != 0) {
          func_0x000107c39bb4();
        }
        return puVar9;
      }
    }
  }
  else {
    func_0x000107c39924();
    if (!(bool)uVar8) goto LAB_10b4c87b8;
LAB_10b4ce388:
    unaff_x20 = *(ushort **)(puVar4 + 0xa0);
    param_3 = *(undefined1 **)(puVar4 + 0xa8);
    unaff_x22 = *(undefined8 *)(puVar4 + 0x90);
    unaff_x21 = *(undefined8 *)(puVar4 + 0x98);
    unaff_x24 = *(undefined8 *)(puVar4 + 0x80);
    unaff_x23 = *(undefined8 *)(puVar4 + 0x88);
    puVar3 = puVar4 + 0xc0;
    pppppppuVar11 = unaff_x29;
  }
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
  *(ushort **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = param_3;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar11;
  *(code **)(puVar3 + -8) = unaff_x30;
  func_0x000100064c34();
  uVar10 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar2 = param_2[1];
    if ((char)bVar2 < '\0') {
      uVar10 = (uVar10 & 0x7f) << 0x32 | (ulong)bVar2 << 0x39;
      bVar2 = param_2[2];
      if ((char)bVar2 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            if (*param_5 != 0) {
              func_0x000107c39bb4();
            }
            return (ushort *)0x0;
          }
          func_0x000107c39ba4();
          uVar10 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar10 = (uVar10 >> 7 | (long)(char)bVar2 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar10 = uVar10 >> 0x32 | (ulong)bVar2 << 0xe;
      }
    }
    else {
      uVar10 = uVar10 & 0x7f | (ulong)bVar2 << 7;
    }
  }
  puVar9 = unaff_x20;
  func_0x000100064d5c(unaff_x20,uVar10 >> 3 & 0x1fffffff);
  if (puVar9 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)puVar9[5] & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar9;
}



/* Entry: 10b4c8adc; end: 10b4c8bd3;  */

ushort * FUN_10b4c8adc(ushort *param_1,char *param_2,undefined8 param_3,ulong param_4,short *param_5
                      )

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ushort *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ushort *unaff_x20;
  
  if ((param_4 & 0xff) == 0) {
    bVar2 = param_2[1];
    uVar1 = (uint)param_4 >> 0x18;
    bVar3 = uVar1 <= bVar2;
    if (bVar2 <= uVar1) {
      *(uint *)((long)param_1 + (param_4 >> 0x30)) = (uint)bVar2;
      puVar4 = (ushort *)(param_2 + 2);
      func_0x000107c39b54();
      if (bVar3) {
        if (*param_5 != 0) {
          func_0x000107c39bb4();
        }
        return puVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0001000644b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_5 + ((ulong)*puVar4 & (ulong)*(byte *)(param_5 + 4)) + 0x1c))();
      return param_1;
    }
  }
  func_0x000100064c34();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x000100064e38(param_1);
      if (*param_5 != 0) {
        func_0x000107c39bb4();
      }
      return (ushort *)0x0;
    }
    func_0x000107c39ba4();
  }
  puVar4 = unaff_x20;
  func_0x000100064d5c();
  if (puVar4 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)puVar4[5] & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar4;
}



/* Entry: 10b4c8bd4; end: 10b4c8e83;  */

byte * FUN_10b4c8bd4(byte *param_1,byte *param_2,undefined8 *param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x20;
  byte *unaff_x21;
  byte *pbVar2;
  byte *unaff_x22;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  byte *in_stack_00000030;
  
  func_0x000107c39bc4();
  func_0x000107c39a5c();
  func_0x00010b4cee64();
  if ((param_4 & 0xff) == 0) {
    bVar1 = *unaff_x21;
    param_2 = unaff_x21;
    while (pbVar2 = param_2 + 2, (uint)param_2[1] <= ((uint)(param_4 >> 0x18) & 0xff)) {
      func_0x00010b4cec38();
      if ((byte *)*param_3 <= pbVar2) {
        if (*unaff_x20 != 0) {
          func_0x00010b4ce718();
        }
        return pbVar2;
      }
      param_2 = pbVar2;
      if (*pbVar2 != bVar1) {
        func_0x000107c39900(*(undefined2 *)pbVar2);
        func_0x00010b4ced64();
        func_0x00010b4ce150();
                    /* WARNING: Could not recover jumptable at 0x00010029f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
    }
  }
  else {
    func_0x00010b4ced64();
    unaff_x22 = param_1;
  }
  func_0x00010b4ce150();
  func_0x000100064c34();
  uVar3 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar3 = (uVar3 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(unaff_x22);
            if (*param_5 != 0) {
              func_0x000107c39bb4();
            }
            return (byte *)0x0;
          }
          func_0x000107c39ba4();
          uVar3 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar3 = (uVar3 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar3 = uVar3 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar3 = uVar3 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar2 = in_stack_00000030;
  func_0x000100064d5c(in_stack_00000030,uVar3 >> 3 & 0x1fffffff);
  if (pbVar2 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000030 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(pbVar2 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar2;
}



/* Entry: 10b4c8e84; end: 10b4c9353;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 ******
FUN_10b4c8e84(undefined1 *param_1,undefined8 ******param_2,undefined8 ******param_3,
             undefined8 ******param_4,undefined8 *****param_5)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte *pbVar6;
  undefined8 ******ppppppuVar7;
  undefined1 *puVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined *puVar13;
  byte *pbVar14;
  undefined8 ******ppppppuVar15;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x9;
  long lVar16;
  long extraout_x9_00;
  int iVar17;
  undefined8 ******unaff_x23;
  undefined1 unaff_w24;
  ulong uVar18;
  int unaff_w25;
  int iVar19;
  int unaff_w27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined1 in_stack_00000010;
  undefined8 ******in_stack_00000038;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  byte *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 *****apppppuStack_180 [3];
  undefined8 *******pppppppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 *******pppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 *******pppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 *******pppppppuStack_78;
  undefined8 ******ppppppuStack_70;
  long lStack_48;
  
  func_0x00010b4cef00();
  in_stack_000000c0 = unaff_x29;
  func_0x00010b4ce8ac();
  func_0x00010b4ce244();
  uVar5 = ((ulong)param_4 & 0xff) == 0;
  if ((bool)uVar5) {
    in_stack_00000068 = extraout_x8_00;
    func_0x00010b4cf1f8();
    if (extraout_x8_01 != 0) {
      func_0x00010b4cead8();
    }
    unaff_w25 = unaff_w25 + 1;
    func_0x00010b4ce58c();
    func_0x00010b4ce400();
    func_0x00010b4ce0c8();
    ppppppuVar7 = in_stack_00000038;
    if (in_stack_00000038 != (undefined8 ******)0x0) {
      func_0x00010b4ceb7c();
      while( true ) {
        iVar17 = (int)unaff_x23;
        cVar3 = SBORROW4(iVar17,unaff_w25);
        cVar4 = iVar17 - unaff_w25 < 0;
        uVar5 = iVar17 == unaff_w25;
        if (iVar17 <= unaff_w25) break;
        in_stack_00000010 = unaff_w24;
        func_0x00010b4ce3ec();
        func_0x00010b4cdc20();
        in_stack_00000038 = ppppppuVar7;
        if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_10b4c8f68;
        func_0x00010b4ce5ac();
        if ((bool)uVar5 || cVar4 != cVar3) {
          func_0x00010b4ce09c();
          if (ppppppuVar7 != (undefined8 ******)0x0) goto LAB_10b4c8fa4;
          unaff_x23 = (undefined8 ******)(&stack0x00000040 + unaff_x28);
          ppppppuVar7 = (undefined8 ******)(&stack0x00000040 + unaff_w27);
          in_stack_00000010 = unaff_w24;
          func_0x00010b4ce3ec();
          param_2 = unaff_x23;
          func_0x00010b4cdc20();
          uVar5 = ppppppuVar7 == unaff_x23;
          if ((bool)uVar5) {
            func_0x00010b4cf2ac();
          }
          else {
LAB_10b4c8f64:
            ppppppuVar7 = (undefined8 ******)0x0;
          }
          goto LAB_10b4c8f68;
        }
        func_0x00010b4ce6d4();
        if (cVar4 != cVar3) goto LAB_10b4c8f64;
        func_0x00010b4ce654();
        if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_10b4c8f68;
        func_0x00010b4ce3bc();
      }
      param_2 = (undefined8 ******)((long)ppppppuVar7 + (long)iVar17);
      in_stack_00000010 = unaff_w24;
      func_0x00010b4ce3ec();
      func_0x00010b4cdc20();
      func_0x000107c39a90();
    }
LAB_10b4c8f68:
    func_0x00010b4cdf40(in_stack_00000068);
    if ((bool)uVar5) {
      return ppppppuVar7;
    }
  }
  else {
    func_0x00010b4cdf40(extraout_x8_00);
    if ((bool)uVar5) {
      func_0x00010b4ce788();
      func_0x00010b4cf0b8();
      goto DAT_100064c40;
    }
  }
  ___stack_chk_fail();
LAB_10b4c8fa4:
  func_0x00010802bcb8();
  func_0x00010b4cdfb8();
  param_1 = &stack0x00000010;
  func_0x00010b4ce6c0(param_1);
  func_0x00010b4cedd0();
  func_0x00010b4cef00();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010b4ce8ac();
  func_0x00010b4ce244();
  uVar5 = ((ulong)param_4 & 0xffff) == 0;
  if ((bool)uVar5) {
    in_stack_00000068 = extraout_x8_02;
    func_0x00010b4cf1f8();
    if (extraout_x8_03 != 0) {
      func_0x00010b4cead8();
    }
    unaff_w25 = unaff_w25 + 2;
    func_0x00010b4ce58c();
    func_0x00010b4ce400();
    func_0x00010b4ce0c8();
    ppppppuVar7 = in_stack_00000038;
    if (in_stack_00000038 != (undefined8 ******)0x0) {
      func_0x00010b4ceb7c();
      while( true ) {
        iVar17 = (int)unaff_x23;
        cVar3 = SBORROW4(iVar17,unaff_w25);
        cVar4 = iVar17 - unaff_w25 < 0;
        uVar5 = iVar17 == unaff_w25;
        if (iVar17 <= unaff_w25) break;
        in_stack_00000010 = unaff_w24;
        func_0x00010b4ce3d8();
        func_0x00010b4cdc78();
        in_stack_00000038 = ppppppuVar7;
        if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_10b4c909c;
        func_0x00010b4ce5ac();
        if ((bool)uVar5 || cVar4 != cVar3) {
          func_0x00010b4ce09c();
          if (ppppppuVar7 != (undefined8 ******)0x0) goto LAB_10b4c90d8;
          unaff_x23 = (undefined8 ******)(&stack0x00000040 + unaff_x28);
          ppppppuVar7 = (undefined8 ******)(&stack0x00000040 + unaff_w27);
          in_stack_00000010 = unaff_w24;
          func_0x00010b4ce3d8();
          param_2 = unaff_x23;
          func_0x00010b4cdc78();
          uVar5 = ppppppuVar7 == unaff_x23;
          if ((bool)uVar5) {
            func_0x00010b4cf2ac();
          }
          else {
LAB_10b4c9098:
            ppppppuVar7 = (undefined8 ******)0x0;
          }
          goto LAB_10b4c909c;
        }
        func_0x00010b4ce6d4();
        if (cVar4 != cVar3) goto LAB_10b4c9098;
        func_0x00010b4ce654();
        if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_10b4c909c;
        func_0x00010b4ce3bc();
      }
      param_2 = (undefined8 ******)((long)ppppppuVar7 + (long)iVar17);
      in_stack_00000010 = unaff_w24;
      func_0x00010b4ce3d8();
      func_0x00010b4cdc78();
      func_0x000107c39a90();
    }
LAB_10b4c909c:
    func_0x00010b4cdf40(in_stack_00000068);
    if ((bool)uVar5) {
      return ppppppuVar7;
    }
  }
  else {
    func_0x00010b4cdf40(extraout_x8_02);
    if ((bool)uVar5) {
      func_0x00010b4ce788();
      func_0x00010b4cf0b8();
      goto DAT_100064c40;
    }
  }
  ___stack_chk_fail();
LAB_10b4c90d8:
  iVar17 = (int)unaff_x23;
  func_0x00010802bcb8();
  func_0x00010b4cdfb8();
  param_1 = &stack0x00000010;
  func_0x00010b4ce6c0(param_1);
  func_0x00010b4cedd0();
  func_0x00010b4cef00();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010b4ce8ac();
  func_0x00010b4ce244();
  uVar5 = ((ulong)param_4 & 0xff) == 0;
  if ((bool)uVar5) {
    in_stack_00000068 = extraout_x8_04;
    func_0x00010b4cf1f8();
    if (extraout_x8_05 != 0) {
      func_0x00010b4cead8();
    }
    unaff_w25 = unaff_w25 + 1;
    func_0x00010b4ce58c();
    func_0x00010b4ce400();
    func_0x00010b4ce0c8();
    ppppppuVar7 = in_stack_00000038;
    if (in_stack_00000038 != (undefined8 ******)0x0) {
      func_0x00010b4ceb7c();
      while( true ) {
        cVar3 = SBORROW4(iVar17,unaff_w25);
        cVar4 = iVar17 - unaff_w25 < 0;
        uVar5 = iVar17 == unaff_w25;
        if (iVar17 <= unaff_w25) break;
        in_stack_00000010 = unaff_w24;
        func_0x00010b4ce3ec();
        func_0x00010b4cdcd0();
        in_stack_00000038 = ppppppuVar7;
        if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_10b4c91d0;
        func_0x00010b4ce5ac();
        if ((bool)uVar5 || cVar4 != cVar3) {
          func_0x00010b4ce09c();
          if (ppppppuVar7 != (undefined8 ******)0x0) goto LAB_10b4c920c;
          unaff_x23 = (undefined8 ******)(&stack0x00000040 + unaff_x28);
          ppppppuVar7 = (undefined8 ******)(&stack0x00000040 + unaff_w27);
          in_stack_00000010 = unaff_w24;
          func_0x00010b4ce3ec();
          param_2 = unaff_x23;
          func_0x00010b4cdcd0();
          uVar5 = ppppppuVar7 == unaff_x23;
          if ((bool)uVar5) {
            func_0x00010b4cf2ac();
          }
          else {
LAB_10b4c91cc:
            ppppppuVar7 = (undefined8 ******)0x0;
          }
          goto LAB_10b4c91d0;
        }
        func_0x00010b4ce6d4();
        if (cVar4 != cVar3) goto LAB_10b4c91cc;
        func_0x00010b4ce654();
        if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_10b4c91d0;
        func_0x00010b4ce3bc();
      }
      param_2 = (undefined8 ******)((long)ppppppuVar7 + (long)iVar17);
      in_stack_00000010 = unaff_w24;
      func_0x00010b4ce3ec();
      func_0x00010b4cdcd0();
      func_0x000107c39a90();
    }
LAB_10b4c91d0:
    iVar17 = (int)unaff_x23;
    func_0x00010b4cdf40(in_stack_00000068);
    if ((bool)uVar5) {
      return ppppppuVar7;
    }
  }
  else {
    func_0x00010b4cdf40(extraout_x8_04);
    if ((bool)uVar5) {
      func_0x00010b4ce788();
      func_0x00010b4cf0b8();
      goto DAT_100064c40;
    }
  }
  ___stack_chk_fail();
LAB_10b4c920c:
  func_0x00010802bcb8();
  func_0x00010b4cdfb8();
  param_1 = &stack0x00000010;
  func_0x00010b4ce6c0(param_1);
  func_0x00010b4cedd0();
  func_0x00010b4cef00();
  in_stack_000000c0 = &stack0x000000c0;
  func_0x00010b4ce8ac();
  func_0x00010b4ce244();
  uVar5 = ((ulong)param_4 & 0xffff) == 0;
  if ((bool)uVar5) {
    in_stack_00000068 = extraout_x8_06;
    func_0x00010b4cf1f8();
    if (extraout_x8_07 != 0) {
      func_0x00010b4cead8();
    }
    iVar19 = unaff_w25 + 2;
    func_0x00010b4ce58c();
    func_0x00010b4ce400();
    func_0x00010b4ce0c8();
    ppppppuVar7 = in_stack_00000038;
    if (in_stack_00000038 != (undefined8 ******)0x0) {
      func_0x00010b4ceb7c();
      while( true ) {
        cVar3 = SBORROW4(iVar17,iVar19);
        cVar4 = iVar17 - iVar19 < 0;
        uVar5 = iVar17 == iVar19;
        if (iVar17 <= iVar19) break;
        in_stack_00000010 = unaff_w24;
        func_0x00010b4ce3d8();
        func_0x00010b4cdd2c();
        in_stack_00000038 = ppppppuVar7;
        if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_10b4c9304;
        func_0x00010b4ce5ac();
        if ((bool)uVar5 || cVar4 != cVar3) {
          func_0x00010b4ce09c();
          if (ppppppuVar7 != (undefined8 ******)0x0) goto LAB_10b4c9340;
          ppppppuVar7 = (undefined8 ******)(&stack0x00000040 + unaff_w27);
          in_stack_00000010 = unaff_w24;
          func_0x00010b4ce3d8();
          param_2 = (undefined8 ******)(&stack0x00000040 + unaff_x28);
          func_0x00010b4cdd2c();
          uVar5 = ppppppuVar7 == (undefined8 ******)(&stack0x00000040 + unaff_x28);
          if ((bool)uVar5) {
            func_0x00010b4cf2ac();
          }
          else {
LAB_10b4c9300:
            ppppppuVar7 = (undefined8 ******)0x0;
          }
          goto LAB_10b4c9304;
        }
        func_0x00010b4ce6d4();
        if (cVar4 != cVar3) goto LAB_10b4c9300;
        func_0x00010b4ce654();
        if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_10b4c9304;
        func_0x00010b4ce3bc();
      }
      param_2 = (undefined8 ******)((long)ppppppuVar7 + (long)iVar17);
      in_stack_00000010 = unaff_w24;
      func_0x00010b4ce3d8();
      func_0x00010b4cdd2c();
      func_0x000107c39a90();
    }
LAB_10b4c9304:
    func_0x00010b4cdf40(in_stack_00000068);
    if ((bool)uVar5) {
      return ppppppuVar7;
    }
  }
  else {
    func_0x00010b4cdf40(extraout_x8_06);
    if ((bool)uVar5) {
      func_0x00010b4ce788();
      func_0x00010b4cf0b8();
DAT_100064c40:
      pbVar14 = in_stack_000000b0;
      func_0x000100064c34();
      uVar18 = (ulong)*(byte *)param_2;
      if ((char)*(byte *)param_2 < '\0') {
        bVar1 = *(byte *)((long)param_2 + 1);
        if ((char)bVar1 < '\0') {
          uVar18 = (uVar18 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
          bVar1 = *(byte *)((long)param_2 + 2);
          if ((char)bVar1 < '\0') {
            if ((char)*(byte *)((long)param_2 + 3) < '\0') {
              if ((char)*(byte *)((long)param_2 + 4) < '\0') {
                func_0x000100064e38(param_1);
                if (*(short *)param_5 != 0) {
                  func_0x000107c39bb4();
                }
                return (undefined8 ******)(byte *)0x0;
              }
              func_0x000107c39ba4();
              uVar18 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
            }
            else {
              uVar18 = (uVar18 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b |
                       (ulong)*(byte *)((long)param_2 + 3) << 0x15;
            }
          }
          else {
            uVar18 = uVar18 >> 0x32 | (ulong)bVar1 << 0xe;
          }
        }
        else {
          uVar18 = uVar18 & 0x7f | (ulong)bVar1 << 7;
        }
      }
      pbVar6 = pbVar14;
      func_0x000100064d5c(pbVar14,uVar18 >> 3 & 0x1fffffff);
      if (pbVar6 == (byte *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(pbVar14 + 0x30);
      }
      else {
        UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(pbVar6 + 10) & 0xf];
      }
      func_0x000100064e2c();
      func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return (undefined8 ******)pbVar6;
    }
  }
  ___stack_chk_fail();
LAB_10b4c9340:
  func_0x00010802bcb8();
  func_0x00010b4cdfb8();
  puVar8 = &stack0x00000010;
  func_0x00010b4ce6c0(puVar8);
  func_0x00010b4cedd0();
  ppppppuVar9 = param_2;
  func_0x000107c302c0(param_2,(ulong)puVar8 >> 3 & 0x1fffffff);
  FUN_10b4c5c84(param_2);
  func_0x00010b4c5cd8();
  func_0x00010b4ce624();
  ppppppuVar15 = apppppuStack_180;
  ppppppuVar12 = apppppuStack_180;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  ppppppuVar7 = (undefined8 ******)&UNK_10f7741f2;
  pppppppuVar10 = &pppppppuStack_168;
  func_0x000107c278b8();
  if (param_4 != (undefined8 ******)0x0) {
    if (ppppppuVar9 == (undefined8 ******)0x0) {
      func_0x00010b4d3f84();
      pppppppuStack_a8 = (undefined8 *******)param_3;
      ppppppuStack_a0 = param_4;
      pppppppuStack_78 = pppppppuVar10;
      ppppppuStack_70 = ppppppuVar7;
      func_0x00010b4d3f78();
      pppppppuStack_d8 = pppppppuVar10;
      ppppppuStack_d0 = ppppppuVar7;
      func_0x000107c2ba44(&ppppppuStack_108,&pppppppuStack_78,&pppppppuStack_a8,&pppppppuStack_d8);
      ppppppuVar7 = &ppppppuStack_108;
      func_0x000107c27b9c(&pppppppuStack_168);
      ppppppuVar12 = &ppppppuStack_108;
    }
    else {
      func_0x00010b4d3f84();
      pppppppuVar11 = (undefined8 *******)&DAT_10f62a9de;
      pppppppuStack_a8 = (undefined8 *******)param_2;
      ppppppuStack_a0 = ppppppuVar9;
      pppppppuStack_78 = pppppppuVar10;
      ppppppuStack_70 = ppppppuVar7;
      func_0x000107c284bc();
      ppppppuStack_108 = param_3;
      ppppppuStack_100 = param_4;
      pppppppuStack_d8 = pppppppuVar11;
      ppppppuStack_d0 = ppppppuVar7;
      func_0x00010b4d3f78();
      pppppppuStack_138 = pppppppuVar11;
      ppppppuStack_130 = ppppppuVar7;
      func_0x00010b4d3f4c();
      func_0x0001089a5b70();
      func_0x000107c27b9c(&pppppppuStack_168);
      ppppppuVar7 = ppppppuVar15;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar12);
  }
  ppppppuVar12 = (undefined8 ******)&UNK_10f7741f3;
  func_0x000107c284bc();
  ppppppuStack_a0 = (undefined8 ******)uStack_160;
  pppppppuStack_a8 = pppppppuStack_168;
  if (-1 < (char)bStack_151) {
    ppppppuStack_a0 = (undefined8 ******)(ulong)bStack_151;
    pppppppuStack_a8 = &pppppppuStack_168;
  }
  ppppppuVar9 = (undefined8 ******)&UNK_10f774200;
  pppppppuStack_78 = (undefined8 *******)ppppppuVar12;
  ppppppuStack_70 = ppppppuVar7;
  func_0x000107c284bc();
  pppppppuStack_d8 = (undefined8 *******)ppppppuVar9;
  ppppppuStack_d0 = ppppppuVar7;
  func_0x000107c284bc();
  puVar13 = &UNK_10f774223;
  ppppppuStack_108 = (undefined8 ******)param_5;
  ppppppuStack_100 = ppppppuVar7;
  func_0x000107c284bc();
  pppppppuStack_138 = (undefined8 *******)puVar13;
  ppppppuStack_130 = ppppppuVar7;
  func_0x00010b4d3f4c();
  func_0x0001089ec284();
  func_0x00010bdb2988(&pppppppuStack_78,&UNK_10f7741b7,0x25b);
  func_0x00010ae6c448();
  func_0x00010bdb2990();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppppuStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_168);
  pbVar14 = (byte *)&uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pbVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
    __Unwind_Resume(pbVar14);
    func_0x00010b4d3f9c();
    lVar2 = extraout_x8_08;
    lVar16 = extraout_x9;
    while (lVar16 != 0) {
      func_0x00010b4d3fcc(lVar2 + 4);
      lVar2 = extraout_x8_09;
      lVar16 = extraout_x9_00;
    }
    return (undefined8 ******)pbVar14;
  }
  return (undefined8 ******)pbVar14;
}



/* Entry: 10b4c9354; end: 10b4c943b;  */

void FUN_10b4c9354(ulong param_1,undefined8 **param_2,undefined8 **param_3,undefined8 **param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long lVar10;
  long extraout_x9_00;
  long alStack_180 [3];
  undefined8 **ppuStack_168;
  ulong uStack_160;
  byte bStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 **ppuStack_138;
  long *plStack_130;
  undefined8 *puStack_108;
  long *plStack_100;
  undefined8 **ppuStack_d8;
  long *plStack_d0;
  undefined8 **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 **ppuStack_78;
  long *plStack_70;
  long lStack_48;
  
  ppuVar2 = param_2;
  func_0x000107c302c0(param_2,param_1 >> 3 & 0x1fffffff);
  FUN_10b4c5c84(param_2);
  func_0x00010b4c5cd8();
  func_0x00010b4ce624();
  ppuVar9 = (undefined8 **)alStack_180;
  ppuVar5 = (undefined8 **)alStack_180;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  ppuVar8 = (undefined8 **)&UNK_10f7741f2;
  pppuVar3 = &ppuStack_168;
  func_0x000107c278b8();
  if (param_4 != (undefined8 **)0x0) {
    if (ppuVar2 == (undefined8 **)0x0) {
      func_0x00010b4d3f84();
      ppuStack_a8 = param_3;
      puStack_a0 = param_4;
      ppuStack_78 = pppuVar3;
      plStack_70 = (long *)ppuVar8;
      func_0x00010b4d3f78();
      ppuStack_d8 = pppuVar3;
      plStack_d0 = (long *)ppuVar8;
      func_0x000107c2ba44(&puStack_108,&ppuStack_78,&ppuStack_a8,&ppuStack_d8);
      ppuVar8 = &puStack_108;
      func_0x000107c27b9c(&ppuStack_168);
      ppuVar5 = &puStack_108;
    }
    else {
      func_0x00010b4d3f84();
      pppuVar4 = (undefined8 ***)&DAT_10f62a9de;
      ppuStack_a8 = param_2;
      puStack_a0 = ppuVar2;
      ppuStack_78 = pppuVar3;
      plStack_70 = (long *)ppuVar8;
      func_0x000107c284bc();
      puStack_108 = param_3;
      plStack_100 = (long *)param_4;
      ppuStack_d8 = pppuVar4;
      plStack_d0 = (long *)ppuVar8;
      func_0x00010b4d3f78();
      ppuStack_138 = pppuVar4;
      plStack_130 = (long *)ppuVar8;
      func_0x00010b4d3f4c();
      func_0x0001089a5b70();
      func_0x000107c27b9c(&ppuStack_168);
      ppuVar8 = ppuVar9;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar5);
  }
  ppuVar5 = (undefined8 **)&UNK_10f7741f3;
  func_0x000107c284bc();
  puStack_a0 = (undefined8 *)uStack_160;
  ppuStack_a8 = ppuStack_168;
  if (-1 < (char)bStack_151) {
    puStack_a0 = (undefined8 *)(ulong)bStack_151;
    ppuStack_a8 = &ppuStack_168;
  }
  ppuVar2 = (undefined8 **)&UNK_10f774200;
  ppuStack_78 = ppuVar5;
  plStack_70 = (long *)ppuVar8;
  func_0x000107c284bc();
  ppuStack_d8 = ppuVar2;
  plStack_d0 = (long *)ppuVar8;
  func_0x000107c284bc();
  puVar6 = &UNK_10f774223;
  puStack_108 = param_5;
  plStack_100 = (long *)ppuVar8;
  func_0x000107c284bc();
  ppuStack_138 = (undefined8 **)puVar6;
  plStack_130 = (long *)ppuVar8;
  func_0x00010b4d3f4c();
  func_0x0001089ec284();
  func_0x00010bdb2988(&ppuStack_78,&UNK_10f7741b7,0x25b);
  func_0x00010ae6c448();
  func_0x00010bdb2990();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_168);
  puVar7 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_168);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_150);
  __Unwind_Resume(puVar7);
  func_0x00010b4d3f9c();
  lVar1 = extraout_x8;
  lVar10 = extraout_x9;
  while (lVar10 != 0) {
    func_0x00010b4d3fcc(lVar1 + 4);
    lVar1 = extraout_x8_00;
    lVar10 = extraout_x9_00;
  }
  return;
}



/* Entry: 10b4c943c; end: 10b4c952f;  */

ushort * FUN_10b4c943c(undefined8 param_1,ushort *param_2,undefined8 param_3,ulong param_4,
                      short *param_5)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  code *UNRECOVERED_JUMPTABLE_00;
  ushort *in_stack_00000030;
  
  func_0x000107c39bc4();
  func_0x000107c39a6c();
  if ((param_4 & 0xffff) == 0) {
    puVar3 = param_2 + 1;
    uVar1 = *param_2;
    uVar6 = *(ulong *)(unaff_x20 + 8);
    if ((uVar6 & 1) != 0) {
      func_0x00010b4ced58();
    }
    if (uVar6 == 0) {
      puVar5 = unaff_x21;
      func_0x000107c30310();
    }
    else {
      puVar4 = unaff_x21;
      puVar5 = puVar3;
      FUN_10b4bf128();
      puVar3 = puVar4;
    }
    if (puVar3 != (ushort *)0x0) {
      puVar4 = puVar3;
      func_0x000107c39c04(*(undefined8 *)(unaff_x20 + (param_4 >> 0x30)));
      if ((long)puVar5 < 0) {
        puVar4 = *(ushort **)puVar4;
      }
      func_0x000107c2ba54();
      if (((ulong)puVar4 & 1) != 0) {
        if (puVar3 < *(ushort **)unaff_x21) {
          func_0x000107c39928(*puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010029f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return puVar4;
        }
        if (*unaff_x19 != 0) {
          func_0x000107c39a48();
        }
        return puVar3;
      }
      FUN_10b4c9354((uint)uVar1 + (int)(char)uVar1 >> 1);
    }
    func_0x00010b4ce430();
LAB_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (ushort *)0x0;
  }
  func_0x00010b4ce31c();
  func_0x000100064c34();
  uVar6 = (ulong)(byte)*param_2;
  if ((char)(byte)*param_2 < '\0') {
    bVar2 = *(byte *)((long)param_2 + 1);
    if ((char)bVar2 < '\0') {
      uVar6 = (uVar6 & 0x7f) << 0x32 | (ulong)bVar2 << 0x39;
      bVar2 = (byte)param_2[1];
      if ((char)bVar2 < '\0') {
        if ((char)*(byte *)((long)param_2 + 3) < '\0') {
          if ((char)param_2[2] < '\0') {
            func_0x000100064e38(param_1);
            goto LAB_10b4c5d10;
          }
          func_0x000107c39ba4();
          uVar6 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar6 = (uVar6 >> 7 | (long)(char)bVar2 << 0x39) >> 0x2b |
                  (ulong)*(byte *)((long)param_2 + 3) << 0x15;
        }
      }
      else {
        uVar6 = uVar6 >> 0x32 | (ulong)bVar2 << 0xe;
      }
    }
    else {
      uVar6 = uVar6 & 0x7f | (ulong)bVar2 << 7;
    }
  }
  puVar3 = in_stack_00000030;
  func_0x000100064d5c(in_stack_00000030,uVar6 >> 3 & 0x1fffffff);
  if (puVar3 == (ushort *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000030 + 0x18);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)puVar3[5] & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar3;
}



/* Entry: 10b4c9530; end: 10b4c955f;  */

long FUN_10b4c9530(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  short *param_5)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  func_0x000100064c34();
  if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0')) {
    if (param_2[4] < '\0') {
      func_0x000100064e38(param_1);
      if (*param_5 != 0) {
        func_0x000107c39bb4();
      }
      return 0;
    }
    func_0x000107c39ba4();
  }
  lVar1 = unaff_x20;
  func_0x000100064d5c();
  if (lVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)*(ushort *)(lVar1 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return lVar1;
}



/* Entry: 10b4c9560; end: 10b4c99a3;  */

undefined2 *
FUN_10b4c9560(undefined2 *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined2 *extraout_x8_02;
  undefined2 *extraout_x8_03;
  short *unaff_x21;
  undefined2 *unaff_x23;
  ulong uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  long in_stack_00000008;
  undefined2 *in_stack_00000050;
  
  func_0x000107c39ab0();
  func_0x000107c399a8();
  uVar4 = (param_4 & 0xff) == 0;
  uVar3 = 0;
  if (!(bool)uVar4) {
    func_0x000107c39944();
    func_0x000100064c34();
    uVar6 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar1 = param_2[1];
      if ((char)bVar1 < '\0') {
        uVar6 = (uVar6 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
        bVar1 = param_2[2];
        if ((char)bVar1 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x000100064e38(param_1);
              goto LAB_10b4c5d10;
            }
            func_0x000107c39ba4();
            uVar6 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar6 = (uVar6 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar6 = uVar6 >> 0x32 | (ulong)bVar1 << 0xe;
        }
      }
      else {
        uVar6 = uVar6 & 0x7f | (ulong)bVar1 << 7;
      }
    }
    puVar5 = in_stack_00000050;
    func_0x000100064d5c(in_stack_00000050,uVar6 >> 3 & 0x1fffffff);
    if (puVar5 == (undefined2 *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000050 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_LAB_110cf0bf0)[(ulong)(ushort)puVar5[5] & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar5;
  }
  func_0x000107c39bf4();
  if (extraout_x8_00 != 0) {
    func_0x00010b4ce140();
    func_0x00010b4ce510();
    if (((bool)uVar4) && (func_0x00010b4ce504(), (int)param_1 != 0)) {
      do {
        func_0x000107c39a34((long)unaff_x23 + 1);
        if (in_stack_00000008 == 0) goto LAB_10b4c9644;
        func_0x00010b4ced20();
        if (extraout_x8_01 == 0) {
          func_0x00010b4ceb18();
          uVar2 = uVar4;
        }
        else {
          func_0x00010b4ce254();
          uVar2 = uVar4;
        }
        func_0x00010b4ce100();
        func_0x00010b4ce2b0();
        if (param_1 == (undefined2 *)0x0) goto LAB_10b4c9644;
        func_0x000107c39b0c();
        if ((bool)uVar3) goto LAB_10b4c962c;
        func_0x000107c39b6c();
        uVar4 = 1;
        puVar5 = extraout_x8_02;
      } while ((bool)uVar2);
      goto LAB_10b4c9610;
    }
  }
  do {
    uVar2 = uVar4;
    func_0x000107c39b10();
    func_0x000107c39ab8();
    if (param_1 == (undefined2 *)0x0) goto LAB_10b4c9644;
    func_0x000107c39b0c();
    if ((bool)uVar3) goto LAB_10b4c962c;
    func_0x000107c39b6c();
    uVar4 = 1;
    puVar5 = extraout_x8_03;
  } while ((bool)uVar2);
LAB_10b4c9610:
  if (unaff_x23 < puVar5) {
    func_0x000107c39948(*unaff_x23);
    func_0x000107c39944();
                    /* WARNING: Could not recover jumptable at 0x0001000690fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  }
LAB_10b4c962c:
  if (*unaff_x21 != 0) {
    func_0x00010b4ce614();
  }
  return unaff_x23;
LAB_10b4c9644:
  func_0x00010b4ce498();
LAB_10b4c5d10:
  if (*param_5 != 0) {
    func_0x000107c39bb4();
  }
  return (undefined2 *)0x0;
}



/* Entry: 10b4c99a4; end: 10b4c9a27;  */

long FUN_10b4c99a4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = (ulong)*(uint *)(param_2 + 0x18) + param_2;
  uVar4 = (ulong)*(uint *)(lVar1 + 8);
  if (*(long *)(param_1 + uVar4) != *(long *)(*(long *)(param_2 + 0x20) + uVar4)) {
    return *(long *)(param_1 + uVar4);
  }
  uVar3 = (ulong)*(uint *)(lVar1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (uVar2 == 0) {
    __Znwm();
  }
  else {
    func_0x00010888f420(uVar2,uVar3,8);
    uVar3 = uVar2;
  }
  *(ulong *)(param_1 + uVar4) = uVar3;
  _memcpy();
  return *(long *)(param_1 + uVar4);
}



/* Entry: 10b4c9a28; end: 10b4c9c7b;  */

void FUN_10b4c9a28(undefined8 param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  int iVar7;
  undefined1 uVar8;
  undefined ***pppuVar9;
  undefined1 **ppuVar10;
  undefined **ppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 *puStack_68;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  
  pppuVar9 = &ppuStack_d0;
  iVar7 = (int)&ppuStack_d0;
  func_0x00010b4ce058();
  pppuStack_c0 = (undefined8 ****)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  pppuStack_c8 = &pppuStack_c0;
  ppuStack_d0 = &PTR_DAT_110cf0fb0;
  uStack_60 = 0;
  uStack_5e = uRam000000011383d940;
  uStack_5d = 0;
  puStack_98 = auStack_88;
  puStack_90 = auStack_88;
  puStack_68 = (undefined1 *)&ppuStack_d0;
  puStack_58 = auStack_88;
  FUN_10b4d667c();
  puStack_50 = (undefined1 *)pppuVar9;
  FUN_10b4d64e4(&ppuStack_d0,&puStack_a0,&uStack_a4);
  iVar2 = 0;
  if (0 < (int)uStack_a4) {
    iVar2 = iVar7;
  }
  if (iVar2 == 1) {
    puStack_98 = puStack_a0 + ((ulong)uStack_a4 - 0x10);
    if (uStack_a4 < 0x11) {
      puStack_98 = auStack_88 + uStack_a4;
    }
    puStack_90 = (undefined1 *)0x0;
    puStack_58 = puStack_a0;
    if (uStack_a4 < 0x11) {
      puStack_90 = puStack_a0;
      puStack_58 = auStack_88;
    }
  }
  uVar1 = (uint)param_5 & 0xff;
  switch((uint)param_5 & 7) {
  default:
    uVar4 = uVar1 >> 3 & 7;
    if (uVar4 == 2) {
      if ((uVar1 >> 6 & 1) == 0) {
        if (uVar1 >> 7 == 0) {
          func_0x00010b4ce9e8();
          func_0x00010b4d39d8();
        }
        else {
          func_0x00010b4ce9e8();
          func_0x00010b4d3998();
        }
      }
      else {
        func_0x00010b4ce9e8();
        func_0x00010b4d3a20();
      }
    }
    else if (uVar4 == 1) {
      if ((uVar1 >> 6 & 1) == 0) {
        if (uVar1 >> 7 != 0) {
          func_0x00010b4ce9e8();
          goto code_r0x00010b4c9bc8;
        }
        func_0x00010b4ce9e8();
        func_0x00010b4d39bc();
      }
      else {
        func_0x00010b4ce9e8();
        func_0x00010b4d39fc();
      }
    }
    else {
      func_0x00010b4ce9e8();
      func_0x00010b4d3aa8();
    }
    break;
  case 1:
    func_0x00010b4ce9e8();
    func_0x00010b4d3a78();
    break;
  case 2:
    func_0x00010b4ce9e8();
    func_0x00010b4d3ac4();
    break;
  case 3:
  case 4:
    goto code_r0x00010b4c9c54;
  case 5:
    func_0x00010b4ce9e8();
    func_0x00010b4d3a48();
    break;
  case 7:
code_r0x00010b4c9bc8:
    func_0x00010b4d3978();
  }
  func_0x00010b4d3978(2,*(undefined4 *)(param_4 + (param_5 >> 0x20 & 0xffff)),&puStack_98);
  ppuVar10 = &puStack_98;
  FUN_10b4d51a4();
  func_0x00010b4ce9cc(*(undefined8 *)(param_2 + 0x30));
  uVar8 = uStack_b0._7_1_ == 0;
  uVar3 = uStack_b8;
  ppppuVar5 = (undefined8 ****)pppuStack_c0;
  if (-1 < uStack_b0) {
    uVar3 = (ulong)uStack_b0._7_1_;
    ppppuVar5 = &pppuStack_c0;
  }
  (*(code *)ppuVar10[1])(param_1,param_3 >> 3 & 0x1fffffff,ppppuVar5,uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_c0);
  func_0x000107c39924();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010b4c9c54:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b4c9c58);
  (*pcVar6)();
}



/* Entry: 10b4c9c7c; end: 10b4c9cfb;  */

void FUN_10b4c9c7c(long param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x000107c39b70();
  if ((param_2 & 0x38) == 0x18) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  }
  uVar2 = (uint)unaff_x21 >> 0xb & 7;
  uVar1 = (ushort)(unaff_x21 >> 0x20);
  if (uVar2 == 4) {
    (*(code *)**(undefined8 **)(param_1 + (ulong)uVar1))();
  }
  else if (uVar2 == 3) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + (ulong)uVar1);
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1,param_1,unaff_x21 >> 0x30);
  return;
}



/* Entry: 10b4c9cfc; end: 10b4c9df3;  */

ulong FUN_10b4c9cfc(ulong param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 extraout_w8;
  int extraout_w8_00;
  undefined8 uVar6;
  uint uStack_4c;
  ulong uStack_48;
  
  uVar1 = *(ushort *)(param_5 + 2);
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  uVar4 = param_1;
  uStack_48 = param_2;
  do {
    func_0x000107c39a50();
    if ((uVar4 & 1) != 0) {
      return uStack_48;
    }
    func_0x00010b4ce6b8(uStack_48,&uStack_4c);
    if (uStack_48 == 0) {
      return 0;
    }
    cVar2 = SBORROW4(uStack_4c,0xb);
    cVar3 = (int)(uStack_4c - 0xb) < 0;
    if (uStack_4c == 0xb) {
      uVar5 = uStack_48;
      func_0x00010b4ce8a0();
      *(undefined4 *)(param_3 + 0x58) = extraout_w8;
      if (cVar3 != cVar2) {
        return 0;
      }
      func_0x00010b4ce39c();
      uVar4 = param_1 + uVar1;
      FUN_10b4c1c84(uVar4,uVar5,uVar6,param_1 + 8,param_3);
      func_0x00010b4ce32c();
      if (extraout_w8_00 != 0xb) {
        return 0;
      }
    }
    else {
      if ((uStack_4c == 0) || ((uStack_4c & 7) == 4)) {
        *(uint *)(param_3 + 0x50) = uStack_4c - 1;
        return uStack_48;
      }
      uVar4 = param_1 + uVar1;
      FUN_10b4c1208();
    }
    uStack_48 = uVar4;
    if (uVar4 == 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10b4c9df4; end: 10b4c9e13;  */

void FUN_10b4c9df4(void)

{
  func_0x00010b4ced80();
  func_0x00010b4ced70();
  return;
}



/* Entry: 10b4c9e14; end: 10b4c9e5f;  */

ulong FUN_10b4c9e14(undefined8 param_1,ulong param_2,long param_3,ulong param_4,short *param_5)

{
  uint uVar1;
  long extraout_x8;
  undefined8 uStack_18;
  
  if (*param_5 != 0) {
    func_0x000107c39bc0();
    param_3 = extraout_x8;
  }
  uVar1 = (uint)param_4;
  if ((uVar1 != 0) && ((uVar1 & 7) != 4)) {
    uStack_18 = 0;
    param_4 = param_4 & 0xffffffff;
    FUN_10b4d242c(param_4,&uStack_18);
    return param_4;
  }
  *(uint *)(param_3 + 0x50) = uVar1 - 1;
  return param_2;
}



/* Entry: 10b4c9e60; end: 10b4c9ea3;  */

/* WARNING: Possible PIC construction at 0x00010b4d217c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4d2180) */

void FUN_10b4c9e60(long param_1,int param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  uVar2 = (ulong)(uint)(param_2 << 3);
  while( true ) {
    if (uVar2 < 0x80) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar1,(int)(char)uVar2 | 0xffffff80);
    uVar2 = uVar2 >> 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_110346318)
            (puVar1);
  return;
}



/* Entry: 10b4c9ea4; end: 10b4c9ef7;  */

void FUN_10b4c9ea4(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  func_0x00010b4d2194(param_2 << 3 | 2,puVar1);
  func_0x00010b4d2194(param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (puVar1,param_3,param_4);
  return;
}



/* Entry: 10b4c9ef8; end: 10b4ca493;  */

code * FUN_10b4c9ef8(code *param_1,code *param_2,undefined8 *param_3,code *param_4,ushort *param_5,
                    uint param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  code *pcVar11;
  code *pcVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE_02;
  int extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  ulong uVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  uint extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar17;
  ulong extraout_x9_03;
  long extraout_x9_04;
  long extraout_x11;
  int iVar18;
  code *unaff_x20;
  code *unaff_x21;
  int iVar19;
  code *unaff_x22;
  uint uVar20;
  undefined8 *unaff_x23;
  uint *unaff_x24;
  undefined8 uVar21;
  code *unaff_x25;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_w27;
  uint unaff_w28;
  undefined8 unaff_x29;
  code *unaff_x30;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ushort *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  code *in_stack_00000068;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  ushort *puStack_a0;
  code *pcStack_98;
  undefined4 auStack_80 [2];
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_58;
  code *pcStack_48;
  uint *puStack_40;
  undefined8 *puStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  undefined8 uStack_10;
  code *pcStack_8;
  
  while( true ) {
    UNRECOVERED_JUMPTABLE_01 = param_4;
    pcVar12 = param_2;
    UNRECOVERED_JUMPTABLE = (code *)&uStack_10;
    UNRECOVERED_JUMPTABLE_00 = param_1;
    puVar13 = param_3;
    pcStack_48 = unaff_x25;
    puStack_40 = unaff_x24;
    puStack_38 = unaff_x23;
    pcStack_30 = unaff_x22;
    pcStack_28 = unaff_x21;
    pcStack_20 = unaff_x20;
    uStack_10 = unaff_x29;
    pcStack_8 = unaff_x30;
    func_0x00010b4ce244();
    uVar15 = (ulong)UNRECOVERED_JUMPTABLE_01 & 7;
    cVar8 = SBORROW8(uVar15,2);
    cVar9 = (long)(uVar15 - 2) < 0;
    uVar10 = uVar15 == 2;
    if ((bool)uVar10) break;
    func_0x00010b4cdf40(extraout_x8);
    uVar7 = uVar10;
    if (!(bool)uVar10) goto LAB_10b4ca368;
    func_0x00010b4ce7a8();
    uVar21 = uStack_10;
    unaff_x21 = pcStack_28;
    func_0x000107c39ab0();
    in_stack_00000060 = uVar21;
    in_stack_00000068 = pcStack_8;
    func_0x00010b4ce96c();
    if (((ulong)UNRECOVERED_JUMPTABLE_01 & 7) == 0) {
      UNRECOVERED_JUMPTABLE = unaff_x21 + ((ulong)UNRECOVERED_JUMPTABLE_01 >> 0x20);
      uVar3 = *(ushort *)(UNRECOVERED_JUMPTABLE + 10);
      uVar5 = uVar3 >> 6 & 7;
      if (uVar5 == 0) {
        uVar4 = *(uint *)UNRECOVERED_JUMPTABLE;
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
        goto LAB_10b4cb8b8;
      }
      uVar7 = 1 < uVar5;
      uVar10 = uVar5 == 2;
      if (!(bool)uVar10) {
        if ((uVar3 & 0x600) == 0) {
          uVar4 = *(uint *)UNRECOVERED_JUMPTABLE;
          uVar10 = 0;
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
          goto LAB_10b4cb934;
        }
        uVar4 = *(uint *)UNRECOVERED_JUMPTABLE;
        uVar10 = 0;
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
        goto LAB_10b4cb8fc;
      }
      switch(uVar3 & 0x600) {
      default:
        uVar10 = 1;
        uVar7 = 1;
        goto code_r0x00010b4cb868;
      case 0x200:
      case 0x220:
      case 0x240:
      case 0x260:
      case 0x280:
      case 0x2a0:
      case 0x2c0:
      case 0x2e0:
      case 0x300:
      case 800:
      case 0x340:
      case 0x360:
      case 0x380:
      case 0x3a0:
      case 0x3c0:
      case 0x3e0:
        uVar10 = 1;
        uVar7 = 1;
        goto code_r0x00010b4cba28;
      case 0x400:
      case 0x420:
      case 0x440:
      case 0x460:
      case 0x480:
      case 0x4a0:
      case 0x4c0:
      case 0x4e0:
      case 0x500:
      case 0x520:
      case 0x540:
      case 0x560:
      case 0x580:
      case 0x5a0:
      case 0x5c0:
      case 0x5e0:
        func_0x00010b4cf2b8();
        UNRECOVERED_JUMPTABLE_02 = pcStack_8;
        goto code_r0x00010b4cb974;
      case 0x600:
      case 0x620:
      case 0x640:
      case 0x660:
      case 0x680:
      case 0x6a0:
      case 0x6c0:
      case 0x6e0:
      case 0x700:
      case 0x720:
      case 0x740:
      case 0x760:
      case 0x780:
      case 0x7a0:
      case 0x7c0:
      case 0x7e0:
        func_0x00010b4cf2b8();
        func_0x00010b4ceea0(*(undefined8 *)(extraout_x9_04 + extraout_x8_05 * 8));
        UNRECOVERED_JUMPTABLE_02 = pcStack_8;
      }
      goto code_r0x00010b4cb9e8;
    }
    if (((uint)UNRECOVERED_JUMPTABLE_01 & 7) != 2) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x21 + 0x30);
      func_0x00010b4cf1b8();
      func_0x00010b4ce6e0();
                    /* WARNING: Could not recover jumptable at 0x0001000690fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE_00;
    }
    param_1 = UNRECOVERED_JUMPTABLE_00;
    param_2 = pcVar12;
    func_0x00010b4cf1b8();
    param_3 = puVar13;
    param_4 = UNRECOVERED_JUMPTABLE_01;
    func_0x00010b4ce6e0();
    unaff_x29 = in_stack_00000060;
    unaff_x30 = in_stack_00000068;
    func_0x00010b4ce5e8();
    unaff_x20 = UNRECOVERED_JUMPTABLE_00;
    unaff_x22 = UNRECOVERED_JUMPTABLE_01;
    unaff_x23 = puVar13;
    unaff_x24 = puStack_40;
    unaff_x25 = pcVar12;
  }
  puVar1 = (uint *)((long)param_5 + ((ulong)UNRECOVERED_JUMPTABLE_01 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  uVar15 = (ulong)*param_5;
  if (uVar15 != 0) {
    *(uint *)(param_1 + uVar15) = *(uint *)(param_1 + uVar15) | param_6;
  }
  uVar4 = uVar3 >> 6 & 7;
  uStack_58 = extraout_x8;
  if ((uVar3 >> 6 & 7) == 0) {
    unaff_x22 = (code *)(ulong)*puVar1;
    func_0x00010b4ce698();
    func_0x00010b4cee28();
    pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
    pcVar11 = UNRECOVERED_JUMPTABLE_01;
    puVar14 = param_5;
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4ca338;
    while (func_0x00010b4ce754(), !(bool)uVar10 && cVar9 == cVar8) {
      func_0x00010b4cbc8c();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4ca338;
      func_0x00010b4ce26c();
      if ((bool)uVar10 || cVar9 != cVar8) {
        func_0x00010b4cdeac();
        if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_10b4ca36c;
        func_0x00010b4ce728();
        func_0x00010b4cbc8c();
        goto LAB_10b4ca25c;
      }
      func_0x00010b4ce6d4();
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (cVar9 != cVar8) goto LAB_10b4ca334;
      func_0x00010b4ce654();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4ca338;
      func_0x00010b4ce41c();
    }
    func_0x00010b4ceee0();
    func_0x00010b4cbc8c();
    pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
    pcVar11 = UNRECOVERED_JUMPTABLE_01;
    puVar14 = param_5;
    UNRECOVERED_JUMPTABLE_00 = param_1;
    goto LAB_10b4ca2ac;
  }
  cVar8 = SBORROW4(uVar4,2);
  cVar9 = (int)(uVar4 - 2) < 0;
  uVar10 = uVar4 == 2;
  if ((bool)uVar10) {
    switch(uVar3 & 0x600) {
    default:
      func_0x00010b4ce698();
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      param_1 = UNRECOVERED_JUMPTABLE_00;
      if (pcStack_d0 != (code *)0x0) {
code_r0x00010b4c9f94:
        unaff_x22 = (code *)(param_3[1] - (long)pcStack_d0);
        iVar18 = (int)UNRECOVERED_JUMPTABLE_00;
        iVar19 = (int)unaff_x22;
        cVar8 = SBORROW4(iVar18,iVar19);
        cVar9 = iVar18 - iVar19 < 0;
        uVar10 = iVar18 == iVar19;
        if (iVar18 <= iVar19) goto code_r0x00010b4ca288;
        func_0x00010b4cbb18();
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        if (pcStack_d0 == (code *)0x0) break;
        func_0x00010b4cefd0();
        if (!(bool)uVar10 && cVar9 == cVar8) {
          func_0x00010b4ce6d4();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (cVar9 == cVar8) {
            func_0x00010b4ce654();
            pcVar11 = UNRECOVERED_JUMPTABLE_01;
            puVar14 = param_5;
            if (pcStack_d0 != (code *)0x0) goto code_r0x00010b4c9fcc;
            break;
          }
          goto LAB_10b4ca334;
        }
        func_0x00010b4cdfe8();
        auStack_80[0] = (int)unaff_x24;
        func_0x00010b4cdef8();
        if (pcStack_d0 != (code *)0x0) goto LAB_10b4ca36c;
        func_0x00010b4cefa0();
        func_0x00010b4cbb18();
code_r0x00010b4ca32c:
        uVar10 = pcStack_d0 == UNRECOVERED_JUMPTABLE_00;
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        param_1 = UNRECOVERED_JUMPTABLE_00;
        if ((bool)uVar10) {
          func_0x000107c39ad0();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          break;
        }
LAB_10b4ca334:
        pcStack_d0 = (code *)0x0;
      }
      break;
    case 0x200:
    case 0x220:
    case 0x240:
    case 0x260:
    case 0x280:
    case 0x2a0:
    case 0x2c0:
    case 0x2e0:
    case 0x300:
    case 800:
    case 0x340:
    case 0x360:
    case 0x380:
    case 0x3a0:
    case 0x3c0:
    case 0x3e0:
      func_0x00010b4ce698();
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      param_1 = UNRECOVERED_JUMPTABLE_00;
      if (pcStack_d0 != (code *)0x0) {
        while( true ) {
          unaff_x22 = (code *)(param_3[1] - (long)pcStack_d0);
          iVar18 = (int)UNRECOVERED_JUMPTABLE_00;
          iVar19 = (int)unaff_x22;
          cVar8 = SBORROW4(iVar18,iVar19);
          cVar9 = iVar18 - iVar19 < 0;
          uVar10 = iVar18 == iVar19;
          if (iVar18 <= iVar19) break;
          func_0x00010b4cbb58();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (pcStack_d0 == (code *)0x0) goto LAB_10b4ca338;
          func_0x00010b4cefd0();
          if ((bool)uVar10 || cVar9 != cVar8) {
            func_0x00010b4cdfe8();
            auStack_80[0] = (int)unaff_x24;
            func_0x00010b4cdef8();
            if (pcStack_d0 != (code *)0x0) goto LAB_10b4ca36c;
            func_0x00010b4cefa0();
            func_0x00010b4cbb58();
            goto code_r0x00010b4ca32c;
          }
          func_0x00010b4ce6d4();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (cVar9 != cVar8) goto LAB_10b4ca334;
          func_0x00010b4ce654();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (pcStack_d0 == (code *)0x0) goto LAB_10b4ca338;
          func_0x00010b4cf298();
        }
        func_0x00010b4cbb58();
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        goto LAB_10b4ca2ac;
      }
      break;
    case 0x400:
    case 0x420:
    case 0x440:
    case 0x460:
    case 0x480:
    case 0x4a0:
    case 0x4c0:
    case 0x4e0:
    case 0x500:
    case 0x520:
    case 0x540:
    case 0x560:
    case 0x580:
    case 0x5a0:
    case 0x5c0:
    case 0x5e0:
      func_0x000107c39b18();
      pcStack_b0 = *(code **)(extraout_x9 + extraout_x8_00 * 8);
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      func_0x000107c39a58();
      func_0x00010b4cef1c();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcStack_b8 = pcVar12;
      pcStack_a8 = param_1;
      puStack_a0 = param_5;
      pcStack_98 = UNRECOVERED_JUMPTABLE_01;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
code_r0x00010b4ca0fc:
        func_0x00010b4ce4a8();
        if (!(bool)uVar10 && cVar9 == cVar8) {
          func_0x00010b4cbba0();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcStack_b8 = UNRECOVERED_JUMPTABLE_00;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) break;
          func_0x00010b4ce040();
          if (!(bool)uVar10 && cVar9 == cVar8) {
            func_0x00010b4ce6d4();
            if (cVar9 == cVar8) {
              func_0x00010b4ce654();
              if (pcStack_d0 != (code *)0x0) goto code_r0x00010b4ca12c;
              break;
            }
            goto LAB_10b4ca334;
          }
          func_0x00010b4ce194();
          func_0x00010b4cddcc();
          if (pcStack_d0 == (code *)0x0) {
            func_0x00010b4ce344();
            func_0x00010b4cbba0();
code_r0x00010b4ca2e8:
            uVar10 = pcStack_d0 == param_1;
            pcStack_a8 = param_1;
            if (!(bool)uVar10) goto LAB_10b4ca334;
            func_0x00010b4cedf0();
            break;
          }
          goto code_r0x00010b4ca384;
        }
        func_0x00010b4ce890();
        func_0x00010b4cbba0();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        UNRECOVERED_JUMPTABLE_00 = param_1;
        goto LAB_10b4ca2ac;
      }
      break;
    case 0x600:
    case 0x620:
    case 0x640:
    case 0x660:
    case 0x680:
    case 0x6a0:
    case 0x6c0:
    case 0x6e0:
    case 0x700:
    case 0x720:
    case 0x740:
    case 0x760:
    case 0x780:
    case 0x7a0:
    case 0x7c0:
    case 0x7e0:
      func_0x000107c39b18();
      pcStack_b0 = *(code **)(extraout_x9_00 + extraout_x8_01 * 8);
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      func_0x000107c39a58();
      func_0x00010b4cef1c();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcStack_b8 = pcVar12;
      pcStack_a8 = param_1;
      puStack_a0 = param_5;
      pcStack_98 = UNRECOVERED_JUMPTABLE_01;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
        while (func_0x00010b4ce4a8(), !(bool)uVar10 && cVar9 == cVar8) {
          func_0x00010b4cbc30();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcStack_b8 = UNRECOVERED_JUMPTABLE_00;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4ca338;
          func_0x00010b4ce040();
          if ((bool)uVar10 || cVar9 != cVar8) {
            func_0x00010b4ce194();
            func_0x00010b4cddcc();
            if (pcStack_d0 != (code *)0x0) goto code_r0x00010b4ca384;
            func_0x00010b4ce344();
            func_0x00010b4cbc30();
            goto code_r0x00010b4ca2e8;
          }
          func_0x00010b4ce6d4();
          if (cVar9 != cVar8) goto LAB_10b4ca334;
          func_0x00010b4ce654();
          if (pcStack_d0 == (code *)0x0) goto LAB_10b4ca338;
          func_0x00010b4ce4c8();
          UNRECOVERED_JUMPTABLE_00 = pcStack_d0;
          pcStack_b8 = pcStack_d0;
        }
        func_0x00010b4ce890();
        func_0x00010b4cbc30();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        UNRECOVERED_JUMPTABLE_00 = param_1;
        goto LAB_10b4ca2ac;
      }
    }
  }
  else {
    unaff_x22 = (code *)(ulong)*puVar1;
    if ((uVar3 & 0x600) == 0) {
      func_0x00010b4ce698();
      func_0x00010b4cee28();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
        while (func_0x00010b4ce754(), !(bool)uVar10 && cVar9 == cVar8) {
          func_0x00010b4cba90();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4ca338;
          func_0x00010b4ce26c();
          if ((bool)uVar10 || cVar9 != cVar8) {
            func_0x00010b4cdeac();
            if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto LAB_10b4ca36c;
            func_0x00010b4ce728();
            func_0x00010b4cba90();
            goto LAB_10b4ca25c;
          }
          func_0x00010b4ce6d4();
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (cVar9 != cVar8) goto LAB_10b4ca334;
          func_0x00010b4ce654();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4ca338;
          func_0x00010b4ce41c();
        }
        func_0x00010b4ceee0();
        func_0x00010b4cba90();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        UNRECOVERED_JUMPTABLE_00 = param_1;
        goto LAB_10b4ca2ac;
      }
    }
    else {
      func_0x00010b4ce698();
      func_0x00010b4cee28();
      pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
      pcVar11 = UNRECOVERED_JUMPTABLE_01;
      puVar14 = param_5;
      if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
LAB_10b4ca05c:
        func_0x00010b4ce754();
        if (!(bool)uVar10 && cVar9 == cVar8) {
          func_0x00010b4cbad0();
          pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
          pcVar11 = UNRECOVERED_JUMPTABLE_01;
          puVar14 = param_5;
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4ca338;
          func_0x00010b4ce26c();
          if (!(bool)uVar10 && cVar9 == cVar8) {
            func_0x00010b4ce6d4();
            pcVar11 = UNRECOVERED_JUMPTABLE_01;
            puVar14 = param_5;
            if (cVar9 == cVar8) {
              func_0x00010b4ce654();
              pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
              pcVar11 = UNRECOVERED_JUMPTABLE_01;
              puVar14 = param_5;
              if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) goto code_r0x00010b4ca08c;
              goto LAB_10b4ca338;
            }
            goto LAB_10b4ca334;
          }
          func_0x00010b4cdeac();
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            func_0x00010b4ce728();
            func_0x00010b4cbad0();
LAB_10b4ca25c:
            uVar10 = UNRECOVERED_JUMPTABLE_00 == unaff_x21;
            pcVar11 = UNRECOVERED_JUMPTABLE_01;
            puVar14 = param_5;
            if (!(bool)uVar10) goto LAB_10b4ca334;
            pcStack_d0 = unaff_x25 + param_3[1];
            goto LAB_10b4ca338;
          }
          goto LAB_10b4ca36c;
        }
        func_0x00010b4ceee0();
        func_0x00010b4cbad0();
        pcStack_d0 = UNRECOVERED_JUMPTABLE_00;
        pcVar11 = UNRECOVERED_JUMPTABLE_01;
        puVar14 = param_5;
        UNRECOVERED_JUMPTABLE_00 = param_1;
        goto LAB_10b4ca2ac;
      }
    }
  }
LAB_10b4ca338:
  func_0x00010b4cdf40(uStack_58);
  uVar7 = 0;
  UNRECOVERED_JUMPTABLE_01 = pcVar11;
  param_5 = puVar14;
  if ((bool)uVar10) {
    return pcStack_d0;
  }
LAB_10b4ca368:
  uVar10 = uVar7;
  ___stack_chk_fail();
LAB_10b4ca36c:
  func_0x00010802bcb8();
  func_0x00010b4cdfb8();
  func_0x00010b4ce6c0(auStack_80);
  pcStack_d0 = (code *)auStack_80;
  func_0x00010ae6c700(pcStack_d0);
  pcVar11 = UNRECOVERED_JUMPTABLE_01;
  puVar14 = param_5;
code_r0x00010b4ca384:
  func_0x00010802bcb8();
  func_0x00010b4cde28();
  func_0x00010b4ce7b4();
  UNRECOVERED_JUMPTABLE_01 = (code *)0x10b4ca390;
  func_0x000107c39bc4();
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_01;
  func_0x000107c39a5c();
  func_0x00010b4ceca0();
  if (!(bool)uVar10) {
    uVar4 = extraout_w9 & 0x1c0;
    uVar20 = (uint)pcVar11 & 7;
    if (uVar4 == 0xc0) {
      if (uVar20 == 1) {
LAB_10b4ca400:
        if (extraout_w8 == 0x30) {
          func_0x00010b4cec24();
        }
        else if (extraout_w8 == 0x10) {
          func_0x00010b4ce284(unaff_x24[1]);
          *(uint *)(unaff_x22 + extraout_x9_01) =
               extraout_w8_00 | *(uint *)(unaff_x22 + extraout_x9_01);
        }
        bVar6 = 0xbf < uVar4;
        if (uVar4 == 0xc0) {
          *(undefined8 *)(unaff_x22 + *unaff_x24) = *unaff_x23;
          lVar16 = 8;
        }
        else {
          *(undefined4 *)(unaff_x22 + *unaff_x24) = *(undefined4 *)unaff_x23;
          lVar16 = 4;
        }
        UNRECOVERED_JUMPTABLE = (code *)((long)unaff_x23 + lVar16);
        func_0x000107c39b2c();
        if (bVar6) {
          if (*(short *)param_1 != 0) {
            func_0x00010b4ce718();
          }
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x000107c39900(*(undefined2 *)UNRECOVERED_JUMPTABLE);
        goto code_r0x00010029f874;
      }
    }
    else if (uVar20 == 5) goto LAB_10b4ca400;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_1 + 0x30);
    func_0x000107c39bb0();
    unaff_x22 = pcStack_d0;
code_r0x00010029f874:
    func_0x000107c39a38();
                    /* WARNING: Could not recover jumptable at 0x00010029f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return unaff_x22;
  }
  func_0x000107c39bb0();
  func_0x000107c39a38();
  while( true ) {
    func_0x000107c39b14();
    pcStack_30 = UNRECOVERED_JUMPTABLE;
    pcStack_28 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c39a5c();
    func_0x00010b4cf1c4();
    func_0x00010b4ce8ac();
    uVar20 = (uint)pcStack_b8;
    uVar4 = uVar20 & 7;
    uVar10 = uVar4 == 2;
    if (!(bool)uVar10) break;
    func_0x00010b4ce788();
    func_0x00010b4ceccc();
    func_0x000107c39a38();
    UNRECOVERED_JUMPTABLE = pcStack_30;
    UNRECOVERED_JUMPTABLE_01 = pcStack_28;
    func_0x00010b4ce8b8();
    UNRECOVERED_JUMPTABLE_02 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c399e8();
    func_0x00010b4cf0e4();
    if ((bool)uVar10) {
      puVar1 = (uint *)((long)puStack_a0 + ((ulong)pcVar11 >> 0x20));
      uVar3 = *(ushort *)((long)puVar1 + 10);
      func_0x000107c39a8c();
      UNRECOVERED_JUMPTABLE = pcStack_b0;
      if ((uVar3 & 0x1c0) == 0xc0) {
        FUN_10b4cbe9c();
      }
      else {
        FUN_10b4cbfb4(pcStack_b0,pcStack_c8,pcStack_d0,pcStack_a8 + *puVar1);
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        func_0x00010b4ce184();
        param_5 = puVar14;
        goto LAB_10b4c5d10;
      }
      if (*(code **)pcStack_b0 <= UNRECOVERED_JUMPTABLE) {
        if (*puStack_a0 == 0) {
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x000107c39990();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c398fc(*(short *)UNRECOVERED_JUMPTABLE);
      func_0x00010b4ce174();
      goto LAB_10b4ce684;
    }
    pcStack_d0 = pcStack_a8;
    func_0x00010b4ce174(pcStack_a8);
  }
  puVar1 = (uint *)((long)puStack_a0 + ((ulong)pcStack_b8 >> 0x20));
  if ((*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0xc0) {
    uVar10 = ((ulong)pcStack_b8 & 7) != 0;
    if (uVar4 != 1) {
LAB_10b4cbdd0:
      UNRECOVERED_JUMPTABLE_01 = *(code **)(puStack_a0 + 0x18);
      func_0x00010b4ce788();
      func_0x00010b4ceccc();
      goto code_r0x000100068b64;
    }
    uVar4 = *puVar1;
    do {
      UNRECOVERED_JUMPTABLE = pcStack_c8 + 8;
      uVar21 = *(undefined8 *)pcStack_c8;
      pcStack_d0 = pcStack_a8 + uVar4;
      FUN_10b4cbe14();
      *(undefined8 *)pcStack_d0 = uVar21;
      func_0x000107c39b50();
      if ((bool)uVar10) goto LAB_10b4cbde8;
      func_0x00010b4ce368();
      if (pcStack_d0 == (code *)0x0) goto LAB_10b4cbe08;
      uVar10 = uVar20 <= uStack_74;
      pcStack_c8 = pcStack_d0;
    } while (uStack_74 == uVar20);
  }
  else {
    if (uVar4 != 5) goto LAB_10b4cbdd0;
    uVar4 = *puVar1;
    uVar10 = true;
    do {
      UNRECOVERED_JUMPTABLE = pcStack_c8 + 4;
      uVar2 = *(undefined4 *)pcStack_c8;
      pcStack_d0 = pcStack_a8 + uVar4;
      func_0x00010b4cbe58();
      *(undefined4 *)pcStack_d0 = uVar2;
      func_0x000107c39b50();
      if ((bool)uVar10) goto LAB_10b4cbde8;
      func_0x00010b4ce368();
      if (pcStack_d0 == (code *)0x0) goto LAB_10b4cbe08;
      uVar10 = uVar20 <= uStack_78;
      pcStack_c8 = pcStack_d0;
    } while (uStack_78 == uVar20);
  }
  func_0x000107c39af4();
  if ((bool)uVar10) {
LAB_10b4cbde8:
    uVar3 = *puStack_a0;
    if (uVar3 != 0) {
      *(uint *)(pcStack_a8 + uVar3) = *(uint *)(pcStack_a8 + (uint)uVar3) | (uint)pcStack_98;
    }
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c398fc(*(short *)UNRECOVERED_JUMPTABLE);
  func_0x000107c39aa4();
code_r0x000100068b64:
  func_0x000107c39a38();
                    /* WARNING: Could not recover jumptable at 0x000100068b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_01)();
  return pcStack_d0;
code_r0x00010b4ca08c:
  func_0x00010b4ce41c();
  goto LAB_10b4ca05c;
code_r0x00010b4ca12c:
  func_0x00010b4ce4c8();
  UNRECOVERED_JUMPTABLE_00 = pcStack_d0;
  pcStack_b8 = pcStack_d0;
  goto code_r0x00010b4ca0fc;
code_r0x00010b4ca288:
  func_0x00010b4cbb18();
  pcVar11 = UNRECOVERED_JUMPTABLE_01;
  puVar14 = param_5;
LAB_10b4ca2ac:
  func_0x000107c39a90();
  param_1 = UNRECOVERED_JUMPTABLE_00;
  goto LAB_10b4ca338;
code_r0x00010b4c9fcc:
  func_0x00010b4cf298();
  goto code_r0x00010b4c9f94;
LAB_10b4cbe08:
  func_0x00010b4ce184();
  param_5 = puVar14;
  goto LAB_10b4c5d10;
  while( true ) {
    func_0x00010b4ce1fc();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_10b4cba6c;
    func_0x00010b4ce604();
    if (!(bool)uVar10) break;
LAB_10b4cb8b8:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x00010b4ce480();
    if (pcVar11 == (code *)0x0) goto LAB_10b4cba6c;
    uVar7 = 1;
    uVar10 = CONCAT44(in_stack_0000000c,in_stack_00000008) == 0;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00 + uVar4;
    FUN_10b4bfd04(UNRECOVERED_JUMPTABLE,!(bool)uVar10);
    func_0x00010b4cec94();
    if ((bool)uVar7) break;
  }
  goto LAB_10b4cba54;
  while( true ) {
    func_0x00010b4ce1fc();
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4cba6c;
    func_0x00010b4ce604();
    if (!(bool)uVar10) break;
code_r0x00010b4cb9e8:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
    func_0x00010b4ce480();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_10b4cba6c;
    pcVar12 = (code *)(ulong)in_stack_00000008;
    uVar10 = (int)in_stack_00000008 < unaff_w27 || unaff_w28 == in_stack_00000008;
    uVar7 = unaff_w27 <= (int)in_stack_00000008 && in_stack_00000008 <= unaff_w28;
    if ((int)in_stack_00000008 < unaff_w27 || (int)unaff_w28 <= (int)in_stack_00000008)
    goto FUN_10b4c7fd4;
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
    func_0x00010b4cee34();
    func_0x00010b4cec94();
    pcVar11 = UNRECOVERED_JUMPTABLE;
    if ((bool)uVar7) break;
  }
  goto LAB_10b4cba54;
  while( true ) {
    func_0x00010b4ce1fc();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_10b4cba6c;
    func_0x00010b4ce604();
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
    if (!(bool)uVar10) break;
code_r0x00010b4cb974:
    pcVar11 = UNRECOVERED_JUMPTABLE_00;
    func_0x00010b4ce480();
    if (pcVar11 == (code *)0x0) goto LAB_10b4cba6c;
    UNRECOVERED_JUMPTABLE = pcVar11;
    func_0x00010b4ce878();
    if ((bool)uVar7) {
      func_0x00010b4cea58();
      if ((bool)uVar7) {
        func_0x00010b4cea44();
        uVar15 = extraout_x8_03;
        uVar17 = extraout_x9_02;
        do {
          uVar7 = uVar17 <= uVar15;
          cVar8 = SBORROW8(uVar15,uVar17);
          cVar9 = (long)(uVar15 - uVar17) < 0;
          uVar10 = uVar15 == uVar17;
          if ((bool)uVar7) goto FUN_10b4c7fd4;
          func_0x00010b4cee70();
          lVar16 = extraout_x11;
          if ((bool)uVar10 || cVar9 != cVar8) {
            lVar16 = extraout_x11 + 1;
          }
          uVar15 = lVar16 + extraout_x8_04 * 2;
          uVar17 = extraout_x9_03;
        } while (!(bool)uVar10);
      }
      else {
        func_0x00010b4cee80();
        if ((extraout_x8_02 & 1) == 0) goto FUN_10b4c7fd4;
      }
    }
    func_0x00010b4cee34();
    func_0x00010b4cec94();
    if ((bool)uVar7) break;
  }
  goto LAB_10b4cba54;
  while( true ) {
    func_0x00010b4ce1fc();
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4cba6c;
    func_0x00010b4ce604();
    if (!(bool)uVar10) break;
code_r0x00010b4cba28:
    pcVar11 = UNRECOVERED_JUMPTABLE_00;
    func_0x00010b4ce480();
    if (pcVar11 == (code *)0x0) goto LAB_10b4cba6c;
    UNRECOVERED_JUMPTABLE_00 = pcVar11;
    func_0x00010b4ceaf4();
    func_0x00010b4cee34();
    func_0x00010b4cec94();
    if ((bool)uVar7) break;
  }
  goto LAB_10b4cba54;
  while( true ) {
    func_0x00010b4ce1fc();
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) goto LAB_10b4cba6c;
    func_0x00010b4ce604();
    if (!(bool)uVar10) break;
code_r0x00010b4cb868:
    pcVar11 = UNRECOVERED_JUMPTABLE_00;
    func_0x00010b4ce480();
    if (pcVar11 == (code *)0x0) goto LAB_10b4cba6c;
    UNRECOVERED_JUMPTABLE_00 = pcVar11;
    func_0x00010b4cee34();
    func_0x00010b4cec94();
    if ((bool)uVar7) break;
  }
  goto LAB_10b4cba54;
  while( true ) {
    func_0x00010b4ce1fc();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_10b4cba6c;
    func_0x00010b4ce604();
    if (!(bool)uVar10) break;
LAB_10b4cb8fc:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x00010b4ce480();
    if (pcVar11 == (code *)0x0) goto LAB_10b4cba6c;
    func_0x00010b4ce764();
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00 + uVar4;
    func_0x000108767594();
    func_0x00010b4cec94();
    if ((bool)uVar7) break;
  }
  goto LAB_10b4cba54;
LAB_10b4cba6c:
  func_0x00010b4ce498();
  goto LAB_10b4c5d10;
FUN_10b4c7fd4:
  func_0x00010b4cf1b8();
  func_0x00010b4ce6e0();
  uVar21 = in_stack_00000058;
  puVar14 = in_stack_00000048;
  func_0x00010b4ce96c();
  func_0x000107c302a4(pcVar12,&stack0x00000028);
  if (pcVar12 != (code *)0x0) {
    FUN_10b4c7f90(UNRECOVERED_JUMPTABLE,*(undefined8 *)(puVar14 + 0x18),UNRECOVERED_JUMPTABLE_01,
                  in_stack_00000028);
    func_0x00010b4ce960();
    if ((bool)uVar7) {
      uVar15 = (ulong)*puVar14;
      if (uVar15 != 0) {
        *(uint *)(UNRECOVERED_JUMPTABLE + uVar15) =
             *(uint *)(UNRECOVERED_JUMPTABLE + uVar15) | (uint)uVar21;
      }
      return pcVar12;
    }
    func_0x000107c39948(*(short *)pcVar12);
    func_0x00010b4ce6e0(UNRECOVERED_JUMPTABLE,pcVar12,puVar13);
LAB_10b4ce684:
                    /* WARNING: Could not recover jumptable at 0x00010b4ce694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_02)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x00010b4ce498();
LAB_10b4c5d10:
  if (*param_5 != 0) {
    func_0x000107c39bb4();
  }
  return (code *)0x0;
  while( true ) {
    func_0x00010b4ce1fc();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_10b4cba6c;
    func_0x00010b4ce604();
    if (!(bool)uVar10) break;
LAB_10b4cb934:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x00010b4ce480();
    if (pcVar11 == (code *)0x0) goto LAB_10b4cba6c;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00 + uVar4;
    func_0x000108767594(UNRECOVERED_JUMPTABLE,CONCAT44(in_stack_0000000c,in_stack_00000008));
    func_0x00010b4cec94();
    if ((bool)uVar7) break;
  }
LAB_10b4cba54:
  if (*(short *)unaff_x21 != 0) {
    func_0x00010b4ce614();
  }
  return pcVar11;
}



/* Entry: 10b4ca494; end: 10b4ca55f;  */

undefined8 *
FUN_10b4ca494(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,short *param_5
             ,undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint unaff_w19;
  ushort *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint uVar6;
  ulong unaff_x23;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  undefined8 *puVar8;
  code *unaff_x30;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  undefined8 uStack_48;
  
  while( true ) {
    func_0x000107c399e8();
    func_0x00010b4cf0e4();
    if ((bool)in_ZR) break;
    param_1 = unaff_x21;
    func_0x00010b4ce174(unaff_x21);
    func_0x000107c39b14();
    UNRECOVERED_JUMPTABLE = unaff_x30;
    func_0x000107c39a5c();
    func_0x00010b4cf1c4();
    func_0x00010b4ce8ac();
    uVar6 = (uint)unaff_x23;
    uVar2 = uVar6 & 7;
    in_ZR = uVar2 == 2;
    if (!(bool)in_ZR) {
      puVar1 = (uint *)((long)unaff_x20 + (unaff_x23 >> 0x20));
      if ((*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0xc0) {
        uVar5 = (unaff_x23 & 7) != 0;
        if (uVar2 == 1) {
          uVar2 = *puVar1;
          param_1 = unaff_x25;
          goto LAB_10b4cbd38;
        }
      }
      else if (uVar2 == 5) {
        uVar2 = *puVar1;
        uVar5 = true;
        param_1 = unaff_x25;
        goto LAB_10b4cbd80;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
      func_0x00010b4ce788();
      func_0x00010b4ceccc();
      goto LAB_10b4cbddc;
    }
    func_0x00010b4ce788();
    func_0x00010b4ceccc();
    func_0x000107c39a38();
    func_0x00010b4ce8b8();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
  }
  puVar1 = (uint *)((long)unaff_x20 + (param_4 >> 0x20));
  uVar4 = *(ushort *)((long)puVar1 + 10);
  func_0x000107c39a8c();
  puVar8 = unaff_x22;
  if ((uVar4 & 0x1c0) == 0xc0) {
    FUN_10b4cbe9c();
  }
  else {
    FUN_10b4cbfb4(unaff_x22,uStack_48,param_1,(long)unaff_x21 + (ulong)*puVar1);
  }
  if (puVar8 != (undefined8 *)0x0) {
    if ((undefined8 *)*unaff_x22 <= puVar8) {
      if (*unaff_x20 != 0) {
        func_0x000107c39990();
      }
      return puVar8;
    }
    func_0x000107c398fc(*(undefined2 *)puVar8);
    func_0x00010b4ce174();
                    /* WARNING: Could not recover jumptable at 0x00010b4ce694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return puVar8;
  }
  func_0x00010b4ce184();
LAB_10b4c5d10:
  if (*param_5 != 0) {
    func_0x000107c39bb4();
  }
  return (undefined8 *)0x0;
  while( true ) {
    func_0x00010b4ce368();
    if (param_1 == (undefined8 *)0x0) goto LAB_10b4cbe08;
    uVar5 = uVar6 <= in_stack_00000008;
    if (in_stack_00000008 != uVar6) break;
LAB_10b4cbd80:
    puVar8 = (undefined8 *)((long)param_1 + 4);
    uVar3 = *(undefined4 *)param_1;
    param_1 = (undefined8 *)((long)unaff_x21 + (ulong)uVar2);
    func_0x00010b4cbe58();
    *(undefined4 *)param_1 = uVar3;
    func_0x000107c39b50();
    if ((bool)uVar5) goto LAB_10b4cbde8;
  }
  goto LAB_10b4cbdb8;
LAB_10b4cbe08:
  func_0x00010b4ce184();
  goto LAB_10b4c5d10;
  while( true ) {
    func_0x00010b4ce368();
    if (param_1 == (undefined8 *)0x0) goto LAB_10b4cbe08;
    uVar5 = uVar6 <= in_stack_0000000c;
    if (in_stack_0000000c != uVar6) break;
LAB_10b4cbd38:
    puVar8 = param_1 + 1;
    uVar7 = *param_1;
    param_1 = (undefined8 *)((long)unaff_x21 + (ulong)uVar2);
    FUN_10b4cbe14();
    *param_1 = uVar7;
    func_0x000107c39b50();
    if ((bool)uVar5) goto LAB_10b4cbde8;
  }
LAB_10b4cbdb8:
  func_0x000107c39af4();
  if (!(bool)uVar5) {
    func_0x000107c398fc(*(undefined2 *)puVar8);
    func_0x000107c39aa4();
LAB_10b4cbddc:
    func_0x000107c39a38();
                    /* WARNING: Could not recover jumptable at 0x000100068b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
LAB_10b4cbde8:
  uVar4 = *unaff_x20;
  if (uVar4 != 0) {
    *(uint *)((long)unaff_x21 + (ulong)uVar4) =
         *(uint *)((long)unaff_x21 + (ulong)(uint)uVar4) | unaff_w19;
  }
  return puVar8;
}



/* Entry: 10b4ca560; end: 10b4cab03;  */

code * FUN_10b4ca560(code *param_1,code *param_2,code *param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,code *param_9,
                    code *param_10)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 in_ZR;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  code *pcVar13;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_00;
  int extraout_w8;
  int extraout_w8_00;
  uint extraout_w8_01;
  ulong uVar14;
  code *pcVar15;
  ulong extraout_x8;
  ulong uVar16;
  long lVar17;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  uint extraout_w11;
  uint extraout_w11_00;
  code *unaff_x19;
  short *unaff_x20;
  ushort *puVar18;
  code *unaff_x21;
  undefined8 *unaff_x22;
  uint unaff_w23;
  uint uVar19;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar20;
  uint *unaff_x27;
  int unaff_w28;
  undefined8 unaff_x29;
  code *unaff_x30;
  code *in_stack_00000030;
  code *in_stack_00000038;
  code *in_stack_00000040;
  ushort *in_stack_00000048;
  code *in_stack_00000050;
  ulong in_stack_00000058;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined8 *puStack_c0;
  code *pcStack_b8;
  ushort *puStack_b0;
  uint uStack_a8;
  undefined1 auStack_90 [8];
  uint uStack_88;
  uint uStack_84;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 auStack_6c [4];
  ulong uStack_68;
  code *pcStack_50;
  code *pcStack_48;
  code *pcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_28;
  code *pcStack_20;
  code *pcStack_18;
  undefined8 uStack_10;
  code *pcStack_8;
  
  func_0x000107c39ab0();
  UNRECOVERED_JUMPTABLE = unaff_x30;
  func_0x000107c39a5c();
  func_0x000107c39b48();
  if (!(bool)in_ZR) {
    if (((ulong)param_4 & 7) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
      func_0x00010b4ce6ec();
      goto code_r0x0001000690e4;
    }
    func_0x000107c39bd8();
    pcVar8 = param_10;
    if (param_1 == (code *)0x0) {
      func_0x00010b4ce184();
      goto LAB_10b4c5d10;
    }
    uVar12 = unaff_w23 & 0x1c0;
    param_9 = param_1;
    if (uVar12 == 0xc0) {
      pcVar15 = (code *)(-((ulong)param_10 & 1) ^ (ulong)param_10 >> 1);
LAB_10b4ca5f0:
      if ((unaff_w23 & 0x600) == 0x200) {
        pcVar8 = pcVar15;
      }
    }
    else {
      uVar7 = 0x7f < uVar12;
      bVar4 = uVar12 == 0x80;
      if (!bVar4) goto LAB_10b4ca63c;
      uVar19 = (uint)param_10;
      if ((unaff_w23 >> 10 & 1) == 0) {
        pcVar15 = (code *)(long)(int)(-(uVar19 & 1) ^ uVar19 >> 1);
        goto LAB_10b4ca5f0;
      }
      func_0x00010b4cef28();
      if (bVar4) {
        func_0x00010b4ce858();
        uVar7 = extraout_w8 <= (int)uVar19 && uVar19 <= extraout_w9;
        uVar12 = extraout_w11_00;
        if ((int)uVar19 < extraout_w8 || (int)extraout_w9 <= (int)uVar19) {
LAB_10b4ca6ec:
          func_0x00010b4ce6ec();
          func_0x000107c39a38();
          register0x00000008 = (BADSPACEBASE *)&stack0x00000070;
          uVar16 = in_stack_00000058;
          pcVar8 = in_stack_00000050;
          puVar18 = in_stack_00000048;
          UNRECOVERED_JUMPTABLE_01 = in_stack_00000040;
          UNRECOVERED_JUMPTABLE_00 = in_stack_00000038;
          pcVar15 = in_stack_00000030;
          goto FUN_10b4c7fd4;
        }
      }
      else {
        param_1 = pcVar8;
        FUN_10b4c5aa0();
        uVar12 = extraout_w11;
        if (((ulong)param_1 & 1) == 0) goto LAB_10b4ca6ec;
      }
    }
LAB_10b4ca63c:
    if (unaff_w28 == 0x30) {
      func_0x00010b4ceb20();
    }
    else if (unaff_w28 == 0x10) {
      func_0x000107c39984(unaff_x27[1]);
    }
    func_0x00010b4ce804();
    if (uVar12 == 0xc0) {
      *(code **)(param_1 + *unaff_x27) = pcVar8;
    }
    else if (uVar12 == 0x80) {
      *(int *)(param_1 + *unaff_x27) = (int)pcVar8;
    }
    else {
      param_1[*unaff_x27] = (code)(pcVar8 != (code *)0x0);
    }
    if ((code *)*unaff_x22 <= param_9) {
      if (*unaff_x20 != 0) {
        func_0x000107c39990();
      }
      return param_9;
    }
    func_0x000107c398fc(*(undefined2 *)param_9);
code_r0x0001000690e4:
    func_0x000107c39a38();
                    /* WARNING: Could not recover jumptable at 0x0001000690fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  func_0x00010b4ce6ec();
  UNRECOVERED_JUMPTABLE_01 = param_4;
  func_0x000107c39a38();
  func_0x00010b4ce5e8();
  pcVar15 = param_2;
  UNRECOVERED_JUMPTABLE_00 = param_3;
  UNRECOVERED_JUMPTABLE = param_5;
  do {
    pcVar8 = UNRECOVERED_JUMPTABLE;
    func_0x000107c39c28();
    uStack_10 = unaff_x29;
    pcStack_8 = unaff_x30;
    if (((ulong)UNRECOVERED_JUMPTABLE_01 & 7) == 0) {
      UNRECOVERED_JUMPTABLE = pcVar8 + ((ulong)UNRECOVERED_JUMPTABLE_01 >> 0x20);
      uVar2 = *(ushort *)(UNRECOVERED_JUMPTABLE + 10);
      uVar3 = uVar2 >> 6 & 7;
      uVar12 = uVar2 & 0x600;
      param_4 = UNRECOVERED_JUMPTABLE_01;
      param_5 = pcVar8;
      pcStack_80 = param_1;
      uStack_78 = param_6;
      if (uVar3 == 0) {
        pcVar10 = param_1;
        FUN_10b4c99a4(param_1,pcVar8);
        param_2 = (code *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE;
        func_0x00010b4ccdac();
        UNRECOVERED_JUMPTABLE = pcVar10;
        param_3 = param_1;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00010b4ceab0();
          param_3 = param_1;
        }
        func_0x00010b4cea88();
        goto LAB_10b4ccbd8;
      }
      if (uVar3 == 2) {
        pcVar10 = param_1;
        FUN_10b4c99a4(param_1,pcVar8);
        param_2 = (code *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE;
        func_0x00010b4ccd74();
        UNRECOVERED_JUMPTABLE = pcVar10;
        param_3 = param_1;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00010b4ceab0();
          param_3 = param_1;
        }
        func_0x00010b4cea88();
        goto LAB_10b4ccb5c;
      }
      pcVar10 = param_1;
      FUN_10b4c99a4(param_1,pcVar8);
      param_2 = (code *)(ulong)*(uint *)UNRECOVERED_JUMPTABLE;
      func_0x00010b4ccd3c();
      UNRECOVERED_JUMPTABLE = pcVar10;
      param_3 = param_1;
      if ((uVar2 >> 10 & 1) != 0) {
        func_0x00010b4ceab0();
        param_3 = param_1;
      }
      func_0x00010b4cea88();
      goto LAB_10b4ccc5c;
    }
    if (((uint)UNRECOVERED_JUMPTABLE_01 & 7) != 2) {
      UNRECOVERED_JUMPTABLE = *(code **)(pcVar8 + 0x30);
      func_0x00010b4ceb04(param_1);
      func_0x000107c39b24();
                    /* WARNING: Could not recover jumptable at 0x00010b4ccb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    pcVar11 = param_1;
    pcVar9 = UNRECOVERED_JUMPTABLE_01;
    UNRECOVERED_JUMPTABLE = pcVar8;
    func_0x00010b4ceb04();
    func_0x000107c39b24();
    pcVar10 = (code *)&uStack_10;
    pcVar13 = pcVar9;
    param_5 = UNRECOVERED_JUMPTABLE;
    pcStack_50 = param_1;
    pcStack_48 = param_4;
    pcStack_40 = pcVar15;
    pcStack_38 = UNRECOVERED_JUMPTABLE_00;
    pcStack_30 = UNRECOVERED_JUMPTABLE_01;
    pcStack_28 = unaff_x21;
    pcStack_20 = pcVar8;
    pcStack_18 = unaff_x19;
    func_0x000107c39b70();
    func_0x00010b4ce244();
    uVar12 = (uint)pcVar13;
    uVar16 = (ulong)pcVar13 & 7;
    cVar5 = SBORROW8(uVar16,2);
    cVar6 = (long)(uVar16 - 2) < 0;
    uVar7 = uVar16 == 2;
    uStack_68 = extraout_x8;
    if ((bool)uVar7) {
      uVar2 = *(ushort *)(UNRECOVERED_JUMPTABLE + ((ulong)pcVar9 >> 0x20) + 10);
      uVar16 = (ulong)*(ushort *)UNRECOVERED_JUMPTABLE;
      if (uVar16 != 0) {
        *(uint *)(pcVar11 + uVar16) = *(uint *)(pcVar11 + uVar16) | (uint)param_6;
      }
      uVar12 = uVar2 >> 6 & 7;
      pcVar8 = pcVar11;
      FUN_10b4c99a4(pcVar11,UNRECOVERED_JUMPTABLE);
      if ((uVar2 >> 6 & 7) == 0) {
        func_0x00010b4ccdac();
        if ((uVar2 >> 10 & 1) != 0) {
          pcVar15 = pcVar8;
          func_0x00010b4ce2f0();
          func_0x00010b4cef1c();
          uVar12 = (uint)pcVar13;
          if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
          goto LAB_10b4ca90c;
        }
        pcVar15 = pcVar8;
        func_0x00010b4ce65c();
        func_0x00010b4cee28();
        uVar12 = (uint)pcVar13;
        if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
        goto LAB_10b4ca830;
      }
      cVar5 = SBORROW4(uVar12,2);
      cVar6 = (int)(uVar12 - 2) < 0;
      uVar7 = uVar12 == 2;
      if (!(bool)uVar7) {
        func_0x00010b4ccd3c();
        pcVar15 = pcVar8;
        if ((uVar2 >> 10 & 1) != 0) {
          func_0x00010b4ce2f0();
          func_0x00010b4cef1c();
          uVar12 = (uint)pcVar13;
          if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
          goto LAB_10b4ca954;
        }
        func_0x00010b4ce65c();
        func_0x00010b4cee28();
        uVar12 = (uint)pcVar13;
        if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
        goto LAB_10b4ca880;
      }
      func_0x00010b4ccd74();
      pcVar15 = pcVar8;
      if ((uVar2 >> 10 & 1) != 0) {
        func_0x00010b4ce2f0();
        func_0x00010b4cef1c();
        uVar12 = (uint)pcVar13;
        if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
        goto LAB_10b4ca8c4;
      }
      func_0x00010b4ce65c();
      func_0x00010b4cee28();
      uVar12 = (uint)pcVar13;
      if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
      goto LAB_10b4ca7a0;
    }
    func_0x00010b4cdf40(extraout_x8);
    param_1 = pcVar11;
    pcVar15 = unaff_x21;
    UNRECOVERED_JUMPTABLE_00 = unaff_x19;
    UNRECOVERED_JUMPTABLE_01 = pcVar9;
    unaff_x19 = pcStack_18;
    unaff_x21 = pcStack_28;
    param_4 = pcStack_48;
    unaff_x29 = uStack_10;
    unaff_x30 = pcStack_8;
  } while ((bool)uVar7);
  goto LAB_10b4caadc;
  while( true ) {
    param_2 = (code *)auStack_6c;
    func_0x00010b4ce298();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_10b4cccfc;
    func_0x00010b4cee90();
    if (!(bool)uVar7) break;
LAB_10b4ccbd8:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x00010b4ceae8();
    uVar16 = uStack_68;
    if (pcVar11 == (code *)0x0) goto LAB_10b4cccfc;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar12 == 0x200) {
        uVar16 = (long)(int)(-((uint)uStack_68 & 1) ^ (uint)uStack_68 >> 1);
      }
    }
    else {
      uVar7 = 0x5ff < uVar12;
      cVar5 = SBORROW4(uVar12,0x600);
      cVar6 = (int)(uVar12 - 0x600) < 0;
      bVar4 = uVar12 == 0x600;
      if (bVar4) {
        func_0x00010b4ceeb0();
        if (bVar4 || cVar6 != cVar5) goto LAB_10b4ccd1c;
      }
      else {
        UNRECOVERED_JUMPTABLE = pcVar11;
        func_0x00010b4cea7c();
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) goto LAB_10b4ccd1c;
      }
    }
    UNRECOVERED_JUMPTABLE = pcVar10;
    FUN_10b4bfd04(pcVar10,uVar16 != 0);
    uVar7 = pcVar11 == *(code **)UNRECOVERED_JUMPTABLE_00;
    if (*(code **)UNRECOVERED_JUMPTABLE_00 <= pcVar11) break;
  }
  goto LAB_10b4ccccc;
  while( true ) {
    param_2 = (code *)auStack_6c;
    func_0x00010b4ce298();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_10b4cccfc;
    func_0x00010b4cee90();
    if (!(bool)uVar7) break;
LAB_10b4ccc5c:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x00010b4ceae8();
    uVar16 = uStack_68;
    if (pcVar11 == (code *)0x0) goto LAB_10b4cccfc;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar12 == 0x200) {
        uVar16 = -(uStack_68 & 1) ^ uStack_68 >> 1;
      }
    }
    else {
      uVar7 = 0x5ff < uVar12;
      cVar5 = SBORROW4(uVar12,0x600);
      cVar6 = (int)(uVar12 - 0x600) < 0;
      bVar4 = uVar12 == 0x600;
      if (bVar4) {
        func_0x00010b4ceeb0();
        if (bVar4 || cVar6 != cVar5) goto LAB_10b4ccd1c;
      }
      else {
        UNRECOVERED_JUMPTABLE = pcVar11;
        func_0x00010b4cea7c();
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) goto LAB_10b4ccd1c;
      }
    }
    UNRECOVERED_JUMPTABLE = pcVar10;
    func_0x000108767594(pcVar10,uVar16);
    uVar7 = pcVar11 == *(code **)UNRECOVERED_JUMPTABLE_00;
    if (*(code **)UNRECOVERED_JUMPTABLE_00 <= pcVar11) break;
  }
  goto LAB_10b4ccccc;
LAB_10b4ccd1c:
  param_1 = pcStack_80;
  func_0x00010b4ceb04();
  func_0x000107c39b24();
  UNRECOVERED_JUMPTABLE = pcStack_8;
  uVar16 = (ulong)uVar2;
  puVar18 = (ushort *)(ulong)uVar12;
  unaff_x29 = uStack_10;
  unaff_x30 = pcStack_8;
FUN_10b4c7fd4:
  *(code **)((long)register0x00000008 + -0x40) = pcVar15;
  *(code **)((long)register0x00000008 + -0x38) = UNRECOVERED_JUMPTABLE_00;
  *(code **)((long)register0x00000008 + -0x30) = UNRECOVERED_JUMPTABLE_01;
  *(ushort **)((long)register0x00000008 + -0x28) = puVar18;
  *(code **)((long)register0x00000008 + -0x20) = pcVar8;
  *(ulong *)((long)register0x00000008 + -0x18) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010b4ce96c();
  func_0x000107c302a4(param_2,(undefined1 *)((long)register0x00000008 + -0x48));
  if (param_2 != (code *)0x0) {
    FUN_10b4c7f90(param_1,*(undefined8 *)(puVar18 + 0x18),param_4,
                  *(undefined4 *)((long)register0x00000008 + -0x48));
    func_0x00010b4ce960();
    if ((bool)uVar7) {
      uVar14 = (ulong)*puVar18;
      if (uVar14 != 0) {
        *(uint *)(param_1 + uVar14) = *(uint *)(param_1 + uVar14) | (uint)uVar16;
      }
      return param_2;
    }
    func_0x000107c39948(*(undefined2 *)param_2);
    func_0x00010b4ce6e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010b4ce694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  func_0x00010b4ce498();
  goto LAB_10b4c5d10;
LAB_10b4cccfc:
  func_0x000107c39b24(pcStack_80);
  param_5 = pcVar8;
  goto LAB_10b4c5d10;
LAB_10b4ca830:
  func_0x00010b4ce754();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca9ac;
  func_0x00010b4ceb70();
  func_0x00010b4cd004();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce26c();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00010b4cdeac();
    if (pcVar15 != (code *)0x0) goto LAB_10b4caae0;
    func_0x00010b4ce728();
    func_0x00010b4ceb70();
    func_0x00010b4cd004();
    goto LAB_10b4caa70;
  }
  func_0x00010b4ce6d4();
  uVar12 = (uint)pcVar13;
  if (cVar6 != cVar5) goto LAB_10b4caaa4;
  func_0x00010b4ce654();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce41c();
  goto LAB_10b4ca830;
LAB_10b4ca9ac:
  func_0x000107c399ec();
  UNRECOVERED_JUMPTABLE_00 = pcVar9;
  func_0x00010b4cd004();
  uVar12 = (uint)UNRECOVERED_JUMPTABLE_00;
  goto LAB_10b4ca9e0;
LAB_10b4ca90c:
  func_0x00010b4ce4a8();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca9bc;
  func_0x00010b4ccf8c();
  uVar12 = (uint)pcVar13;
  pcStack_c8 = pcVar15;
  if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce040();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00010b4ce194();
    func_0x00010b4cddcc();
    if (pcVar15 != (code *)0x0) goto LAB_10b4caaf8;
    func_0x00010b4ce344();
    func_0x00010b4ccf8c();
    goto LAB_10b4caa9c;
  }
  func_0x00010b4ce6d4();
  uVar12 = (uint)pcVar13;
  if (cVar6 != cVar5) goto LAB_10b4caaa4;
  func_0x00010b4ce654();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce4c8();
  pcStack_c8 = pcVar15;
  goto LAB_10b4ca90c;
LAB_10b4ca9bc:
  func_0x00010b4ce890();
  func_0x00010b4ccf8c();
  goto LAB_10b4ca9e0;
LAB_10b4ca7a0:
  func_0x00010b4ce754();
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca990;
  func_0x00010b4ceb70();
  func_0x00010b4ccf34();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce26c();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00010b4cdeac();
    if (pcVar15 != (code *)0x0) goto LAB_10b4caae0;
    func_0x00010b4ce728();
    func_0x00010b4ceb70();
    func_0x00010b4ccf34();
    goto LAB_10b4caa70;
  }
  func_0x00010b4ce6d4();
  uVar12 = (uint)pcVar13;
  if (cVar6 != cVar5) goto LAB_10b4caaa4;
  func_0x00010b4ce654();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce41c();
  goto LAB_10b4ca7a0;
LAB_10b4ca990:
  func_0x000107c399ec();
  UNRECOVERED_JUMPTABLE_00 = pcVar9;
  func_0x00010b4ccf34();
  uVar12 = (uint)UNRECOVERED_JUMPTABLE_00;
  goto LAB_10b4ca9e0;
LAB_10b4ca8c4:
  func_0x00010b4ce4a8();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca9a0;
  func_0x00010b4ccec0();
  uVar12 = (uint)pcVar13;
  pcStack_c8 = pcVar15;
  if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce040();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) {
    func_0x00010b4ce194();
    func_0x00010b4cddcc();
    if (pcVar15 != (code *)0x0) goto LAB_10b4caaf8;
    func_0x00010b4ce344();
    func_0x00010b4ccec0();
    goto LAB_10b4caa9c;
  }
  func_0x00010b4ce6d4();
  uVar12 = (uint)pcVar13;
  if (cVar6 != cVar5) goto LAB_10b4caaa4;
  func_0x00010b4ce654();
  uVar12 = (uint)pcVar13;
  if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce4c8();
  pcStack_c8 = pcVar15;
  goto LAB_10b4ca8c4;
LAB_10b4ca9a0:
  func_0x00010b4ce890();
  func_0x00010b4ccec0();
  goto LAB_10b4ca9e0;
LAB_10b4ca880:
  func_0x00010b4ce754();
  if (!(bool)uVar7 && cVar6 == cVar5) {
    func_0x00010b4ceb70();
    func_0x00010b4cce68();
    uVar12 = (uint)pcVar13;
    if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
    func_0x00010b4ce26c();
    uVar12 = (uint)pcVar13;
    if (!(bool)uVar7 && cVar6 == cVar5) {
      func_0x00010b4ce6d4();
      uVar12 = (uint)pcVar13;
      if (cVar6 == cVar5) {
        func_0x00010b4ce654();
        uVar12 = (uint)pcVar13;
        if (pcVar15 != (code *)0x0) goto code_r0x00010b4ca8b0;
        goto LAB_10b4caaa8;
      }
      goto LAB_10b4caaa4;
    }
    func_0x00010b4cdeac();
    if (pcVar15 == (code *)0x0) {
      func_0x00010b4ce728();
      func_0x00010b4ceb70();
      func_0x00010b4cce68();
LAB_10b4caa70:
      uVar7 = pcVar15 == unaff_x21;
      if (!(bool)uVar7) goto LAB_10b4caaa4;
      pcVar15 = (code *)(*(long *)(unaff_x19 + 8) + (ulong)(uVar2 & 0x600));
      goto LAB_10b4caaa8;
    }
    goto LAB_10b4caae0;
  }
  func_0x000107c399ec();
  UNRECOVERED_JUMPTABLE_00 = pcVar9;
  func_0x00010b4cce68();
  uVar12 = (uint)UNRECOVERED_JUMPTABLE_00;
  goto LAB_10b4ca9e0;
code_r0x00010b4ca8b0:
  func_0x00010b4ce41c();
  goto LAB_10b4ca880;
LAB_10b4ca954:
  func_0x00010b4ce4a8();
  uVar12 = (uint)pcVar13;
  if ((bool)uVar7 || cVar6 != cVar5) goto LAB_10b4ca9d8;
  func_0x00010b4ccde4();
  uVar12 = (uint)pcVar13;
  pcStack_c8 = pcVar15;
  if (pcVar15 == (code *)0x0) goto LAB_10b4caaa8;
  func_0x00010b4ce040();
  uVar12 = (uint)pcVar13;
  if (!(bool)uVar7 && cVar6 == cVar5) {
    func_0x00010b4ce6d4();
    uVar12 = (uint)pcVar13;
    if (cVar6 == cVar5) {
      func_0x00010b4ce654();
      uVar12 = (uint)pcVar13;
      if (pcVar15 != (code *)0x0) goto code_r0x00010b4ca984;
      goto LAB_10b4caaa8;
    }
    goto LAB_10b4caaa4;
  }
  func_0x00010b4ce194();
  func_0x00010b4cddcc();
  if (pcVar15 != (code *)0x0) goto LAB_10b4caaf8;
  func_0x00010b4ce344();
  func_0x00010b4ccde4();
LAB_10b4caa9c:
  uVar7 = pcVar15 == pcVar8;
  if ((bool)uVar7) {
    func_0x00010b4cedf0();
    goto LAB_10b4caaa8;
  }
LAB_10b4caaa4:
  pcVar15 = (code *)0x0;
  goto LAB_10b4caaa8;
code_r0x00010b4ca984:
  func_0x00010b4ce4c8();
  pcStack_c8 = pcVar15;
  goto LAB_10b4ca954;
  while( true ) {
    param_2 = (code *)auStack_6c;
    func_0x00010b4ce298();
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_10b4cccfc;
    func_0x00010b4cee90();
    if (!(bool)uVar7) break;
LAB_10b4ccb5c:
    pcVar11 = UNRECOVERED_JUMPTABLE;
    func_0x00010b4ceae8();
    uVar16 = uStack_68;
    if (pcVar11 == (code *)0x0) goto LAB_10b4cccfc;
    if ((uVar2 >> 10 & 1) == 0) {
      if (uVar12 == 0x200) {
        uVar16 = (ulong)(-((uint)uStack_68 & 1) ^ (uint)uStack_68 >> 1);
      }
    }
    else {
      uVar7 = 0x5ff < uVar12;
      cVar5 = SBORROW4(uVar12,0x600);
      cVar6 = (int)(uVar12 - 0x600) < 0;
      bVar4 = uVar12 == 0x600;
      if (bVar4) {
        func_0x00010b4ceeb0();
        if (bVar4 || cVar6 != cVar5) goto LAB_10b4ccd1c;
      }
      else {
        UNRECOVERED_JUMPTABLE = pcVar11;
        func_0x00010b4cea7c();
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) goto LAB_10b4ccd1c;
      }
    }
    UNRECOVERED_JUMPTABLE = pcVar10;
    func_0x000107c29100(pcVar10,uVar16);
    uVar7 = pcVar11 == *(code **)UNRECOVERED_JUMPTABLE_00;
    if (*(code **)UNRECOVERED_JUMPTABLE_00 <= pcVar11) break;
  }
LAB_10b4ccccc:
  uVar2 = *(ushort *)pcVar8;
  if (uVar2 != 0) {
    *(uint *)(pcStack_80 + uVar2) = *(uint *)(pcStack_80 + (uint)uVar2) | (uint)uStack_78;
  }
  func_0x000107c39b24(pcVar11,pcStack_8);
  return pcVar11;
LAB_10b4cd1c8:
  func_0x00010b4ce184();
LAB_10b4c5d10:
  if (*(short *)param_5 != 0) {
    func_0x000107c39bb4();
  }
  return (code *)0x0;
LAB_10b4ca9d8:
  func_0x00010b4ce890();
  func_0x00010b4ccde4();
LAB_10b4ca9e0:
  func_0x000107c39a90();
LAB_10b4caaa8:
  func_0x00010b4cdf40(uStack_68);
  if ((bool)uVar7) {
    return pcVar15;
  }
LAB_10b4caadc:
  uVar7 = 0;
  ___stack_chk_fail();
LAB_10b4caae0:
  func_0x00010802bcb8();
  func_0x00010b4cdfb8();
  func_0x00010b4ce6c0(auStack_90);
  pcVar15 = (code *)auStack_90;
  func_0x00010ae6c700();
LAB_10b4caaf8:
  func_0x00010802bcb8();
  func_0x00010b4cde28();
  func_0x00010b4ce7b4();
  UNRECOVERED_JUMPTABLE_01 = FUN_10b4cab04;
  func_0x000107c39bc4();
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_01;
  func_0x000107c39a5c();
  func_0x00010b4ceca0();
  if (!(bool)uVar7) {
    uVar19 = extraout_w9_00 & 0x1c0;
    if (uVar19 == 0xc0) {
      if ((uVar12 & 7) == 1) {
LAB_10b4cab74:
        if (extraout_w8_00 == 0x30) {
          func_0x00010b4cec24();
        }
        else if (extraout_w8_00 == 0x10) {
          func_0x00010b4ce284(*(uint *)(pcVar11 + 4));
          *(uint *)(pcVar9 + extraout_x9) = extraout_w8_01 | *(uint *)(pcVar9 + extraout_x9);
        }
        pcVar15 = pcVar9;
        FUN_10b4c99a4(pcVar9,pcVar8);
        bVar4 = 0xbf < uVar19;
        if (uVar19 == 0xc0) {
          *(undefined8 *)(pcVar15 + *(uint *)pcVar11) = *(undefined8 *)UNRECOVERED_JUMPTABLE;
          lVar17 = 8;
        }
        else {
          *(uint *)(pcVar15 + *(uint *)pcVar11) = *(uint *)UNRECOVERED_JUMPTABLE;
          lVar17 = 4;
        }
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + lVar17;
        func_0x000107c39b2c();
        if (bVar4) {
          if (*(short *)pcVar8 != 0) {
            func_0x00010b4ce718();
          }
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x000107c39900(*(undefined2 *)UNRECOVERED_JUMPTABLE);
        goto code_r0x00010029f874;
      }
    }
    else if ((uVar12 & 7) == 5) goto LAB_10b4cab74;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(pcVar8 + 0x30);
    func_0x000107c39bb0();
    pcVar9 = pcVar15;
code_r0x00010029f874:
    func_0x000107c39a38();
                    /* WARNING: Could not recover jumptable at 0x00010029f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return pcVar9;
  }
  func_0x000107c39bb0();
  func_0x000107c39a38();
  while( true ) {
    func_0x000107c39b14();
    pcStack_40 = pcVar10;
    pcStack_38 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c39a5c();
    func_0x00010b4cf1c4();
    func_0x000107c39b68();
    uVar19 = (uint)pcStack_c8;
    uVar12 = uVar19 & 7;
    uVar7 = uVar12 == 2;
    if (!(bool)uVar7) break;
    UNRECOVERED_JUMPTABLE = pcStack_b8;
    func_0x000107c39aa4();
    pcVar15 = pcStack_c8;
    func_0x000107c39a38();
    pcVar8 = pcStack_40;
    UNRECOVERED_JUMPTABLE_01 = pcStack_38;
    func_0x00010b4ce8b8();
    func_0x000107c39b14();
    pcStack_40 = pcVar8;
    pcStack_38 = UNRECOVERED_JUMPTABLE_01;
    func_0x000107c399e8();
    func_0x00010b4cf0e4();
    if ((bool)uVar7) {
      puVar1 = (undefined4 *)((long)puStack_b0 + ((ulong)pcVar15 >> 0x20));
      uVar2 = *(ushort *)((long)puVar1 + 10);
      func_0x00010b4ce804();
      func_0x000107c39a8c();
      if ((uVar2 & 0x1c0) == 0xc0) {
        func_0x00010b4ccd3c();
        func_0x00010b4cf250();
        FUN_10b4cbe9c();
      }
      else {
        func_0x00010b4ccd74(UNRECOVERED_JUMPTABLE,*puVar1,pcStack_b8);
        func_0x00010b4cf250();
        FUN_10b4cbfb4();
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        func_0x00010b4ce184();
        goto LAB_10b4c5d10;
      }
      if ((code *)*puStack_c0 <= UNRECOVERED_JUMPTABLE) {
        if (*puStack_b0 == 0) {
          return UNRECOVERED_JUMPTABLE;
        }
        func_0x000107c39990();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c398fc(*(undefined2 *)UNRECOVERED_JUMPTABLE);
      func_0x00010b4ce174();
      goto code_r0x000100068b64;
    }
    pcVar15 = pcStack_b8;
    func_0x00010b4ce174();
    pcVar10 = pcStack_40;
    UNRECOVERED_JUMPTABLE_01 = pcStack_38;
    func_0x00010b4ce8b8();
  }
  func_0x00010b4ce804();
  if ((*(ushort *)((long)puStack_b0 + ((ulong)pcStack_c8 >> 0x20) + 10) & 0x1c0) == 0xc0) {
    uVar7 = ((ulong)pcStack_c8 & 7) != 0;
    if (uVar12 != 1) {
LAB_10b4cd18c:
      UNRECOVERED_JUMPTABLE_01 = *(code **)(puStack_b0 + 0x18);
      func_0x000107c39aa4(pcStack_b8);
      UNRECOVERED_JUMPTABLE = pcStack_b8;
      goto LAB_10b4cd19c;
    }
    func_0x00010b4ccd3c();
    do {
      UNRECOVERED_JUMPTABLE = pcStack_d0 + 8;
      uVar20 = *(undefined8 *)pcStack_d0;
      pcStack_d0 = pcVar15;
      FUN_10b4cbe14();
      *(undefined8 *)pcStack_d0 = uVar20;
      func_0x000107c39af4();
      if ((bool)uVar7) goto LAB_10b4cd1a8;
      func_0x00010b4ce298();
      if (pcStack_d0 == (code *)0x0) goto LAB_10b4cd1c8;
      uVar7 = uVar19 <= uStack_84;
    } while (uStack_84 == uVar19);
  }
  else {
    uVar7 = 4 < uVar12;
    if (uVar12 != 5) goto LAB_10b4cd18c;
    func_0x00010b4ccd74();
    do {
      UNRECOVERED_JUMPTABLE = pcStack_d0 + 4;
      uVar12 = *(uint *)pcStack_d0;
      pcStack_d0 = pcVar15;
      func_0x00010b4cbe58();
      *(uint *)pcStack_d0 = uVar12;
      func_0x000107c39af4();
      if ((bool)uVar7) goto LAB_10b4cd1a8;
      func_0x00010b4ce298();
      if (pcStack_d0 == (code *)0x0) goto LAB_10b4cd1c8;
      uVar7 = uVar19 <= uStack_88;
    } while (uStack_88 == uVar19);
  }
  func_0x000107c39b50();
  if ((bool)uVar7) {
LAB_10b4cd1a8:
    uVar2 = *puStack_b0;
    if (uVar2 != 0) {
      *(uint *)(pcStack_b8 + uVar2) = *(uint *)(pcStack_b8 + (uint)uVar2) | uStack_a8;
    }
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c398fc(*(undefined2 *)UNRECOVERED_JUMPTABLE);
  UNRECOVERED_JUMPTABLE = pcStack_d0;
LAB_10b4cd19c:
  func_0x000107c39a38();
code_r0x000100068b64:
                    /* WARNING: Could not recover jumptable at 0x000100068b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_01)();
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 10b4cab04; end: 10b4caceb;  */

undefined8 *
FUN_10b4cab04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,short *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 in_ZR;
  bool bVar5;
  undefined1 uVar6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  int extraout_w8;
  uint extraout_w8_00;
  long lVar8;
  uint extraout_w9;
  long extraout_x9;
  short *unaff_x20;
  undefined8 *unaff_x22;
  uint uVar9;
  undefined8 *unaff_x23;
  uint *unaff_x24;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *unaff_x30;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  ushort *in_stack_00000030;
  uint in_stack_00000038;
  uint uStack0000000000000058;
  uint uStack000000000000005c;
  
  func_0x000107c39bc4();
  UNRECOVERED_JUMPTABLE_00 = unaff_x30;
  func_0x000107c39a5c();
  func_0x00010b4ceca0();
  if (!(bool)in_ZR) {
    uVar2 = extraout_w9 & 0x1c0;
    if (uVar2 == 0xc0) {
      if ((param_4 & 7) == 1) {
LAB_10b4cab74:
        if (extraout_w8 == 0x30) {
          func_0x00010b4cec24();
        }
        else if (extraout_w8 == 0x10) {
          func_0x00010b4ce284(unaff_x24[1]);
          *(uint *)((long)unaff_x22 + extraout_x9) =
               extraout_w8_00 | *(uint *)((long)unaff_x22 + extraout_x9);
        }
        puVar10 = unaff_x22;
        FUN_10b4c99a4();
        bVar5 = 0xbf < uVar2;
        if (uVar2 == 0xc0) {
          *(undefined8 *)((long)puVar10 + (ulong)*unaff_x24) = *unaff_x23;
          lVar8 = 8;
        }
        else {
          *(undefined4 *)((long)puVar10 + (ulong)*unaff_x24) = *(undefined4 *)unaff_x23;
          lVar8 = 4;
        }
        puVar10 = (undefined8 *)((long)unaff_x23 + lVar8);
        func_0x000107c39b2c();
        if (bVar5) {
          if (*unaff_x20 != 0) {
            func_0x00010b4ce718();
          }
          return puVar10;
        }
        func_0x000107c39900(*(undefined2 *)puVar10);
        goto LAB_10b4cabec;
      }
    }
    else if ((param_4 & 7) == 5) goto LAB_10b4cab74;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x20 + 0x18);
    func_0x000107c39bb0();
    unaff_x22 = param_1;
LAB_10b4cabec:
    func_0x000107c39a38();
                    /* WARNING: Could not recover jumptable at 0x00010029f884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return unaff_x22;
  }
  func_0x000107c39bb0();
  func_0x000107c39a38();
  while( true ) {
    func_0x000107c39b14();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
    func_0x000107c39a5c();
    func_0x00010b4cf1c4();
    func_0x000107c39b68();
    uVar9 = (uint)in_stack_00000018;
    uVar2 = uVar9 & 7;
    uVar6 = uVar2 == 2;
    if (!(bool)uVar6) break;
    puVar10 = in_stack_00000028;
    func_0x000107c39aa4();
    uVar7 = in_stack_00000018;
    func_0x000107c39a38();
    func_0x00010b4ce8b8();
    func_0x000107c39b14();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
    func_0x000107c399e8();
    func_0x00010b4cf0e4();
    if ((bool)uVar6) {
      puVar1 = (undefined4 *)((long)in_stack_00000030 + (uVar7 >> 0x20));
      uVar4 = *(ushort *)((long)puVar1 + 10);
      func_0x00010b4ce804();
      func_0x000107c39a8c();
      if ((uVar4 & 0x1c0) == 0xc0) {
        FUN_10b4ccd3c();
        func_0x00010b4cf250();
        FUN_10b4cbe9c();
      }
      else {
        func_0x00010b4ccd74(puVar10,*puVar1,in_stack_00000028);
        func_0x00010b4cf250();
        FUN_10b4cbfb4();
      }
      if (puVar10 == (undefined8 *)0x0) {
        func_0x00010b4ce184();
        goto LAB_10b4cde44;
      }
      if ((undefined8 *)*in_stack_00000020 <= puVar10) {
        if (*in_stack_00000030 == 0) {
          return puVar10;
        }
        func_0x000107c39990();
        return puVar10;
      }
      func_0x000107c398fc(*(undefined2 *)puVar10);
      func_0x00010b4ce174();
      goto LAB_107c3991c;
    }
    param_1 = in_stack_00000028;
    func_0x00010b4ce174();
    func_0x00010b4ce8b8();
  }
  func_0x00010b4ce804();
  if ((*(ushort *)((long)in_stack_00000030 + (in_stack_00000018 >> 0x20) + 10) & 0x1c0) == 0xc0) {
    uVar6 = (in_stack_00000018 & 7) != 0;
    if (uVar2 != 1) {
LAB_10b4cd18c:
      UNRECOVERED_JUMPTABLE_00 = *(code **)(in_stack_00000030 + 0x18);
      func_0x000107c39aa4(in_stack_00000028);
      puVar10 = in_stack_00000028;
      goto LAB_10b4cd19c;
    }
    FUN_10b4ccd3c();
    do {
      puVar10 = in_stack_00000010 + 1;
      uVar11 = *in_stack_00000010;
      in_stack_00000010 = param_1;
      FUN_10b4cbe14();
      *in_stack_00000010 = uVar11;
      func_0x000107c39af4();
      if ((bool)uVar6) goto LAB_10b4cd1a8;
      func_0x00010b4ce298();
      if (in_stack_00000010 == (undefined8 *)0x0) {
LAB_10b4cd1c8:
        func_0x00010b4ce184();
LAB_10b4cde44:
        if (*param_5 != 0) {
          func_0x000107c39bb4();
        }
        return (undefined8 *)0x0;
      }
      uVar6 = uVar9 <= uStack000000000000005c;
    } while (uStack000000000000005c == uVar9);
  }
  else {
    uVar6 = 4 < uVar2;
    if (uVar2 != 5) goto LAB_10b4cd18c;
    func_0x00010b4ccd74();
    do {
      puVar10 = (undefined8 *)((long)in_stack_00000010 + 4);
      uVar3 = *(undefined4 *)in_stack_00000010;
      in_stack_00000010 = param_1;
      func_0x00010b4cbe58();
      *(undefined4 *)in_stack_00000010 = uVar3;
      func_0x000107c39af4();
      if ((bool)uVar6) goto LAB_10b4cd1a8;
      func_0x00010b4ce298();
      if (in_stack_00000010 == (undefined8 *)0x0) goto LAB_10b4cd1c8;
      uVar6 = uVar9 <= uStack0000000000000058;
    } while (uStack0000000000000058 == uVar9);
  }
  func_0x000107c39b50();
  if ((bool)uVar6) {
LAB_10b4cd1a8:
    uVar4 = *in_stack_00000030;
    if (uVar4 != 0) {
      *(uint *)((long)in_stack_00000028 + (ulong)uVar4) =
           *(uint *)((long)in_stack_00000028 + (ulong)(uint)uVar4) | in_stack_00000038;
    }
    return puVar10;
  }
  func_0x000107c398fc(*(undefined2 *)puVar10);
  puVar10 = in_stack_00000010;
LAB_10b4cd19c:
  func_0x000107c39a38();
LAB_107c3991c:
                    /* WARNING: Could not recover jumptable at 0x000100068b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return puVar10;
}



/* Entry: 10b4cacec; end: 10b4cae93;  */

undefined8 *
FUN_10b4cacec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
             ushort *param_5,uint param_6)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *extraout_x8;
  long lVar8;
  short *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 *in_stack_00000018;
  
  func_0x000107c39ab0();
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_00;
  func_0x000107c399e8();
  func_0x000107c39b68();
  if (((uint)param_4 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
code_r0x0001000690e4:
    func_0x000107c39954();
                    /* WARNING: Could not recover jumptable at 0x0001000690fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  puVar1 = (uint *)((long)unaff_x20 + (param_4 >> 0x20));
  uVar2 = *(ushort *)((long)puVar1 + 10);
  uVar3 = uVar2 & 0x30;
  if (uVar3 != 0x20) {
    uVar4 = 0xf < uVar3;
    if (uVar3 == 0x10) {
      func_0x000107c39984(puVar1[1]);
      puVar10 = (undefined8 *)0x0;
    }
    else {
      uVar4 = 0x2f < uVar3;
      if (uVar3 == 0x30) {
        param_2 = (undefined8 *)(ulong)puVar1[1];
        func_0x00010b4ceb20();
        puVar10 = param_1;
      }
      else {
        puVar10 = (undefined8 *)0x0;
      }
    }
    func_0x00010b4ce804();
    if ((uVar2 & 0x1c0) == 0) {
      uVar11 = (ulong)*puVar1;
      if ((int)puVar10 != 0) {
        *(undefined **)((long)param_1 + uVar11) = &DAT_11383d918;
      }
      uVar7 = *(ulong *)(unaff_x21 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      if (uVar7 == 0) {
        unaff_x22 = (undefined8 *)((long)param_1 + uVar11);
        func_0x000107c39bcc();
        func_0x000107c39aa4();
        func_0x000107c3039c();
      }
      else {
        FUN_10b4bf128();
        param_2 = unaff_x24;
      }
      if (unaff_x22 == (undefined8 *)0x0) goto LAB_10b4cae70;
      puVar10 = (undefined8 *)((long)param_1 + uVar11);
      param_1 = unaff_x22;
      func_0x000107c39c04(*puVar10);
      if ((long)param_2 < 0) {
        param_1 = (undefined8 *)*param_1;
      }
      param_5 = (ushort *)(ulong)(uVar2 & 0x600);
      func_0x000107c39bd4();
      puVar10 = (undefined8 *)((ulong)param_1 & 1);
    }
    else {
      uVar4 = 0x2f < uVar3;
      if (uVar3 == 0x30) {
        if ((int)puVar10 == 0) {
          param_1 = *(undefined8 **)(unaff_x21 + (ulong)*puVar1);
        }
        else {
          if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
            func_0x00010b4cebc8();
          }
          func_0x00010b4ce954();
          FUN_10b4cc44c();
          *(undefined8 **)(unaff_x21 + (ulong)*puVar1) = param_1;
        }
      }
      else {
        param_1 = (undefined8 *)((long)param_1 + (ulong)*puVar1);
      }
      func_0x000107c39aa4();
      func_0x00010b4cc358();
      unaff_x22 = param_1;
      puVar10 = param_1;
    }
    if (puVar10 == (undefined8 *)0x0) {
LAB_10b4cae70:
      func_0x00010b4ce184();
LAB_10b4c5d10:
      if (*param_5 != 0) {
        func_0x000107c39bb4();
      }
      return (undefined8 *)0x0;
    }
    func_0x000107c39af4();
    if ((bool)uVar4) {
      if (*unaff_x20 != 0) {
        func_0x000107c39990();
      }
      return unaff_x22;
    }
    func_0x000107c39900(*(undefined2 *)unaff_x22);
    goto code_r0x0001000690e4;
  }
  func_0x000107c39954();
  func_0x00010b4ce5e8();
  func_0x000107c39b38();
  func_0x00010b4cf1c4();
  if (((uint)puVar1 & 7) != 2) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_5 + 0x18);
    func_0x00010b4ceccc(param_1,param_2);
    goto code_r0x0001000647c0;
  }
  puVar1 = (uint *)((long)param_5 + ((ulong)puVar1 >> 0x20));
  uVar3 = *(ushort *)((long)puVar1 + 10);
  puVar12 = param_1;
  FUN_10b4c99a4(param_1,param_5);
  puVar10 = param_2;
  if ((uVar3 & 0x1c0) == 0x100) {
    uVar11 = (ulong)*puVar1;
    puVar9 = *(undefined8 **)((long)puVar12 + uVar11);
    uVar4 = puVar9 == (undefined8 *)&UNK_10e5b4a80;
    puVar10 = puVar12;
    if ((bool)uVar4) {
      puVar9 = (undefined8 *)param_1[1];
      if (((ulong)puVar9 & 1) != 0) {
        func_0x00010b4cebc8();
        puVar9 = extraout_x8;
      }
      puVar10 = &stack0x00000018;
      in_stack_00000018 = puVar9;
      func_0x00010b4c376c();
      *(undefined8 **)((long)puVar12 + uVar11) = puVar10;
      puVar9 = puVar10;
    }
    if (puVar9[2] != 0) {
      func_0x00010b4ce140();
      func_0x00010b4ce510();
      if ((bool)uVar4) {
        puVar12 = (undefined8 *)puVar10[2];
        puVar10 = puVar9;
        func_0x00010b4cc3a0();
        if ((int)puVar10 != 0) {
          do {
            in_stack_00000018 = param_2;
            func_0x000107c39a58();
            if (in_stack_00000018 == (undefined8 *)0x0) goto LAB_10b4c5d10;
            if (puVar12[5] == 0) {
              puVar6 = puVar12;
              FUN_10b4d75d0();
            }
            else {
              lVar8 = puVar12[5] + -0x18;
              puVar12[5] = lVar8;
              puVar6 = (undefined8 *)(puVar12[4] + lVar8 + 0x10);
            }
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar10 = puVar9;
            func_0x00010b4cc3c8();
            func_0x00010b4cecd8();
            func_0x000107c30268();
            if (puVar10 == (undefined8 *)0x0) goto LAB_10b4c5d10;
            puVar5 = puVar10;
            func_0x00010b4ceba4();
            if ((long)puVar6 < 0) {
              puVar5 = (undefined8 *)*puVar5;
            }
            func_0x00010b4ce828();
            if (((ulong)puVar5 & 1) == 0) goto LAB_10b4c5d10;
            uVar4 = puVar10 == (undefined8 *)*unaff_x22;
            if ((undefined8 *)*unaff_x22 <= puVar10) goto LAB_10b4cd414;
            param_2 = puVar10;
            func_0x00010b4ce6b8(puVar10,&stack0x00000014);
            func_0x00010b4cf124();
          } while ((bool)uVar4);
          goto LAB_10b4cd3b0;
        }
      }
    }
    do {
      puVar12 = puVar9;
      func_0x000107c303b4();
      puVar10 = puVar12;
      func_0x000107c39ab8();
      if (puVar10 == (undefined8 *)0x0) goto LAB_10b4c5d10;
      lVar8 = (long)*(char *)((long)puVar12 + 0x17);
      puVar6 = puVar12;
      if (lVar8 < 0) {
        puVar6 = (undefined8 *)*puVar12;
        lVar8 = puVar12[1];
      }
      func_0x00010b4ce828(puVar6,lVar8);
      if (((ulong)puVar6 & 1) == 0) goto LAB_10b4c5d10;
      uVar4 = puVar10 == (undefined8 *)*unaff_x22;
      if ((undefined8 *)*unaff_x22 <= puVar10) goto LAB_10b4cd414;
      func_0x00010b4ce6b8(puVar10,&stack0x00000014);
      func_0x00010b4cf124();
    } while ((bool)uVar4);
  }
LAB_10b4cd3b0:
  if (puVar10 < (undefined8 *)*unaff_x22) {
    func_0x000107c39948(*(undefined2 *)puVar10);
code_r0x0001000647c0:
                    /* WARNING: Could not recover jumptable at 0x0001000647d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  }
  uVar3 = *param_5;
joined_r0x00010b4cd420:
  if (uVar3 != 0) {
    *(uint *)((long)param_1 + (ulong)uVar3) = *(uint *)((long)param_1 + (ulong)uVar3) | param_6;
  }
  return puVar10;
LAB_10b4cd414:
  uVar3 = *param_5;
  goto joined_r0x00010b4cd420;
}



/* Entry: 10b4cae94; end: 10b4cb4bf;  */

ushort * FUN_10b4cae94(ushort *param_1,undefined8 param_2,long param_3,ulong param_4,ushort *param_5
                      ,uint param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  ushort *puVar12;
  ushort *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_w8;
  uint extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined4 extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  undefined4 extraout_w8_05;
  uint extraout_w8_06;
  uint extraout_w8_07;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar14;
  long extraout_x8_01;
  ushort *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 *extraout_x9_02;
  undefined8 *puVar15;
  ushort *extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  long extraout_x12_00;
  uint uVar16;
  ushort *unaff_x21;
  long lVar17;
  ushort *unaff_x24;
  uint uVar18;
  ushort *puVar19;
  ushort *puVar20;
  undefined8 unaff_x30;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_88;
  uint uStack_80;
  uint uStack_7c;
  
  func_0x000107c39c28();
  uVar14 = param_4;
  puVar13 = param_5;
  func_0x000107c39b68();
  puVar1 = (uint *)((long)puVar13 + (uVar14 >> 0x20));
  uVar4 = *(ushort *)((long)puVar1 + 10);
  puVar19 = (ushort *)(ulong)uVar4;
  uVar2 = uVar4 & 0x30;
  uVar18 = (uint)uVar4;
  uVar16 = (uint)param_4;
  if (uVar2 == 0x20) {
    if ((uVar18 & 0x1c0) == 0x40) {
      if ((uVar16 & 7) != 3) goto LAB_10b4cb124;
      func_0x00010b4cea04();
      func_0x00010b4cf018();
      puVar12 = param_1;
      func_0x000107c39b00((short)puVar1[2]);
      puVar20 = *(ushort **)(extraout_x9_00 + extraout_x8_00 * 8);
      uVar18 = uVar18 & 0x600;
      cVar9 = SBORROW4(uVar18,0x200);
      iVar10 = uVar18 - 0x200;
      if (uVar18 != 0x200) {
        cVar9 = SBORROW4(uVar18,0x400);
        iVar10 = uVar18 - 0x400;
        if (uVar18 == 0x400) {
          cVar9 = false;
          cVar5 = false;
          do {
            puVar12 = param_1;
            func_0x00010b4cecfc();
            func_0x00010b4ce8a0();
            *(undefined4 *)(param_3 + 0x58) = extraout_w8;
            if (cVar5 != cVar9) goto LAB_10b4c5d10;
            func_0x00010b4ce39c();
            do {
              func_0x000107c399fc();
              puVar19 = unaff_x24;
              if ((((ulong)puVar12 & 1) != 0) ||
                 (puVar13 = puVar20, func_0x00010b4ce20c(*unaff_x24), puVar19 = puVar12,
                 puVar12 == (ushort *)0x0)) break;
              unaff_x24 = puVar12;
            } while (*(int *)(param_3 + 0x50) == 0);
            if ((*(byte *)((long)puVar20 + 9) & 1) != 0) {
              func_0x00010b4ce4e8(*(undefined8 *)(puVar20 + 0x14));
              puVar19 = puVar12;
            }
            func_0x00010b4ce32c();
            bVar8 = uVar16 <= extraout_w8_00;
            if ((extraout_w8_00 != uVar16) || (puVar19 == (ushort *)0x0)) goto LAB_10b4c5d10;
            func_0x00010b4ced2c();
            if (bVar8) goto LAB_10b4cb448;
            func_0x00010b4ce298();
            if (puVar12 == (ushort *)0x0) goto LAB_10b4c5d10;
            uVar7 = uVar16 <= uStack_7c;
            cVar9 = SBORROW4(uStack_7c,uVar16);
            cVar5 = (int)(uStack_7c - uVar16) < 0;
            unaff_x24 = puVar12;
          } while (uStack_7c == uVar16);
          goto LAB_10b4cb3fc;
        }
      }
      do {
        cVar5 = iVar10 < 0;
        func_0x00010b4cf094();
        func_0x00010b4ce8a0();
        *(undefined4 *)(param_3 + 0x58) = extraout_w8_05;
        if (cVar5 != cVar9) goto LAB_10b4c5d10;
        func_0x00010b4ce39c();
        func_0x00010b4ce834();
        func_0x00010b4ce32c();
        bVar8 = extraout_w8_06 == uVar16;
        if (extraout_w8_06 != uVar16 || puVar12 == (ushort *)0x0) goto LAB_10b4c5d10;
        func_0x00010b4cea20();
        if (bVar8) goto LAB_10b4cb448;
        func_0x00010b4ce298();
        if (puVar12 == (ushort *)0x0) goto LAB_10b4c5d10;
        func_0x00010b4cf10c();
        uVar7 = uVar16 <= extraout_w8_07;
        cVar9 = SBORROW4(extraout_w8_07,uVar16);
        iVar10 = extraout_w8_07 - uVar16;
      } while (extraout_w8_07 == uVar16);
    }
    else {
      if (((uVar4 & 0x1c0) != 0) || ((uVar16 & 7) != 2)) goto LAB_10b4cb124;
      func_0x00010b4cea04();
      func_0x00010b4cf018();
      puVar12 = param_1;
      func_0x000107c39b00((short)puVar1[2]);
      uVar18 = uVar18 & 0x600;
      uVar7 = 0x1ff < uVar18;
      if ((uVar18 == 0x200) || (uVar7 = 0x3ff < uVar18, uVar18 != 0x400)) {
        do {
          func_0x00010b4cf094();
          func_0x00010b4cee18();
          if (puVar12 == (ushort *)0x0) goto LAB_10b4c5d10;
          func_0x00010b4cea20();
          if ((bool)uVar7) goto LAB_10b4cb448;
          func_0x00010b4ce298();
          if (puVar12 == (ushort *)0x0) goto LAB_10b4c5d10;
          func_0x00010b4cf10c();
          uVar7 = uVar16 <= extraout_w8_04;
        } while (extraout_w8_04 == uVar16);
      }
      else {
        lStack_88 = *(long *)(extraout_x9 + extraout_x8 * 8) + 0x38;
        uVar7 = true;
        cVar9 = false;
        iVar10 = 0;
        do {
          uVar6 = 1;
          cVar5 = iVar10 < 0;
          puVar12 = param_1;
          func_0x00010b4cecfc();
          func_0x000107c39a58();
          if ((unaff_x24 == (ushort *)0x0) || (func_0x000107c39b8c(), (bool)uVar6 || cVar5 != cVar9)
             ) {
LAB_10b4c5d10:
            func_0x00010b4cf118();
            func_0x00010b4ce7bc();
            if (*puVar13 != 0) {
              func_0x000107c39bb4();
            }
            return (ushort *)0x0;
          }
          func_0x000107c39968();
          func_0x00010b4cf144();
          lVar17 = lStack_88;
          puVar19 = unaff_x24;
          while (func_0x000107c399fc(), ((ulong)puVar12 & 1) == 0) {
            puVar13 = (ushort *)(lVar17 + -0x38);
            func_0x00010b4ce20c(*puVar19);
            puVar19 = puVar12;
            if ((puVar12 == (ushort *)0x0) || (*(int *)(param_3 + 0x50) != 0)) break;
          }
          if ((*(byte *)(lVar17 + -0x2f) & 1) != 0) {
            func_0x00010b4ce4e8(*(undefined8 *)(lVar17 + -0x10));
            puVar19 = puVar12;
          }
          func_0x000107c39a64();
          uStack_7c = (uint)unaff_x24;
          func_0x000107c39aac();
          if ((((ulong)puVar12 & 1) == 0) || (puVar19 == (ushort *)0x0)) goto LAB_10b4c5d10;
          func_0x00010b4ced2c();
          if ((bool)uVar7) goto LAB_10b4cb448;
          func_0x00010b4ce298();
          if (puVar12 == (ushort *)0x0) goto LAB_10b4c5d10;
          uVar7 = uVar16 <= uStack_80;
          cVar9 = SBORROW4(uStack_80,uVar16);
          iVar10 = uStack_80 - uVar16;
          unaff_x24 = puVar12;
        } while (uStack_80 == uVar16);
      }
    }
LAB_10b4cb3fc:
    func_0x00010b4ced2c();
    if ((bool)uVar7) {
LAB_10b4cb448:
      uVar4 = *param_5;
      if (uVar4 != 0) {
        *(uint *)((long)unaff_x21 + (ulong)uVar4) =
             *(uint *)((long)unaff_x21 + (ulong)(uint)uVar4) | param_6;
      }
code_r0x0001002a0224:
      func_0x000107c39b24(puVar19,unaff_x30);
      return puVar19;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + ((ulong)*puVar19 & (ulong)(byte)param_5[4]) + 0x1c)
    ;
    func_0x00010b4ce6c8();
    unaff_x21 = puVar12;
  }
  else {
    uVar3 = uVar4 & 0x1c0;
    if (uVar3 == 0x40) {
      if ((uVar16 & 7) == 3) goto LAB_10b4cb104;
    }
    else if ((uVar4 & 0x1c0) == 0 && (uVar16 & 7) == 2) {
LAB_10b4cb104:
      if (uVar2 == 0x30) {
        param_1 = param_5;
        func_0x000107c302d8(param_5,puVar1[1],uVar16 >> 3);
        puVar19 = param_1;
      }
      else if (uVar2 == 0x10) {
        func_0x000107c39984(puVar1[1]);
        puVar19 = (ushort *)0x0;
      }
      else {
        puVar19 = (ushort *)0x0;
      }
      func_0x00010b4cea04();
      uVar14 = (ulong)*param_5;
      if (uVar14 != 0) {
        *(uint *)((long)unaff_x21 + uVar14) = *(uint *)((long)unaff_x21 + uVar14) | param_6;
      }
      bVar8 = (uVar18 & 0x600) == 0x400;
      if (bVar8) {
        func_0x000107c39b00((short)puVar1[2]);
        lVar17 = *(long *)(extraout_x9_01 + extraout_x8_01 * 8);
        if ((((ulong)puVar19 & 1) != 0) ||
           (puVar13 = *(ushort **)((long)extraout_x11 + extraout_x12),
           *(ushort **)((long)extraout_x11 + extraout_x12) == (ushort *)0x0)) {
          param_1 = *(ushort **)(lVar17 + 0x20);
          if ((*(ulong *)(unaff_x21 + 4) & 1) != 0) {
            func_0x00010b4ce8e8();
          }
          func_0x000107c399cc();
          *(ushort **)((long)extraout_x11 + extraout_x12) = param_1;
          unaff_x21 = extraout_x11;
          puVar13 = param_1;
        }
        cVar5 = SBORROW4(uVar3,0x40);
        cVar9 = (int)(uVar3 - 0x40) < 0;
        uVar7 = uVar3 == 0x40;
        if ((bool)uVar7) {
          func_0x00010b4ce8a0();
          *(undefined4 *)(param_3 + 0x58) = extraout_w8_01;
          if (cVar9 == cVar5) {
            func_0x00010b4ce39c();
            while (func_0x000107c399fc(), puVar19 = unaff_x24, ((ulong)param_1 & 1) == 0) {
              func_0x000107c399d4(*unaff_x24);
              param_1 = puVar13;
              func_0x00010b4ce2a4();
              puVar19 = param_1;
              if ((param_1 == (ushort *)0x0) || (unaff_x24 = param_1, *(int *)(param_3 + 0x50) != 0)
                 ) break;
            }
            if ((*(byte *)(lVar17 + 9) & 1) != 0) {
              func_0x00010b4cecd8(*(undefined8 *)(lVar17 + 0x28));
              (*extraout_x8_03)();
              puVar19 = param_1;
            }
            goto LAB_10b4cb2a4;
          }
        }
        else {
          func_0x000107c39a58();
          if ((unaff_x24 != (ushort *)0x0) &&
             (func_0x000107c39b8c(), !(bool)uVar7 && cVar9 == cVar5)) {
            func_0x000107c39968();
            func_0x000107c39b1c();
            puVar19 = extraout_x8_02;
            do {
              func_0x000107c399fc();
              if ((((ulong)param_1 & 1) != 0) ||
                 (func_0x000107c39958(*puVar19), puVar19 = param_1, param_1 == (ushort *)0x0))
              break;
            } while (*(int *)(param_3 + 0x50) == 0);
            if ((*(byte *)(lVar17 + 9) & 1) != 0) {
              func_0x00010b4ce550(*(undefined8 *)(lVar17 + 0x28));
              puVar19 = param_1;
            }
            iVar10 = (int)param_1;
            func_0x000107c39a64();
            uStack_7c = (uint)unaff_x21;
            func_0x000107c39aac();
            if (iVar10 == 0) {
              puVar19 = (ushort *)0x0;
            }
            goto code_r0x0001002a0224;
          }
        }
      }
      else {
        if ((((ulong)puVar19 & 1) != 0) ||
           (puVar19 = *(ushort **)((long)param_1 + (ulong)*puVar1), puVar19 == (ushort *)0x0)) {
          func_0x00010b4cf0d0();
          puVar15 = extraout_x9_02;
          if (!bVar8) {
            puVar15 = (undefined8 *)*extraout_x9_02;
          }
          puVar19 = (ushort *)*puVar15;
          if ((*(ulong *)(unaff_x21 + 4) & 1) != 0) {
            func_0x00010b4ce8e8();
          }
          func_0x000107c399cc();
          *(ushort **)(extraout_x11_00 + extraout_x12_00) = puVar19;
        }
        cVar5 = SBORROW4(uVar3,0x40);
        cVar9 = (int)(uVar3 - 0x40) < 0;
        if (uVar3 != 0x40) {
          lVar17 = param_3;
          func_0x00010b4ce7bc(param_3,puVar19);
          lVar11 = lVar17;
          uStack_b0 = param_4;
          lStack_a8 = param_3;
          func_0x00010055e218();
          puVar13 = (ushort *)0x0;
          if (lVar11 != 0) {
            func_0x00010055e2f0(puVar19,lVar11,lVar17);
            *(int *)(lVar17 + 0x58) = *(int *)(lVar17 + 0x58) + 1;
            uStack_b8 = uStack_b4;
            func_0x000100064534(lVar17,&uStack_b8);
            puVar13 = puVar19;
            if ((int)lVar17 == 0) {
              puVar13 = (ushort *)0x0;
            }
          }
          return puVar13;
        }
        func_0x00010b4ce8a0();
        *(undefined4 *)(param_3 + 0x58) = extraout_w8_02;
        if (cVar9 == cVar5) {
          func_0x00010b4ce39c();
          func_0x00010b4ce834(puVar19);
LAB_10b4cb2a4:
          func_0x00010b4ce3ac(CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20) + -1,
                                       (int)*(undefined8 *)(param_3 + 0x58) + 1));
          if (extraout_w8_03 != uVar16) {
            puVar19 = (ushort *)0x0;
          }
          goto code_r0x0001002a0224;
        }
      }
      puVar19 = (ushort *)0x0;
      goto code_r0x0001002a0224;
    }
LAB_10b4cb124:
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
  }
  func_0x00010b4cf118();
  func_0x00010b4ce7bc();
                    /* WARNING: Could not recover jumptable at 0x00010b4cb14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return unaff_x21;
}



/* Entry: 10b4cb4c0; end: 10b4cba8f;  */

void FUN_10b4cb4c0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5)

{
  uint uVar1;
  long extraout_x8;
  long extraout_x9;
  ulong uVar2;
  long unaff_x24;
  long lVar3;
  
  uVar1 = (uint)param_4;
  func_0x000107c39b18();
  uVar2 = *(ulong *)(extraout_x9 + extraout_x8 * 8);
  if (((uVar2 >> 0x10 & 1) != 0) && ((uVar1 & 7) == 2)) {
    FUN_10b4c99a4(param_1,param_5);
    lVar3 = param_1 + (ulong)*(uint *)(param_5 + (param_4 >> 0x20));
    if ((((uint)uVar2 >> 0x10 & 0xff) >> 1 & 1) == 0) {
      func_0x00010b4cec68();
      lVar3 = param_1;
    }
    func_0x000107c39c20();
    func_0x000107c302f4(lVar3,uVar2 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010b4cb578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&UNK_100dd036c + unaff_x24 * 4) + 0x10b4cb56c))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b4c5d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x30))(param_1,param_2,param_3);
  return;
}



/* Entry: 10b4cba90; end: 10b4cbccb;  */

ulong FUN_10b4cba90(ulong param_1)

{
  ulong unaff_x19;
  ulong unaff_x21;
  
  func_0x000107c39994();
  while ((unaff_x19 < unaff_x21 && (func_0x000107c39978(), unaff_x19 = param_1, param_1 != 0))) {
    func_0x00010b4ceb64();
  }
  return unaff_x19;
}



/* Entry: 10b4cbccc; end: 10b4cbe13;  */

undefined8 *
FUN_10b4cbccc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,short *param_5
             )

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  uint unaff_w19;
  ushort *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  uint uVar6;
  ulong unaff_x23;
  undefined8 uVar7;
  undefined8 *unaff_x25;
  undefined8 *puVar8;
  code *unaff_x30;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  undefined8 uStack_48;
  
  while( true ) {
    func_0x000107c39b14();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
    func_0x000107c39a5c();
    func_0x00010b4cf1c4();
    func_0x00010b4ce8ac();
    uVar6 = (uint)unaff_x23;
    uVar2 = uVar6 & 7;
    uVar5 = uVar2 == 2;
    if (!(bool)uVar5) break;
    func_0x00010b4ce788();
    func_0x00010b4ceccc();
    func_0x000107c39a38();
    func_0x00010b4ce8b8();
    UNRECOVERED_JUMPTABLE_00 = unaff_x30;
    func_0x000107c399e8();
    func_0x00010b4cf0e4();
    if ((bool)uVar5) {
      puVar1 = (uint *)((long)unaff_x20 + (param_4 >> 0x20));
      uVar4 = *(ushort *)((long)puVar1 + 10);
      func_0x000107c39a8c();
      puVar8 = unaff_x22;
      if ((uVar4 & 0x1c0) == 0xc0) {
        FUN_10b4cbe9c();
      }
      else {
        FUN_10b4cbfb4(unaff_x22,uStack_48,param_1,(long)unaff_x21 + (ulong)*puVar1);
      }
      if (puVar8 != (undefined8 *)0x0) {
        if ((undefined8 *)*unaff_x22 <= puVar8) {
          if (*unaff_x20 != 0) {
            func_0x000107c39990();
          }
          return puVar8;
        }
        func_0x000107c398fc(*(undefined2 *)puVar8);
        func_0x00010b4ce174();
                    /* WARNING: Could not recover jumptable at 0x00010b4ce694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return puVar8;
      }
      func_0x00010b4ce184();
      goto LAB_10b4c5d10;
    }
    param_1 = unaff_x21;
    func_0x00010b4ce174(unaff_x21);
  }
  puVar1 = (uint *)((long)unaff_x20 + (unaff_x23 >> 0x20));
  if ((*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0xc0) {
    uVar5 = (unaff_x23 & 7) != 0;
    if (uVar2 != 1) {
LAB_10b4cbdd0:
      UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x20 + 0x18);
      func_0x00010b4ce788();
      func_0x00010b4ceccc();
      goto LAB_10b4cbddc;
    }
    uVar2 = *puVar1;
    param_1 = unaff_x25;
    do {
      puVar8 = param_1 + 1;
      uVar7 = *param_1;
      param_1 = (undefined8 *)((long)unaff_x21 + (ulong)uVar2);
      FUN_10b4cbe14();
      *param_1 = uVar7;
      func_0x000107c39b50();
      if ((bool)uVar5) goto LAB_10b4cbde8;
      func_0x00010b4ce368();
      if (param_1 == (undefined8 *)0x0) {
LAB_10b4cbe08:
        func_0x00010b4ce184();
LAB_10b4c5d10:
        if (*param_5 != 0) {
          func_0x000107c39bb4();
        }
        return (undefined8 *)0x0;
      }
      uVar5 = uVar6 <= in_stack_0000000c;
    } while (in_stack_0000000c == uVar6);
  }
  else {
    if (uVar2 != 5) goto LAB_10b4cbdd0;
    uVar2 = *puVar1;
    uVar5 = true;
    param_1 = unaff_x25;
    do {
      puVar8 = (undefined8 *)((long)param_1 + 4);
      uVar3 = *(undefined4 *)param_1;
      param_1 = (undefined8 *)((long)unaff_x21 + (ulong)uVar2);
      func_0x00010b4cbe58();
      *(undefined4 *)param_1 = uVar3;
      func_0x000107c39b50();
      if ((bool)uVar5) goto LAB_10b4cbde8;
      func_0x00010b4ce368();
      if (param_1 == (undefined8 *)0x0) goto LAB_10b4cbe08;
      uVar5 = uVar6 <= in_stack_00000008;
    } while (in_stack_00000008 == uVar6);
  }
  func_0x000107c39af4();
  if ((bool)uVar5) {
LAB_10b4cbde8:
    uVar4 = *unaff_x20;
    if (uVar4 != 0) {
      *(uint *)((long)unaff_x21 + (ulong)uVar4) =
           *(uint *)((long)unaff_x21 + (ulong)(uint)uVar4) | unaff_w19;
    }
    return puVar8;
  }
  func_0x000107c398fc(*(undefined2 *)puVar8);
  func_0x000107c39aa4();
LAB_10b4cbddc:
  func_0x000107c39a38();
                    /* WARNING: Could not recover jumptable at 0x000100068b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return param_1;
}



/* Entry: 10b4cbe14; end: 10b4cbe9b;  */

long FUN_10b4cbe14(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    func_0x0001087675dc(param_1,iVar1,iVar1 + 1);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 1;
  return *(long *)(param_1 + 2) + (long)iVar1 * 8;
}



/* Entry: 10b4cbe9c; end: 10b4cbfb3;  */

ulong FUN_10b4cbe9c(undefined8 param_1,long param_2,ulong param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  uint uVar11;
  ulong unaff_x21;
  long unaff_x22;
  ulong uVar12;
  ulong unaff_x23;
  ulong unaff_x24;
  long lStack_118;
  undefined1 auStack_b8 [16];
  int *piStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  int *piStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_58 [16];
  int *piStack_48;
  
  if (param_2 == 0) {
LAB_10b4cbf28:
    unaff_x21 = 0;
  }
  else {
    uVar9 = param_3;
    piVar10 = param_4;
    piStack_48 = param_4;
    func_0x00010b4cee64();
    while( true ) {
      func_0x00010b4cf224();
      uVar11 = (uint)param_3;
      if ((bool)in_ZR || in_NG != in_OV) break;
      iVar1 = (int)(uint)unaff_x23 >> 3;
      func_0x0001088f2a7c(param_4,*param_4 + iVar1);
      uVar2 = (uint)unaff_x23 & 0xfffffff8;
      unaff_x24 = (ulong)uVar2;
      func_0x00010b4cf218();
      *param_4 = extraout_w9 + iVar1;
      uVar9 = (ulong)(int)uVar2;
      func_0x00010b4cedd8(extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 8);
      iVar1 = *(int *)(unaff_x22 + 0x1c);
      in_OV = SBORROW4(iVar1,0x11);
      in_NG = iVar1 + -0x11 < 0;
      in_ZR = iVar1 == 0x11;
      if (iVar1 < 0x11) goto LAB_10b4cbf28;
      lVar7 = unaff_x22;
      FUN_10b4d1d34();
      if (lVar7 == 0) {
        return 0;
      }
      param_3 = (ulong)(uVar11 - uVar2);
      unaff_x21 = (lVar7 - (unaff_x23 & 7)) + 0x10;
    }
    uVar2 = uVar11 & 0xfffffff8;
    cVar4 = SBORROW4(uVar11,7);
    cVar5 = (int)(uVar11 - 7) < 0;
    uVar6 = uVar11 == 7;
    if (uVar11 < 8) {
      if (uVar11 != uVar2) {
        unaff_x21 = 0;
      }
    }
    else {
      uVar3 = (int)uVar11 >> 3;
      uVar12 = (ulong)uVar3;
      func_0x0001088f2a7c(param_4,*param_4 + uVar3);
      func_0x00010b4cf218();
      *param_4 = extraout_w9_00 + uVar3;
      if (extraout_x8_00 == 0) {
        func_0x00010b4ce934();
        FUN_10b4cc0cc(auStack_58,&piStack_48);
        func_0x00010b4cf064();
        uVar8 = uVar12;
        FUN_10b4c31f4();
        func_0x00010ae6c700(auStack_58);
        pcStack_68 = FUN_10b4cbfb4;
        if (uVar8 == 0) {
LAB_10b4cc040:
          unaff_x21 = 0;
        }
        else {
          piStack_a8 = piVar10;
          uStack_a0 = unaff_x24;
          uStack_98 = (ulong)uVar2;
          uStack_90 = uVar12;
          uStack_88 = unaff_x21;
          piStack_80 = param_4;
          uStack_78 = param_3;
          puStack_70 = &stack0xfffffffffffffff0;
          func_0x00010b4cee64();
          while( true ) {
            func_0x00010b4cf224();
            uVar11 = (uint)uVar9;
            if ((bool)uVar6 || cVar5 != cVar4) break;
            func_0x000108901788(piVar10,*piVar10 + ((int)uVar2 >> 2));
            func_0x00010b4cf218();
            *piVar10 = extraout_w9_01 + ((int)uVar2 >> 2);
            func_0x00010b4cedd8(extraout_x8_01 + CONCAT44(extraout_var_01,extraout_w9_01) * 4);
            iVar1 = *(int *)(uVar12 + 0x1c);
            cVar4 = SBORROW4(iVar1,0x11);
            cVar5 = iVar1 + -0x11 < 0;
            uVar6 = iVar1 == 0x11;
            if (iVar1 < 0x11) goto LAB_10b4cc040;
            uVar8 = uVar12;
            FUN_10b4d1d34();
            if (uVar8 == 0) {
              return 0;
            }
            uVar9 = (ulong)(uVar11 - uVar2);
            unaff_x21 = uVar8 + 0x10;
          }
          uVar2 = uVar11 & 0xfffffffc;
          if (uVar11 < 4) {
            if (uVar11 != uVar2) {
              unaff_x21 = 0;
            }
          }
          else {
            func_0x000108901788(piVar10,*piVar10 + ((int)uVar11 >> 2));
            func_0x00010b4cf218();
            *piVar10 = extraout_w9_02 + ((int)uVar11 >> 2);
            if (extraout_x8_02 == 0) {
              func_0x00010b4ce934();
              FUN_10b4cc10c(auStack_b8,&piStack_a8);
              func_0x00010b4cf064();
              FUN_10b4c31f4();
              func_0x00010ae6c700(auStack_b8);
              func_0x00010b4cebe8();
              __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv
                        (lStack_118 + 0x118,*(undefined8 *)piVar10);
              func_0x00010b4cee3c();
              return uVar9;
            }
            func_0x00010b4cedd8(extraout_x8_02 + CONCAT44(extraout_var_02,extraout_w9_02) * 4);
            unaff_x21 = unaff_x21 + (long)(int)uVar2;
            if (uVar11 != uVar2) {
              unaff_x21 = 0;
            }
          }
        }
      }
      else {
        func_0x00010b4cedd8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 8);
        unaff_x21 = unaff_x21 + (long)(int)uVar2;
        if (uVar11 != uVar2) {
          unaff_x21 = 0;
        }
      }
    }
  }
  return unaff_x21;
}



/* Entry: 10b4cbfb4; end: 10b4cc0cb;  */

ulong FUN_10b4cbfb4(undefined8 param_1,long param_2,ulong param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar4;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long lStack_b8;
  undefined1 auStack_58 [16];
  int *piStack_48;
  
  if (param_2 == 0) {
LAB_10b4cc040:
    unaff_x21 = 0;
  }
  else {
    piStack_48 = param_4;
    func_0x00010b4cee64();
    while( true ) {
      func_0x00010b4cf224();
      uVar4 = (uint)param_3;
      if ((bool)in_ZR || in_NG != in_OV) break;
      iVar1 = (int)(uint)unaff_x23 >> 2;
      func_0x000108901788(param_4,*param_4 + iVar1);
      func_0x00010b4cf218();
      *param_4 = extraout_w9 + iVar1;
      func_0x00010b4cedd8(extraout_x8 + CONCAT44(extraout_var,extraout_w9) * 4);
      iVar1 = *(int *)(unaff_x22 + 0x1c);
      in_OV = SBORROW4(iVar1,0x11);
      in_NG = iVar1 + -0x11 < 0;
      in_ZR = iVar1 == 0x11;
      if (iVar1 < 0x11) goto LAB_10b4cc040;
      lVar3 = unaff_x22;
      FUN_10b4d1d34();
      if (lVar3 == 0) {
        return 0;
      }
      param_3 = (ulong)(uVar4 - ((uint)unaff_x23 & 0xfffffffc));
      unaff_x21 = (lVar3 - (unaff_x23 & 3)) + 0x10;
    }
    uVar2 = uVar4 & 0xfffffffc;
    if (uVar4 < 4) {
      if (uVar4 != uVar2) {
        unaff_x21 = 0;
      }
    }
    else {
      func_0x000108901788(param_4,*param_4 + ((int)uVar4 >> 2));
      func_0x00010b4cf218();
      *param_4 = extraout_w9_00 + ((int)uVar4 >> 2);
      if (extraout_x8_00 == 0) {
        func_0x00010b4ce934();
        FUN_10b4cc10c(auStack_58,&piStack_48);
        func_0x00010b4cf064();
        FUN_10b4c31f4();
        func_0x00010ae6c700(auStack_58);
        func_0x00010b4cebe8();
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv
                  (lStack_b8 + 0x118,*(undefined8 *)param_4);
        func_0x00010b4cee3c();
        return param_3;
      }
      func_0x00010b4cedd8(extraout_x8_00 + CONCAT44(extraout_var_00,extraout_w9_00) * 4);
      unaff_x21 = unaff_x21 + (long)(int)uVar2;
      if (uVar4 != uVar2) {
        unaff_x21 = 0;
      }
    }
  }
  return unaff_x21;
}



/* Entry: 10b4cc0cc; end: 10b4cc10b;  */

void FUN_10b4cc0cc(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  
  func_0x00010b4cebe8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(uStack_58 + 0x118,*unaff_x20);
  func_0x00010b4cee3c();
  return;
}



/* Entry: 10b4cc10c; end: 10b4cc14b;  */

void FUN_10b4cc10c(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  
  func_0x00010b4cebe8();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(uStack_58 + 0x118,*unaff_x20);
  func_0x00010b4cee3c();
  return;
}



/* Entry: 10b4cc14c; end: 10b4cc357;  */

undefined8 *
FUN_10b4cc14c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             ushort *param_5,uint param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 *puVar9;
  code *unaff_x30;
  undefined8 *in_stack_00000018;
  
  func_0x000107c39b38();
  UNRECOVERED_JUMPTABLE = unaff_x30;
  func_0x00010b4cf1c4();
  if (((uint)unaff_x23 & 7) != 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x18);
    func_0x00010b4ceccc(param_1,param_2);
    goto code_r0x0001000647c0;
  }
  puVar1 = (uint *)((long)param_5 + (unaff_x23 >> 0x20));
  uVar4 = (*(ushort *)((long)puVar1 + 10) & 0x1c0) == 0x100;
  puVar5 = param_2;
  if ((bool)uVar4) {
    puVar2 = (undefined8 *)((long)param_1 + (ulong)*puVar1);
    if (puVar2[2] != 0) {
      puVar5 = param_1;
      func_0x00010b4ce140();
      func_0x00010b4ce510();
      if ((bool)uVar4) {
        puVar9 = (undefined8 *)puVar5[2];
        puVar5 = puVar2;
        func_0x00010b4cc3a0();
        if ((int)puVar5 != 0) {
          do {
            in_stack_00000018 = param_2;
            func_0x000107c39a58();
            if (in_stack_00000018 == (undefined8 *)0x0) goto LAB_10b4c5d10;
            if (puVar9[5] == 0) {
              puVar7 = puVar9;
              FUN_10b4d75d0();
            }
            else {
              lVar8 = puVar9[5] + -0x18;
              puVar9[5] = lVar8;
              puVar7 = (undefined8 *)(puVar9[4] + lVar8 + 0x10);
            }
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar5 = puVar2;
            func_0x00010b4cc3c8();
            func_0x00010b4cecd8();
            func_0x000107c30268();
            if (puVar5 == (undefined8 *)0x0) goto LAB_10b4c5d10;
            puVar6 = puVar5;
            func_0x00010b4ceba4();
            if ((long)puVar7 < 0) {
              puVar6 = (undefined8 *)*puVar6;
            }
            func_0x00010b4ce828();
            if (((ulong)puVar6 & 1) == 0) goto LAB_10b4c5d10;
            uVar4 = puVar5 == (undefined8 *)*unaff_x22;
            if ((undefined8 *)*unaff_x22 <= puVar5) goto LAB_10b4cc344;
            param_2 = puVar5;
            func_0x00010b4ce6b8(puVar5,&stack0x00000014);
            func_0x00010b4cf124();
          } while ((bool)uVar4);
          goto LAB_10b4cc2e4;
        }
      }
    }
    do {
      puVar9 = puVar2;
      func_0x000107c303b4();
      puVar5 = puVar9;
      func_0x000107c39ab8();
      if (puVar5 == (undefined8 *)0x0) {
LAB_10b4c5d10:
        if (*param_5 != 0) {
          func_0x000107c39bb4(param_1,unaff_x30);
        }
        return (undefined8 *)0x0;
      }
      lVar8 = (long)*(char *)((long)puVar9 + 0x17);
      puVar7 = puVar9;
      if (lVar8 < 0) {
        puVar7 = (undefined8 *)*puVar9;
        lVar8 = puVar9[1];
      }
      func_0x00010b4ce828(puVar7,lVar8);
      if (((ulong)puVar7 & 1) == 0) goto LAB_10b4c5d10;
      uVar4 = puVar5 == (undefined8 *)*unaff_x22;
      if ((undefined8 *)*unaff_x22 <= puVar5) goto LAB_10b4cc344;
      func_0x00010b4ce6b8(puVar5,&stack0x00000014);
      func_0x00010b4cf124();
    } while ((bool)uVar4);
  }
LAB_10b4cc2e4:
  if (puVar5 < (undefined8 *)*unaff_x22) {
    func_0x000107c39948(*(undefined2 *)puVar5);
code_r0x0001000647c0:
                    /* WARNING: Could not recover jumptable at 0x0001000647d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  uVar3 = *param_5;
joined_r0x00010b4cc350:
  if (uVar3 != 0) {
    *(uint *)((long)param_1 + (ulong)uVar3) = *(uint *)((long)param_1 + (ulong)uVar3) | param_6;
  }
  return puVar5;
LAB_10b4cc344:
  uVar3 = *param_5;
  goto joined_r0x00010b4cc350;
}


