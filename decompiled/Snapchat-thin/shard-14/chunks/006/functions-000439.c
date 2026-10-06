/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b57950c; end: 10b57950f;  */

long FUN_10b57950c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5794dc(param_1);
  return param_1;
}



/* Entry: 10b579510; end: 10b579523;  */

void FUN_10b579510(void)

{
  FUN_10b5794ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b579524; end: 10b57952f;  */

undefined ** FUN_10b579524(void)

{
  return &PTR_DAT_110d0cd98;
}



/* Entry: 10b579530; end: 10b579583;  */

void FUN_10b579530(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b53a868(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b579584; end: 10b5796d7;  */

long * FUN_10b579584(long *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  plVar9 = param_1;
  if ((int)param_1[5] != 0) {
    plVar2 = param_1;
    func_0x00010b579938();
    plVar9 = (long *)(ulong)*(uint *)(param_1 + 5);
    uVar3 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280b8(plVar9,uVar3);
    param_2 = plVar9;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    plVar9 = param_3;
    func_0x00010598f43c(param_3,*(int *)((long)param_1 + 0x2c),param_2);
    param_2 = plVar9;
  }
  if ((int)param_1[6] != 0) {
    plVar9 = param_3;
    func_0x0001088bdd44(param_3,(int)param_1[6],param_2);
    param_2 = plVar9;
  }
  puVar11 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar11 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar11[1];
    if (lVar6 == 0) goto LAB_10b57964c;
    puVar4 = (undefined8 *)*puVar11;
  }
  else {
    puVar4 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_10b57964c;
  }
  func_0x000107c303d4(puVar4,lVar6,1,&UNK_10f77be15);
  plVar9 = param_3;
  func_0x000107c280a0(param_3,5,puVar11,param_2);
  param_2 = plVar9;
LAB_10b57964c:
  if (*(int *)((long)param_1 + 0x34) != 0) {
    func_0x00010b579938();
    uVar1 = *(undefined4 *)((long)param_1 + 0x34);
    puVar5 = (undefined4 *)0x35;
    func_0x000107c280a8(0x35,plVar9);
    param_2 = (long *)(puVar5 + 1);
    *puVar5 = uVar1;
  }
  plVar9 = param_2;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar9 = (long *)0x7;
    func_0x000107c303cc(7,param_1[4],*(undefined4 *)(param_1[4] + 0x28),param_2,param_3);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar8 = param_1[1] & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar6 = *(long *)(uVar8 + 8);
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar6 = uVar8 + 8;
    }
    if (*param_3 - (long)plVar9 < (long)(int)uVar7) {
      while( true ) {
        iVar12 = ((int)*param_3 - (int)plVar9) + 0x10;
        iVar10 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar10 - iVar12);
        if (iVar10 - iVar12 == 0 || iVar10 < iVar12) break;
        func_0x00010b4d5738();
        lVar6 = (long)plVar9 + (long)iVar12;
        plVar9 = param_3;
        func_0x000107c303e4(param_3,lVar6);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar9 + (long)iVar10);
    }
    _memcpy(plVar9,lVar6,uVar7 & 0xffffffff);
    return (long *)((long)plVar9 + (long)(int)uVar7);
  }
  return plVar9;
}



/* Entry: 10b5796d8; end: 10b5797c3;  */

void FUN_10b5796d8(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar3 + 0x17) < '\0') {
    if (*(long *)(uVar3 + 8) == 0) goto LAB_10b579710;
  }
  else if (*(char *)(uVar3 + 0x17) == '\0') {
LAB_10b579710:
    iVar2 = 0;
    goto LAB_10b579714;
  }
  func_0x000107c282a0();
  iVar2 = (int)uVar3 + 1;
LAB_10b579714:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    FUN_10b543f68();
    iVar2 = iVar2 + iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar2 = iVar2 + 5;
  }
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



/* Entry: 10b5797c4; end: 10b5797c7;  */

