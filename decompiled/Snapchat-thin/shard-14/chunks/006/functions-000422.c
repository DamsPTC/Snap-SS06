/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b54dd7c; end: 10b54de27;  */

long FUN_10b54dd7c(long param_1)

{
  FUN_10b504e1c(param_1 + 0x40);
  FUN_10b505e44(param_1 + 0x20);
  func_0x000107c282dc(param_1 + 8);
  return param_1;
}



/* Entry: 10b54de28; end: 10b54de93;  */

ulong * FUN_10b54de28(void)

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



/* Entry: 10b54de94; end: 10b54df3b;  */

undefined8 * FUN_10b54de94(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d050a0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  param_1[6] = *(undefined8 *)(param_3 + 0x30);
  return param_1;
}



/* Entry: 10b54df3c; end: 10b54df6f;  */

long FUN_10b54df3c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54df70(param_1);
  return param_1;
}



/* Entry: 10b54df70; end: 10b54dfaf;  */

void FUN_10b54df70(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b54a368();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54dfb0; end: 10b54dfb3;  */

long FUN_10b54dfb0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54df70(param_1);
  return param_1;
}



/* Entry: 10b54dfb4; end: 10b54dfc7;  */

void FUN_10b54dfb4(void)

{
  FUN_10b54df3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54dfc8; end: 10b54dfd3;  */

undefined ** FUN_10b54dfc8(void)

{
  return &PTR_DAT_110d050e0;
}



/* Entry: 10b54dfd4; end: 10b54e03b;  */

void FUN_10b54dfd4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b54e03c; end: 10b54e167;  */

long * FUN_10b54e03c(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = *(long **)(param_1 + 0x30);
    uVar3 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280ac(param_2,uVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x2;
    FUN_10b54e3a0(2,*(long *)(param_1 + 0x20),*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20));
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b54e0fc;
    puVar4 = (undefined8 *)*puVar9;
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b54e0fc;
  }
  func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f779454);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,3,puVar9,param_2);
  param_2 = plVar2;
LAB_10b54e0fc:
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x4;
    FUN_10b54e3a0(4,*(long *)(param_1 + 0x28),*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x30));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
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



/* Entry: 10b54e168; end: 10b54e22b;  */

long FUN_10b54e168(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b54e1a4;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b54e1a4:
    lVar4 = 0;
    goto LAB_10b54e1a8;
  }
  func_0x000107c282a0();
  lVar4 = uVar2 + 1;
LAB_10b54e1a8:
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x000108c6cd50();
      lVar4 = lVar4 + lVar3 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      FUN_10b5371f0();
      lVar4 = lVar4 + lVar3 + 1;
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b54e22c; end: 10b54e22f;  */

void FUN_10b54e22c(long param_1,long param_2)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10b54a65c();
      }
    }
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
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



/* Entry: 10b54e230; end: 10b54e33f;  */

void FUN_10b54e230(long param_1,long param_2)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = uVar2;
        func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x00010b537450(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10b54a65c();
      }
    }
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
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



/* Entry: 10b54e340; end: 10b54e347;  */

