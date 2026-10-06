/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b48ab64; end: 10b48ab83;  */

undefined ** FUN_10b48ab64(void)

{
  return &PTR_DAT_110cec130;
}



/* Entry: 10b48ab84; end: 10b48abf7;  */

long * FUN_10b48ab84(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b48b9bc();
  if (param_1[2] != 0) {
    func_0x00010b48b9ec();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    param_4 = unaff_x19;
    func_0x000107c282cc();
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



/* Entry: 10b48abf8; end: 10b48ac5f;  */

ulong FUN_10b48abf8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b48ac60; end: 10b48ac8b;  */

long FUN_10b48ac60(long param_1)

{
  func_0x00010b48ba04();
  FUN_10b48b674(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b48ac8c; end: 10b48ac8f;  */

long FUN_10b48ac8c(long param_1)

{
  func_0x00010b48ba04();
  FUN_10b48b674(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b48ac90; end: 10b48aca3;  */

void FUN_10b48ac90(void)

{
  FUN_10b48ac60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b48aca4; end: 10b48acaf;  */

undefined ** FUN_10b48aca4(void)

{
  return &PTR_DAT_110cec178;
}



/* Entry: 10b48acb0; end: 10b48ad07;  */

void FUN_10b48acb0(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
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



/* Entry: 10b48ad08; end: 10b48b027;  */

long * FUN_10b48ad08(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar8;
  long *unaff_x19;
  long unaff_x20;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  func_0x00010b48b9bc();
  plVar3 = param_1;
  if (param_1[0xb] != 0) {
    func_0x00010b48b928();
    plVar3 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b48b9f8();
    param_4 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0x70) == '\x01') {
    func_0x00010b48b928();
    plVar4 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar3);
    func_0x00010b48b934();
    param_4 = plVar4;
  }
  plVar3 = plVar4;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    func_0x00010b48b928();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar4);
    func_0x00010b48b9f8();
    param_4 = plVar3;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x20);
  if (0 < (int)uVar2) {
    func_0x00010b48b928();
    puVar6 = (undefined1 *)((long)plVar3 + 2);
    *(undefined1 *)plVar3 = 0x22;
    while (0x7f < uVar2) {
      func_0x00010b48ba18();
    }
    puVar6[-1] = (char)uVar2;
    piVar9 = *(int **)(unaff_x20 + 0x18);
    piVar1 = piVar9 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x00010b48b928();
      uVar7 = (ulong)*piVar9;
      param_4 = (long *)((long)plVar3 + 1);
      while (0x7f < uVar7) {
        func_0x00010b48ba2c();
        uVar7 = extraout_x8;
      }
      piVar9 = piVar9 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar7;
    } while (piVar9 < piVar1);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    plVar3 = unaff_x19;
    func_0x000107c282c4();
    param_4 = plVar3;
  }
  uVar2 = *(uint *)(unaff_x20 + 0x38);
  if (0 < (int)uVar2) {
    func_0x00010b48b928();
    puVar6 = (undefined1 *)((long)plVar3 + 2);
    *(undefined1 *)plVar3 = 0x32;
    while (0x7f < uVar2) {
      func_0x00010b48ba18();
    }
    puVar6[-1] = (char)uVar2;
    piVar9 = *(int **)(unaff_x20 + 0x30);
    piVar1 = piVar9 + *(int *)(unaff_x20 + 0x28);
    do {
      func_0x00010b48b928();
      uVar7 = (ulong)*piVar9;
      param_4 = (long *)((long)plVar3 + 1);
      while (0x7f < uVar7) {
        func_0x00010b48ba2c();
        uVar7 = extraout_x8_00;
      }
      piVar9 = piVar9 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar7;
    } while (piVar9 < piVar1);
  }
  if (*(char *)(unaff_x20 + 0x71) == '\x01') {
    func_0x00010b48b928();
    param_4 = (long *)0x38;
    func_0x000107c280a8();
    func_0x00010b48b934();
  }
  iVar11 = *(int *)(unaff_x20 + 0x48);
  for (iVar10 = 0; iVar11 != iVar10; iVar10 = iVar10 + 1) {
    func_0x00010b48b9a0();
    param_4 = (long *)0x8;
    func_0x00010b48b998();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar5 = *(long *)(uVar8 + 8);
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar5 = uVar8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar7) {
      while( true ) {
        iVar11 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar10 = (int)uVar7;
        uVar2 = iVar10 - iVar11;
        uVar7 = (ulong)uVar2;
        if (uVar2 == 0 || iVar10 < iVar11) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar10);
    }
    _memcpy(param_4,lVar5,uVar7 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar7);
  }
  return param_4;
}



/* Entry: 10b48b028; end: 10b48b02b;  */

void FUN_10b48b028(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  FUN_10b48b0d0(param_1 + 0x40,param_2 + 0x40);
  if (*(long *)(param_2 + 0x58) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_2 + 0x58);
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_2 + 0x60);
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_2 + 0x68);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
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



/* Entry: 10b48b02c; end: 10b48b0cf;  */

void FUN_10b48b02c(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  FUN_10b48b0d0(param_1 + 0x40,param_2 + 0x40);
  if (*(long *)(param_2 + 0x58) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_2 + 0x58);
  }
  if (*(long *)(param_2 + 0x60) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_2 + 0x60);
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_2 + 0x68);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
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



/* Entry: 10b48b0d0; end: 10b48b0df;  */

void FUN_10b48b0d0(long *param_1,long param_2)

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



/* Entry: 10b48b0e0; end: 10b48b187;  */

undefined8 * FUN_10b48b0e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cec0f0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b48ba0c();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x00010b48a744(param_1 + 3,param_2,param_3 + 0x18);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10b48b7e0(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b48b854(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 0x50);
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  return param_1;
}



/* Entry: 10b48b188; end: 10b48b1b3;  */

undefined8 FUN_10b48b188(undefined8 param_1)

{
  func_0x00010b48ba04();
  FUN_10b48b1b4(param_1);
  return param_1;
}



/* Entry: 10b48b1b4; end: 10b48b1f3;  */

long * FUN_10b48b1b4(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b48ab28();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b48ac60();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b48aa68();
  }
  return (long *)(param_1 + 0x18);
}



/* Entry: 10b48b1f4; end: 10b48b1f7;  */

undefined8 FUN_10b48b1f4(undefined8 param_1)

{
  func_0x00010b48ba04();
  FUN_10b48b1b4(param_1);
  return param_1;
}



/* Entry: 10b48b1f8; end: 10b48b20b;  */

void FUN_10b48b1f8(void)