void FUN_10b5797c4(long param_1,long param_2)

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
      FUN_10b5472e0(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b53aa10();
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
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
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



/* Entry: 10b5797c8; end: 10b5798cf;  */

void FUN_10b5797c8(long param_1,long param_2)

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
      FUN_10b5472e0(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      FUN_10b53aa10();
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
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
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



/* Entry: 10b5798d0; end: 10b5798d7;  */

void FUN_10b5798d0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0cd58;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b5798d8; end: 10b57992b;  */

void FUN_10b5798d8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0cd58;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b57992c; end: 10b57994b;  */

void FUN_10b57992c(void)

{
  return;
}



/* Entry: 10b57994c; end: 10b5799c3;  */

undefined8 * FUN_10b57994c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0ce18;
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



/* Entry: 10b5799c4; end: 10b5799f3;  */

long FUN_10b5799c4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5799f4(param_1);
  return param_1;
}



/* Entry: 10b5799f4; end: 10b579a0f;  */

void FUN_10b5799f4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b579a10; end: 10b579a13;  */

long FUN_10b579a10(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5799f4(param_1);
  return param_1;
}



/* Entry: 10b579a14; end: 10b579a27;  */

void FUN_10b579a14(void)

{
  FUN_10b5799c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b579a28; end: 10b579a33;  */

undefined ** FUN_10b579a28(void)

{
  return &PTR_DAT_110d0ce58;
}



/* Entry: 10b579a34; end: 10b579b47;  */

void FUN_10b579a34(long param_1)

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



/* Entry: 10b579b48; end: 10b579b4b;  */

void FUN_10b579b48(long param_1,long param_2)

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



/* Entry: 10b579b4c; end: 10b579bdf;  */

void FUN_10b579b4c(long param_1,long param_2)

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



/* Entry: 10b579be0; end: 10b579be7;  */

void FUN_10b579be0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0ce18;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b579be8; end: 10b579c2b;  */

void FUN_10b579be8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0ce18;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b579c2c; end: 10b579c33;  */

void FUN_10b579c2c(void)

{
  return;
}



/* Entry: 10b579c34; end: 10b579ceb;  */

undefined8 * FUN_10b579c34(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0ced8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x000107c2809c(lVar2,param_2);
  param_1[4] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0x38);
  return param_1;
}



/* Entry: 10b579cec; end: 10b579d1f;  */

long FUN_10b579cec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b579d20(param_1);
  return param_1;
}



/* Entry: 10b579d20; end: 10b579d67;  */

void FUN_10b579d20(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b579d68; end: 10b579d6b;  */

long FUN_10b579d68(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b579d20(param_1);
  return param_1;
}



/* Entry: 10b579d6c; end: 10b579d7f;  */

void FUN_10b579d6c(void)

{
  FUN_10b579cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b579d80; end: 10b579d8b;  */

undefined ** FUN_10b579d80(void)

{
  return &PTR_DAT_110d0cf18;
}



/* Entry: 10b579d8c; end: 10b579dfb;  */

void FUN_10b579d8c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x38) = 0;
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



/* Entry: 10b579dfc; end: 10b579fd3;  */

long * FUN_10b579dfc(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x1;
    func_0x00010b57a2d8(1,param_1[5],*(undefined4 *)(param_1[5] + 0x20));
    param_2 = plVar2;
  }
  puVar8 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)*puVar8;
      goto LAB_10b579e60;
    }
  }
  else if (*(char *)((long)puVar8 + 0x17) != '\0') {
LAB_10b579e60:
    func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f77be5b);
    plVar2 = param_3;
    func_0x00010b57a2cc(param_3,2);
    param_2 = plVar2;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x3;
    func_0x00010b57a2d8(3,param_1[6],*(undefined4 *)(param_1[6] + 0x20));
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if ((char)param_1[7] == '\x01') {
    func_0x00010b57a2a8();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b57a2b4();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (*(char *)((long)param_1 + 0x39) == '\x01') {
    func_0x00010b57a2a8();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x00010b57a2b4();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)((long)param_1 + 0x3a) == '\x01') {
    func_0x00010b57a2a8();
    plVar3 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x00010b57a2b4();
    param_2 = plVar3;
  }
  puVar8 = (undefined8 *)(param_1[4] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b579f58;
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b579f58;
  func_0x000107c303d4(puVar8,lVar4,1,&UNK_10f77be95);
  plVar3 = param_3;
  func_0x00010b57a2cc(param_3,7);
  param_2 = plVar3;
LAB_10b579f58:
  if (*(char *)((long)param_1 + 0x3b) == '\x01') {
    func_0x00010b57a2a8();
    param_2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar3);
    func_0x00010b57a2b4();
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
      iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(uint)(iVar7 - iVar9);
      if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
      func_0x00010b4d5738();
      lVar4 = (long)param_2 + (long)iVar9;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar5);
}