void FUN_10b54e340(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d050a0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b54e348; end: 10b54e39f;  */

void FUN_10b54e348(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d050a0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b54e3a0; end: 10b54e3b7;  */

void FUN_10b54e3a0(int param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 unaff_x19;
  
  func_0x0001001a597c();
  uVar1 = (ulong)(param_1 << 3 | 2);
  func_0x0001001a59d0(uVar1,unaff_x19);
  func_0x0001001a59d0(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 10b54e3b8; end: 10b54e48b;  */

undefined8 * FUN_10b54e3b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d05158;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000105991a48(param_1 + 3,param_2,param_3 + 0x18);
  lVar2 = param_3 + 0x38;
  func_0x000107c2809c(lVar2,param_2);
  param_1[7] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b54ea8c(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_3 + 0x50);
  return param_1;
}



/* Entry: 10b54e48c; end: 10b54e4bf;  */

long FUN_10b54e48c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54e4c0(param_1);
  return param_1;
}



/* Entry: 10b54e4c0; end: 10b54e507;  */

undefined8 FUN_10b54e4c0(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  
  func_0x000107c30258(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b54a850();
  }
  __ZdlPv();
  func_0x00010006804c(param_1 + 0x18);
  if (!(bool)in_ZR) {
    func_0x000105992fbc(unaff_x19,0x300380020);
  }
  return unaff_x19;
}



/* Entry: 10b54e508; end: 10b54e50b;  */

long FUN_10b54e508(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54e4c0(param_1);
  return param_1;
}



/* Entry: 10b54e50c; end: 10b54e51f;  */

void FUN_10b54e50c(void)

{
  FUN_10b54e48c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54e520; end: 10b54e52b;  */

undefined ** FUN_10b54e520(void)

{
  return &PTR_DAT_110d05198;
}



/* Entry: 10b54e52c; end: 10b54e59b;  */

void FUN_10b54e52c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000105991b74(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x38);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b54a8cc(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x50) = 0;
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



/* Entry: 10b54e59c; end: 10b54e7d7;  */

long * FUN_10b54e59c(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar6 < 0) {
    lVar6 = puVar10[1];
    if (lVar6 == 0) goto LAB_10b54e618;
    puVar4 = (undefined8 *)*puVar10;
  }
  else {
    puVar4 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_10b54e618;
  }
  func_0x000107c303d4(puVar4,lVar6,1,&UNK_10f779490);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,2,puVar10,param_2);
  param_2 = plVar2;
LAB_10b54e618:
  if (*(char *)(param_1 + 0x50) == '\x01') {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x50);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280a8(param_2,uVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b54eaf4(4,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x30));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x5;
    func_0x00010b54eaf4(5,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x20));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(int *)(param_1 + 0x18) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar2 = &lStack_78;
      func_0x00010564c19c(plVar2);
      while (plVar5 = plVar2, lVar6 = lStack_78, lStack_78 != 0) {
        lVar7 = lStack_78 + 8;
        lVar11 = lStack_78 + 0x20;
        func_0x00010b54eadc();
        lVar8 = (long)*(char *)(lVar6 + 0x1f);
        if (lVar8 < 0) {
          lVar7 = *(long *)(lVar6 + 8);
          lVar8 = *(long *)(lVar6 + 0x10);
        }
        func_0x00010b54ead0(lVar7,lVar8);
        lVar7 = (long)*(char *)(lVar6 + 0x37);
        if (lVar7 < 0) {
          lVar11 = *(long *)(lVar6 + 0x20);
          lVar7 = *(long *)(lVar6 + 0x28);
        }
        func_0x00010b54ead0(lVar11,lVar7);
        plVar2 = &lStack_78;
        func_0x000107c27d54(plVar2);
        param_2 = plVar5;
      }
    }
    else {
      plVar2 = &lStack_78;
      func_0x000105991b98(plVar2);
      puVar10 = apuStack_70[0];
      for (lVar6 = lStack_78 << 3; plVar5 = plVar2, lVar6 != 0; lVar6 = lVar6 + -8) {
        puVar12 = (undefined8 *)*puVar10;
        plVar2 = puVar12 + 3;
        func_0x00010b54eadc();
        lVar7 = (long)*(char *)((long)puVar12 + 0x17);
        puVar4 = puVar12;
        if (lVar7 < 0) {
          lVar7 = puVar12[1];
          puVar4 = (undefined8 *)*puVar12;
        }
        func_0x00010b54ead0(puVar4,lVar7);
        lVar7 = (long)*(char *)((long)puVar12 + 0x2f);
        if (lVar7 < 0) {
          plVar2 = (long *)puVar12[3];
          lVar7 = puVar12[4];
        }
        func_0x00010b54ead0(plVar2,lVar7);
        puVar10 = puVar10 + 1;
        param_2 = plVar5;
      }
      func_0x000105991ac8(apuStack_70);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar9 + 0x1f);
    if (lVar6 < 0) {
      lVar7 = *(long *)(uVar9 + 8);
      lVar6 = *(long *)(uVar9 + 0x10);
    }
    else {
      lVar7 = uVar9 + 8;
    }
    func_0x0001053930c4(param_3,lVar7,lVar6,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b54e7d8; end: 10b54e8bb;  */

void FUN_10b54e7d8(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long alStack_48 [3];
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  func_0x00010564c19c(alStack_48);
  while (iVar3 = (int)uVar5, alStack_48[0] != 0) {
    lVar4 = alStack_48[0] + 8;
    func_0x000105990b3c(lVar4,alStack_48[0] + 0x20);
    uVar5 = lVar4 + uVar5;
    func_0x000107c27d54(alStack_48);
  }
  uVar5 = *(ulong *)(param_1 + 0x38) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar5 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar5 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    iVar3 = iVar3 + (int)uVar5 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x40);
      FUN_10b5371f0();
      iVar3 = iVar3 + iVar2 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x48);
      FUN_10b54e8bc();
      iVar3 = iVar3 + iVar2 + 1;
    }
  }
  iVar3 = iVar3 + (uint)*(byte *)(param_1 + 0x50) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return;
}



/* Entry: 10b54e8bc; end: 10b54e8e7;  */

long FUN_10b54e8bc(long param_1)

{
  FUN_10b54aa00();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b54e8e8; end: 10b54e8eb;  */

void FUN_10b54e8e8(long param_1,long param_2)

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
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar5;
        func_0x00010b537450(uVar5,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x00010b54ea8c(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar5;
      }
      else {
        FUN_10b54aa94();
      }
    }
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 1;
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



/* Entry: 10b54e8ec; end: 10b54ea07;  */

void FUN_10b54e8ec(long param_1,long param_2)

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
  func_0x0001059929d4(param_1 + 0x18,param_2 + 0x18);
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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar5;
        func_0x00010b537450(uVar5,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x00010b54ea8c(uVar5,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar5;
      }
      else {
        FUN_10b54aa94();
      }
    }
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 1;
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



/* Entry: 10b54ea08; end: 10b54ea0f;  */

void FUN_10b54ea08(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x58);
  }
  *puVar1 = &PTR_FUN_110d05158;
  puVar1[1] = param_2;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0;
  puVar1[4] = 0x100000000;
  puVar1[5] = &DAT_10e5b4a18;
  puVar1[6] = param_2;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[7] = &DAT_11383d918;
  *(undefined1 *)(puVar1 + 10) = 0;
  return;
}



/* Entry: 10b54ea10; end: 10b54eacf;  */

void FUN_10b54ea10(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x58);
  }
  *puVar1 = &PTR_FUN_110d05158;
  puVar1[1] = param_1;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0;
  puVar1[4] = 0x100000000;
  puVar1[5] = &DAT_10e5b4a18;
  puVar1[6] = param_1;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[7] = &DAT_11383d918;
  *(undefined1 *)(puVar1 + 10) = 0;
  return;
}



