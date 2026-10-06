/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5ab990; end: 10b5aba7f;  */

void FUN_10b5ab990(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 == 0) goto LAB_10b5aba44;
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b5ab684(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 != 3) {
LAB_10b5aba34:
      func_0x000107c284d4(uVar3,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar3;
      goto LAB_10b5aba44;
    }
    func_0x00010b5aba88();
  }
  else {
    if (iVar1 != 2) goto LAB_10b5aba44;
    if (iVar2 != 2) goto LAB_10b5aba34;
    func_0x00010b5aba88();
  }
  func_0x00010bd1b688();
LAB_10b5aba44:
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



/* Entry: 10b5aba80; end: 10b5abac3;  */

void FUN_10b5aba80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010802fd24();
  }
  else {
    FUN_10b4d80e0(param_2,0x28);
  }
  func_0x00010802fcd0();
  *puVar1 = extraout_x8;
  puVar1[1] = param_2;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b5abac4; end: 10b5abb4b;  */

void FUN_10b5abac4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x28) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5abb20;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b58e9f0();
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) goto LAB_10b5abb20;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5abb20;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b55776c();
    }
  }
  __ZdlPv();
LAB_10b5abb20:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10b5abb4c; end: 10b5abb8f;  */

long FUN_10b5abb4c(long param_1)

{
  func_0x00010b5ac6d4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5a7b1c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10b5abac4(param_1);
  }
  return param_1;
}



/* Entry: 10b5abb90; end: 10b5abb93;  */

long FUN_10b5abb90(long param_1)

{
  func_0x00010b5ac6d4();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5a7b1c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_10b5abac4(param_1);
  }
  return param_1;
}



/* Entry: 10b5abb94; end: 10b5abba7;  */

void FUN_10b5abb94(void)

{
  FUN_10b5abb4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5abba8; end: 10b5abbb3;  */

undefined ** FUN_10b5abba8(void)

{
  return &PTR_DAT_110d15798;
}



/* Entry: 10b5abbb4; end: 10b5abd33;  */

void FUN_10b5abbb4(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5a7b70(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_10b5abac4(param_1);
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



/* Entry: 10b5abd34; end: 10b5abd4b;  */

void FUN_10b5abd34(void)

{
  func_0x00010b58eb10();
  func_0x00010b5ac63c();
  return;
}



/* Entry: 10b5abd4c; end: 10b5abe97;  */

void FUN_10b5abd4c(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar5 = uVar6;
      func_0x00010b5a8ab4(uVar6,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar5;
    }
    else {
      FUN_10b5a7d18();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 == 0) goto LAB_10b5abe5c;
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 != iVar3) {
    if (iVar4 != 0) {
      FUN_10b5abac4(param_1);
    }
    *(int *)(param_1 + 0x28) = iVar3;
  }
  if (iVar3 == 5) {
    if (iVar4 == 5) {
      ppuVar1 = *(undefined ***)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x28) != 5) {
        ppuVar1 = &PTR_PTR_1133a40d8;
      }
      FUN_10b58ec04(*(undefined8 *)(param_1 + 0x20),ppuVar1);
      goto LAB_10b5abe5c;
    }
    func_0x00010b5ac5c4(uVar6,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    if (iVar3 != 1) goto LAB_10b5abe5c;
    if (iVar4 == 1) {
      ppuVar1 = *(undefined ***)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x28) != 1) {
        ppuVar1 = &PTR_PTR_1133957e8;
      }
      FUN_10b557a80(*(undefined8 *)(param_1 + 0x20),ppuVar1);
      goto LAB_10b5abe5c;
    }
    func_0x000108930a60(uVar6,*(undefined8 *)(param_2 + 0x20));
  }
  *(ulong *)(param_1 + 0x20) = uVar6;
LAB_10b5abe5c:
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



/* Entry: 10b5abe98; end: 10b5abecf;  */

long FUN_10b5abe98(long param_1)

