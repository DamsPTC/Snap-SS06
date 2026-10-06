/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5c9d08; end: 10b5c9d57;  */

void FUN_10b5c9d08(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d19d38;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5c9d58; end: 10b5c9dab;  */

void FUN_10b5c9d58(void)

{
  return;
}



/* Entry: 10b5c9dac; end: 10b5c9dd3;  */

long FUN_10b5c9dac(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5c9dd4; end: 10b5c9e1f;  */

undefined8 * FUN_10b5c9dd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d19de0;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  func_0x00010b5c9d60(param_1,param_3);
  return param_1;
}



/* Entry: 10b5c9e20; end: 10b5c9e23;  */

long FUN_10b5c9e20(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5c9e24; end: 10b5c9e37;  */

void FUN_10b5c9e24(void)

{
  FUN_10b5c9dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c9e38; end: 10b5c9e5b;  */

undefined ** FUN_10b5c9e38(void)

{
  return &PTR_DAT_110d19e20;
}



/* Entry: 10b5c9e5c; end: 10b5c9f3b;  */

long * FUN_10b5c9e5c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar6 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar1 = plVar6;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar6);
  }
  plVar6 = plVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar6 = param_3;
    func_0x00010599ccb0(param_3,*(long *)(param_1 + 0x18),plVar1);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,plVar6);
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar2 = 0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x000107c280b8(plVar6,uVar2);
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
    if (*param_3 - (long)plVar6 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)plVar6) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar6 + (long)iVar8;
        plVar6 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar6 + (long)iVar7);
    }
    _memcpy(plVar6,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar6 + (long)(int)uVar4);
  }
  return plVar6;
}



/* Entry: 10b5c9f3c; end: 10b5c9fef;  */

ulong FUN_10b5c9f3c(long param_1)

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
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x24) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b5c9ff0; end: 10b5ca037;  */

void FUN_10b5c9ff0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d19de0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5ca038; end: 10b5ca03f;  */

void FUN_10b5ca038(void)

{
  return;
}



/* Entry: 10b5ca040; end: 10b5ca0b7;  */

undefined8 * FUN_10b5ca040(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d19e88;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5ca34c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b5ca0b8; end: 10b5ca0e7;  */

long FUN_10b5ca0b8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5ca0e8(param_1);
  return param_1;
}



/* Entry: 10b5ca0e8; end: 10b5ca103;  */

void FUN_10b5ca0e8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d8640();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ca104; end: 10b5ca107;  */

long FUN_10b5ca104(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5ca0e8(param_1);
  return param_1;
}



/* Entry: 10b5ca108; end: 10b5ca11b;  */

void FUN_10b5ca108(void)