/* Entry: 10b54ead0; end: 10b54eaff;  */

/* WARNING: Removing unreachable block (ram,0x0001006281e8) */

ulong FUN_10b54ead0(ulong param_1,int param_2)

{
  func_0x00010029f6ec(param_1,(long)param_2);
  if ((param_1 & 1) == 0) {
    func_0x000107c613d0();
    func_0x000107c303d0(&UNK_10f7741f2,0);
  }
  return param_1;
}



/* Entry: 10b54eb00; end: 10b54eb53;  */

void FUN_10b54eb00(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10b54e48c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b54eb54; end: 10b54eb8b;  */

long FUN_10b54eb54(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b54eb00(param_1);
  }
  return param_1;
}



/* Entry: 10b54eb8c; end: 10b54eb8f;  */

long FUN_10b54eb8c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b54eb00(param_1);
  }
  return param_1;
}



/* Entry: 10b54eb90; end: 10b54eba3;  */

void FUN_10b54eb90(void)

{
  FUN_10b54eb54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54eba4; end: 10b54ebaf;  */

undefined ** FUN_10b54eba4(void)

{
  return &PTR_DAT_110d052a0;
}



/* Entry: 10b54ebb0; end: 10b54ecb7;  */

void FUN_10b54ebb0(long param_1)

{
  ulong *puVar1;
  
  FUN_10b54eb00();
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



/* Entry: 10b54ecb8; end: 10b54ed77;  */

void FUN_10b54ecb8(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_10b54e8ec(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_10b54eb00(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x00010b53c56c(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
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



/* Entry: 10b54ed78; end: 10b54ee6f;  */

undefined8 * FUN_10b54ed78(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d05260;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x0001088f25c8(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10b54f5a8(param_1 + 5,param_2,param_3 + 0x28);
  func_0x00010598fd00(param_1 + 8,param_2,param_3 + 0x40);
  lVar1 = param_3 + 0x58;
  func_0x000107c2809c(lVar1,param_2);
  param_1[0xb] = lVar1;
  lVar1 = param_3 + 0x60;
  func_0x000107c2809c(lVar1,param_2);
  param_1[0xc] = lVar1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  uVar3 = *(undefined8 *)(param_3 + 0x70);
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  uVar5 = *(undefined8 *)(param_3 + 0x80);
  uVar4 = *(undefined8 *)(param_3 + 0x78);
  param_1[0x11] = *(undefined8 *)(param_3 + 0x88);
  param_1[0x10] = uVar5;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0xd] = uVar2;
  return param_1;
}



/* Entry: 10b54ee70; end: 10b54ee9f;  */

long FUN_10b54ee70(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54eea0(param_1);
  return param_1;
}



/* Entry: 10b54eea0; end: 10b54eecf;  */

long FUN_10b54eea0(long param_1)

{
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  func_0x000107c282b4(param_1 + 0x40);
  FUN_10b54f5d4(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x14)) {
    func_0x0001088f267c(param_1 + 0x10);
  }
  return param_1 + 0x10;
}



/* Entry: 10b54eed0; end: 10b54eed3;  */

long FUN_10b54eed0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54eea0(param_1);
  return param_1;
}



/* Entry: 10b54eed4; end: 10b54eee7;  */

void FUN_10b54eed4(void)

{
  FUN_10b54ee70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54eee8; end: 10b54eef3;  */

undefined ** FUN_10b54eee8(void)

{
  return &PTR_DAT_110d052f8;
}



/* Entry: 10b54eef4; end: 10b54ef5f;  */

void FUN_10b54eef4(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    func_0x0001053936e4(param_1 + 0x28);
  }
  func_0x000107c282c0(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
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



/* Entry: 10b54ef60; end: 10b54f457;  */

byte * FUN_10b54ef60(byte *param_1,byte *param_2,byte *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *extraout_x8;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  int iVar12;
  
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar10 + 0x17);
  pbVar7 = param_1;
  if (lVar4 < 0) {
    lVar4 = puVar10[1];
    if (lVar4 != 0) {
      puVar10 = (undefined8 *)*puVar10;
      goto LAB_10b54efa8;
    }
  }
  else if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_10b54efa8:
    func_0x000107c303d4(puVar10,lVar4,1,&UNK_10f779500);
    param_2 = param_3;
    func_0x00010b54f738(param_3,1);
    pbVar7 = param_2;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    pbVar7 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x68),param_2);
    param_2 = pbVar7;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    pbVar7 = param_3;
    func_0x00010599ccb0(param_3,*(long *)(param_1 + 0x70),param_2);
    param_2 = pbVar7;
  }
  pbVar2 = pbVar7;
  if (param_1[0x78] == 1) {
    func_0x00010b54f6e8();
    pbVar2 = (byte *)0x20;
    func_0x000107c280a8(0x20,pbVar7);
    func_0x00010b54f6fc();
    param_2 = pbVar2;
  }
  uVar9 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar9) {
    func_0x00010b54f6e8();
    pbVar7 = pbVar2 + 2;
    *pbVar2 = 0x2a;
    for (; 0x7f < uVar9; uVar9 = uVar9 >> 7) {
      pbVar7[-1] = (byte)uVar9 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    pbVar7[-1] = (byte)uVar9;
    puVar11 = *(ulong **)(param_1 + 0x18);
    puVar1 = puVar11 + *(int *)(param_1 + 0x10);
    do {
      func_0x00010b54f6e8();
      uVar5 = *puVar11;
      pbVar7 = pbVar2;
      while( true ) {
        param_2 = pbVar7 + 1;
        if (uVar5 < 0x80) break;
        *pbVar7 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar7 = param_2;
      }
      puVar11 = puVar11 + 1;
      *pbVar7 = (byte)uVar5;
    } while (puVar11 < puVar1);
  }
  iVar12 = *(int *)(param_1 + 0x30);
  for (iVar8 = 0; iVar12 != iVar8; iVar8 = iVar8 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    puVar11 = (ulong *)(param_1 + 0x28);
    if ((uVar5 & 1) != 0) {
      puVar11 = (ulong *)(uVar5 + (long)iVar8 * 8 + 7);
    }
    pbVar2 = (byte *)0x6;
    func_0x000107c303cc(6,*puVar11,*(undefined4 *)(*puVar11 + 0x18),param_2,param_3);
    param_2 = pbVar2;
  }
  pbVar7 = pbVar2;
  if ((param_1[0x79] & 1) != 0) {
    func_0x00010b54f6e8();
    pbVar7 = (byte *)0x38;
    func_0x000107c280a8(0x38,pbVar2);
    func_0x00010b54f6fc();
    param_2 = pbVar7;
  }
  pbVar2 = pbVar7;
  if (param_1[0x7a] == 1) {
    func_0x00010b54f6e8();
    pbVar2 = (byte *)0x40;
    func_0x000107c280a8(0x40,pbVar7);
    func_0x00010b54f6fc();
    param_2 = pbVar2;
  }
  pbVar7 = pbVar2;
  if (*(int *)(param_1 + 0x7c) != 0) {
    func_0x00010b54f6e8();
    pbVar7 = (byte *)(ulong)*(uint *)(param_1 + 0x7c);
    uVar3 = 0x48;
    func_0x000107c280a8(0x48,pbVar2);
    func_0x000107c280b8(pbVar7,uVar3);
    param_2 = pbVar7;
  }
  for (uVar5 = (ulong)(*(uint *)(param_1 + 0x48) &
                      ((int)*(uint *)(param_1 + 0x48) >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
      uVar5 = uVar5 - 1) {
    func_0x00010b54f720();
    pbVar7 = param_3;
    func_0x000108922b58(param_3,10,*extraout_x8,param_2);
    param_2 = pbVar7;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010b54f6e8();
    param_2 = *(byte **)(param_1 + 0x80);
    uVar3 = 0x58;
    func_0x000107c280a8(0x58,pbVar7);
    func_0x000107c280ac(param_2,uVar3);
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar10[1];
    if (lVar4 == 0) goto LAB_10b54f214;
    puVar10 = (undefined8 *)*puVar10;
  }
  else if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_10b54f214;
  func_0x000107c303d4(puVar10,lVar4,1,&UNK_10f77952f);
  param_2 = param_3;
  func_0x00010b54f738(param_3,0xc);
LAB_10b54f214:
  pbVar7 = param_2;
  if (*(long *)(param_1 + 0x88) != 0) {
    pbVar7 = param_3;
    func_0x000106af6948(param_3,*(long *)(param_1 + 0x88),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return pbVar7;
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
  if ((long)(int)uVar5 <= *(long *)param_3 - (long)pbVar7) {
    _memcpy(pbVar7,lVar4,uVar5 & 0xffffffff);
    return pbVar7 + (int)uVar5;
  }
  while( true ) {
    iVar12 = ((int)*(undefined8 *)param_3 - (int)pbVar7) + 0x10;
    iVar8 = (int)uVar5;
    uVar5 = (ulong)(uint)(iVar8 - iVar12);
    if (iVar8 - iVar12 == 0 || iVar8 < iVar12) break;
    func_0x00010b4d5738();
    pbVar2 = pbVar7 + iVar12;
    pbVar7 = param_3;
    func_0x000107c303e4(param_3,pbVar2);
  }
  func_0x00010b4d5738();
  return pbVar7 + iVar8;
}



/* Entry: 10b54f458; end: 10b54f45b;  */

void FUN_10b54f458(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x0001088f1584(param_1 + 0x10,param_2 + 0x10);
  FUN_10b54f588(param_1 + 0x28,param_2 + 0x28);
  func_0x00010598fce8(param_1 + 0x40,param_2 + 0x40);
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
  if (*(long *)(param_2 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_2 + 0x68);
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_2 + 0x70);
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  if (*(char *)(param_2 + 0x79) == '\x01') {
    *(undefined1 *)(param_1 + 0x79) = 1;
  }
  if (*(char *)(param_2 + 0x7a) == '\x01') {
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
  }
  if (*(long *)(param_2 + 0x80) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_2 + 0x80);
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
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



/* Entry: 10b54f45c; end: 10b54f587;  */

void FUN_10b54f45c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x0001088f1584(param_1 + 0x10,param_2 + 0x10);
  FUN_10b54f588(param_1 + 0x28,param_2 + 0x28);
  func_0x00010598fce8(param_1 + 0x40,param_2 + 0x40);
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
  if (*(long *)(param_2 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_2 + 0x68);
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    *(long *)(param_1 + 0x70) = *(long *)(param_2 + 0x70);
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  if (*(char *)(param_2 + 0x79) == '\x01') {
    *(undefined1 *)(param_1 + 0x79) = 1;
  }
  if (*(char *)(param_2 + 0x7a) == '\x01') {
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
  }
  if (*(long *)(param_2 + 0x80) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_2 + 0x80);
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
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



/* Entry: 10b54f588; end: 10b54f5a7;  */

void FUN_10b54f588(long *param_1,long param_2)

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



/* Entry: 10b54f5a8; end: 10b54f5d3;  */

undefined8 * FUN_10b54f5a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b54f588(param_1,param_3);
  return param_1;
}



/* Entry: 10b54f5d4; end: 10b54f603;  */

long * FUN_10b54f5d4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b54f604; end: 10b54f6e7;  */

long FUN_10b54f604(long param_1)

{
  func_0x000107c282b4(param_1 + 0x30);
  FUN_10b54f5d4(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 4)) {
    func_0x0001088f267c(param_1);
  }
  return param_1;
}



/* Entry: 10b54f6e8; end: 10b54f743;  */

ulong * FUN_10b54f6e8(void)

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



/* Entry: 10b54f744; end: 10b54f803;  */

undefined8 * FUN_10b54f744(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d05388;
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
    func_0x00010b54b0d4(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b54b0d4(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 10b54f804; end: 10b54f837;  */

long FUN_10b54f804(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54f838(param_1);
  return param_1;
}



/* Entry: 10b54f838; end: 10b54f87f;  */

void FUN_10b54f838(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b53ebe0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b53ebe0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54f880; end: 10b54f883;  */

long FUN_10b54f880(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54f838(param_1);
  return param_1;
}



/* Entry: 10b54f884; end: 10b54f897;  */

void FUN_10b54f884(void)

{
  FUN_10b54f804();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54f898; end: 10b54f8a3;  */

undefined ** FUN_10b54f898(void)

{
  return &PTR_DAT_110d053c8;
}



/* Entry: 10b54f8a4; end: 10b54f917;  */

void FUN_10b54f8a4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b53ec64(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b53ec64(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
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



/* Entry: 10b54f918; end: 10b54fb5f;  */

long * FUN_10b54f918(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  plVar2 = param_1;
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,param_1[5],*(undefined4 *)(param_1[5] + 0x30),param_2,param_3);
    param_2 = plVar2;
  }
  lVar5 = (long)*(char *)((param_1[3] & 0xfffffffffffffffcU) + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)((param_1[3] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar5 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,3);
    param_2 = plVar2;
  }
  plVar7 = plVar2;
  if (param_1[7] != 0) {
    func_0x00010b54fd24();
    plVar7 = (long *)param_1[7];
    uVar3 = 0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x000107c280ac(plVar7,uVar3);
    param_2 = plVar7;
  }
  if ((int)param_1[8] != 0) {
    func_0x00010b54fd24();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 8);
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,plVar7);
    func_0x000107c280b8(param_2,uVar3);
  }
  plVar2 = param_2;
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x6;
    func_0x000107c303cc(6,param_1[6],*(undefined4 *)(param_1[6] + 0x30),param_2,param_3);
  }
  lVar5 = (long)*(char *)((param_1[4] & 0xfffffffffffffffcU) + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)((param_1[4] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar5 != 0) {
    plVar2 = param_3;
    func_0x000107c280a0(param_3,7);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar5 = *(long *)(uVar6 + 8);
      uVar4 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar5 = uVar6 + 8;
    }
    if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar2) + 0x10;
        iVar8 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar2 + (long)iVar9;
        plVar2 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar8);
    }
    _memcpy(plVar2,lVar5,uVar4 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)uVar4);
  }
  return plVar2;
}



/* Entry: 10b54fb60; end: 10b54fb63;  */

void FUN_10b54fb60(long param_1,long param_2)

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
        func_0x00010b54b0d4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010b54b0d4(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b53eeec();
      }
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
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



/* Entry: 10b54fb64; end: 10b54fcaf;  */

void FUN_10b54fb64(long param_1,long param_2)

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
        func_0x00010b54b0d4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00010b54b0d4(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        FUN_10b53eeec();
      }
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
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



/* Entry: 10b54fcb0; end: 10b54fcb7;  */

void FUN_10b54fcb0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x48);
  }
  *puVar1 = &PTR_FUN_110d05388;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10b54fcb8; end: 10b54fd17;  */

void FUN_10b54fcb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x48);
  }
  *puVar1 = &PTR_FUN_110d05388;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



