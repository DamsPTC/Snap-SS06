/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b57eeec; end: 10b57eeef;  */

long FUN_10b57eeec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b53cbd8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b57eef0; end: 10b57ef03;  */

void FUN_10b57eef0(void)

{
  FUN_10b57eeb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57ef04; end: 10b57ef0f;  */

undefined ** FUN_10b57ef04(void)

{
  return &PTR_DAT_110d0d938;
}



/* Entry: 10b57ef10; end: 10b57ef5f;  */

void FUN_10b57ef10(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b53cc3c(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b57ef60; end: 10b57f03f;  */

long * FUN_10b57ef60(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = param_1;
  if (param_1[4] != 0) {
    plVar1 = param_1;
    FUN_10b57f1c4();
    plVar6 = (long *)param_1[4];
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280ac(plVar6,uVar2);
    param_2 = plVar6;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar6 = (long *)0x2;
    func_0x000107c303cc(2,param_1[3],*(undefined4 *)(param_1[3] + 0x18),param_2,param_3);
    param_2 = plVar6;
  }
  if ((char)param_1[5] == '\x01') {
    FUN_10b57f1c4();
    param_2 = (long *)(ulong)*(byte *)(param_1 + 5);
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,plVar6);
    func_0x000107c280a8(param_2,uVar2);
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
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 10b57f040; end: 10b57f0bf;  */

void FUN_10b57f040(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b5291d0();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x28) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b57f0c0; end: 10b57f16f;  */

void FUN_10b57f0c0(long param_1,long param_2)

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
      FUN_10b532cd8(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b53cd78(*(long *)(param_1 + 0x18));
    }
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 10b57f170; end: 10b57f177;  */

void FUN_10b57f170(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0d8f8;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b57f178; end: 10b57f1c3;  */

void FUN_10b57f178(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d8f8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b57f1c4; end: 10b57f1d7;  */

ulong * FUN_10b57f1c4(void)

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



/* Entry: 10b57f1d8; end: 10b57f23f;  */

undefined8 * FUN_10b57f1d8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0d9b8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b57f240; end: 10b57f273;  */

long FUN_10b57f240(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b57f274; end: 10b57f277;  */

long FUN_10b57f274(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b57f278; end: 10b57f28b;  */

void FUN_10b57f278(void)

{
  FUN_10b57f240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57f28c; end: 10b57f297;  */

undefined ** FUN_10b57f28c(void)

{
  return &PTR_DAT_110d0d9f8;
}



/* Entry: 10b57f298; end: 10b57f2d3;  */

void FUN_10b57f298(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
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



/* Entry: 10b57f2d4; end: 10b57f437;  */

long * FUN_10b57f2d4(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = 8;
  for (uVar10 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
      uVar10 = uVar10 - 1) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + lVar11 + -1);
    }
    puVar8 = (undefined8 *)*puVar2;
    lVar5 = (long)*(char *)((long)puVar8 + 0x17);
    puVar3 = puVar8;
    if (lVar5 < 0) {
      lVar5 = puVar8[1];
      puVar3 = (undefined8 *)*puVar8;
    }
    func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f77c280);
    lVar5 = (long)*(char *)((long)puVar8 + 0x17);
    if (((lVar5 < 0) && (lVar5 = puVar8[1], 0x7f < lVar5)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar5)) {
      plVar4 = param_3;
      func_0x00010b4d5120(param_3,1,puVar8,param_2);
    }
    else {
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)lVar5;
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        puVar8 = (undefined8 *)*puVar8;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar8,lVar5);
      plVar4 = (long *)((undefined1 *)((long)param_2 + 2) + lVar5);
    }
    lVar11 = lVar11 + 8;
    param_2 = plVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar10 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar10 < 0) {
    lVar11 = *(long *)(uVar6 + 8);
    uVar10 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar11 = uVar6 + 8;
  }
  if ((long)(int)uVar10 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar11,uVar10 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar10);
  }
  while( true ) {
    iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar7 = (int)uVar10;
    uVar10 = (ulong)(uint)(iVar7 - iVar9);
    if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar9);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar7);
}



/* Entry: 10b57f438; end: 10b57f4cb;  */

ulong FUN_10b57f438(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  for (uVar5 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar3 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar1 = (ulong *)(uVar3 + lVar6 + -1);
    }
    uVar3 = *puVar1;
    func_0x000107c282a0();
    uVar4 = uVar3 + uVar4;
    lVar6 = lVar6 + 8;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b57f4cc; end: 10b57f4cf;  */

void FUN_10b57f4cc(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b57f4d0; end: 10b57f51b;  */

void FUN_10b57f4d0(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b57f51c; end: 10b57f523;  */

void FUN_10b57f51c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0d9b8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b57f524; end: 10b57f573;  */

void FUN_10b57f524(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d9b8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b57f574; end: 10b57f5db;  */

undefined8 * FUN_10b57f574(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0da70;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = *(undefined8 *)(param_3 + 0x18);
  return param_1;
}



/* Entry: 10b57f5dc; end: 10b57f60b;  */

long FUN_10b57f5dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b57f60c; end: 10b57f60f;  */

long FUN_10b57f60c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b57f610; end: 10b57f623;  */

void FUN_10b57f610(void)

{
  FUN_10b57f5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57f624; end: 10b57f62f;  */

undefined ** FUN_10b57f624(void)

{
  return &PTR_DAT_110d0dab0;
}



/* Entry: 10b57f630; end: 10b57f66f;  */

void FUN_10b57f630(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = 0;
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



/* Entry: 10b57f670; end: 10b57f77b;  */

long * FUN_10b57f670(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar7 = param_1;
  if ((char)param_1[3] == '\x01') {
    plVar1 = param_1;
    func_0x00010b57f900();
    plVar7 = (long *)(ulong)*(byte *)(param_1 + 3);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8(plVar7,uVar2);
    param_2 = plVar7;
  }
  puVar9 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_10b57f70c;
    puVar3 = (undefined8 *)*puVar9;
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b57f70c;
  }
  func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f77c2c3);
  plVar7 = param_3;
  func_0x000107c280a0(param_3,2,puVar9,param_2);
  param_2 = plVar7;
LAB_10b57f70c:
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    func_0x00010b57f900();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x1c);
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,plVar7);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar6 = param_1[1] & 0xfffffffffffffffe;
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
      iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar8 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar10;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar8);
  }
  _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 10b57f77c; end: 10b57f803;  */

void FUN_10b57f77c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  iVar1 = 0;
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)uVar2 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x18) * 2;
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  return;
}



