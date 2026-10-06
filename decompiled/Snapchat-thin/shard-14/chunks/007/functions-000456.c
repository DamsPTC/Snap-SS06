/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5a7334; end: 10b5a7347;  */

void FUN_10b5a7334(void)

{
  return;
}



/* Entry: 10b5a7348; end: 10b5a73a7;  */

undefined8 * FUN_10b5a7348(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14878;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b5a73a8; end: 10b5a73d7;  */

long FUN_10b5a73a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a73d8; end: 10b5a73db;  */

long FUN_10b5a73d8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a73dc; end: 10b5a73ef;  */

void FUN_10b5a73dc(void)

{
  FUN_10b5a73a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a73f0; end: 10b5a73fb;  */

undefined ** FUN_10b5a73f0(void)

{
  return &PTR_DAT_110d148b8;
}



/* Entry: 10b5a73fc; end: 10b5a7437;  */

void FUN_10b5a73fc(long param_1)

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



/* Entry: 10b5a7438; end: 10b5a74e7;  */

long * FUN_10b5a7438(long param_1,long *param_2,long *param_3)

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
    if (lVar3 == 0) goto LAB_10b5a74a4;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b5a74a4;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77dd55);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b5a74a4:
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



/* Entry: 10b5a74e8; end: 10b5a754f;  */

void FUN_10b5a74e8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b5a7520;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b5a7520:
    iVar1 = 0;
    goto LAB_10b5a7524;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b5a7524:
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



/* Entry: 10b5a7550; end: 10b5a7553;  */

void FUN_10b5a7550(long param_1,long param_2)

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



/* Entry: 10b5a7554; end: 10b5a75c3;  */

void FUN_10b5a7554(long param_1,long param_2)

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



/* Entry: 10b5a75c4; end: 10b5a75cb;  */

void FUN_10b5a75c4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d14878;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b5a75cc; end: 10b5a761b;  */

void FUN_10b5a75cc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d14878;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b5a761c; end: 10b5a766b;  */

void FUN_10b5a761c(void)

{
  return;
}



/* Entry: 10b5a766c; end: 10b5a7693;  */

long FUN_10b5a766c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a7694; end: 10b5a76df;  */

undefined8 * FUN_10b5a7694(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d14920;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  func_0x00010b5a7630(param_1,param_3);
  return param_1;
}



/* Entry: 10b5a76e0; end: 10b5a76e3;  */

long FUN_10b5a76e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a76e4; end: 10b5a76f7;  */

void FUN_10b5a76e4(void)

{
  FUN_10b5a766c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a76f8; end: 10b5a7717;  */

undefined ** FUN_10b5a76f8(void)

{
  return &PTR_DAT_110d14960;
}



/* Entry: 10b5a7718; end: 10b5a77cb;  */

long * FUN_10b5a7718(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar1 = param_1;
    FUN_10b5a785c();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b5a7868();
    param_2 = plVar2;
  }
  if (*(char *)((long)param_1 + 0x11) == '\x01') {
    FUN_10b5a785c();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b5a7868();
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



/* Entry: 10b5a77cc; end: 10b5a7813;  */

long FUN_10b5a77cc(long param_1)

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



/* Entry: 10b5a7814; end: 10b5a785b;  */

void FUN_10b5a7814(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110d14920;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined2 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b5a785c; end: 10b5a78af;  */

ulong * FUN_10b5a785c(void)

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



/* Entry: 10b5a78b0; end: 10b5a78d7;  */

long FUN_10b5a78b0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a78d8; end: 10b5a7923;  */

undefined8 * FUN_10b5a78d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d149d0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5a787c(param_1,param_3);
  return param_1;
}



/* Entry: 10b5a7924; end: 10b5a7927;  */

long FUN_10b5a7924(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5a7928; end: 10b5a793b;  */

void FUN_10b5a7928(void)

{
  FUN_10b5a78b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a793c; end: 10b5a795b;  */

undefined ** FUN_10b5a793c(void)

{
  return &PTR_DAT_110d14a60;
}



/* Entry: 10b5a795c; end: 10b5a7a0f;  */

long * FUN_10b5a795c(long *param_1,long *param_2,long *param_3)

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
  if ((int)param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b5a7df4();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 2);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280a8(plVar6,uVar2);
    param_2 = plVar6;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b5a7df4();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x14);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar6);
    func_0x000107c280b8(param_2,uVar2);
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



/* Entry: 10b5a7a10; end: 10b5a7a83;  */

ulong FUN_10b5a7a10(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  uVar2 = (ulong)uVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = uVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
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



/* Entry: 10b5a7a84; end: 10b5a7abb;  */

void FUN_10b5a7a84(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5a7948();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 10b5a7abc; end: 10b5a7b1b;  */

undefined8 * FUN_10b5a7abc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14a20;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5a7d84(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b5a7b1c; end: 10b5a7b4b;  */

long FUN_10b5a7b1c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a7db0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a7b4c; end: 10b5a7b4f;  */

long FUN_10b5a7b4c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5a7db0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a7b50; end: 10b5a7b63;  */

void FUN_10b5a7b50(void)

{
  FUN_10b5a7b1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a7b64; end: 10b5a7b6f;  */

undefined ** FUN_10b5a7b64(void)

{
  return &PTR_DAT_110d14aa8;
}



/* Entry: 10b5a7b70; end: 10b5a7bb7;  */

void FUN_10b5a7b70(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
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



/* Entry: 10b5a7bb8; end: 10b5a7c6f;  */

long * FUN_10b5a7bb8(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x18);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    plVar2 = (long *)0x3;
    func_0x000107c303cc(3,*puVar1,*(undefined4 *)(*puVar1 + 0x18),param_2,param_3);
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



/* Entry: 10b5a7c70; end: 10b5a7ce7;  */

long FUN_10b5a7c70(long param_1)

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
    FUN_10b5a7ce8();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x28) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5a7ce8; end: 10b5a7d13;  */

long FUN_10b5a7ce8(long param_1)

{
  FUN_10b5a7a10();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5a7d14; end: 10b5a7d17;  */

void FUN_10b5a7d14(long param_1,long param_2)

{
  FUN_10b5a7d64(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5a7d18; end: 10b5a7d63;  */

void FUN_10b5a7d18(long param_1,long param_2)

{
  FUN_10b5a7d64(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5a7d64; end: 10b5a7d83;  */

void FUN_10b5a7d64(long *param_1,long param_2)

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



/* Entry: 10b5a7d84; end: 10b5a7daf;  */

undefined8 * FUN_10b5a7d84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5a7d64(param_1,param_3);
  return param_1;
}



/* Entry: 10b5a7db0; end: 10b5a7ddf;  */

long * FUN_10b5a7db0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5a7de0; end: 10b5a7dff;  */

void FUN_10b5a7de0(void)

{
  return;
}



/* Entry: 10b5a7e00; end: 10b5a7ebf;  */

void FUN_10b5a7e00(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010b5acce8();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  return;
}



/* Entry: 10b5a7ec0; end: 10b5a7f2b;  */

long FUN_10b5a7ec0(long param_1)

{
  func_0x00010b5a8c18();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5acc50();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b576aa4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5ab7c8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5a7b1c();
  }
  __ZdlPv();
  func_0x000107c2a450(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5a7f2c; end: 10b5a7f2f;  */

long FUN_10b5a7f2c(long param_1)

{
  func_0x00010b5a8c18();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5acc50();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b576aa4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b5ab7c8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5a7b1c();
  }
  __ZdlPv();
  func_0x000107c2a450(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b5a7f30; end: 10b5a7f43;  */

void FUN_10b5a7f30(void)

{
  FUN_10b5a7ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a7f44; end: 10b5a7f4f;  */

undefined ** FUN_10b5a7f44(void)

{
  return &PTR_DAT_110d14c10;
}



/* Entry: 10b5a7f50; end: 10b5a7fd3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a7f50(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5acce8(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b576b44(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5ab830(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b5a7b70(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 10b5a7fd4; end: 10b5a820f;  */

byte * FUN_10b5a7fd4(byte *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  
  uVar7 = *(uint *)(param_1 + 0x28);
  pbVar2 = param_1;
  if (0 < (int)uVar7) {
    func_0x00010b5a8b0c();
    pbVar5 = pbVar2 + 2;
    *pbVar2 = 10;
    for (; 0x7f < uVar7; uVar7 = uVar7 >> 7) {
      pbVar5[-1] = (byte)uVar7 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    pbVar5[-1] = (byte)uVar7;
    puVar8 = *(uint **)(param_1 + 0x20);
    puVar1 = puVar8 + *(int *)(param_1 + 0x18);
    do {
      func_0x00010b5a8b0c();
      uVar7 = *puVar8;
      pbVar5 = pbVar2;
      while( true ) {
        param_2 = pbVar5 + 1;
        if (uVar7 < 0x80) break;
        *pbVar5 = (byte)uVar7 | 0x80;
        uVar7 = uVar7 >> 7;
        pbVar5 = param_2;
      }
      puVar8 = puVar8 + 1;
      *pbVar5 = (byte)uVar7;
    } while (puVar8 < puVar1);
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 1) != 0) {
    pbVar2 = (byte *)0x2;
    func_0x00010b5a8b64(2,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18));
    param_2 = pbVar2;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x00010b5a8b0c();
    param_2 = (byte *)0x18;
    func_0x000107c280a8(0x18,pbVar2);
    func_0x00010b5a8b34();
  }
  if ((uVar7 >> 1 & 1) != 0) {
    param_2 = (byte *)0x4;
    func_0x00010b5a8b64(4,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x20));
  }
  if ((uVar7 >> 2 & 1) != 0) {
    param_2 = (byte *)0x5;
    func_0x00010b5a8b64(5,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x20));
  }
  if ((uVar7 >> 3 & 1) != 0) {
    param_2 = (byte *)0x6;
    func_0x00010b5a8b64(6,*(long *)(param_1 + 0x48),
                        *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x28));
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar6 + 8);
    uVar4 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar3 = uVar6 + 8;
  }
  if ((long)(int)uVar4 <= *(long *)param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return param_2 + (int)uVar4;
  }
  while( true ) {
    iVar10 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
    iVar9 = (int)uVar4;
    uVar4 = (ulong)(uint)(iVar9 - iVar10);
    if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
    func_0x00010b4d5738();
    pbVar2 = param_2 + iVar10;
    param_2 = param_3;
    func_0x000107c303e4(param_3,pbVar2);
  }
  func_0x00010b4d5738();
  return param_2 + iVar9;
}



/* Entry: 10b5a8210; end: 10b5a826f;  */

void FUN_10b5a8210(void)

{
  FUN_10b5acd68();
  FUN_10b5a8af0();
  return;
}



/* Entry: 10b5a8270; end: 10b5a8273;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a8270(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x0001088ffb98(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a10(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b5acc28();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a4c(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00010b576a70();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a80(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b5ab990();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x00010b5a8ab4(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar3;
      }
      else {
        FUN_10b5a7d18();
      }
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
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



/* Entry: 10b5a8274; end: 10b5a83bb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a8274(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x0001088ffb98(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a10(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar2;
      }
      else {
        func_0x00010b5acc28();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a4c(uVar3,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00010b576a70();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a80(uVar3,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar2;
      }
      else {
        FUN_10b5ab990();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
        func_0x00010b5a8ab4(uVar3,*(undefined8 *)(param_2 + 0x48));
        *(ulong *)(param_1 + 0x48) = uVar3;
      }
      else {
        FUN_10b5a7d18();
      }
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
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



/* Entry: 10b5a83bc; end: 10b5a83ef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5a83bc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5a8bf8();
  FUN_10b5a7f50();
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x0001088ffb98(unaff_x20 + 0x18,unaff_x19 + 0x18);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x30) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a10(uVar3,*(undefined8 *)(unaff_x19 + 0x30));
        *(ulong *)(unaff_x20 + 0x30) = uVar2;
      }
      else {
        func_0x00010b5acc28();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a4c(uVar3,*(undefined8 *)(unaff_x19 + 0x38));
        *(ulong *)(unaff_x20 + 0x38) = uVar2;
      }
      else {
        func_0x00010b576a70();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x40) == 0) {
        uVar2 = uVar3;
        func_0x00010b5a8a80(uVar3,*(undefined8 *)(unaff_x19 + 0x40));
        *(ulong *)(unaff_x20 + 0x40) = uVar2;
      }
      else {
        FUN_10b5ab990();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x48) == 0) {
        func_0x00010b5a8ab4(uVar3,*(undefined8 *)(unaff_x19 + 0x48));
        *(ulong *)(unaff_x20 + 0x48) = uVar3;
      }
      else {
        FUN_10b5a7d18();
      }
    }
  }
  if (*(int *)(unaff_x19 + 0x50) != 0) {
    *(int *)(unaff_x20 + 0x50) = *(int *)(unaff_x19 + 0x50);
  }
  *(uint *)(unaff_x20 + 0x10) = *(uint *)(unaff_x20 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
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



/* Entry: 10b5a83f0; end: 10b5a8427;  */

long FUN_10b5a83f0(long param_1)

{
  func_0x00010b5a8c18();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5a8428; end: 10b5a842b;  */

long FUN_10b5a8428(long param_1)

{
  func_0x00010b5a8c18();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5a842c; end: 10b5a843f;  */

void FUN_10b5a842c(void)

{
  FUN_10b5a83f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a8440; end: 10b5a844b;  */

undefined ** FUN_10b5a8440(void)

{
  return &PTR_DAT_110d14c58;
}



/* Entry: 10b5a844c; end: 10b5a8493;  */

void FUN_10b5a844c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b5a8494; end: 10b5a861b;  */

long * FUN_10b5a8494(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *plVar7;
  int iVar8;
  int unaff_w22;
  int iVar9;
  
  func_0x00010b5a8b98();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010b5a8bc4();
    param_1 = (long *)0x1;
    func_0x00010b5a8b64();
    param_4 = param_1;
  }
  plVar7 = param_1;
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5a8b0c();
    plVar7 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x000107c280b8(plVar7,uVar2);
    param_4 = plVar7;
  }
  plVar3 = plVar7;
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b5a8b0c();
    plVar3 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar7);
    func_0x00010b5a8b34();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    func_0x00010b5a8b0c();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b5a8b34();
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
        iVar9 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar8 = (int)uVar5;
        uVar1 = iVar8 - iVar9;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar8);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 10b5a861c; end: 10b5a8693;  */

void FUN_10b5a861c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5a8694; end: 10b5a86fb;  */

undefined8 * FUN_10b5a8694(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d14bd0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5a8964(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b5a86fc; end: 10b5a8727;  */

long FUN_10b5a86fc(long param_1)

{
  func_0x00010b5a8c18();
  FUN_10b5a8990(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a8728; end: 10b5a872b;  */

long FUN_10b5a8728(long param_1)

{
  func_0x00010b5a8c18();
  FUN_10b5a8990(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5a872c; end: 10b5a873f;  */

void FUN_10b5a872c(void)

{
  FUN_10b5a86fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a8740; end: 10b5a874b;  */

undefined ** FUN_10b5a8740(void)

{
  return &PTR_DAT_110d14c98;
}



/* Entry: 10b5a874c; end: 10b5a878f;  */

void FUN_10b5a874c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b5a8790; end: 10b5a884b;  */

long * FUN_10b5a8790(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar6;
  int unaff_w22;
  int iVar7;
  
  func_0x00010b5a8b98();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010b5a8bc4();
    param_1 = (long *)0x1;
    func_0x00010b5a8b64();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5a8b0c();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x00010b5a8b34();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b5a8b0c();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x00010b5a8b34();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)uVar4;
        uVar1 = iVar6 - iVar7;
        uVar4 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 10b5a884c; end: 10b5a88bf;  */

long FUN_10b5a884c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5a8b74();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b5a88c0();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x00010b5a8b18();
  }
  if (*(int *)(unaff_x19 + 0x2c) != 0) {
    func_0x00010b5a8b18();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b5a88c0; end: 10b5a88d7;  */

void FUN_10b5a88c0(void)

{
  func_0x00010b5a8580();
  FUN_10b5a8af0();
  return;
}



/* Entry: 10b5a88d8; end: 10b5a88db;  */

void FUN_10b5a88d8(long param_1,long param_2)

{
  FUN_10b5a893c(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b5a88dc; end: 10b5a893b;  */

void FUN_10b5a88dc(long param_1,long param_2)

{
  FUN_10b5a893c(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b5a893c; end: 10b5a8963;  */

void FUN_10b5a893c(long *param_1,long param_2)

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



/* Entry: 10b5a8964; end: 10b5a898f;  */

undefined8 * FUN_10b5a8964(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5a893c(param_1,param_3);
  return param_1;
}



/* Entry: 10b5a8990; end: 10b5a89bf;  */

long * FUN_10b5a8990(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5a89c0; end: 10b5a8aef;  */

void FUN_10b5a89c0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d14b80;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)((long)puVar1 + 0x34) = 0;
  puVar1[4] = param_1;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b5a8af0; end: 10b5a8c53;  */

long FUN_10b5a8af0(long param_1)

{
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5a8c54; end: 10b5a8c77;  */

undefined8 FUN_10b5a8c54(undefined8 param_1)

{
  func_0x00010b5a9c78();
  return param_1;
}



/* Entry: 10b5a8c78; end: 10b5a8c7b;  */

undefined8 FUN_10b5a8c78(undefined8 param_1)

{
  func_0x00010b5a9c78();
  return param_1;
}



/* Entry: 10b5a8c7c; end: 10b5a8c8f;  */

void FUN_10b5a8c7c(void)

{
  FUN_10b5a8c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a8c90; end: 10b5a8caf;  */

undefined ** FUN_10b5a8c90(void)

{
  return &PTR_DAT_110d14ec0;
}



/* Entry: 10b5a8cb0; end: 10b5a8d0f;  */

long * FUN_10b5a8cb0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5a9c60();
  if ((int)param_1[2] != 0) {
    func_0x00010b5a9c14();
    func_0x00010b5a9c38();
    func_0x00010b5a9c20();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5a9c90();
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



/* Entry: 10b5a8d10; end: 10b5a8d5f;  */

long FUN_10b5a8d10(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b5a9cd0();
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



/* Entry: 10b5a8d60; end: 10b5a8d83;  */

undefined8 FUN_10b5a8d60(undefined8 param_1)

{
  func_0x00010b5a9c78();
  return param_1;
}



/* Entry: 10b5a8d84; end: 10b5a8d87;  */

undefined8 FUN_10b5a8d84(undefined8 param_1)

{
  func_0x00010b5a9c78();
  return param_1;
}



/* Entry: 10b5a8d88; end: 10b5a8d9b;  */

void FUN_10b5a8d88(void)

{
  FUN_10b5a8d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a8d9c; end: 10b5a8dbb;  */

undefined ** FUN_10b5a8d9c(void)

{
  return &PTR_DAT_110d14f08;
}



/* Entry: 10b5a8dbc; end: 10b5a8e1b;  */

long * FUN_10b5a8dbc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5a9c60();
  if ((int)param_1[2] != 0) {
    func_0x00010b5a9c14();
    func_0x00010b5a9c38();
    func_0x00010b5a9c20();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5a9c90();
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



/* Entry: 10b5a8e1c; end: 10b5a8e77;  */

long FUN_10b5a8e1c(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b5a9cd0();
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



/* Entry: 10b5a8e78; end: 10b5a8e9b;  */

undefined8 FUN_10b5a8e78(undefined8 param_1)

{
  func_0x00010b5a9c78();
  return param_1;
}



/* Entry: 10b5a8e9c; end: 10b5a8e9f;  */

undefined8 FUN_10b5a8e9c(undefined8 param_1)

{
  func_0x00010b5a9c78();
  return param_1;
}



/* Entry: 10b5a8ea0; end: 10b5a8eb3;  */

void FUN_10b5a8ea0(void)

{
  FUN_10b5a8e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5a8eb4; end: 10b5a8ed3;  */

undefined ** FUN_10b5a8eb4(void)

{
  return &PTR_DAT_110d14f50;
}



/* Entry: 10b5a8ed4; end: 10b5a8f57;  */

long * FUN_10b5a8ed4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5a9c60();
  if ((int)param_1[2] != 0) {
    func_0x00010b5a9c14();
    func_0x00010b5a9c38();
    func_0x00010b5a9c20();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5a9c14();
    param_4 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010b5a9c20();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a9c90();
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



/* Entry: 10b5a8f58; end: 10b5a8fcb;  */

long FUN_10b5a8f58(long param_1)

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



/* Entry: 10b5a8fcc; end: 10b5a8ff7;  */

undefined8 FUN_10b5a8fcc(undefined8 param_1)

{
  func_0x00010b5a9c78();
  FUN_10b5a8ff8(param_1);
  return param_1;
}



/* Entry: 10b5a8ff8; end: 10b5a901f;  */

/* WARNING: Possible PIC construction at 0x00010b5a900c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b5a9010) */

void FUN_10b5a8ff8(long param_1)

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