{
  FUN_10b5ca0b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ca11c; end: 10b5ca127;  */

undefined ** FUN_10b5ca11c(void)

{
  return &PTR_DAT_110d19ec8;
}



/* Entry: 10b5ca128; end: 10b5ca23b;  */

void FUN_10b5ca128(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5d86dc(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b5ca23c; end: 10b5ca267;  */

long FUN_10b5ca23c(long param_1)

{
  FUN_10b5d88a0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5ca268; end: 10b5ca26b;  */

void FUN_10b5ca268(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00010b5ca34c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b5d8594(*(long *)(param_1 + 0x18));
    }
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



/* Entry: 10b5ca26c; end: 10b5ca2ff;  */

void FUN_10b5ca26c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      func_0x00010b5ca34c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b5d8594(*(long *)(param_1 + 0x18));
    }
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



/* Entry: 10b5ca300; end: 10b5ca307;  */

void FUN_10b5ca300(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d19e88;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5ca308; end: 10b5ca38f;  */

void FUN_10b5ca308(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d19e88;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5ca390; end: 10b5ca397;  */

void FUN_10b5ca390(void)

{
  return;
}



/* Entry: 10b5ca398; end: 10b5ca473;  */

undefined8 * FUN_10b5ca398(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d19f30;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c282d4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010598fd00(param_1 + 5,param_2,param_3 + 0x28);
  lVar1 = param_3 + 0x40;
  func_0x00010b5cae8c();
  param_1[8] = lVar1;
  lVar1 = param_3 + 0x48;
  func_0x00010b5cae8c();
  param_1[9] = lVar1;
  lVar1 = param_3 + 0x50;
  func_0x00010b5cae8c();
  param_1[10] = lVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar3 = *(undefined8 *)(param_3 + 0x60);
  uVar2 = *(undefined8 *)(param_3 + 0x58);
  uVar5 = *(undefined8 *)(param_3 + 0x70);
  uVar4 = *(undefined8 *)(param_3 + 0x68);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x78);
  param_1[0xe] = uVar5;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xb] = uVar2;
  return param_1;
}



/* Entry: 10b5ca474; end: 10b5ca4a7;  */

long FUN_10b5ca474(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5ca4a8(param_1);
  return param_1;
}



/* Entry: 10b5ca4a8; end: 10b5ca4df;  */

undefined8 FUN_10b5ca4a8(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c282b4(param_1 + 0x28);
  func_0x00010006804c(param_1 + 0x10);
  if (in_NG == in_OV) {
    func_0x0001002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10b5ca4e0; end: 10b5ca4e3;  */

long FUN_10b5ca4e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5ca4a8(param_1);
  return param_1;
}



/* Entry: 10b5ca4e4; end: 10b5ca4f7;  */

void FUN_10b5ca4e4(void)

{
  FUN_10b5ca474();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ca4f8; end: 10b5ca503;  */

undefined ** FUN_10b5ca4f8(void)

{
  return &PTR_DAT_110d19f70;
}



/* Entry: 10b5ca504; end: 10b5ca567;  */

void FUN_10b5ca504(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x000107c282c0(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
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



/* Entry: 10b5ca568; end: 10b5ca9cb;  */

byte * FUN_10b5ca568(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  ulong *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  int iVar14;
  
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar11 + 0x17);
  pbVar4 = param_1;
  if (lVar5 < 0) {
    lVar5 = puVar11[1];
    if (lVar5 != 0) {
      puVar11 = (undefined8 *)*puVar11;
      goto LAB_10b5ca5b8;
    }
  }
  else if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_10b5ca5b8:
    func_0x00010b5cae94(puVar11,lVar5,param_3,&UNK_10f77ef9c);
    param_2 = param_3;
    func_0x00010b5cae60(param_3,1);
    pbVar4 = param_2;
  }
  pbVar3 = pbVar4;
  if (param_1[0x60] == 1) {
    func_0x00010b5cae48();
    pbVar3 = (byte *)0x10;
    func_0x000107c280a8(0x10,pbVar4);
    func_0x00010b5cae80();
    param_2 = pbVar3;
  }
  pbVar4 = pbVar3;
  if (*(int *)(param_1 + 0x58) != 0) {
    func_0x00010b5cae48();
    pbVar4 = (byte *)0x18;
    func_0x000107c280a8(0x18,pbVar3);
    func_0x00010b5cae54();
    param_2 = pbVar4;
  }
  pbVar3 = pbVar4;
  if (*(int *)(param_1 + 0x5c) != 0) {
    func_0x00010b5cae48();
    pbVar3 = (byte *)0x20;
    func_0x000107c280a8(0x20,pbVar4);
    func_0x00010b5cae54();
    param_2 = pbVar3;
  }
  uVar10 = *(uint *)(param_1 + 0x20);
  if (uVar10 != 0) {
    func_0x00010b5cae48();
    pbVar4 = pbVar3 + 2;
    *pbVar3 = 0x2a;
    for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
      pbVar4[-1] = (byte)uVar10 | 0x80;
      pbVar4 = pbVar4 + 1;
    }
    pbVar4[-1] = (byte)uVar10;
    piVar12 = *(int **)(param_1 + 0x18);
    piVar1 = piVar12 + *(int *)(param_1 + 0x10);
    do {
      func_0x00010b5cae48();
      uVar7 = (ulong)*piVar12;
      pbVar4 = pbVar3;
      while( true ) {
        param_2 = pbVar4 + 1;
        if (uVar7 < 0x80) break;
        *pbVar4 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        pbVar4 = param_2;
      }
      piVar12 = piVar12 + 1;
      *pbVar4 = (byte)uVar7;
    } while (piVar12 < piVar1);
  }
  lVar5 = 8;
  for (uVar7 = (ulong)(*(uint *)(param_1 + 0x30) &
                      ((int)*(uint *)(param_1 + 0x30) >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
      uVar7 = uVar7 - 1) {
    uVar8 = *(ulong *)(param_1 + 0x28);
    puVar2 = (ulong *)(param_1 + 0x28);
    if ((uVar8 & 1) != 0) {
      puVar2 = (ulong *)(uVar8 + lVar5 + -1);
    }
    puVar13 = (undefined8 *)*puVar2;
    lVar6 = (long)*(char *)((long)puVar13 + 0x17);
    puVar11 = puVar13;
    if (lVar6 < 0) {
      lVar6 = puVar13[1];
      puVar11 = (undefined8 *)*puVar13;
    }
    func_0x000107c303d4(puVar11,lVar6,1,&UNK_10f77efb9);
    lVar6 = (long)*(char *)((long)puVar13 + 0x17);
    if (((lVar6 < 0) && (lVar6 = puVar13[1], 0x7f < lVar6)) ||
       ((*(long *)param_3 - (long)param_2) + 0xe < lVar6)) {
      pbVar3 = param_3;
      func_0x00010b4d5120(param_3,6,puVar13,param_2);
      param_2 = pbVar3;
    }
    else {
      *param_2 = 0x32;
      param_2[1] = (byte)lVar6;
      if (*(char *)((long)puVar13 + 0x17) < '\0') {
        puVar13 = (undefined8 *)*puVar13;
      }
      param_2 = param_2 + 2;
      pbVar3 = param_2;
      _memcpy(param_2,puVar13,lVar6);
      param_2 = param_2 + lVar6;
    }
    lVar5 = lVar5 + 8;
  }
  pbVar4 = pbVar3;
  if ((param_1[0x61] & 1) != 0) {
    func_0x00010b5cae48();
    pbVar4 = (byte *)0x38;
    func_0x000107c280a8(0x38,pbVar3);
    func_0x00010b5cae80();
    param_2 = pbVar4;
  }
  pbVar3 = pbVar4;
  if (*(int *)(param_1 + 100) != 0) {
    func_0x00010b5cae48();
    pbVar3 = (byte *)0x40;
    func_0x000107c280a8(0x40,pbVar4);
    func_0x00010b5cae54();
    param_2 = pbVar3;
  }
  pbVar4 = pbVar3;
  if (*(int *)(param_1 + 0x68) != 0) {
    func_0x00010b5cae48();
    pbVar4 = (byte *)0x48;
    func_0x000107c280a8(0x48,pbVar3);
    func_0x00010b5cae54();
    param_2 = pbVar4;
  }
  pbVar3 = pbVar4;
  if (param_1[0x62] == 1) {
    func_0x00010b5cae48();
    pbVar3 = (byte *)0x50;
    func_0x000107c280a8(0x50,pbVar4);
    func_0x00010b5cae80();
    param_2 = pbVar3;
  }
  pbVar4 = pbVar3;
  if (*(int *)(param_1 + 0x6c) != 0) {
    func_0x00010b5cae48();
    pbVar4 = (byte *)0x58;
    func_0x000107c280a8(0x58,pbVar3);
    func_0x00010b5cae54();
    param_2 = pbVar4;
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] != 0) {
      puVar11 = (undefined8 *)*puVar11;
      goto LAB_10b5ca878;
    }
  }
  else if (*(char *)((long)puVar11 + 0x17) != '\0') {
LAB_10b5ca878:
    func_0x00010b5cae94(puVar11);
    pbVar4 = param_3;
    func_0x00010b5cae60(param_3,0xc);
    param_2 = pbVar4;
  }
  pbVar3 = pbVar4;
  if (*(int *)(param_1 + 0x70) != 0) {
    func_0x00010b5cae48();
    pbVar3 = (byte *)0x68;
    func_0x000107c280a8(0x68,pbVar4);
    func_0x00010b5cae54();
    param_2 = pbVar3;
  }
  puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar11 + 0x17) < '\0') {
    if (puVar11[1] == 0) goto LAB_10b5ca8fc;
    puVar11 = (undefined8 *)*puVar11;
  }
  else if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_10b5ca8fc;
  func_0x00010b5cae94(puVar11);
  pbVar3 = param_3;
  func_0x00010b5cae60(param_3,0xe);
  param_2 = pbVar3;
LAB_10b5ca8fc:
  pbVar4 = pbVar3;
  if (*(int *)(param_1 + 0x74) != 0) {
    func_0x00010b5cae48();
    pbVar4 = (byte *)0x78;
    func_0x000107c280a8(0x78,pbVar3);
    func_0x00010b5cae54();
    param_2 = pbVar4;
  }
  pbVar3 = pbVar4;
  if (*(int *)(param_1 + 0x78) != 0) {
    func_0x00010b5cae48();
    pbVar3 = (byte *)0x80;
    func_0x000107c280a8(0x80,pbVar4);
    func_0x00010b5cae54();
    param_2 = pbVar3;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    func_0x00010b5cae48();
    param_2 = (byte *)0x88;
    func_0x000107c280a8(0x88,pbVar3);
    func_0x00010b5cae54();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
  if ((long)uVar7 < 0) {
    lVar5 = *(long *)(uVar8 + 8);
    uVar7 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    lVar5 = uVar8 + 8;
  }
  if ((long)(int)uVar7 <= *(long *)param_3 - (long)param_2) {
    _memcpy(param_2,lVar5,uVar7 & 0xffffffff);
    return param_2 + (int)uVar7;
  }
  while( true ) {
    iVar14 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
    iVar9 = (int)uVar7;
    uVar7 = (ulong)(uint)(iVar9 - iVar14);
    if (iVar9 - iVar14 == 0 || iVar9 < iVar14) break;
    func_0x00010b4d5738();
    pbVar4 = param_2 + iVar14;
    param_2 = param_3;
    func_0x000107c303e4(param_3,pbVar4);
  }
  func_0x00010b4d5738();
  return param_2 + iVar9;
}



/* Entry: 10b5ca9cc; end: 10b5cac1f;  */

void FUN_10b5ca9cc(long param_1)

{
  ulong *puVar1;
  int iVar2;
  int extraout_w8;
  ulong uVar3;
  int extraout_w9;
  long lVar4;
  int extraout_w10;
  long lVar5;
  int extraout_w11;
  ulong uVar6;
  
  lVar4 = 0;
  iVar2 = 0;
  for (lVar5 = (long)*(int *)(param_1 + 0x10); lVar5 != 0; lVar5 = lVar5 + -1) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar4 >> 0x1e))) * -9 + 0x280U
            >> 6) + iVar2;
    lVar4 = lVar4 + 0x100000000;
  }
  *(int *)(param_1 + 0x20) = iVar2;
  lVar4 = 8;
  for (uVar6 = (ulong)(*(uint *)(param_1 + 0x30) &
                      ((int)*(uint *)(param_1 + 0x30) >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
      uVar6 = uVar6 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    puVar1 = (ulong *)(param_1 + 0x28);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar4 + -1);
    }
    func_0x000107c282a0(*puVar1);
    lVar4 = lVar4 + 8;
  }
  uVar6 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar6 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
  }
  uVar6 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar6 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
  }
  uVar6 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar6 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b5cae6c(0x280);
  func_0x00010b5cae6c();
  func_0x00010b5cae6c();
  iVar2 = extraout_w9;
  if (extraout_w11 != 0) {
    iVar2 = extraout_w10 + 2;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar2 = iVar2 + ((uint)(extraout_w8 + (int)LZCOUNT((long)*(int *)(param_1 + 0x7c)) * -9) >> 6) +
            2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar6 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x80) = iVar2;
  return;
}



