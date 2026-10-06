/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b52485c; end: 10b52485f;  */

long FUN_10b52485c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b524b94(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b524860; end: 10b524873;  */

void FUN_10b524860(void)

{
  FUN_10b524828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b524874; end: 10b524897;  */

undefined ** FUN_10b524874(void)

{
  return &PTR_DAT_110cfd658;
}



/* Entry: 10b524898; end: 10b5249bb;  */

long * FUN_10b524898(undefined1 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  puVar3 = param_1;
  if (uVar2 != 0) {
    FUN_10b524bf8();
    puVar5 = puVar3 + 2;
    *puVar3 = 10;
    while (0x7f < uVar2) {
      func_0x00010b524c10();
    }
    puVar5[-1] = (char)uVar2;
    piVar8 = *(int **)(param_1 + 0x18);
    piVar1 = piVar8 + *(int *)(param_1 + 0x10);
    do {
      FUN_10b524bf8();
      uVar6 = (ulong)*piVar8;
      param_2 = (long *)(puVar3 + 1);
      while (0x7f < uVar6) {
        func_0x00010b524c24();
        uVar6 = extraout_x8;
      }
      piVar8 = piVar8 + 1;
      *(char *)((long)param_2 + -1) = (char)uVar6;
    } while (piVar8 < piVar1);
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    FUN_10b524bf8();
    puVar5 = puVar3 + 2;
    *puVar3 = 0x12;
    while (0x7f < uVar2) {
      func_0x00010b524c10();
    }
    puVar5[-1] = (char)uVar2;
    piVar8 = *(int **)(param_1 + 0x30);
    piVar1 = piVar8 + *(int *)(param_1 + 0x28);
    do {
      FUN_10b524bf8();
      uVar6 = (ulong)*piVar8;
      param_2 = (long *)(puVar3 + 1);
      while (0x7f < uVar6) {
        func_0x00010b524c24();
        uVar6 = extraout_x8_00;
      }
      piVar8 = piVar8 + 1;
      *(char *)((long)param_2 + -1) = (char)uVar6;
    } while (piVar8 < piVar1);
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
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        puVar3 = (undefined1 *)((long)param_2 + (long)iVar10);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar9);
    }
    _memcpy(param_2,lVar4,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10b5249bc; end: 10b524ab7;  */

long FUN_10b5249bc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = 0;
  lVar4 = 0;
  *(int *)(param_1 + 0x20) = (int)lVar1;
  for (lVar1 = (long)*(int *)(param_1 + 0x28); lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x30) + (lVar5 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar4;
    lVar5 = lVar5 + 0x100000000;
  }
  lVar2 = lVar4 + lVar2;
  if (lVar4 != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x38) = (int)lVar4;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x3c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b524ab8; end: 10b524b8b;  */

void FUN_10b524ab8(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10b524b8c; end: 10b524b93;  */

undefined8 * FUN_10b524b8c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfd618;
  puVar1[1] = param_2;
  FUN_10b524780();
  return puVar1;
}



/* Entry: 10b524b94; end: 10b524bf7;  */

/* WARNING: Possible PIC construction at 0x00010b524ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b524bac) */

long FUN_10b524b94(long param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x00010006804c(param_1 + 0x18);
  if (in_NG == in_OV) {
    func_0x0001002a998c(param_1);
  }
  return param_1;
}



/* Entry: 10b524bf8; end: 10b524c37;  */

ulong * FUN_10b524bf8(void)

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



/* Entry: 10b524c38; end: 10b524caf;  */

undefined8 * FUN_10b524c38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfd6d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 10b524cb0; end: 10b524cdf;  */

long FUN_10b524cb0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b524ce0(param_1);
  return param_1;
}



/* Entry: 10b524ce0; end: 10b524d07;  */

/* WARNING: Possible PIC construction at 0x00010b524cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b524cf8) */

void FUN_10b524ce0(long param_1)

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



/* Entry: 10b524d08; end: 10b524d0b;  */

long FUN_10b524d08(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b524ce0(param_1);
  return param_1;
}



/* Entry: 10b524d0c; end: 10b524d1f;  */

void FUN_10b524d0c(void)

{
  FUN_10b524cb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b524d20; end: 10b524d2b;  */

undefined ** FUN_10b524d20(void)

{
  return &PTR_DAT_110cfd710;
}



/* Entry: 10b524d2c; end: 10b524d73;  */

void FUN_10b524d2c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b524d74; end: 10b524e7b;  */

long * FUN_10b524d74(long param_1,long *param_2,long *param_3)

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
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)*puVar6;
      goto LAB_10b524db8;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_10b524db8:
    func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f776eb5);
    param_2 = param_3;
    func_0x00010b525048(param_3,1);
  }
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x20),param_2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 == 0) goto LAB_10b524e38;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b524e38;
  func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f776ef6);
  plVar1 = param_3;
  func_0x00010b525048(param_3,3);
