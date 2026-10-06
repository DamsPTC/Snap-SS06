/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b57bf60; end: 10b57bfaf;  */

void FUN_10b57bf60(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b578dec(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10b57bfb0; end: 10b57c0bf;  */

long * FUN_10b57bfb0(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x28);
    uVar1 = 8;
    func_0x000107c280a8(8,plVar3);
    func_0x000107c280b8(param_2,uVar1);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b57c050;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b57c050;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f77c0a1);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,param_2);
  param_2 = plVar3;
LAB_10b57c050:
  plVar3 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar3 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar3;
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
  if (*param_3 - (long)plVar3 < (long)(int)uVar5) {
    while( true ) {
      iVar9 = ((int)*param_3 - (int)plVar3) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar3 + (long)iVar9;
      plVar3 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar3 + (long)iVar7);
  }
  _memcpy(plVar3,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)plVar3 + (long)(int)uVar5);
}



/* Entry: 10b57c0c0; end: 10b57c167;  */

long FUN_10b57c0c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b57c0f8;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b57c0f8:
    lVar3 = 0;
    goto LAB_10b57c0fc;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b57c0fc:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10b57c168();
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



/* Entry: 10b57c168; end: 10b57c193;  */

long FUN_10b57c168(long param_1)

{
  func_0x00010b578ea4();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b57c194; end: 10b57c25b;  */

void FUN_10b57c194(long param_1,long param_2)

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
      func_0x00010b57c320(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b578f10();
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



/* Entry: 10b57c25c; end: 10b57c26b;  */

void FUN_10b57c25c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0d260;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b57c26c; end: 10b57c363;  */

void FUN_10b57c26c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d260;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b57c364; end: 10b57c3d7;  */

ulong * FUN_10b57c364(void)

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



/* Entry: 10b57c3d8; end: 10b57c473;  */

undefined8 * FUN_10b57c3d8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0d3d8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x000107c2809c(lVar1,param_2);
  param_1[4] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 0x30);
  return param_1;
}



/* Entry: 10b57c474; end: 10b57c4a3;  */

long FUN_10b57c474(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57c4a4(param_1);
  return param_1;
}



/* Entry: 10b57c4a4; end: 10b57c4db;  */

void FUN_10b57c4a4(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57c4dc; end: 10b57c4df;  */

long FUN_10b57c4dc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57c4a4(param_1);
  return param_1;
}



/* Entry: 10b57c4e0; end: 10b57c4f3;  */

void FUN_10b57c4e0(void)

{
  FUN_10b57c474();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57c4f4; end: 10b57c4ff;  */

undefined ** FUN_10b57c4f4(void)

{
  return &PTR_DAT_110d0d418;
}



/* Entry: 10b57c500; end: 10b57c55b;  */

void FUN_10b57c500(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b57c55c; end: 10b57c6a3;  */

long * FUN_10b57c55c(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x30);
    uVar1 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280b8(param_2,uVar1);
  }
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20),param_2,param_3);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b57c5f8;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b57c5f8:
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77c0e2);
    plVar2 = param_3;
    func_0x00010b57c8f4(param_3,3);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b57c660;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b57c660;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77c127);
  plVar2 = param_3;
  func_0x00010b57c8f4(param_3,4);
LAB_10b57c660:
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



/* Entry: 10b57c6a4; end: 10b57c76f;  */

long FUN_10b57c6a4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b57c6dc;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b57c6dc:
    lVar3 = 0;
    goto LAB_10b57c6e0;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b57c6e0:
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x000108c6cd50();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 10b57c770; end: 10b57c773;  */

void FUN_10b57c770(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      func_0x00010b535e30();
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
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



/* Entry: 10b57c774; end: 10b57c883;  */

void FUN_10b57c774(long param_1,long param_2)

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
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      func_0x00010b535e30();
    }
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
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



/* Entry: 10b57c884; end: 10b57c88b;  */