{
  func_0x00010b5ac6d4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5abed0; end: 10b5abed3;  */

long FUN_10b5abed0(long param_1)

{
  func_0x00010b5ac6d4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5abed4; end: 10b5abee7;  */

void FUN_10b5abed4(void)

{
  FUN_10b5abe98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5abee8; end: 10b5abef3;  */

undefined ** FUN_10b5abee8(void)

{
  return &PTR_DAT_110d157e8;
}



/* Entry: 10b5abef4; end: 10b5abf27;  */

void FUN_10b5abef4(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5ac6fc();
  if (in_NG == in_OV) {
    func_0x00010b5ac718();
  }
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



/* Entry: 10b5abf28; end: 10b5ac007;  */

long * FUN_10b5abf28(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b5ac658();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010b5ac674();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00010b5ac69c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5ac728();
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



/* Entry: 10b5ac008; end: 10b5ac043;  */

void FUN_10b5ac008(ulong *param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x00010b5ac70c();
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5ac6ec();
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



/* Entry: 10b5ac044; end: 10b5ac07b;  */

long FUN_10b5ac044(long param_1)

{
  func_0x00010b5ac6d4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5ac07c; end: 10b5ac07f;  */

long FUN_10b5ac07c(long param_1)

{
  func_0x00010b5ac6d4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5ac080; end: 10b5ac093;  */

void FUN_10b5ac080(void)

{
  FUN_10b5ac044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ac094; end: 10b5ac09f;  */

undefined ** FUN_10b5ac094(void)

{
  return &PTR_DAT_110d15830;
}



/* Entry: 10b5ac0a0; end: 10b5ac0d3;  */

void FUN_10b5ac0a0(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5ac6fc();
  if (in_NG == in_OV) {
    func_0x00010b5ac718();
  }
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



/* Entry: 10b5ac0d4; end: 10b5ac13f;  */

long * FUN_10b5ac0d4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b5ac658();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010b5ac674();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x00010b5ac69c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5ac728();
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



/* Entry: 10b5ac140; end: 10b5ac197;  */

long FUN_10b5ac140(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5ac618();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b5ac198();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5ac734();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b5ac198; end: 10b5ac1af;  */

void FUN_10b5ac198(void)

{
  func_0x00010b5abf94();
  func_0x00010b5ac63c();
  return;
}



/* Entry: 10b5ac1b0; end: 10b5ac1eb;  */

void FUN_10b5ac1b0(ulong *param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x00010b5ac70c();
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5ac6ec();
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



/* Entry: 10b5ac1ec; end: 10b5ac253;  */

undefined8 * FUN_10b5ac1ec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d15758;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5ac488(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b5ac254; end: 10b5ac27f;  */

long FUN_10b5ac254(long param_1)

{
  func_0x00010b5ac6d4();
  FUN_10b5ac4b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5ac280; end: 10b5ac283;  */

long FUN_10b5ac280(long param_1)

{
  func_0x00010b5ac6d4();
  FUN_10b5ac4b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5ac284; end: 10b5ac297;  */

void FUN_10b5ac284(void)

{
  FUN_10b5ac254();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ac298; end: 10b5ac2a3;  */

undefined ** FUN_10b5ac298(void)

{
  return &PTR_DAT_110d15880;
}



/* Entry: 10b5ac2a4; end: 10b5ac2db;  */

void FUN_10b5ac2a4(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5ac6fc();
  if (in_NG == in_OV) {
    func_0x00010b5ac718();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10b5ac2dc; end: 10b5ac37b;  */

long * FUN_10b5ac2dc(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar5;
  int unaff_w22;
  int iVar6;
  
  func_0x00010b5ac658();
  for (; unaff_w22 != unaff_w21; unaff_w21 = unaff_w21 + 1) {
    func_0x00010b5ac674();
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x00010b5ac69c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    uVar3 = 0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x000107c280a8(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5ac728();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5ac37c; end: 10b5ac3f3;  */

long FUN_10b5ac37c(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5ac618();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b5ac3f4();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    unaff_x20 = unaff_x20 + (ulong)((int)LZCOUNT(*(int *)(unaff_x19 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5ac734();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b5ac3f4; end: 10b5ac40b;  */

void FUN_10b5ac3f4(void)

{
  FUN_10b5ac140();
  func_0x00010b5ac63c();
  return;
}



/* Entry: 10b5ac40c; end: 10b5ac40f;  */

void FUN_10b5ac40c(long param_1,long param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10b5ac458();
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5ac6ec();
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



/* Entry: 10b5ac410; end: 10b5ac457;  */

void FUN_10b5ac410(long param_1,long param_2)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10b5ac458();
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5ac6ec();
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



/* Entry: 10b5ac458; end: 10b5ac487;  */

void FUN_10b5ac458(long *param_1,long param_2)

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



/* Entry: 10b5ac488; end: 10b5ac4b3;  */

undefined8 * FUN_10b5ac488(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5ac458(param_1,param_3);
  return param_1;
}



/* Entry: 10b5ac4b4; end: 10b5ac4e3;  */

long * FUN_10b5ac4b4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5ac4e4; end: 10b5ac607;  */

void FUN_10b5ac4e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b5ac6e4();
  }
  else {
    func_0x00010b5ac690();
  }
  *puVar1 = &PTR_FUN_110d15668;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5ac608; end: 10b5ac753;  */

void FUN_10b5ac608(void)

{
  return;
}



/* Entry: 10b5ac754; end: 10b5ac7df;  */

undefined8 * FUN_10b5ac754(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d15940;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000108904afc(param_1 + 3,param_2,param_3 + 0x18);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b5acbd8(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  param_1[7] = *(undefined8 *)(param_3 + 0x38);
  return param_1;
}



/* Entry: 10b5ac7e0; end: 10b5ac813;  */

long FUN_10b5ac7e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5ac814(param_1);
  return param_1;
}



/* Entry: 10b5ac814; end: 10b5ac843;  */

undefined8 FUN_10b5ac814(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5aaf78();
  }
  __ZdlPv();
  func_0x000100690ee0(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x000100690fac();
  }
  return unaff_x19;
}



/* Entry: 10b5ac844; end: 10b5ac847;  */

long FUN_10b5ac844(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5ac814(param_1);
  return param_1;
}



/* Entry: 10b5ac848; end: 10b5ac85b;  */

void FUN_10b5ac848(void)

{
  FUN_10b5ac7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ac85c; end: 10b5ac867;  */

undefined ** FUN_10b5ac85c(void)

{
  return &PTR_DAT_110d15980;
}



/* Entry: 10b5ac868; end: 10b5ac8bb;  */

void FUN_10b5ac868(long param_1)

{
  ulong *puVar1;
  
  func_0x000108904f28(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5aaff8(*(undefined8 *)(param_1 + 0x30));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
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



/* Entry: 10b5ac8bc; end: 10b5ac9ab;  */

long * FUN_10b5ac8bc(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x20);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    plVar2 = (long *)0x4;
    func_0x000107c303cc(4,*puVar1,*(undefined4 *)(*puVar1 + 0x14),param_2,param_3);
    param_2 = plVar2;
  }
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x5;
    func_0x000107c303cc(5,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
  }
  plVar3 = plVar2;
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar3 = param_3;
    func_0x00010599ce18(param_3,*(long *)(param_1 + 0x38),plVar2);
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
        iVar8 = ((int)*param_3 - (int)plVar3) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        lVar4 = (long)plVar3 + (long)iVar8;
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



/* Entry: 10b5ac9ac; end: 10b5aca5b;  */

long FUN_10b5ac9ac(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  lVar3 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)(uVar2 + 7);
  }
  for (lVar4 = lVar3 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    uVar2 = *puVar1;
    func_0x000108903050();
    lVar3 = uVar2 + lVar3;
    puVar1 = puVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    FUN_10b5aca5c();
    lVar3 = lVar3 + lVar4 + 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5aca5c; end: 10b5aca87;  */

long FUN_10b5aca5c(long param_1)

{
  FUN_10b5ab13c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5aca88; end: 10b5aca8b;  */

void FUN_10b5aca88(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c2a454(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_10b5acbd8(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10b5ab224();
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
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



/* Entry: 10b5aca8c; end: 10b5acb43;  */

void FUN_10b5aca8c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c2a454(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_10b5acbd8(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10b5ab224();
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
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



/* Entry: 10b5acb44; end: 10b5acbcf;  */

void FUN_10b5acb44(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b5ac868();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  func_0x000107c2a454(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      FUN_10b5acbd8(uVar2,*(undefined8 *)(param_2 + 0x30));
      *(ulong *)(param_1 + 0x30) = uVar2;
    }
    else {
      FUN_10b5ab224();
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
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



/* Entry: 10b5acbd0; end: 10b5acbd7;  */

void FUN_10b5acbd0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d15940;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



/* Entry: 10b5acbd8; end: 10b5acc1b;  */

undefined8 * FUN_10b5acbd8(undefined8 *param_1,long param_2)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d15440;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5ab5e8();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  FUN_10b5ab2d0(puVar1 + 3,param_1,param_2 + 0x18);
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b5ab4e4(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar1[6] = param_1;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_2 + 0x38);
  return puVar1;
}



/* Entry: 10b5acc1c; end: 10b5acc4f;  */

void FUN_10b5acc1c(void)

{
  return;
}



/* Entry: 10b5acc50; end: 10b5acc77;  */

long FUN_10b5acc50(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5acc78; end: 10b5accc3;  */

undefined8 * FUN_10b5acc78(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d159e8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010b5acc28(param_1,param_3);
  return param_1;
}



/* Entry: 10b5accc4; end: 10b5accc7;  */

long FUN_10b5accc4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5accc8; end: 10b5accdb;  */

void FUN_10b5accc8(void)

{
  FUN_10b5acc50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5accdc; end: 10b5accfb;  */

undefined ** FUN_10b5accdc(void)

{
  return &PTR_DAT_110d15a28;
}



/* Entry: 10b5accfc; end: 10b5acd67;  */

long * FUN_10b5accfc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = param_3;
    func_0x000105991a14(param_3,*(long *)(param_1 + 0x10),param_2);
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
      iVar6 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      lVar2 = (long)plVar1 + (long)iVar6;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar5);
  }
  _memcpy(plVar1,lVar2,uVar3 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar3);
}



/* Entry: 10b5acd68; end: 10b5acdbb;  */

ulong FUN_10b5acd68(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 10b5acdbc; end: 10b5ace03;  */

void FUN_10b5acdbc(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d159e8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b5ace04; end: 10b5ace0b;  */

void FUN_10b5ace04(void)

{
  return;
}



/* Entry: 10b5ace0c; end: 10b5ace93;  */

void FUN_10b5ace0c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5ace68;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b5ad354();
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 2) goto LAB_10b5ace68;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5ace68;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_10b5ad204();
    }
  }
  __ZdlPv();
LAB_10b5ace68:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 10b5ace94; end: 10b5acec7;  */

long FUN_10b5ace94(long param_1)

{
  func_0x00010b5adab0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5ace0c(param_1);
  }
  return param_1;
}



/* Entry: 10b5acec8; end: 10b5acecb;  */

long FUN_10b5acec8(long param_1)

{
  func_0x00010b5adab0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_10b5ace0c(param_1);
  }
  return param_1;
}



/* Entry: 10b5acecc; end: 10b5acedf;  */

void FUN_10b5acecc(void)

{
  FUN_10b5ace94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5acee0; end: 10b5acef3;  */

long FUN_10b5acee0(long param_1)

{
  func_0x00010b5adab0();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5acef4; end: 10b5ad003;  */

void FUN_10b5acef4(long param_1)

{
  ulong *puVar1;
  
  FUN_10b5ace0c();
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



/* Entry: 10b5ad004; end: 10b5ad033;  */

void FUN_10b5ad004(void)

{
  FUN_10b5ad2f8();
  func_0x00010b5ada50();
  return;
}



/* Entry: 10b5ad034; end: 10b5ad14b;  */

void FUN_10b5ad034(long param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) goto LAB_10b5ad110;
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      FUN_10b5ace0c(param_1);
    }
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  if (iVar2 == 3) {
    if (iVar3 == 3) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 3) {
        ppuVar1 = &PTR_PTR_1133ab980;
      }
      func_0x00010b5ad1a8(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_10b5ad110;
    }
    func_0x00010b5ad9dc(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  else {
    if (iVar2 != 2) goto LAB_10b5ad110;
    if (iVar3 == 2) {
      ppuVar1 = *(undefined ***)(param_2 + 0x10);
      if (*(int *)(param_2 + 0x1c) != 2) {
        ppuVar1 = &PTR_PTR_1133ab9a0;
      }
      FUN_10b5ad14c(*(undefined8 *)(param_1 + 0x10),ppuVar1);
      goto LAB_10b5ad110;
    }
    FUN_10b5ad980(uVar4,*(undefined8 *)(param_2 + 0x10));
  }
  *(ulong *)(param_1 + 0x10) = uVar4;
LAB_10b5ad110:
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



/* Entry: 10b5ad14c; end: 10b5ad203;  */

void FUN_10b5ad14c(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5adaa4();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5adadc();
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



/* Entry: 10b5ad204; end: 10b5ad22f;  */

long FUN_10b5ad204(long param_1)

{
  func_0x00010b5adab0();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5ad230; end: 10b5ad243;  */

void FUN_10b5ad230(void)

{
  FUN_10b5ad204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ad244; end: 10b5ad24f;  */

undefined ** FUN_10b5ad244(void)

{
  return &PTR_DAT_110d15c08;
}



/* Entry: 10b5ad250; end: 10b5ad27b;  */

void FUN_10b5ad250(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5adb20();
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



/* Entry: 10b5ad27c; end: 10b5ad2f7;  */

long * FUN_10b5ad27c(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b5adac0();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5ad2c0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5ad2c0;
  func_0x00010b5adb04();
  func_0x00010b5ada88();
  unaff_x19 = unaff_x22;
LAB_10b5ad2c0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00010b5adb38();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x19 = unaff_x20;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 10b5ad2f8; end: 10b5ad34f;  */

void FUN_10b5ad2f8(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5adb44();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5adb58();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5ad350; end: 10b5ad353;  */

void FUN_10b5ad350(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5adaa4();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5adadc();
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



/* Entry: 10b5ad354; end: 10b5ad37f;  */

long FUN_10b5ad354(long param_1)

{
  func_0x00010b5adab0();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5ad380; end: 10b5ad393;  */

void FUN_10b5ad380(void)

{
  FUN_10b5ad354();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ad394; end: 10b5ad39f;  */

undefined ** FUN_10b5ad394(void)

{
  return &PTR_DAT_110d15c50;
}



/* Entry: 10b5ad3a0; end: 10b5ad3cb;  */

void FUN_10b5ad3a0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5adb20();
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



/* Entry: 10b5ad3cc; end: 10b5ad447;  */

long * FUN_10b5ad3cc(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010b5adac0();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5ad410;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10b5ad410;
  func_0x00010b5adb04();
  func_0x00010b5ada88();
  unaff_x19 = unaff_x22;
LAB_10b5ad410:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x19;
  }
  func_0x00010b5adb38();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*unaff_x20 - (long)unaff_x19 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*unaff_x20 - (int)unaff_x19) + 0x10;
      iVar3 = (int)param_3;
      uVar1 = iVar3 - iVar4;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      unaff_x19 = unaff_x20;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x19 + (long)iVar3);
  }
  _memcpy(unaff_x19,lVar2,param_3 & 0xffffffff);
  return (long *)((long)unaff_x19 + (long)(int)param_3);
}



/* Entry: 10b5ad448; end: 10b5ad49f;  */

void FUN_10b5ad448(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5adb44();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5adb58();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5ad4a0; end: 10b5ad4a3;  */

void FUN_10b5ad4a0(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5adaa4();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5adadc();
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



/* Entry: 10b5ad4a4; end: 10b5ad51b;  */

void FUN_10b5ad4a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = param_3;
  func_0x00010b5adaa4();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110d15b88;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010b5ada7c();
  }
  FUN_10b5ad830(unaff_x19 + 2);
  param_3 = param_3 + 0x28;
  func_0x000107c2809c();
  unaff_x19[5] = param_3;
  *(undefined4 *)(unaff_x19 + 6) = 0;
  return;
}



/* Entry: 10b5ad51c; end: 10b5ad547;  */

undefined8 FUN_10b5ad51c(undefined8 param_1)

{
  func_0x00010b5adab0();
  FUN_10b5ad548(param_1);
  return param_1;
}



/* Entry: 10b5ad548; end: 10b5ad56f;  */

long * FUN_10b5ad548(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5ad570; end: 10b5ad573;  */

undefined8 FUN_10b5ad570(undefined8 param_1)

{
  func_0x00010b5adab0();
  FUN_10b5ad548(param_1);
  return param_1;
}



/* Entry: 10b5ad574; end: 10b5ad587;  */

void FUN_10b5ad574(void)

{
  FUN_10b5ad51c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5ad588; end: 10b5ad593;  */

undefined ** FUN_10b5ad588(void)

{
  return &PTR_DAT_110d15c90;
}



/* Entry: 10b5ad594; end: 10b5ad5db;  */

void FUN_10b5ad594(long param_1)

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



/* Entry: 10b5ad5dc; end: 10b5ad6e3;  */

long * FUN_10b5ad5dc(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long extraout_x8;
  int iVar6;
  long *plVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x18);
  plVar4 = param_3;
  for (iVar6 = 0; iVar8 != iVar6; iVar6 = iVar6 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar6 * 8 + 7);
    }
    plVar4 = (long *)(ulong)*(uint *)(*puVar1 + 0x18);
    param_2 = (long *)0x1;
    func_0x000107c303cc();
  }
  plVar7 = (long *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  if (*(char *)((long)plVar7 + 0x17) < '\0') {
    if (plVar7[1] == 0) goto LAB_10b5ad694;
    plVar2 = (long *)*plVar7;
  }
  else {
    plVar2 = plVar7;
    if (*(char *)((long)plVar7 + 0x17) == '\0') goto LAB_10b5ad694;
  }
  func_0x00010b5adb04(plVar2);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,2,plVar7,param_2);
  plVar4 = plVar7;
  param_2 = plVar2;
LAB_10b5ad694:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5adb38();
  if ((long)plVar4 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b5ad6e4; end: 10b5ad77b;  */

long FUN_10b5ad6e4(long param_1)

{
  ulong *puVar1;
  long extraout_x8;
  ulong uVar2;
  long extraout_x9;
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
    FUN_10b5ad77c();
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
    func_0x00010b5adb58();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x30) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5ad77c; end: 10b5ad793;  */

void FUN_10b5ad77c(void)

{
  func_0x00010b5acf98();
  func_0x00010b5ada50();
  return;
}