LAB_10b524e38:
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



/* Entry: 10b524e7c; end: 10b524f2b;  */

long FUN_10b524e7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b524eb4;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b524eb4:
    lVar3 = 0;
    goto LAB_10b524eb8;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b524eb8:
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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b524f2c; end: 10b524f2f;  */

void FUN_10b524f2c(long param_1,long param_2)

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



/* Entry: 10b524f30; end: 10b524fdb;  */

void FUN_10b524f30(long param_1,long param_2)

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



/* Entry: 10b524fdc; end: 10b524fe3;  */

void FUN_10b524fdc(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfd6d0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b524fe4; end: 10b525033;  */

void FUN_10b524fe4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfd6d0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b525034; end: 10b52507b;  */

void FUN_10b525034(void)

{
  return;
}



/* Entry: 10b52507c; end: 10b5250a3;  */

long FUN_10b52507c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5250a4; end: 10b5250eb;  */

undefined8 * FUN_10b5250a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cfd790;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010b525054(param_1,param_3);
  return param_1;
}



/* Entry: 10b5250ec; end: 10b5250ef;  */

long FUN_10b5250ec(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5250f0; end: 10b525103;  */

void FUN_10b5250f0(void)

{
  FUN_10b52507c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b525104; end: 10b525123;  */

undefined ** FUN_10b525104(void)

{
  return &PTR_DAT_110cfd7d0;
}



/* Entry: 10b525124; end: 10b5251bb;  */

long * FUN_10b525124(long param_1,long *param_2,long *param_3)

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
    func_0x000107c280a8(param_2,uVar2);
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



/* Entry: 10b5251bc; end: 10b525213;  */

ulong FUN_10b5251bc(long param_1)

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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 10b525214; end: 10b525257;  */

void FUN_10b525214(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfd790;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b525258; end: 10b52525f;  */

void FUN_10b525258(void)

{
  return;
}



/* Entry: 10b525260; end: 10b5252c7;  */

undefined8 * FUN_10b525260(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfd848;
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



/* Entry: 10b5252c8; end: 10b5252f7;  */

long FUN_10b5252c8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5252f8; end: 10b5252fb;  */

long FUN_10b5252f8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5252fc; end: 10b52530f;  */

void FUN_10b5252fc(void)

{
  FUN_10b5252c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b525310; end: 10b52531b;  */

undefined ** FUN_10b525310(void)

{
  return &PTR_DAT_110cfd888;
}



/* Entry: 10b52531c; end: 10b52535b;  */

void FUN_10b52531c(long param_1)

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



/* Entry: 10b52535c; end: 10b525413;  */

long * FUN_10b52535c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = *(long **)(param_1 + 0x18);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280ac(param_2,uVar2);
  }
  uVar3 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    param_2 = param_3;
    func_0x000107c280a0(param_3,2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar3 < 0) {
      lVar4 = *(long *)(uVar5 + 8);
      uVar3 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar4 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar3) {
      while( true ) {
        iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar4,uVar3 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar3);
  }
  return param_2;
}



/* Entry: 10b525414; end: 10b52549b;  */

void FUN_10b525414(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b52544c;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b52544c:
    iVar1 = 0;
    goto LAB_10b525450;
  }
  func_0x000107c28098();
  iVar1 = (int)uVar2 + 1;
LAB_10b525450:
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
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



/* Entry: 10b52549c; end: 10b52549f;  */

void FUN_10b52549c(long param_1,long param_2)

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



/* Entry: 10b5254a0; end: 10b52551b;  */

void FUN_10b5254a0(long param_1,long param_2)

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



/* Entry: 10b52551c; end: 10b525523;  */

void FUN_10b52551c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfd848;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b525524; end: 10b525573;  */

void FUN_10b525524(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfd848;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b525574; end: 10b525587;  */

void FUN_10b525574(void)

{
  return;
}



/* Entry: 10b525588; end: 10b5255ff;  */

undefined8 * FUN_10b525588(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfd908;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x20);
  return param_1;
}



/* Entry: 10b525600; end: 10b52562f;  */

long FUN_10b525600(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b525630(param_1);
  return param_1;
}



/* Entry: 10b525630; end: 10b525657;  */

/* WARNING: Possible PIC construction at 0x00010b525644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b525648) */

void FUN_10b525630(long param_1)

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



/* Entry: 10b525658; end: 10b52565b;  */

long FUN_10b525658(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b525630(param_1);
  return param_1;
}



/* Entry: 10b52565c; end: 10b52566f;  */

void FUN_10b52565c(void)

{
  FUN_10b525600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b525670; end: 10b52567b;  */

undefined ** FUN_10b525670(void)

{
  return &PTR_DAT_110cfd948;
}



/* Entry: 10b52567c; end: 10b5256c3;  */

void FUN_10b52567c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x20) = 0;
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



/* Entry: 10b5256c4; end: 10b5257d3;  */

long * FUN_10b5256c4(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_10b525730;
    puVar1 = (undefined8 *)*puVar9;
  }
  else {
    puVar1 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b525730;
  }
  func_0x000107c303d4(puVar1,lVar4,1,&UNK_10f776f35);
  plVar7 = param_3;
  func_0x000107c280a0(param_3,1,puVar9,param_2);
  param_2 = plVar7;
LAB_10b525730:
  uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar5 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar5 + 8);
  }
  plVar7 = param_2;
  if (lVar4 != 0) {
    plVar7 = param_3;
    func_0x000107c280a0(param_3,2,uVar5,param_2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,plVar7);
    plVar7 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280b8(plVar7,uVar3);
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
    if (*param_3 - (long)plVar7 < (long)(int)uVar5) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)plVar7) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar7 + (long)iVar10;
        plVar7 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar7 + (long)iVar8);
    }
    _memcpy(plVar7,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)plVar7 + (long)(int)uVar5);
  }
  return plVar7;
}