/* Entry: 10b57f804; end: 10b57f807;  */

void FUN_10b57f804(long param_1,long param_2)

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
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
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



/* Entry: 10b57f808; end: 10b57f893;  */

void FUN_10b57f808(long param_1,long param_2)

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
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
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



/* Entry: 10b57f894; end: 10b57f89b;  */

void FUN_10b57f894(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0da70;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b57f89c; end: 10b57f8eb;  */

void FUN_10b57f89c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0da70;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b57f8ec; end: 10b57f90b;  */

void FUN_10b57f8ec(void)

{
  return;
}



/* Entry: 10b57f90c; end: 10b57f983;  */

undefined8 * FUN_10b57f90c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0db28;
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
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b57f984; end: 10b57f9b3;  */

long FUN_10b57f984(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57f9b4(param_1);
  return param_1;
}



/* Entry: 10b57f9b4; end: 10b57f9cf;  */

void FUN_10b57f9b4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57f9d0; end: 10b57f9d3;  */

long FUN_10b57f9d0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57f9b4(param_1);
  return param_1;
}



/* Entry: 10b57f9d4; end: 10b57f9e7;  */

void FUN_10b57f9d4(void)

{
  FUN_10b57f984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57f9e8; end: 10b57f9f3;  */

undefined ** FUN_10b57f9e8(void)

{
  return &PTR_DAT_110d0db68;
}



/* Entry: 10b57f9f4; end: 10b57fb07;  */

void FUN_10b57f9f4(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10b57fb08; end: 10b57fb0b;  */

void FUN_10b57fb08(long param_1,long param_2)

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
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b535e30(*(long *)(param_1 + 0x18));
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



/* Entry: 10b57fb0c; end: 10b57fb9f;  */

void FUN_10b57fb0c(long param_1,long param_2)

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
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b535e30(*(long *)(param_1 + 0x18));
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



/* Entry: 10b57fba0; end: 10b57fba7;  */

void FUN_10b57fba0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0db28;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b57fba8; end: 10b57fbeb;  */

void FUN_10b57fba8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0db28;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b57fbec; end: 10b57fbf3;  */

void FUN_10b57fbec(void)

{
  return;
}



/* Entry: 10b57fbf4; end: 10b57fd77;  */

undefined8 * FUN_10b57fbf4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0dbe0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00010b580bf4();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b580bf4();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b580bf4();
  param_1[5] = lVar1;
  lVar1 = param_3 + 0x30;
  func_0x00010b580bf4();
  param_1[6] = lVar1;
  lVar1 = param_3 + 0x38;
  func_0x00010b580bf4();
  param_1[7] = lVar1;
  lVar1 = param_3 + 0x40;
  func_0x00010b580bf4();
  param_1[8] = lVar1;
  lVar1 = param_3 + 0x48;
  func_0x00010b580bf4();
  param_1[9] = lVar1;
  lVar1 = param_3 + 0x50;
  func_0x00010b580bf4();
  param_1[10] = lVar1;
  lVar1 = param_3 + 0x58;
  func_0x00010b580bf4();
  param_1[0xb] = lVar1;
  lVar1 = param_3 + 0x60;
  func_0x00010b580bf4();
  param_1[0xc] = lVar1;
  iVar2 = *(int *)(param_3 + 0xa0);
  *(int *)(param_1 + 0x14) = iVar2;
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_3 + 0xa4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_3 + 0xa8);
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)(param_3 + 0xac);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b580b9c(param_2,*(undefined8 *)(param_3 + 0x68));
    iVar2 = *(int *)(param_1 + 0x14);
  }
  param_1[0xd] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x70);
  param_1[0xf] = *(undefined8 *)(param_3 + 0x78);
  param_1[0xe] = uVar3;
  if (iVar2 == 0x10 || iVar2 == 1) {
    lVar1 = param_3 + 0x80;
    func_0x00010b580bf4();
    param_1[0x10] = lVar1;
  }
  if (*(int *)((long)param_1 + 0xa4) == 0x11 || *(int *)((long)param_1 + 0xa4) == 4) {
    lVar1 = param_3 + 0x88;
    func_0x00010b580bf4();
    param_1[0x11] = lVar1;
  }
  if (*(int *)(param_1 + 0x15) == 0x12 || *(int *)(param_1 + 0x15) == 9) {
    lVar1 = param_3 + 0x90;
    func_0x00010b580bf4();
    param_1[0x12] = lVar1;
  }
  if (*(int *)((long)param_1 + 0xac) == 0x13 || *(int *)((long)param_1 + 0xac) == 0xb) {
    param_3 = param_3 + 0x98;
    func_0x00010b580bf4();
    param_1[0x13] = param_3;
  }
  return param_1;
}



/* Entry: 10b57fd78; end: 10b57fda7;  */

