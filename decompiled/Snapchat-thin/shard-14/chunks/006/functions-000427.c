/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b55b508; end: 10b55b5df;  */

void FUN_10b55b508(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b55b6f8();
  }
  else {
    func_0x00010b55b6e4();
  }
  *puVar1 = &PTR_FUN_110d07078;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b55b5e0; end: 10b55b647;  */

undefined8 * FUN_10b55b5e0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b55b6f8();
  }
  else {
    func_0x00010b55b6e4();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d07078;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b55b708();
  }
  param_2 = param_2 + 0x10;
  func_0x000107c2809c(param_2,param_1);
  puVar1[2] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  return puVar1;
}



/* Entry: 10b55b648; end: 10b55b6b7;  */

undefined8 * FUN_10b55b648(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b55b6f8();
  }
  else {
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110d070c8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  FUN_10b55acfc();
  return puVar1;
}



/* Entry: 10b55b6b8; end: 10b55b773;  */

void FUN_10b55b6b8(void)

{
  return;
}



/* Entry: 10b55b774; end: 10b55b7e3;  */

undefined8 * FUN_10b55b774(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d07320;
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



/* Entry: 10b55b7e4; end: 10b55b813;  */

long FUN_10b55b7e4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b55b814; end: 10b55b817;  */

long FUN_10b55b814(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b55b818; end: 10b55b82b;  */

void FUN_10b55b818(void)

{
  FUN_10b55b7e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55b82c; end: 10b55b837;  */

undefined ** FUN_10b55b82c(void)

{
  return &PTR_DAT_110d07360;
}



/* Entry: 10b55b838; end: 10b55b87b;  */

void FUN_10b55b838(long param_1)

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



/* Entry: 10b55b87c; end: 10b55b977;  */

long * FUN_10b55b87c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x20);
    uVar2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280b8(param_2,uVar2);
  }
  plVar1 = param_2;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = param_3;
    func_0x000107c282cc(param_3,*(long *)(param_1 + 0x18),param_2);
  }
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b55b934;
    puVar3 = (undefined8 *)*puVar9;
  }
  else {
    puVar3 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b55b934;
  }
  func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f779d1c);
  plVar4 = param_3;
  func_0x000107c280a0(param_3,3,puVar9,plVar1);
  plVar1 = plVar4;
LAB_10b55b934:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
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
  if (*param_3 - (long)plVar1 < (long)(int)uVar6) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar1) + 0x10;
      iVar8 = (int)uVar6;
      uVar6 = (ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar5 = (long)plVar1 + (long)iVar10;
      plVar1 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar1 + (long)iVar8);
  }
  _memcpy(plVar1,lVar5,uVar6 & 0xffffffff);
  return (long *)((long)plVar1 + (long)(int)uVar6);
}



/* Entry: 10b55b978; end: 10b55ba1f;  */