/* Entry: 10b5257d4; end: 10b525887;  */

long FUN_10b5257d4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b52580c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b52580c:
    lVar3 = 0;
    goto LAB_10b525810;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b525810:
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x24) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b525888; end: 10b52588b;  */

void FUN_10b525888(long param_1,long param_2)

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



/* Entry: 10b52588c; end: 10b525937;  */

void FUN_10b52588c(long param_1,long param_2)

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



/* Entry: 10b525938; end: 10b52593f;  */

void FUN_10b525938(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfd908;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b525940; end: 10b52598f;  */

void FUN_10b525940(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfd908;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b525990; end: 10b5259a3;  */

void FUN_10b525990(void)

{
  return;
}



/* Entry: 10b5259a4; end: 10b5259d7;  */

long FUN_10b5259a4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5259d8; end: 10b5259db;  */

long FUN_10b5259d8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5259dc; end: 10b5259ef;  */

void FUN_10b5259dc(void)

{
  FUN_10b5259a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5259f0; end: 10b5259fb;  */

undefined ** FUN_10b5259f0(void)

{
  return &PTR_DAT_110cfda08;
}



/* Entry: 10b5259fc; end: 10b525a37;  */

void FUN_10b5259fc(long param_1)

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



/* Entry: 10b525a38; end: 10b525b9b;  */

long * FUN_10b525a38(long param_1,long *param_2,long *param_3)

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
    func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f776f76);
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



/* Entry: 10b525b9c; end: 10b525c2f;  */

ulong FUN_10b525b9c(long param_1)

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



/* Entry: 10b525c30; end: 10b525c7b;  */

void FUN_10b525c30(long param_1,long param_2)

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



/* Entry: 10b525c7c; end: 10b525c83;  */

void FUN_10b525c7c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfd9c8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b525c84; end: 10b525cd3;  */

void FUN_10b525c84(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfd9c8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 10b525cd4; end: 10b525d0b;  */

long FUN_10b525cd4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b525d0c; end: 10b525d0f;  */

long FUN_10b525d0c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b525d10; end: 10b525d23;  */

void FUN_10b525d10(void)

{
  FUN_10b525cd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b525d24; end: 10b525d2f;  */

undefined ** FUN_10b525d24(void)

{
  return &PTR_DAT_110cfdac0;
}



/* Entry: 10b525d30; end: 10b525d73;  */

void FUN_10b525d30(long param_1)

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



/* Entry: 10b525d74; end: 10b525e6b;  */

long * FUN_10b525d74(long param_1,long *param_2,long *param_3)

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
      goto LAB_10b525db8;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b525db8:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f776fae);
    param_2 = param_3;
    FUN_10b525ff4(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_10b525e20;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b525e20;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f776fd1);
  param_2 = param_3;
  FUN_10b525ff4(param_3,2);
LAB_10b525e20:
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



/* Entry: 10b525e6c; end: 10b525f9b;  */

long FUN_10b525e6c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b525ea4;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b525ea4:
    lVar3 = 0;
    goto LAB_10b525ea8;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b525ea8:
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



/* Entry: 10b525f9c; end: 10b525fa3;  */

void FUN_10b525f9c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110cfda80;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b525fa4; end: 10b525ff3;  */

void FUN_10b525fa4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110cfda80;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b525ff4; end: 10b526007;  */

long * FUN_10b525ff4(long *param_1,undefined8 param_2)

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
  long *unaff_x20;
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
    if (lVar7 <= lVar10 + ~((long)unaff_x20 + (long)(int)uVar2) + 0x10) {
      lVar10 = (long)unaff_x20 + 2;
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
     ((*param_1 - (long)unaff_x20) + 0x10 <= (long)iVar8)) {
    plVar3 = param_1;
    func_0x000107c303e0(param_1,unaff_x20);
    plVar4 = (long *)param_1[6];
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,unaff_x22);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x00010b4d56e4();
    }
    return plVar3;
  }
  if (*param_1 - (long)unaff_x20 < (long)iVar8) {
    while( true ) {
      iVar9 = ((int)*param_1 - (int)unaff_x20) + 0x10;
      iVar8 = (int)unaff_x22;
      unaff_x22 = (undefined8 *)(ulong)(uint)(iVar8 - iVar9);
      if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
      func_0x00010b4d5738();
      lVar7 = (long)unaff_x20 + (long)iVar9;
      unaff_x20 = param_1;
      func_0x000107c303e4(param_1,lVar7);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar8);
  }
  _memcpy(unaff_x20);
  return (long *)((long)unaff_x20 + (long)iVar8);
}