/* Entry: 10b54fd18; end: 10b54fd2f;  */

void FUN_10b54fd18(void)

{
  return;
}



/* Entry: 10b54fd30; end: 10b5501ab;  */

void FUN_10b54fd30(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  ulong extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong extraout_x8_22;
  ulong extraout_x8_23;
  ulong extraout_x8_24;
  ulong extraout_x8_25;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54e48c();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b536530();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53d570();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53e754();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b549730();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b536c88();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54c168();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54ee70();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b549b7c();
    }
    break;
  default:
    goto LAB_10b55005c;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b5398d0();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53ad14();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b548a4c();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54d6d8();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53c158();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b5454fc();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53df08();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_23;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54df3c();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_22;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54ac54();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53e580();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54a078();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_24;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b536088();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54d238();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b537634();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b549da4();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54f804();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b57dbd0();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_25;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53e2f4();
    }
  }
  __ZdlPv();
LAB_10b55005c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b5501ac; end: 10b5501d7;  */

undefined8 FUN_10b5501ac(undefined8 param_1)

{
  func_0x00010b551b50();
  FUN_10b5501d8(param_1);
  return param_1;
}



/* Entry: 10b5501d8; end: 10b5501eb;  */

void FUN_10b5501d8(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong extraout_x8_17;
  ulong extraout_x8_18;
  ulong extraout_x8_19;
  ulong extraout_x8_20;
  ulong extraout_x8_21;
  ulong extraout_x8_22;
  ulong extraout_x8_23;
  ulong extraout_x8_24;
  ulong extraout_x8_25;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_12;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54e48c();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_13;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b536530();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53d570();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_18;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53e754();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_19;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b549730();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b536c88();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_14;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54c168();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_15;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54ee70();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_21;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b549b7c();
    }
    break;
  default:
    goto LAB_10b55005c;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_20;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b5398d0();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53ad14();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_10;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b548a4c();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54d6d8();
    }
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53c158();
    }
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_16;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b5454fc();
    }
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_17;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53df08();
    }
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_23;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54df3c();
    }
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_22;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54ac54();
    }
    break;
  case 0x14:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53e580();
    }
    break;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54a078();
    }
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_24;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b536088();
    }
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54d238();
    }
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b537634();
    }
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b549da4();
    }
    break;
  case 0x1a:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_11;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b54f804();
    }
    break;
  case 0x1b:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b57dbd0();
    }
    break;
  case 0x1c:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b551a48();
      uVar1 = extraout_x8_25;
    }
    if (uVar1 != 0) goto LAB_10b55005c;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b53e2f4();
    }
  }
  __ZdlPv();