void FUN_10b55b978(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b55b9b0;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b55b9b0:
    iVar1 = 0;
    goto LAB_10b55b9b4;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b55b9b4:
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



/* Entry: 10b55ba20; end: 10b55ba23;  */

void FUN_10b55ba20(long param_1,long param_2)

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



/* Entry: 10b55ba24; end: 10b55baab;  */

void FUN_10b55ba24(long param_1,long param_2)

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



/* Entry: 10b55baac; end: 10b55bab3;  */

void FUN_10b55baac(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d07320;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  return;
}



/* Entry: 10b55bab4; end: 10b55bb03;  */

void FUN_10b55bab4(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d07320;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &DAT_11383d918;
  return;
}



/* Entry: 10b55bb04; end: 10b55bb17;  */

void FUN_10b55bb04(void)

{
  return;
}



/* Entry: 10b55bb18; end: 10b55bb87;  */

undefined8 * FUN_10b55bb18(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d073f8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  param_3 = param_3 + 0x18;
  func_0x000107c2809c(param_3,param_2);
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



/* Entry: 10b55bb88; end: 10b55bbb7;  */

long FUN_10b55bb88(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55bbb8(param_1);
  return param_1;
}



/* Entry: 10b55bbb8; end: 10b55bbdf;  */

/* WARNING: Possible PIC construction at 0x00010b55bbcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b55bbd0) */

void FUN_10b55bbb8(long param_1)

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



/* Entry: 10b55bbe0; end: 10b55bbe3;  */

long FUN_10b55bbe0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55bbb8(param_1);
  return param_1;
}



/* Entry: 10b55bbe4; end: 10b55bbf7;  */

void FUN_10b55bbe4(void)

{
  FUN_10b55bb88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55bbf8; end: 10b55bc03;  */

undefined ** FUN_10b55bbf8(void)

{
  return &PTR_DAT_110d07438;
}



/* Entry: 10b55bc04; end: 10b55bc47;  */

void FUN_10b55bc04(long param_1)

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



/* Entry: 10b55bc48; end: 10b55bd37;  */

long * FUN_10b55bc48(long param_1,long *param_2,long *param_3)

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
      goto LAB_10b55bc8c;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b55bc8c:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f779d6f);
    param_2 = param_3;
    FUN_10b55bec4(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_10b55bcf4;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_10b55bcf4;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f779dce);
  param_2 = param_3;
  FUN_10b55bec4(param_3,2);
LAB_10b55bcf4:
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



/* Entry: 10b55bd38; end: 10b55bdc7;  */

long FUN_10b55bd38(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b55bd70;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b55bd70:
    lVar3 = 0;
    goto LAB_10b55bd74;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b55bd74:
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



/* Entry: 10b55bdc8; end: 10b55bdcb;  */

void FUN_10b55bdc8(long param_1,long param_2)

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



/* Entry: 10b55bdcc; end: 10b55be6b;  */

void FUN_10b55bdcc(long param_1,long param_2)

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



/* Entry: 10b55be6c; end: 10b55be73;  */

void FUN_10b55be6c(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d073f8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b55be74; end: 10b55bec3;  */

void FUN_10b55be74(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d073f8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b55bec4; end: 10b55bee3;  */

long * FUN_10b55bec4(long *param_1,undefined8 param_2)

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



/* Entry: 10b55bee4; end: 10b55bf63;  */

undefined8 * FUN_10b55bee4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d074d8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x00010b55c3b8();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00010b55c3b8();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b55c3b8();
  param_1[4] = lVar1;
  param_3 = param_3 + 0x28;
  func_0x00010b55c3b8();
  param_1[5] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



/* Entry: 10b55bf64; end: 10b55bf93;  */

long FUN_10b55bf64(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55bf94(param_1);
  return param_1;
}



/* Entry: 10b55bf94; end: 10b55bfcb;  */

/* WARNING: Possible PIC construction at 0x00010b55bfa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b55bfb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b55bfac) */
/* WARNING: Removing unreachable block (ram,0x00010b55bfbc) */

void FUN_10b55bf94(long param_1)

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



/* Entry: 10b55bfcc; end: 10b55bfcf;  */

long FUN_10b55bfcc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55bf94(param_1);
  return param_1;
}



/* Entry: 10b55bfd0; end: 10b55bfe3;  */

void FUN_10b55bfd0(void)

{
  FUN_10b55bf64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55bfe4; end: 10b55bfef;  */

undefined ** FUN_10b55bfe4(void)

{
  return &PTR_DAT_110d07518;
}



/* Entry: 10b55bff0; end: 10b55c043;  */

void FUN_10b55bff0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
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



/* Entry: 10b55c044; end: 10b55c1a3;  */

long * FUN_10b55c044(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  plVar1 = param_2;
  func_0x00010b55c3e8(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55c084;
  }
  else if ((int)plVar1 != 0) {
LAB_10b55c084:
    func_0x00010b55c3c0();
    plVar1 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b55c3ac();
  }
  func_0x00010b55c3e8(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55c0c4;
  }
  else if ((int)plVar1 != 0) {
LAB_10b55c0c4:
    func_0x00010b55c3c0();
    plVar1 = (long *)0x2;
    param_2 = param_3;
    func_0x00010b55c3ac();
  }
  func_0x00010b55c3e8(*(undefined8 *)(param_1 + 0x20));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55c104;
  }
  else if ((int)plVar1 != 0) {
LAB_10b55c104:
    func_0x00010b55c3c0();
    plVar1 = (long *)0x3;
    param_2 = param_3;
    func_0x00010b55c3ac();
  }
  func_0x00010b55c3e8(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b55c160;
  }
  else if ((int)plVar1 == 0) goto LAB_10b55c160;
  func_0x00010b55c3c0();
  param_2 = param_3;
  func_0x00010b55c3ac(param_3,4);
LAB_10b55c160:
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



/* Entry: 10b55c1a4; end: 10b55c26b;  */

long FUN_10b55c1a4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010b55c3dc(*(undefined8 *)(param_1 + 0x10));
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
  func_0x00010b55c3dc(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + lVar2 + 1;
  }
  func_0x00010b55c3dc(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + lVar2 + 1;
  }
  func_0x00010b55c3dc(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x30) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b55c26c; end: 10b55c26f;  */

void FUN_10b55c26c(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  lVar1 = param_2;
  func_0x00010b55c400(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55c3f4();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b55c400(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55c3f4();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b55c400(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55c3f4();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b55c400(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55c3f4();
    }
    func_0x000107c30248(param_1 + 0x28);
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



/* Entry: 10b55c270; end: 10b55c34f;  */

void FUN_10b55c270(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  lVar1 = param_2;
  func_0x00010b55c400(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55c3f4();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b55c400(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55c3f4();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b55c400(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55c3f4();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b55c400(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55c3f4();
    }
    func_0x000107c30248(param_1 + 0x28);
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



/* Entry: 10b55c350; end: 10b55c357;  */

void FUN_10b55c350(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d074d8;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b55c358; end: 10b55c3ab;  */

void FUN_10b55c358(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d074d8;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b55c3ac; end: 10b55c43f;  */

long * FUN_10b55c3ac(long *param_1,undefined8 param_2)

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



/* Entry: 10b55c440; end: 10b55c467;  */

long FUN_10b55c440(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b55c468; end: 10b55c46b;  */

long FUN_10b55c468(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b55c46c; end: 10b55c47f;  */

void FUN_10b55c46c(void)

{
  FUN_10b55c440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55c480; end: 10b55c49f;  */

undefined ** FUN_10b55c480(void)

{
  return &PTR_DAT_110d07640;
}



/* Entry: 10b55c4a0; end: 10b55c53b;  */

long * FUN_10b55c4a0(long *param_1,long *param_2,long *param_3)

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
    func_0x00010b55cedc();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b55cea0();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b55cedc();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b55cea0();
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



/* Entry: 10b55c53c; end: 10b55c5a3;  */

ulong FUN_10b55c53c(long param_1)

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



/* Entry: 10b55c5a4; end: 10b55c673;  */

undefined8 * FUN_10b55c5a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d07600;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00010b55ceb4();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b55ceb4();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b55ceb4();
  param_1[5] = lVar1;
  lVar1 = param_3 + 0x30;
  func_0x00010b55ceb4();
  param_1[6] = lVar1;
  iVar2 = *(int *)(param_3 + 0x50);
  *(int *)(param_1 + 10) = iVar2;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b55ce0c(param_2,*(undefined8 *)(param_3 + 0x38));
    iVar2 = *(int *)(param_1 + 10);
  }
  param_1[7] = param_2;
  param_1[8] = *(undefined8 *)(param_3 + 0x40);
  if (iVar2 - 1U < 3) {
    param_3 = param_3 + 0x48;
    func_0x00010b55ceb4();
    param_1[9] = param_3;
  }
  return param_1;
}



/* Entry: 10b55c674; end: 10b55c6a3;  */

long FUN_10b55c674(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55c6a4(param_1);
  return param_1;
}



/* Entry: 10b55c6a4; end: 10b55c703;  */

void FUN_10b55c6a4(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b55c440();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(int *)(param_1 + 0x50) - 1U < 3) {
      func_0x000107c30258(param_1 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 10b55c704; end: 10b55c707;  */

long FUN_10b55c704(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55c6a4(param_1);
  return param_1;
}



/* Entry: 10b55c708; end: 10b55c71b;  */

void FUN_10b55c708(void)

{
  FUN_10b55c674();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55c71c; end: 10b55c74f;  */

void FUN_10b55c71c(long param_1)

{
  if (*(int *)(param_1 + 0x50) - 1U < 3) {
    func_0x000107c30258(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10b55c750; end: 10b55c75b;  */

undefined ** FUN_10b55c750(void)

{
  return &PTR_DAT_110d076b8;
}



/* Entry: 10b55c75c; end: 10b55c7cb;  */

void FUN_10b55c75c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b55c48c(*(undefined8 *)(param_1 + 0x38));
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_10b55c71c(param_1);
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



/* Entry: 10b55c7cc; end: 10b55ca4b;  */

long * FUN_10b55c7cc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long unaff_x22;
  int iVar8;
  
  iVar7 = (int)param_1[10];
  if (iVar7 == 3) {
    func_0x00010b55cebc(param_1[9]);
    func_0x00010b55ce98();
    param_2 = (long *)0x3;
LAB_10b55c890:
    plVar1 = param_3;
    func_0x00010b55ce80();
    plVar6 = plVar1;
  }
  else {
    if (iVar7 == 2) {
      func_0x00010b55cebc(param_1[9]);
      func_0x00010b55ce98();
      param_2 = (long *)0x2;
      goto LAB_10b55c890;
    }
    plVar1 = param_1;
    plVar6 = param_2;
    if (iVar7 == 1) {
      func_0x00010b55cebc(param_1[9]);
      func_0x00010b55ce98();
      param_2 = (long *)0x1;
      goto LAB_10b55c890;
    }
  }
  func_0x00010b55cebc(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55c8bc;
  }
  else if ((int)param_2 != 0) {
LAB_10b55c8bc:
    func_0x00010b55ce98();
    param_2 = (long *)0x4;
    plVar1 = param_3;
    func_0x00010b55ce80();
    plVar6 = plVar1;
  }
  func_0x00010b55cebc(param_1[4]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55c8fc;
  }
  else if ((int)param_2 != 0) {
LAB_10b55c8fc:
    func_0x00010b55ce98();
    param_2 = (long *)0x5;
    plVar1 = param_3;
    func_0x00010b55ce80();
    plVar6 = plVar1;
  }
  func_0x00010b55cebc(param_1[5]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55c93c;
  }
  else if ((int)param_2 != 0) {
LAB_10b55c93c:
    func_0x00010b55ce98();
    param_2 = (long *)0x6;
    plVar1 = param_3;
    func_0x00010b55ce80();
    plVar6 = plVar1;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = (long *)param_1[7];
    plVar1 = (long *)0x7;
    func_0x000107c303cc(7,param_2,(int)param_2[3],plVar6,param_3);
    plVar6 = plVar1;
  }
  plVar2 = plVar1;
  if ((char)param_1[8] == '\x01') {
    func_0x00010b55cee8();
    plVar2 = (long *)0x40;
    func_0x000107c280a8();
    func_0x00010b55cea0();
    param_2 = plVar1;
    plVar6 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x44) != 0) {
    func_0x00010b55cee8();
    plVar6 = (long *)(ulong)*(uint *)((long)param_1 + 0x44);
    param_2 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x000107c280b8();
  }
  func_0x00010b55cebc(param_1[6]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b55ca10;
  }
  else if ((int)param_2 == 0) goto LAB_10b55ca10;
  func_0x00010b55ce98();
  plVar6 = param_3;
  func_0x00010b55ce80(param_3,10);
LAB_10b55ca10:
  if ((param_1[1] & 1U) == 0) {
    return plVar6;
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
  if ((long)(int)uVar4 <= *param_3 - (long)plVar6) {
    _memcpy(plVar6,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar6 + (long)(int)uVar4);
  }
  while( true ) {
    iVar8 = ((int)*param_3 - (int)plVar6) + 0x10;
    iVar7 = (int)uVar4;
    uVar4 = (ulong)(uint)(iVar7 - iVar8);
    if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
    func_0x00010b4d5738();
    lVar3 = (long)plVar6 + (long)iVar8;
    plVar6 = param_3;
    func_0x000107c303e4(param_3,lVar3);
  }
  func_0x00010b4d5738();
  return (long *)((long)plVar6 + (long)iVar7);
}



/* Entry: 10b55ca4c; end: 10b55cb83;  */

long FUN_10b55ca4c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010b55cf18(*(undefined8 *)(param_1 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar1 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar1 + 1;
  }
  func_0x00010b55cf18(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b55cf0c();
  }
  func_0x00010b55cf18(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b55cf0c();
  }
  func_0x00010b55cf18(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b55cf0c();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    FUN_10b55c53c();
    lVar4 = lVar4 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
  }
  lVar4 = lVar4 + (ulong)*(byte *)(param_1 + 0x40) * 2;
  if (*(int *)(param_1 + 0x44) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x44)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x50) - 1U < 3) {
    func_0x000107c282a0(*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc);
    func_0x00010b55cf0c();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar1 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b55cb84; end: 10b55cb87;  */

void FUN_10b55cb84(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar8 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar8 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  lVar5 = param_2;
  func_0x00010b55cf00(*(undefined8 *)(param_2 + 0x18));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      func_0x00010b55cef4();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b55cf00(*(undefined8 *)(param_2 + 0x20));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55cef4();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b55cf00(*(undefined8 *)(param_2 + 0x28));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55cef4();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b55cf00(*(undefined8 *)(param_2 + 0x30));
  lVar7 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55cef4();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar6 = uVar8;
      FUN_10b55ce0c(uVar8,*(undefined8 *)(param_2 + 0x38));
      *(ulong *)(param_1 + 0x38) = uVar6;
    }
    else {
      func_0x00010b55c40c();
    }
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_10b55c71c(param_1);
      }
      *(int *)(param_1 + 0x50) = iVar3;
    }
    if (((iVar3 == 3) || (iVar3 == 2)) || (iVar3 == 1)) {
      if (iVar4 != iVar3) {
        *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x50) != iVar3) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x48,puVar1,uVar8);
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



/* Entry: 10b55cb88; end: 10b55cd57;  */

void FUN_10b55cb88(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  
  uVar6 = *(ulong *)(param_1 + 8);
  uVar8 = uVar6;
  if ((uVar6 & 1) != 0) {
    uVar8 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
  }
  lVar5 = param_2;
  func_0x00010b55cf00(*(undefined8 *)(param_2 + 0x18));
  lVar7 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((uVar6 & 1) != 0) {
      func_0x00010b55cef4();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b55cf00(*(undefined8 *)(param_2 + 0x20));
  lVar7 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55cef4();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b55cf00(*(undefined8 *)(param_2 + 0x28));
  lVar7 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55cef4();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b55cf00(*(undefined8 *)(param_2 + 0x30));
  lVar7 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar7 = *(long *)(lVar5 + 8);
  }
  if (lVar7 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55cef4();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar6 = uVar8;
      FUN_10b55ce0c(uVar8,*(undefined8 *)(param_2 + 0x38));
      *(ulong *)(param_1 + 0x38) = uVar6;
    }
    else {
      func_0x00010b55c40c();
    }
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (*(int *)(param_2 + 0x44) != 0) {
    *(int *)(param_1 + 0x44) = *(int *)(param_2 + 0x44);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
  iVar3 = *(int *)(param_2 + 0x50);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_10b55c71c(param_1);
      }
      *(int *)(param_1 + 0x50) = iVar3;
    }
    if (((iVar3 == 3) || (iVar3 == 2)) || (iVar3 == 1)) {
      if (iVar4 != iVar3) {
        *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x50) != iVar3) {
        puVar1 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x48,puVar1,uVar8);
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



/* Entry: 10b55cd58; end: 10b55cd67;  */

void FUN_10b55cd58(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d075b0;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b55cd68; end: 10b55ce0b;  */

void FUN_10b55cd68(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d075b0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b55ce0c; end: 10b55ce7f;  */

undefined8 * FUN_10b55ce0c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d075b0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  func_0x00010b55c40c();
  return puVar1;
}



/* Entry: 10b55ce80; end: 10b55cf23;  */

long * FUN_10b55ce80(long *param_1,undefined8 param_2)

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



/* Entry: 10b55cf24; end: 10b55cfbf;  */

undefined8 * FUN_10b55cf24(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d07768;
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



/* Entry: 10b55cfc0; end: 10b55cfef;  */

long FUN_10b55cfc0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55cff0(param_1);
  return param_1;
}



/* Entry: 10b55cff0; end: 10b55d027;  */

void FUN_10b55cff0(long param_1)

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



/* Entry: 10b55d028; end: 10b55d02b;  */

long FUN_10b55d028(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55cff0(param_1);
  return param_1;
}



/* Entry: 10b55d02c; end: 10b55d03f;  */

void FUN_10b55d02c(void)

{
  FUN_10b55cfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55d040; end: 10b55d04b;  */

undefined ** FUN_10b55d040(void)

{
  return &PTR_DAT_110d077a8;
}



/* Entry: 10b55d04c; end: 10b55d0a7;  */

void FUN_10b55d04c(long param_1)

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



/* Entry: 10b55d0a8; end: 10b55d1ef;  */

long * FUN_10b55d0a8(long param_1,long *param_2,long *param_3)

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
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b55d120;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b55d120:
    func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77a1e6);
    param_2 = param_3;
    func_0x00010b55d438(param_3,2);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b55d188;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b55d188;
  func_0x000107c303d4(puVar7,lVar3,1,&UNK_10f77a238);
  param_2 = param_3;
  func_0x00010b55d438(param_3,3);
LAB_10b55d188:
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20),param_2,param_3);
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



/* Entry: 10b55d1f0; end: 10b55d2bb;  */

long FUN_10b55d1f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b55d228;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b55d228:
    lVar3 = 0;
    goto LAB_10b55d22c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b55d22c:
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



/* Entry: 10b55d2bc; end: 10b55d2bf;  */

void FUN_10b55d2bc(long param_1,long param_2)

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



/* Entry: 10b55d2c0; end: 10b55d3cf;  */

void FUN_10b55d2c0(long param_1,long param_2)

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



/* Entry: 10b55d3d0; end: 10b55d3d7;  */

void FUN_10b55d3d0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d07768;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b55d3d8; end: 10b55d42b;  */

void FUN_10b55d3d8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d07768;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b55d42c; end: 10b55d44b;  */

void FUN_10b55d42c(void)

{
  return;
}



/* Entry: 10b55d44c; end: 10b55d4f3;  */

undefined8 * FUN_10b55d44c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d07840;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x00010b55dba4();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00010b55dba4();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b55dba4();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b55dba4();
  param_1[5] = lVar1;
  lVar1 = param_3 + 0x30;
  func_0x00010b55dba4();
  param_1[6] = lVar1;
  lVar1 = param_3 + 0x38;
  func_0x00010b55dba4();
  param_1[7] = lVar1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x4d);
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar3;
  *(undefined8 *)((long)param_1 + 0x4d) = uVar2;
  return param_1;
}



/* Entry: 10b55d4f4; end: 10b55d523;  */

long FUN_10b55d4f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55d524(param_1);
  return param_1;
}



/* Entry: 10b55d524; end: 10b55d56b;  */

/* WARNING: Possible PIC construction at 0x00010b55d538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b55d548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b55d558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b55d54c) */
/* WARNING: Removing unreachable block (ram,0x00010b55d53c) */
/* WARNING: Removing unreachable block (ram,0x00010b55d55c) */

void FUN_10b55d524(long param_1)

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



/* Entry: 10b55d56c; end: 10b55d56f;  */

long FUN_10b55d56c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55d524(param_1);
  return param_1;
}



/* Entry: 10b55d570; end: 10b55d583;  */

void FUN_10b55d570(void)

{
  FUN_10b55d4f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b55d584; end: 10b55d58f;  */

undefined ** FUN_10b55d584(void)

{
  return &PTR_DAT_110d07880;
}



/* Entry: 10b55d590; end: 10b55d5fb;  */

void FUN_10b55d590(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4d) = 0;
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



/* Entry: 10b55d5fc; end: 10b55d87f;  */

long * FUN_10b55d5fc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long unaff_x22;
  int iVar9;
  
  plVar6 = param_1;
  plVar7 = param_2;
  if ((int)param_1[10] != 0) {
    plVar7 = param_1;
    func_0x00010b55db90();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 10);
    param_2 = (long *)0x8;
    func_0x000107c280a8(8,plVar7);
    func_0x000107c280b8();
    plVar7 = plVar6;
  }
  plVar1 = plVar6;
  if (param_1[8] != 0) {
    func_0x00010b55db90();
    plVar1 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010b55dc14();
    param_2 = plVar6;
    plVar7 = plVar1;
  }
  func_0x00010b55dbc4(param_1[2]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55d68c;
  }
  else if ((int)param_2 != 0) {
LAB_10b55d68c:
    func_0x00010b55db9c();
    param_2 = (long *)0x3;
    plVar1 = param_3;
    func_0x00010b55db84();
    plVar7 = plVar1;
  }
  func_0x00010b55dbc4(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55d6cc;
  }
  else if ((int)param_2 != 0) {
LAB_10b55d6cc:
    func_0x00010b55db9c();
    param_2 = (long *)0x4;
    plVar1 = param_3;
    func_0x00010b55db84();
    plVar7 = plVar1;
  }
  plVar6 = plVar1;
  if (param_1[9] != 0) {
    func_0x00010b55db90();
    plVar6 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010b55dc14();
    param_2 = plVar1;
    plVar7 = plVar6;
  }
  func_0x00010b55dbc4(param_1[4]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55d730;
  }
  else if ((int)param_2 != 0) {
LAB_10b55d730:
    func_0x00010b55db9c();
    param_2 = (long *)0x6;
    plVar6 = param_3;
    func_0x00010b55db84();
    plVar7 = plVar6;
  }
  func_0x00010b55dbc4(param_1[5]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55d770;
  }
  else if ((int)param_2 != 0) {
LAB_10b55d770:
    func_0x00010b55db9c();
    param_2 = (long *)0x7;
    plVar6 = param_3;
    func_0x00010b55db84();
    plVar7 = plVar6;
  }
  func_0x00010b55dbc4(param_1[6]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b55d7b0;
  }
  else if ((int)param_2 != 0) {
LAB_10b55d7b0:
    func_0x00010b55db9c();
    param_2 = (long *)0x8;
    plVar6 = param_3;
    func_0x00010b55db84();
    plVar7 = plVar6;
  }
  func_0x00010b55dbc4(param_1[7]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b55d80c;
  }
  else if ((int)param_2 == 0) goto LAB_10b55d80c;
  func_0x00010b55db9c();
  plVar6 = param_3;
  func_0x00010b55db84(param_3,9);
  plVar7 = plVar6;
LAB_10b55d80c:
  if (*(char *)((long)param_1 + 0x54) == '\x01') {
    func_0x00010b55db90();
    plVar7 = (long *)(ulong)*(byte *)((long)param_1 + 0x54);
    uVar2 = 0x50;
    func_0x000107c280a8(0x50,plVar6);
    func_0x000107c280a8(plVar7,uVar2);
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
    if (*param_3 - (long)plVar7 < (long)(int)uVar4) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar7) + 0x10;
        iVar8 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar3 = (long)plVar7 + (long)iVar9;
        plVar7 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar7 + (long)iVar8);
    }
    _memcpy(plVar7,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)plVar7 + (long)(int)uVar4);
  }
  return plVar7;
}



/* Entry: 10b55d880; end: 10b55d9b3;  */

void FUN_10b55d880(long param_1)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  int iVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar4;
  ulong uVar5;
  
  lVar4 = param_1;
  func_0x00010b55dbac(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar4 + 1;
  }
  func_0x00010b55dbac(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b55dbf4();
  }
  func_0x00010b55dbac(*(undefined8 *)(param_1 + 0x20));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b55dbf4();
  }
  func_0x00010b55dbac(*(undefined8 *)(param_1 + 0x28));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b55dbf4();
  }
  func_0x00010b55dbac(*(undefined8 *)(param_1 + 0x30));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b55dbf4();
  }
  func_0x00010b55dbac(*(undefined8 *)(param_1 + 0x38));
  lVar3 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b55dbf4();
  }
  iVar2 = -9;
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010b55dbdc();
    iVar2 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010b55dbdc();
    iVar2 = extraout_w8_00;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x50)) * iVar2 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x54) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar1 = (int)lVar4 + iVar1;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  return;
}



