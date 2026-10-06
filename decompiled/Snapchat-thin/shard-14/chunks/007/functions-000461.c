/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5b1ce8; end: 10b5b1e97;  */

void FUN_10b5b1ce8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d16780;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  return;
}



/* Entry: 10b5b1e98; end: 10b5b1fc7;  */

long FUN_10b5b1e98(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5b1fc8; end: 10b5b2047;  */

undefined8 * FUN_10b5b1fc8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d16978;
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
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_3 + 0x30);
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 10b5b2048; end: 10b5b2077;  */

long FUN_10b5b2048(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b2078(param_1);
  return param_1;
}



/* Entry: 10b5b2078; end: 10b5b2093;  */

void FUN_10b5b2078(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b2094; end: 10b5b2097;  */

long FUN_10b5b2094(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b2078(param_1);
  return param_1;
}



/* Entry: 10b5b2098; end: 10b5b20ab;  */

void FUN_10b5b2098(void)

{
  FUN_10b5b2048();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b20ac; end: 10b5b20b7;  */

undefined ** FUN_10b5b20ac(void)

{
  return &PTR_DAT_110d169b8;
}



/* Entry: 10b5b20b8; end: 10b5b2107;  */

void FUN_10b5b20b8(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
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



/* Entry: 10b5b2108; end: 10b5b223b;  */

long * FUN_10b5b2108(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((int)param_1[4] != 0) {
    plVar2 = param_1;
    func_0x00010b5b2420();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b5b2414();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    func_0x00010b5b2420();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b5b2414();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if ((int)param_1[5] != 0) {
    func_0x00010b5b2420();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b5b2414();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b5b2420();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b5b2414();
    param_2 = plVar2;
  }
  if ((char)param_1[6] == '\x01') {
    func_0x00010b5b2420();
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b5b2414();
  }
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar1 = (long *)0x6;
    func_0x000107c303cc(6,param_1[3],*(undefined4 *)(param_1[3] + 0x20),param_2,param_3);
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
    if (*param_3 - (long)plVar1 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar1 + (long)iVar7;
        plVar1 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar1 + (long)iVar6);
    }
    _memcpy(plVar1,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar1 + (long)(int)uVar4);
  }
  return plVar1;
}



/* Entry: 10b5b223c; end: 10b5b22cb;  */

void FUN_10b5b223c(long param_1)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x000108c6cd50();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10b5b23f8();
    iVar1 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10b5b23f8();
    iVar1 = extraout_w8_00;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10b5b23f8();
    iVar1 = extraout_w8_01;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_10b5b23f8();
    iVar1 = extraout_w8_02;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x30) * 2;
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



/* Entry: 10b5b22cc; end: 10b5b22cf;  */

void FUN_10b5b22cc(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
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



/* Entry: 10b5b22d0; end: 10b5b23a3;  */

void FUN_10b5b22d0(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
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



/* Entry: 10b5b23a4; end: 10b5b23ab;  */

void FUN_10b5b23a4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d16978;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b5b23ac; end: 10b5b23f7;  */

void FUN_10b5b23ac(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d16978;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b5b23f8; end: 10b5b243f;  */

void FUN_10b5b23f8(void)

{
  return;
}



/* Entry: 10b5b2440; end: 10b5b2513;  */

undefined8 * FUN_10b5b2440(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d16a28;
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
    func_0x00010b5b2ab4(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b533a9c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b57ea3c(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  param_1[8] = *(undefined8 *)(param_3 + 0x40);
  return param_1;
}



/* Entry: 10b5b2514; end: 10b5b2547;  */

long FUN_10b5b2514(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b2548(param_1);
  return param_1;
}



/* Entry: 10b5b2548; end: 10b5b259f;  */

void FUN_10b5b2548(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b581e38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b52d4c0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b57fd78();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b25a0; end: 10b5b25a3;  */

long FUN_10b5b25a0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b2548(param_1);
  return param_1;
}



/* Entry: 10b5b25a4; end: 10b5b25b7;  */

void FUN_10b5b25a4(void)

{
  FUN_10b5b2514();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b25b8; end: 10b5b25c3;  */

undefined ** FUN_10b5b25b8(void)

{
  return &PTR_DAT_110d16a68;
}



/* Entry: 10b5b25c4; end: 10b5b264b;  */

void FUN_10b5b25c4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b581ee8(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b52d588(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b57ff5c(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
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



/* Entry: 10b5b264c; end: 10b5b27b3;  */

long * FUN_10b5b264c(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  plVar2 = param_2;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar2 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x40),param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)0x2;
    FUN_10b5b2af8(2,*(long *)(param_1 + 0x28),*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14));
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b5b26c8;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b5b26c8:
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77df4b);
    plVar2 = param_3;
    func_0x00010b5b2b10(param_3,3);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar2 = (long *)0x4;
    FUN_10b5b2af8(4,*(long *)(param_1 + 0x30),*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar2 = (long *)0x5;
    FUN_10b5b2af8(5,*(long *)(param_1 + 0x38),*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x14));
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b5b2760;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b5b2760;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77df6c);
  plVar2 = param_3;
  func_0x00010b5b2b10(param_3,6);
LAB_10b5b2760:
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



/* Entry: 10b5b27b4; end: 10b5b28d3;  */

long FUN_10b5b27b4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b5b27f0;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b5b27f0:
    lVar4 = 0;
    goto LAB_10b5b27f4;
  }
  func_0x000107c282a0();
  lVar4 = uVar2 + 1;
LAB_10b5b27f4:
  uVar2 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + uVar2 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      FUN_10b582300();
      lVar4 = lVar4 + lVar3 + (ulong)((int)LZCOUNT((int)lVar3) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      func_0x00010b530918();
      lVar4 = lVar4 + lVar3 + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x38);
      FUN_10b57e42c();
      lVar4 = lVar4 + lVar3 + 1;
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar4;
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



/* Entry: 10b5b28d4; end: 10b5b28d7;  */

void FUN_10b5b28d4(long param_1,long param_2)

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
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x00010b5b2ab4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b5824dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        FUN_10b533a9c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        FUN_10b52d950();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x00010b57ea3c(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_10b580758();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
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



/* Entry: 10b5b28d8; end: 10b5b2a4b;  */

void FUN_10b5b28d8(long param_1,long param_2)

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
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x00010b5b2ab4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        FUN_10b5824dc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        FUN_10b533a9c(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        FUN_10b52d950();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x00010b57ea3c(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        FUN_10b580758();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
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



/* Entry: 10b5b2a4c; end: 10b5b2a53;  */

void FUN_10b5b2a4c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d16a28;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10b5b2a54; end: 10b5b2af7;  */

void FUN_10b5b2a54(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d16a28;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10b5b2af8; end: 10b5b2b1b;  */

void FUN_10b5b2af8(int param_1,long *param_2,undefined8 param_3)

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



/* Entry: 10b5b2b1c; end: 10b5b2b4b;  */

long FUN_10b5b2b1c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b2b4c; end: 10b5b2b4f;  */

long FUN_10b5b2b4c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5b2b50; end: 10b5b2b63;  */

void FUN_10b5b2b50(void)

{
  FUN_10b5b2b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b2b64; end: 10b5b2b6f;  */

undefined ** FUN_10b5b2b64(void)

{
  return &PTR_DAT_110d16b58;
}



/* Entry: 10b5b2b70; end: 10b5b2bab;  */

void FUN_10b5b2b70(long param_1)

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



/* Entry: 10b5b2bac; end: 10b5b2c6b;  */

long * FUN_10b5b2bac(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 == 0) goto LAB_10b5b2c10;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b5b2c10;
  func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f77df87);
  param_2 = param_3;
  func_0x00010b5b323c(param_3,1);
LAB_10b5b2c10:
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x18),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if (*param_3 - (long)plVar1 < (long)(int)uVar3) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar7;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b5b2c6c; end: 10b5b2d6b;  */

void FUN_10b5b2c6c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b5b2ca4;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b5b2ca4:
    iVar1 = 0;
    goto LAB_10b5b2ca8;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b5b2ca8:
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



/* Entry: 10b5b2d6c; end: 10b5b2def;  */

undefined8 * FUN_10b5b2d6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d16b18;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5b3124(param_1 + 2,param_2,param_3 + 0x10);
  param_3 = param_3 + 0x28;
  func_0x000107c2809c(param_3,param_2);
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 10b5b2df0; end: 10b5b2e1f;  */

long FUN_10b5b2df0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b2e20(param_1);
  return param_1;
}



/* Entry: 10b5b2e20; end: 10b5b2e47;  */

long * FUN_10b5b2e20(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5b2e48; end: 10b5b2e4b;  */

long FUN_10b5b2e48(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b2e20(param_1);
  return param_1;
}



/* Entry: 10b5b2e4c; end: 10b5b2e5f;  */

void FUN_10b5b2e4c(void)

{
  FUN_10b5b2df0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b2e60; end: 10b5b2e6b;  */

undefined ** FUN_10b5b2e60(void)

{
  return &PTR_DAT_110d16ba8;
}



/* Entry: 10b5b2e6c; end: 10b5b2eb7;  */

void FUN_10b5b2e6c(long param_1)

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



/* Entry: 10b5b2eb8; end: 10b5b2fbf;  */

long * FUN_10b5b2eb8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar8 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),param_2,param_3);
    param_2 = plVar2;
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b5b2f6c;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b5b2f6c;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77dfc3);
  param_2 = param_3;
  func_0x00010b5b323c(param_3,2);
LAB_10b5b2f6c:
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



/* Entry: 10b5b2fc0; end: 10b5b305b;  */

long FUN_10b5b2fc0(long param_1)

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
    FUN_10b5b305c();
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



/* Entry: 10b5b305c; end: 10b5b3087;  */

long FUN_10b5b305c(long param_1)

{
  FUN_10b5b2c6c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5b3088; end: 10b5b308b;  */

void FUN_10b5b3088(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b5b3104(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5b308c; end: 10b5b3103;  */

void FUN_10b5b308c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b5b3104(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5b3104; end: 10b5b3123;  */

void FUN_10b5b3104(long *param_1,long param_2)

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



/* Entry: 10b5b3124; end: 10b5b314f;  */

undefined8 * FUN_10b5b3124(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5b3104(param_1,param_3);
  return param_1;
}



/* Entry: 10b5b3150; end: 10b5b317f;  */

long * FUN_10b5b3150(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5b3180; end: 10b5b321f;  */

void FUN_10b5b3180(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d16ac8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5b3220; end: 10b5b32b3;  */

void FUN_10b5b3220(void)

{
  return;
}



/* Entry: 10b5b32b4; end: 10b5b32db;  */

long FUN_10b5b32b4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5b32dc; end: 10b5b332b;  */

undefined8 * FUN_10b5b32dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d16c28;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  func_0x00010b5b3248(param_1,param_3);
  return param_1;
}



/* Entry: 10b5b332c; end: 10b5b332f;  */

long FUN_10b5b332c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5b3330; end: 10b5b3343;  */

void FUN_10b5b3330(void)

{
  FUN_10b5b32b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b3344; end: 10b5b336f;  */

undefined ** FUN_10b5b3344(void)

{
  return &PTR_DAT_110d16c68;
}



/* Entry: 10b5b3370; end: 10b5b3473;  */

long * FUN_10b5b3370(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = param_1;
    FUN_10b5b353c();
    lVar1 = 9;
    func_0x000107c280a8(9,lVar2);
    func_0x00010b5b3548();
  }
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5b353c();
    lVar2 = 0x11;
    func_0x000107c280a8(0x11,lVar1);
    func_0x00010b5b3548();
  }
  lVar1 = lVar2;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5b353c();
    lVar1 = 0x19;
    func_0x000107c280a8(0x19,lVar2);
    func_0x00010b5b3548();
  }
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5b353c();
    lVar2 = 0x21;
    func_0x000107c280a8(0x21,lVar1);
    func_0x00010b5b3548();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5b353c();
    func_0x000107c280a8(0x29,lVar2);
    func_0x00010b5b3548();
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
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar5 - iVar6);
        if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        lVar1 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar1,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b5b3474; end: 10b5b34ef;  */

long FUN_10b5b3474(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
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
  *(int *)(param_1 + 0x38) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5b34f0; end: 10b5b353b;  */

void FUN_10b5b34f0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d16c28;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  return;
}



/* Entry: 10b5b353c; end: 10b5b355b;  */

ulong * FUN_10b5b353c(void)

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



/* Entry: 10b5b355c; end: 10b5b367b;  */

undefined8 * FUN_10b5b355c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d16cd0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x00010b5b3f34();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x00010b5b3f34();
  param_1[4] = lVar2;
  lVar2 = param_3 + 0x28;
  func_0x00010b5b3f34();
  param_1[5] = lVar2;
  lVar2 = param_3 + 0x30;
  func_0x00010b5b3f34();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00010b5b3f34();
  param_1[7] = lVar2;
  lVar2 = param_3 + 0x40;
  func_0x00010b5b3f34();
  param_1[8] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108904da8(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108904da8(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108911c78(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108911c78(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x68);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_3 + 0x70);
  param_1[0xd] = uVar3;
  return param_1;
}



/* Entry: 10b5b367c; end: 10b5b36af;  */

long FUN_10b5b367c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b36b0(param_1);
  return param_1;
}



/* Entry: 10b5b36b0; end: 10b5b3737;  */

void FUN_10b5b36b0(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000107c30588();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x000107c30588();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b5b9250();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b5b9250();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b3738; end: 10b5b373b;  */

long FUN_10b5b3738(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5b36b0(param_1);
  return param_1;
}



/* Entry: 10b5b373c; end: 10b5b374f;  */

void FUN_10b5b373c(void)

{
  FUN_10b5b367c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b3750; end: 10b5b375b;  */

undefined ** FUN_10b5b3750(void)

{
  return &PTR_DAT_110d16d10;
}



/* Entry: 10b5b375c; end: 10b5b3817;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5b375c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b51f4e4(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b51f4e4(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b5b92e8(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b5b92e8(*(undefined8 *)(param_1 + 0x60));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
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



/* Entry: 10b5b3818; end: 10b5b3c4b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5b3818(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long unaff_x22;
  int iVar10;
  
  plVar2 = param_1;
  plVar4 = param_2;
  func_0x00010b5b3f50(param_1[3]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b3858;
  }
  else if ((int)plVar4 != 0) {
LAB_10b5b3858:
    func_0x00010b5b3f3c();
    plVar4 = (long *)0x2;
    plVar2 = param_3;
    func_0x00010b5b3f04();
    param_2 = plVar2;
  }
  func_0x00010b5b3f50(param_1[4]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b3898;
  }
  else if ((int)plVar4 != 0) {
LAB_10b5b3898:
    func_0x00010b5b3f3c();
    plVar4 = (long *)0x10;
    plVar2 = param_3;
    func_0x00010b5b3f04();
    param_2 = plVar2;
  }
  plVar8 = plVar2;
  if (param_1[0xd] != 0) {
    func_0x00010b5b3f74();
    plVar8 = (long *)param_1[0xd];
    plVar4 = (long *)0x88;
    func_0x000107c280a8(0x88,plVar2);
    func_0x000107c280ac();
    param_2 = plVar8;
  }
  func_0x00010b5b3f50(param_1[5]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b3904;
  }
  else if ((int)plVar4 != 0) {
LAB_10b5b3904:
    func_0x00010b5b3f3c();
    plVar4 = (long *)0x12;
    plVar8 = param_3;
    func_0x00010b5b3f04();
    param_2 = plVar8;
  }
  func_0x00010b5b3f50(param_1[6]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b3944;
  }
  else if ((int)plVar4 != 0) {
LAB_10b5b3944:
    func_0x00010b5b3f3c();
    plVar4 = (long *)0x13;
    plVar8 = param_3;
    func_0x00010b5b3f04();
    param_2 = plVar8;
  }
  func_0x00010b5b3f50(param_1[7]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5b3984;
  }
  else if ((int)plVar4 != 0) {
LAB_10b5b3984:
    func_0x00010b5b3f3c();
    plVar4 = (long *)0x14;
    plVar8 = param_3;
    func_0x00010b5b3f04();
    param_2 = plVar8;
  }
  func_0x00010b5b3f50(param_1[8]);
  if ((long)plVar4 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5b39e0;
  }
  else if ((int)plVar4 == 0) goto LAB_10b5b39e0;
  func_0x00010b5b3f3c();
  plVar8 = param_3;
  func_0x00010b5b3f04(param_3,0x15);
  param_2 = plVar8;
LAB_10b5b39e0:
  if ((char)param_1[0xe] == '\x01') {
    func_0x00010b5b3f74();
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0xe);
    uVar3 = 0xb0;
    func_0x000107c280a8(0xb0,plVar8);
    func_0x000107c280a8(param_2,uVar3);
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x17;
    func_0x00010b5b3f10(0x17,param_1[9],*(undefined4 *)(param_1[9] + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x18;
    func_0x00010b5b3f10(0x18,param_1[10],*(undefined4 *)(param_1[10] + 0x14));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x19;
    func_0x00010b5b3f10(0x19,param_1[0xb],*(undefined4 *)(param_1[0xb] + 0x18));
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (long *)0x1a;
    func_0x00010b5b3f10(0x1a,param_1[0xc],*(undefined4 *)(param_1[0xc] + 0x18));
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
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
      iVar9 = (int)uVar6;
      uVar6 = (ulong)(uint)(iVar9 - iVar10);
      if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
      func_0x00010b4d5738();
      lVar5 = (long)param_2 + (long)iVar10;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar9);
  }
  _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar6);
}



/* Entry: 10b5b3c4c; end: 10b5b3c4f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5b3c4c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x38));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x40));
  lVar5 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar4 = uVar2;
        func_0x000108904da8(uVar2,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar4;
      }
      else {
        func_0x000107c3058c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar4 = uVar2;
        func_0x000108904da8(uVar2,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar4;
      }
      else {
        func_0x000107c3058c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar4 = uVar2;
        func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar4;
      }
      else {
        func_0x00010b5b9228();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        func_0x00010b5b9228();
      }
    }
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_2 + 0x68);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
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



/* Entry: 10b5b3c50; end: 10b5b3e8f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5b3c50(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  lVar3 = param_2;
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x20));
  lVar5 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x28));
  lVar5 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x30));
  lVar5 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x38));
  lVar5 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b5b3f68(*(undefined8 *)(param_2 + 0x40));
  lVar5 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar5 = *(long *)(lVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5b3f5c();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar4 = uVar2;
        func_0x000108904da8(uVar2,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar4;
      }
      else {
        func_0x000107c3058c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar4 = uVar2;
        func_0x000108904da8(uVar2,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar4;
      }
      else {
        func_0x000107c3058c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar4 = uVar2;
        func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar4;
      }
      else {
        func_0x00010b5b9228();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        func_0x000108911c78(uVar2,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar2;
      }
      else {
        func_0x00010b5b9228();
      }
    }
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_2 + 0x68);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 1;
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



/* Entry: 10b5b3e90; end: 10b5b3e97;  */

void FUN_10b5b3e90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x78;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x78);
  }
  *puVar1 = &PTR_FUN_110d16cd0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  *(undefined8 *)((long)puVar1 + 0x69) = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  return;
}



/* Entry: 10b5b3e98; end: 10b5b3f03;  */

void FUN_10b5b3e98(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x78;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x78);
  }
  *puVar1 = &PTR_FUN_110d16cd0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  *(undefined8 *)((long)puVar1 + 0x69) = 0;
  *(undefined8 *)((long)puVar1 + 0x61) = 0;
  return;
}



/* Entry: 10b5b3f04; end: 10b5b3f9b;  */

long * FUN_10b5b3f04(long *param_1,undefined8 param_2)

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



/* Entry: 10b5b3f9c; end: 10b5b3fbf;  */

undefined8 FUN_10b5b3f9c(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b3fc0; end: 10b5b3fc3;  */

undefined8 FUN_10b5b3fc0(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b3fc4; end: 10b5b3fd7;  */

void FUN_10b5b3fc4(void)

{
  FUN_10b5b3f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b3fd8; end: 10b5b3ff7;  */

undefined ** FUN_10b5b3fd8(void)

{
  return &PTR_DAT_110d17358;
}



/* Entry: 10b5b3ff8; end: 10b5b4057;  */

long * FUN_10b5b3ff8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5b8868();
  if ((int)param_1[2] != 0) {
    func_0x00010b5b87e0();
    func_0x00010b5b882c();
    func_0x00010b5b87d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5b897c();
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



/* Entry: 10b5b4058; end: 10b5b40a7;  */

long FUN_10b5b4058(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b5b8b14();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5b40a8; end: 10b5b40cb;  */

undefined8 FUN_10b5b40a8(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b40cc; end: 10b5b40cf;  */

undefined8 FUN_10b5b40cc(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b40d0; end: 10b5b40e3;  */

void FUN_10b5b40d0(void)

{
  FUN_10b5b40a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b40e4; end: 10b5b4103;  */

undefined ** FUN_10b5b40e4(void)

{
  return &PTR_DAT_110d17398;
}



/* Entry: 10b5b4104; end: 10b5b4163;  */

long * FUN_10b5b4104(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5b8868();
  if ((int)param_1[2] != 0) {
    func_0x00010b5b87e0();
    func_0x00010b5b882c();
    func_0x00010b5b87d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5b897c();
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



/* Entry: 10b5b4164; end: 10b5b41bf;  */

long FUN_10b5b4164(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b5b8b14();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5b41c0; end: 10b5b41e3;  */

undefined8 FUN_10b5b41c0(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b41e4; end: 10b5b41e7;  */

undefined8 FUN_10b5b41e4(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b41e8; end: 10b5b41fb;  */

void FUN_10b5b41e8(void)

{
  FUN_10b5b41c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b41fc; end: 10b5b421b;  */

undefined ** FUN_10b5b41fc(void)

{
  return &PTR_DAT_110d173d8;
}



/* Entry: 10b5b421c; end: 10b5b429b;  */

long * FUN_10b5b421c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5b8868();
  if ((int)param_1[2] != 0) {
    func_0x00010b5b87e0();
    func_0x00010b5b882c();
    func_0x00010b5b87d4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5b87e0();
    func_0x00010b5b89e8();
    func_0x00010b5b87d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b897c();
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



/* Entry: 10b5b429c; end: 10b5b4337;  */

long FUN_10b5b429c(long param_1)

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



/* Entry: 10b5b4338; end: 10b5b435b;  */

undefined8 FUN_10b5b4338(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b435c; end: 10b5b435f;  */

undefined8 FUN_10b5b435c(undefined8 param_1)

{
  func_0x00010b5b892c();
  return param_1;
}



/* Entry: 10b5b4360; end: 10b5b4373;  */

void FUN_10b5b4360(void)

{
  FUN_10b5b4338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5b4374; end: 10b5b4393;  */

undefined ** FUN_10b5b4374(void)

{
  return &PTR_DAT_110d17418;
}



/* Entry: 10b5b4394; end: 10b5b4413;  */

long * FUN_10b5b4394(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5b8868();
  if ((int)param_1[2] != 0) {
    func_0x00010b5b87e0();
    func_0x00010b5b882c();
    func_0x00010b5b87fc();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5b87e0();
    func_0x00010b5b89e8();
    func_0x00010b5b87fc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5b897c();
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



/* Entry: 10b5b4414; end: 10b5b4477;  */

ulong FUN_10b5b4414(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x18) = (int)uVar2;
  return uVar2;
}