LAB_10b55005c:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b5501ec; end: 10b5501ff;  */

void FUN_10b5501ec(void)

{
  FUN_10b5501ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b550200; end: 10b55020b;  */

undefined ** FUN_10b550200(void)

{
  return &PTR_DAT_110d05518;
}



/* Entry: 10b55020c; end: 10b550493;  */

void FUN_10b55020c(long param_1)

{
  ulong *puVar1;
  
  FUN_10b54fd30();
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



/* Entry: 10b550494; end: 10b550497;  */

void FUN_10b550494(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b551b84();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b54fd30();
      }
      *(int *)(unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54e8ec();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c56c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53687c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c4f4();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53d984();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c5e4();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53ea08();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c530();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b5499c4();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b55142c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53722c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c5a8();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54c96c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      FUN_10b533f94();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54f45c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b55145c();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        func_0x00010b549b54();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551490();
      break;
    default:
      goto LAB_10b550a14;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b539ab4();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5514c0();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53b5d0();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5514f4();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b549274();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551530();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54dc5c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b55156c();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53c398();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5515a0();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b545d24();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5515d0();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53e100();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551604();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54e230();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      FUN_10b532da4();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54af64();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551634();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        func_0x00010b53e564();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551668();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54a200();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551698();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        func_0x00010b53606c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5516c8();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54d3ec();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5516f8();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b5379cc();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551728();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        func_0x00010b549d60();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5084dc();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54fb64();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551758();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b57e45c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551788();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53e47c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5517bc();
    }
    *(long *)(unaff_x21 + 0x10) = param_1;
  }
LAB_10b550a14:
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



/* Entry: 10b550498; end: 10b550a37;  */

void FUN_10b550498(long param_1)

{
  int iVar1;
  int iVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b551b84();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b54fd30();
      }
      *(int *)(unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54e8ec();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c56c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53687c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c4f4();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53d984();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c5e4();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53ea08();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c530();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b5499c4();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b55142c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53722c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b53c5a8();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54c96c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      FUN_10b533f94();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54f45c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b55145c();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        func_0x00010b549b54();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551490();
      break;
    default:
      goto LAB_10b550a14;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b539ab4();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5514c0();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53b5d0();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5514f4();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b549274();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551530();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54dc5c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b55156c();
      break;
    case 0xf:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53c398();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5515a0();
      break;
    case 0x10:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b545d24();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5515d0();
      break;
    case 0x11:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53e100();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551604();
      break;
    case 0x12:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54e230();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      FUN_10b532da4();
      break;
    case 0x13:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54af64();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551634();
      break;
    case 0x14:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        func_0x00010b53e564();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551668();
      break;
    case 0x15:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54a200();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551698();
      break;
    case 0x16:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        func_0x00010b53606c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5516c8();
      break;
    case 0x17:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54d3ec();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5516f8();
      break;
    case 0x18:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b5379cc();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551728();
      break;
    case 0x19:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        func_0x00010b549d60();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5084dc();
      break;
    case 0x1a:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b54fb64();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551758();
      break;
    case 0x1b:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b57e45c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b551788();
      break;
    case 0x1c:
      if (iVar2 == iVar1) {
        func_0x00010b551a14();
        FUN_10b53e47c();
        goto LAB_10b550a14;
      }
      func_0x00010b551a60();
      func_0x00010b5517bc();
    }
    *(long *)(unaff_x21 + 0x10) = param_1;
  }