{
  FUN_10b48b188();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b48b20c; end: 10b48b217;  */

undefined ** FUN_10b48b20c(void)

{
  return &PTR_DAT_110cec1c0;
}



/* Entry: 10b48b218; end: 10b48b27f;  */

void FUN_10b48b218(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_10b48a8ac(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b48ab70(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b48acb0(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b48b280; end: 10b48b3af;  */

long * FUN_10b48b280(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b48b9bc();
  if (param_1[8] != 0) {
    func_0x00010b48b9ec();
    param_4 = param_1;
  }
  iVar8 = *(int *)(unaff_x20 + 0x20);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    func_0x00010b48b9a0();
    param_1 = (long *)0x2;
    func_0x00010b48b998();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if ((*(byte *)(unaff_x20 + 0x48) & 1) != 0) {
    func_0x00010b48b928();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010b48b934();
    param_4 = plVar2;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x4;
    func_0x00010b48b998(4,*(long *)(unaff_x20 + 0x30),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x20));
    param_4 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x5;
    func_0x00010b48b998(5,*(long *)(unaff_x20 + 0x38),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x38) + 0x74));
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x00010b48b928();
    plVar3 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b48b934();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x00010b48b928();
    param_4 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar3);
    func_0x00010b48b934();
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
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar5;
        uVar1 = iVar7 - iVar8;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 10b48b3b0; end: 10b48b4bb;  */

void FUN_10b48b3b0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  lVar5 = (long)iVar3;
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  for (lVar6 = lVar5 << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    FUN_10b48a600();
    lVar5 = uVar4 + lVar5;
    iVar3 = (int)lVar5;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10b48abf8(*(undefined8 *)(param_1 + 0x30));
      func_0x00010b48b964();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x00010b48af08(*(undefined8 *)(param_1 + 0x38));
      func_0x00010b48b964();
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x48) * 2;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(int *)(param_1 + 0x4c)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(int *)(param_1 + 0x50)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar4 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10b48b4bc; end: 10b48b4bf;  */

void FUN_10b48b4bc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b48a6a4(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10b48b7e0(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b48aaf4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_10b48b854(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_10b48b02c();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b48b4c0; end: 10b48b5cf;  */

void FUN_10b48b4c0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b48a6a4(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10b48b7e0(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b48aaf4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_10b48b854(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_10b48b02c();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b48b5d0; end: 10b48b65b;  */

void FUN_10b48b5d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b48b218();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b48a6a4(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        FUN_10b48b7e0(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b48aaf4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        FUN_10b48b854(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar3;
      }
      else {
        FUN_10b48b02c();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b48b65c; end: 10b48b673;  */

void FUN_10b48b65c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110cec050;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b48b674; end: 10b48b6a3;  */

/* WARNING: Possible PIC construction at 0x00010b48b690: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b48b694) */

long FUN_10b48b674(long param_1)

{
  char in_NG;
  char in_OV;
  
  FUN_10b48b6a4(param_1 + 0x30);
  func_0x00010006804c(param_1 + 0x18);
  if (in_NG == in_OV) {
    func_0x0001002a998c(param_1);
  }
  return param_1;
}



/* Entry: 10b48b6a4; end: 10b48b6d3;  */

long * FUN_10b48b6a4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b48b6d4; end: 10b48b7df;  */

void FUN_10b48b6d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cec050;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b48b7e0; end: 10b48b853;  */

undefined8 * FUN_10b48b7e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cec050;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x00010b48aaf4();
  return puVar1;
}



/* Entry: 10b48b854; end: 10b48b927;  */

undefined8 * FUN_10b48b854(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x78;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x78);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110cec0a0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b48ba0c();
  }
  func_0x000107c282d4(puVar1 + 2,param_1,param_2 + 0x10);
  *(undefined4 *)(puVar1 + 4) = 0;
  func_0x000107c282d4(puVar1 + 5,param_1,param_2 + 0x28);
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[9] = 0;
  puVar1[10] = param_1;
  FUN_10b48b0d0(puVar1 + 8,param_2 + 0x40);
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x62);
  *(undefined8 *)((long)puVar1 + 0x6a) = *(undefined8 *)(param_2 + 0x6a);
  *(undefined8 *)((long)puVar1 + 0x62) = uVar4;
  puVar1[0xc] = uVar3;
  puVar1[0xb] = uVar2;
  return puVar1;
}



/* Entry: 10b48b928; end: 10b48ba3f;  */

ulong * FUN_10b48b928(void)

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



/* Entry: 10b48ba40; end: 10b48ba9f;  */

undefined8 * FUN_10b48ba40(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cec258;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598dec8(param_1 + 2,param_2,param_3 + 0x10);
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b48baa0; end: 10b48bacf;  */

long FUN_10b48baa0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x00010598e0e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b48bad0; end: 10b48bad3;  */

long FUN_10b48bad0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x00010598e0e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b48bad4; end: 10b48bae7;  */

void FUN_10b48bad4(void)

{
  FUN_10b48baa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b48bae8; end: 10b48bb07;  */

undefined ** FUN_10b48bae8(void)

{
  return &PTR_DAT_110cec298;
}



/* Entry: 10b48bb08; end: 10b48bbe3;  */

byte * FUN_10b48bb08(byte *param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar7) {
    pbVar2 = param_1;
    func_0x00010b48bd60();
    pbVar4 = pbVar2 + 2;
    *pbVar2 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar4[-1] = (byte)uVar7 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar7;
    puVar8 = *(ulong **)(param_1 + 0x18);
    puVar1 = puVar8 + *(int *)(param_1 + 0x10);
    do {
      func_0x00010b48bd60();
      uVar5 = *puVar8;
      pbVar4 = pbVar2;
      while( true ) {
        param_2 = pbVar4 + 1;
        if (uVar5 < 0x80) break;
        *pbVar4 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar4 = param_2;
      }
      puVar8 = puVar8 + 1;
      *pbVar4 = (byte)uVar5;
    } while (puVar8 < puVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar3 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar3 = uVar6 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar10 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        pbVar4 = param_2 + iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar4);
      }
      func_0x00010b4d5738();
      return param_2 + iVar9;
    }
    _memcpy(param_2,lVar3,uVar5 & 0xffffffff);
    return param_2 + (int)uVar5;
  }
  return param_2;
}



/* Entry: 10b48bbe4; end: 10b48bc4f;  */

void FUN_10b48bbe4(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1 + 0x10;
  func_0x00010b4d3eb0();
  iVar1 = (int)lVar3;
  *(int *)(param_1 + 0x20) = iVar1;
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = ((int)LZCOUNT((long)iVar1) * -9 + 0x280U >> 6) + 1;
  }
  iVar2 = iVar2 + iVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(param_1 + 0x24) = iVar2;
  return;
}



/* Entry: 10b48bc50; end: 10b48bc53;  */

void FUN_10b48bc50(long param_1,long param_2)

{
  func_0x00010598be78(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b48bc54; end: 10b48bcd7;  */

void FUN_10b48bc54(long param_1,long param_2)

{
  func_0x00010598be78(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b48bcd8; end: 10b48bcfb;  */

undefined1  [16] FUN_10b48bcd8(long param_1,long param_2)

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
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 10b48bcfc; end: 10b48bd4b;  */

void FUN_10b48bcfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110cec258;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b48bd4c; end: 10b48bd6b;  */

void FUN_10b48bd4c(void)

{
  return;
}



/* Entry: 10b48bd6c; end: 10b48bdc7;  */

void FUN_10b48bd6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x68;
  __Znwm();
  FUN_10b48ff78();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b48bdc8; end: 10b48c2cf;  */

void FUN_10b48bdc8(long param_1,code ******param_2,code *****param_3)

{
  long *plVar1;
  code *****pppppcVar2;
  ulong *puVar3;
  code ****ppppcVar4;
  code ****ppppcVar5;
  code ****ppppcVar6;
  bool bVar7;
  undefined1 uVar8;
  code ******ppppppcVar9;
  code ****ppppcVar10;
  ulong *puVar11;
  code ******ppppppcVar12;
  code ******ppppppcVar13;
  code *****pppppcVar14;
  code ******ppppppcVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  code *****UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  ulong *unaff_x20;
  code *****unaff_x21;
  code *****pppppcVar21;
  code *****unaff_x22;
  ulong *puVar22;
  ulong *puVar23;
  code *****pppppcVar24;
  ulong *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  code *****pppppcVar28;
  undefined1 auStack_2d0 [40];
  undefined1 auStack_2a8 [48];
  undefined1 auStack_278 [40];
  char cStack_250;
  undefined8 uStack_248;
  code *****pppppcStack_240;
  code *****pppppcStack_238;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  code ****ppppcStack_218;
  code ****ppppcStack_210;
  code *****pppppcStack_208;
  code *****pppppcStack_200;
  long lStack_1f8;
  undefined1 auStack_1f0 [16];
  code *****pppppcStack_1e0;
  code *****pppppcStack_1d8;
  code *****pppppcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code ****ppppcStack_1b8;
  undefined8 uStack_1a8;
  code ****ppppcStack_1a0;
  code ****ppppcStack_198;
  code *****pppppcStack_190;
  undefined1 *puStack_180;
  code *pcStack_178;
  ulong *puStack_168;
  code ****ppppcStack_160;
  code ***pppcStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  code ****ppppcStack_140;
  code ****ppppcStack_138;
  code ****ppppcStack_130;
  code ****ppppcStack_128;
  code ****ppppcStack_120;
  code ****appppcStack_118 [5];
  code ****ppppcStack_f0;
  code ****ppppcStack_e8;
  code ****ppppcStack_e0;
  code ****ppppcStack_d8;
  code ****ppppcStack_d0;
  undefined1 auStack_c0 [40];
  byte bStack_98;
  code ****appppcStack_90 [3];
  long lStack_78;
  undefined8 uStack_70;
  
  func_0x00010b48df20();
  func_0x00010b48def0();
  bVar7 = *(char *)(param_1 + 0xd0) == '\x01';
  if (((bVar7) && (*(int *)(unaff_x19 + 0x20) != 0)) && (*(long *)(unaff_x19 + 0x18) != 0)) {
    lStack_78 = 0;
    auStack_c0[0] = 0;
    bStack_98 = 0;
    UNRECOVERED_JUMPTABLE = param_3;
    uStack_70 = extraout_x8;
    func_0x00010b48dfd0();
    if (*(long *)(unaff_x19 + 0x1d8) == 0) {
      puVar11 = (ulong *)(unaff_x19 + 0x1a8);
      puVar25 = *(ulong **)(unaff_x19 + 0x1b0);
      puVar3 = *(ulong **)(unaff_x19 + 0x1b8);
      param_3 = (code *****)((long)puVar3 - (long)puVar25);
      lVar18 = 0;
      if (param_3 != (code *****)0x0) {
        lVar18 = ((long)puVar3 - (long)puVar25) * 0x20 + -1;
      }
      plVar1 = (long *)(unaff_x19 + 0x1d0);
      uVar20 = *(ulong *)(unaff_x19 + 0x1c8);
      if (lVar18 == *(long *)(unaff_x19 + 0x1d0) + uVar20) {
        if (uVar20 < 0x100) {
          ppppcStack_160 = (code ****)(unaff_x19 + 0x1c0);
          puVar22 = *(ulong **)(unaff_x19 + 0x1c0);
          puVar23 = *(ulong **)(unaff_x19 + 0x1a8);
          if (param_3 < (code *****)((long)puVar22 - (long)puVar23)) {
            unaff_x22 = (code *****)0x1000;
            __Znwm();
            if (puVar22 == puVar3) {
              if (puVar25 == puVar23) {
                lVar18 = (long)puVar22 - (long)puVar25 >> 2;
                if (puVar3 == puVar25) {
                  lVar18 = 1;
                }
                ppppcStack_d0 = ppppcStack_160;
                func_0x00010b48dce8(lVar18);
                func_0x00010b48df4c(lVar18 << 1);
                UNRECOVERED_JUMPTABLE = *(code ******)(unaff_x19 + 0x1b8);
                FUN_10b48dcc0(&ppppcStack_f0,*(undefined8 *)(unaff_x19 + 0x1b0),
                              UNRECOVERED_JUMPTABLE);
                pppppcVar21 = *(code ******)(unaff_x19 + 0x1b0);
                pppppcVar14 = (code *****)*puVar11;
                pppppcVar28 = *(code ******)(unaff_x19 + 0x1c0);
                pppppcVar24 = *(code ******)(unaff_x19 + 0x1b8);
                *(code *****)(unaff_x19 + 0x1b0) = ppppcStack_e8;
                *puVar11 = (ulong)ppppcStack_f0;
                *(code *****)(unaff_x19 + 0x1c0) = ppppcStack_d8;
                *(code *****)(unaff_x19 + 0x1b8) = ppppcStack_e0;
                ppppcStack_f0 = (code ****)pppppcVar14;
                ppppcStack_e8 = (code ****)pppppcVar21;
                ppppcStack_e0 = (code ****)pppppcVar24;
                ppppcStack_d8 = (code ****)pppppcVar28;
                func_0x00010b48dfe8();
                puVar25 = *(ulong **)(unaff_x19 + 0x1b0);
              }
              puVar25[-1] = (ulong)unaff_x22;
              goto LAB_10b48beb8;
            }
            *puVar3 = (ulong)unaff_x22;
            *(ulong **)(unaff_x19 + 0x1b8) = puVar3 + 1;
          }
          else {
            unaff_x22 = (code *****)((long)puVar22 - (long)puVar23 >> 2);
            if (puVar22 == puVar23) {
              unaff_x22 = (code *****)0x1;
            }
            ppppcStack_120 = ppppcStack_160;
            func_0x00010b48dce8();
            pppppcVar14 = (code *****)((long)unaff_x22 + (long)param_3);
            pppppcVar21 = unaff_x22 + (long)param_2;
            ppppcVar10 = (code ****)0x1000;
            ppppppcVar9 = param_2;
            puStack_168 = puVar11;
            ppppcStack_140 = (code ****)unaff_x22;
            ppppcStack_138 = (code ****)pppppcVar14;
            ppppcStack_130 = (code ****)pppppcVar14;
            ppppcStack_128 = (code ****)pppppcVar21;
            __Znwm();
            uStack_148 = 0x100;
            pppppcVar24 = pppppcVar14;
            plStack_150 = plVar1;
            if (param_3 == (code *****)((long)param_2 * 8)) {
              if (puVar3 == puVar25) {
                ppppcStack_d0 = ppppcStack_160;
                pppppcVar24 = (code *****)0x1;
                pppcStack_158 = (code ***)ppppcVar10;
                func_0x00010b48dce8();
                ppppcStack_d8 = (code ****)(pppppcVar24 + (long)ppppppcVar9);
                UNRECOVERED_JUMPTABLE = pppppcVar14;
                ppppcStack_f0 = (code ****)pppppcVar24;
                ppppcStack_e8 = (code ****)pppppcVar24;
                ppppcStack_e0 = (code ****)pppppcVar24;
                FUN_10b48dcc0(&ppppcStack_f0,pppppcVar14,pppppcVar14);
                ppppcVar6 = ppppcStack_d8;
                pppppcVar24 = (code *****)ppppcStack_e0;
                ppppcVar5 = ppppcStack_e8;
                ppppcVar4 = ppppcStack_f0;
                ppppcStack_140 = ppppcStack_f0;
                ppppcStack_138 = ppppcStack_e8;
                ppppcStack_128 = ppppcStack_d8;
                ppppcStack_f0 = (code ****)unaff_x22;
                ppppcStack_e8 = (code ****)pppppcVar14;
                ppppcStack_e0 = (code ****)pppppcVar14;
                ppppcStack_d8 = (code ****)pppppcVar21;
                func_0x00010b48dfe8();
                unaff_x22 = (code *****)ppppcVar4;
                pppppcVar14 = (code *****)ppppcVar5;
                pppppcVar21 = (code *****)ppppcVar6;
              }
              else {
                ppppcStack_138 =
                     (code ****)
                     (pppppcVar14 + (((long)pppppcVar14 - (long)unaff_x22 >> 3) + 1) / -2);
                pppppcVar14 = (code *****)ppppcStack_138;
                pppppcVar24 = (code *****)ppppcStack_138;
              }
            }
            pppppcVar28 = pppppcVar24 + 1;
            *pppppcVar24 = ppppcVar10;
            pppcStack_158 = (code ***)0x0;
            puVar26 = (undefined8 *)puStack_168[2];
            param_3 = (code *****)ppppcStack_160;
            ppppcStack_130 = (code ****)pppppcVar28;
            while (puVar11 = puStack_168, puVar19 = *(undefined8 **)(unaff_x19 + 0x1b0),
                  puVar26 != puVar19) {
              pppppcVar24 = pppppcVar14;
              if (pppppcVar14 == unaff_x22) {
                if (pppppcVar28 < pppppcVar21) {
                  UNRECOVERED_JUMPTABLE = (code *****)((long)pppppcVar28 - (long)unaff_x22);
                  pppppcVar2 = pppppcVar28 + (((long)pppppcVar21 - (long)pppppcVar28 >> 3) + 1) / 2;
                  pppppcVar24 = (code *****)
                                ((long)pppppcVar2 - ((long)pppppcVar28 - (long)unaff_x22));
                  pppppcVar28 = pppppcVar2;
                  if (UNRECOVERED_JUMPTABLE != (code *****)0x0) {
                    _memmove(pppppcVar24,pppppcVar14,UNRECOVERED_JUMPTABLE);
                  }
                }
                else {
                  lVar18 = (long)pppppcVar21 - (long)unaff_x22 >> 2;
                  if ((long)pppppcVar21 - (long)unaff_x22 == 0) {
                    lVar18 = 1;
                  }
                  ppppcStack_d0 = (code ****)param_3;
                  func_0x00010b48dce8(lVar18);
                  func_0x00010b48df4c(lVar18 << 1);
                  UNRECOVERED_JUMPTABLE = pppppcVar28;
                  FUN_10b48dcc0(&ppppcStack_f0,unaff_x22,pppppcVar28);
                  ppppcVar5 = ppppcStack_d8;
                  ppppcVar4 = ppppcStack_e0;
                  pppppcVar24 = (code *****)ppppcStack_e8;
                  ppppcVar10 = ppppcStack_f0;
                  ppppcStack_f0 = (code ****)unaff_x22;
                  ppppcStack_e8 = (code ****)pppppcVar14;
                  ppppcStack_e0 = (code ****)pppppcVar28;
                  ppppcStack_d8 = (code ****)pppppcVar21;
                  func_0x00010b48dfe8();
                  param_3 = (code *****)ppppcStack_160;
                  unaff_x22 = (code *****)ppppcVar10;
                  pppppcVar28 = (code *****)ppppcVar4;
                  pppppcVar21 = (code *****)ppppcVar5;
                }
              }
              puVar26 = puVar26 + -1;
              pppppcVar14 = pppppcVar24 + -1;
              *pppppcVar14 = (code ****)*puVar26;
            }
            ppppcStack_140 = *(code *****)(unaff_x19 + 0x1a8);
            *(code ******)(unaff_x19 + 0x1a8) = unaff_x22;
            *(code ******)(unaff_x19 + 0x1b0) = pppppcVar14;
            ppppcStack_128 = (code ****)puStack_168[3];
            ppppcStack_130 = (code ****)puStack_168[2];
            *(code ******)(unaff_x19 + 0x1b8) = pppppcVar28;
            *(code ******)(unaff_x19 + 0x1c0) = pppppcVar21;
            ppppcStack_138 = (code ****)puVar19;
            func_0x00010b48dd1c(&pppcStack_158);
            func_0x00010b48dd48(&ppppcStack_140);
          }
        }
        else {
          *(ulong *)(unaff_x19 + 0x1c8) = uVar20 - 0x100;
          unaff_x22 = (code *****)*puVar25;
          puVar25 = puVar25 + 1;
LAB_10b48beb8:
          *(ulong **)(unaff_x19 + 0x1b0) = puVar25;
          FUN_10b48dbd4(puVar11,unaff_x22);
        }
      }
      FUN_10b48da08();
      uVar20 = unaff_x20[1];
      uVar27 = *unaff_x20;
      puVar11[1] = unaff_x20[1];
      *puVar11 = uVar27;
      if (uVar20 != 0) {
        do {
          func_0x000107c39400();
        } while (extraout_w10 != 0);
      }
      *plVar1 = *plVar1 + 1;
    }
    else {
      UNRECOVERED_JUMPTABLE = param_3;
      FUN_10b48e494();
    }
    FUN_10b48c2d0(&ppppcStack_f0);
    param_2 = (code ******)&ppppcStack_f0;
    FUN_10b48d514(auStack_c0);
    pppppcVar14 = &ppppcStack_f0;
    FUN_10b48d57c();
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((((bStack_98 & 1) == 0) && (*(long *)(unaff_x19 + 0x180) != 0)) &&
       (4999999999 < (long)pppppcVar14 - *(long *)(unaff_x19 + 0x188))) {
      *(code ******)(unaff_x19 + 0x188) = pppppcVar14;
      param_2 = (code ******)(unaff_x19 + 0x168);
      func_0x000107282d64(appppcStack_90);
    }
    func_0x00010b48ded8();
    uVar8 = bStack_98 == 1;
    if ((bool)uVar8) {
      FUN_10b48d59c(appppcStack_118,auStack_c0);
      param_2 = (code ******)appppcStack_118;
      func_0x00010b48dffc();
      func_0x000107c27938(appppcStack_118);
    }
    else if (lStack_78 != 0) {
      func_0x000104c003e8(appppcStack_90);
    }
    FUN_10b48d57c(auStack_c0);
    ppppppcVar9 = (code ******)appppcStack_90;
    func_0x000107c27938();
    func_0x00010b48dea4(uStack_70);
    unaff_x21 = param_3;
    if ((bool)uVar8) {
      return;
    }
  }
  else {
    ppppppcVar9 = *(code *******)(unaff_x19 + 0x30);
    UNRECOVERED_JUMPTABLE = (code *****)(*ppppppcVar9)[2];
    func_0x00010b48dea4(extraout_x8);
    if (bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010b48be74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010b48dd1c(&pppcStack_158);
  func_0x00010b48dd48(&ppppcStack_140);
  func_0x00010b48ded8();
  FUN_10b48d57c(auStack_c0);
  ppppppcVar12 = (code ******)appppcStack_90;
  func_0x000107c27938();
  func_0x00010b48dee0();
  pcStack_178 = FUN_10b48c2d0;
  ppppppcVar13 = ppppppcVar12;
  ppppcStack_1a0 = (code ****)unaff_x22;
  ppppcStack_198 = (code ****)unaff_x21;
  pppppcStack_190 = (code *****)ppppppcVar9;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x00010b48def0();
  uVar8 = *(char *)(param_2 + 0x3c) == '\x01';
  ppppppcVar15 = param_2;
  uStack_1a8 = extraout_x8_00;
  if ((!(bool)uVar8) &&
     ((ppppppcVar9 = param_2, param_2[0x3a] != (code *****)0x0 ||
      ((param_2[0x3b] != (code *****)0x0 && (param_2[0x3b][0xb] != (code ****)0x0)))))) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar8 = 0;
    if ((*(char *)(param_2 + 0x33) == '\x01') &&
       (uVar8 = ppppppcVar13 == (code ******)param_2[0x32],
       (long)param_2[0x32] <= (long)ppppppcVar13)) {
      if (param_2[0x30] != (code *****)0x0) {
        *(undefined1 *)(param_2 + 0x3c) = 1;
        param_2[0x31] = (code *****)ppppppcVar13;
        func_0x00010724cbe8(&pppppcStack_1d8,param_2 + 0x2d);
        ppppcStack_1b8 = (code ****)param_2[0x34];
        ppppppcVar15 = &pppppcStack_1d8;
        FUN_10b48d59c(ppppppcVar12,ppppppcVar15);
        *(undefined1 *)(ppppppcVar12 + 5) = 1;
        ppppppcVar13 = &pppppcStack_1d8;
        func_0x000107c27938();
        goto LAB_10b48c304;
      }
      *(undefined1 *)(param_2 + 0x33) = 0;
      param_2[0x34] = (code *****)((long)param_2[0x34] + 1);
      ppppppcVar15 = param_2 + 0x1b;
      func_0x00010b48dfd8(param_2,ppppppcVar15);
    }
    pppppcVar14 = param_2[3];
    if (pppppcVar14 == (code *****)0x0) {
      ppppppcVar13 = (code ******)0x0;
      if (param_2[0x3b] != (code *****)0x0) {
        FUN_10b48ed8c(&pppppcStack_1d8);
        pppppcVar14 = pppppcStack_1d0;
        for (ppppppcVar13 = (code ******)pppppcStack_1d8;
            uVar8 = ppppppcVar13 == (code ******)pppppcVar14, !(bool)uVar8;
            ppppppcVar13 = ppppppcVar13 + 2) {
          ppppppcVar15 = ppppppcVar13;
          (*(code *)(*param_2[6])[2])(param_2[6],ppppppcVar13);
        }
        ppppppcVar13 = &pppppcStack_1d8;
        FUN_10b48d78c();
      }
      while (param_2[0x3a] != (code *****)0x0) {
        pppppcVar14 = param_2[6];
        func_0x00010b48dfb8();
        (*(code *)(*pppppcVar14)[2])();
        ppppppcVar13 = param_2 + 0x35;
        func_0x00010b48ca8c();
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x3c) = 1;
      func_0x00010b4900d8(pppppcVar14,&lStack_1f8);
      if (((ulong)pppppcVar14 & 1) != 0) {
        pppppcStack_1d8 = (code *****)0x0;
        pppppcStack_1d0 = (code *****)0x0;
        pppppcVar21 = param_2[0x3b];
        if (pppppcVar21 == (code *****)0x0) {
          func_0x00010b48dfb8();
          func_0x00010b48cb00(&pppppcStack_1d8);
          func_0x00010b48ca8c(param_2 + 0x35);
        }
        else {
          __ZNSt3__16chrono12steady_clock3nowEv();
          FUN_10b48eb8c(auStack_1f0,pppppcVar21,pppppcVar14);
          func_0x00010b48cb00(&pppppcStack_1d8,auStack_1f0);
          func_0x000107c27e74(auStack_1f0);
        }
        ppppppcVar13 = (code ******)param_2[6];
        ppppppcVar15 = &pppppcStack_1d8;
        (*(code *)(*ppppppcVar13)[2])(ppppppcVar13,ppppppcVar15);
        *(undefined1 *)(param_2 + 0x3c) = 0;
        func_0x000107c39410();
        FUN_10b48c2d0();
        func_0x00010b48df78();
        goto LAB_10b48c304;
      }
      UNRECOVERED_JUMPTABLE = param_2[1];
      ppppcStack_210 = (code ****)param_2[2];
      ppppcStack_218 = (code ****)UNRECOVERED_JUMPTABLE;
      if ((code *****)ppppcStack_210 != (code *****)0x0) {
        do {
          func_0x000107c39400();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c27f88(auStack_1f0,1);
      ppppcVar10 = ppppcStack_210;
      pppppcStack_1e0[2] = (code ****)0x0;
      *pppppcStack_1e0 = (code ****)&PTR_DAT_1108789a8;
      pppppcStack_1e0[1] = (code ****)0x0;
      pppppcStack_1d8 = (code *****)FUN_10b48dd88;
      pppppcStack_1d0 = (code *****)&PTR_FUN_110cec368;
      ppppcStack_218 = (code ****)0x0;
      ppppcStack_210 = (code ****)0x0;
      pppppcStack_1e0[3] = (code ****)&PTR_DAT_110878a10;
      pppppcStack_1e0[4] = (code ****)FUN_10b48dd88;
      pppppcStack_1e0[5] = (code ****)&PTR_FUN_110cec368;
      pppppcStack_1e0[6] = (code ****)UNRECOVERED_JUMPTABLE;
      pppppcStack_1e0[7] = ppppcVar10;
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      func_0x000107c2c5d4(&uStack_1c8);
      UNRECOVERED_JUMPTABLE = pppppcStack_1e0;
      pppppcStack_1e0 = (code *****)0x0;
      ppppppcVar15 = (code ******)(UNRECOVERED_JUMPTABLE + 3);
      pppppcStack_200 = UNRECOVERED_JUMPTABLE;
      pppppcStack_208 = (code *****)ppppppcVar15;
      func_0x000107c27f8c(auStack_1f0);
      func_0x000107c2c5d4(&ppppcStack_218);
      pppppcVar14 = param_2[6];
      pppppcStack_1d0 = UNRECOVERED_JUMPTABLE;
      pppppcStack_1d8 = (code *****)ppppppcVar15;
      if ((code ******)UNRECOVERED_JUMPTABLE != (code ******)0x0) {
        do {
          func_0x000107c39400();
        } while (extraout_w10_01 != 0);
      }
      UNRECOVERED_JUMPTABLE = (code *****)(lStack_1f8 / 1000000);
      uVar8 = (long)UNRECOVERED_JUMPTABLE * 1000000 - lStack_1f8 == 0;
      if ((long)UNRECOVERED_JUMPTABLE * 1000000 < lStack_1f8) {
        UNRECOVERED_JUMPTABLE = (code *****)((long)UNRECOVERED_JUMPTABLE + 1);
      }
      ppppppcVar15 = &pppppcStack_1d8;
      (*(code *)(*pppppcVar14)[3])();
      func_0x00010b48df78();
      ppppppcVar13 = &pppppcStack_208;
      func_0x000107c27f90();
    }
  }
  *(undefined1 *)ppppppcVar12 = 0;
  *(undefined1 *)(ppppppcVar12 + 5) = 0;
  param_2 = ppppppcVar9;
LAB_10b48c304:
  func_0x00010b48dea4(uStack_1a8);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b48df78();
  func_0x00010b48dee8();
  puVar17 = auStack_2d0;
  pcStack_228 = FUN_10b48c600;
  pppppcStack_240 = (code *****)param_2;
  pppppcStack_238 = (code *****)ppppppcVar13;
  ppuStack_230 = &puStack_180;
  func_0x00010b48df20();
  func_0x00010b48def0();
  uStack_248 = extraout_x8_01;
  func_0x000104c003e8(ppppppcVar15);
  auStack_278[0] = 0;
  cStack_250 = '\0';
  func_0x00010b48dfd0();
  if (ppppppcVar13[0x34] == param_2[4]) {
    if (*(char *)(ppppppcVar13 + 0x33) == '\x01') {
      *(undefined1 *)(ppppppcVar13 + 0x33) = 0;
    }
    ppppppcVar13[0x34] = (code *****)((long)ppppppcVar13[0x34] + 1);
    func_0x00010b48dfd8(ppppppcVar13,ppppppcVar13 + 0x1b);
  }
  *(undefined1 *)(ppppppcVar13 + 0x3c) = 0;
  FUN_10b48c2d0(auStack_2a8,ppppppcVar13);
  puVar16 = auStack_2a8;
  FUN_10b48d514(auStack_278,puVar16);
  FUN_10b48d57c(auStack_2a8);
  func_0x00010b48ded8();
  uVar8 = cStack_250 == '\x01';
  if ((bool)uVar8) {
    FUN_10b48d59c(auStack_2d0,auStack_278);
    func_0x00010b48dffc();
    func_0x000107c27938(auStack_2d0);
    puVar16 = puVar17;
  }
  FUN_10b48d57c();
  func_0x00010b48dea4(uStack_248);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27938(auStack_2d0);
  FUN_10b48d57c(auStack_278);
  func_0x00010b48dee0();
  func_0x00010b48df14();
  pppppcVar14 = ppppppcVar13[0x3b];
  if ((pppppcVar14 != (code *****)0x0) && (*(int *)((long)pppppcVar14 + 4) != 0)) {
    FUN_10b48e1e4(pppppcVar14,puVar16,UNRECOVERED_JUMPTABLE);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(ppppppcVar13 + 0x3d);
  return;
}



/* Entry: 10b48c2d0; end: 10b48c5ff;  */

void FUN_10b48c2d0(code ******param_1,code ******param_2,long param_3)

{
  code ****ppppcVar1;
  undefined1 uVar2;
  code ******ppppppcVar3;
  code *****pppppcVar4;
  code ******ppppppcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  code ******unaff_x20;
  code *****pppppcVar8;
  undefined1 auStack_160 [40];
  undefined1 auStack_138 [48];
  undefined1 auStack_108 [40];
  char cStack_e0;
  undefined8 uStack_d8;
  code *****pppppcStack_d0;
  code *****pppppcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  code ****ppppcStack_a8;
  code ****ppppcStack_a0;
  code *****pppppcStack_98;
  code *****pppppcStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  code *****pppppcStack_70;
  code *****pppppcStack_68;
  code *****pppppcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  code ****ppppcStack_48;
  undefined8 uStack_38;
  
  ppppppcVar3 = param_1;
  func_0x00010b48def0();
  uVar2 = *(char *)(param_2 + 0x3c) == '\x01';
  ppppppcVar5 = param_2;
  uStack_38 = extraout_x8;
  if ((!(bool)uVar2) &&
     ((unaff_x20 = param_2, param_2[0x3a] != (code *****)0x0 ||
      ((param_2[0x3b] != (code *****)0x0 && (param_2[0x3b][0xb] != (code ****)0x0)))))) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    uVar2 = 0;
    if ((*(char *)(param_2 + 0x33) == '\x01') &&
       (uVar2 = ppppppcVar3 == (code ******)param_2[0x32], (long)param_2[0x32] <= (long)ppppppcVar3)
       ) {
      if (param_2[0x30] != (code *****)0x0) {
        *(undefined1 *)(param_2 + 0x3c) = 1;
        param_2[0x31] = (code *****)ppppppcVar3;
        func_0x00010724cbe8(&pppppcStack_68,param_2 + 0x2d);
        ppppcStack_48 = (code ****)param_2[0x34];
        ppppppcVar5 = &pppppcStack_68;
        FUN_10b48d59c(param_1,ppppppcVar5);
        *(undefined1 *)(param_1 + 5) = 1;
        ppppppcVar3 = &pppppcStack_68;
        func_0x000107c27938();
        goto LAB_10b48c304;
      }
      *(undefined1 *)(param_2 + 0x33) = 0;
      param_2[0x34] = (code *****)((long)param_2[0x34] + 1);
      ppppppcVar5 = param_2 + 0x1b;
      func_0x00010b48dfd8(param_2,ppppppcVar5);
    }
    pppppcVar4 = param_2[3];
    if (pppppcVar4 == (code *****)0x0) {
      ppppppcVar3 = (code ******)0x0;
      if (param_2[0x3b] != (code *****)0x0) {
        FUN_10b48ed8c(&pppppcStack_68);
        pppppcVar4 = pppppcStack_60;
        for (ppppppcVar3 = (code ******)pppppcStack_68;
            uVar2 = ppppppcVar3 == (code ******)pppppcVar4, !(bool)uVar2;
            ppppppcVar3 = ppppppcVar3 + 2) {
          ppppppcVar5 = ppppppcVar3;
          (*(code *)(*param_2[6])[2])(param_2[6],ppppppcVar3);
        }
        ppppppcVar3 = &pppppcStack_68;
        FUN_10b48d78c();
      }
      while (param_2[0x3a] != (code *****)0x0) {
        pppppcVar4 = param_2[6];
        func_0x00010b48dfb8();
        (*(code *)(*pppppcVar4)[2])();
        ppppppcVar3 = param_2 + 0x35;
        func_0x00010b48ca8c();
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x3c) = 1;
      func_0x00010b4900d8(pppppcVar4,&lStack_88);
      if (((ulong)pppppcVar4 & 1) != 0) {
        pppppcStack_68 = (code *****)0x0;
        pppppcStack_60 = (code *****)0x0;
        pppppcVar8 = param_2[0x3b];
        if (pppppcVar8 == (code *****)0x0) {
          func_0x00010b48dfb8();
          func_0x00010b48cb00(&pppppcStack_68);
          func_0x00010b48ca8c(param_2 + 0x35);
        }
        else {
          __ZNSt3__16chrono12steady_clock3nowEv();
          FUN_10b48eb8c(auStack_80,pppppcVar8,pppppcVar4);
          func_0x00010b48cb00(&pppppcStack_68,auStack_80);
          func_0x000107c27e74(auStack_80);
        }
        ppppppcVar3 = (code ******)param_2[6];
        ppppppcVar5 = &pppppcStack_68;
        (*(code *)(*ppppppcVar3)[2])(ppppppcVar3,ppppppcVar5);
        *(undefined1 *)(param_2 + 0x3c) = 0;
        func_0x000107c39410();
        FUN_10b48c2d0();
        func_0x00010b48df78();
        goto LAB_10b48c304;
      }
      pppppcVar4 = param_2[1];
      ppppcStack_a0 = (code ****)param_2[2];
      ppppcStack_a8 = (code ****)pppppcVar4;
      if ((code *****)ppppcStack_a0 != (code *****)0x0) {
        do {
          func_0x000107c39400();
        } while (extraout_w10 != 0);
      }
      func_0x000107c27f88(auStack_80,1);
      ppppcVar1 = ppppcStack_a0;
      pppppcStack_70[2] = (code ****)0x0;
      *pppppcStack_70 = (code ****)&PTR_DAT_1108789a8;
      pppppcStack_70[1] = (code ****)0x0;
      pppppcStack_68 = (code *****)FUN_10b48dd88;
      pppppcStack_60 = (code *****)&PTR_FUN_110cec368;
      ppppcStack_a8 = (code ****)0x0;
      ppppcStack_a0 = (code ****)0x0;
      pppppcStack_70[3] = (code ****)&PTR_DAT_110878a10;
      pppppcStack_70[4] = (code ****)FUN_10b48dd88;
      pppppcStack_70[5] = (code ****)&PTR_FUN_110cec368;
      pppppcStack_70[6] = (code ****)pppppcVar4;
      pppppcStack_70[7] = ppppcVar1;
      uStack_58 = 0;
      uStack_50 = 0;
      func_0x000107c2c5d4(&uStack_58);
      pppppcVar4 = pppppcStack_70;
      pppppcStack_70 = (code *****)0x0;
      ppppppcVar5 = (code ******)(pppppcVar4 + 3);
      pppppcStack_90 = pppppcVar4;
      pppppcStack_98 = (code *****)ppppppcVar5;
      func_0x000107c27f8c(auStack_80);
      func_0x000107c2c5d4(&ppppcStack_a8);
      pppppcVar8 = param_2[6];
      pppppcStack_60 = pppppcVar4;
      pppppcStack_68 = (code *****)ppppppcVar5;
      if ((code ******)pppppcVar4 != (code ******)0x0) {
        do {
          func_0x000107c39400();
        } while (extraout_w10_00 != 0);
      }
      param_3 = lStack_88 / 1000000;
      uVar2 = param_3 * 1000000 - lStack_88 == 0;
      if (param_3 * 1000000 < lStack_88) {
        param_3 = param_3 + 1;
      }
      ppppppcVar5 = &pppppcStack_68;
      (*(code *)(*pppppcVar8)[3])();
      func_0x00010b48df78();
      ppppppcVar3 = &pppppcStack_98;
      func_0x000107c27f90();
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_2 = unaff_x20;
LAB_10b48c304:
  func_0x00010b48dea4(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b48df78();
  func_0x00010b48dee8();
  puVar7 = auStack_160;
  pcStack_b8 = FUN_10b48c600;
  pppppcStack_d0 = (code *****)param_2;
  pppppcStack_c8 = (code *****)ppppppcVar3;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010b48df20();
  func_0x00010b48def0();
  uStack_d8 = extraout_x8_00;
  func_0x000104c003e8(ppppppcVar5);
  auStack_108[0] = 0;
  cStack_e0 = '\0';
  func_0x00010b48dfd0();
  if (ppppppcVar3[0x34] == param_2[4]) {
    if (*(char *)(ppppppcVar3 + 0x33) == '\x01') {
      *(undefined1 *)(ppppppcVar3 + 0x33) = 0;
    }
    ppppppcVar3[0x34] = (code *****)((long)ppppppcVar3[0x34] + 1);
    func_0x00010b48dfd8(ppppppcVar3,ppppppcVar3 + 0x1b);
  }
  *(undefined1 *)(ppppppcVar3 + 0x3c) = 0;
  FUN_10b48c2d0(auStack_138,ppppppcVar3);
  puVar6 = auStack_138;
  FUN_10b48d514(auStack_108,puVar6);
  FUN_10b48d57c(auStack_138);
  func_0x00010b48ded8();
  uVar2 = cStack_e0 == '\x01';
  if ((bool)uVar2) {
    FUN_10b48d59c(auStack_160,auStack_108);
    func_0x00010b48dffc();
    func_0x000107c27938(auStack_160);
    puVar6 = puVar7;
  }
  FUN_10b48d57c();
  func_0x00010b48dea4(uStack_d8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27938(auStack_160);
  FUN_10b48d57c(auStack_108);
  func_0x00010b48dee0();
  func_0x00010b48df14();
  pppppcVar4 = ppppppcVar3[0x3b];
  if ((pppppcVar4 != (code *****)0x0) && (*(int *)((long)pppppcVar4 + 4) != 0)) {
    FUN_10b48e1e4(pppppcVar4,puVar6,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(ppppppcVar3 + 0x3d);
  return;
}



/* Entry: 10b48c600; end: 10b48c707;  */

void FUN_10b48c600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [40];
  char cStack_30;
  undefined8 uStack_28;
  
  puVar4 = auStack_b0;
  func_0x00010b48df20();
  func_0x00010b48def0();
  uStack_28 = extraout_x8;
  func_0x000104c003e8(param_2);
  auStack_58[0] = 0;
  cStack_30 = '\0';
  func_0x00010b48dfd0();
  if (*(long *)(unaff_x19 + 0x1a0) == *(long *)(unaff_x20 + 0x20)) {
    if (*(char *)(unaff_x19 + 0x198) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0x198) = 0;
    }
    *(long *)(unaff_x19 + 0x1a0) = *(long *)(unaff_x19 + 0x1a0) + 1;
    func_0x00010b48dfd8();
  }
  *(undefined1 *)(unaff_x19 + 0x1e0) = 0;
  FUN_10b48c2d0(auStack_88);
  puVar3 = auStack_88;
  FUN_10b48d514(auStack_58,puVar3);
  FUN_10b48d57c(auStack_88);
  func_0x00010b48ded8();
  uVar1 = cStack_30 == '\x01';
  if ((bool)uVar1) {
    FUN_10b48d59c(auStack_b0,auStack_58);
    func_0x00010b48dffc();
    func_0x000107c27938(auStack_b0);
    puVar3 = puVar4;
  }
  FUN_10b48d57c();
  func_0x00010b48dea4(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27938(auStack_b0);
  FUN_10b48d57c(auStack_58);
  func_0x00010b48dee0();
  func_0x00010b48df14();
  lVar2 = *(long *)(unaff_x19 + 0x1d8);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) {
    FUN_10b48e1e4(lVar2,puVar3,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x1e8);
  return;
}



/* Entry: 10b48c708; end: 10b48c75b;  */

void FUN_10b48c708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b48df14();
  lVar1 = *(long *)(unaff_x19 + 0x1d8);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) {
    FUN_10b48e1e4(lVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x1e8);
  return;
}



/* Entry: 10b48c75c; end: 10b48c7b7;  */

void FUN_10b48c75c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  
  func_0x00010b48df14();
  FUN_10b48d5c0(unaff_x19 + 0xd8,param_2);
  if (*(char *)(unaff_x19 + 0x198) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x198) = 0;
  }
  *(long *)(unaff_x19 + 0x1a0) = *(long *)(unaff_x19 + 0x1a0) + 1;
  func_0x000107c39410();
  FUN_10b48c7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x1e8);
  return;
}



/* Entry: 10b48c7b8; end: 10b48c8ff;  */

void FUN_10b48c7b8(long param_1,long param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  undefined4 *unaff_x20;
  int iVar4;
  undefined8 auStack_b8 [17];
  
  func_0x00010b48df20();
  cVar1 = *(char *)(param_1 + 0xd0);
  if (cVar1 == *(char *)(param_2 + 0x88) && cVar1 != '\0') {
    uVar3 = unaff_x19 + 0x48;
    FUN_10b48c9f4();
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  else if (cVar1 == *(char *)(param_2 + 0x88)) {
    return;
  }
  iVar4 = 0;
  if (param_3 != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      if ((*(char *)(unaff_x19 + 0xd0) == '\x01') && ((*(byte *)(unaff_x20 + 0x22) & 1) != 0)) {
        FUN_10b47a2b4(auStack_b8,unaff_x19 + 0x48);
        auStack_b8[0] = CONCAT44(auStack_b8[0]._4_4_,*unaff_x20);
        iVar4 = (int)auStack_b8;
        FUN_10b48c9f4();
        func_0x000107c2fed8(auStack_b8);
      }
    }
  }
  FUN_10b48d5c0(unaff_x19 + 0x48);
  if ((((*(char *)(unaff_x19 + 0xd0) == '\x01') && (*(int *)(unaff_x19 + 0x48) != 0)) &&
      (*(int *)(unaff_x19 + 0x4c) != 0)) && (*(int *)(unaff_x19 + 0x28) != 0)) {
    if (iVar4 == 0) {
      FUN_10b48bd6c(auStack_b8);
      uVar2 = auStack_b8[0];
      auStack_b8[0] = 0;
      FUN_10b48d8c0(unaff_x19 + 0x18,uVar2);
      func_0x00010b48d8a0(auStack_b8);
    }
    else {
      func_0x00010b490034(*(undefined8 *)(unaff_x19 + 0x18));
    }
    if ((*(byte *)(unaff_x19 + 0x24) & 1) == 0) {
      *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x19 + 0xcc);
    }
  }
  else {
    FUN_10b48d8c0(unaff_x19 + 0x18,0);
  }
  return;
}



/* Entry: 10b48c900; end: 10b48c93b;  */

void FUN_10b48c900(undefined8 param_1,long param_2)

{
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x1e8);
  FUN_10b48d628(param_1,param_2 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_2 + 0x1e8);
  return;
}



/* Entry: 10b48c93c; end: 10b48c9f3;  */

undefined8 FUN_10b48c93c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  func_0x00010b48df14();
  if (*(char *)(unaff_x19 + 0x160) == '\x01') {
    uVar1 = unaff_x19 + 0xd8;
    FUN_10b48c9f4(uVar1,param_2);
    if ((uVar1 & 1) != 0) {
      lVar2 = unaff_x19;
      func_0x00010b48dfd8();
      *(long *)(unaff_x19 + 0x1a0) = *(long *)(unaff_x19 + 0x1a0) + 1;
      if (param_4 < 1) {
        if (*(char *)(unaff_x19 + 0x198) == '\x01') {
          *(undefined1 *)(unaff_x19 + 0x198) = 0;
        }
      }
      else {
        __ZNSt3__16chrono12steady_clock3nowEv();
        if ((*(byte *)(unaff_x19 + 0x198) & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x198) = 1;
        }
        *(long *)(unaff_x19 + 400) = lVar2 + param_4 * 1000000;
      }
      uVar3 = 1;
      goto LAB_10b48c9dc;
    }
  }
  uVar3 = 0;
LAB_10b48c9dc:
  func_0x00010b48ded8();
  return uVar3;
}



/* Entry: 10b48c9f4; end: 10b48cb3b;  */

ulong FUN_10b48c9f4(int *param_1,int *param_2)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  func_0x000107c3940c();
  if (param_1[1] == param_2[1]) {
    uVar1 = unaff_x20 + 8;
    FUN_10b48d674(uVar1,unaff_x19 + 8);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    uVar1 = unaff_x20 + 0x30;
    func_0x00010b48d6d0(uVar1,unaff_x19 + 0x30);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    uVar1 = unaff_x20 + 0x58;
    func_0x00010b48d72c(uVar1,unaff_x19 + 0x58);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
    if (*(char *)(unaff_x20 + 0x80) == *(char *)(unaff_x19 + 0x80)) {
      return (ulong)(*(int *)(unaff_x20 + 0x84) == *(int *)(unaff_x19 + 0x84));
    }
  }
  return 0;
}



/* Entry: 10b48cb3c; end: 10b48cb3f;  */

undefined8 * FUN_10b48cb3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cec308;
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x3d);
  FUN_10b48da34(param_1 + 0x3b);
  FUN_10b48d8e8(param_1 + 0x35);
  func_0x000107c27938(param_1 + 0x2d);
  FUN_10b47a278(param_1 + 0x1b);
  FUN_10b47a278(param_1 + 9);
  func_0x000107c27e70(param_1 + 6);
  func_0x00010b48d8a0(param_1 + 3);
  func_0x000107c2c5d4(param_1 + 1);
  return param_1;
}



/* Entry: 10b48cb40; end: 10b48cb53;  */

void FUN_10b48cb40(void)

{
  func_0x00010b48d82c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b48cb54; end: 10b48cbd7;  */

void FUN_10b48cb54(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3940c();
  *param_1 = *param_2;
  func_0x00010b48cb9c(param_1 + 1,param_2 + 1);
  func_0x00010b2d34e8(unaff_x20 + 0x30,unaff_x19 + 0x30);
  func_0x00010729c30c(unaff_x20 + 0x58,unaff_x19 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
  return;
}



/* Entry: 10b48cbd8; end: 10b48ccdf;  */

void FUN_10b48cbd8(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)*param_1;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    plVar4 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    for (; (plVar4 != (long *)0x0 && (param_2 != (long *)param_3)); param_2 = (long *)*param_2) {
      *(undefined4 *)(plVar4 + 2) = *(undefined4 *)(param_2 + 2);
      lVar3 = *plVar4;
      FUN_10b48cce0(param_1,plVar4);
      plVar4 = (long *)lVar3;
    }
    func_0x00010b48dff0();
  }
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    iVar1 = *(int *)(param_2 + 2);
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    *(int *)(puVar2 + 2) = iVar1;
    *puVar2 = 0;
    puVar2[1] = (long)iVar1;
    FUN_10b48cce0(param_1,puVar2);
    func_0x000107c39404();
  }
  return;
}



/* Entry: 10b48cce0; end: 10b48d047;  */

void FUN_10b48cce0(ulong param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong extraout_x8;
  long lVar6;
  ulong extraout_x9;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  
  func_0x00010b48df20();
  uVar16 = (ulong)*(int *)(param_2 + 0x10);
  puVar15 = (ulong *)(param_1 + 8);
  uVar17 = *puVar15;
  *(ulong *)(param_2 + 8) = uVar16;
  if ((uVar17 == 0) ||
     (func_0x000107c3942c((float)(*(long *)(param_1 + 0x18) + 1),*(undefined4 *)(param_1 + 0x20),
                          (float)uVar17), (bool)in_NG)) {
    bVar3 = 2 < uVar17;
    bVar4 = uVar17 == 3;
    func_0x000107c393f4(uVar17 << 1);
    uVar14 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar14 = extraout_x9;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar17 = *puVar15;
      param_1 = uVar14;
    }
    if (uVar17 < uVar14) {
LAB_10b48cd7c:
      func_0x000107c2c780(puVar15,uVar14);
      func_0x000107c2c77c();
      unaff_x19[1] = uVar14;
      lVar6 = *unaff_x19;
      for (uVar17 = 0; uVar14 != uVar17; uVar17 = uVar17 + 1) {
        *(undefined8 *)(lVar6 + uVar17 * 8) = 0;
      }
      plVar8 = (long *)unaff_x19[2];
      uVar17 = uVar14;
      if (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        uVar7 = uVar14 - 1;
        if ((uVar14 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar14 <= uVar10) {
          uVar11 = 0;
          if (uVar14 != 0) {
            uVar11 = uVar10 / uVar14;
          }
          uVar10 = uVar10 - uVar11 * uVar14;
        }
        *(long **)(lVar6 + uVar10 * 8) = unaff_x19 + 2;
        while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
          uVar11 = plVar8[1];
          if ((uVar14 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar14 <= uVar11) {
            uVar1 = 0;
            if (uVar14 != 0) {
              uVar1 = uVar11 / uVar14;
            }
            uVar11 = uVar11 - uVar1 * uVar14;
          }
          if (uVar11 != uVar10) {
            plVar13 = plVar8;
            if (*(long *)(lVar6 + uVar11 * 8) == 0) {
              *(long **)(lVar6 + uVar11 * 8) = plVar9;
              uVar10 = uVar11;
            }
            else {
              do {
                plVar12 = plVar13;
                plVar13 = (long *)*plVar12;
                if (plVar13 == (long *)0x0) break;
              } while (*(int *)(plVar8 + 2) == *(int *)(plVar13 + 2));
              *plVar9 = (long)plVar13;
              *plVar12 = **(long **)(lVar6 + uVar11 * 8);
              **(long **)(lVar6 + uVar11 * 8) = (long)plVar8;
              plVar8 = plVar9;
            }
          }
        }
      }
    }
    else if (uVar14 < uVar17) {
      func_0x00010b48dfa0();
      if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010b48df2c();
      }
      if (uVar14 <= param_1) {
        uVar14 = param_1;
      }
      if (uVar14 < uVar17) {
        if (uVar14 != 0) goto LAB_10b48cd7c;
        func_0x000107c2c77c();
        unaff_x19[1] = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = *puVar15;
      }
    }
  }
  uVar14 = uVar17 - 1;
  if ((uVar17 & uVar14) == 0) {
    uVar10 = uVar14 & uVar16;
  }
  else {
    uVar10 = uVar16;
    if (uVar17 <= uVar16) {
      uVar10 = 0;
      if (uVar17 != 0) {
        uVar10 = uVar16 / uVar17;
      }
      uVar10 = uVar16 - uVar10 * uVar17;
    }
  }
  lVar6 = *unaff_x19;
  plVar8 = *(long **)(lVar6 + uVar10 * 8);
  if (plVar8 == (long *)0x0) {
    plVar9 = (long *)0x0;
  }
  else {
    bVar4 = false;
    bVar2 = 0;
    do {
      plVar9 = plVar8;
      plVar8 = (long *)*plVar9;
      if (plVar8 == (long *)0x0) break;
      uVar7 = plVar8[1];
      if ((uVar17 & uVar14) == 0) {
        uVar11 = uVar7 & uVar14;
      }
      else {
        uVar11 = uVar7;
        if (uVar17 <= uVar7) {
          uVar11 = 0;
          if (uVar17 != 0) {
            uVar11 = uVar7 / uVar17;
          }
          uVar11 = uVar7 - uVar11 * uVar17;
        }
      }
      if (uVar11 != uVar10) break;
      if (uVar7 == uVar16) {
        bVar3 = (int)plVar8[2] == (int)unaff_x20[2];
      }
      else {
        bVar3 = false;
      }
      bVar5 = bVar3 != bVar4;
      bVar3 = (bool)(bVar2 & bVar5);
      bVar4 = (bool)(bVar4 | bVar5);
      bVar2 = bVar2 | bVar5;
    } while (!bVar3);
  }
  uVar16 = unaff_x20[1];
  if ((uVar17 & uVar14) == 0) {
    uVar16 = uVar14 & uVar16;
    if (plVar9 == (long *)0x0) goto LAB_10b48cfb0;
LAB_10b48cf74:
    *unaff_x20 = *plVar9;
    *plVar9 = (long)unaff_x20;
    if (*unaff_x20 == 0) goto LAB_10b48d004;
    uVar10 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar17 & uVar14) == 0) {
      uVar10 = uVar10 & uVar14;
    }
    else if (uVar17 <= uVar10) {
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar10 / uVar17;
      }
      uVar10 = uVar10 - uVar14 * uVar17;
    }
    if (uVar10 == uVar16) goto LAB_10b48d004;
  }
  else {
    if (uVar17 <= uVar16) {
      uVar10 = 0;
      if (uVar17 != 0) {
        uVar10 = uVar16 / uVar17;
      }
      uVar16 = uVar16 - uVar10 * uVar17;
    }
    if (plVar9 != (long *)0x0) goto LAB_10b48cf74;
LAB_10b48cfb0:
    plVar8 = unaff_x19 + 2;
    *unaff_x20 = *plVar8;
    *plVar8 = (long)unaff_x20;
    *(long **)(lVar6 + uVar16 * 8) = plVar8;
    if (*unaff_x20 == 0) goto LAB_10b48d004;
    uVar10 = *(ulong *)(*unaff_x20 + 8);
    if ((uVar17 & uVar14) == 0) {
      uVar10 = uVar10 & uVar14;
    }
    else if (uVar17 <= uVar10) {
      uVar16 = 0;
      if (uVar17 != 0) {
        uVar16 = uVar10 / uVar17;
      }
      uVar10 = uVar10 - uVar16 * uVar17;
    }
  }
  *(long **)(lVar6 + uVar10 * 8) = unaff_x20;
LAB_10b48d004:
  func_0x000107c39408();
  return;
}



/* Entry: 10b48d048; end: 10b48d06f;  */

undefined8 * FUN_10b48d048(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  FUN_10b48d070(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10b48d070; end: 10b48d0c3;  */

void FUN_10b48d070(undefined8 *param_1,long param_2)

{
  func_0x00010b48df20();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  func_0x00010b48d104();
  func_0x00010b48d0c4();
  return;
}



/* Entry: 10b48d0c4; end: 10b48d19f;  */

void FUN_10b48d0c4(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    func_0x00010b48d2d0(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10b48d1a0; end: 10b48d29b;  */

void FUN_10b48d1a0(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10b48d29c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10b48d2b4(plVar3);
    FUN_10b48d29c(param_1,plVar3);
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



/* Entry: 10b48d29c; end: 10b48d2b3;  */

void FUN_10b48d29c(long *param_1,long param_2)

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



/* Entry: 10b48d2b4; end: 10b48d303;  */

void FUN_10b48d2b4(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b48d2e8();
  return;
}



/* Entry: 10b48d304; end: 10b48d4db;  */

undefined1  [16] FUN_10b48d304(long *param_1,int *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long lVar7;
  long extraout_x8_03;
  ulong uVar8;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  long *plVar9;
  ulong extraout_x9_01;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x24;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  iVar2 = *param_2;
  uVar12 = (ulong)iVar2;
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    func_0x000107c39428();
    if ((bool)in_ZR) {
      unaff_x24 = extraout_x8 & uVar12;
    }
    else {
      in_NG = (long)(uVar11 - uVar12) < 0;
      unaff_x24 = uVar12;
      if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        unaff_x24 = uVar12 - uVar6 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x24 * 8);
    uVar6 = extraout_x8;
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10b48d3b0;
          uVar8 = plVar10[1];
          if (uVar8 != uVar12) break;
          in_NG = (int)plVar10[2] - iVar2 < 0;
          if ((int)plVar10[2] == iVar2) {
            uVar5 = 0;
            goto LAB_10b48d4ac;
          }
        }
        if ((uVar11 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar11 <= uVar8) {
          func_0x00010b48e004();
          uVar6 = extraout_x8_00;
          uVar8 = extraout_x9;
        }
        in_NG = (long)(uVar8 - unaff_x24) < 0;
      } while (uVar8 == unaff_x24);
    }
  }
LAB_10b48d3b0:
  plVar1 = param_1 + 2;
  plVar10 = (long *)0x30;
  __Znwm();
  uStack_58 = 1;
  *plVar10 = 0;
  plVar10[1] = uVar12;
  lVar7 = *param_3;
  lVar14 = param_3[3];
  lVar13 = param_3[2];
  plVar10[3] = param_3[1];
  plVar10[2] = lVar7;
  plVar10[5] = lVar14;
  plVar10[4] = lVar13;
  plStack_68 = plVar10;
  plStack_60 = plVar1;
  func_0x000107c39420();
  if ((uVar11 == 0) || (func_0x000107c3942c(), (bool)in_NG)) {
    func_0x000107c39414();
    bVar3 = 2 < uVar11;
    uVar4 = uVar11 == 3;
    func_0x000107c393f4();
    uVar5 = extraout_x8_01;
    if (!bVar3 || (bool)uVar4) {
      uVar5 = extraout_x9_00;
    }
    func_0x00010b48d104(param_1,uVar5);
    uVar11 = param_1[1];
    func_0x000107c39428();
    if ((bool)uVar4) {
      unaff_x24 = extraout_x8_02 & uVar12;
    }
    else {
      unaff_x24 = uVar12;
      if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        unaff_x24 = uVar12 - uVar6 * uVar11;
      }
    }
  }
  plVar10 = plStack_68;
  lVar7 = *param_1;
  plVar9 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar12 = *(ulong *)(*plStack_68 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        func_0x00010b48e004();
        lVar7 = extraout_x8_03;
        uVar12 = extraout_x9_01;
      }
      *(long **)(lVar7 + uVar12 * 8) = plVar10;
    }
  }
  else {
    *plStack_68 = *plVar9;
    *plVar9 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  func_0x000107c39408();
  FUN_10b48d4dc(&plStack_68);
  uVar5 = 1;
LAB_10b48d4ac:
  auVar15._8_8_ = uVar5;
  auVar15._0_8_ = plVar10;
  return auVar15;
}



/* Entry: 10b48d4dc; end: 10b48d4fb;  */

void FUN_10b48d4dc(void)

{
  func_0x00010b48e010();
  FUN_10b48d4fc();
  return;
}



/* Entry: 10b48d4fc; end: 10b48d513;  */

void FUN_10b48d4fc(long *param_1,long param_2)

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



/* Entry: 10b48d514; end: 10b48d57b;  */

void FUN_10b48d514(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b48df20();
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == *(char *)(param_2 + 0x28)) {
    if (cVar1 != '\0') {
      func_0x000107c39410();
      func_0x000107c283c8();
      *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10b48d59c();
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  else {
    func_0x000107c27938();
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  }
  return;
}



/* Entry: 10b48d57c; end: 10b48d59b;  */

void FUN_10b48d57c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x000107c27938();
  }
  return;
}



/* Entry: 10b48d59c; end: 10b48d5bf;  */

void FUN_10b48d59c(long param_1,long param_2)

{
  func_0x000105302f48();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return;
}



/* Entry: 10b48d5c0; end: 10b48d5e7;  */

void FUN_10b48d5c0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x11);
  if (cVar1 != *(char *)(param_2 + 0x11)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x11) == '\x01') {
        func_0x000107c2fed8();
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
      return;
    }
    FUN_10b47a2b4();
    *(undefined1 *)(param_1 + 0x11) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c3940c();
    *param_1 = *param_2;
    func_0x00010b48cb9c(param_1 + 1,param_2 + 1);
    func_0x00010b2d34e8(unaff_x20 + 0x30,unaff_x19 + 0x30);
    func_0x00010729c30c(unaff_x20 + 0x58,unaff_x19 + 0x58);
    *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
    return;
  }
  return;
}



