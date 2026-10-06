/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4ee7d8; end: 10b4ee7eb;  */

void FUN_10b4ee7d8(void)

{
  FUN_10b4ee758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ee7ec; end: 10b4ee7f7;  */

undefined ** FUN_10b4ee7ec(void)

{
  return &PTR_DAT_110cf3a10;
}



/* Entry: 10b4ee7f8; end: 10b4ee86b;  */

void FUN_10b4ee7f8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bcebce4(*(undefined8 *)(param_1 + 0x28));
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



/* Entry: 10b4ee86c; end: 10b4ee9bb;  */

long * FUN_10b4ee86c(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x1;
    func_0x00010b4eeb28(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010b4eeb28(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010b4eeb28(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
  }
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
  if ((long)(int)uVar3 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
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



/* Entry: 10b4ee9bc; end: 10b4ee9bf;  */

void FUN_10b4ee9bc(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        func_0x00010b4eeb18(0,*(undefined8 *)(param_2 + 0x18));
        *(long *)(param_1 + 0x18) = lVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        func_0x00010b4eeb18(0,*(undefined8 *)(param_2 + 0x20));
        *(long *)(param_1 + 0x20) = lVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) {
        func_0x00010b4eeb18(0,*(undefined8 *)(param_2 + 0x28));
        *(long *)(param_1 + 0x28) = lVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
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



/* Entry: 10b4ee9c0; end: 10b4eeab7;  */

void FUN_10b4ee9c0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        func_0x00010b4eeb18(0,*(undefined8 *)(param_2 + 0x18));
        *(long *)(param_1 + 0x18) = lVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        func_0x00010b4eeb18(0,*(undefined8 *)(param_2 + 0x20));
        *(long *)(param_1 + 0x20) = lVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) {
        func_0x00010b4eeb18(0,*(undefined8 *)(param_2 + 0x28));
        *(long *)(param_1 + 0x28) = lVar2;
      }
      else {
        func_0x00010bcebc88();
      }
    }
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



/* Entry: 10b4eeab8; end: 10b4eeabf;  */

void FUN_10b4eeab8(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf39d0;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4eeac0; end: 10b4eeb0b;  */

void FUN_10b4eeac0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf39d0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4eeb0c; end: 10b4eeb2f;  */

void FUN_10b4eeb0c(void)

{
  return;
}



/* Entry: 10b4eeb30; end: 10b4eebb3;  */

undefined8 * FUN_10b4eeb30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf3a88;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b4eeef0(param_1 + 2,param_2,param_3 + 0x10);
  param_3 = param_3 + 0x28;
  func_0x000107c2809c(param_3,param_2);
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 10b4eebb4; end: 10b4eebe3;  */

long FUN_10b4eebb4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4eebe4(param_1);
  return param_1;
}



/* Entry: 10b4eebe4; end: 10b4eec0b;  */

long * FUN_10b4eebe4(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b4eec0c; end: 10b4eec0f;  */

long FUN_10b4eec0c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4eebe4(param_1);
  return param_1;
}



/* Entry: 10b4eec10; end: 10b4eec23;  */

void FUN_10b4eec10(void)

{
  FUN_10b4eebb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4eec24; end: 10b4eec2f;  */

undefined ** FUN_10b4eec24(void)

{
  return &PTR_DAT_110cf3ac8;
}



/* Entry: 10b4eec30; end: 10b4eec7f;  */

void FUN_10b4eec30(long param_1)

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



/* Entry: 10b4eec80; end: 10b4eed8f;  */

long * FUN_10b4eec80(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b4eecf0;
    puVar2 = (undefined8 *)*puVar8;
  }
  else {
    puVar2 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b4eecf0;
  }
  func_0x000107c303d4(puVar2,lVar4,1,&UNK_10f7757ae);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar3;
LAB_10b4eecf0:
  iVar9 = *(int *)(param_1 + 0x18);
  for (iVar7 = 0; iVar9 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    plVar3 = (long *)0x2;
    func_0x000107c303cc(2,*puVar1,*(undefined4 *)(*puVar1 + 0x28),param_2,param_3);
    param_2 = plVar3;
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
  return param_2;
}



/* Entry: 10b4eed90; end: 10b4eee2b;  */

long FUN_10b4eed90(long param_1)

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
    FUN_10b4eee2c();
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



/* Entry: 10b4eee2c; end: 10b4eee57;  */

long FUN_10b4eee2c(long param_1)

{
  FUN_10b4e8848();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b4eee58; end: 10b4eee5b;  */

void FUN_10b4eee58(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b4eeed8(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b4eee5c; end: 10b4eeed7;  */

void FUN_10b4eee5c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_10b4eeed8(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b4eeed8; end: 10b4eeeef;  */

void FUN_10b4eeed8(long *param_1,long param_2)

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



/* Entry: 10b4eeef0; end: 10b4eef1b;  */

undefined8 * FUN_10b4eeef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b4eeed8(param_1,param_3);
  return param_1;
}



/* Entry: 10b4eef1c; end: 10b4eef4b;  */

long * FUN_10b4eef1c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4eef4c; end: 10b4eef9f;  */

void FUN_10b4eef4c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf3a88;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b4eefa0; end: 10b4eefb3;  */

void FUN_10b4eefa0(void)

{
  return;
}



/* Entry: 10b4eefb4; end: 10b4ef08f;  */

void FUN_10b4eefb4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0xf0) == 6) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0xe0) != 0) {
        FUN_10b4edb5c();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return;
}



/* Entry: 10b4ef090; end: 10b4ef33b;  */

undefined8 * FUN_10b4ef090(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf3b38;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_10b4f0580(param_1 + 3,param_3 + 0x18);
  lVar2 = param_3 + 0x30;
  func_0x00010b4f093c();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00010b4f093c();
  param_1[7] = lVar2;
  lVar2 = param_3 + 0x40;
  func_0x00010b4f093c();
  param_1[8] = lVar2;
  lVar2 = param_3 + 0x48;
  func_0x00010b4f093c();
  param_1[9] = lVar2;
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_3 + 0xf0);
  *(undefined4 *)((long)param_1 + 0xf4) = *(undefined4 *)(param_3 + 0xf4);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f0638(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f066c(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000105992a50(param_2,*(undefined8 *)(param_3 + 0x60));
  }
  param_1[0xc] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f06a8(param_2,*(undefined8 *)(param_3 + 0x68));
  }
  param_1[0xd] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4f0978();
  }
  param_1[0xe] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000106af67c0(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  param_1[0xf] = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f06e4(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f0714(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4e532c(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  param_1[0x12] = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f0744(param_2,*(undefined8 *)(param_3 + 0x98));
  }
  param_1[0x13] = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f0780(param_2,*(undefined8 *)(param_3 + 0xa0));
  }
  param_1[0x14] = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4f0978();
  }
  param_1[0x15] = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b4f0978();
  }
  param_1[0x16] = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b4f07b4(param_2,*(undefined8 *)(param_3 + 0xb8));
  }
  param_1[0x17] = uVar3;
  uVar4 = *(undefined8 *)(param_3 + 200);
  uVar3 = *(undefined8 *)(param_3 + 0xc0);
  uVar5 = *(undefined8 *)(param_3 + 0xc9);
  *(undefined8 *)((long)param_1 + 0xd1) = *(undefined8 *)(param_3 + 0xd1);
  *(undefined8 *)((long)param_1 + 0xc9) = uVar5;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar3;
  if (*(int *)(param_1 + 0x1e) == 6) {
    uVar3 = param_2;
    func_0x00010b4f07e8(param_2,*(undefined8 *)(param_3 + 0xe0));
    param_1[0x1c] = uVar3;
  }
  if (*(int *)((long)param_1 + 0xf4) == 0x1a) {
    func_0x00010b4f0854(param_2,*(undefined8 *)(param_3 + 0xe8));
  }
  else {
    if (*(int *)((long)param_1 + 0xf4) != 0x17) {
      return param_1;
    }
    func_0x00010b4f0818(param_2,*(undefined8 *)(param_3 + 0xe8));
  }
  param_1[0x1d] = param_2;
  return param_1;
}



/* Entry: 10b4ef33c; end: 10b4ef36b;  */

long FUN_10b4ef33c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4ef36c(param_1);
  return param_1;
}



/* Entry: 10b4ef36c; end: 10b4ef4ab;  */