LAB_10b550a14:
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



/* Entry: 10b550a38; end: 10b550a63;  */

long FUN_10b550a38(long param_1)

{
  func_0x00010b551b50();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b550a64; end: 10b550a67;  */

long FUN_10b550a64(long param_1)

{
  func_0x00010b551b50();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b550a68; end: 10b550a7b;  */

void FUN_10b550a68(void)

{
  FUN_10b550a38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b550a7c; end: 10b550a87;  */

undefined ** FUN_10b550a7c(void)

{
  return &PTR_DAT_110d05568;
}



/* Entry: 10b550a88; end: 10b550abf;  */

void FUN_10b550a88(long param_1)

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



/* Entry: 10b550ac0; end: 10b550ba3;  */

long * FUN_10b550ac0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b550b60;
    puVar3 = (undefined8 *)*puVar8;
  }
  else {
    puVar3 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b550b60;
  }
  func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f779568);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,param_2);
  param_2 = plVar1;
LAB_10b550b60:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
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



/* Entry: 10b550ba4; end: 10b550ca7;  */

void FUN_10b550ba4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b550bdc;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b550bdc:
    iVar1 = 0;
    goto LAB_10b550be0;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b550be0:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 10b550ca8; end: 10b550d8f;  */

undefined8 * FUN_10b550ca8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d054d8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b551b58();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b5512f4(param_1 + 3,param_2,param_3 + 0x18);
  lVar2 = param_3 + 0x30;
  func_0x000107c2809c(lVar2,param_2);
  param_1[6] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5517ec(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b55181c(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b5519e4(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x50);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_3 + 0x58);
  param_1[10] = uVar3;
  return param_1;
}