/* Entry: 10b579fd4; end: 10b57a0cb;  */

void FUN_10b579fd4(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar4 + 0x17) < '\0') {
    if (*(long *)(uVar4 + 8) == 0) goto LAB_10b57a010;
  }
  else if (*(char *)(uVar4 + 0x17) == '\0') {
LAB_10b57a010:
    iVar3 = 0;
    goto LAB_10b57a014;
  }
  func_0x000107c282a0();
  iVar3 = (int)uVar4 + 1;
LAB_10b57a014:
  uVar4 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c282a0();
    iVar3 = iVar3 + (int)uVar4 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x000108c6cd50();
      iVar3 = iVar3 + iVar2 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x000108c6cd50();
      iVar3 = iVar3 + iVar2 + 1;
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  iVar3 = ((ushort)((ushort)(byte)uVar6 * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar6 >> 0x10) * '\x02') +
          ((ushort)((ushort)(byte)((uint)uVar6 >> 8) * 2) & 0xff) +
          (uint)(byte)((char)((uint)uVar6 >> 0x18) * '\x02') + iVar3;
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



/* Entry: 10b57a0cc; end: 10b57a0cf;  */

void FUN_10b57a0cc(long param_1,long param_2)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  if (*(char *)(param_2 + 0x3b) == '\x01') {
    *(undefined1 *)(param_1 + 0x3b) = 1;
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



/* Entry: 10b57a0d0; end: 10b57a243;  */

void FUN_10b57a0d0(long param_1,long param_2)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 1;
  }
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  if (*(char *)(param_2 + 0x3b) == '\x01') {
    *(undefined1 *)(param_1 + 0x3b) = 1;
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



/* Entry: 10b57a244; end: 10b57a24b;  */

void FUN_10b57a244(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110d0ced8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b57a24c; end: 10b57a2a7;  */

void FUN_10b57a24c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x40);
  }
  *puVar1 = &PTR_FUN_110d0ced8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 10b57a2a8; end: 10b57a2e3;  */

ulong * FUN_10b57a2a8(void)

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



/* Entry: 10b57a2e4; end: 10b57a343;  */

undefined8 * FUN_10b57a2e4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0cf90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b57a344; end: 10b57a373;  */