/* Entry: 10b48d5e8; end: 10b48d627;  */

void FUN_10b48d5e8(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    func_0x000107c2fed8();
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}



/* Entry: 10b48d628; end: 10b48d65f;  */

undefined1 * FUN_10b48d628(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x88] = 0;
  FUN_10b48d660();
  return param_1;
}



/* Entry: 10b48d660; end: 10b48d673;  */

void FUN_10b48d660(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_10b47a2b4();
    *(undefined1 *)(param_1 + 0x88) = 1;
    return;
  }
  return;
}



/* Entry: 10b48d674; end: 10b48d78b;  */

undefined8 FUN_10b48d674(long param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 unaff_x20;
  
  func_0x00010b48df90();
  if ((bool)in_ZR) {
    do {
      func_0x00010b48df80();
      if (param_1 == -0x10) {
        return unaff_x20;
      }
      lVar1 = param_2;
      func_0x000107c2c998(param_2,param_1 + 0x20);
      if (lVar1 == 0) {
        return unaff_x20;
      }
    } while (*(int *)(param_1 + 0x20) == *(int *)(lVar1 + 0x10));
  }
  else {
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 10b48d78c; end: 10b48d7ef;  */

undefined8 FUN_10b48d78c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b48d7b8(&uStack_28);
  return param_1;
}



/* Entry: 10b48d7f0; end: 10b48d7f7;  */

void FUN_10b48d7f0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3940c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107c27e74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b48d7f8; end: 10b48d8bf;  */

void FUN_10b48d7f8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c3940c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107c27e74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b48d8c0; end: 10b48d8e7;  */

void FUN_10b48d8c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    __ZNSt3__15mutexD1Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b48d8e8; end: 10b48da07;  */

long * FUN_10b48d8e8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)(param_1[1] + ((ulong)param_1[4] >> 8) * 8);
  if (param_1[2] == param_1[1]) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)(*plVar7 + (param_1[4] & 0xffU) * 0x10);
  }
  plVar1 = param_1;
  FUN_10b48da08();
  do {
    plVar8 = plVar4 + -0x200;
    do {
      if (plVar4 == plVar1) {
        param_1[5] = 0;
        puVar5 = (undefined8 *)param_1[1];
        while( true ) {
          puVar6 = (undefined8 *)param_1[2];
          uVar2 = (long)puVar6 - (long)puVar5 >> 3;
          if (uVar2 < 3) break;
          __ZdlPv(*puVar5);
          puVar5 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar5;
        }
        if (uVar2 == 1) {
          lVar3 = 0x80;
        }
        else {
          if (uVar2 != 2) goto LAB_10b48d9c4;
          lVar3 = 0x100;
        }
        param_1[4] = lVar3;
LAB_10b48d9c4:
        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
          __ZdlPv(*puVar5);
        }
        lVar3 = param_1[2];
        while (lVar3 != param_1[1]) {
          lVar3 = lVar3 + -8;
          param_1[2] = lVar3;
        }
        if (*param_1 != 0) {
          __ZdlPv();
        }
        return param_1;
      }
      func_0x000107c27e74(plVar4);
      plVar4 = plVar4 + 2;
      plVar8 = plVar8 + 2;
    } while ((long *)*plVar7 != plVar8);
    plVar7 = plVar7 + 1;
    plVar4 = (long *)*plVar7;
  } while( true );
}