/* Entry: 10b5cac20; end: 10b5cac23;  */

void FUN_10b5cac20(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if (*(char *)(param_2 + 0x61) == '\x01') {
    *(undefined1 *)(param_1 + 0x61) = 1;
  }
  if (*(char *)(param_2 + 0x62) == '\x01') {
    *(undefined1 *)(param_1 + 0x62) = 1;
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_2 + 0x6c);
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
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



/* Entry: 10b5cac24; end: 10b5cada7;  */

void FUN_10b5cac24(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(ulong *)(param_2 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x40,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x48,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x50,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if (*(char *)(param_2 + 0x61) == '\x01') {
    *(undefined1 *)(param_1 + 0x61) = 1;
  }
  if (*(char *)(param_2 + 0x62) == '\x01') {
    *(undefined1 *)(param_1 + 0x62) = 1;
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_2 + 0x6c);
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
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



/* Entry: 10b5cada8; end: 10b5cadaf;  */

void FUN_10b5cada8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x88;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x88);
  }
  *puVar1 = &PTR_FUN_110d19f30;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = param_2;
  puVar1[8] = &DAT_11383d918;
  puVar1[9] = &DAT_11383d918;
  puVar1[10] = &DAT_11383d918;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  return;
}



/* Entry: 10b5cadb0; end: 10b5cae47;  */