long FUN_10b57fd78(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57fda8(param_1);
  return param_1;
}



/* Entry: 10b57fda8; end: 10b57fe67;  */

void FUN_10b57fda8(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b5cbe18();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_10b57fe80(param_1);
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    func_0x00010b57feb4(param_1);
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    func_0x00010b57fee8(param_1);
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    if (*(int *)(param_1 + 0xac) == 0x13 || *(int *)(param_1 + 0xac) == 0xb) {
      func_0x000107c30258(param_1 + 0x98);
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  return;
}



/* Entry: 10b57fe68; end: 10b57fe6b;  */

long FUN_10b57fe68(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57fda8(param_1);
  return param_1;
}



/* Entry: 10b57fe6c; end: 10b57fe7f;  */

void FUN_10b57fe6c(void)

{
  FUN_10b57fd78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57fe80; end: 10b57ff4f;  */

void FUN_10b57fe80(long param_1)

{
  if (*(int *)(param_1 + 0xa0) == 0x10 || *(int *)(param_1 + 0xa0) == 1) {
    func_0x000107c30258(param_1 + 0x80);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 10b57ff50; end: 10b57ff5b;  */

undefined ** FUN_10b57ff50(void)

{
  return &PTR_DAT_110d0dc20;
}



/* Entry: 10b57ff5c; end: 10b580013;  */

void FUN_10b57ff5c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5cbe98(*(undefined8 *)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_10b57fe80(param_1);
  func_0x00010b57feb4(param_1);
  func_0x00010b57fee8(param_1);
  func_0x00010b57ff1c(param_1);
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



/* Entry: 10b580014; end: 10b58049f;  */

long * FUN_10b580014(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar8;
  int iVar9;
  long unaff_x22;
  int iVar10;
  
  plVar1 = param_1;
  plVar4 = param_3;
  plVar3 = param_2;
  if ((int)param_1[0x14] == 1) {
    func_0x00010b580c58(param_1[0x10]);
    func_0x00010b580bfc();
    param_2 = (long *)0x1;
    plVar1 = param_3;
    func_0x00010b580be0();
    plVar3 = plVar1;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = (long *)param_1[0xd];
    plVar4 = (long *)(ulong)*(uint *)((long)param_2 + 0x6c);
    plVar1 = (long *)0x2;
    func_0x000107c303cc();
    plVar3 = plVar1;
  }
  func_0x00010b580c58(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5800b8;
  }
  else if ((int)param_2 != 0) {
LAB_10b5800b8:
    func_0x00010b580bfc();
    param_2 = (long *)0x3;
    plVar1 = param_3;
    func_0x00010b580be0();
    plVar3 = plVar1;
  }
  if (*(int *)((long)param_1 + 0xa4) == 4) {
    func_0x00010b580c58(param_1[0x11]);
    func_0x00010b580bfc();
    param_2 = (long *)0x4;
    plVar1 = param_3;
    func_0x00010b580be0();
    plVar3 = plVar1;
  }
  plVar2 = plVar1;
  if ((char)param_1[0xe] == '\x01') {
    func_0x00010b580c44();
    plVar2 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010b580ca0();
    param_2 = plVar1;
    plVar3 = plVar2;
  }
  func_0x00010b580c58(param_1[4]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b580160;
  }
  else if ((int)param_2 != 0) {
LAB_10b580160:
    func_0x00010b580bfc();
    param_2 = (long *)0x6;
    plVar2 = param_3;
    func_0x00010b580be0();
    plVar3 = plVar2;
  }
  func_0x00010b580c58(param_1[5]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5801a0;
  }
  else if ((int)param_2 != 0) {
LAB_10b5801a0:
    func_0x00010b580bfc();
    param_2 = (long *)0x7;
    plVar2 = param_3;
    func_0x00010b580be0();
    plVar3 = plVar2;
  }
  func_0x00010b580c58(param_1[6]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5801e0;
  }
  else if ((int)param_2 != 0) {
LAB_10b5801e0:
    func_0x00010b580bfc();
    plVar2 = param_3;
    func_0x00010b580be0();
    plVar3 = plVar2;
  }
  if ((int)param_1[0x15] == 9) {
    func_0x00010b580c58(param_1[0x12]);
    func_0x00010b580bfc();
    plVar2 = param_3;
    func_0x00010b580be0();
    plVar3 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x71) == '\x01') {
    func_0x00010b580c44();
    plVar2 = (long *)0x50;
    func_0x000107c280a8();
    func_0x00010b580ca0();
    plVar3 = plVar2;
  }
  if (*(int *)((long)param_1 + 0xac) == 0xb) {
    func_0x00010b580c58(param_1[0x13]);
    func_0x00010b580bfc();
    plVar2 = param_3;
    func_0x00010b580be0(param_3,0xb);
    plVar3 = plVar2;
  }
  func_0x00010b580c88(param_1[7]);
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = plVar4[1];
  }
  if (lVar6 != 0) {
    plVar2 = param_3;
    func_0x00010b580bec(param_3,0xc);
    plVar3 = plVar2;
  }
  lVar6 = param_1[0xf];
  if (lVar6 != 0) {
    plVar2 = param_3;
    func_0x000106af6948();
    plVar4 = plVar3;
    plVar3 = plVar2;
  }
  func_0x00010b580c88(param_1[8]);
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = plVar4[1];
  }
  if (lVar7 != 0) {
    lVar6 = 0xe;
    plVar2 = param_3;
    func_0x00010b580bec();
    plVar3 = plVar2;
  }
  plVar1 = plVar2;
  if (*(int *)((long)param_1 + 0x74) != 0) {
    func_0x00010b580c44();
    plVar1 = (long *)(ulong)*(uint *)((long)param_1 + 0x74);
    lVar6 = 0x78;
    func_0x000107c280a8(0x78,plVar2);
    func_0x000107c280b8();
    plVar3 = plVar1;
  }
  if ((int)param_1[0x14] == 0x10) {
    func_0x00010b580cb4(param_1[0x10]);
    lVar6 = 0x10;
    func_0x00010b580bec();
    plVar3 = plVar1;
  }
  if (*(int *)((long)param_1 + 0xa4) == 0x11) {
    func_0x00010b580cb4(param_1[0x11]);
    lVar6 = 0x11;
    func_0x00010b580bec();
    plVar3 = plVar1;
  }
  if ((int)param_1[0x15] == 0x12) {
    func_0x00010b580cb4(param_1[0x12]);
    lVar6 = 0x12;
    func_0x00010b580bec();
    plVar3 = plVar1;
  }
  if (*(int *)((long)param_1 + 0xac) == 0x13) {
    func_0x00010b580cb4(param_1[0x13]);
    lVar6 = 0x13;
    func_0x00010b580bec();
    plVar3 = plVar1;
  }
  func_0x00010b580c58(param_1[9]);
  if (lVar6 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5803f0;
  }
  else if ((int)lVar6 == 0) goto LAB_10b5803f0;
  func_0x00010b580bfc();
  plVar3 = param_3;
  func_0x00010b580be0(param_3,0x14);
LAB_10b5803f0:
  func_0x00010b580c88(param_1[10]);
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = plVar4[1];
  }
  if (lVar6 != 0) {
    plVar3 = param_3;
    func_0x00010b580bec(param_3,0x15);
  }
  func_0x00010b580c88(param_1[0xb]);
  lVar6 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar6 = plVar4[1];
  }
  if (lVar6 != 0) {
    plVar3 = param_3;
    func_0x00010b580bec(param_3,0x16);
  }
  func_0x00010b580c88(param_1[0xc]);
  lVar6 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar6 = plVar4[1];
  }
  if (lVar6 != 0) {
    plVar3 = param_3;
    func_0x00010b580bec(param_3,0x17);
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar3;
  }
  uVar8 = param_1[1] & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar8 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar6 = *(long *)(uVar8 + 8);
    uVar5 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    lVar6 = uVar8 + 8;
  }
  if ((long)(int)uVar5 <= *param_3 - (long)plVar3) {
    _memcpy(plVar3,lVar6,uVar5 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)uVar5);
  }
  while( true ) {
    iVar10 = ((int)*param_3 - (int)plVar3) + 0x10;
    iVar9 = (int)uVar5;
    uVar5 = (ulong)(uint)(iVar9 - iVar10);
    if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
    func_0x00010b4d5738();
    lVar6 = (long)plVar3 + (long)iVar10;
    plVar3 = param_3;
    func_0x000107c303e4(param_3,lVar6);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar3 + (long)iVar9);
}