/* Entry: 10b48da08; end: 10b48da33;  */

long FUN_10b48da08(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0x10;
  }
  return 0;
}



/* Entry: 10b48da34; end: 10b48db13;  */

void FUN_10b48da34(void)

{
  func_0x00010b48e010();
  func_0x00010b48da54();
  return;
}



/* Entry: 10b48db14; end: 10b48db2b;  */

void FUN_10b48db14(long *param_1)

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



/* Entry: 10b48db2c; end: 10b48db57;  */

undefined8 FUN_10b48db2c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b48db58(&uStack_28);
  return param_1;
}



/* Entry: 10b48db58; end: 10b48db6f;  */

void FUN_10b48db58(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b48db70; end: 10b48dbd3;  */

long FUN_10b48db70(long param_1)

{
  func_0x00010b48db94(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10b48dbd4; end: 10b48dcbf;  */

void FUN_10b48dbd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  
  func_0x00010b48df20();
  puStack_50 = (ulong *)(param_1 + 0x18);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == (undefined8 *)*puStack_50) {
    uVar7 = *unaff_x19;
    uVar4 = unaff_x19[1];
    if (uVar4 < uVar7 || uVar4 - uVar7 == 0) {
      uVar6 = (long)((long)puVar5 - uVar7) >> 2;
      if ((long)puVar5 - uVar7 == 0) {
        uVar6 = 1;
      }
      uVar7 = uVar6;
      FUN_10b48dce8();
      uStack_68 = uVar7 + (uVar6 >> 2) * 8;
      uStack_58 = uVar7 + uVar4 * 8;
      uStack_70 = uVar7;
      uStack_60 = uStack_68;
      FUN_10b48dcc0(&uStack_70,unaff_x19[1],unaff_x19[2]);
      uVar4 = unaff_x19[1];
      uVar7 = *unaff_x19;
      uVar8 = unaff_x19[3];
      uVar6 = unaff_x19[2];
      unaff_x19[1] = uStack_68;
      *unaff_x19 = uStack_70;
      unaff_x19[3] = uStack_58;
      unaff_x19[2] = uStack_60;
      uStack_70 = uVar7;
      uStack_68 = uVar4;
      uStack_60 = uVar6;
      uStack_58 = uVar8;
      func_0x00010b48dd48(&uStack_70);
      puVar5 = (undefined8 *)unaff_x19[2];
    }
    else {
      lVar2 = (((long)(uVar4 - uVar7) >> 3) + 1) / -2;
      lVar1 = uVar4 + lVar2 * 8;
      lVar3 = (long)puVar5 - uVar4;
      if (lVar3 != 0) {
        _memmove(lVar1,uVar4,lVar3);
        uVar4 = unaff_x19[1];
      }
      puVar5 = (undefined8 *)(lVar1 + lVar3);
      unaff_x19[1] = uVar4 + lVar2 * 8;
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b48dcc0; end: 10b48dce7;  */

void FUN_10b48dcc0(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b48dce8; end: 10b48dd87;  */

undefined1  [16] FUN_10b48dce8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b48dd88; end: 10b48de7f;  */

long * FUN_10b48dd88(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long alStack_98 [2];
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [40];
  char cStack_30;
  undefined8 uStack_28;
  
  func_0x00010b48def0();
  uStack_28 = extraout_x8;
  func_0x000107c2fec8(alStack_98,param_1 + 0x10);
  if (alStack_98[0] != 0) {
    auStack_58[0] = 0;
    cStack_30 = '\0';
    func_0x00010b48dfd0();
    *(undefined1 *)(alStack_98[0] + 0x1e0) = 0;
    FUN_10b48c2d0(auStack_88);
    FUN_10b48d514(auStack_58,auStack_88);
    FUN_10b48d57c(auStack_88);
    func_0x00010b48ded8();
    in_ZR = cStack_30 == '\x01';
    if ((bool)in_ZR) {
      FUN_10b48d59c(auStack_88,auStack_58);
      func_0x00010b48dffc();
      func_0x000107c27938(auStack_88);
    }
    FUN_10b48d57c(auStack_58);
  }
  plVar1 = alStack_98;
  func_0x000107c2c5ac();
  func_0x00010b48dea4(uStack_28);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x000107c27938(auStack_88);
  FUN_10b48d57c(auStack_58);
  plVar2 = alStack_98;
  func_0x000107c2c5ac();
  func_0x00010b48dee8();
  plVar2 = plVar2 + 1;
  func_0x000100610140();
  if (plVar2 != (long *)0x0) {
    func_0x000107c60d68();
  }
  return plVar1;
}



/* Entry: 10b48de80; end: 10b48e097;  */

void FUN_10b48de80(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100610140();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10b48e098; end: 10b48e0e7;  */

long FUN_10b48e098(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10b48d048();
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 **)(lVar1 + 0x48) = (undefined8 *)(lVar1 + 0x50);
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined4 *)(lVar1 + 0xa0) = 0x3f800000;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0xb0) = lVar1;
  return param_1;
}



/* Entry: 10b48e0e8; end: 10b48e1e3;  */

void FUN_10b48e0e8(long param_1,long param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined1 uStack_7f;
  byte abStack_78 [4];
  undefined4 uStack_74;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = param_1 + 0x80;
  lStack_58 = param_2;
  FUN_10b48f270(lVar1,&lStack_58);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x60) != 0)) {
    abStack_78[0] = param_3 ^ 1;
    uStack_74 = *(undefined4 *)(lVar1 + 0x6c);
    uStack_70 = *(undefined8 *)(lVar1 + 0x70);
    lStack_68 = lStack_58;
    uStack_60 = 0;
    lVar1 = param_1 + 0x48;
    FUN_10b48f30c(lVar1,abStack_78);
    while ((lVar1 != param_1 + 0x50 && (*(long *)(lVar1 + 0x30) == lStack_58))) {
      lVar2 = lVar1;
      func_0x000107c27be0();
      FUN_10b48f360(param_1 + 0x48,lVar1);
      uStack_7f = 1;
      *(byte *)(lVar1 + 0x20) = param_3;
      lStack_88 = lVar1;
      FUN_10b48f400(auStack_a8,param_1 + 0x48,&lStack_88);
      func_0x00010b48f3a4(auStack_98);
      func_0x00010b48f3a4(&lStack_88);
      lVar1 = lVar2;
    }
  }
  return;
}