long FUN_10b57a344(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b57a374; end: 10b57a377;  */

long FUN_10b57a374(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b57a378; end: 10b57a38b;  */

void FUN_10b57a378(void)

{
  FUN_10b57a344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57a38c; end: 10b57a397;  */

undefined ** FUN_10b57a38c(void)

{
  return &PTR_DAT_110d0cfd0;
}



/* Entry: 10b57a398; end: 10b57a3d3;  */

void FUN_10b57a398(long param_1)

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



/* Entry: 10b57a3d4; end: 10b57a483;  */

long * FUN_10b57a3d4(long param_1,long *param_2,long *param_3)

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
    if (lVar3 == 0) goto LAB_10b57a440;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b57a440;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77bed3);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b57a440:
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



/* Entry: 10b57a484; end: 10b57a4eb;  */

void FUN_10b57a484(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b57a4bc;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b57a4bc:
    iVar1 = 0;
    goto LAB_10b57a4c0;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b57a4c0:
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



/* Entry: 10b57a4ec; end: 10b57a4ef;  */

void FUN_10b57a4ec(long param_1,long param_2)

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



/* Entry: 10b57a4f0; end: 10b57a55f;  */

void FUN_10b57a4f0(long param_1,long param_2)

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



/* Entry: 10b57a560; end: 10b57a567;  */

void FUN_10b57a560(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0cf90;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b57a568; end: 10b57a5b7;  */

void FUN_10b57a568(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0cf90;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b57a5b8; end: 10b57a5cb;  */

void FUN_10b57a5b8(void)

{
  return;
}



/* Entry: 10b57a5cc; end: 10b57a603;  */

long FUN_10b57a5cc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b57a604; end: 10b57a607;  */

long FUN_10b57a604(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b57a608; end: 10b57a61b;  */

void FUN_10b57a608(void)

{
  FUN_10b57a5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57a61c; end: 10b57a627;  */

undefined ** FUN_10b57a61c(void)

{
  return &PTR_DAT_110d0d0d8;
}



/* Entry: 10b57a628; end: 10b57a667;  */

void FUN_10b57a628(long param_1)

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



/* Entry: 10b57a668; end: 10b57a74f;  */

long * FUN_10b57a668(long param_1,long *param_2,long *param_3)

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
      goto LAB_10b57a6ac;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b57a6ac:
    func_0x00010b57ad58(puVar5,lVar1,param_3,&UNK_10f77bf09);
    param_2 = param_3;
    func_0x00010b57ad38(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    if (puVar5[1] == 0) goto LAB_10b57a70c;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b57a70c;
  func_0x00010b57ad58(puVar5);
  param_2 = param_3;
  func_0x00010b57ad38(param_3,2);
LAB_10b57a70c:
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



/* Entry: 10b57a750; end: 10b57a87b;  */

long FUN_10b57a750(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b57a788;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b57a788:
    lVar3 = 0;
    goto LAB_10b57a78c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b57a78c:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b57a87c; end: 10b57a8ff;  */

undefined8 * FUN_10b57a87c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0d098;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b57ac30(param_1 + 2,param_2,param_3 + 0x10);
  param_3 = param_3 + 0x28;
  func_0x000107c2809c(param_3,param_2);
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 10b57a900; end: 10b57a92f;  */

long FUN_10b57a900(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57a930(param_1);
  return param_1;
}



/* Entry: 10b57a930; end: 10b57a957;  */

long * FUN_10b57a930(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b57a958; end: 10b57a95b;  */

long FUN_10b57a958(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57a930(param_1);
  return param_1;
}



/* Entry: 10b57a95c; end: 10b57a96f;  */

void FUN_10b57a95c(void)

{
  FUN_10b57a900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57a970; end: 10b57a97b;  */

undefined ** FUN_10b57a970(void)

{
  return &PTR_DAT_110d0d128;
}



/* Entry: 10b57a97c; end: 10b57a9c7;  */

void FUN_10b57a97c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  func_0x000107c3025c(param_1 + 0x28);
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



/* Entry: 10b57a9c8; end: 10b57aacb;  */

long * FUN_10b57a9c8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b57aa2c;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b57aa2c;
  func_0x00010b57ad58(puVar7,lVar3,param_3,&UNK_10f77bf76);
  param_2 = param_3;
  func_0x00010b57ad38(param_3,1);
LAB_10b57aa2c:
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar8 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x20),param_2,param_3);
    param_2 = plVar2;
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
  return param_2;
}



/* Entry: 10b57aacc; end: 10b57ab67;  */

long FUN_10b57aacc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    FUN_10b57ab68();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    lVar3 = lVar3 + uVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b57ab68; end: 10b57ab93;  */

long FUN_10b57ab68(long param_1)

{
  FUN_10b57a750();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b57ab94; end: 10b57ab97;  */

void FUN_10b57ab94(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b57ac10(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
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



/* Entry: 10b57ab98; end: 10b57ac0f;  */

void FUN_10b57ab98(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b57ac10(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
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



/* Entry: 10b57ac10; end: 10b57ac2f;  */

void FUN_10b57ac10(long *param_1,long param_2)

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



/* Entry: 10b57ac30; end: 10b57ac5b;  */

undefined8 * FUN_10b57ac30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b57ac10(param_1,param_3);
  return param_1;
}



/* Entry: 10b57ac5c; end: 10b57ac8b;  */

long * FUN_10b57ac5c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b57ac8c; end: 10b57ad2f;  */

void FUN_10b57ac8c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0d048;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b57ad30; end: 10b57ad5f;  */

void FUN_10b57ad30(void)

{
  return;
}



/* Entry: 10b57ad60; end: 10b57ae9f;  */

undefined8 * FUN_10b57ad60(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0d1b0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_10b57b758(param_1 + 3,param_3 + 0x18);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  func_0x00010b57b768(param_1 + 6,param_3 + 0x30);
  func_0x000107c282d4(param_1 + 9,param_2,param_3 + 0x48);
  *(undefined4 *)(param_1 + 0xb) = 0;
  lVar1 = param_3 + 0x60;
  func_0x00010b57b910();
  param_1[0xc] = lVar1;
  lVar1 = param_3 + 0x68;
  func_0x00010b57b910();
  param_1[0xd] = lVar1;
  lVar1 = param_3 + 0x70;
  func_0x00010b57b910();
  param_1[0xe] = lVar1;
  lVar1 = param_3 + 0x78;
  func_0x00010b57b910();
  param_1[0xf] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b57b888(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x90);
  uVar2 = *(undefined8 *)(param_3 + 0x88);
  uVar5 = *(undefined8 *)(param_3 + 0xa0);
  uVar4 = *(undefined8 *)(param_3 + 0x98);
  *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(param_3 + 0xa8);
  param_1[0x14] = uVar5;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  param_1[0x11] = uVar2;
  return param_1;
}



/* Entry: 10b57aea0; end: 10b57aecf;  */

long FUN_10b57aea0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57aed0(param_1);
  return param_1;
}



/* Entry: 10b57aed0; end: 10b57af1f;  */

long FUN_10b57aed0(long param_1)

{
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c30258(param_1 + 0x68);
  func_0x000107c30258(param_1 + 0x70);
  func_0x000107c30258(param_1 + 0x78);
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b579068();
  }
  __ZdlPv();
  func_0x000107c282dc(param_1 + 0x48);
  FUN_10b57b780(param_1 + 0x30);
  FUN_10b57b7b0(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b57af20; end: 10b57af23;  */

long FUN_10b57af20(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b57aed0(param_1);
  return param_1;
}



/* Entry: 10b57af24; end: 10b57af37;  */

void FUN_10b57af24(void)

{
  FUN_10b57aea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57af38; end: 10b57af43;  */

undefined ** FUN_10b57af38(void)

{
  return &PTR_DAT_110d0d1f0;
}



/* Entry: 10b57af44; end: 10b57afe3;  */

void FUN_10b57af44(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  func_0x000107c3025c(param_1 + 0x60);
  func_0x000107c3025c(param_1 + 0x68);
  func_0x000107c3025c(param_1 + 0x70);
  func_0x000107c3025c(param_1 + 0x78);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5790c0(*(undefined8 *)(param_1 + 0x80));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
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



/* Entry: 10b57afe4; end: 10b57b593;  */

byte * FUN_10b57afe4(byte *param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long unaff_x22;
  undefined8 *puVar10;
  ulong *puVar11;
  int iVar12;
  
  lVar5 = *(long *)(param_1 + 0x88);
  pbVar2 = param_1;
  if (lVar5 != 0) {
    pbVar2 = param_3;
    func_0x000105991a14(param_3,lVar5,param_2);
    param_2 = pbVar2;
  }
  func_0x00010b57b9a0(*(undefined8 *)(param_1 + 0x60));
  if (lVar5 < 0) {
    lVar5 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b57b040;
  }
  else if ((int)lVar5 != 0) {
LAB_10b57b040:
    func_0x00010b57b908();
    lVar5 = 5;
    pbVar2 = param_3;
    func_0x00010b57b8d8();
    param_2 = pbVar2;
  }
  func_0x00010b57b9a0(*(undefined8 *)(param_1 + 0x68));
  if (lVar5 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b57b080;
  }
  else if ((int)lVar5 != 0) {
LAB_10b57b080:
    func_0x00010b57b908();
    pbVar2 = param_3;
    func_0x00010b57b8d8();
    param_2 = pbVar2;
  }
  iVar12 = *(int *)(param_1 + 0x20);
  for (iVar9 = 0; iVar12 != iVar9; iVar9 = iVar9 + 1) {
    func_0x00010b57b918();
    pbVar2 = (byte *)0x7;
    func_0x00010b57b8e4();
    param_2 = pbVar2;
  }
  iVar9 = *(int *)(param_1 + 0x38);
  for (puVar10 = (undefined8 *)0x0; iVar9 != (int)puVar10;
      puVar10 = (undefined8 *)(ulong)((int)puVar10 + 1)) {
    func_0x00010b57b918();
    pbVar2 = (byte *)0x8;
    func_0x00010b57b8e4();
    param_2 = pbVar2;
  }
  if ((param_1[0x10] & 1) != 0) {
    pbVar2 = (byte *)0x9;
    func_0x00010b57b8e4(9,*(long *)(param_1 + 0x80),
                        *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x3c));
    param_2 = pbVar2;
  }
  pbVar6 = *(byte **)(param_1 + 0x90);
  if (pbVar6 != (byte *)0x0) {
    pbVar2 = param_3;
    FUN_10b527004(param_3,pbVar6,param_2);
    param_2 = pbVar2;
  }
  func_0x00010b57b9a0(*(undefined8 *)(param_1 + 0x70));
  if ((long)pbVar6 < 0) {
    pbVar6 = (byte *)0x0;
    if (puVar10[1] != 0) {
      puVar10 = (undefined8 *)*puVar10;
      goto LAB_10b57b154;
    }
  }
  else if ((int)pbVar6 != 0) {
LAB_10b57b154:
    func_0x00010b57b908(puVar10);
    pbVar6 = (byte *)0xc;
    pbVar2 = param_3;
    func_0x00010b57b8d8();
    param_2 = pbVar2;
  }
  pbVar3 = pbVar2;
  if (*(int *)(param_1 + 0x98) != 0) {
    func_0x00010b57b8cc();
    pbVar3 = (byte *)0x68;
    func_0x000107c280a8();
    func_0x00010b57b964();
    pbVar6 = pbVar2;
    param_2 = pbVar3;
  }
  puVar11 = (ulong *)(ulong)*(uint *)(param_1 + 0x58);
  if (*(uint *)(param_1 + 0x58) != 0) {
    func_0x00010b57b8cc();
    pbVar2 = pbVar3 + 2;
    *pbVar3 = 0x7a;
    while( true ) {
      if ((uint)puVar11 < 0x80) break;
      pbVar2[-1] = (byte)puVar11 | 0x80;
      puVar11 = (ulong *)(ulong)((uint)puVar11 >> 7);
      pbVar2 = pbVar2 + 1;
    }
    pbVar2[-1] = (byte)puVar11;
    puVar11 = *(ulong **)(param_1 + 0x50);
    puVar1 = (ulong *)((long)puVar11 + (long)*(int *)(param_1 + 0x48) * 4);
    do {
      func_0x00010b57b8cc();
      uVar7 = (ulong)*(int *)puVar11;
      pbVar2 = pbVar3;
      while( true ) {
        param_2 = pbVar2 + 1;
        if (uVar7 < 0x80) break;
        *pbVar2 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        pbVar2 = param_2;
      }
      puVar11 = (ulong *)((long)puVar11 + 4);
      *pbVar2 = (byte)uVar7;
    } while (puVar11 < puVar1);
  }
  pbVar2 = pbVar3;
  if (param_1[0xa8] == 1) {
    func_0x00010b57b8cc();
    pbVar2 = (byte *)0x80;
    func_0x000107c280a8();
    func_0x00010b57b970();
    pbVar6 = pbVar3;
    param_2 = pbVar2;
  }
  pbVar3 = pbVar2;
  if (*(int *)(param_1 + 0x9c) != 0) {
    func_0x00010b57b8cc();
    pbVar3 = (byte *)0x88;
    func_0x000107c280a8();
    func_0x00010b57b964();
    pbVar6 = pbVar2;
    param_2 = pbVar3;
  }
  pbVar2 = pbVar3;
  if (param_1[0xa9] == 1) {
    func_0x00010b57b8cc();
    pbVar2 = (byte *)0x90;
    func_0x000107c280a8();
    func_0x00010b57b970();
    pbVar6 = pbVar3;
    param_2 = pbVar2;
  }
  func_0x00010b57b9a0(*(undefined8 *)(param_1 + 0x78));
  if ((long)pbVar6 < 0) {
    if (puVar11[1] == 0) goto LAB_10b57b2c4;
    puVar11 = (ulong *)*puVar11;
  }
  else if ((int)pbVar6 == 0) goto LAB_10b57b2c4;
  func_0x00010b57b908(puVar11);
  pbVar2 = param_3;
  func_0x00010b57b8d8(param_3,0x13);
  param_2 = pbVar2;
LAB_10b57b2c4:
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x00010b57b8cc();
    param_2 = *(byte **)(param_1 + 0xa0);
    uVar4 = 0xa0;
    func_0x000107c280a8(0xa0,pbVar2);
    func_0x000107c280ac(param_2,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar5 = *(long *)(uVar8 + 8);
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar5 = uVar8 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar7) {
      while( true ) {
        iVar12 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar9 - iVar12);
        if (iVar9 - iVar12 == 0 || iVar9 < iVar12) break;
        func_0x00010b4d5738();
        pbVar2 = param_2 + iVar12;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar2);
      }
      func_0x00010b4d5738();
      return param_2 + iVar9;
    }
    _memcpy(param_2,lVar5,uVar7 & 0xffffffff);
    return param_2 + (int)uVar7;
  }
  return param_2;
}



/* Entry: 10b57b594; end: 10b57b597;  */

void FUN_10b57b594(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  FUN_10b57b758(param_1 + 0x18,param_2 + 0x18);
  func_0x00010b57b768(param_1 + 0x30,param_2 + 0x30);
  lVar2 = param_2 + 0x48;
  func_0x000107c282d0(param_1 + 0x48);
  func_0x00010b57b994(*(undefined8 *)(param_2 + 0x60));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b57b988();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  func_0x00010b57b994(*(undefined8 *)(param_2 + 0x68));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b57b988();
    }
    func_0x000107c30248(param_1 + 0x68);
  }
  func_0x00010b57b994(*(undefined8 *)(param_2 + 0x70));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b57b988();
    }
    func_0x000107c30248(param_1 + 0x70);
  }
  func_0x00010b57b994(*(undefined8 *)(param_2 + 0x78));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b57b988();
    }
    func_0x000107c30248(param_1 + 0x78);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      func_0x00010b57b888(uVar4,*(undefined8 *)(param_2 + 0x80));
      *(ulong *)(param_1 + 0x80) = uVar4;
    }
    else {
      FUN_10b5792f8();
    }
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_2 + 0x9c);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0xa0);
  }
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  if (*(char *)(param_2 + 0xa9) == '\x01') {
    *(undefined1 *)(param_1 + 0xa9) = 1;
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



/* Entry: 10b57b598; end: 10b57b757;  */

void FUN_10b57b598(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  FUN_10b57b758(param_1 + 0x18,param_2 + 0x18);
  func_0x00010b57b768(param_1 + 0x30,param_2 + 0x30);
  lVar2 = param_2 + 0x48;
  func_0x000107c282d0(param_1 + 0x48);
  func_0x00010b57b994(*(undefined8 *)(param_2 + 0x60));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b57b988();
    }
    func_0x000107c30248(param_1 + 0x60);
  }
  func_0x00010b57b994(*(undefined8 *)(param_2 + 0x68));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b57b988();
    }
    func_0x000107c30248(param_1 + 0x68);
  }
  func_0x00010b57b994(*(undefined8 *)(param_2 + 0x70));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b57b988();
    }
    func_0x000107c30248(param_1 + 0x70);
  }
  func_0x00010b57b994(*(undefined8 *)(param_2 + 0x78));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b57b988();
    }
    func_0x000107c30248(param_1 + 0x78);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      func_0x00010b57b888(uVar4,*(undefined8 *)(param_2 + 0x80));
      *(ulong *)(param_1 + 0x80) = uVar4;
    }
    else {
      FUN_10b5792f8();
    }
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x98);
  }
  if (*(int *)(param_2 + 0x9c) != 0) {
    *(int *)(param_1 + 0x9c) = *(int *)(param_2 + 0x9c);
  }
  if (*(long *)(param_2 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_2 + 0xa0);
  }
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  if (*(char *)(param_2 + 0xa9) == '\x01') {
    *(undefined1 *)(param_1 + 0xa9) = 1;
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



/* Entry: 10b57b758; end: 10b57b77f;  */

void FUN_10b57b758(long *param_1,long param_2)

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



/* Entry: 10b57b780; end: 10b57b7af;  */

long * FUN_10b57b780(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b57b7b0; end: 10b57b7df;  */

long * FUN_10b57b7b0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b57b7e0; end: 10b57b8cb;  */

long FUN_10b57b7e0(long param_1)

{
  func_0x000107c282dc(param_1 + 0x38);
  FUN_10b57b780(param_1 + 0x20);
  FUN_10b57b7b0(param_1 + 8);
  return param_1;
}



/* Entry: 10b57b8cc; end: 10b57b9bf;  */

ulong * FUN_10b57b8cc(void)

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



/* Entry: 10b57b9c0; end: 10b57ba13;  */

long FUN_10b57b9c0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_10b57ba2c(param_1);
  }
  func_0x000107c282dc(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b57ba14; end: 10b57ba17;  */

long FUN_10b57ba14(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_10b57ba2c(param_1);
  }
  func_0x000107c282dc(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b57ba18; end: 10b57ba2b;  */

void FUN_10b57ba18(void)

{
  FUN_10b57b9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57ba2c; end: 10b57ba5b;  */

void FUN_10b57ba2c(long param_1)

{
  if (*(int *)(param_1 + 0x54) == 3) {
    func_0x000107c30258(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



/* Entry: 10b57ba5c; end: 10b57ba67;  */

undefined ** FUN_10b57ba5c(void)

{
  return &PTR_DAT_110d0d2f0;
}



/* Entry: 10b57ba68; end: 10b57babb;  */

void FUN_10b57ba68(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  FUN_10b57ba2c(param_1);
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



/* Entry: 10b57babc; end: 10b57befb;  */

byte * FUN_10b57babc(byte *param_1,byte *param_2,byte *param_3)

{
  int *piVar1;
  ulong *puVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  
  pbVar3 = param_1;
  if (*(int *)(param_1 + 0x3c) != 0) {
    pbVar5 = param_1;
    FUN_10b57c364();
    pbVar3 = (byte *)0x8;
    func_0x000107c280a8(8,pbVar5);
    func_0x00010b57c3c4();
    param_2 = pbVar3;
  }
  if (*(int *)(param_1 + 0x54) == 3) {
    puVar11 = (undefined8 *)(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    lVar6 = (long)*(char *)((long)puVar11 + 0x17);
    puVar4 = puVar11;
    if (lVar6 < 0) {
      lVar6 = puVar11[1];
      puVar4 = (undefined8 *)*puVar11;
    }
    func_0x000107c303d4(puVar4,lVar6,1,&UNK_10f77c06c);
    pbVar3 = param_3;
    func_0x000107c280a0(param_3,3,puVar11,param_2);
    param_2 = pbVar3;
  }
  else if (*(int *)(param_1 + 0x54) == 2) {
    pbVar3 = param_3;
    func_0x000107c282cc(param_3,*(undefined8 *)(param_1 + 0x48),param_2);
    param_2 = pbVar3;
  }
  pbVar5 = pbVar3;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_10b57c364();
    pbVar5 = (byte *)0x20;
    func_0x000107c280a8(0x20,pbVar3);
    func_0x00010b57c3c4();
    param_2 = pbVar5;
  }
  iVar13 = *(int *)(param_1 + 0x18);
  for (iVar9 = 0; iVar13 != iVar9; iVar9 = iVar9 + 1) {
    uVar7 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar7 & 1) != 0) {
      puVar2 = (ulong *)(uVar7 + (long)iVar9 * 8 + 7);
    }
    pbVar5 = (byte *)0x5;
    func_0x000107c303cc(5,*puVar2,*(undefined4 *)(*puVar2 + 0x14),param_2,param_3);
    param_2 = pbVar5;
  }
  uVar10 = *(uint *)(param_1 + 0x38);
  if (uVar10 != 0) {
    FUN_10b57c364();
    pbVar3 = pbVar5 + 2;
    *pbVar5 = 0x32;
    for (; 0x7f < uVar10; uVar10 = uVar10 >> 7) {
      pbVar3[-1] = (byte)uVar10 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar10;
    piVar12 = *(int **)(param_1 + 0x30);
    piVar1 = piVar12 + *(int *)(param_1 + 0x28);
    do {
      FUN_10b57c364();
      uVar7 = (ulong)*piVar12;
      pbVar3 = pbVar5;
      while( true ) {
        param_2 = pbVar3 + 1;
        if (uVar7 < 0x80) break;
        *pbVar3 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        pbVar3 = param_2;
      }
      piVar12 = piVar12 + 1;
      *pbVar3 = (byte)uVar7;
    } while (piVar12 < piVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar6 = *(long *)(uVar8 + 8);
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar6 = uVar8 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar7) {
      while( true ) {
        iVar13 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar9 - iVar13);
        if (iVar9 - iVar13 == 0 || iVar9 < iVar13) break;
        func_0x00010b4d5738();
        pbVar3 = param_2 + iVar13;
        param_2 = param_3;
        func_0x000107c303e4(param_3,pbVar3);
      }
      func_0x00010b4d5738();
      return param_2 + iVar9;
    }
    _memcpy(param_2,lVar6,uVar7 & 0xffffffff);
    return param_2 + (int)uVar7;
  }
  return param_2;
}



/* Entry: 10b57befc; end: 10b57bf3b;  */

long FUN_10b57befc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b578d98();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b57bf3c; end: 10b57bf3f;  */

long FUN_10b57bf3c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b578d98();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b57bf40; end: 10b57bf53;  */

void FUN_10b57bf40(void)

{
  FUN_10b57befc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57bf54; end: 10b57bf5f;  */

undefined ** FUN_10b57bf54(void)

{
  return &PTR_DAT_110d0d340;
}