/* Entry: 10b5804a0; end: 10b580727;  */

long FUN_10b5804a0(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long lVar3;
  ulong uVar4;
  
  lVar1 = param_1;
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar1 + 1;
  }
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b580c10();
  }
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b580c10();
  }
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b580c10();
  }
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x38));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b580c10();
  }
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x40));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b580c10();
  }
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x48));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b580c64();
  }
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x50));
  lVar2 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b580c64();
  }
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x58));
  lVar2 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b580c64();
  }
  func_0x00010b580c1c(*(undefined8 *)(param_1 + 0x60));
  lVar2 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b580c64();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b580728(*(undefined8 *)(param_1 + 0x68));
    func_0x00010b580c10();
  }
  lVar1 = lVar3 + (ulong)*(byte *)(param_1 + 0x70) * 2 + (ulong)*(byte *)(param_1 + 0x71) * 2;
  if (*(int *)(param_1 + 0x74) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x74)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x78)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0xa0) == 0x10) {
    func_0x00010b580c78(*(undefined8 *)(param_1 + 0x80));
    func_0x00010b580c64();
  }
  else if (*(int *)(param_1 + 0xa0) == 1) {
    func_0x00010b580c70(*(undefined8 *)(param_1 + 0x80));
    func_0x00010b580c10();
  }
  if (*(int *)(param_1 + 0xa4) == 0x11) {
    func_0x00010b580c78(*(undefined8 *)(param_1 + 0x88));
    func_0x00010b580c64();
  }
  else if (*(int *)(param_1 + 0xa4) == 4) {
    func_0x00010b580c70(*(undefined8 *)(param_1 + 0x88));
    func_0x00010b580c10();
  }
  if (*(int *)(param_1 + 0xa8) == 0x12) {
    func_0x00010b580c78(*(undefined8 *)(param_1 + 0x90));
    func_0x00010b580c64();
  }
  else if (*(int *)(param_1 + 0xa8) == 9) {
    func_0x00010b580c70(*(undefined8 *)(param_1 + 0x90));
    func_0x00010b580c10();
  }
  if (*(int *)(param_1 + 0xac) == 0x13) {
    func_0x00010b580c78(*(undefined8 *)(param_1 + 0x98));
    func_0x00010b580c64();
  }
  else if (*(int *)(param_1 + 0xac) == 0xb) {
    func_0x00010b580c70(*(undefined8 *)(param_1 + 0x98));
    func_0x00010b580c10();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b580728; end: 10b580753;  */

long FUN_10b580728(long param_1)

{
  func_0x00010b5cc0c8();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b580754; end: 10b580757;  */

void FUN_10b580754(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  lVar5 = param_2;
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x18));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x20));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x28));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x30));
  lVar7 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x38));
  lVar7 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x40));
  lVar7 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x48));
  lVar7 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x50));
  lVar7 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x50);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x58));
  lVar7 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x60));
  lVar7 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      func_0x00010b580b9c(uVar4,*(undefined8 *)(param_2 + 0x68));
      *(ulong *)(param_1 + 0x68) = uVar4;
    }
    else {
      FUN_10b5cc1f4();
    }
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_2 + 0x78);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0xa0);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa0);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b57fe80(param_1);
      }
      *(int *)(param_1 + 0xa0) = iVar2;
    }
    if ((iVar2 == 0x10) || (iVar2 == 1)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x80) = &DAT_11383d918;
      }
      func_0x00010b580c34(*(undefined4 *)(param_2 + 0xa0));
      func_0x00010b580c80(param_1 + 0x80);
    }
  }
  iVar2 = *(int *)(param_2 + 0xa4);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa4);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        func_0x00010b57feb4(param_1);
      }
      *(int *)(param_1 + 0xa4) = iVar2;
    }
    if ((iVar2 == 0x11) || (iVar2 == 4)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x88) = &DAT_11383d918;
      }
      func_0x00010b580c34(*(undefined4 *)(param_2 + 0xa4));
      func_0x00010b580c80(param_1 + 0x88);
    }
  }
  iVar2 = *(int *)(param_2 + 0xa8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa8);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        func_0x00010b57fee8(param_1);
      }
      *(int *)(param_1 + 0xa8) = iVar2;
    }
    if ((iVar2 == 0x12) || (iVar2 == 9)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x90) = &DAT_11383d918;
      }
      func_0x00010b580c34(*(undefined4 *)(param_2 + 0xa8));
      func_0x00010b580c80(param_1 + 0x90);
    }
  }
  iVar2 = *(int *)(param_2 + 0xac);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xac);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        func_0x00010b57ff1c(param_1);
      }
      *(int *)(param_1 + 0xac) = iVar2;
    }
    if ((iVar2 == 0x13) || (iVar2 == 0xb)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x98) = &DAT_11383d918;
      }
      func_0x00010b580c34(*(undefined4 *)(param_2 + 0xac));
      func_0x00010b580c80(param_1 + 0x98);
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