/* Entry: 10b48e1e4; end: 10b48e493;  */

void FUN_10b48e1e4(int *param_1,long param_2,int param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  ushort uVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  int *piStack_c0;
  undefined2 uStack_b8;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined1 auStack_88 [4];
  int iStack_84;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if (param_2 != 0) {
    piVar7 = param_1 + 0x20;
    lStack_68 = param_2;
    FUN_10b48f270(piVar7,&lStack_68);
    if ((piVar7 != (int *)0x0) && (*(long *)(piVar7 + 0x18) != 0)) {
      auStack_88[0] = (undefined1)piVar7[0xc];
      iVar4 = param_3;
      if (*param_1 != 1) {
        iVar4 = 0;
      }
      iStack_84 = piVar7[0x1b];
      uStack_80 = *(undefined8 *)(piVar7 + 0x1c);
      lStack_78 = lStack_68;
      uStack_70 = 0;
      plStack_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
      plStack_90 = (long *)0x0;
      piVar8 = param_1 + 0x12;
      FUN_10b48f30c(piVar8,auStack_88);
      plVar18 = (long *)0x0;
      plVar15 = (long *)0x0;
      while ((plVar12 = plVar15, piVar8 != param_1 + 0x14 && (*(long *)(piVar8 + 0xc) == lStack_68))
            ) {
        piVar9 = piVar8;
        func_0x000107c27be0();
        FUN_10b48f360(param_1 + 0x12,piVar8);
        uVar5 = uStack_b8;
        uStack_b8 = CONCAT11(1,(undefined1)uStack_b8);
        if (plVar18 < plStack_90) {
          *plVar18 = (long)piVar8;
          *(ushort *)(plVar18 + 1) = uStack_b8;
          piStack_c0 = (int *)0x0;
          uStack_b8 = uVar5 & 0xff;
          plVar18 = plVar18 + 2;
          plVar16 = plVar15;
        }
        else {
          lVar14 = (long)plVar18 - (long)plVar15 >> 4;
          uVar1 = lVar14 + 1;
          piStack_c0 = piVar8;
          if (uVar1 >> 0x3c != 0) {
            plStack_a0 = plVar15;
            FUN_10b48eed8();
LAB_10b48e46c:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10b48e470);
            (*pcVar6)();
          }
          uVar13 = (long)plStack_90 - (long)plVar15 >> 3;
          if (uVar13 <= uVar1) {
            uVar13 = uVar1;
          }
          if (0x7fffffffffffffef < (ulong)((long)plStack_90 - (long)plVar15)) {
            uVar13 = 0xfffffffffffffff;
          }
          if (uVar13 >> 0x3c != 0) {
            plStack_a0 = plVar15;
            func_0x000104bd35f4();
            goto LAB_10b48e46c;
          }
          lVar10 = uVar13 << 4;
          __Znwm();
          puVar2 = (undefined8 *)(lVar10 + ((long)plVar18 - (long)plVar15));
          *puVar2 = piVar8;
          *(ushort *)(puVar2 + 1) = uStack_b8;
          piStack_c0 = (int *)0x0;
          if ((uStack_b8 >> 8 & 1) != 0) {
            uStack_b8 = uStack_b8 & 0xff;
          }
          plVar3 = (long *)(lVar10 + uVar13 * 0x10);
          plVar16 = puVar2 + lVar14 * -2;
          plVar11 = plVar16;
          for (; plVar17 = plVar15, plVar12 != plVar18; plVar12 = plVar12 + 2) {
            *plVar11 = *plVar12;
            *(short *)(plVar11 + 1) = (short)plVar12[1];
            *plVar12 = 0;
            if (*(char *)((long)plVar12 + 9) == '\x01') {
              *(undefined1 *)((long)plVar12 + 9) = 0;
            }
            plVar11 = plVar11 + 2;
          }
          for (; plVar17 != plVar18; plVar17 = plVar17 + 2) {
            func_0x00010b48f3a4(plVar17);
          }
          plVar18 = puVar2 + 2;
          plStack_90 = plVar3;
          if (plVar15 != (long *)0x0) {
            plStack_98 = plVar18;
            __ZdlPv(plVar15);
          }
        }
        plStack_98 = plVar18;
        func_0x00010b48f3a4(&piStack_c0);
        plVar15 = plVar16;
        piVar8 = piVar9;
      }
      for (; plStack_a0 = plVar12, plVar15 != plVar18; plVar15 = plVar15 + 2) {
        lVar14 = *plVar15;
        *(int *)(lVar14 + 0x68) = param_3;
        *(int *)(lVar14 + 0x24) = iVar4;
        FUN_10b48f400(&piStack_c0,param_1 + 0x12,plVar15);
        func_0x00010b48f3a4(auStack_b0);
        plVar12 = plStack_a0;
      }
      piVar7[0x1b] = iVar4;
      FUN_10b48eee4(&plStack_a0);
    }
  }
  return;
}



