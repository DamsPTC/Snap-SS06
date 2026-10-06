/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5947dc; end: 10b59490f;  */

ulong FUN_10b5947dc(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 4) {
    iVar3 = (int)LZCOUNT(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    if (iVar3 == 3) {
      uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
      goto LAB_10b594860;
    }
    if (iVar3 != 2) goto LAB_10b594860;
    iVar3 = (int)LZCOUNT(*(undefined8 *)(param_1 + 0x18));
  }
  uVar1 = (iVar3 * -9 + 0x2c0U >> 6) + uVar1;
LAB_10b594860:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b594910; end: 10b59493f;  */

long * FUN_10b594910(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b594940; end: 10b5949c7;  */

void FUN_10b594940(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b594b1c();
  }
  *puVar1 = &PTR_FUN_110d11230;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b5949c8; end: 10b594a5f;  */

undefined8 * FUN_10b5949c8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b594b1c();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d11230;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b594b10();
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = param_1;
  FUN_10b594638(puVar2 + 2,param_2 + 0x10);
  *(undefined4 *)(puVar2 + 6) = 0;
  uVar1 = *(uint *)(param_2 + 0x34);
  *(uint *)((long)puVar2 + 0x34) = uVar1;
  if ((uVar1 & 0xfffffffe) == 2) {
    func_0x000107c284d4(param_1,*(undefined8 *)(param_2 + 0x28));
    puVar2[5] = param_1;
  }
  return puVar2;
}



/* Entry: 10b594a60; end: 10b594c2b;  */

long * FUN_10b594a60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((unaff_x21 == 0) || (param_3 != 0)) {
    (**(code **)(*unaff_x20 + 0x10))();
    func_0x00010b4cf4a0();
  }
  else if (unaff_x20 != (long *)0x0) {
    FUN_10b4d8014();
  }
  return unaff_x20;
}



/* Entry: 10b594c2c; end: 10b594c57;  */

long FUN_10b594c2c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b594c58; end: 10b594c5b;  */

long FUN_10b594c58(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b594c5c; end: 10b594c6f;  */

void FUN_10b594c5c(void)

{
  FUN_10b594c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b594c70; end: 10b594c93;  */

undefined ** FUN_10b594c70(void)

{
  return &PTR_DAT_110d11458;
}



/* Entry: 10b594c94; end: 10b594e87;  */

long * FUN_10b594c94(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar2 = param_1;
    func_0x00010b594f90();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b594f84();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x11) == '\x01') {
    func_0x00010b594f90();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b594f84();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x12) == '\x01') {
    func_0x00010b594f90();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b594f84();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x13) == '\x01') {
    func_0x00010b594f90();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b594f84();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x14) == '\x01') {
    func_0x00010b594f90();
    plVar1 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b594f84();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x15) == '\x01') {
    func_0x00010b594f90();
    plVar2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar1);
    func_0x00010b594f84();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x16) == '\x01') {
    func_0x00010b594f90();
    plVar1 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x00010b594f84();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x17) == '\x01') {
    func_0x00010b594f90();
    plVar2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar1);
    func_0x00010b594f84();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((char)param_1[3] == '\x01') {
    func_0x00010b594f90();
    plVar1 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x00010b594f84();
    param_2 = plVar1;
  }
  if (*(char *)((long)param_1 + 0x19) == '\x01') {
    func_0x00010b594f90();
    param_2 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar1);
    func_0x00010b594f84();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
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
  return param_2;
}



/* Entry: 10b594e88; end: 10b594ed7;  */

long FUN_10b594e88(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = ((ulong)((uint)(byte)((char)uVar4 + (char)((ulong)uVar4 >> 8) +
                                (char)((ulong)uVar4 >> 0x10) + (char)((ulong)uVar4 >> 0x18) +
                                (char)((ulong)uVar4 >> 0x20) + (char)((ulong)uVar4 >> 0x28) +
                                (char)((ulong)uVar4 >> 0x30) + (char)((ulong)uVar4 >> 0x38)) +
                   (uint)*(byte *)(param_1 + 0x18) + (uint)*(byte *)(param_1 + 0x19)) & 0x7f) * 2;
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



/* Entry: 10b594ed8; end: 10b594f0f;  */

void FUN_10b594ed8(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b594c7c();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  if (*(char *)(param_2 + 0x15) == '\x01') {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 1;
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



/* Entry: 10b594f10; end: 10b594f33;  */

undefined1  [16] FUN_10b594f10(long param_1,long param_2)

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
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x1a);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x1a);
  return auVar6;
}



/* Entry: 10b594f34; end: 10b594f83;  */