undefined8 FUN_10b5cadb0(long param_1)

{
  char in_NG;
  char in_OV;
  undefined8 unaff_x19;
  
  func_0x000107c282b4(param_1 + 0x18);
  func_0x00010006804c(param_1);
  if (in_NG == in_OV) {
    func_0x0001002a998c(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 10b5cae48; end: 10b5caea7;  */

ulong * FUN_10b5cae48(void)

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



/* Entry: 10b5caea8; end: 10b5caf5b;  */

undefined * FUN_10b5caea8(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam000000011383e398 & 1) == 0) {
    iVar2 = 0x1383e398;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      func_0x00010b5cb3b0();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam000000011383e390 = uVar1;
      param_1 = 0x1383e398;
      ___cxa_guard_release();
    }
  }
  func_0x00010b5cb3b0();
  FUN_10b4c59b8();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x11383e3a0);
  }
  return puVar3;
}



/* Entry: 10b5caf5c; end: 10b5caf8b;  */

long FUN_10b5caf5c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5caf8c(param_1);
  return param_1;
}



/* Entry: 10b5caf8c; end: 10b5caf9f;  */

void FUN_10b5caf8c(long param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      func_0x000107c30258(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  return;
}



/* Entry: 10b5cafa0; end: 10b5cafb3;  */

void FUN_10b5cafa0(void)

{
  FUN_10b5caf5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cafb4; end: 10b5cb01f;  */

void FUN_10b5cafb4(long param_1)

{
  if (*(int *)(param_1 + 0x1c) == 2) {
    func_0x000107c30258(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b5cb020; end: 10b5cb187;  */

long * FUN_10b5cb020(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar5 = param_2;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    lVar2 = param_1;
    func_0x00010b5cb3a4();
    if (*(int *)(param_1 + 0x1c) == 1) {
      plVar5 = (long *)(ulong)*(byte *)(param_1 + 0x10);
    }
    else {
      plVar5 = (long *)0x0;
    }
    uVar7 = 8;
    func_0x000107c280a8(8,lVar2);
    func_0x000107c280a8(plVar5,uVar7);
    break;
  case 2:
    puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
    lVar2 = (long)*(char *)((long)puVar8 + 0x17);
    puVar1 = puVar8;
    if (lVar2 < 0) {
      lVar2 = puVar8[1];
      puVar1 = (undefined8 *)*puVar8;
    }
    func_0x000107c303d4(puVar1,lVar2,1,&UNK_10f77f02f);
    plVar5 = param_3;
    func_0x000107c280a0(param_3,2,puVar8,param_2);
    break;
  case 3:
    plVar5 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x10),param_2);
    break;
  case 4:
    plVar5 = param_3;
    func_0x000107c282e8(param_3,*(undefined8 *)(param_1 + 0x10),param_2);
    break;
  case 5:
    lVar2 = param_1;
    func_0x00010b5cb3a4();
    if (*(int *)(param_1 + 0x1c) == 5) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      uVar7 = 0;
    }
    puVar1 = (undefined8 *)0x29;
    func_0x000107c280a8(0x29,lVar2);
    plVar5 = puVar1 + 1;
    *puVar1 = uVar7;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*param_3 - (long)plVar5 < (long)(int)uVar3) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar5) + 0x10;
        iVar6 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar6 - iVar9);
        if (iVar6 - iVar9 == 0 || iVar6 < iVar9) break;
        func_0x00010b4d5738();
        lVar2 = (long)plVar5 + (long)iVar9;
        plVar5 = param_3;
        func_0x000107c303e4(param_3,lVar2);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar5 + (long)iVar6);
    }
    _memcpy(plVar5,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)plVar5 + (long)(int)uVar3);
  }
  return plVar5;
}