/* Entry: 10b48e494; end: 10b48e6df;  */

void FUN_10b48e494(int *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  uint *puVar6;
  long lVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  int *piVar8;
  int *piVar9;
  long lVar10;
  long lStack_b0;
  long lStack_a8;
  int *piStack_a0;
  long lStack_98;
  long lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  long lStack_48;
  
  *(long *)(param_1 + 0x2a) = *(long *)(param_1 + 0x2a) + 1;
  lVar10 = *param_3;
  piVar5 = param_1;
  lStack_48 = lVar10;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_64 = 0;
  uStack_60 = 0;
  iStack_6c = 0;
  uStack_68 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  piStack_50 = piVar5;
  if (lVar10 == 0) {
    iStack_6c = (int)param_3[2];
    if (*param_1 != 1) {
      iStack_6c = 0;
    }
    uStack_70 = uStack_70 & 0xffffff00;
    func_0x00010b48ff64();
  }
  else {
    piVar5 = param_1;
    FUN_10b48e6e0(param_1,(int)param_3[4]);
    func_0x00010b48ff2c(*(undefined8 *)(piVar5 + 2));
    lStack_b0 = (long)((double)extraout_x8 * 0.6931471805599453 * 1000000.0);
    piVar5 = param_1 + 0x20;
    FUN_10b48e724(piVar5,&lStack_48);
    iStack_6c = (int)param_3[2];
    if (*param_1 != 1) {
      iStack_6c = 0;
    }
    uStack_70 = CONCAT31(uStack_70._1_3_,(char)piVar5[0xc]);
    func_0x00010b48ff64();
    lVar10 = *(long *)(piVar5 + 0x18);
    *(long *)(piVar5 + 0x18) = lVar10 + 1;
    if (lVar10 == 0) {
      *(ulong *)(piVar5 + 0x1c) = CONCAT44(uStack_64,uStack_68);
      *(ulong *)(piVar5 + 0x1a) = CONCAT44(iStack_6c,uStack_70);
      *(ulong *)(piVar5 + 0x20) = CONCAT44(uStack_54,uStack_58);
      *(ulong *)(piVar5 + 0x1e) = CONCAT44(uStack_5c,uStack_60);
    }
    else {
      iStack_6c = piVar5[0x1b];
      uStack_68 = (undefined4)*(undefined8 *)(piVar5 + 0x1c);
      uStack_64 = (undefined4)((ulong)*(undefined8 *)(piVar5 + 0x1c) >> 0x20);
    }
    if (((extraout_x8_00 & 1) == 0) && ((*(byte *)((long)piVar5 + 0x31) & 1) == 0)) {
      func_0x00010b48e760(param_1,lStack_48,piVar5 + 6,
                          *(long *)(piVar5 + 0x16) +
                          (*(ulong *)(piVar5 + 10) &
                          ((long)*(ulong *)(piVar5 + 10) >> 0x3f ^ 0xffffffffffffffffU)) * 1000000);
    }
  }
  lVar10 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  piStack_a0 = piStack_50;
  lStack_90 = param_3[1];
  lStack_98 = *param_3;
  uStack_80 = (undefined4)param_3[3];
  uStack_7c = (undefined4)((ulong)param_3[3] >> 0x20);
  uStack_88 = (undefined4)param_3[2];
  uStack_84 = (undefined4)((ulong)param_3[2] >> 0x20);
  uStack_78 = (undefined4)param_3[4];
  piVar8 = param_1 + 0x14;
  piVar5 = *(int **)piVar8;
  piVar9 = piVar8;
  lStack_b0 = lVar10;
  lStack_a8 = lVar2;
  if (*(int **)piVar8 != (int *)0x0) {
    do {
      while( true ) {
        piVar8 = piVar5;
        puVar6 = &uStack_70;
        func_0x00010b48e01c(puVar6,piVar8 + 8);
        if ((int)puVar6 == 0) break;
        piVar5 = *(int **)piVar8;
        piVar9 = piVar8;
        if (*(int **)piVar8 == (int *)0x0) goto LAB_10b48e670;
      }
      piVar5 = piVar8 + 8;
      func_0x00010b48e01c(piVar5,&uStack_70);
      if ((int)piVar5 == 0) goto LAB_10b48e6b0;
      piVar5 = *(int **)(piVar8 + 2);
    } while (*(int **)(piVar8 + 2) != (int *)0x0);
    piVar9 = piVar8 + 2;
  }
LAB_10b48e670:
  lVar7 = 0x80;
  __Znwm();
  *(ulong *)(lVar7 + 0x28) = CONCAT44(uStack_64,uStack_68);
  *(ulong *)(lVar7 + 0x20) = CONCAT44(iStack_6c,uStack_70);
  *(ulong *)(lVar7 + 0x38) = CONCAT44(uStack_54,uStack_58);
  *(ulong *)(lVar7 + 0x30) = CONCAT44(uStack_5c,uStack_60);
  *(long *)(lVar7 + 0x40) = lVar10;
  *(long *)(lVar7 + 0x48) = lVar2;
  lStack_b0 = 0;
  lStack_a8 = 0;
  *(long *)(lVar7 + 0x58) = lStack_98;
  *(int **)(lVar7 + 0x50) = piStack_a0;
  *(ulong *)(lVar7 + 0x68) = CONCAT44(uStack_84,uStack_88);
  *(long *)(lVar7 + 0x60) = lStack_90;
  *(ulong *)(lVar7 + 0x74) = CONCAT44(uStack_78,uStack_7c);
  *(ulong *)(lVar7 + 0x6c) = CONCAT44(uStack_80,uStack_84);
  FUN_10b48f4f8(param_1 + 0x12,piVar8,piVar9,lVar7);
LAB_10b48e6b0:
  func_0x000107c27e74(&lStack_b0);
  return;
}



