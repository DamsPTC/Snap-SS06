/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b59c624; end: 10b59c627;  */

void FUN_10b59c624(long param_1,long param_2)

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



/* Entry: 10b59c628; end: 10b59c6ab;  */

void FUN_10b59c628(long param_1,long param_2)

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



/* Entry: 10b59c6ac; end: 10b59c6b3;  */

void FUN_10b59c6ac(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d12f70;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b59c6b4; end: 10b59c703;  */

void FUN_10b59c6b4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d12f70;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b59c704; end: 10b59c77b;  */

void FUN_10b59c704(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 10b59c77c; end: 10b59c7a3;  */

long FUN_10b59c77c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b59c7a4; end: 10b59c7f3;  */

undefined8 * FUN_10b59c7a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d13020;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10b59c704(param_1,param_3);
  return param_1;
}



/* Entry: 10b59c7f4; end: 10b59c7f7;  */

long FUN_10b59c7f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b59c7f8; end: 10b59c80b;  */

void FUN_10b59c7f8(void)

{
  FUN_10b59c77c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59c80c; end: 10b59c82f;  */

undefined ** FUN_10b59c80c(void)

{
  return &PTR_DAT_110d13060;
}



/* Entry: 10b59c830; end: 10b59c96f;  */

long * FUN_10b59c830(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar1 = param_1;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    FUN_10b59ca58();
    plVar1 = (long *)0xd;
    func_0x000107c280a8(0xd,plVar2);
    func_0x00010b59ca6c();
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b59ca58();
    plVar2 = (long *)0x15;
    func_0x000107c280a8(0x15,plVar1);
    func_0x00010b59ca6c();
  }
  plVar1 = plVar2;
  if ((int)param_1[3] != 0) {
    FUN_10b59ca58();
    plVar1 = (long *)0x1d;
    func_0x000107c280a8(0x1d,plVar2);
    func_0x00010b59ca6c();
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    FUN_10b59ca58();
    plVar2 = (long *)0x25;
    func_0x000107c280a8(0x25,plVar1);
    func_0x00010b59ca6c();
  }
  plVar1 = plVar2;
  if ((char)param_1[4] == '\x01') {
    FUN_10b59ca58();
    plVar1 = (long *)(ulong)*(byte *)(param_1 + 4);
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x000107c280a8(plVar1,uVar3);
    param_2 = plVar1;
  }
  if (*(int *)((long)param_1 + 0x24) != 0) {
    FUN_10b59ca58();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x24);
    uVar3 = 0x38;
    func_0x000107c280a8(0x38,plVar1);
    func_0x000107c280b8(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
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



/* Entry: 10b59c970; end: 10b59ca0b;  */

long FUN_10b59c970(long param_1)

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
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    lVar1 = lVar1 + 5;
  }
  lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b59ca0c; end: 10b59ca57;  */

void FUN_10b59ca0c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d13020;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b59ca58; end: 10b59ca77;  */

ulong * FUN_10b59ca58(void)

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



/* Entry: 10b59ca78; end: 10b59cae7;  */

undefined8 * FUN_10b59ca78(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d130c8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  param_1[2] = lVar2;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x20);
  param_1[3] = *(undefined8 *)(param_3 + 0x18);
  *(undefined4 *)(param_1 + 4) = uVar1;
  return param_1;
}



/* Entry: 10b59cae8; end: 10b59cb17;  */

long FUN_10b59cae8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59cb18; end: 10b59cb1b;  */

long FUN_10b59cb18(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59cb1c; end: 10b59cb2f;  */

void FUN_10b59cb1c(void)

{
  FUN_10b59cae8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59cb30; end: 10b59cb3b;  */

undefined ** FUN_10b59cb30(void)

{
  return &PTR_DAT_110d13108;
}



/* Entry: 10b59cb3c; end: 10b59cb7f;  */

void FUN_10b59cb3c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b59cb80; end: 10b59cc7b;  */

long * FUN_10b59cb80(long param_1,long *param_2,long *param_3)

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
  
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b59cc20;
    puVar3 = (undefined8 *)*puVar8;
  }
  else {
    puVar3 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b59cc20;
  }
  func_0x000107c303d4(puVar3,lVar4,1,&UNK_10f77d7d8);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,2,puVar8,param_2);
  param_2 = plVar1;
LAB_10b59cc20:
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x00010599ccb0(param_3,*(long *)(param_1 + 0x18),param_2);
  }
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