/* Entry: 10b5cb188; end: 10b5cb237;  */

void FUN_10b5cb188(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10) & 0xfffffffc;
    func_0x000107c282a0();
    uVar1 = uVar1 + 1;
    break;
  case 3:
    lVar2 = (long)*(int *)(param_1 + 0x10);
    goto code_r0x00010b5cb1dc;
  case 4:
    lVar2 = *(long *)(param_1 + 0x10);
code_r0x00010b5cb1dc:
    uVar1 = (int)LZCOUNT(lVar2) * -9 + 0x2c0U >> 6;
    break;
  case 5:
    uVar1 = 9;
    break;
  default:
    uVar1 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = (int)lVar2 + uVar1;
  }
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10b5cb238; end: 10b5cb34f;  */

void FUN_10b5cb238(long param_1,long param_2)

{
  undefined *puVar1;
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
        FUN_10b5cafb4(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    switch(iVar2) {
    case 1:
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      break;
    case 2:
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x10) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x1c) != 2) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x10,puVar1,uVar4);
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      break;
    case 4:
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      break;
    case 5:
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
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



/* Entry: 10b5cb350; end: 10b5cb357;  */

void FUN_10b5cb350(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110d19fd8;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5cb358; end: 10b5cb39b;  */

void FUN_10b5cb358(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110d19fd8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5cb39c; end: 10b5cb3c3;  */

void FUN_10b5cb39c(void)

{
  return;
}



/* Entry: 10b5cb3c4; end: 10b5cb447;  */

undefined8 * FUN_10b5cb3c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d222c8;
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
  return param_1;
}



/* Entry: 10b5cb448; end: 10b5cb477;  */

long FUN_10b5cb448(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5cb478(param_1);
  return param_1;
}



/* Entry: 10b5cb478; end: 10b5cb4a7;  */

void FUN_10b5cb478(long param_1)

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



/* Entry: 10b5cb4a8; end: 10b5cb4ab;  */

long FUN_10b5cb4a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5cb478(param_1);
  return param_1;
}