void FUN_10b57c884(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110d0d3d8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b57c88c; end: 10b57c8df;  */

void FUN_10b57c88c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d3d8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b57c8e0; end: 10b57c8ff;  */

void FUN_10b57c8e0(void)

{
  return;
}



/* Entry: 10b57c900; end: 10b57c967;  */

undefined8 * FUN_10b57c900(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0d498;
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



/* Entry: 10b57c968; end: 10b57c997;  */

long FUN_10b57c968(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b57c998; end: 10b57c99b;  */

long FUN_10b57c998(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b57c99c; end: 10b57c9af;  */

void FUN_10b57c99c(void)

{
  FUN_10b57c968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57c9b0; end: 10b57c9bb;  */

undefined ** FUN_10b57c9b0(void)

{
  return &PTR_DAT_110d0d4d8;
}



/* Entry: 10b57c9bc; end: 10b57c9fb;  */

void FUN_10b57c9bc(long param_1)

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



/* Entry: 10b57c9fc; end: 10b57cadb;  */

long * FUN_10b57c9fc(long param_1,long *param_2,long *param_3)

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
    if (lVar4 == 0) goto LAB_10b57ca68;
    puVar1 = (undefined8 *)*puVar8;
  }
  else {
    puVar1 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b57ca68;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f77c16b);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar2;
LAB_10b57ca68:
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
    if (*param_3 - (long)plVar3 < (long)(int)uVar5) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar3 + (long)iVar9;
        plVar3 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar7);
    }
    _memcpy(plVar3,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)uVar5);
  }
  return plVar3;
}



/* Entry: 10b57cadc; end: 10b57cb7f;  */

void FUN_10b57cadc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b57cb14;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b57cb14:
    iVar1 = 0;
    goto LAB_10b57cb18;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b57cb18:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + iVar1;
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



/* Entry: 10b57cb80; end: 10b57cb83;  */

void FUN_10b57cb80(long param_1,long param_2)

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



/* Entry: 10b57cb84; end: 10b57cc0b;  */

void FUN_10b57cb84(long param_1,long param_2)

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



/* Entry: 10b57cc0c; end: 10b57cc13;  */

void FUN_10b57cc0c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0d498;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b57cc14; end: 10b57cc63;  */