/* Entry: 10b59cc7c; end: 10b59cd23;  */

void FUN_10b59cc7c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b59ccb4;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b59ccb4:
    iVar1 = 0;
    goto LAB_10b59ccb8;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b59ccb8:
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 10b59cd24; end: 10b59cd27;  */

void FUN_10b59cd24(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b59cd28; end: 10b59cdaf;  */

void FUN_10b59cd28(long param_1,long param_2)

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
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
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



/* Entry: 10b59cdb0; end: 10b59cdb7;  */

void FUN_10b59cdb0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d130c8;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  return;
}



/* Entry: 10b59cdb8; end: 10b59ce07;  */

void FUN_10b59cdb8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d130c8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  return;
}



/* Entry: 10b59ce08; end: 10b59ce97;  */

void FUN_10b59ce08(void)

{
  return;
}



/* Entry: 10b59ce98; end: 10b59cebf;  */

long FUN_10b59ce98(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b59cec0; end: 10b59cf07;  */

undefined8 * FUN_10b59cec0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d13170;
  param_1[1] = param_2;
  func_0x00010b59d70c();
  func_0x00010b59ce1c();
  return param_1;
}



/* Entry: 10b59cf08; end: 10b59cf0b;  */

long FUN_10b59cf08(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b59cf0c; end: 10b59cf1f;  */

void FUN_10b59cf0c(void)

{
  FUN_10b59ce98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59cf20; end: 10b59cf4b;  */

undefined ** FUN_10b59cf20(void)

{
  return &PTR_DAT_110d13200;
}



/* Entry: 10b59cf4c; end: 10b59d05f;  */

long * FUN_10b59cf4c(long param_1,long *param_2,long *param_3)

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
    FUN_10b59d688();
    lVar1 = 9;
    func_0x000107c280a8(9,lVar2);
    func_0x00010b59d6c4();
  }
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b59d688();
    lVar2 = 0x11;
    func_0x000107c280a8(0x11,lVar1);
    func_0x00010b59d6c4();
  }
  lVar1 = lVar2;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b59d688();
    lVar1 = 0x19;
    func_0x000107c280a8(0x19,lVar2);
    func_0x00010b59d6c4();
  }
  lVar2 = lVar1;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b59d688();
    lVar2 = 0x21;
    func_0x000107c280a8(0x21,lVar1);
    func_0x00010b59d6c4();
  }
  lVar1 = lVar2;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b59d688();
    lVar1 = 0x29;
    func_0x000107c280a8(0x29,lVar2);
    func_0x00010b59d6c4();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b59d688();
    func_0x000107c280a8(0x31,lVar1);
    func_0x00010b59d6c4();
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



/* Entry: 10b59d060; end: 10b59d0e3;  */

long FUN_10b59d060(long param_1)

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
  if (*(long *)(param_1 + 0x38) != 0) {
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
  *(int *)(param_1 + 0x40) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b59d0e4; end: 10b59d16f;  */

undefined8 * FUN_10b59d0e4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d131c0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x00010b59d6b4();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00010b59d6b4();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b59d6b4();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b59d6b4();
  param_1[5] = lVar1;
  param_3 = param_3 + 0x30;
  func_0x00010b59d6b4();
  param_1[6] = param_3;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



/* Entry: 10b59d170; end: 10b59d19f;  */

long FUN_10b59d170(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b59d1a0(param_1);
  return param_1;
}



/* Entry: 10b59d1a0; end: 10b59d1df;  */

/* WARNING: Possible PIC construction at 0x00010b59d1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b59d1c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b59d1b8) */
/* WARNING: Removing unreachable block (ram,0x00010b59d1c8) */

void FUN_10b59d1a0(long param_1)

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



/* Entry: 10b59d1e0; end: 10b59d1e3;  */

long FUN_10b59d1e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b59d1a0(param_1);
  return param_1;
}



/* Entry: 10b59d1e4; end: 10b59d1f7;  */

void FUN_10b59d1e4(void)