/* Entry: 10b5cb4ac; end: 10b5cb4bf;  */

void FUN_10b5cb4ac(void)

{
  FUN_10b5cb448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cb4c0; end: 10b5cb4cb;  */

undefined ** FUN_10b5cb4c0(void)

{
  return &PTR_DAT_110d22308;
}



/* Entry: 10b5cb4cc; end: 10b5cb51b;  */

void FUN_10b5cb4cc(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b5cb51c; end: 10b5cb5ef;  */

long * FUN_10b5cb51c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,param_3);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b5cb5ac;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b5cb5ac;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f77f04d);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,plVar1);
  plVar1 = plVar3;
LAB_10b5cb5ac:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar1 + (long)iVar9;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar7);
  }
  _memcpy(plVar1,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar5);
}



/* Entry: 10b5cb5f0; end: 10b5cb673;  */

long FUN_10b5cb5f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b5cb628;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b5cb628:
    lVar3 = 0;
    goto LAB_10b5cb62c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b5cb62c:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x000108c6cd50();
    lVar3 = lVar3 + lVar2 + 1;
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



/* Entry: 10b5cb674; end: 10b5cb677;  */

void FUN_10b5cb674(long param_1,long param_2)

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



/* Entry: 10b5cb678; end: 10b5cb74b;  */

void FUN_10b5cb678(long param_1,long param_2)

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



/* Entry: 10b5cb74c; end: 10b5cb753;  */

void FUN_10b5cb74c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d222c8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5cb754; end: 10b5cb7a3;  */

void FUN_10b5cb754(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d222c8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5cb7a4; end: 10b5cb7b7;  */

void FUN_10b5cb7a4(void)

{
  return;
}



/* Entry: 10b5cb7b8; end: 10b5cb7db;  */

undefined8 FUN_10b5cb7b8(undefined8 param_1)

{
  func_0x00010b5cc610();
  return param_1;
}



/* Entry: 10b5cb7dc; end: 10b5cb7df;  */

undefined8 FUN_10b5cb7dc(undefined8 param_1)

{
  func_0x00010b5cc610();
  return param_1;
}



/* Entry: 10b5cb7e0; end: 10b5cb7f3;  */

void FUN_10b5cb7e0(void)

{
  FUN_10b5cb7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cb7f4; end: 10b5cb817;  */

undefined ** FUN_10b5cb7f4(void)

{
  return &PTR_DAT_110d224a0;
}



/* Entry: 10b5cb818; end: 10b5cb8a3;  */

long * FUN_10b5cb818(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b5cc680();
  if (param_2 != 0) {
    func_0x00010b5cc65c();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x18);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280a8(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5cc674();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5cb8a4; end: 10b5cb91f;  */

long FUN_10b5cb8a4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x18) * 2;
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



/* Entry: 10b5cb920; end: 10b5cb94b;  */

long FUN_10b5cb920(long param_1)

{
  func_0x00010b5cc610();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5cb94c; end: 10b5cb94f;  */

long FUN_10b5cb94c(long param_1)

{
  func_0x00010b5cc610();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5cb950; end: 10b5cb963;  */

void FUN_10b5cb950(void)

{
  FUN_10b5cb920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cb964; end: 10b5cb96f;  */

undefined ** FUN_10b5cb964(void)

{
  return &PTR_DAT_110d224f0;
}



/* Entry: 10b5cb970; end: 10b5cb9af;  */

void FUN_10b5cb970(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b5cb9b0; end: 10b5cbab3;  */

long * FUN_10b5cb9b0(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  plVar7 = param_3;
  plVar6 = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar6 = param_3;
    func_0x000105991a14();
    plVar7 = param_2;
  }
  plVar4 = plVar6;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar4 = param_3;
    func_0x000107c282cc();
    plVar7 = plVar6;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar6 = param_3;
    func_0x000107c28094(param_3,plVar4);
    plVar4 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar1 = 0x18;
    func_0x000107c280a8(0x18,plVar6);
    func_0x000107c280b8(plVar4,uVar1);
  }
  plVar6 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    if (plVar6[1] == 0) goto LAB_10b5cba7c;
    plVar2 = (long *)*plVar6;
  }
  else {
    plVar2 = plVar6;
    if (*(char *)((long)plVar6 + 0x17) == '\0') goto LAB_10b5cba7c;
  }
  func_0x00010b5cc640(plVar2);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,4,plVar6,plVar4);
  plVar7 = plVar6;
  plVar4 = plVar2;
LAB_10b5cba7c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar4;
  }
  func_0x00010b5cc674();
  if ((long)plVar7 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar7 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar4 < (long)(int)plVar7) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)plVar4) + 0x10;
      iVar5 = (int)plVar7;
      plVar7 = (long *)(ulong)(uint)(iVar5 - iVar8);
      if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar4 + (long)iVar8;
      plVar4 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar4 + (long)iVar5);
  }
  _memcpy(plVar4,lVar3,(ulong)plVar7 & 0xffffffff);
  return (long *)((long)plVar4 + (long)(int)plVar7);
}