void FUN_10b594f34(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d11418;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b594f84; end: 10b594fff;  */

void FUN_10b594f84(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b595000; end: 10b595013;  */

void FUN_10b595000(void)

{
  func_0x000107c305d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b595014; end: 10b595133;  */

long * FUN_10b595014(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[3] == '\x01') {
    plVar2 = param_1;
    func_0x00010b595268();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b59525c();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[2] != 0) {
    func_0x00010b595268();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b59525c();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b595268();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b59525c();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b595268();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b59525c();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x19) == '\x01') {
    func_0x00010b595268();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b59525c();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
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
  return param_2;
}



/* Entry: 10b595134; end: 10b5951cf;  */

long FUN_10b595134(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  lVar2 = (ulong)*(byte *)(param_1 + 0x18) * 2 + (ulong)uVar1 + (ulong)*(byte *)(param_1 + 0x19) * 2
  ;
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5951d0; end: 10b595207;  */

void FUN_10b5951d0(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c305dc();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
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



/* Entry: 10b595208; end: 10b59520f;  */

void FUN_10b595208(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110d114d8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b595210; end: 10b59525b;  */

void FUN_10b595210(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110d114d8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b59525c; end: 10b5952eb;  */

void FUN_10b59525c(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b5952ec; end: 10b5952ff;  */

void FUN_10b5952ec(void)

{
  func_0x000107c305e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b595300; end: 10b595463;  */

long * FUN_10b595300(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar2 = param_1;
    func_0x00010b5955ec();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b5955e0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b5955ec();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b5955e0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[3] != 0) {
    func_0x00010b5955ec();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b5955e0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b5955ec();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b5955e0();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[4] != 0) {
    func_0x00010b5955ec();
    plVar1 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b5955e0();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b5955ec();
    plVar2 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar1);
    func_0x00010b5955e0();
    param_2 = plVar2;
  }
  if ((int)param_1[5] != 0) {
    func_0x00010b5955ec();
    param_2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x00010b5955e0();
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
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
  return param_2;
}



/* Entry: 10b595464; end: 10b595553;  */

long FUN_10b595464(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x1c)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x2c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b595554; end: 10b59558b;  */

void FUN_10b595554(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c305e8();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10b59558c; end: 10b595593;  */

void FUN_10b59558c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110d11598;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b595594; end: 10b5955df;  */

void FUN_10b595594(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110d11598;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5955e0; end: 10b59564f;  */

void FUN_10b5955e0(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b595650; end: 10b595673;  */

undefined8 FUN_10b595650(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b595674; end: 10b595677;  */

undefined8 FUN_10b595674(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b595678; end: 10b59568b;  */

void FUN_10b595678(void)

{
  FUN_10b595650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59568c; end: 10b5956af;  */

undefined ** FUN_10b59568c(void)

{
  return &PTR_DAT_110d119b0;
}



/* Entry: 10b5956b0; end: 10b5957b7;  */

long * FUN_10b5956b0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b59749c();
  plVar2 = param_1;
  if ((char)param_1[3] == '\x01') {
    func_0x00010b59744c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b597440();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    func_0x00010b59744c();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b597440();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b59744c();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar3);
    func_0x00010b597440();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    func_0x00010b59744c();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b597440();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x1a) == '\x01') {
    func_0x00010b59744c();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x00010b597440();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b597540();
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



/* Entry: 10b5957b8; end: 10b595873;  */

long FUN_10b5957b8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  lVar2 = (ulong)*(byte *)(param_1 + 0x18) * 2 + (ulong)uVar1 + (ulong)*(byte *)(param_1 + 0x19) * 2
          + (ulong)*(byte *)(param_1 + 0x1a) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b595874; end: 10b595897;  */

undefined8 FUN_10b595874(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b595898; end: 10b59589b;  */

undefined8 FUN_10b595898(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b59589c; end: 10b5958af;  */

void FUN_10b59589c(void)

{
  FUN_10b595874();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5958b0; end: 10b5958d3;  */

undefined ** FUN_10b5958b0(void)

{
  return &PTR_DAT_110d11a18;
}



/* Entry: 10b5958d4; end: 10b595967;  */

long * FUN_10b5958d4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b597468();
  if ((bool)in_ZR) {
    func_0x00010b59744c();
    func_0x00010b597480();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010b59744c();
    func_0x00010b5974ec();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x12) == '\x01') {
    func_0x00010b59744c();
    func_0x00010b5975a0();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b597540();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b595968; end: 10b595a0f;  */

long FUN_10b595968(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10) +
                  (uint)*(byte *)(param_1 + 0x12)) & 7) * 2;
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



/* Entry: 10b595a10; end: 10b595a33;  */

undefined8 FUN_10b595a10(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b595a34; end: 10b595a37;  */

undefined8 FUN_10b595a34(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b595a38; end: 10b595a4b;  */

void FUN_10b595a38(void)

{
  FUN_10b595a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b595a4c; end: 10b595a6f;  */

undefined ** FUN_10b595a4c(void)

{
  return &PTR_DAT_110d11a80;
}



/* Entry: 10b595a70; end: 10b595b73;  */

long * FUN_10b595a70(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b597468();
  if ((bool)in_ZR) {
    func_0x00010b59744c();
    func_0x00010b597480();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010b59744c();
    func_0x00010b5974ec();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x12) == '\x01') {
    func_0x00010b59744c();
    func_0x00010b5975a0();
    func_0x00010b597440();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b59744c();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b597440();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b59744c();
    plVar3 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b597440();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x13) == '\x01') {
    func_0x00010b59744c();
    param_4 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar3);
    func_0x00010b597440();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b597540();
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



/* Entry: 10b595b74; end: 10b595bef;  */

long FUN_10b595b74(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  lVar2 = ((ulong)(ushort)((ushort)(byte)uVar1 + (ushort)(byte)((uint)uVar1 >> 8) +
                           (ushort)(byte)((uint)uVar1 >> 0x10) + (ushort)(byte)((uint)uVar1 >> 0x18)
                          ) & 0x7f) * 2;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6) + lVar2;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b595bf0; end: 10b595c23;  */

long FUN_10b595bf0(long param_1)

{
  func_0x00010b597528();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b595a10();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b595c24; end: 10b595c27;  */

long FUN_10b595c24(long param_1)

{
  func_0x00010b597528();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b595a10();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b595c28; end: 10b595c3b;  */

void FUN_10b595c28(void)

{
  FUN_10b595bf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b595c3c; end: 10b595c47;  */

undefined ** FUN_10b595c3c(void)

{
  return &PTR_DAT_110d11b00;
}



/* Entry: 10b595c48; end: 10b595c8b;  */

void FUN_10b595c48(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b595a58(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b595c8c; end: 10b595d3f;  */

long * FUN_10b595c8c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b59749c();
  plVar2 = param_1;
  if ((char)param_1[4] == '\x01') {
    func_0x00010b59744c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b597440();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x21) == '\x01') {
    func_0x00010b59744c();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b597440();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x1c);
    param_4 = (long *)0x3;
    func_0x00010b597538();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b597540();
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



/* Entry: 10b595d40; end: 10b595dab;  */

void FUN_10b595d40(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b595b74();
    func_0x00010b59741c();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2 + (uint)*(byte *)(param_1 + 0x21) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b59761c();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b595dac; end: 10b595daf;  */

void FUN_10b595dac(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b597568();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b596f70();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x00010b5959a8();
      puVar2 = puVar3;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  if (*(char *)(unaff_x20 + 0x21) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x21) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b597578();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b595db0; end: 10b595e53;  */

void FUN_10b595db0(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b597568();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_10b596f70();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x00010b5959a8();
      puVar2 = puVar3;
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  if (*(char *)(unaff_x20 + 0x21) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x21) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b597578();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 10b595e54; end: 10b595e73;  */

void FUN_10b595e54(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 10b595e74; end: 10b595e97;  */

undefined8 FUN_10b595e74(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b595e98; end: 10b595e9b;  */

undefined8 FUN_10b595e98(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b595e9c; end: 10b595eaf;  */

void FUN_10b595e9c(void)

{
  FUN_10b595e74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b595eb0; end: 10b595ecf;  */

undefined ** FUN_10b595eb0(void)

{
  return &PTR_DAT_110d11b70;
}



/* Entry: 10b595ed0; end: 10b595f2b;  */

long * FUN_10b595ed0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b597468();
  if ((bool)in_ZR) {
    func_0x00010b59744c();
    func_0x00010b597480();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b597540();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b595f2c; end: 10b595f5b;  */

long FUN_10b595f2c(long param_1)

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



/* Entry: 10b595f5c; end: 10b595f87;  */

undefined8 FUN_10b595f5c(undefined8 param_1)

{
  func_0x00010b597528();
  FUN_10b595f88(param_1);
  return param_1;
}



/* Entry: 10b595f88; end: 10b595fdb;  */

void FUN_10b595f88(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b595650();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b595874();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b595bf0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b595e74();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b595fdc; end: 10b595fdf;  */

undefined8 FUN_10b595fdc(undefined8 param_1)

{
  func_0x00010b597528();
  FUN_10b595f88(param_1);
  return param_1;
}



/* Entry: 10b595fe0; end: 10b595ff3;  */

void FUN_10b595fe0(void)

{
  FUN_10b595f5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b595ff4; end: 10b595fff;  */

undefined ** FUN_10b595ff4(void)

{
  return &PTR_DAT_110d11bd8;
}



/* Entry: 10b596000; end: 10b59607b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b596000(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b595698(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5958bc(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b595c48(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b595ebc(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b59607c; end: 10b5961db;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b59607c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b59749c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x1c);
    param_1 = (long *)0x1;
    func_0x00010b597538();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b5974c4();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (long *)0x3;
    func_0x00010b597538();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x4;
    func_0x00010b597538();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b597540();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5961dc; end: 10b5961df;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5961dc(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b597568();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b596fcc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b5955f8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b597030();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b595834();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b59708c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b595db0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_10b597114();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b595e54();
      }
    }
  }
  func_0x00010b597554();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b597578();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10b5961e0; end: 10b5962db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5961e0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b597568();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b596fcc();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b5955f8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b597030();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b595834();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b59708c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b595db0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_10b597114();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b595e54();
      }
    }
  }
  func_0x00010b597554();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b597578();
    if ((*param_1 & 1) == 0) {
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



/* Entry: 10b5962dc; end: 10b5962fb;  */

void FUN_10b5962dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 10b5962fc; end: 10b59631f;  */

undefined8 FUN_10b5962fc(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b596320; end: 10b596323;  */

undefined8 FUN_10b596320(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b596324; end: 10b596337;  */

void FUN_10b596324(void)

{
  FUN_10b5962fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b596338; end: 10b596357;  */

undefined ** FUN_10b596338(void)

{
  return &PTR_DAT_110d11c38;
}



/* Entry: 10b596358; end: 10b5963b3;  */

long * FUN_10b596358(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b597468();
  if ((bool)in_ZR) {
    func_0x00010b59744c();
    func_0x00010b597480();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b597540();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b5963b4; end: 10b596413;  */

long FUN_10b5963b4(long param_1)

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



/* Entry: 10b596414; end: 10b596437;  */

undefined8 FUN_10b596414(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b596438; end: 10b59643b;  */

undefined8 FUN_10b596438(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b59643c; end: 10b59644f;  */

void FUN_10b59643c(void)

{
  FUN_10b596414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b596450; end: 10b59646f;  */

undefined ** FUN_10b596450(void)

{
  return &PTR_DAT_110d11ca8;
}



/* Entry: 10b596470; end: 10b5964e7;  */

long * FUN_10b596470(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b597468();
  if ((bool)in_ZR) {
    func_0x00010b59744c();
    func_0x00010b597480();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010b59744c();
    func_0x00010b5974ec();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b597540();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5964e8; end: 10b59653f;  */

long FUN_10b5964e8(long param_1)

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



/* Entry: 10b596540; end: 10b596563;  */

undefined8 FUN_10b596540(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b596564; end: 10b596567;  */

undefined8 FUN_10b596564(undefined8 param_1)

{
  func_0x00010b597528();
  return param_1;
}



/* Entry: 10b596568; end: 10b59657b;  */

void FUN_10b596568(void)

{
  FUN_10b596540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59657c; end: 10b59659b;  */

undefined ** FUN_10b59657c(void)

{
  return &PTR_DAT_110d11d18;
}



/* Entry: 10b59659c; end: 10b5965f7;  */

long * FUN_10b59659c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b597468();
  if ((bool)in_ZR) {
    func_0x00010b59744c();
    func_0x00010b597480();
    func_0x00010b597440();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b597540();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b5965f8; end: 10b596627;  */

long FUN_10b5965f8(long param_1)

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



/* Entry: 10b596628; end: 10b596653;  */

undefined8 FUN_10b596628(undefined8 param_1)

{
  func_0x00010b597528();
  FUN_10b596654(param_1);
  return param_1;
}



/* Entry: 10b596654; end: 10b596697;  */

void FUN_10b596654(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5962fc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b596414();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b596540();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b596698; end: 10b59669b;  */

undefined8 FUN_10b596698(undefined8 param_1)

{
  func_0x00010b597528();
  FUN_10b596654(param_1);
  return param_1;
}



/* Entry: 10b59669c; end: 10b5966af;  */

void FUN_10b59669c(void)

{
  FUN_10b596628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5966b0; end: 10b5966bb;  */

undefined ** FUN_10b5966b0(void)

{
  return &PTR_DAT_110d11d88;
}



/* Entry: 10b5966bc; end: 10b596727;  */

void FUN_10b5966bc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b596344(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b59645c(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b596588(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b596728; end: 10b596853;  */

long * FUN_10b596728(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b59749c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_1 = (long *)0x1;
    func_0x00010b597538();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010b5974c4();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (long *)0x3;
    func_0x00010b597538();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b597540();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar3 = (int)param_3;
    uVar1 = iVar3 - iVar4;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 10b596854; end: 10b596857;  */

void FUN_10b596854(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b597568();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b59716c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5962dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5971c4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b5963e4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_10b59721c();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b596520();
      }
    }
  }
  func_0x00010b597554();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b597578();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b596858; end: 10b596927;  */

void FUN_10b596858(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b597568();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b59716c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5962dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_10b5971c4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010b5963e4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_10b59721c();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b596520();
      }
    }
  }
  func_0x00010b597554();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b597578();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}