{
  FUN_10b59d170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59d1f8; end: 10b59d203;  */

undefined ** FUN_10b59d1f8(void)

{
  return &PTR_DAT_110d13240;
}



/* Entry: 10b59d204; end: 10b59d25f;  */

void FUN_10b59d204(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
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



/* Entry: 10b59d260; end: 10b59d3f7;  */

long * FUN_10b59d260(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  plVar1 = param_2;
  func_0x00010b59d6dc(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b59d2a0;
  }
  else if ((int)plVar1 != 0) {
LAB_10b59d2a0:
    func_0x00010b59d6bc();
    plVar1 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b59d694();
  }
  func_0x00010b59d6dc(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b59d2e0;
  }
  else if ((int)plVar1 != 0) {
LAB_10b59d2e0:
    func_0x00010b59d6bc();
    plVar1 = (long *)0x2;
    param_2 = param_3;
    func_0x00010b59d694();
  }
  func_0x00010b59d6dc(*(undefined8 *)(param_1 + 0x20));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b59d320;
  }
  else if ((int)plVar1 != 0) {
LAB_10b59d320:
    func_0x00010b59d6bc();
    plVar1 = (long *)0x3;
    param_2 = param_3;
    func_0x00010b59d694();
  }
  func_0x00010b59d6dc(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b59d360;
  }
  else if ((int)plVar1 != 0) {
LAB_10b59d360:
    func_0x00010b59d6bc();
    plVar1 = (long *)0x6;
    param_2 = param_3;
    func_0x00010b59d694();
  }
  func_0x00010b59d6dc(*(undefined8 *)(param_1 + 0x30));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b59d3bc;
  }
  else if ((int)plVar1 == 0) goto LAB_10b59d3bc;
  func_0x00010b59d6bc();
  param_2 = param_3;
  func_0x00010b59d694(param_3,10);
LAB_10b59d3bc:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
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
  if (*param_3 - (long)param_2 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar3);
}



/* Entry: 10b59d3f8; end: 10b59d4cf;  */

long FUN_10b59d3f8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010b59d6d0(*(undefined8 *)(param_1 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar2 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar2 + 1;
  }
  func_0x00010b59d6d0(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b59d720();
  }
  func_0x00010b59d6d0(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b59d720();
  }
  func_0x00010b59d6d0(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b59d720();
  }
  func_0x00010b59d6d0(*(undefined8 *)(param_1 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b59d720();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x38) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b59d4d0; end: 10b59d4d3;  */

void FUN_10b59d4d0(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  
  lVar1 = param_2;
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x30);
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



/* Entry: 10b59d4d4; end: 10b59d5db;  */

void FUN_10b59d4d4(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  
  lVar1 = param_2;
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b59d6f4(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b59d6e8();
    }
    func_0x000107c30248(param_1 + 0x30);
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



/* Entry: 10b59d5dc; end: 10b59d5eb;  */

void FUN_10b59d5dc(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d13170;
  puVar1[1] = param_2;
  func_0x00010b59d70c();
  return;
}



/* Entry: 10b59d5ec; end: 10b59d687;  */

void FUN_10b59d5ec(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d13170;
  puVar1[1] = param_1;
  func_0x00010b59d70c();
  return;
}



/* Entry: 10b59d688; end: 10b59d72b;  */

ulong * FUN_10b59d688(void)

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



/* Entry: 10b59d72c; end: 10b59d76b;  */

long FUN_10b59d72c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5a21d0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b59d76c; end: 10b59d76f;  */

long FUN_10b59d76c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b5a21d0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b59d770; end: 10b59d783;  */

void FUN_10b59d770(void)

{
  FUN_10b59d72c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59d784; end: 10b59d78f;  */

undefined ** FUN_10b59d784(void)

{
  return &PTR_DAT_110d132f8;
}



/* Entry: 10b59d790; end: 10b59d7e3;  */

void FUN_10b59d790(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b5a2268(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 10b59d7e4; end: 10b59d91b;  */

long * FUN_10b59d7e4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar1 = param_1;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,param_1[4],*(undefined4 *)(param_1[4] + 0x20),param_2,param_3);
    param_2 = plVar1;
  }
  puVar9 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_10b59d874;
    puVar2 = (undefined8 *)*puVar9;
  }
  else {
    puVar2 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b59d874;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f77d89e);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,2,puVar9,param_2);
  param_2 = plVar1;
LAB_10b59d874:
  plVar7 = plVar1;
  if ((char)param_1[5] == '\x01') {
    func_0x00010b59db1c();
    plVar7 = (long *)(ulong)*(byte *)(param_1 + 5);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar1);
    func_0x000107c280a8(plVar7,uVar3);
    param_2 = plVar7;
  }
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    func_0x00010b59db1c();
    param_2 = (long *)(ulong)*(uint *)((long)param_1 + 0x2c);
    uVar3 = 0x20;
    func_0x000107c280a8(0x20,plVar7);
    func_0x000107c280b8(param_2,uVar3);
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



/* Entry: 10b59d91c; end: 10b59d9c7;  */

void FUN_10b59d91c(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar3 + 0x17) < '\0') {
    if (*(long *)(uVar3 + 8) == 0) goto LAB_10b59d954;
  }
  else if (*(char *)(uVar3 + 0x17) == '\0') {
LAB_10b59d954:
    iVar2 = 0;
    goto LAB_10b59d958;
  }
  func_0x000107c282a0();
  iVar2 = (int)uVar3 + 1;