long * FUN_10b4ef36c(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10b4eebb4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10b4f8070();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10b4e80b4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b4eac84();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b4f71dc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10b4e4fc4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_10b4f8e94();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_10b4ea630();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_10b4ee758();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_10b4eac84();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10b4eac84();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_10b4e4b38();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_10b4eefb4(param_1);
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    func_0x00010b4ef008(param_1);
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b4ef4ac; end: 10b4ef4af;  */

long FUN_10b4ef4ac(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4ef36c(param_1);
  return param_1;
}



/* Entry: 10b4ef4b0; end: 10b4ef4c3;  */

void FUN_10b4ef4b0(void)

{
  FUN_10b4ef33c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4ef4c4; end: 10b4ef4cf;  */

undefined ** FUN_10b4ef4c4(void)

{
  return &PTR_DAT_110cf3b78;
}



/* Entry: 10b4ef4d0; end: 10b4ef647;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4ef4d0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b4eec30(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b4f8194(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b4e8144(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b4eacd8(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_10b4f724c(*(undefined8 *)(param_1 + 0x80));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_10b4e5034(*(undefined8 *)(param_1 + 0x88));
    }
  }
  if ((uVar1 & 0x3f00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      FUN_10b4f8f10(*(undefined8 *)(param_1 + 0x90));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x00010b4ea6cc(*(undefined8 *)(param_1 + 0x98));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      FUN_10b4ee7f8(*(undefined8 *)(param_1 + 0xa0));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      FUN_10b4eacd8(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      FUN_10b4eacd8(*(undefined8 *)(param_1 + 0xb0));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      FUN_10b4e4bb4(*(undefined8 *)(param_1 + 0xb8));
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_10b4eefb4(param_1);
  func_0x00010b4ef008(param_1);
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



/* Entry: 10b4ef648; end: 10b4efc3f;  */

long * FUN_10b4ef648(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long unaff_x22;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 2);
  plVar3 = param_1;
  plVar5 = param_2;
  if ((uVar2 & 1) != 0) {
    param_2 = (long *)param_1[10];
    plVar3 = (long *)0x1;
    func_0x00010b4f08c0(1,param_2,(int)param_2[6]);
    plVar5 = plVar3;
  }
  plVar4 = plVar3;
  if ((char)param_1[0x18] == '\x01') {
    func_0x00010b4f08cc();
    plVar4 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar3;
    plVar5 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)((long)param_1 + 0xc1) == '\x01') {
    func_0x00010b4f08cc();
    plVar3 = (long *)0x18;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar4;
    plVar5 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)((long)param_1 + 0xc2) == '\x01') {
    func_0x00010b4f08cc();
    plVar4 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar3;
    plVar5 = plVar4;
  }
  if ((int)param_1[0x1e] == 6) {
    param_2 = (long *)param_1[0x1c];
    plVar4 = (long *)0x6;
    func_0x00010b4f08c0(6,param_2,(int)param_2[4]);
    plVar5 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)((long)param_1 + 0xc4) != 0) {
    func_0x00010b4f08cc();
    plVar3 = (long *)0x38;
    func_0x000107c280a8();
    func_0x00010b4f0908();
    param_2 = plVar4;
    plVar5 = plVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (long *)param_1[0xb];
    plVar3 = (long *)0x8;
    func_0x00010b4f08c0(8,param_2,*(undefined4 *)((long)param_2 + 0x14));
    plVar5 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)((long)param_1 + 0xc3) == '\x01') {
    func_0x00010b4f08cc();
    plVar4 = (long *)0x48;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar3;
    plVar5 = plVar4;
  }
  plVar3 = plVar4;
  if ((char)param_1[0x19] == '\x01') {
    func_0x00010b4f08cc();
    plVar3 = (long *)0x50;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar4;
    plVar5 = plVar3;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = (long *)param_1[0xc];
    plVar3 = (long *)0xb;
    func_0x00010b4f08c0(0xb,param_2,*(undefined4 *)((long)param_2 + 0x14));
    plVar5 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)((long)param_1 + 0xc9) == '\x01') {
    func_0x00010b4f08cc();
    plVar4 = (long *)0x60;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar3;
    plVar5 = plVar4;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = (long *)param_1[0xd];
    plVar4 = (long *)0xd;
    func_0x00010b4f08c0(0xd,param_2,*(undefined4 *)((long)param_2 + 0x14));
    plVar5 = plVar4;
  }
  func_0x00010b4f0998(param_1[6]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4ef828;
  }
  else if ((int)param_2 != 0) {
LAB_10b4ef828:
    func_0x00010b4f0944();
    param_2 = (long *)0xe;
    plVar4 = param_3;
    func_0x00010b4f08e4();
    plVar5 = plVar4;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_2 = (long *)param_1[0xe];
    plVar4 = (long *)0xf;
    func_0x00010b4f08c0(0xf,param_2,*(undefined4 *)((long)param_2 + 0x2c));
    plVar5 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)((long)param_1 + 0xcc) != 0) {
    func_0x00010b4f08cc();
    plVar3 = (long *)0x80;
    func_0x000107c280a8();
    func_0x00010b4f0908();
    param_2 = plVar4;
    plVar5 = plVar3;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    param_2 = (long *)param_1[0xf];
    plVar3 = (long *)0x11;
    func_0x00010b4f08c0(0x11,param_2,*(undefined4 *)((long)param_2 + 0x14));
    plVar5 = plVar3;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    param_2 = (long *)param_1[0x10];
    plVar3 = (long *)0x12;
    func_0x00010b4f08c0(0x12,param_2,*(undefined4 *)((long)param_2 + 0x14));
    plVar5 = plVar3;
  }
  func_0x00010b4f0998(param_1[7]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4ef8d4;
  }
  else if ((int)param_2 != 0) {
LAB_10b4ef8d4:
    func_0x00010b4f0944();
    param_2 = (long *)0x13;
    plVar3 = param_3;
    func_0x00010b4f08e4();
    plVar5 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)((long)param_1 + 0xca) == '\x01') {
    func_0x00010b4f08cc();
    plVar4 = (long *)0xa0;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar3;
    plVar5 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)((long)param_1 + 0xcb) == '\x01') {
    func_0x00010b4f08cc();
    plVar3 = (long *)0xa8;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar4;
    plVar5 = plVar3;
  }
  plVar4 = plVar3;
  if ((int)param_1[0x1a] != 0) {
    func_0x00010b4f08cc();
    plVar4 = (long *)0xb0;
    func_0x000107c280a8();
    func_0x00010b4f0908();
    param_2 = plVar3;
    plVar5 = plVar4;
  }
  if (*(int *)((long)param_1 + 0xf4) == 0x17) {
    param_2 = (long *)param_1[0x1d];
    plVar4 = (long *)0x17;
    func_0x00010b4f08c0(0x17,param_2,(int)param_2[0xd]);
    plVar5 = plVar4;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    param_2 = (long *)param_1[0x11];
    plVar4 = (long *)0x18;
    func_0x00010b4f08c0(0x18,param_2,*(undefined4 *)((long)param_2 + 0x14));
    plVar5 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)((long)param_1 + 0xd4) == '\x01') {
    func_0x00010b4f08cc();
    plVar3 = (long *)0xc8;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar4;
    plVar5 = plVar3;
  }
  if (*(int *)((long)param_1 + 0xf4) == 0x1a) {
    param_2 = (long *)param_1[0x1d];
    plVar3 = (long *)0x1a;
    func_0x00010b4f08c0(0x1a,param_2,(int)param_2[6]);
    plVar5 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)((long)param_1 + 0xd5) == '\x01') {
    func_0x00010b4f08cc();
    plVar4 = (long *)0xd8;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar3;
    plVar5 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)((long)param_1 + 0xd6) == '\x01') {
    func_0x00010b4f08cc();
    plVar3 = (long *)0xe0;
    func_0x000107c280a8();
    func_0x00010b4f08d8();
    param_2 = plVar4;
    plVar5 = plVar3;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    param_2 = (long *)param_1[0x12];
    plVar3 = (long *)0x1d;
    func_0x00010b4f08c0(0x1d,param_2,(int)param_2[6]);
    plVar5 = plVar3;
  }
  func_0x00010b4f0998(param_1[8]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b4efa70;
  }
  else if ((int)param_2 != 0) {
LAB_10b4efa70:
    func_0x00010b4f0944();
    param_2 = (long *)0x1e;
    plVar3 = param_3;
    func_0x00010b4f08e4();
    plVar5 = plVar3;
  }
  func_0x00010b4f0998(param_1[9]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b4efacc;
  }
  else if ((int)param_2 == 0) goto LAB_10b4efacc;
  func_0x00010b4f0944();
  plVar3 = param_3;
  func_0x00010b4f08e4(param_3,0x1f);
  plVar5 = plVar3;