/* Entry: 10b526008; end: 10b52606f;  */

void FUN_10b526008(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x60) == 0xd) {
    func_0x000107c30258(param_1 + 0x58);
  }
  else if (*(int *)(param_1 + 0x60) == 0xc) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN_10b52f3f8();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10b526070; end: 10b526177;  */

undefined8 * FUN_10b526070(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfdbc8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b526f88();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_10b5267e4(param_1 + 3,param_3 + 0x18);
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x60);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    lVar2 = param_2;
    FUN_10b526d9c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    FUN_10b526e0c(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = lVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2;
    FUN_10b526e9c(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = lVar2;
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_3 + 0x50);
  param_1[9] = uVar3;
  if (*(int *)(param_1 + 0xc) == 0xd) {
    param_3 = param_3 + 0x58;
    func_0x000107c2809c(param_3,param_2);
  }
  else {
    if (*(int *)(param_1 + 0xc) != 0xc) {
      return param_1;
    }
    FUN_10b526e9c(param_2,*(undefined8 *)(param_3 + 0x58));
    param_3 = param_2;
  }
  param_1[0xb] = param_3;
  return param_1;
}



/* Entry: 10b526178; end: 10b5261a3;  */

undefined8 FUN_10b526178(undefined8 param_1)

{
  func_0x00010b526f94();
  FUN_10b5261a4(param_1);
  return param_1;
}