/* Entry: 10b48e6e0; end: 10b48e723;  */

long FUN_10b48e6e0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = param_1 + 0x20;
  uStack_24 = param_2;
  FUN_10b48ef34(lVar1,&uStack_24);
  if (lVar1 != 0) {
    param_1 = lVar1 + 0x10;
  }
  return param_1 + 8;
}



/* Entry: 10b48e724; end: 10b48e7eb;  */

void FUN_10b48e724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  uStack_20 = param_5;
  uStack_18 = param_2;
  FUN_10b48f544(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_30);
  return;
}



/* Entry: 10b48e7ec; end: 10b48e8db;  */

void FUN_10b48e7ec(long param_1,long param_2)

{
  long lVar1;
  double unaff_x19;
  double *unaff_x20;
  double dVar2;
  
  func_0x00010b48ff08();
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0 && lVar1 < param_2) {
    dVar2 = unaff_x20[1];
    if ((long)unaff_x19 - lVar1 <= (long)unaff_x20[1]) {
      dVar2 = (double)((long)unaff_x19 - lVar1);
    }
    dVar2 = -(*unaff_x20 * (double)(long)dVar2);
    _exp();
    unaff_x20[2] = unaff_x20[2] * dVar2;
  }
  unaff_x20[3] = unaff_x19;
  return;
}