/* Entry: 10b550d90; end: 10b550dbb;  */

undefined8 FUN_10b550d90(undefined8 param_1)

{
  func_0x00010b551b50();
  FUN_10b550dbc(param_1);
  return param_1;
}



/* Entry: 10b550dbc; end: 10b550e13;  */

long * FUN_10b550dbc(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b53c6e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5501ac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b53d048();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b550e14; end: 10b550e17;  */

undefined8 FUN_10b550e14(undefined8 param_1)

{
  func_0x00010b551b50();
  FUN_10b550dbc(param_1);
  return param_1;
}



/* Entry: 10b550e18; end: 10b550e2b;  */

void FUN_10b550e18(void)

{
  FUN_10b550d90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b550e2c; end: 10b550e37;  */

undefined ** FUN_10b550e2c(void)

{
  return &PTR_DAT_110d055c0;
}



/* Entry: 10b550e38; end: 10b550ec7;  */

void FUN_10b550e38(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b53c774(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b55020c(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b53d0a0(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
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



/* Entry: 10b550ec8; end: 10b551193;  */

long * FUN_10b550ec8(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 2);
  plVar3 = param_1;
  if ((uVar2 & 1) != 0) {
    param_2 = (long *)0x1;
    func_0x00010b551acc(1,param_1[7],*(undefined4 *)(param_1[7] + 0x1c));
    plVar3 = param_2;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar3 = (long *)0x2;
    func_0x00010b551acc(2,param_1[8],*(undefined4 *)(param_1[8] + 0x18));
    param_2 = plVar3;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar3 = (long *)0x3;
    func_0x00010b551acc(3,param_1[9],*(undefined4 *)(param_1[9] + 0x40));
    param_2 = plVar3;
  }
  plVar8 = plVar3;
  if (param_1[10] != 0) {
    func_0x00010b551b44();
    plVar8 = (long *)param_1[10];
    uVar4 = 0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x000107c280ac(plVar8,uVar4);
    param_2 = plVar8;
  }
  lVar6 = param_1[4];
  for (iVar9 = 0; (int)lVar6 != iVar9; iVar9 = iVar9 + 1) {
    uVar5 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar9 * 8 + 7);
    }
    plVar8 = (long *)0x5;
    func_0x00010b551acc(5,*puVar1,*(undefined4 *)(*puVar1 + 0x1c));
    param_2 = plVar8;
  }
  lVar6 = (long)*(char *)((param_1[6] & 0xfffffffffffffffcU) + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)((param_1[6] & 0xfffffffffffffffcU) + 8);
  }
  if (lVar6 != 0) {
    plVar8 = param_3;
    func_0x000107c280a0(param_3,6);
    param_2 = plVar8;
  }
  if ((int)param_1[0xb] != 0) {
    func_0x00010b551b44();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0xb);
    uVar4 = 0x38;
    func_0x000107c280a8(0x38,plVar8);
    func_0x000107c280b8(param_2,uVar4);
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar7 = param_1[1] & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar6 = *(long *)(uVar7 + 8);
    uVar5 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    lVar6 = uVar7 + 8;
  }
  if ((long)(int)uVar5 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar6,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  while( true ) {
    iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar9 = (int)uVar5;
    uVar5 = (ulong)(uint)(iVar9 - iVar10);
    if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
    func_0x00010b4d5738();
    lVar6 = (long)param_2 + (long)iVar10;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar6);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar9);
}



/* Entry: 10b551194; end: 10b551197;  */

void FUN_10b551194(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b551b84();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b5512cc(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x21 + 0x30,uVar2,uVar3);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5517ec(unaff_x22,*(undefined8 *)(unaff_x20 + 0x38));
        *(ulong *)(unaff_x21 + 0x38) = uVar2;
      }
      else {
        func_0x00010b53c6ac();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x40) == 0) {
        uVar2 = unaff_x22;
        FUN_10b55181c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x40));
        *(ulong *)(unaff_x21 + 0x40) = uVar2;
      }
      else {
        FUN_10b550498();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x48) == 0) {
        FUN_10b5519e4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x48));
        *(ulong *)(unaff_x21 + 0x48) = unaff_x22;
      }
      else {
        FUN_10b53d3c4();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b551198; end: 10b5512cb;  */

void FUN_10b551198(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b551b84();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b5512cc(unaff_x21 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x21 + 0x30,uVar2,uVar3);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x38) == 0) {
        uVar2 = unaff_x22;
        func_0x00010b5517ec(unaff_x22,*(undefined8 *)(unaff_x20 + 0x38));
        *(ulong *)(unaff_x21 + 0x38) = uVar2;
      }
      else {
        func_0x00010b53c6ac();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x40) == 0) {
        uVar2 = unaff_x22;
        FUN_10b55181c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x40));
        *(ulong *)(unaff_x21 + 0x40) = uVar2;
      }
      else {
        FUN_10b550498();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x48) == 0) {
        FUN_10b5519e4(unaff_x22,*(undefined8 *)(unaff_x20 + 0x48));
        *(ulong *)(unaff_x21 + 0x48) = unaff_x22;
      }
      else {
        FUN_10b53d3c4();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x21 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5512cc; end: 10b5512f3;  */

void FUN_10b5512cc(long *param_1,long param_2)

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



/* Entry: 10b5512f4; end: 10b55131f;  */

undefined8 * FUN_10b5512f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5512cc(param_1,param_3);
  return param_1;
}