/* Entry: 10b5261a4; end: 10b526203;  */

long * FUN_10b5261a4(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b526870();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5269a0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_10b52f3f8();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_10b526008(param_1);
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b526204; end: 10b526207;  */

undefined8 FUN_10b526204(undefined8 param_1)

{
  func_0x00010b526f94();
  FUN_10b5261a4(param_1);
  return param_1;
}



/* Entry: 10b526208; end: 10b52621b;  */

void FUN_10b526208(void)

{
  FUN_10b526178();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52621c; end: 10b526227;  */

undefined ** FUN_10b52621c(void)

{
  return &PTR_DAT_110cfdc08;
}



/* Entry: 10b526228; end: 10b5262bb;  */

void FUN_10b526228(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5262bc(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5262d0(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b52f6e4(*(undefined8 *)(param_1 + 0x40));
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_10b526008(param_1);
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



/* Entry: 10b5262bc; end: 10b5262cf;  */

void FUN_10b5262bc(long param_1)

{
  ulong *puVar1;
  
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



/* Entry: 10b5262d0; end: 10b52630f;  */

void FUN_10b5262d0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  func_0x000107c282c0(param_1 + 0x28);
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



/* Entry: 10b526310; end: 10b5265f3;  */

long * FUN_10b526310(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar3 = param_1;
    func_0x00010b526fa8();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x50);
    uVar4 = 8;
    func_0x000107c280a8(8,lVar3);
    func_0x000107c280b8(param_2,uVar4);
  }
  plVar5 = param_2;
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar5 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x48),param_2);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)0x3;
    func_0x00010b526f38(3,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar5 = (long *)0x4;
    func_0x00010b526f38(4,*(long *)(param_1 + 0x38),
                        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x40));
  }
  iVar9 = *(int *)(param_1 + 0x20);
  for (iVar8 = 0; iVar9 != iVar8; iVar8 = iVar8 + 1) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar8 * 8 + 7);
    }
    plVar5 = (long *)0xa;
    func_0x00010b526f38(10,*puVar1,*(undefined4 *)(*puVar1 + 0x20));
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar5 = (long *)0xb;
    func_0x00010b526f38(0xb,*(long *)(param_1 + 0x40),
                        *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x14));
  }
  if (*(int *)(param_1 + 0x60) == 0xd) {
    plVar5 = param_3;
    func_0x000107c280a0(param_3,0xd,*(ulong *)(param_1 + 0x58) & 0xfffffffffffffffc);
  }
  else if (*(int *)(param_1 + 0x60) == 0xc) {
    plVar5 = (long *)0xc;
    func_0x00010b526f38(0xc,*(long *)(param_1 + 0x58),
                        *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x14));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar3 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar3 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar5 < (long)(int)uVar6) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar5) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar5 + (long)iVar9;
        plVar5 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar5 + (long)iVar8);
    }
    _memcpy(plVar5,lVar3,uVar6 & 0xffffffff);
    return (long *)((long)plVar5 + (long)(int)uVar6);
  }
  return plVar5;
}



/* Entry: 10b5265f4; end: 10b52660f;  */

long FUN_10b5265f4(long param_1)

{
  long extraout_x8;
  
  FUN_10b530278();
  func_0x00010b526efc();
  return param_1 + extraout_x8;
}



/* Entry: 10b526610; end: 10b526613;  */