/* Entry: 10b48e8dc; end: 10b48ea1b;  */

void FUN_10b48e8dc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x00010b48ff08();
  while ((plVar1 = *(long **)(unaff_x20 + 0x60), plVar1 != *(long **)(unaff_x20 + 0x68) &&
         (*plVar1 <= unaff_x19))) {
    lStack_68 = plVar1[1];
    lStack_70 = *plVar1;
    FUN_10b48ea1c(unaff_x20 + 0x60);
    lVar2 = unaff_x20 + 0x80;
    FUN_10b48f270(lVar2,&lStack_68);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x31) = 0;
      if (*(long *)(lVar2 + 0x60) == 0) {
        *(undefined1 *)(lVar2 + 0x30) = 0;
      }
      else {
        uVar5 = *(ulong *)(lVar2 + 0x18);
        lVar3 = lVar2;
        func_0x00010b48e844();
        if ((int)lVar3 == 0) {
          func_0x00010b48ff2c(*(undefined8 *)(lVar2 + 0x20));
          if (0 < (long)uVar5) {
            uStack_88 = *(undefined8 *)(lVar2 + 0x40);
            uStack_90 = *(undefined8 *)(lVar2 + 0x38);
            uStack_78 = *(undefined8 *)(lVar2 + 0x50);
            uStack_80 = *(undefined8 *)(lVar2 + 0x48);
            func_0x00010b48e7ec(&uStack_90);
            puVar4 = &uStack_90;
            FUN_10b48ea4c((double)(uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU)) * 1000.0);
            lVar2 = (long)puVar4 / 1000000;
            if (lVar2 * 1000000 < (long)puVar4) {
              lVar2 = lVar2 + 1;
            }
            func_0x00010b48ff2c(lVar2);
          }
          func_0x00010b48e760();
        }
        else {
          *(undefined1 *)(lVar2 + 0x30) = 1;
          FUN_10b48e0e8();
        }
      }
    }
  }
  return;
}



/* Entry: 10b48ea1c; end: 10b48ea4b;  */

void FUN_10b48ea1c(undefined8 *param_1)

{
  FUN_10b48fbb0(*param_1,param_1[1]);
  param_1[1] = param_1[1] + -0x10;
  return;
}