/* Entry: 10b580758; end: 10b580b27;  */

void FUN_10b580758(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar4 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  lVar5 = param_2;
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x18));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x20));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x28));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x30));
  lVar7 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x38));
  lVar7 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x40));
  lVar7 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x48));
  lVar7 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x50));
  lVar7 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x50);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x58));
  lVar7 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x58);
  }
  func_0x00010b580c04(*(undefined8 *)(param_2 + 0x60));
  lVar7 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b580c28();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x68) == 0) {
      func_0x00010b580b9c(uVar4,*(undefined8 *)(param_2 + 0x68));
      *(ulong *)(param_1 + 0x68) = uVar4;
    }
    else {
      FUN_10b5cc1f4();
    }
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (*(char *)(param_2 + 0x71) == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_2 + 0x78);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0xa0);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa0);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        FUN_10b57fe80(param_1);
      }
      *(int *)(param_1 + 0xa0) = iVar2;
    }
    if ((iVar2 == 0x10) || (iVar2 == 1)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x80) = &DAT_11383d918;
      }
      func_0x00010b580c34(*(undefined4 *)(param_2 + 0xa0));
      func_0x00010b580c80(param_1 + 0x80);
    }
  }
  iVar2 = *(int *)(param_2 + 0xa4);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa4);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        func_0x00010b57feb4(param_1);
      }
      *(int *)(param_1 + 0xa4) = iVar2;
    }
    if ((iVar2 == 0x11) || (iVar2 == 4)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x88) = &DAT_11383d918;
      }
      func_0x00010b580c34(*(undefined4 *)(param_2 + 0xa4));
      func_0x00010b580c80(param_1 + 0x88);
    }
  }
  iVar2 = *(int *)(param_2 + 0xa8);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xa8);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        func_0x00010b57fee8(param_1);
      }
      *(int *)(param_1 + 0xa8) = iVar2;
    }
    if ((iVar2 == 0x12) || (iVar2 == 9)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x90) = &DAT_11383d918;
      }
      func_0x00010b580c34(*(undefined4 *)(param_2 + 0xa8));
      func_0x00010b580c80(param_1 + 0x90);
    }
  }
  iVar2 = *(int *)(param_2 + 0xac);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0xac);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        func_0x00010b57ff1c(param_1);
      }
      *(int *)(param_1 + 0xac) = iVar2;
    }
    if ((iVar2 == 0x13) || (iVar2 == 0xb)) {
      if (iVar3 != iVar2) {
        *(undefined **)(param_1 + 0x98) = &DAT_11383d918;
      }
      func_0x00010b580c34(*(undefined4 *)(param_2 + 0xac));
      func_0x00010b580c80(param_1 + 0x98);
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



/* Entry: 10b580b28; end: 10b580b2f;  */

void FUN_10b580b28(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xb0;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0xb0);
  }
  *puVar1 = &PTR_FUN_110d0dbe0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  puVar1[9] = &DAT_11383d918;
  puVar1[10] = &DAT_11383d918;
  puVar1[0xb] = &DAT_11383d918;
  puVar1[0xc] = &DAT_11383d918;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0xd] = 0;
  return;
}



/* Entry: 10b580b30; end: 10b580bdf;  */

void FUN_10b580b30(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xb0;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0xb0);
  }
  *puVar1 = &PTR_FUN_110d0dbe0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  puVar1[9] = &DAT_11383d918;
  puVar1[10] = &DAT_11383d918;
  puVar1[0xb] = &DAT_11383d918;
  puVar1[0xc] = &DAT_11383d918;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0xd] = 0;
  return;
}