LAB_10b4efacc:
  if ((uVar2 >> 9 & 1) != 0) {
    plVar3 = (long *)0x20;
    func_0x00010b4f08c0(0x20,param_1[0x13],*(undefined4 *)(param_1[0x13] + 0x18));
    plVar5 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)((long)param_1 + 0xd7) == '\x01') {
    func_0x00010b4f08cc();
    plVar4 = (long *)0x108;
    func_0x000107c280a8(0x108,plVar3);
    func_0x00010b4f08d8();
    plVar5 = plVar4;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    plVar4 = (long *)0x22;
    func_0x00010b4f08c0(0x22,param_1[0x14],*(undefined4 *)(param_1[0x14] + 0x14));
    plVar5 = plVar4;
  }
  if ((char)param_1[0x1b] == '\x01') {
    func_0x00010b4f08cc();
    plVar5 = (long *)0x118;
    func_0x000107c280a8(0x118,plVar4);
    func_0x00010b4f08d8();
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    plVar5 = (long *)0x24;
    func_0x00010b4f08c0(0x24,param_1[0x15],*(undefined4 *)(param_1[0x15] + 0x2c));
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    plVar5 = (long *)0x25;
    func_0x00010b4f08c0(0x25,param_1[0x16],*(undefined4 *)(param_1[0x16] + 0x2c));
  }
  lVar6 = param_1[4];
  for (iVar9 = 0; (int)lVar6 != iVar9; iVar9 = iVar9 + 1) {
    uVar7 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar7 & 1) != 0) {
      puVar1 = (ulong *)(uVar7 + (long)iVar9 * 8 + 7);
    }
    plVar5 = (long *)0x26;
    func_0x00010b4f08c0(0x26,*puVar1,*(undefined4 *)(*puVar1 + 0x1c));
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    plVar5 = (long *)0x27;
    func_0x00010b4f08c0(0x27,param_1[0x17],*(undefined4 *)(param_1[0x17] + 0x2c));
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
    if ((long)(int)uVar7 <= *param_3 - (long)plVar5) {
      _memcpy(plVar5,lVar6,uVar7 & 0xffffffff);
      return (long *)((long)plVar5 + (long)(int)uVar7);
    }
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar5) + 0x10;
      iVar9 = (int)uVar7;
      uVar7 = (ulong)(uint)(iVar9 - iVar10);
      if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
      func_0x00010b4d5738();
      lVar6 = (long)plVar5 + (long)iVar10;
      plVar5 = param_3;
      func_0x000107c303e4(param_3,lVar6);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar5 + (long)iVar9);
  }
  return plVar5;
}



