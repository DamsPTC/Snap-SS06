/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b510f58; end: 10b510f5f;  */

void FUN_10b510f58(void)

{
  return;
}



/* Entry: 10b510f60; end: 10b510fc7;  */

undefined8 * FUN_10b510f60(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf8c88;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b510fc8; end: 10b510ffb;  */

long FUN_10b510fc8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b510ffc; end: 10b510fff;  */

long FUN_10b510ffc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b511000; end: 10b511013;  */

void FUN_10b511000(void)

{
  FUN_10b510fc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b511014; end: 10b51101f;  */

undefined ** FUN_10b511014(void)

{
  return &PTR_DAT_110cf8cc8;
}



/* Entry: 10b511020; end: 10b51105b;  */

void FUN_10b511020(long param_1)

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



/* Entry: 10b51105c; end: 10b5111bf;  */

long * FUN_10b51105c(long param_1,long *param_2,long *param_3)

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
    func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f7766e6);
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



/* Entry: 10b5111c0; end: 10b511253;  */

ulong FUN_10b5111c0(long param_1)

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



/* Entry: 10b511254; end: 10b511257;  */

void FUN_10b511254(long param_1,long param_2)

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



/* Entry: 10b511258; end: 10b5112a3;  */

void FUN_10b511258(long param_1,long param_2)

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



/* Entry: 10b5112a4; end: 10b5112ab;  */

void FUN_10b5112a4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf8c88;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b5112ac; end: 10b5112fb;  */

void FUN_10b5112ac(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8c88;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b5112fc; end: 10b511363;  */

undefined8 * FUN_10b5112fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf8d38;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b511364; end: 10b511397;  */

long FUN_10b511364(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b511398; end: 10b51139b;  */

long FUN_10b511398(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51139c; end: 10b5113af;  */

void FUN_10b51139c(void)

{
  FUN_10b511364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5113b0; end: 10b5113bb;  */

undefined ** FUN_10b5113b0(void)

{
  return &PTR_DAT_110cf8d78;
}



/* Entry: 10b5113bc; end: 10b5113f7;  */

void FUN_10b5113bc(long param_1)

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



/* Entry: 10b5113f8; end: 10b51155b;  */

long * FUN_10b5113f8(long param_1,long *param_2,long *param_3)

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
    func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f77671e);
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



/* Entry: 10b51155c; end: 10b5115ef;  */

ulong FUN_10b51155c(long param_1)

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



/* Entry: 10b5115f0; end: 10b5115f3;  */

void FUN_10b5115f0(long param_1,long param_2)

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



/* Entry: 10b5115f4; end: 10b51163f;  */

void FUN_10b5115f4(long param_1,long param_2)

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



/* Entry: 10b511640; end: 10b511647;  */

void FUN_10b511640(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf8d38;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b511648; end: 10b511697;  */

void FUN_10b511648(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8d38;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b511698; end: 10b5116f7;  */

undefined8 * FUN_10b511698(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf8de8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b5116f8; end: 10b511727;  */

long FUN_10b5116f8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b511728; end: 10b51172b;  */

long FUN_10b511728(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51172c; end: 10b51173f;  */

void FUN_10b51172c(void)

{
  FUN_10b5116f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b511740; end: 10b51174b;  */

undefined ** FUN_10b511740(void)

{
  return &PTR_DAT_110cf8e28;
}



/* Entry: 10b51174c; end: 10b511787;  */

void FUN_10b51174c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
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



/* Entry: 10b511788; end: 10b511837;  */

long * FUN_10b511788(long param_1,long *param_2,long *param_3)

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
    if (lVar3 == 0) goto LAB_10b5117f4;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b5117f4;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77674a);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b5117f4:
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



/* Entry: 10b511838; end: 10b51189f;  */

void FUN_10b511838(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b511870;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b511870:
    iVar1 = 0;
    goto LAB_10b511874;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b511874:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5118a0; end: 10b5118a3;  */

void FUN_10b5118a0(long param_1,long param_2)

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



/* Entry: 10b5118a4; end: 10b511913;  */

void FUN_10b5118a4(long param_1,long param_2)

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



/* Entry: 10b511914; end: 10b51191b;  */

void FUN_10b511914(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf8de8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b51191c; end: 10b51196b;  */

void FUN_10b51191c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8de8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b51196c; end: 10b51197f;  */

void FUN_10b51196c(void)

{
  return;
}



/* Entry: 10b511980; end: 10b5119df;  */

undefined8 * FUN_10b511980(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf8e90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b5119e0; end: 10b511a0f;  */

long FUN_10b5119e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b511a10; end: 10b511a13;  */

long FUN_10b511a10(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b511a14; end: 10b511a27;  */

void FUN_10b511a14(void)

{
  FUN_10b5119e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b511a28; end: 10b511a33;  */

undefined ** FUN_10b511a28(void)

{
  return &PTR_DAT_110cf8ed0;
}



/* Entry: 10b511a34; end: 10b511a6f;  */

void FUN_10b511a34(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
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



/* Entry: 10b511a70; end: 10b511b1f;  */

long * FUN_10b511a70(long param_1,long *param_2,long *param_3)

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
    if (lVar3 == 0) goto LAB_10b511adc;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b511adc;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77676e);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b511adc:
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



/* Entry: 10b511b20; end: 10b511b87;  */

void FUN_10b511b20(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b511b58;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b511b58:
    iVar1 = 0;
    goto LAB_10b511b5c;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b511b5c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 10b511b88; end: 10b511b8b;  */

void FUN_10b511b88(long param_1,long param_2)

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



/* Entry: 10b511b8c; end: 10b511bfb;  */

void FUN_10b511b8c(long param_1,long param_2)

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



/* Entry: 10b511bfc; end: 10b511c03;  */

void FUN_10b511bfc(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf8e90;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b511c04; end: 10b511c53;  */

void FUN_10b511c04(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8e90;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b511c54; end: 10b511c67;  */

void FUN_10b511c54(void)

{
  return;
}



/* Entry: 10b511c68; end: 10b511cdf;  */

undefined8 * FUN_10b511c68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf8f38;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 10b511ce0; end: 10b511d13;  */

long FUN_10b511ce0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b511d14(param_1);
  return param_1;
}



/* Entry: 10b511d14; end: 10b511d3b;  */

/* WARNING: Possible PIC construction at 0x00010b511d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b511d2c) */

void FUN_10b511d14(long param_1)

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



/* Entry: 10b511d3c; end: 10b511d3f;  */

long FUN_10b511d3c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b511d14(param_1);
  return param_1;
}



/* Entry: 10b511d40; end: 10b511d53;  */

void FUN_10b511d40(void)

{
  FUN_10b511ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b511d54; end: 10b511d5f;  */

undefined ** FUN_10b511d54(void)

{
  return &PTR_DAT_110cf8f78;
}



/* Entry: 10b511d60; end: 10b511da7;  */

void FUN_10b511d60(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b511da8; end: 10b511ef3;  */

long * FUN_10b511da8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  plVar6 = param_1;
  if ((char)param_1[4] == '\x01') {
    plVar1 = param_1;
    func_0x00010b5120ec();
    plVar6 = (long *)(ulong)*(byte *)(param_1 + 4);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8(plVar6,uVar2);
    param_2 = plVar6;
  }
  puVar8 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_10b511e1c;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10b511e1c:
    func_0x000107c303d4(puVar8,lVar3,1,&UNK_10f77679e);
    plVar6 = param_3;
    func_0x00010b5120f8(param_3,2);
    param_2 = plVar6;
  }
  puVar8 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar8[1];
    if (lVar3 == 0) goto LAB_10b511e84;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b511e84;
  func_0x000107c303d4(puVar8,lVar3,1,&UNK_10f7767cc);
  plVar6 = param_3;
  func_0x00010b5120f8(param_3,3);
  param_2 = plVar6;
LAB_10b511e84:
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b5120ec();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x24);
    uVar2 = 0x20;
    func_0x000107c280a8(0x20,plVar6);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
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
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar9;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b511ef4; end: 10b511faf;  */

void FUN_10b511ef4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b511f2c;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b511f2c:
    iVar1 = 0;
    goto LAB_10b511f30;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b511f30:
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    iVar1 = iVar1 + (int)uVar2 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x28) = iVar1;
  return;
}



/* Entry: 10b511fb0; end: 10b511fb3;  */

void FUN_10b511fb0(long param_1,long param_2)

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
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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



/* Entry: 10b511fb4; end: 10b5120a7;  */

void FUN_10b511fb4(long param_1,long param_2)

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
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar1,uVar2);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
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



/* Entry: 10b5120a8; end: 10b51214b;  */

undefined1  [16] FUN_10b5120a8(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x20);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x20); puVar2 != (undefined1 *)(param_1 + 0x28);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar7;
}



/* Entry: 10b51214c; end: 10b512173;  */

long FUN_10b51214c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b512174; end: 10b512177;  */

long FUN_10b512174(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b512178; end: 10b51218b;  */

void FUN_10b512178(void)

{
  FUN_10b51214c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51218c; end: 10b5121af;  */

undefined ** FUN_10b51218c(void)

{
  return &PTR_DAT_110cf9070;
}



/* Entry: 10b5121b0; end: 10b51226f;  */

long * FUN_10b5121b0(undefined4 *param_1,long *param_2,long *param_3)

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
    FUN_10b512750();
    uVar1 = param_1[4];
    puVar2 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,puVar3);
    param_2 = (long *)(puVar2 + 1);
    *puVar2 = uVar1;
  }
  puVar3 = puVar2;
  if (param_1[5] != 0) {
    FUN_10b512750();
    uVar1 = param_1[5];
    puVar3 = (undefined4 *)0x15;
    func_0x000107c280a8(0x15,puVar2);
    param_2 = (long *)(puVar3 + 1);
    *puVar3 = uVar1;
  }
  if (param_1[6] != 0) {
    FUN_10b512750();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,puVar3);
    func_0x00010b51277c();
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



/* Entry: 10b512270; end: 10b5122df;  */

long FUN_10b512270(long param_1)

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
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
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



/* Entry: 10b5122e0; end: 10b512337;  */

void FUN_10b5122e0(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b51214c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b512338; end: 10b512367;  */

long FUN_10b512338(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b512368(param_1);
  return param_1;
}



/* Entry: 10b512368; end: 10b51237b;  */

void FUN_10b512368(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10b51214c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b51237c; end: 10b51238f;  */

void FUN_10b51237c(void)

{
  FUN_10b512338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b512390; end: 10b51239b;  */

undefined ** FUN_10b512390(void)

{
  return &PTR_DAT_110cf90d0;
}



/* Entry: 10b51239c; end: 10b5123d7;  */

void FUN_10b51239c(long param_1)

{
  ulong *puVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_10b5122e0();
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



/* Entry: 10b5123d8; end: 10b512477;  */

long * FUN_10b5123d8(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    lVar1 = param_1;
    FUN_10b512750();
    param_2 = (long *)0x8;
    func_0x000107c280a8(8,lVar1);
    func_0x00010b51277c();
  }
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x24) == 2) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x1c),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar1 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar1 = uVar4 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar1 = (long)plVar2 + (long)iVar6;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar5);
    }
    _memcpy(plVar2,lVar1,uVar3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar3);
  }
  return plVar2;
}



/* Entry: 10b512478; end: 10b5124f3;  */

long FUN_10b512478(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x24) == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_10b512270();
    lVar3 = lVar1 + lVar3 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5124f4; end: 10b5124f7;  */

void FUN_10b5124f4(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24) == iVar1) {
      if (iVar1 == 2) {
        func_0x00010b512104(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
      }
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_10b5122e0(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar1 == 2) {
        FUN_10b5126e0(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
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



/* Entry: 10b5124f8; end: 10b5125c7;  */

void FUN_10b5124f8(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24) == iVar1) {
      if (iVar1 == 2) {
        func_0x00010b512104(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
      }
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_10b5122e0(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar1 == 2) {
        FUN_10b5126e0(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
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



/* Entry: 10b5125c8; end: 10b5125ff;  */

void FUN_10b5125c8(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b51239c();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x24) == iVar1) {
      if (iVar1 == 2) {
        func_0x00010b512104(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
      }
    }
    else {
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_10b5122e0(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar1;
      if (iVar1 == 2) {
        FUN_10b5126e0(uVar2,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
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



/* Entry: 10b512600; end: 10b512653;  */

void FUN_10b512600(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar3;
  uVar2 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_2 + 0x10) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x24) = uVar1;
  return;
}



/* Entry: 10b512654; end: 10b5126df;  */

void FUN_10b512654(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8fe0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5126e0; end: 10b51274f;  */

undefined8 * FUN_10b5126e0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf8fe0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x00010b512104();
  return puVar1;
}



/* Entry: 10b512750; end: 10b512797;  */

ulong * FUN_10b512750(void)

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



/* Entry: 10b512798; end: 10b5127d3;  */

void FUN_10b512798(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
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



/* Entry: 10b5127d4; end: 10b5128a3;  */

long * FUN_10b5127d4(long param_1,long *param_2,long *param_3)

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
    if (lVar3 == 0) goto LAB_10b512840;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b512840;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f7767f4);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b512840:
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
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
  if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)plVar2 + (long)iVar8;
      plVar2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar6);
  }
  _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)uVar4);
}



/* Entry: 10b5128a4; end: 10b5129a3;  */

void FUN_10b5128a4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b5128dc;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b5128dc:
    iVar1 = 0;
    goto LAB_10b5128e0;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b5128e0:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b5129a4; end: 10b5129a7;  */

long FUN_10b5129a4(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100a17d74(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5129a8; end: 10b5129bb;  */

void FUN_10b5129a8(void)

{
  func_0x000107c30444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5129bc; end: 10b512c17;  */

byte * FUN_10b5129bc(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  ulong *puVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  
  pbVar3 = param_1;
  if (*(int *)(param_1 + 0x40) != 0) {
    pbVar3 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x40),param_2);
    param_2 = pbVar3;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    pbVar3 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x44),param_2);
    param_2 = pbVar3;
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar8) {
    func_0x00010b512d24();
    pbVar5 = pbVar3 + 2;
    *pbVar3 = 0x1a;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      pbVar5[-1] = (byte)uVar8 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    pbVar5[-1] = (byte)uVar8;
    piVar9 = *(int **)(param_1 + 0x18);
    piVar1 = piVar9 + *(int *)(param_1 + 0x10);
    do {
      func_0x00010b512d24();
      uVar6 = (ulong)*piVar9;
      pbVar5 = pbVar3;
      while( true ) {
        param_2 = pbVar5 + 1;
        if (uVar6 < 0x80) break;
        *pbVar5 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        pbVar5 = param_2;
      }
      piVar9 = piVar9 + 1;
      *pbVar5 = (byte)uVar6;
    } while (piVar9 < piVar1);
  }
  iVar11 = *(int *)(param_1 + 0x30);
  for (iVar10 = 0; iVar11 != iVar10; iVar10 = iVar10 + 1) {
    uVar6 = *(ulong *)(param_1 + 0x28);
    puVar2 = (ulong *)(param_1 + 0x28);
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + (long)iVar10 * 8 + 7);
    }
    pbVar3 = (byte *)0x4;
    func_0x000107c303cc(4,*puVar2,*(undefined4 *)(*puVar2 + 0x1c),param_2,param_3);
    param_2 = pbVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar4 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar4 = uVar7 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar11 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar10 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar10 - iVar11);
        if (iVar10 - iVar11 == 0 || iVar10 < iVar11) break;
        func_0x00010b4d5738();
        pbVar3 = param_2 + iVar11;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar3);
      }
      func_0x00010b4d5738();
      return param_2 + iVar10;
    }
    _memcpy(param_2,lVar4,uVar6 & 0xffffffff);
    return param_2 + (int)uVar6;
  }
  return param_2;
}



/* Entry: 10b512c18; end: 10b512c1b;  */

void FUN_10b512c18(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  FUN_10b512c88(param_1 + 0x28,param_2 + 0x28);
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
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



/* Entry: 10b512c1c; end: 10b512c87;  */

void FUN_10b512c1c(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  FUN_10b512c88(param_1 + 0x28,param_2 + 0x28);
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
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



/* Entry: 10b512c88; end: 10b512c97;  */

void FUN_10b512c88(long *param_1,long param_2)

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



/* Entry: 10b512c98; end: 10b512ccf;  */

void FUN_10b512c98(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c30448();
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  FUN_10b512c88(param_1 + 0x28,param_2 + 0x28);
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
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



/* Entry: 10b512cd0; end: 10b512cd7;  */

void FUN_10b512cd0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x50);
  }
  *puVar1 = &PTR_FUN_110cf91b8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[7] = param_2;
  puVar1[8] = 0;
  return;
}



/* Entry: 10b512cd8; end: 10b512d13;  */

void FUN_10b512cd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  *puVar1 = &PTR_FUN_110cf91b8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[7] = param_1;
  puVar1[8] = 0;
  return;
}



/* Entry: 10b512d14; end: 10b512d2f;  */

void FUN_10b512d14(void)

{
  return;
}



/* Entry: 10b512d30; end: 10b512d5b;  */

long FUN_10b512d30(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b512d5c; end: 10b512d5f;  */

long FUN_10b512d5c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b512d60; end: 10b512d73;  */

void FUN_10b512d60(void)

{
  FUN_10b512d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