LAB_10b59d958:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x0001088cfe44();
    iVar2 = iVar2 + iVar1 + 1;
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x28) * 2;
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x280U >> 6) + 1;
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



/* Entry: 10b59d9c8; end: 10b59dab7;  */

void FUN_10b59d9c8(long param_1,long param_2)

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
      func_0x0001088dc304(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b5a219c();
    }
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b59dab8; end: 10b59dabf;  */

void FUN_10b59dab8(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d132b8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &DAT_11383d918;
  return;
}



/* Entry: 10b59dac0; end: 10b59db13;  */

void FUN_10b59dac0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d132b8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = &DAT_11383d918;
  return;
}



/* Entry: 10b59db14; end: 10b59db27;  */

void FUN_10b59db14(void)

{
  return;
}



/* Entry: 10b59db28; end: 10b59db9b;  */

undefined8 * FUN_10b59db28(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d13360;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c2a448(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar1 = *(undefined8 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0x38);
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 10b59db9c; end: 10b59dbcb;  */

long FUN_10b59db9c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59dbcc; end: 10b59dbcf;  */

long FUN_10b59dbcc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c2a450(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59dbd0; end: 10b59dbe3;  */

void FUN_10b59dbd0(void)

{
  FUN_10b59db9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59dbe4; end: 10b59dc0b;  */

undefined ** FUN_10b59dbe4(void)

{
  return &PTR_DAT_110d133a0;
}



/* Entry: 10b59dc0c; end: 10b59dd9f;  */

byte * FUN_10b59dc0c(byte *param_1,byte *param_2,byte *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  
  pbVar3 = param_1;
  if (*(long *)(param_1 + 0x28) != 0) {
    pbVar3 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x28),param_2);
    param_2 = pbVar3;
  }
  pbVar2 = pbVar3;
  if (param_1[0x30] == 1) {
    FUN_10b59df68();
    pbVar2 = (byte *)0x10;
    func_0x000107c280a8(0x10,pbVar3);
    func_0x00010b59df74();
    param_2 = pbVar2;
  }
  pbVar3 = pbVar2;
  if (param_1[0x31] == 1) {
    FUN_10b59df68();
    pbVar3 = (byte *)0x18;
    func_0x000107c280a8(0x18,pbVar2);
    func_0x00010b59df74();
    param_2 = pbVar3;
  }
  pbVar2 = pbVar3;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_10b59df68();
    pbVar2 = (byte *)0x20;
    func_0x000107c280a8(0x20,pbVar3);
    func_0x00010b59df74();
    param_2 = pbVar2;
  }
  uVar8 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar8) {
    FUN_10b59df68();
    pbVar3 = pbVar2 + 2;
    *pbVar2 = 0x2a;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      pbVar3[-1] = (byte)uVar8 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar8;
    puVar9 = *(uint **)(param_1 + 0x18);
    puVar1 = puVar9 + *(int *)(param_1 + 0x10);
    do {
      FUN_10b59df68();
      uVar8 = *puVar9;
      pbVar3 = pbVar2;
      while( true ) {
        param_2 = pbVar3 + 1;
        if (uVar8 < 0x80) break;
        *pbVar3 = (byte)uVar8 | 0x80;
        uVar8 = uVar8 >> 7;
        pbVar3 = param_2;
      }
      puVar9 = puVar9 + 1;
      *pbVar3 = (byte)uVar8;
    } while (puVar9 < puVar1);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_10b59df68();
    param_2 = (byte *)(ulong)*(uint *)(param_1 + 0x38);
    uVar4 = 0x30;
    func_0x000107c280a8(0x30,pbVar2);
    func_0x000107c280b8(param_2,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
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
    _memcpy(param_2,lVar5,uVar6 & 0xffffffff);
    return param_2 + (int)uVar6;
  }
  return param_2;
}



/* Entry: 10b59dda0; end: 10b59de7b;  */

void FUN_10b59dda0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1 + 0x10;
  func_0x00010b4d3e38();
  iVar2 = (int)lVar4;
  *(int *)(param_1 + 0x20) = iVar2;
  iVar3 = 0;
  if (lVar4 != 0) {
    iVar3 = ((int)LZCOUNT((long)iVar2) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar3 + iVar2;
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + iVar3 + iVar2;
  }
  iVar3 = iVar1 + (uint)*(byte *)(param_1 + 0x30) * 2 + (uint)*(byte *)(param_1 + 0x31) * 2;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(int *)(param_1 + 0x34)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(param_1 + 0x3c) = iVar3;
  return;
}



/* Entry: 10b59de7c; end: 10b59de7f;  */

void FUN_10b59de7c(long param_1,long param_2)

{
  func_0x0001088ffb98(param_1 + 0x10,param_2 + 0x10);
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 10b59de80; end: 10b59df0f;  */

void FUN_10b59de80(long param_1,long param_2)

{
  func_0x0001088ffb98(param_1 + 0x10,param_2 + 0x10);
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x30) == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x38);
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



/* Entry: 10b59df10; end: 10b59df17;  */

void FUN_10b59df10(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d13360;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b59df18; end: 10b59df67;  */

void FUN_10b59df18(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d13360;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = 0;
  return;
}



/* Entry: 10b59df68; end: 10b59dfbb;  */

ulong * FUN_10b59df68(void)

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



/* Entry: 10b59dfbc; end: 10b59dfe3;  */

long FUN_10b59dfbc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b59dfe4; end: 10b59e02b;  */

undefined8 * FUN_10b59dfe4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d13408;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b59df94(param_1,param_3);
  return param_1;
}



/* Entry: 10b59e02c; end: 10b59e02f;  */

long FUN_10b59e02c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b59e030; end: 10b59e043;  */

void FUN_10b59e030(void)

{
  FUN_10b59dfbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59e044; end: 10b59e063;  */

undefined ** FUN_10b59e044(void)

{
  return &PTR_DAT_110d13448;
}



/* Entry: 10b59e064; end: 10b59e0fb;  */

long * FUN_10b59e064(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
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



/* Entry: 10b59e0fc; end: 10b59e153;  */

long FUN_10b59e0fc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
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



/* Entry: 10b59e154; end: 10b59e197;  */

void FUN_10b59e154(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d13408;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b59e198; end: 10b59e19f;  */

void FUN_10b59e198(void)

{
  return;
}



/* Entry: 10b59e1a0; end: 10b59e2ab;  */

void FUN_10b59e1a0(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59ecb4();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59ee5c();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59f010();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59f7ac();
    }
    break;
  default:
    goto LAB_10b59e264;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59fa1c();
    }
  }
  __ZdlPv();
LAB_10b59e264:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10b59e2ac; end: 10b59e377;  */

void FUN_10b59e2ac(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  
  lVar2 = param_3;
  func_0x00010b5a2030();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110d137d0;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x00010b5a1dfc();
  }
  lVar2 = param_3 + 0x10;
  func_0x00010b5a20e8();
  unaff_x19[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x00010b5a20e8();
  unaff_x19[3] = lVar2;
  *(undefined4 *)(unaff_x19 + 6) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x34);
  *(undefined4 *)((long)unaff_x19 + 0x34) = uVar1;
  *(undefined4 *)(unaff_x19 + 4) = *(undefined4 *)(param_3 + 0x20);
  switch(uVar1) {
  case 1:
    func_0x00010b5a2024();
    func_0x00010b5a163c();
    break;
  case 2:
    func_0x00010b5a2024();
    func_0x00010b5a16b8();
    break;
  case 3:
    func_0x00010b5a2024();
    FUN_10b5a1744();
    break;
  case 4:
    func_0x00010b5a2024();
    func_0x00010b5a18b0();
    break;
  default:
    goto LAB_10b5a1dcc;
  case 6:
    func_0x00010b5a2024();
    func_0x00010b5a1964();
  }
  unaff_x19[5] = lVar2;
LAB_10b5a1dcc:
  return;
}



/* Entry: 10b59e378; end: 10b59e3a3;  */

undefined8 FUN_10b59e378(undefined8 param_1)

{
  func_0x00010b5a1ec4();
  FUN_10b59e3a4(param_1);
  return param_1;
}



/* Entry: 10b59e3a4; end: 10b59e3df;  */

void FUN_10b59e3a4(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  
  func_0x000107c30258(param_1 + 0x10);
  func_0x00010b5a2094();
  if (*(int *)(param_1 + 0x34) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59ecb4();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59ee5c();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59f010();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59f7ac();
    }
    break;
  default:
    goto LAB_10b59e264;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5a2060();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10b59e264;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10b59fa1c();
    }
  }
  __ZdlPv();