/* Entry: 10b4efc40; end: 10b4efffb;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10b4efc40(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  ushort uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar5 = (long)*(int *)(param_1 + 0x20) << 1;
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  uVar4 = param_1;
  for (lVar6 = (long)*(int *)(param_1 + 0x20) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
    uVar4 = *puVar1;
    FUN_10b4edf6c();
    lVar5 = uVar4 + lVar5 + (ulong)((int)LZCOUNT((int)uVar4) * -9 + 0x160U >> 6);
    puVar1 = puVar1 + 1;
  }
  func_0x00010b4f098c(*(undefined8 *)(param_1 + 0x30));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    lVar5 = lVar5 + uVar4 + 1;
  }
  func_0x00010b4f098c(*(undefined8 *)(param_1 + 0x38));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4f0930();
  }
  func_0x00010b4f098c(*(undefined8 *)(param_1 + 0x40));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4f0930();
  }
  func_0x00010b4f098c(*(undefined8 *)(param_1 + 0x48));
  lVar6 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b4f0930();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      FUN_10b4eed90(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b4f0888();
      lVar5 = extraout_x8_08 + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      FUN_10b4f8564(*(undefined8 *)(param_1 + 0x58));
      func_0x00010b4f0888();
      lVar5 = extraout_x8_09 + 1;
    }
    if ((uVar2 >> 2 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x60);
      func_0x000105991570(lVar6);
      lVar5 = lVar5 + lVar6 + 1;
    }
    if ((uVar2 >> 3 & 1) != 0) {
      FUN_10b4e83e0(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b4f0888();
      lVar5 = extraout_x8_10 + 1;
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x70);
      FUN_10b4e6350(lVar6);
      lVar5 = lVar5 + lVar6 + 1;
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x78));
      func_0x00010b4f0930();
    }
    if ((uVar2 >> 6 & 1) != 0) {
      FUN_10b4f7380(*(undefined8 *)(param_1 + 0x80));
      func_0x00010b4f0888();
      lVar5 = extraout_x8_11 + 2;
    }
    if ((uVar2 >> 7 & 1) != 0) {
      FUN_10b4e5178(*(undefined8 *)(param_1 + 0x88));
      func_0x00010b4f0888();
      lVar5 = extraout_x8_03 + 2;
    }
  }
  if ((uVar2 & 0x3f00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      FUN_10b4e51e8(*(undefined8 *)(param_1 + 0x90));
      func_0x00010b4f0930();
    }
    if ((uVar2 >> 9 & 1) != 0) {
      FUN_10b4ea810(*(undefined8 *)(param_1 + 0x98));
      func_0x00010b4f0888();
      lVar5 = extraout_x8_12 + 2;
    }
    if ((uVar2 >> 10 & 1) != 0) {
      func_0x00010b4ee920(*(undefined8 *)(param_1 + 0xa0));
      func_0x00010b4f0888();
      lVar5 = extraout_x8_13 + 2;
    }
    if ((uVar2 >> 0xb & 1) != 0) {
      FUN_10b4e6350(*(undefined8 *)(param_1 + 0xa8));
      func_0x00010b4f0930();
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      FUN_10b4e6350(*(undefined8 *)(param_1 + 0xb0));
      func_0x00010b4f0930();
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      FUN_10b4e4d40(*(undefined8 *)(param_1 + 0xb8));
      func_0x00010b4f0888();
      lVar5 = extraout_x8_04 + 2;
    }
  }
  uVar7 = *(undefined4 *)(param_1 + 0xc0);
  uVar3 = (ushort)(byte)((uint)uVar7 >> 8) * 2;
  lVar5 = ((ulong)CONCAT24(uVar3,(uint)(ushort)((ushort)(byte)uVar7 * 2)) & 0xff) +
          (ulong)(byte)((char)((uint)uVar7 >> 0x10) * '\x02') +
          ((ulong)uVar3 & 0xff) + (ulong)(byte)((char)((uint)uVar7 >> 0x18) * '\x02') + lVar5;
  if (*(int *)(param_1 + 0xc4) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xc4)) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = lVar5 + (ulong)*(byte *)(param_1 + 200) * 2 + (ulong)*(byte *)(param_1 + 0xc9) * 2;
  lVar6 = lVar5 + 3;
  if (*(char *)(param_1 + 0xca) == '\0') {
    lVar6 = lVar5;
  }
  lVar5 = lVar6 + 3;
  if (*(char *)(param_1 + 0xcb) == '\0') {
    lVar5 = lVar6;
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xcc)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    lVar5 = lVar5 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0xd0)) * -9 + 0x280U >> 6) + 2;
  }
  func_0x00010b4f0914(lVar5);
  func_0x00010b4f0914();
  func_0x00010b4f0914();
  func_0x00010b4f0914();
  lVar5 = extraout_x8_05 + 3;
  if (*(char *)(param_1 + 0xd8) == '\0') {
    lVar5 = extraout_x8_05;
  }
  if (*(int *)(param_1 + 0xf0) == 6) {
    lVar6 = *(long *)(param_1 + 0xe0);
    func_0x00010b4edc84();
    func_0x00010b4f08a8();
    lVar5 = lVar5 + lVar6 + extraout_x8_06 + 1;
  }
  if (*(int *)(param_1 + 0xf4) == 0x1a) {
    lVar6 = *(long *)(param_1 + 0xe8);
    FUN_10b4eb1e4();
  }
  else {
    if (*(int *)(param_1 + 0xf4) != 0x17) goto LAB_10b4efed8;
    lVar6 = *(long *)(param_1 + 0xe8);
    func_0x00010b4eb7e8();
  }
  func_0x00010b4f08a8();
  lVar5 = lVar5 + lVar6 + extraout_x8_07 + 2;
LAB_10b4efed8:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar6 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10b4efffc; end: 10b4effff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4efffc(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  lVar6 = param_2 + 0x18;
  FUN_10b4f0580(param_1 + 0x18);
  func_0x00010b4f09b0(*(undefined8 *)(param_2 + 0x30));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(lVar6 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4f09a4();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b4f09b0(*(undefined8 *)(param_2 + 0x38));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(lVar6 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4f09a4();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b4f09b0(*(undefined8 *)(param_2 + 0x40));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(lVar6 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4f09a4();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  func_0x00010b4f09b0(*(undefined8 *)(param_2 + 0x48));
  lVar7 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar7 = *(long *)(lVar6 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4f09a4();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f0638(uVar8,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar5;
      }
      else {
        FUN_10b4eee5c();
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f066c(uVar8,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar5;
      }
      else {
        FUN_10b4f8778();
      }
    }
    if ((uVar2 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar5 = uVar8;
        func_0x000105992a50(uVar8,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar5;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar2 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f06a8(uVar8,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar5;
      }
      else {
        FUN_10b4e84e0();
      }
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x70);
      if (lVar6 == 0) {
        func_0x00010b4f0954(0,*(undefined8 *)(param_2 + 0x70));
        *(long *)(param_1 + 0x70) = lVar6;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar2 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar5 = uVar8;
        func_0x000106af67c0(uVar8,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar5;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar2 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f06e4(uVar8,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar5;
      }
      else {
        FUN_10b4f7410();
      }
    }
    if ((uVar2 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f0714(uVar8,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar5;
      }
      else {
        FUN_10b4e5218();
      }
    }
  }
  if ((uVar2 & 0x3f00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        uVar5 = uVar8;
        func_0x00010b4e532c(uVar8,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar5;
      }
      else {
        FUN_10b4f9104();
      }
    }
    if ((uVar2 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f0744(uVar8,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar5;
      }
      else {
        func_0x00010b4ea5c4();
      }
    }
    if ((uVar2 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f0780(uVar8,*(undefined8 *)(param_2 + 0xa0));
        *(ulong *)(param_1 + 0xa0) = uVar5;
      }
      else {
        FUN_10b4ee9c0();
      }
    }
    if ((uVar2 >> 0xb & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xa8);
      if (lVar6 == 0) {
        func_0x00010b4f0954(0,*(undefined8 *)(param_2 + 0xa8));
        *(long *)(param_1 + 0xa8) = lVar6;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xb0);
      if (lVar6 == 0) {
        func_0x00010b4f0954(0,*(undefined8 *)(param_2 + 0xb0));
        *(long *)(param_1 + 0xb0) = lVar6;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f07b4(uVar8,*(undefined8 *)(param_2 + 0xb8));
        *(ulong *)(param_1 + 0xb8) = uVar5;
      }
      else {
        FUN_10b4e4e04();
      }
    }
  }
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  if (*(char *)(param_2 + 0xc1) == '\x01') {
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
  if (*(char *)(param_2 + 0xc2) == '\x01') {
    *(undefined1 *)(param_1 + 0xc2) = 1;
  }
  if (*(char *)(param_2 + 0xc3) == '\x01') {
    *(undefined1 *)(param_1 + 0xc3) = 1;
  }
  if (*(int *)(param_2 + 0xc4) != 0) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_2 + 0xc4);
  }
  if (*(char *)(param_2 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 1;
  }
  if (*(char *)(param_2 + 0xc9) == '\x01') {
    *(undefined1 *)(param_1 + 0xc9) = 1;
  }
  if (*(char *)(param_2 + 0xca) == '\x01') {
    *(undefined1 *)(param_1 + 0xca) = 1;
  }
  if (*(char *)(param_2 + 0xcb) == '\x01') {
    *(undefined1 *)(param_1 + 0xcb) = 1;
  }
  if (*(int *)(param_2 + 0xcc) != 0) {
    *(int *)(param_1 + 0xcc) = *(int *)(param_2 + 0xcc);
  }
  if (*(int *)(param_2 + 0xd0) != 0) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_2 + 0xd0);
  }
  if (*(char *)(param_2 + 0xd4) == '\x01') {
    *(undefined1 *)(param_1 + 0xd4) = 1;
  }
  if (*(char *)(param_2 + 0xd5) == '\x01') {
    *(undefined1 *)(param_1 + 0xd5) = 1;
  }
  if (*(char *)(param_2 + 0xd6) == '\x01') {
    *(undefined1 *)(param_1 + 0xd6) = 1;
  }
  if (*(char *)(param_2 + 0xd7) == '\x01') {
    *(undefined1 *)(param_1 + 0xd7) = 1;
  }
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0xf0);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xf0) == iVar3) {
      if (iVar3 == 6) {
        FUN_10b4edd10(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_2 + 0xe0));
      }
    }
    else {
      if (*(int *)(param_1 + 0xf0) != 0) {
        func_0x00010b4eefb4(param_1);
      }
      *(int *)(param_1 + 0xf0) = iVar3;
      if (iVar3 == 6) {
        uVar5 = uVar8;
        func_0x00010b4f07e8(uVar8,*(undefined8 *)(param_2 + 0xe0));
        *(ulong *)(param_1 + 0xe0) = uVar5;
      }
    }
  }
  iVar3 = *(int *)(param_2 + 0xf4);
  if (iVar3 == 0) goto LAB_10b4f0544;
  iVar4 = *(int *)(param_1 + 0xf4);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      func_0x00010b4ef008(param_1);
    }
    *(int *)(param_1 + 0xf4) = iVar3;
  }
  if (iVar3 == 0x1a) {
    if (iVar4 == 0x1a) {
      ppuVar1 = *(undefined ***)(param_2 + 0xe8);
      if (*(int *)(param_2 + 0xf4) != 0x1a) {
        ppuVar1 = &PTR_PTR_113378240;
      }
      FUN_10b4eb278(*(undefined8 *)(param_1 + 0xe8),ppuVar1);
      goto LAB_10b4f0544;
    }
    func_0x00010b4f0854(uVar8,*(undefined8 *)(param_2 + 0xe8));
  }
  else {
    if (iVar3 != 0x17) goto LAB_10b4f0544;
    if (iVar4 == 0x17) {
      ppuVar1 = *(undefined ***)(param_2 + 0xe8);
      if (*(int *)(param_2 + 0xf4) != 0x17) {
        ppuVar1 = &PTR_PTR_113378278;
      }
      FUN_10b4eb8d8(*(undefined8 *)(param_1 + 0xe8),ppuVar1);
      goto LAB_10b4f0544;
    }
    func_0x00010b4f0818(uVar8,*(undefined8 *)(param_2 + 0xe8));
  }
  *(ulong *)(param_1 + 0xe8) = uVar8;
LAB_10b4f0544:
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



/* Entry: 10b4f0000; end: 10b4f057f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f0000(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + 8);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  lVar6 = param_2 + 0x18;
  FUN_10b4f0580(param_1 + 0x18);
  func_0x00010b4f09b0(*(undefined8 *)(param_2 + 0x30));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(lVar6 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4f09a4();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b4f09b0(*(undefined8 *)(param_2 + 0x38));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(lVar6 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4f09a4();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b4f09b0(*(undefined8 *)(param_2 + 0x40));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(lVar6 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4f09a4();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  func_0x00010b4f09b0(*(undefined8 *)(param_2 + 0x48));
  lVar7 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar7 = *(long *)(lVar6 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b4f09a4();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 0xff) != 0) {
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f0638(uVar8,*(undefined8 *)(param_2 + 0x50));
        *(ulong *)(param_1 + 0x50) = uVar5;
      }
      else {
        FUN_10b4eee5c();
      }
    }
    if ((uVar2 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f066c(uVar8,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar5;
      }
      else {
        FUN_10b4f8778();
      }
    }
    if ((uVar2 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x60) == 0) {
        uVar5 = uVar8;
        func_0x000105992a50(uVar8,*(undefined8 *)(param_2 + 0x60));
        *(ulong *)(param_1 + 0x60) = uVar5;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar2 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f06a8(uVar8,*(undefined8 *)(param_2 + 0x68));
        *(ulong *)(param_1 + 0x68) = uVar5;
      }
      else {
        FUN_10b4e84e0();
      }
    }
    if ((uVar2 >> 4 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x70);
      if (lVar6 == 0) {
        func_0x00010b4f0954(0,*(undefined8 *)(param_2 + 0x70));
        *(long *)(param_1 + 0x70) = lVar6;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar2 >> 5 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar5 = uVar8;
        func_0x000106af67c0(uVar8,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar5;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar2 >> 6 & 1) != 0) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f06e4(uVar8,*(undefined8 *)(param_2 + 0x80));
        *(ulong *)(param_1 + 0x80) = uVar5;
      }
      else {
        FUN_10b4f7410();
      }
    }
    if ((uVar2 >> 7 & 1) != 0) {
      if (*(long *)(param_1 + 0x88) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f0714(uVar8,*(undefined8 *)(param_2 + 0x88));
        *(ulong *)(param_1 + 0x88) = uVar5;
      }
      else {
        FUN_10b4e5218();
      }
    }
  }
  if ((uVar2 & 0x3f00) != 0) {
    if ((uVar2 >> 8 & 1) != 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
        uVar5 = uVar8;
        func_0x00010b4e532c(uVar8,*(undefined8 *)(param_2 + 0x90));
        *(ulong *)(param_1 + 0x90) = uVar5;
      }
      else {
        FUN_10b4f9104();
      }
    }
    if ((uVar2 >> 9 & 1) != 0) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f0744(uVar8,*(undefined8 *)(param_2 + 0x98));
        *(ulong *)(param_1 + 0x98) = uVar5;
      }
      else {
        func_0x00010b4ea5c4();
      }
    }
    if ((uVar2 >> 10 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f0780(uVar8,*(undefined8 *)(param_2 + 0xa0));
        *(ulong *)(param_1 + 0xa0) = uVar5;
      }
      else {
        FUN_10b4ee9c0();
      }
    }
    if ((uVar2 >> 0xb & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xa8);
      if (lVar6 == 0) {
        func_0x00010b4f0954(0,*(undefined8 *)(param_2 + 0xa8));
        *(long *)(param_1 + 0xa8) = lVar6;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar2 >> 0xc & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xb0);
      if (lVar6 == 0) {
        func_0x00010b4f0954(0,*(undefined8 *)(param_2 + 0xb0));
        *(long *)(param_1 + 0xb0) = lVar6;
      }
      else {
        FUN_10b4eaedc();
      }
    }
    if ((uVar2 >> 0xd & 1) != 0) {
      if (*(long *)(param_1 + 0xb8) == 0) {
        uVar5 = uVar8;
        func_0x00010b4f07b4(uVar8,*(undefined8 *)(param_2 + 0xb8));
        *(ulong *)(param_1 + 0xb8) = uVar5;
      }
      else {
        FUN_10b4e4e04();
      }
    }
  }
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  if (*(char *)(param_2 + 0xc1) == '\x01') {
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
  if (*(char *)(param_2 + 0xc2) == '\x01') {
    *(undefined1 *)(param_1 + 0xc2) = 1;
  }
  if (*(char *)(param_2 + 0xc3) == '\x01') {
    *(undefined1 *)(param_1 + 0xc3) = 1;
  }
  if (*(int *)(param_2 + 0xc4) != 0) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_2 + 0xc4);
  }
  if (*(char *)(param_2 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 1;
  }
  if (*(char *)(param_2 + 0xc9) == '\x01') {
    *(undefined1 *)(param_1 + 0xc9) = 1;
  }
  if (*(char *)(param_2 + 0xca) == '\x01') {
    *(undefined1 *)(param_1 + 0xca) = 1;
  }
  if (*(char *)(param_2 + 0xcb) == '\x01') {
    *(undefined1 *)(param_1 + 0xcb) = 1;
  }
  if (*(int *)(param_2 + 0xcc) != 0) {
    *(int *)(param_1 + 0xcc) = *(int *)(param_2 + 0xcc);
  }
  if (*(int *)(param_2 + 0xd0) != 0) {
    *(int *)(param_1 + 0xd0) = *(int *)(param_2 + 0xd0);
  }
  if (*(char *)(param_2 + 0xd4) == '\x01') {
    *(undefined1 *)(param_1 + 0xd4) = 1;
  }
  if (*(char *)(param_2 + 0xd5) == '\x01') {
    *(undefined1 *)(param_1 + 0xd5) = 1;
  }
  if (*(char *)(param_2 + 0xd6) == '\x01') {
    *(undefined1 *)(param_1 + 0xd6) = 1;
  }
  if (*(char *)(param_2 + 0xd7) == '\x01') {
    *(undefined1 *)(param_1 + 0xd7) = 1;
  }
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0xf0);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xf0) == iVar3) {
      if (iVar3 == 6) {
        FUN_10b4edd10(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_2 + 0xe0));
      }
    }
    else {
      if (*(int *)(param_1 + 0xf0) != 0) {
        func_0x00010b4eefb4(param_1);
      }
      *(int *)(param_1 + 0xf0) = iVar3;
      if (iVar3 == 6) {
        uVar5 = uVar8;
        func_0x00010b4f07e8(uVar8,*(undefined8 *)(param_2 + 0xe0));
        *(ulong *)(param_1 + 0xe0) = uVar5;
      }
    }
  }
  iVar3 = *(int *)(param_2 + 0xf4);
  if (iVar3 == 0) goto LAB_10b4f0544;
  iVar4 = *(int *)(param_1 + 0xf4);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      func_0x00010b4ef008(param_1);
    }
    *(int *)(param_1 + 0xf4) = iVar3;
  }
  if (iVar3 == 0x1a) {
    if (iVar4 == 0x1a) {
      ppuVar1 = *(undefined ***)(param_2 + 0xe8);
      if (*(int *)(param_2 + 0xf4) != 0x1a) {
        ppuVar1 = &PTR_PTR_113378240;
      }
      FUN_10b4eb278(*(undefined8 *)(param_1 + 0xe8),ppuVar1);
      goto LAB_10b4f0544;
    }
    func_0x00010b4f0854(uVar8,*(undefined8 *)(param_2 + 0xe8));
  }
  else {
    if (iVar3 != 0x17) goto LAB_10b4f0544;
    if (iVar4 == 0x17) {
      ppuVar1 = *(undefined ***)(param_2 + 0xe8);
      if (*(int *)(param_2 + 0xf4) != 0x17) {
        ppuVar1 = &PTR_PTR_113378278;
      }
      FUN_10b4eb8d8(*(undefined8 *)(param_1 + 0xe8),ppuVar1);
      goto LAB_10b4f0544;
    }
    func_0x00010b4f0818(uVar8,*(undefined8 *)(param_2 + 0xe8));
  }
  *(ulong *)(param_1 + 0xe8) = uVar8;
LAB_10b4f0544:
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



/* Entry: 10b4f0580; end: 10b4f0597;  */