/* Entry: 10b5cbab4; end: 10b5cbbe7;  */

void FUN_10b5cbab4(long param_1)

{
  int iVar1;
  ulong uVar2;
  int extraout_w8;
  int extraout_w8_00;
  int iVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b5cbaec;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b5cbaec:
    iVar1 = 0;
    goto LAB_10b5cbaf0;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b5cbaf0:
  iVar3 = -9;
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b5cc628();
    iVar3 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010b5cc628();
    iVar3 = extraout_w8_00;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * iVar3 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar4 + iVar1;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  return;
}



/* Entry: 10b5cbbe8; end: 10b5cbc0b;  */

undefined8 FUN_10b5cbbe8(undefined8 param_1)

{
  func_0x00010b5cc610();
  return param_1;
}



/* Entry: 10b5cbc0c; end: 10b5cbc0f;  */

undefined8 FUN_10b5cbc0c(undefined8 param_1)

{
  func_0x00010b5cc610();
  return param_1;
}



/* Entry: 10b5cbc10; end: 10b5cbc23;  */

void FUN_10b5cbc10(void)

{
  FUN_10b5cbbe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cbc24; end: 10b5cbc43;  */

undefined ** FUN_10b5cbc24(void)

{
  return &PTR_DAT_110d22540;
}



/* Entry: 10b5cbc44; end: 10b5cbcaf;  */

long * FUN_10b5cbc44(long *param_1,long param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b5cc680();
  if (param_2 != 0) {
    func_0x00010b5cc65c();
    param_4 = param_1;
  }
  plVar2 = param_4;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c282cc();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5cc674();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        plVar2 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar4);
    }
    _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 10b5cbcb0; end: 10b5cbd3b;  */

ulong FUN_10b5cbcb0(long param_1)

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



/* Entry: 10b5cbd3c; end: 10b5cbe17;  */

undefined8 * FUN_10b5cbd3c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d22460;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5cc310(param_1 + 2,param_2,param_3 + 0x10);
  func_0x00010b5cc330(param_1 + 5,param_2,param_3 + 0x28);
  func_0x00010b5cc350(param_1 + 8,param_2,param_3 + 0x40);
  lVar1 = param_3 + 0x58;
  func_0x000107c2809c(lVar1,param_2);
  param_1[0xb] = lVar1;
  lVar1 = param_3 + 0x60;
  func_0x000107c2809c(lVar1,param_2);
  param_1[0xc] = lVar1;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_3 + 0x68);
  return param_1;
}



/* Entry: 10b5cbe18; end: 10b5cbe43;  */

undefined8 FUN_10b5cbe18(undefined8 param_1)

{
  func_0x00010b5cc610();
  FUN_10b5cbe44(param_1);
  return param_1;
}



/* Entry: 10b5cbe44; end: 10b5cbe73;  */

long * FUN_10b5cbe44(long param_1)

{
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  FUN_10b5cc370(param_1 + 0x40);
  FUN_10b5cc39c(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010b5cc654();
  }
  return (long *)(param_1 + 0x10);
}



/* Entry: 10b5cbe74; end: 10b5cbe77;  */

undefined8 FUN_10b5cbe74(undefined8 param_1)