void FUN_10b57cc14(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d498;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b57cc64; end: 10b57cc77;  */

void FUN_10b57cc64(void)

{
  return;
}



/* Entry: 10b57cc78; end: 10b57ccef;  */

undefined8 * FUN_10b57cc78(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0d558;
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
    func_0x00010b57d014(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 10b57ccf0; end: 10b57cd1f;  */

long FUN_10b57ccf0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57cd20(param_1);
  return param_1;
}



/* Entry: 10b57cd20; end: 10b57cd3b;  */

void FUN_10b57cd20(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b57c968();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57cd3c; end: 10b57cd3f;  */

long FUN_10b57cd3c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57cd20(param_1);
  return param_1;
}



/* Entry: 10b57cd40; end: 10b57cd53;  */

void FUN_10b57cd40(void)

{
  FUN_10b57ccf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57cd54; end: 10b57cd5f;  */

undefined ** FUN_10b57cd54(void)

{
  return &PTR_DAT_110d0d598;
}



/* Entry: 10b57cd60; end: 10b57cdab;  */

void FUN_10b57cd60(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b57c9bc(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10b57cdac; end: 10b57ce77;  */

long * FUN_10b57cdac(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((char)param_1[4] == '\x01') {
    plVar1 = param_1;
    func_0x00010b57d078();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b57d060();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x21) == '\x01') {
    func_0x00010b57d078();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b57d060();
  }
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x000107c303cc(3,param_1[3],*(undefined4 *)(param_1[3] + 0x20),param_2,param_3);
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



/* Entry: 10b57ce78; end: 10b57cedf;  */

void FUN_10b57ce78(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_10b57cee0();
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2 + (uint)*(byte *)(param_1 + 0x21) * 2;
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



/* Entry: 10b57cee0; end: 10b57cf0b;  */

long FUN_10b57cee0(long param_1)

{
  FUN_10b57cadc();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b57cf0c; end: 10b57cf0f;  */

void FUN_10b57cf0c(long param_1,long param_2)

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
      func_0x00010b57d014(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b57cb84(*(long *)(param_1 + 0x18));
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
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



/* Entry: 10b57cf10; end: 10b57cfc3;  */

void FUN_10b57cf10(long param_1,long param_2)

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
      func_0x00010b57d014(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_10b57cb84(*(long *)(param_1 + 0x18));
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
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



/* Entry: 10b57cfc4; end: 10b57cfcb;  */

void FUN_10b57cfc4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0d558;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b57cfcc; end: 10b57d057;  */

void FUN_10b57cfcc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d558;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b57d058; end: 10b57d083;  */

void FUN_10b57d058(void)

{
  return;
}



/* Entry: 10b57d084; end: 10b57d0fb;  */

undefined8 * FUN_10b57d084(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0d618;
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



/* Entry: 10b57d0fc; end: 10b57d12b;  */

long FUN_10b57d0fc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57d12c(param_1);
  return param_1;
}



/* Entry: 10b57d12c; end: 10b57d153;  */

/* WARNING: Possible PIC construction at 0x00010b57d140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b57d144) */

void FUN_10b57d12c(long param_1)

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



/* Entry: 10b57d154; end: 10b57d157;  */

long FUN_10b57d154(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57d12c(param_1);
  return param_1;
}



/* Entry: 10b57d158; end: 10b57d16b;  */

void FUN_10b57d158(void)

{
  FUN_10b57d0fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57d16c; end: 10b57d177;  */

undefined ** FUN_10b57d16c(void)

{
  return &PTR_DAT_110d0d658;
}



/* Entry: 10b57d178; end: 10b57d1bf;  */

void FUN_10b57d178(long param_1)

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



/* Entry: 10b57d1c0; end: 10b57d2df;  */

long * FUN_10b57d1c0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
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
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b57d204;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b57d204:
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77c1a6);
    param_2 = param_3;
    func_0x00010b57d4d8(param_3,1);
  }
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x20),param_2);
  }
  plVar2 = plVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    plVar2 = param_3;
    func_0x000107c282ac(param_3,*(int *)(param_1 + 0x24),plVar1);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b57d29c;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b57d29c;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77c1fb);
  plVar2 = param_3;
  func_0x00010b57d4d8(param_3,4);
LAB_10b57d29c:
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



/* Entry: 10b57d2e0; end: 10b57d3ab;  */

long FUN_10b57d2e0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b57d318;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b57d318:
    lVar3 = 0;
    goto LAB_10b57d31c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b57d31c:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b57d3ac; end: 10b57d3af;  */

void FUN_10b57d3ac(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b57d3b0; end: 10b57d467;  */

void FUN_10b57d3b0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b57d468; end: 10b57d46f;  */

void FUN_10b57d468(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0d618;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b57d470; end: 10b57d4c3;  */

void FUN_10b57d470(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d618;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b57d4c4; end: 10b57d4e3;  */

void FUN_10b57d4c4(void)

{
  return;
}



/* Entry: 10b57d4e4; end: 10b57d523;  */

long FUN_10b57d4e4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b578d98();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b57d524; end: 10b57d527;  */

long FUN_10b57d524(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b578d98();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b57d528; end: 10b57d53b;  */

void FUN_10b57d528(void)

{
  FUN_10b57d4e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57d53c; end: 10b57d547;  */

undefined ** FUN_10b57d53c(void)

{
  return &PTR_DAT_110d0d710;
}



/* Entry: 10b57d548; end: 10b57d59f;  */

void FUN_10b57d548(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b578dec(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b57d5a0; end: 10b57d70b;  */

long * FUN_10b57d5a0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar1 = param_1;
  if ((int)param_1[5] != 0) {
    plVar3 = param_1;
    FUN_10b57d930();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar3);
    func_0x00010b57d958();
    param_2 = plVar1;
  }
  puVar9 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b57d630;
    puVar2 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b57d630;
  }
  func_0x000107c303d4(puVar2,lVar5,1,&UNK_10f77c249);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,2,puVar9,param_2);
  param_2 = plVar1;
LAB_10b57d630:
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,param_1[4],*(undefined4 *)(param_1[4] + 0x18),param_2,param_3);
    param_2 = plVar1;
  }
  plVar3 = plVar1;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    FUN_10b57d930();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b57d958();
    param_2 = plVar3;
  }
  if ((int)param_1[6] != 0) {
    plVar3 = param_3;
    func_0x0001088b96ec(param_3,(int)param_1[6],param_2);
    param_2 = plVar3;
  }
  if (*(char *)((long)param_1 + 0x34) == '\x01') {
    FUN_10b57d930();
    param_2 = (long *)(ulong)*(byte *)((long)param_1 + 0x34);
    uVar4 = 0x30;
    func_0x000107c280a8(0x30,plVar3);
    func_0x000107c280a8(param_2,uVar4);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar7 = param_1[1] & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar5 = (long)param_2 + (long)iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10b57d70c; end: 10b57d7cb;  */

void FUN_10b57d70c(long param_1)

{
  int iVar1;
  ulong uVar2;
  int extraout_w8;
  int extraout_w8_00;
  int iVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b57d744;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b57d744:
    iVar1 = 0;
    goto LAB_10b57d748;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b57d748:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
    FUN_10b57c168();
    iVar1 = iVar1 + iVar3 + 1;
  }
  iVar3 = -9;
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x00010b57d93c();
    iVar3 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x00010b57d93c();
    iVar3 = extraout_w8_00;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * iVar3 + 0x2c0U >> 6) + iVar1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x34) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar4 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10b57d7cc; end: 10b57d8d3;  */

void FUN_10b57d7cc(long param_1,long param_2)

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
      func_0x00010b57c320(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b578f10();
    }
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_2 + 0x30);
  }
  if (*(char *)(param_2 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x34) = 1;
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



/* Entry: 10b57d8d4; end: 10b57d8db;  */

void FUN_10b57d8d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x38);
  }
  *puVar1 = &PTR_FUN_110d0d6d0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x2d) = 0;
  return;
}