void FUN_10b4f0580(long *param_1,long param_2)

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



/* Entry: 10b4f0598; end: 10b4f05c7;  */

long * FUN_10b4f0598(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4f05c8; end: 10b4f0887;  */

undefined8 * FUN_10b4f05c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xf8;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0xf8);
  }
  *puVar1 = &PTR_FUN_110cf3b38;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = &DAT_11383d918;
  puVar1[9] = &DAT_11383d918;
  puVar1[0x1e] = 0;
  _bzero(puVar1 + 10,0x89);
  return puVar1;
}



/* Entry: 10b4f0888; end: 10b4f09bb;  */

void FUN_10b4f0888(void)

{
  return;
}



/* Entry: 10b4f09bc; end: 10b4f0c73;  */

undefined8 * FUN_10b4f09bc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cf3c90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4f2254();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b4f1ec4(param_1 + 3,param_2,param_3 + 0x18);
  puVar2 = param_1 + 6;
  func_0x00010b4f1ee4(puVar2,param_2,param_3 + 0x30);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[9] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f21c4();
  }
  param_1[10] = puVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[0xb] = puVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[0xc] = puVar2;
  if ((uVar1 >> 4 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[0xd] = puVar2;
  if ((uVar1 >> 5 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[0xe] = puVar2;
  if ((uVar1 >> 6 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f21c4();
  }
  param_1[0xf] = puVar2;
  if ((uVar1 >> 7 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[0x10] = puVar2;
  if ((uVar1 >> 8 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f21c4();
  }
  param_1[0x11] = puVar2;
  if ((uVar1 >> 9 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f21c4();
  }
  param_1[0x12] = puVar2;
  if ((uVar1 >> 10 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[0x13] = puVar2;
  if ((uVar1 >> 0xb & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f21c4();
  }
  param_1[0x14] = puVar2;
  if ((uVar1 >> 0xc & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[0x15] = puVar2;
  if ((uVar1 >> 0xd & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2200();
  }
  param_1[0x16] = puVar2;
  if ((uVar1 >> 0xe & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2200();
  }
  param_1[0x17] = puVar2;
  if ((uVar1 >> 0xf & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2200();
  }
  param_1[0x18] = puVar2;
  if ((uVar1 >> 0x10 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[0x19] = puVar2;
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f21c4();
  }
  param_1[0x1a] = puVar2;
  if ((uVar1 >> 0x12 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  param_1[0x1b] = puVar2;
  if ((uVar1 >> 0x13 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2200();
  }
  param_1[0x1c] = puVar2;
  if ((uVar1 >> 0x14 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b4f2084(param_2,*(undefined8 *)(param_3 + 0xe8));
  }
  param_1[0x1d] = uVar3;
  if ((uVar1 >> 0x15 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0001088b8168(param_2,*(undefined8 *)(param_3 + 0xf0));
  }
  param_1[0x1e] = uVar3;
  if ((uVar1 >> 0x16 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b4f2124(param_2,*(undefined8 *)(param_3 + 0xf8));
  }
  param_1[0x1f] = param_2;
  return param_1;
}



/* Entry: 10b4f0c74; end: 10b4f0c9f;  */

undefined8 FUN_10b4f0c74(undefined8 param_1)

{
  func_0x00010b4f2240();
  FUN_10b4f0ca0(param_1);
  return param_1;
}



/* Entry: 10b4f0ca0; end: 10b4f0e37;  */

long * FUN_10b4f0ca0(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xc0) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 200) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd0) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd8) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xe0) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_10b4f1d04();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xf0) != 0) {
    func_0x000107c3040c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_10b4f26f4();
  }
  __ZdlPv();
  FUN_10b4f1f34(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b4f0e38; end: 10b4f0e3b;  */

undefined8 FUN_10b4f0e38(undefined8 param_1)

{
  func_0x00010b4f2240();
  FUN_10b4f0ca0(param_1);
  return param_1;
}



/* Entry: 10b4f0e3c; end: 10b4f0e4f;  */

void FUN_10b4f0e3c(void)

{
  FUN_10b4f0c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f0e50; end: 10b4f0e5b;  */

undefined ** FUN_10b4f0e50(void)

{
  return &PTR_DAT_110cf3cd0;
}



/* Entry: 10b4f0e5c; end: 10b4f108f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f0e5c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x00010b4f2070(param_1 + 0x18);
  func_0x00010b4f205c(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x80));
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x88));
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0x90));
    }
    if ((uVar1 >> 10 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x98));
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0xa0));
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0xa8));
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0xb0));
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0xb8));
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0xc0));
    }
  }
  if ((uVar1 & 0x7f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 200));
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      func_0x00010bceb514(*(undefined8 *)(param_1 + 0xd0));
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0xd8));
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0xe0));
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      func_0x00010b4f1030(*(undefined8 *)(param_1 + 0xe8));
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      func_0x000107c30410(*(undefined8 *)(param_1 + 0xf0));
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      FUN_10b4f27a4(*(undefined8 *)(param_1 + 0xf8));
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



/* Entry: 10b4f1090; end: 10b4f13d7;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b4f1090(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b4f2230();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_4 = (long *)0x1;
    func_0x00010b4f2180(1,*(long *)(unaff_x20 + 0x48),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x48) + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_4 = (long *)0x2;
    func_0x00010b4f2180(2,*(long *)(unaff_x20 + 0x50),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x50) + 0x14));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_4 = (long *)0x3;
    func_0x00010b4f2180(3,*(long *)(unaff_x20 + 0x58),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x58) + 0x14));
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_4 = (long *)0x4;
    func_0x00010b4f2180(4,*(long *)(unaff_x20 + 0x60),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x60) + 0x14));
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_4 = (long *)0x5;
    func_0x00010b4f2180(5,*(long *)(unaff_x20 + 0x68),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x68) + 0x14));
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_4 = (long *)0x6;
    func_0x00010b4f2180(6,*(long *)(unaff_x20 + 0x70),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x70) + 0x14));
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_4 = (long *)0x7;
    func_0x00010b4f2180(7,*(long *)(unaff_x20 + 0x78),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x78) + 0x14));
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_4 = (long *)0x8;
    func_0x00010b4f2180(8,*(long *)(unaff_x20 + 0x80),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x80) + 0x14));
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_4 = (long *)0x9;
    func_0x00010b4f2180(9,*(long *)(unaff_x20 + 0x88),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x88) + 0x14));
  }
  if ((uVar1 >> 9 & 1) != 0) {
    param_4 = (long *)0xa;
    func_0x00010b4f2180(10,*(long *)(unaff_x20 + 0x90),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x90) + 0x14));
  }
  if ((uVar1 >> 10 & 1) != 0) {
    param_4 = (long *)0xb;
    func_0x00010b4f2180(0xb,*(long *)(unaff_x20 + 0x98),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x98) + 0x14));
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    param_4 = (long *)0xc;
    func_0x00010b4f2180(0xc,*(long *)(unaff_x20 + 0xa0),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xa0) + 0x14));
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    param_4 = (long *)0xd;
    func_0x00010b4f2180(0xd,*(long *)(unaff_x20 + 0xa8),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xa8) + 0x14));
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    param_4 = (long *)0xe;
    func_0x00010b4f2180(0xe,*(long *)(unaff_x20 + 0xb0),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xb0) + 0x14));
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    param_4 = (long *)0xf;
    func_0x00010b4f2180(0xf,*(long *)(unaff_x20 + 0xb8),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xb8) + 0x14));
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    param_4 = (long *)0x10;
    func_0x00010b4f2180(0x10,*(long *)(unaff_x20 + 0xc0),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xc0) + 0x14));
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b4f21d4();
    param_4 = (long *)0x11;
    func_0x00010b4f2180();
  }
  iVar6 = *(int *)(unaff_x20 + 0x38);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00010b4f21d4();
    param_4 = (long *)0x12;
    func_0x00010b4f2180();
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    param_4 = (long *)0x13;
    func_0x00010b4f2180(0x13,*(long *)(unaff_x20 + 200),
                        *(undefined4 *)(*(long *)(unaff_x20 + 200) + 0x14));
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    param_4 = (long *)0x14;
    func_0x00010b4f2180(0x14,*(long *)(unaff_x20 + 0xd0),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xd0) + 0x14));
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    param_4 = (long *)0x15;
    func_0x00010b4f2180(0x15,*(long *)(unaff_x20 + 0xd8),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xd8) + 0x14));
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    param_4 = (long *)0x16;
    func_0x00010b4f2180(0x16,*(long *)(unaff_x20 + 0xe0),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xe0) + 0x14));
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    param_4 = (long *)0x17;
    func_0x00010b4f2180(0x17,*(long *)(unaff_x20 + 0xe8),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xe8) + 0x14));
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    param_4 = (long *)0x18;
    func_0x00010b4f2180(0x18,*(long *)(unaff_x20 + 0xf0),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xf0) + 0x2c));
  }
  if ((uVar1 >> 0x16 & 1) != 0) {
    param_4 = (long *)0x19;
    func_0x00010b4f2180(0x19,*(long *)(unaff_x20 + 0xf8),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0xf8) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if ((long)(int)uVar3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  while( true ) {
    iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar5 = (int)uVar3;
    uVar1 = iVar5 - iVar6;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar5 < iVar6) break;
    func_0x00010b4d5738();
    param_4 = unaff_x19;
    func_0x000107c303e4();
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar5);
}



/* Entry: 10b4f13d8; end: 10b4f1673;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_10b4f13d8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  long lVar5;
  long *unaff_x21;
  long unaff_x22;
  
  lVar5 = (long)*(int *)(param_1 + 0x20) << 1;
  func_0x00010b4f2260();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar2 = *unaff_x21;
    func_0x000106af66c4();
    lVar5 = lVar2 + lVar5;
    unaff_x21 = unaff_x21 + 1;
  }
  lVar5 = lVar5 + (long)*(int *)(param_1 + 0x38) * 2;
  func_0x00010b4f2260();
  for (lVar2 = 0; lVar2 != 0; lVar2 = lVar2 + -8) {
    lVar3 = *unaff_x21;
    FUN_10b4f1674();
    lVar5 = lVar3 + lVar5;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x48));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x58));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x60));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x70));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x78));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x80));
      func_0x00010b4f2198();
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x88));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 9 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0x90));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 10 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0x98));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0xa0));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0xa8));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      func_0x000105991570(*(undefined8 *)(param_1 + 0xb0));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      func_0x000105991570(*(undefined8 *)(param_1 + 0xb8));
      func_0x00010b4f2198();
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      func_0x000105991570(*(undefined8 *)(param_1 + 0xc0));
      func_0x00010b4f21f4();
    }
  }
  if ((uVar1 & 0x7f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 200));
      func_0x00010b4f21f4();
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      func_0x000106af6804(*(undefined8 *)(param_1 + 0xd0));
      func_0x00010b4f21f4();
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      func_0x000106af6794(*(undefined8 *)(param_1 + 0xd8));
      func_0x00010b4f21f4();
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      func_0x000105991570(*(undefined8 *)(param_1 + 0xe0));
      func_0x00010b4f21f4();
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xe8);
      func_0x00010b4f1e04();
      func_0x00010b4f21a4();
      lVar5 = lVar5 + lVar2 + extraout_x8_00 + 2;
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      func_0x0001088b7f10(*(undefined8 *)(param_1 + 0xf0));
      func_0x00010b4f21f4();
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xf8);
      func_0x00010b4f28f8();
      func_0x00010b4f21a4();
      lVar5 = lVar5 + lVar2 + extraout_x8 + 2;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    lVar5 = lVar2 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10b4f1674; end: 10b4f168f;  */

long FUN_10b4f1674(long param_1)

{
  long extraout_x8;
  
  FUN_10b4f1c60();
  func_0x00010b4f21a4();
  return param_1 + extraout_x8;
}



/* Entry: 10b4f1690; end: 10b4f1693;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f1690(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b4f229c();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b4f1aa8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x00010b4f1ab8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x48);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x48));
        *(long *)(unaff_x21 + 0x48) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x50);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x50));
        *(long *)(unaff_x21 + 0x50) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x58);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x58));
        *(long *)(unaff_x21 + 0x58) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x60);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x60));
        *(long *)(unaff_x21 + 0x60) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x68);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x68));
        *(long *)(unaff_x21 + 0x68) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x70);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x70));
        *(long *)(unaff_x21 + 0x70) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x78);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x78));
        *(long *)(unaff_x21 + 0x78) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x80);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x80));
        *(long *)(unaff_x21 + 0x80) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x88);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x88));
        *(long *)(unaff_x21 + 0x88) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x90);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x90));
        *(long *)(unaff_x21 + 0x90) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x98);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x98));
        *(long *)(unaff_x21 + 0x98) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xa0);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0xa0));
        *(long *)(unaff_x21 + 0xa0) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xa8);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0xa8));
        *(long *)(unaff_x21 + 0xa8) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xb0);
      if (lVar2 == 0) {
        func_0x00010b4f2228(0,*(undefined8 *)(unaff_x20 + 0xb0));
        *(long *)(unaff_x21 + 0xb0) = lVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xb8);
      if (lVar2 == 0) {
        func_0x00010b4f2228(0,*(undefined8 *)(unaff_x20 + 0xb8));
        *(long *)(unaff_x21 + 0xb8) = lVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xc0);
      if (lVar2 == 0) {
        func_0x00010b4f2228(0,*(undefined8 *)(unaff_x20 + 0xc0));
        *(long *)(unaff_x21 + 0xc0) = lVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  if ((uVar1 & 0x7f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 200);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 200));
        *(long *)(unaff_x21 + 200) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xd0);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0xd0));
        *(long *)(unaff_x21 + 0xd0) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xd8);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0xd8));
        *(long *)(unaff_x21 + 0xd8) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xe0);
      if (lVar2 == 0) {
        func_0x00010b4f2228(0,*(undefined8 *)(unaff_x20 + 0xe0));
        *(long *)(unaff_x21 + 0xe0) = lVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xe8) == 0) {
        uVar3 = unaff_x22;
        FUN_10b4f2084(unaff_x22,*(undefined8 *)(unaff_x20 + 0xe8));
        *(ulong *)(unaff_x21 + 0xe8) = uVar3;
      }
      else {
        FUN_10b4f1ac8();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xf0) == 0) {
        uVar3 = unaff_x22;
        func_0x0001088b8168(unaff_x22,*(undefined8 *)(unaff_x20 + 0xf0));
        *(ulong *)(unaff_x21 + 0xf0) = uVar3;
      }
      else {
        func_0x00010b4f22b0();
      }
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xf8) == 0) {
        FUN_10b4f2124(unaff_x22,*(undefined8 *)(unaff_x20 + 0xf8));
        *(ulong *)(unaff_x21 + 0xf8) = unaff_x22;
      }
      else {
        FUN_10b4f29b4();
      }
    }
  }
  func_0x00010b4f2274();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 10b4f1694; end: 10b4f1aa7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f1694(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b4f229c();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b4f1aa8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x00010b4f1ab8(unaff_x21 + 0x30,unaff_x20 + 0x30);
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x48);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x48));
        *(long *)(unaff_x21 + 0x48) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x50);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x50));
        *(long *)(unaff_x21 + 0x50) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x58);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x58));
        *(long *)(unaff_x21 + 0x58) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x60);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x60));
        *(long *)(unaff_x21 + 0x60) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x68);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x68));
        *(long *)(unaff_x21 + 0x68) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x70);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x70));
        *(long *)(unaff_x21 + 0x70) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x78);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x78));
        *(long *)(unaff_x21 + 0x78) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x80);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x80));
        *(long *)(unaff_x21 + 0x80) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x88);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x88));
        *(long *)(unaff_x21 + 0x88) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x90);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x90));
        *(long *)(unaff_x21 + 0x90) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x98);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x98));
        *(long *)(unaff_x21 + 0x98) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xa0);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0xa0));
        *(long *)(unaff_x21 + 0xa0) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xa8);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0xa8));
        *(long *)(unaff_x21 + 0xa8) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xb0);
      if (lVar2 == 0) {
        func_0x00010b4f2228(0,*(undefined8 *)(unaff_x20 + 0xb0));
        *(long *)(unaff_x21 + 0xb0) = lVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xb8);
      if (lVar2 == 0) {
        func_0x00010b4f2228(0,*(undefined8 *)(unaff_x20 + 0xb8));
        *(long *)(unaff_x21 + 0xb8) = lVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xc0);
      if (lVar2 == 0) {
        func_0x00010b4f2228(0,*(undefined8 *)(unaff_x20 + 0xc0));
        *(long *)(unaff_x21 + 0xc0) = lVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  if ((uVar1 & 0x7f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 200);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 200));
        *(long *)(unaff_x21 + 200) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xd0);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0xd0));
        *(long *)(unaff_x21 + 0xd0) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xd8);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0xd8));
        *(long *)(unaff_x21 + 0xd8) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0xe0);
      if (lVar2 == 0) {
        func_0x00010b4f2228(0,*(undefined8 *)(unaff_x20 + 0xe0));
        *(long *)(unaff_x21 + 0xe0) = lVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xe8) == 0) {
        uVar3 = unaff_x22;
        FUN_10b4f2084(unaff_x22,*(undefined8 *)(unaff_x20 + 0xe8));
        *(ulong *)(unaff_x21 + 0xe8) = uVar3;
      }
      else {
        FUN_10b4f1ac8();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xf0) == 0) {
        uVar3 = unaff_x22;
        func_0x0001088b8168(unaff_x22,*(undefined8 *)(unaff_x20 + 0xf0));
        *(ulong *)(unaff_x21 + 0xf0) = uVar3;
      }
      else {
        func_0x00010b4f22b0();
      }
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0xf8) == 0) {
        FUN_10b4f2124(unaff_x22,*(undefined8 *)(unaff_x20 + 0xf8));
        *(ulong *)(unaff_x21 + 0xf8) = unaff_x22;
      }
      else {
        FUN_10b4f29b4();
      }
    }
  }
  func_0x00010b4f2274();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 10b4f1aa8; end: 10b4f1ac7;  */

void FUN_10b4f1aa8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    (*(code *)&SUB_106af66f4)(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b4f1ac8; end: 10b4f1b6b;  */

void FUN_10b4f1ac8(void)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4f229c();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x18));
        *(long *)(unaff_x21 + 0x18) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x20));
        *(long *)(unaff_x21 + 0x20) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b4f2274();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 10b4f1b6c; end: 10b4f1b8f;  */

undefined8 FUN_10b4f1b6c(undefined8 param_1)

{
  func_0x00010b4f2240();
  return param_1;
}



/* Entry: 10b4f1b90; end: 10b4f1b93;  */

undefined8 FUN_10b4f1b90(undefined8 param_1)

{
  func_0x00010b4f2240();
  return param_1;
}



/* Entry: 10b4f1b94; end: 10b4f1ba7;  */

void FUN_10b4f1b94(void)

{
  FUN_10b4f1b6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f1ba8; end: 10b4f1bc7;  */

undefined ** FUN_10b4f1ba8(void)

{
  return &PTR_DAT_110cf3d20;
}



/* Entry: 10b4f1bc8; end: 10b4f1c5f;  */

long * FUN_10b4f1bc8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x00010b4f2230();
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x10);
    uVar3 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280b8(param_4,uVar3);
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    param_4 = unaff_x19;
    func_0x00010598f43c();
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
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar5;
        uVar1 = iVar7 - iVar8;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 10b4f1c60; end: 10b4f1d03;  */

long FUN_10b4f1c60(long param_1)

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
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + lVar1;
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



/* Entry: 10b4f1d04; end: 10b4f1d47;  */

long FUN_10b4f1d04(long param_1)

{
  func_0x00010b4f2240();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4f1d48; end: 10b4f1d4b;  */

long FUN_10b4f1d48(long param_1)

{
  func_0x00010b4f2240();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bceb46c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b4f1d4c; end: 10b4f1d5f;  */

void FUN_10b4f1d4c(void)

{
  FUN_10b4f1d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f1d60; end: 10b4f1d6b;  */

undefined ** FUN_10b4f1d60(void)

{
  return &PTR_DAT_110cf3d70;
}



/* Entry: 10b4f1d6c; end: 10b4f1ea7;  */

long * FUN_10b4f1d6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b4f2230();
  if (*(int *)(param_1 + 0x28) != 0) {
    param_4 = unaff_x19;
    func_0x000107c282e4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_4 = (long *)0x2;
    func_0x00010b4f2180(2,*(long *)(unaff_x20 + 0x18),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_4 = (long *)0x3;
    func_0x00010b4f2180(3,*(long *)(unaff_x20 + 0x20),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar2 = *(long *)(uVar4 + 8);
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      lVar2 = uVar4 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)uVar3;
        uVar1 = iVar5 - iVar6;
        uVar3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  return param_4;
}



/* Entry: 10b4f1ea8; end: 10b4f1ec3;  */

void FUN_10b4f1ea8(void)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b4f229c();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
        func_0x00010b4f21cc(0,*(undefined8 *)(unaff_x20 + 0x18));
        *(long *)(unaff_x21 + 0x18) = lVar2;
      }
      else {
        func_0x00010bceb4f4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if (lVar2 == 0) {
        func_0x00010b4f2190(0,*(undefined8 *)(unaff_x20 + 0x20));
        *(long *)(unaff_x21 + 0x20) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x00010b4f2274();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 10b4f1ec4; end: 10b4f1f03;  */

void FUN_10b4f1ec4(void)

{
  func_0x00010b4f2288();
  FUN_10b4f1aa8();
  return;
}



/* Entry: 10b4f1f04; end: 10b4f1f33;  */

long * FUN_10b4f1f04(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4f1f34; end: 10b4f1f63;  */

long * FUN_10b4f1f34(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b4f1f64; end: 10b4f205b;  */

void FUN_10b4f1f64(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf3bf0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b4f205c; end: 10b4f2083;  */

void FUN_10b4f205c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b4f2084; end: 10b4f2123;  */

undefined8 * FUN_10b4f2084(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x30);
  }
  puVar3 = puVar2 + 1;
  *puVar3 = param_1;
  *puVar2 = &PTR_FUN_110cf3c40;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4f2254();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f21c4();
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2188();
  }
  puVar2[4] = puVar3;
  *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_2 + 0x28);
  return puVar2;
}



/* Entry: 10b4f2124; end: 10b4f2167;  */

undefined8 * FUN_10b4f2124(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x38);
  }
  puVar3 = puVar2 + 1;
  *puVar3 = param_1;
  *puVar2 = &PTR_FUN_110cf3ed8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar3,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2b38();
  }
  puVar2[3] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2b38();
  }
  puVar2[4] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2b38();
  }
  puVar2[5] = puVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2b38();
  }
  puVar2[6] = puVar3;
  return puVar2;
}



/* Entry: 10b4f2168; end: 10b4f232b;  */

void FUN_10b4f2168(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  func_0x000107c39c98();
  plVar2 = param_1;
  func_0x000107c39ca8();
  func_0x000107c39cb0();
  puVar4 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x00010b4d38f4();
    param_1 = param_1 + (int)plVar2;
    puVar4 = unaff_x25 + (int)plVar2;
  }
  lVar3 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, puVar4 < unaff_x25 + unaff_x26; puVar4 = puVar4 + 1) {
    plVar2 = (long *)lVar3;
    (*(code *)&SUB_106af66f4)(lVar3,*puVar4);
    *param_1 = (long)plVar2;
    param_1 = param_1 + 1;
  }
  func_0x000107c39ca0();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b4f232c; end: 10b4f2377;  */

undefined8 * FUN_10b4f232c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cf3e18;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  func_0x00010b4f22b0(param_1,param_3);
  return param_1;
}



/* Entry: 10b4f2378; end: 10b4f237b;  */

long FUN_10b4f2378(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 10b4f237c; end: 10b4f238f;  */

void FUN_10b4f237c(void)

{
  func_0x000107c3040c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f2390; end: 10b4f24df;  */

long * FUN_10b4f2390(long *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  
  plVar8 = param_1;
  if ((int)param_1[2] != 0) {
    plVar8 = param_3;
    func_0x000107c282e4(param_3,(int)param_1[2],param_2);
    param_2 = plVar8;
  }
  plVar2 = plVar8;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b4f2634();
    uVar1 = *(undefined4 *)((long)param_1 + 0x14);
    plVar2 = (long *)0x15;
    func_0x000107c280a8(0x15,plVar8);
    param_2 = (long *)((long)plVar2 + 4);
    *(undefined4 *)plVar2 = uVar1;
  }
  if ((int)param_1[3] != 0) {
    plVar2 = param_3;
    func_0x000107c282ac(param_3,(int)param_1[3],param_2);
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    plVar2 = param_3;
    func_0x0001088bdd44(param_3,*(int *)((long)param_1 + 0x1c),param_2);
    param_2 = plVar2;
  }
  plVar8 = plVar2;
  if ((char)param_1[4] == '\x01') {
    FUN_10b4f2634();
    plVar8 = (long *)(ulong)*(byte *)(param_1 + 4);
    uVar3 = 0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x000107c280a8(plVar8,uVar3);
    param_2 = plVar8;
  }
  plVar2 = plVar8;
  if (*(int *)((long)param_1 + 0x24) != 0) {
    FUN_10b4f2634();
    plVar2 = (long *)(ulong)*(uint *)((long)param_1 + 0x24);
    uVar3 = 0x30;
    func_0x000107c280a8(0x30,plVar8);
    func_0x000107c280b8(plVar2,uVar3);
    param_2 = plVar2;
  }
  if ((int)param_1[5] != 0) {
    FUN_10b4f2634();
    lVar5 = param_1[5];
    puVar4 = (undefined4 *)0x3d;
    func_0x000107c280a8(0x3d,plVar2);
    param_2 = (long *)(puVar4 + 1);
    *puVar4 = (int)lVar5;
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
  return param_2;
}



/* Entry: 10b4f24e0; end: 10b4f25ab;  */

long FUN_10b4f24e0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar3 = uVar3 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar3;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar3;
  }
  lVar1 = uVar3 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 5;
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



/* Entry: 10b4f25ac; end: 10b4f25e3;  */

void FUN_10b4f25ac(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c30410();
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



/* Entry: 10b4f25e4; end: 10b4f25eb;  */

void FUN_10b4f25e4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf3e18;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4f25ec; end: 10b4f2633;  */

void FUN_10b4f25ec(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf3e18;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b4f2634; end: 10b4f263f;  */

ulong * FUN_10b4f2634(void)

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



/* Entry: 10b4f2640; end: 10b4f26f3;  */

undefined8 * FUN_10b4f2640(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 1;
  *puVar2 = param_2;
  *param_1 = &PTR_FUN_110cf3ed8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(puVar2,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2b38();
  }
  param_1[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2b38();
  }
  param_1[4] = puVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2b38();
  }
  param_1[5] = puVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b4f2b38();
  }
  param_1[6] = puVar2;
  return param_1;
}



/* Entry: 10b4f26f4; end: 10b4f2727;  */

long FUN_10b4f26f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f2728(param_1);
  return param_1;
}



/* Entry: 10b4f2728; end: 10b4f277f;  */

void FUN_10b4f2728(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceb834();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f2780; end: 10b4f2783;  */

long FUN_10b4f2780(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b4f2728(param_1);
  return param_1;
}



/* Entry: 10b4f2784; end: 10b4f2797;  */

void FUN_10b4f2784(void)

{
  FUN_10b4f26f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4f2798; end: 10b4f27a3;  */

undefined ** FUN_10b4f2798(void)

{
  return &PTR_DAT_110cf3f18;
}



/* Entry: 10b4f27a4; end: 10b4f2827;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f27a4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x30));
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



/* Entry: 10b4f2828; end: 10b4f29af;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b4f2828(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x1;
    func_0x00010b4f2b40(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x2;
    func_0x00010b4f2b40(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010b4f2b40(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14));
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b4f2b40(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
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
  return param_2;
}



/* Entry: 10b4f29b0; end: 10b4f29b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f29b0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        func_0x00010b4f2b48(0,*(undefined8 *)(param_2 + 0x18));
        *(long *)(param_1 + 0x18) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        func_0x00010b4f2b48(0,*(undefined8 *)(param_2 + 0x20));
        *(long *)(param_1 + 0x20) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) {
        func_0x00010b4f2b48(0,*(undefined8 *)(param_2 + 0x28));
        *(long *)(param_1 + 0x28) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) {
        func_0x00010b4f2b48(0,*(undefined8 *)(param_2 + 0x30));
        *(long *)(param_1 + 0x30) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
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



/* Entry: 10b4f29b4; end: 10b4f2ad3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b4f29b4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) {
        func_0x00010b4f2b48(0,*(undefined8 *)(param_2 + 0x18));
        *(long *)(param_1 + 0x18) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
        func_0x00010b4f2b48(0,*(undefined8 *)(param_2 + 0x20));
        *(long *)(param_1 + 0x20) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      if (lVar2 == 0) {
        func_0x00010b4f2b48(0,*(undefined8 *)(param_2 + 0x28));
        *(long *)(param_1 + 0x28) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) {
        func_0x00010b4f2b48(0,*(undefined8 *)(param_2 + 0x30));
        *(long *)(param_1 + 0x30) = lVar2;
      }
      else {
        func_0x00010bceb8bc();
      }
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



/* Entry: 10b4f2ad4; end: 10b4f2adb;  */

void FUN_10b4f2ad4(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cf3ed8;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b4f2adc; end: 10b4f2b2b;  */

void FUN_10b4f2adc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cf3ed8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b4f2b2c; end: 10b4f2b67;  */

void FUN_10b4f2b2c(void)

{
  return;
}



/* Entry: 10b4f2b68; end: 10b4f2bab;  */

void FUN_10b4f2b68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = param_1;
  func_0x00010b4f2be0();
  uVar4 = (ulong)*(uint *)(param_2 + 3);
  uVar1 = param_4;
  func_0x0001001a597c(param_4,uVar3);
  uVar2 = (ulong)((int)param_1 << 3 | 2);
  func_0x0001001a59d0(uVar2,uVar1);
  func_0x0001001a59d0(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar4,param_4);
  return;
}



/* Entry: 10b4f2bac; end: 10b4f2bc7;  */

long FUN_10b4f2bac(long param_1)

{
  long extraout_x8;
  
  FUN_10b51dea8();
  FUN_10b4f2bc8();
  return param_1 + extraout_x8;
}