void FUN_10b526610(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  FUN_10b5267e4(param_1 + 0x18,param_2 + 0x18);
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar6 = uVar7;
        FUN_10b526d9c(uVar7,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar6;
      }
      else {
        func_0x00010b5267f4();
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar6 = uVar7;
        FUN_10b526e0c(uVar7,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar6;
      }
      else {
        FUN_10b52681c();
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar6 = uVar7;
        FUN_10b526e9c(uVar7,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar6;
      }
      else {
        FUN_10b530954();
      }
    }
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  iVar4 = *(int *)(param_2 + 0x60);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        FUN_10b526008(param_1);
      }
      *(int *)(param_1 + 0x60) = iVar4;
    }
    if (iVar4 == 0xd) {
      if (iVar5 != 0xd) {
        *(undefined **)(param_1 + 0x58) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x60) != 0xd) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x58,puVar2,uVar7);
    }
    else if (iVar4 == 0xc) {
      if (iVar5 == 0xc) {
        ppuVar1 = *(undefined ***)(param_2 + 0x58);
        if (*(int *)(param_2 + 0x60) != 0xc) {
          ppuVar1 = &PTR_PTR_1133892b8;
        }
        FUN_10b530954(*(undefined8 *)(param_1 + 0x58),ppuVar1);
      }
      else {
        FUN_10b526e9c(uVar7,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar7;
      }
    }
  }
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



/* Entry: 10b526614; end: 10b5267e3;  */

void FUN_10b526614(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) != 0) {
    uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
  }
  FUN_10b5267e4(param_1 + 0x18,param_2 + 0x18);
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar6 = uVar7;
        FUN_10b526d9c(uVar7,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar6;
      }
      else {
        func_0x00010b5267f4();
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar6 = uVar7;
        FUN_10b526e0c(uVar7,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar6;
      }
      else {
        FUN_10b52681c();
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
        uVar6 = uVar7;
        FUN_10b526e9c(uVar7,*(undefined8 *)(param_2 + 0x40));
        *(ulong *)(param_1 + 0x40) = uVar6;
      }
      else {
        FUN_10b530954();
      }
    }
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  iVar4 = *(int *)(param_2 + 0x60);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar5 != iVar4) {
      if (iVar5 != 0) {
        FUN_10b526008(param_1);
      }
      *(int *)(param_1 + 0x60) = iVar4;
    }
    if (iVar4 == 0xd) {
      if (iVar5 != 0xd) {
        *(undefined **)(param_1 + 0x58) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x60) != 0xd) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x58,puVar2,uVar7);
    }
    else if (iVar4 == 0xc) {
      if (iVar5 == 0xc) {
        ppuVar1 = *(undefined ***)(param_2 + 0x58);
        if (*(int *)(param_2 + 0x60) != 0xc) {
          ppuVar1 = &PTR_PTR_1133892b8;
        }
        FUN_10b530954(*(undefined8 *)(param_1 + 0x58),ppuVar1);
      }
      else {
        FUN_10b526e9c(uVar7,*(undefined8 *)(param_2 + 0x58));
        *(ulong *)(param_1 + 0x58) = uVar7;
      }
    }
  }
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



/* Entry: 10b5267e4; end: 10b52681b;  */

void FUN_10b5267e4(long *param_1,long param_2)

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



/* Entry: 10b52681c; end: 10b52686f;  */

void FUN_10b52681c(long param_1,long param_2)

{
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  func_0x00010598fce8(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10b526870; end: 10b526893;  */

undefined8 FUN_10b526870(undefined8 param_1)

{
  func_0x00010b526f94();
  return param_1;
}



/* Entry: 10b526894; end: 10b526897;  */

undefined8 FUN_10b526894(undefined8 param_1)

{
  func_0x00010b526f94();
  return param_1;
}



/* Entry: 10b526898; end: 10b5268ab;  */

void FUN_10b526898(void)

{
  FUN_10b526870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5268ac; end: 10b5268b7;  */

undefined ** FUN_10b5268ac(void)

{
  return &PTR_DAT_110cfdc48;
}



/* Entry: 10b5268b8; end: 10b526943;  */

long * FUN_10b5268b8(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = param_1;
    func_0x00010b526fa8();
    iVar5 = *(int *)(param_1 + 0x10);
    uVar2 = 0x58;
    func_0x000107c280a8(0x58,lVar1);
    param_2 = (long *)(ulong)(uint)(iVar5 << 1 ^ iVar5 >> 0x1f);
    func_0x000107c280a8(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
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