/* Entry: 10b57d8dc; end: 10b57d92f;  */

void FUN_10b57d8dc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d6d0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x2d) = 0;
  return;
}



/* Entry: 10b57d930; end: 10b57d96b;  */

ulong * FUN_10b57d930(void)

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



/* Entry: 10b57d96c; end: 10b57dbcf;  */

undefined8 * FUN_10b57d96c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0d788;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_10b57e7f8(param_1 + 3,param_3 + 0x18);
  lVar2 = param_3 + 0x30;
  func_0x000107c2809c(lVar2,param_2);
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x000107c2809c(lVar2,param_2);
  param_1[7] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57e8a8(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57e8dc(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57e90c(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57e93c(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57e978(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57e9ac(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  param_1[0xd] = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57e9dc(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  param_1[0xe] = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57ea0c(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  param_1[0xf] = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57ea3c(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57ea70(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57eaa0(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  param_1[0x12] = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57ead0(param_2,*(undefined8 *)(param_3 + 0x98));
  }
  param_1[0x13] = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57eb00(param_2,*(undefined8 *)(param_3 + 0xa0));
  }
  param_1[0x14] = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b57eb30(param_2,*(undefined8 *)(param_3 + 0xa8));
  }
  param_1[0x15] = uVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b57eb60(param_2,*(undefined8 *)(param_3 + 0xb0));
  }
  param_1[0x16] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0xc0);
  param_1[0x17] = uVar3;
  return param_1;
}



/* Entry: 10b57dbd0; end: 10b57dbff;  */

long FUN_10b57dbd0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57dc00(param_1);
  return param_1;
}



/* Entry: 10b57dc00; end: 10b57dd1f;  */

long * FUN_10b57dc00(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b57aea0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b57a900();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b5794ac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b579cec();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b57f5dc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b5774b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b5799c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b57a344();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b57fd78();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b57f240();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10b57f984();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b57c474();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b57d0fc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_10b57ec74();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10b57ccf0();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b57dd20; end: 10b57dd23;  */

long FUN_10b57dd20(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57dc00(param_1);
  return param_1;
}



/* Entry: 10b57dd24; end: 10b57dd37;  */

void FUN_10b57dd24(void)

{
  FUN_10b57dbd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57dd38; end: 10b57dd43;  */

undefined ** FUN_10b57dd38(void)

{
  return &PTR_DAT_110d0d7c8;
}



/* Entry: 10b57dd44; end: 10b57deab;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b57dd44(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b57af44(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b57a97c(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b579530(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b579d8c(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b57f630(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10b57754c(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_10b579a34(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_10b57a398(*(undefined8 *)(param_1 + 0x78));
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_10b57ff5c(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_10b57f298(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_10b57f9f4(*(undefined8 *)(param_1 + 0x90));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_10b57c500(*(undefined8 *)(param_1 + 0x98));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      FUN_10b57d178(*(undefined8 *)(param_1 + 0xa0));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      func_0x00010b57ed0c(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      FUN_10b57cd60(*(undefined8 *)(param_1 + 0xb0));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
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



/* Entry: 10b57deac; end: 10b57e42b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b57deac(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = (long *)0x1;
    func_0x00010b57ebb4(1,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14));
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010b57ebb4(2,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x30));
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010b57ebb4(3,*(long *)(param_1 + 0x50),
                        *(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14));
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b57ebb4(4,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14));
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_2 = (long *)0x5;
    func_0x00010b57ebb4(5,*(long *)(param_1 + 0x60),
                        *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x20));
  }
  if ((uVar2 >> 5 & 1) != 0) {
    param_2 = (long *)0x6;
    func_0x00010b57ebb4(6,*(long *)(param_1 + 0x68),
                        *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x28));
  }
  plVar3 = param_2;
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar3 = param_3;
    func_0x000106af6880(param_3,*(long *)(param_1 + 0xb8),param_2);
  }
  if ((uVar2 >> 6 & 1) != 0) {
    plVar3 = (long *)0x8;
    func_0x00010b57ebb4(8,*(long *)(param_1 + 0x70),
                        *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x14));
  }
  uVar6 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar6 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar6 + 8);
  }
  if (lVar7 != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,9);
  }
  iVar10 = *(int *)(param_1 + 0x20);
  for (iVar9 = 0; iVar10 != iVar9; iVar9 = iVar9 + 1) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar9 * 8 + 7);
    }
    plVar3 = (long *)0xa;
    func_0x00010b57ebb4(10,*puVar1,*(undefined4 *)(*puVar1 + 0x14));
  }
  if ((uVar2 >> 7 & 1) != 0) {
    plVar3 = (long *)0xb;
    func_0x00010b57ebb4(0xb,*(long *)(param_1 + 0x78),
                        *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x18));
  }
  if ((uVar2 >> 8 & 1) != 0) {
    plVar3 = (long *)0xc;
    func_0x00010b57ebb4(0xc,*(long *)(param_1 + 0x80),
                        *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x14));
  }
  if ((uVar2 >> 9 & 1) != 0) {
    plVar3 = (long *)0xd;
    func_0x00010b57ebb4(0xd,*(long *)(param_1 + 0x88),
                        *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x28));
  }
  uVar6 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar6 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar6 + 8);
  }
  if (lVar7 != 0) {
    plVar3 = param_3;
    func_0x000107c280a0(param_3,0xe);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    plVar3 = (long *)0xf;
    func_0x00010b57ebb4(0xf,*(long *)(param_1 + 0x90),
                        *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x14));
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    plVar3 = (long *)0x10;
    func_0x00010b57ebb4(0x10,*(long *)(param_1 + 0x98),
                        *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x14));
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    plVar3 = (long *)0x11;
    func_0x00010b57ebb4(0x11,*(long *)(param_1 + 0xa0),
                        *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x28));
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    plVar3 = (long *)0x12;
    func_0x00010b57ebb4(0x12,*(long *)(param_1 + 0xa8),
                        *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x18));
  }
  if ((uVar2 >> 0xe & 1) != 0) {
    plVar3 = (long *)0x13;
    func_0x00010b57ebb4(0x13,*(long *)(param_1 + 0xb0),
                        *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x14));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    plVar4 = param_3;
    func_0x000107c28094(param_3,plVar3);
    plVar3 = (long *)(ulong)*(uint *)(param_1 + 0xc0);
    uVar5 = 0xa0;
    func_0x000107c280a8(0xa0,plVar4);
    func_0x000107c280b8(plVar3,uVar5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar7 = *(long *)(uVar8 + 8);
      uVar6 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar7 = uVar8 + 8;
    }
    if (*param_3 - (long)plVar3 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar9 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        lVar7 = (long)plVar3 + (long)iVar10;
        plVar3 = param_3;
        func_0x000107c303e4(param_3,lVar7);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar3 + (long)iVar9);
    }
    _memcpy(plVar3,lVar7,uVar6 & 0xffffffff);
    return (long *)((long)plVar3 + (long)(int)uVar6);
  }
  return plVar3;
}



/* Entry: 10b57e42c; end: 10b57e457;  */

long FUN_10b57e42c(long param_1)

{
  FUN_10b5804a0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b57e458; end: 10b57e45b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b57e458(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b57e7f8(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e8a8(uVar5,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b57b598();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e8dc(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10b57ab98();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e90c(uVar5,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10b5797c8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e93c(uVar5,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_10b57a0d0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e978(uVar5,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_10b57f808();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e9ac(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_10b577798();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e9dc(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10b579b4c();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar5;
        func_0x00010b57ea0c(uVar5,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        FUN_10b57a4f0();
      }
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar5;
        func_0x00010b57ea3c(uVar5,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        FUN_10b580758();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar5;
        func_0x00010b57ea70(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_10b57f4d0();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        uVar2 = uVar5;
        func_0x00010b57eaa0(uVar5,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar2;
      }
      else {
        FUN_10b57fb0c();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar2 = uVar5;
        func_0x00010b57ead0(uVar5,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar2;
      }
      else {
        FUN_10b57c774();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        uVar2 = uVar5;
        func_0x00010b57eb00(uVar5,*(undefined8 *)(param_2 + 0xa0));
        *(ulong *)(param_1 + 0xa0) = uVar2;
      }
      else {
        FUN_10b57d3b0();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) {
        uVar2 = uVar5;
        func_0x00010b57eb30(uVar5,*(undefined8 *)(param_2 + 0xa8));
        *(ulong *)(param_1 + 0xa8) = uVar2;
      }
      else {
        func_0x00010b57ec40();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0xb0) == 0) {
        func_0x00010b57eb60(uVar5,*(undefined8 *)(param_2 + 0xb0));
        *(ulong *)(param_1 + 0xb0) = uVar5;
      }
      else {
        FUN_10b57cf10();
      }
    }
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_2 + 0xb8);
  }
  if (*(int *)(param_2 + 0xc0) != 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
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



/* Entry: 10b57e45c; end: 10b57e7f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b57e45c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  FUN_10b57e7f8(param_1 + 0x18,param_2 + 0x18);
  uVar2 = *(ulong *)(param_2 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x30,uVar2,uVar3);
  }
  uVar2 = *(ulong *)(param_2 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x38,uVar2,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e8a8(uVar5,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b57b598();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e8dc(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar2;
      }
      else {
        FUN_10b57ab98();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e90c(uVar5,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar2;
      }
      else {
        FUN_10b5797c8();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e93c(uVar5,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar2;
      }
      else {
        FUN_10b57a0d0();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e978(uVar5,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        FUN_10b57f808();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e9ac(uVar5,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar2;
      }
      else {
        FUN_10b577798();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar5;
        func_0x00010b57e9dc(uVar5,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10b579b4c();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar2 = uVar5;
        func_0x00010b57ea0c(uVar5,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar2;
      }
      else {
        FUN_10b57a4f0();
      }
    }
  }
  if ((uVar1 & 0x7f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar2 = uVar5;
        func_0x00010b57ea3c(uVar5,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar2;
      }
      else {
        FUN_10b580758();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar2 = uVar5;
        func_0x00010b57ea70(uVar5,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar2;
      }
      else {
        FUN_10b57f4d0();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        uVar2 = uVar5;
        func_0x00010b57eaa0(uVar5,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar2;
      }
      else {
        FUN_10b57fb0c();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar2 = uVar5;
        func_0x00010b57ead0(uVar5,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar2;
      }
      else {
        FUN_10b57c774();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        uVar2 = uVar5;
        func_0x00010b57eb00(uVar5,*(undefined8 *)(param_2 + 0xa0));
        *(ulong *)(param_1 + 0xa0) = uVar2;
      }
      else {
        FUN_10b57d3b0();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0xa8) == 0) {
        uVar2 = uVar5;
        func_0x00010b57eb30(uVar5,*(undefined8 *)(param_2 + 0xa8));
        *(ulong *)(param_1 + 0xa8) = uVar2;
      }
      else {
        func_0x00010b57ec40();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      if (*(long *)(param_1 + 0xb0) == 0) {
        func_0x00010b57eb60(uVar5,*(undefined8 *)(param_2 + 0xb0));
        *(ulong *)(param_1 + 0xb0) = uVar5;
      }
      else {
        FUN_10b57cf10();
      }
    }
  }
  if (*(long *)(param_2 + 0xb8) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_2 + 0xb8);
  }
  if (*(int *)(param_2 + 0xc0) != 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
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



/* Entry: 10b57e7f8; end: 10b57e80f;  */

void FUN_10b57e7f8(long *param_1,long param_2)

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



/* Entry: 10b57e810; end: 10b57e83f;  */

long * FUN_10b57e810(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b57e840; end: 10b57eb93;  */

undefined8 * FUN_10b57e840(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xc8;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,200);
  }
  *puVar1 = &PTR_FUN_110d0d788;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  _bzero(puVar1 + 8,0x84);
  return puVar1;
}



/* Entry: 10b57eb94; end: 10b57ec73;  */

void FUN_10b57eb94(void)

{
  return;
}



/* Entry: 10b57ec74; end: 10b57ec9b;  */

long FUN_10b57ec74(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b57ec9c; end: 10b57ece7;  */

undefined8 * FUN_10b57ec9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d0d840;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b57ec40(param_1,param_3);
  return param_1;
}



/* Entry: 10b57ece8; end: 10b57eceb;  */

long FUN_10b57ece8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b57ecec; end: 10b57ecff;  */

void FUN_10b57ecec(void)

{
  FUN_10b57ec74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57ed00; end: 10b57ed1f;  */

undefined ** FUN_10b57ed00(void)

{
  return &PTR_DAT_110d0d880;
}



/* Entry: 10b57ed20; end: 10b57edcb;  */

long * FUN_10b57ed20(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b57ee9c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b57eea8();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b57ee9c();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b57eea8();
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



/* Entry: 10b57edcc; end: 10b57ee4b;  */

long FUN_10b57edcc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b57ee4c; end: 10b57ee93;  */

void FUN_10b57ee4c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d840;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b57ee94; end: 10b57eeb3;  */

void FUN_10b57ee94(void)

{
  return;
}



/* Entry: 10b57eeb4; end: 10b57eeeb;  */

long FUN_10b57eeb4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b53cbd8();
  }
  __ZdlPv();
  return param_1;
}