/* Entry: 10b580be0; end: 10b580cbf;  */

long * FUN_10b580be0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  uint extraout_w10;
  uint uVar6;
  uint extraout_w10_00;
  long lVar7;
  long *unaff_x21;
  int iVar8;
  undefined8 *unaff_x22;
  int iVar9;
  long lVar10;
  
  lVar7 = (long)*(char *)((long)unaff_x22 + 0x17);
  if ((-1 < lVar7) || (lVar7 = unaff_x22[1], lVar7 < 0x80)) {
    lVar10 = *param_1;
    uVar6 = (int)param_2 << 3;
    uVar2 = uVar6;
    func_0x0001001a5b20();
    if (lVar7 <= lVar10 + ~((long)unaff_x21 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x21 + 2;
      for (uVar6 = uVar6 | 2; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
        *(byte *)(lVar10 + -2) = (byte)uVar6 | 0x80;
        lVar10 = lVar10 + 1;
      }
      *(byte *)(lVar10 + -2) = (byte)uVar6;
      *(char *)(lVar10 + -1) = (char)lVar7;
      puVar1 = (undefined8 *)*unaff_x22;
      if (-1 < *(char *)((long)unaff_x22 + 0x17)) {
        puVar1 = unaff_x22;
      }
      func_0x000107c610b4(lVar10,puVar1,lVar7);
      return (long *)(lVar10 + lVar7);
    }
  }
  func_0x00010b4d564c(param_1,param_2);
  func_0x00010b4d56cc();
  uVar6 = extraout_w10;
  while (0x7f < uVar6) {
    func_0x00010b4d576c();
    uVar6 = extraout_w10_00;
  }
  func_0x00010b4d56b4();
  uVar5 = extraout_x8;
  while (0x7f < (uint)uVar5) {
    func_0x00010b4d5758();
    uVar5 = extraout_x8_00;
  }
  func_0x00010b4d5660();
  iVar8 = (int)unaff_x22;
  if ((*(char *)((long)param_1 + 0x39) == '\x01') &&
     ((*param_1 - (long)unaff_x21) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x21);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x21 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x21) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x21 + (long)iVar9;
      unaff_x21 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar8);
  }
  _memcpy(unaff_x21);
  return (long *)((long)unaff_x21 + (long)iVar8);
}



/* Entry: 10b580cc0; end: 10b580ceb;  */

undefined8 FUN_10b580cc0(undefined8 param_1)

{
  func_0x00010b5832f4();
  FUN_10b580cec(param_1);
  return param_1;
}



/* Entry: 10b580cec; end: 10b580d13;  */

undefined8 FUN_10b580cec(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x00010006804c(param_1 + 0x10);
  if (!(bool)in_ZR) {
    func_0x000105992fbc(unaff_x19,0x300380020);
  }
  return unaff_x19;
}



/* Entry: 10b580d14; end: 10b580d17;  */

undefined8 FUN_10b580d14(undefined8 param_1)

{
  func_0x00010b5832f4();
  FUN_10b580cec(param_1);
  return param_1;
}



/* Entry: 10b580d18; end: 10b580d2b;  */

void FUN_10b580d18(void)

{
  FUN_10b580cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b580d2c; end: 10b580d37;  */

undefined ** FUN_10b580d2c(void)

{
  return &PTR_DAT_110d0df08;
}



/* Entry: 10b580d38; end: 10b580d6f;  */

void FUN_10b580d38(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5834e4();
  func_0x000107c3025c(unaff_x19 + 0x30);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 10b580d70; end: 10b580f37;  */

long * FUN_10b580d70(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long lStack_68;
  long *plStack_60;
  
  uVar3 = param_1[6] & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  plVar2 = param_1;
  if (lVar4 != 0) {
    plVar2 = param_3;
    func_0x00010b583494(param_3,1);
    param_2 = plVar2;
  }
  if ((int)param_1[2] != 0) {
    if (((int)param_1[2] == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b5833a0();
      plVar1 = plVar2;
      while (plVar2 = plVar1, lStack_68 != 0) {
        uVar3 = lStack_68 + 0x20;
        func_0x00010b5833d4();
        plVar1 = plVar2;
        func_0x00010b583240();
        func_0x00010b5833a8();
        param_2 = plVar2;
      }
    }
    else {
      plVar1 = &lStack_68;
      func_0x000105991b98(plVar1);
      for (lStack_68 = lStack_68 << 3; plVar2 = plVar1, lStack_68 != 0; lStack_68 = lStack_68 + -8)
      {
        uVar3 = *plStack_60 + 0x18;
        func_0x00010b5833d4();
        plVar1 = plVar2;
        func_0x00010b583240();
        plStack_60 = plStack_60 + 1;
        param_2 = plVar2;
      }
      func_0x00010b583440();
    }
  }
  plVar1 = plVar2;
  if ((char)param_1[7] == '\x01') {
    func_0x00010b583274();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b5832a8();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x39) == '\x01') {
    func_0x00010b583274();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b5832a8();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x3c) != 0) {
    func_0x00010b583274();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b5834c0();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b5833c0();
    if ((long)uVar3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar4);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b580f38; end: 10b580fe3;  */

void FUN_10b580f38(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010b583280();
  while (uStack_38 != 0) {
    param_1 = uStack_38 + 8;
    func_0x0001098da004(param_1,uStack_38 + 0x20);
    unaff_x20 = param_1 + unaff_x20;
    func_0x00010b5833a8();
  }
  func_0x00010b583314(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010b583370();
  }
  iVar1 = (int)unaff_x20 + (uint)*(byte *)(unaff_x19 + 0x38) * 2 +
          (uint)*(byte *)(unaff_x19 + 0x39) * 2;
  if (*(int *)(unaff_x19 + 0x3c) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x3c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5833f4();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x40) = iVar1;
  return;
}



/* Entry: 10b580fe4; end: 10b580fe7;  */

void FUN_10b580fe4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b583344();
  func_0x0001059929d4();
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x39) = 1;
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x19 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5833b0();
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



/* Entry: 10b580fe8; end: 10b58106b;  */

void FUN_10b580fe8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b583344();
  func_0x0001059929d4();
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x39) = 1;
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x19 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5833b0();
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



/* Entry: 10b58106c; end: 10b5810a3;  */

void FUN_10b58106c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d0dd88;
  param_1[1] = param_2;
  param_1[3] = 0x100000000;
  param_1[2] = 0x100000000;
  param_1[4] = &DAT_10e5b4a18;
  param_1[5] = param_2;
  param_1[6] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}