/* Entry: 10b551320; end: 10b55134f;  */

long * FUN_10b551320(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b551350; end: 10b55181b;  */

void FUN_10b551350(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b551a8c();
  }
  else {
    func_0x00010b551b38();
  }
  *puVar1 = &PTR_FUN_110d05438;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b55181c; end: 10b5519e3;  */

undefined8 * FUN_10b55181c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b551a8c();
  }
  else {
    func_0x00010b551a3c();
  }
  puVar3 = puVar2 + 1;
  *puVar3 = param_1;
  *puVar2 = &PTR_DAT_110d05488;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b551b58();
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((long)puVar2 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
    func_0x00010b551a54();
    func_0x00010b53c56c();
    break;
  case 2:
    func_0x00010b551a54();
    func_0x00010b53c4f4();
    break;
  case 3:
    func_0x00010b551a54();
    func_0x00010b53c5e4();
    break;
  case 4:
    func_0x00010b551a54();
    func_0x00010b53c530();
    break;
  case 5:
    func_0x00010b551a54();
    func_0x00010b55142c();
    break;
  case 6:
    func_0x00010b551a54();
    func_0x00010b53c5a8();
    break;
  case 7:
    func_0x00010b551a54();
    FUN_10b533f94();
    break;
  case 8:
    func_0x00010b551a54();
    func_0x00010b55145c();
    break;
  case 9:
    func_0x00010b551a54();
    func_0x00010b551490();
    break;
  default:
    goto LAB_10b5519d8;
  case 0xb:
    func_0x00010b551a54();
    func_0x00010b5514c0();
    break;
  case 0xc:
    func_0x00010b551a54();
    func_0x00010b5514f4();
    break;
  case 0xd:
    func_0x00010b551a54();
    func_0x00010b551530();
    break;
  case 0xe:
    func_0x00010b551a54();
    func_0x00010b55156c();
    break;
  case 0xf:
    func_0x00010b551a54();
    func_0x00010b5515a0();
    break;
  case 0x10:
    func_0x00010b551a54();
    func_0x00010b5515d0();
    break;
  case 0x11:
    func_0x00010b551a54();
    func_0x00010b551604();
    break;
  case 0x12:
    func_0x00010b551a54();
    FUN_10b532da4();
    break;
  case 0x13:
    func_0x00010b551a54();
    func_0x00010b551634();
    break;
  case 0x14:
    func_0x00010b551a54();
    func_0x00010b551668();
    break;
  case 0x15:
    func_0x00010b551a54();
    func_0x00010b551698();
    break;
  case 0x16:
    func_0x00010b551a54();
    func_0x00010b5516c8();
    break;
  case 0x17:
    func_0x00010b551a54();
    func_0x00010b5516f8();
    break;
  case 0x18:
    func_0x00010b551a54();
    func_0x00010b551728();
    break;
  case 0x19:
    func_0x00010b551a54();
    func_0x00010b5084dc();
    break;
  case 0x1a:
    func_0x00010b551a54();
    func_0x00010b551758();
    break;
  case 0x1b:
    func_0x00010b551a54();
    func_0x00010b551788();
    break;
  case 0x1c:
    func_0x00010b551a54();
    func_0x00010b5517bc();
  }
  puVar2[2] = puVar3;
LAB_10b5519d8:
  return puVar2;
}



/* Entry: 10b5519e4; end: 10b551a13;  */

undefined8 * FUN_10b5519e4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  func_0x00010b551a6c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b551b7c();
  }
  else {
    func_0x00010b551ab8();
  }
  func_0x00010b551a78();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d02230;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c282d4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010598fd00(param_1 + 5,param_2,param_3 + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10b551a14; end: 10b551b97;  */

undefined8 FUN_10b551a14(void)

{
  long unaff_x21;
  
  return *(undefined8 *)(unaff_x21 + 0x10);
}



/* Entry: 10b551b98; end: 10b551c23;  */

void FUN_10b551b98(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b551bf4;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b55253c();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 1) goto LAB_10b551bf4;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b551bf4;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b552ac4();
    }
  }
  __ZdlPv();
LAB_10b551bf4:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b551c24; end: 10b551cb3;  */

undefined8 * FUN_10b551c24(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110d05660;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  if (iVar1 == 2) {
    func_0x00010b5520cc(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  else {
    if (iVar1 != 1) {
      return param_1;
    }
    func_0x00010b552088(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}