{
  func_0x00010b5cc610();
  FUN_10b5cbe44(param_1);
  return param_1;
}



/* Entry: 10b5cbe78; end: 10b5cbe8b;  */

void FUN_10b5cbe78(void)

{
  FUN_10b5cbe18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cbe8c; end: 10b5cbe97;  */

undefined ** FUN_10b5cbe8c(void)

{
  return &PTR_DAT_110d22590;
}



/* Entry: 10b5cbe98; end: 10b5cbf17;  */

void FUN_10b5cbe98(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    func_0x0001053936e4(param_1 + 0x40);
  }
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x68) = 0;
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



/* Entry: 10b5cbf18; end: 10b5cc1ef;  */

long * FUN_10b5cbf18(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar6 + 0x17);
  plVar4 = param_3;
  if (lVar3 < 0) {
    plVar1 = puVar6 + 1;
    lVar3 = 0;
    if (*plVar1 != 0) {
      puVar6 = (undefined8 *)*puVar6;
      lVar3 = *plVar1;
      goto LAB_10b5cbf60;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_10b5cbf60:
    func_0x00010b5cc640(puVar6,lVar3,param_3,&UNK_10f77f0aa);
    lVar3 = 1;
    param_2 = param_3;
    func_0x00010b5cc668();
  }
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar5 = 0; iVar7 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b5cc588();
    plVar4 = (long *)(ulong)*(uint *)(lVar3 + 0x1c);
    param_2 = (long *)0x2;
    func_0x00010b5cc5cc();
  }
  iVar7 = *(int *)(param_1 + 0x30);
  for (iVar5 = 0; iVar7 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b5cc588();
    plVar4 = (long *)(ulong)*(uint *)(lVar3 + 0x2c);
    param_2 = (long *)0x3;
    func_0x00010b5cc5cc();
  }
  iVar7 = *(int *)(param_1 + 0x48);
  for (iVar5 = 0; iVar7 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b5cc588();
    plVar4 = (long *)(ulong)*(uint *)(lVar3 + 0x20);
    param_2 = (long *)0x4;
    func_0x00010b5cc5cc();
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x68);
    uVar2 = 0x28;
    func_0x000107c280a8(0x28,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_10b5cc084;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b5cc084;
  func_0x00010b5cc640(puVar6);
  param_2 = param_3;
  func_0x00010b5cc668(param_3,6);
LAB_10b5cc084:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5cc674();
  if ((long)plVar4 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b5cc1f0; end: 10b5cc1f3;  */

void FUN_10b5cc1f0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b5cc2c0(param_1 + 0x10,param_2 + 0x10);
  func_0x00010b5cc2d0(param_1 + 0x28,param_2 + 0x28);
  func_0x00010b5cc2e0(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
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



/* Entry: 10b5cc1f4; end: 10b5cc2bf;  */

void FUN_10b5cc1f4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b5cc2c0(param_1 + 0x10,param_2 + 0x10);
  func_0x00010b5cc2d0(param_1 + 0x28,param_2 + 0x28);
  func_0x00010b5cc2e0(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x58,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x60) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x60,uVar1,uVar2);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
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



/* Entry: 10b5cc2c0; end: 10b5cc30f;  */

void FUN_10b5cc2c0(long *param_1,long param_2)

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



/* Entry: 10b5cc310; end: 10b5cc36f;  */

void FUN_10b5cc310(void)

{
  func_0x00010b5cc5b8();
  FUN_10b5cc2c0();
  return;
}



/* Entry: 10b5cc370; end: 10b5cc39b;  */

long * FUN_10b5cc370(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b5cc654();
  }
  return param_1;
}



/* Entry: 10b5cc39c; end: 10b5cc3c7;  */

long * FUN_10b5cc39c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b5cc654();
  }
  return param_1;
}



/* Entry: 10b5cc3c8; end: 10b5cc3f3;  */

long * FUN_10b5cc3c8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010b5cc654();
  }
  return param_1;
}



/* Entry: 10b5cc3f4; end: 10b5cc567;  */

long * FUN_10b5cc3f4(long *param_1)

{
  FUN_10b5cc370(param_1 + 6);
  FUN_10b5cc39c(param_1 + 3);
  if (*param_1 != 0) {
    func_0x00010b5cc654();
  }
  return param_1;
}



/* Entry: 10b5cc568; end: 10b5cc707;  */

void FUN_10b5cc568(void)

{
  return;
}



/* Entry: 10b5cc708; end: 10b5cc72b;  */

undefined8 FUN_10b5cc708(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}