/* Entry: 10b5810a4; end: 10b5810d7;  */

long FUN_10b5810a4(long param_1)

{
  func_0x00010b5832f4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5810d8; end: 10b5810db;  */

long FUN_10b5810d8(long param_1)

{
  func_0x00010b5832f4();
  func_0x000107c30258(param_1 + 0x30);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5810dc; end: 10b5810ef;  */

void FUN_10b5810dc(void)

{
  FUN_10b5810a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5810f0; end: 10b5810fb;  */

undefined ** FUN_10b5810f0(void)

{
  return &PTR_DAT_110d0df58;
}



/* Entry: 10b5810fc; end: 10b58112f;  */

void FUN_10b5810fc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5834e4();
  func_0x000107c3025c(unaff_x19 + 0x30);
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



/* Entry: 10b581130; end: 10b5812bf;  */

long * FUN_10b581130(long *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  long *plVar5;
  long lVar6;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  func_0x00010b5833e8();
  if ((int)param_1[2] != 0) {
    if (((int)param_1[2] == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b5833a0();
      while (plVar5 = param_1, lVar6 = lStack_78, lStack_78 != 0) {
        param_1 = (long *)(lStack_78 + 8);
        func_0x00010b583358();
        lVar3 = (long)*(char *)(lVar6 + 0x1f);
        if (lVar3 < 0) {
          param_1 = *(long **)(lVar6 + 8);
          lVar3 = *(long *)(lVar6 + 0x10);
        }
        func_0x00010b58325c(param_1,lVar3);
        func_0x00010b583240();
        func_0x00010b5833a8();
        unaff_x20 = plVar5;
      }
    }
    else {
      plVar5 = &lStack_78;
      func_0x000105991b98(plVar5);
      puVar1 = apuStack_70[0];
      for (lVar6 = lStack_78 << 3; plVar2 = plVar5, lVar6 != 0; lVar6 = lVar6 + -8) {
        plVar5 = (long *)*puVar1;
        func_0x00010b583358();
        lVar3 = (long)*(char *)((long)plVar5 + 0x17);
        if (lVar3 < 0) {
          lVar3 = plVar5[1];
          plVar5 = (long *)*plVar5;
        }
        func_0x00010b58325c(plVar5,lVar3);
        func_0x00010b583240();
        puVar1 = puVar1 + 1;
        unaff_x20 = plVar2;
      }
      func_0x000105991ac8(apuStack_70);
    }
  }
  uVar4 = *(ulong *)(unaff_x21 + 0x30) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  plVar5 = unaff_x20;
  if (lVar6 != 0) {
    plVar5 = param_3;
    func_0x000107c280a0(param_3,2,uVar4,unaff_x20);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b5833c0();
    if ((long)uVar4 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar6);
    plVar5 = param_3;
  }
  return plVar5;
}



/* Entry: 10b5812c0; end: 10b58133b;  */

long FUN_10b5812c0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x00010b583280();
  while (uStack_38 != 0) {
    param_1 = uStack_38 + 8;
    func_0x000105990b3c(param_1,uStack_38 + 0x20);
    unaff_x20 = param_1 + unaff_x20;
    func_0x00010b5833a8();
  }
  func_0x00010b583314(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x00010b583370();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5833f4();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x38) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b58133c; end: 10b58133f;  */

void FUN_10b58133c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b583344();
  func_0x0001059929d4();
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5833b0();
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



/* Entry: 10b581340; end: 10b581397;  */

void FUN_10b581340(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b583344();
  func_0x0001059929d4();
  func_0x00010b583308(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5832fc();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5833b0();
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



/* Entry: 10b581398; end: 10b5813c3;  */

long FUN_10b581398(long param_1)

{
  func_0x00010b5832f4();
  FUN_10b582b50(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5813c4; end: 10b5813c7;  */

long FUN_10b5813c4(long param_1)

{
  func_0x00010b5832f4();
  FUN_10b582b50(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5813c8; end: 10b5813db;  */

void FUN_10b5813c8(void)

{
  FUN_10b581398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5813dc; end: 10b5813f7;  */

undefined ** FUN_10b5813dc(void)

{
  return &PTR_DAT_110d0dfa8;
}



/* Entry: 10b5813f8; end: 10b581447;  */

void FUN_10b5813f8(long param_1)

{
  ulong *puVar1;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    func_0x000107c30320(param_1 + 0x10,0x10500600020,0);
  }
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



/* Entry: 10b581448; end: 10b5815b7;  */

long * FUN_10b581448(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x21;
  ulong uVar7;
  long alStack_68 [3];
  
  plVar5 = param_3;
  func_0x00010b583508();
  uVar1 = *(uint *)(param_1 + 2);
  uVar6 = (ulong)uVar1;
  if (uVar1 != 0) {
    if ((uVar1 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b58349c();
      while (plVar2 = param_1, alStack_68[0] != 0) {
        func_0x00010b583448();
        func_0x00010b583240();
        param_1 = alStack_68;
        func_0x000107c27d54(param_1);
        unaff_x19 = plVar2;
      }
    }
    else {
      plVar2 = (long *)(uVar6 << 3);
      __Znam();
      func_0x00010b58349c();
      plVar3 = plVar2;
      while (alStack_68[0] != 0) {
        *plVar3 = alStack_68[0] + 8;
        func_0x000107c27d54(alStack_68);
        plVar3 = plVar3 + 1;
      }
      func_0x000105991c2c(plVar2,plVar2 + uVar6);
      uVar7 = uVar6 << 3;
      while (plVar3 = plVar2, uVar6 != 0) {
        func_0x00010b583448();
        plVar2 = plVar3;
        func_0x00010b583240();
        uVar7 = uVar7 - 8;
        unaff_x19 = plVar3;
        uVar6 = uVar7;
      }
      func_0x00010b583440();
    }
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010b5833c0();
    if ((long)plVar5 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar4);
    unaff_x19 = param_3;
  }
  return unaff_x19;
}



/* Entry: 10b5815b8; end: 10b58165f;  */

void FUN_10b5815b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  int unaff_w21;
  
  uVar2 = param_4;
  func_0x00010b5833e8();
  func_0x000107c28094(uVar2,param_3);
  uVar3 = 10;
  func_0x000107c280a8(10,uVar2);
  func_0x000107c282a0();
  func_0x000107c280a8(unaff_w21 + (int)unaff_x20[7] +
                      ((int)LZCOUNT((int)unaff_x20[7]) * -9 + 0x160U >> 6) + 2,uVar3);
  uVar3 = 1;
  func_0x0001059928f0(1);
  uVar2 = param_4;
  func_0x000107c28094(param_4,uVar3);
  lVar1 = unaff_x20[7];
  func_0x0001001a597c(param_4,uVar2);
  uVar2 = 0x12;
  func_0x0001001a59d0(0x12,param_4);
  func_0x0001001a59d0((int)lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x38))();
  return;
}



/* Entry: 10b581660; end: 10b58170f;  */

long FUN_10b581660(void)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_58;
  
  func_0x00010b583280();
  while (uStack_58 != 0) {
    iVar1 = (int)uStack_58 + 8;
    func_0x000107c282a0();
    lVar2 = uStack_58 + 0x20;
    FUN_10b5812c0();
    lVar2 = lVar2 + (iVar1 + 2) + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
    unaff_x20 = lVar2 + unaff_x20 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6);
    func_0x00010b5833a8();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5833f4();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar2 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b581710; end: 10b581713;  */

void FUN_10b581710(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b583344();
  FUN_10b582e78();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5833b0();
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



/* Entry: 10b581714; end: 10b581743;  */

void FUN_10b581714(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010b583344();
  FUN_10b582e78();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5833b0();
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



/* Entry: 10b581744; end: 10b581787;  */

long FUN_10b581744(long param_1)

{
  func_0x00010b5832f4();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  return param_1;
}



/* Entry: 10b581788; end: 10b58178b;  */

long FUN_10b581788(long param_1)

{
  func_0x00010b5832f4();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  return param_1;
}



/* Entry: 10b58178c; end: 10b58179f;  */

void FUN_10b58178c(void)

{
  FUN_10b581744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5817a0; end: 10b5817ab;  */

undefined ** FUN_10b5817a0(void)

{
  return &PTR_DAT_110d0dff8;
}



/* Entry: 10b5817ac; end: 10b5817fb;  */

void FUN_10b5817ac(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b5817fc; end: 10b58195f;  */

long * FUN_10b5817fc(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  long *plVar3;
  int iVar4;
  
  plVar3 = param_3;
  func_0x00010b5833e8();
  func_0x00010b583394(param_1[2]);
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b581838;
  }
  else if ((int)param_2 != 0) {
LAB_10b581838:
    func_0x00010b5832ec();
    param_2 = 1;
    param_1 = param_3;
    func_0x00010b583268();
    unaff_x20 = param_1;
  }
  func_0x00010b583394(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b581878;
  }
  else if ((int)param_2 != 0) {
LAB_10b581878:
    func_0x00010b5832ec();
    param_2 = 2;
    param_1 = param_3;
    func_0x00010b583268();
    unaff_x20 = param_1;
  }
  func_0x00010b583394(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5818b8;
  }
  else if ((int)param_2 != 0) {
LAB_10b5818b8:
    func_0x00010b5832ec();
    param_2 = 3;
    param_1 = param_3;
    func_0x00010b583268();
    unaff_x20 = param_1;
  }
  func_0x00010b583394(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b581914;
  }
  else if ((int)param_2 == 0) goto LAB_10b581914;
  func_0x00010b5832ec();
  param_1 = param_3;
  func_0x00010b583268(param_3,4);
  unaff_x20 = param_1;
LAB_10b581914:
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    func_0x00010b583488();
    func_0x000107c282c4();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b5833c0();
  if ((long)plVar3 < 0) {
    lVar1 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar1 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar3) {
    while( true ) {
      iVar4 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar2 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar2 - iVar4);
      if (iVar2 - iVar4 == 0 || iVar2 < iVar4) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x20 + (long)iVar4;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar2);
  }
  _memcpy(unaff_x20,lVar1,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar3);
}



/* Entry: 10b581960; end: 10b581b13;  */

long FUN_10b581960(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b583314(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x00010b583314(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b583370();
  }
  func_0x00010b583314(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b583370();
  }
  func_0x00010b583314(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b583370();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5833f4();
    lVar2 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x38) = (int)lVar3;
  return lVar3;
}