/* Entry: 10b55d9b4; end: 10b55d9b7;  */

void FUN_10b55d9b4(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  
  lVar1 = param_2;
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(char *)(param_2 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 1;
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



/* Entry: 10b55d9b8; end: 10b55db1b;  */

void FUN_10b55d9b8(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  
  lVar1 = param_2;
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b55dbd0(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b55dbb8();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(char *)(param_2 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 1;
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



/* Entry: 10b55db1c; end: 10b55db23;  */

void FUN_10b55db1c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x60);
  }
  *puVar1 = &PTR_FUN_110d07840;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  return;
}



/* Entry: 10b55db24; end: 10b55db83;  */

void FUN_10b55db24(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x60);
  }
  *puVar1 = &PTR_FUN_110d07840;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  return;
}



/* Entry: 10b55db84; end: 10b55dc1f;  */

long * FUN_10b55db84(long *param_1,undefined8 param_2)

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



/* Entry: 10b55dc20; end: 10b55dcc7;  */

undefined8 * FUN_10b55dc20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d07910;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_3 + 0x10;
  func_0x00010b55e36c();
  param_1[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x00010b55e36c();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x00010b55e36c();
  param_1[4] = lVar2;
  lVar2 = param_3 + 0x28;
  func_0x00010b55e36c();
  param_1[5] = lVar2;
  lVar2 = param_3 + 0x30;
  func_0x00010b55e36c();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00010b55e36c();
  param_1[7] = lVar2;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  uVar1 = *(undefined1 *)(param_3 + 0x50);
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar3;
  *(undefined1 *)(param_1 + 10) = uVar1;
  return param_1;
}



/* Entry: 10b55dcc8; end: 10b55dcf7;  */

long FUN_10b55dcc8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55dcf8(param_1);
  return param_1;
}



/* Entry: 10b55dcf8; end: 10b55dd3f;  */

/* WARNING: Possible PIC construction at 0x00010b55dd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b55dd1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b55dd2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b55dd20) */
/* WARNING: Removing unreachable block (ram,0x00010b55dd10) */
/* WARNING: Removing unreachable block (ram,0x00010b55dd30) */

void FUN_10b55dcf8(long param_1)

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



/* Entry: 10b55dd40; end: 10b55dd43;  */

long FUN_10b55dd40(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b55dcf8(param_1);
  return param_1;
}



/* Entry: 10b55dd44; end: 10b55dd57;  */

void FUN_10b55dd44(void)

{
  FUN_10b55dcc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