LAB_10b59e264:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10b59e3e0; end: 10b59e3e3;  */

undefined8 FUN_10b59e3e0(undefined8 param_1)

{
  func_0x00010b5a1ec4();
  FUN_10b59e3a4(param_1);
  return param_1;
}



/* Entry: 10b59e3e4; end: 10b59e3f7;  */

void FUN_10b59e3e4(void)

{
  FUN_10b59e378();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59e3f8; end: 10b59e417;  */

long FUN_10b59e3f8(long param_1)

{
  func_0x00010b5a1ec4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b59dfbc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b59e418; end: 10b59e457;  */

void FUN_10b59e418(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5a2124();
  func_0x000107c3025c(unaff_x19 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  FUN_10b59e1a0();
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



/* Entry: 10b59e458; end: 10b59e577;  */

long * FUN_10b59e458(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  int iVar6;
  ulong unaff_x22;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 0x34);
  plVar2 = (long *)(ulong)uVar1;
  plVar3 = param_2;
  if (uVar1 < 7 && (1 << (ulong)(uVar1 & 0x1f) & 0x5eU) != 0) {
    plVar3 = *(long **)(param_1 + 0x28);
    func_0x00010b5a1e84(plVar2,plVar3,*(undefined4 *)((long)plVar3 + 0x14),param_2);
    param_2 = plVar2;
  }
  uVar4 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    plVar3 = (long *)0x7;
    plVar2 = param_3;
    func_0x00010b5a2084();
    param_2 = plVar2;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x00010b5a20b4();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    plVar3 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar2);
    func_0x000107c280a8();
  }
  func_0x00010b5a1f74(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar3 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b59e540;
  }
  else if ((int)plVar3 == 0) goto LAB_10b59e540;
  func_0x00010b5a1ed4();
  param_2 = param_3;
  func_0x00010b5a2084(param_3,9);
  uVar4 = unaff_x22;
LAB_10b59e540:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5a1f48();
  if ((long)uVar4 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    uVar4 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if ((long)(int)uVar4 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar5,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  while( true ) {
    iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar6 = (int)uVar4;
    uVar4 = (ulong)(uint)(iVar6 - iVar7);
    if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
    func_0x00010b4d5738();
    lVar5 = (long)param_2 + (long)iVar7;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar5);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar6);
}



/* Entry: 10b59e578; end: 10b59e683;  */

long FUN_10b59e578(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010b5a1f34(*(undefined8 *)(param_1 + 0x10));
  if (extraout_x8 < 0) {
    if (*(long *)(lVar2 + 8) != 0) goto LAB_10b59e598;
LAB_10b59e5ac:
    lVar3 = 0;
  }
  else {
    if (extraout_x8 == 0) goto LAB_10b59e5ac;
LAB_10b59e598:
    func_0x000107c28098();
    lVar3 = lVar2 + 1;
  }
  func_0x00010b5a1f34(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5a1f10();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 1:
    FUN_10b59edcc(*(undefined8 *)(param_1 + 0x28));
    break;
  case 2:
    func_0x00010b59ef90(*(undefined8 *)(param_1 + 0x28));
    break;
  case 3:
    func_0x00010b59f460(*(undefined8 *)(param_1 + 0x28));
    break;
  case 4:
    FUN_10b59f96c(*(undefined8 *)(param_1 + 0x28));
    break;
  default:
    goto LAB_10b59e658;
  case 6:
    func_0x00010b59fb4c(*(undefined8 *)(param_1 + 0x28));
  }
  func_0x00010b5a1d94();
  func_0x00010b5a1e9c();
LAB_10b59e658:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5a1f68();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b59e684; end: 10b59e687;  */

void FUN_10b59e684(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5a1e50();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    func_0x00010b5a20e0();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b59e1a0();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        FUN_10b59e860();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a163c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59e8d4();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a16b8();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59e964();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      FUN_10b5a1744();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59ead4();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a18b0();
      break;
    default:
      goto LAB_10b59e838;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59eb9c();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a1964();
    }
    unaff_x21[5] = (ulong)param_1;
  }
LAB_10b59e838:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a1e60();
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



/* Entry: 10b59e688; end: 10b59e85f;  */

void FUN_10b59e688(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5a1e50();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    func_0x00010b5a20e0();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  iVar1 = *(int *)(unaff_x20 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b59e1a0();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        FUN_10b59e860();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a163c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59e8d4();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a16b8();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59e964();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      FUN_10b5a1744();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59ead4();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a18b0();
      break;
    default:
      goto LAB_10b59e838;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59eb9c();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a1964();
    }
    unaff_x21[5] = (ulong)param_1;
  }
LAB_10b59e838:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5a1e60();
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



/* Entry: 10b59e860; end: 10b59e8d3;  */

void FUN_10b59e860(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5a1e50();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar2 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar2 == (ulong *)0x0) {
      FUN_10b5a19ec();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x00010b59df94();
      puVar1 = puVar2;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x00010b5a2170();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5a1e60();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10b59e8d4; end: 10b59ec27;  */

void FUN_10b59e8d4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010b5a1e50();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x00010b5a206c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5a1f98();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010b5a219c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5a2150();
      if (param_1 == (ulong *)0x0) {
        FUN_10b5a19ec();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b59df94();
      }
    }
  }
  func_0x00010b5a1de8();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b5a1e60();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b59ec28; end: 10b59ec5b;  */

void FUN_10b59ec28(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b5a1f5c();
  FUN_10b59e418();
  puVar3 = unaff_x20;
  lVar4 = unaff_x19;
  func_0x00010b5a1e50();
  uVar5 = *(ulong *)(unaff_x19 + 8);
  func_0x00010b5a1f28(unaff_x20[2]);
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    puVar3 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  func_0x00010b5a1f28(unaff_x20[3]);
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(lVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5a1f1c();
    }
    func_0x00010b5a20e0();
  }
  if ((int)unaff_x20[4] != 0) {
    *(int *)(unaff_x21 + 4) = (int)unaff_x20[4];
  }
  iVar1 = *(int *)((long)unaff_x20 + 0x34);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        puVar3 = unaff_x21;
        FUN_10b59e1a0();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        FUN_10b59e860();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a163c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59e8d4();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a16b8();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59e964();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      FUN_10b5a1744();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59ead4();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a18b0();
      break;
    default:
      goto LAB_10b59e838;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b5a1ee8();
        func_0x00010b59eb9c();
        goto LAB_10b59e838;
      }
      func_0x00010b5a2018();
      func_0x00010b5a1964();
    }
    unaff_x21[5] = (ulong)puVar3;
  }
LAB_10b59e838:
  if ((unaff_x20[1] & 1) != 0) {
    func_0x00010b5a1e60();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 10b59ec5c; end: 10b59ecb3;  */

void FUN_10b59ec5c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  return;
}



/* Entry: 10b59ecb4; end: 10b59ece7;  */

long FUN_10b59ecb4(long param_1)

{
  func_0x00010b5a1ec4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b59dfbc();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b59ece8; end: 10b59ecfb;  */

void FUN_10b59ece8(void)

{
  FUN_10b59ecb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59ecfc; end: 10b59ed07;  */

undefined ** FUN_10b59ecfc(void)

{
  return &PTR_DAT_110d138b0;
}



/* Entry: 10b59ed08; end: 10b59ed47;  */

void FUN_10b59ed08(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5a2184();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b59e050(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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


