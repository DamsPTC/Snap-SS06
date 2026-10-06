/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088bb91c; end: 1088bb9c3;  */

long FUN_1088bb91c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    func_0x000107c282a0();
  }
  else {
    if (iVar1 == 2) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar4;
      goto LAB_1088bb990;
    }
    if (iVar1 != 1) goto LAB_1088bb990;
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x000107c2a268();
  }
  lVar4 = uVar2 + lVar4 + 1;
LAB_1088bb990:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x20) = (int)lVar4;
  return lVar4;
}



/* Entry: 1088bb9c4; end: 1088bb9c7;  */

void FUN_1088bb9c4(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x000107c2a294(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        *(undefined **)(param_1 + 0x18) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x24) != 3) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x18,puVar2,uVar5);
    }
    else if (iVar3 == 2) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    else if (iVar3 == 1) {
      if (iVar4 == 1) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x24) != 1) {
          ppuVar1 = &PTR_PTR_11326cb58;
        }
        FUN_1088bf398(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      }
      else {
        func_0x000107c2a26c(uVar5,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar5;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bb9c8; end: 1088bbaff;  */

void FUN_1088bb9c8(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x000107c2a294(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        *(undefined **)(param_1 + 0x18) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x24) != 3) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x18,puVar2,uVar5);
    }
    else if (iVar3 == 2) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    else if (iVar3 == 1) {
      if (iVar4 == 1) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x24) != 1) {
          ppuVar1 = &PTR_PTR_11326cb58;
        }
        FUN_1088bf398(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      }
      else {
        func_0x000107c2a26c(uVar5,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar5;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bbb00; end: 1088bbb37;  */

void FUN_1088bbb00(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_1088bb7b8();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        func_0x000107c2a294(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        *(undefined **)(param_1 + 0x18) = &DAT_11383d918;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x24) != 3) {
        puVar2 = &DAT_11383d918;
      }
      func_0x000107c30248(param_1 + 0x18,puVar2,uVar5);
    }
    else if (iVar3 == 2) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    else if (iVar3 == 1) {
      if (iVar4 == 1) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x24) != 1) {
          ppuVar1 = &PTR_PTR_11326cb58;
        }
        FUN_1088bf398(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      }
      else {
        func_0x000107c2a26c(uVar5,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar5;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bbb38; end: 1088bbc0b;  */

undefined8 * FUN_1088bbb38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a81670;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
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
    func_0x000105992a50(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010598eb08(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000105992a50(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar3;
  return param_1;
}



/* Entry: 1088bbc0c; end: 1088bbc3f;  */

long FUN_1088bbc0c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088bbc40(param_1);
  return param_1;
}



/* Entry: 1088bbc40; end: 1088bbc97;  */

void FUN_1088bbc40(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bceba98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bbc98; end: 1088bbc9b;  */

long FUN_1088bbc98(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088bbc40(param_1);
  return param_1;
}



/* Entry: 1088bbc9c; end: 1088bbcaf;  */

void FUN_1088bbc9c(void)

{
  FUN_1088bbc0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bbcb0; end: 1088bbcbb;  */

undefined ** FUN_1088bbcb0(void)

{
  return &PTR_DAT_110a816b0;
}



/* Entry: 1088bbcbc; end: 1088bbd43;  */

void FUN_1088bbcbc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb764(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bcebb44(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088bbd44; end: 1088bc07f;  */

long * FUN_1088bbd44(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar7 = param_1;
  if (param_1[8] != 0) {
    plVar3 = param_1;
    func_0x0001088bc274();
    plVar7 = (long *)param_1[8];
    uVar2 = 8;
    func_0x000107c280a8(8,plVar3);
    func_0x000107c280ac(plVar7,uVar2);
    param_2 = plVar7;
  }
  puVar9 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 != 0) {
      puVar9 = (undefined8 *)*puVar9;
      goto LAB_1088bbdb4;
    }
  }
  else if (*(char *)((long)puVar9 + 0x17) != '\0') {
LAB_1088bbdb4:
    func_0x000107c303d4(puVar9,lVar4,1,&UNK_10f4ea2cd);
    plVar7 = param_3;
    func_0x0001088bc2a4(param_3,2);
    param_2 = plVar7;
  }
  puVar9 = (undefined8 *)(param_1[4] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar9[1];
    if (lVar4 == 0) goto LAB_1088bbe1c;
    puVar9 = (undefined8 *)*puVar9;
  }
  else if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_1088bbe1c;
  func_0x000107c303d4(puVar9,lVar4,1,&UNK_10f4ea2fd);
  plVar7 = param_3;
  func_0x0001088bc2a4(param_3,4);
  param_2 = plVar7;
LAB_1088bbe1c:
  plVar3 = plVar7;
  if ((char)param_1[9] == '\x01') {
    func_0x0001088bc274();
    plVar3 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar7);
    func_0x0001088bc298();
    param_2 = plVar3;
  }
  plVar7 = plVar3;
  if (*(char *)((long)param_1 + 0x49) == '\x01') {
    func_0x0001088bc274();
    plVar7 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar3);
    func_0x0001088bc298();
    param_2 = plVar7;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar7 = (long *)0x7;
    func_0x0001088bc280(7,param_1[5],*(undefined4 *)(param_1[5] + 0x14));
    param_2 = plVar7;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar7 = (long *)0x8;
    func_0x0001088bc280(8,param_1[6],*(undefined4 *)(param_1[6] + 0x18));
    param_2 = plVar7;
  }
  plVar3 = plVar7;
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    func_0x0001088bc274();
    plVar3 = (long *)(ulong)*(uint *)((long)param_1 + 0x4c);
    uVar2 = 0x48;
    func_0x000107c280a8(0x48,plVar7);
    func_0x000107c280b8(plVar3,uVar2);
    param_2 = plVar3;
  }
  if (*(char *)((long)param_1 + 0x4a) == '\x01') {
    func_0x0001088bc274();
    param_2 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar3);
    func_0x0001088bc298();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)0xb;
    func_0x0001088bc280(0xb,param_1[7],*(undefined4 *)(param_1[7] + 0x14));
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
  return param_2;
}



/* Entry: 1088bc080; end: 1088bc083;  */

void FUN_1088bc080(long param_1,long param_2)

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
        func_0x000105992a50(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        func_0x00010598eb08(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x000105992a50(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bc084; end: 1088bc233;  */

void FUN_1088bc084(long param_1,long param_2)

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
        func_0x000105992a50(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        func_0x00010598eb08(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x000105992a50(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bc234; end: 1088bc26b;  */

void FUN_1088bc234(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_1088bbcbc();
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
        func_0x000105992a50(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        func_0x00010598eb08(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x000105992a50(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bc26c; end: 1088bc2bf;  */

void FUN_1088bc26c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x50);
  }
  *puVar1 = &PTR_FUN_110a81670;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  return;
}



/* Entry: 1088bc2c0; end: 1088bc2d3;  */

void FUN_1088bc2c0(void)

{
  func_0x000107c2a2b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bc2d4; end: 1088bc2e3;  */

undefined8 FUN_1088bc2d4(undefined8 param_1)

{
  func_0x00010066bd0c();
  return param_1;
}



/* Entry: 1088bc2e4; end: 1088bc3e7;  */

void FUN_1088bc2e4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c2a2ac();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088bc3e8; end: 1088bc413;  */

long FUN_1088bc3e8(long param_1)

{
  FUN_1088bc670();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1088bc414; end: 1088bc417;  */

void FUN_1088bc414(long param_1,long param_2)

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
        func_0x000107c2a2bc(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        func_0x000107c2a2ac(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x000107c2a2c4(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bc418; end: 1088bc4d7;  */

void FUN_1088bc418(long param_1,long param_2)

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
        func_0x000107c2a2bc(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        func_0x000107c2a2ac(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x000107c2a2c4(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bc4d8; end: 1088bc50f;  */

void FUN_1088bc4d8(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_1088bc2e4();
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        func_0x000107c2a2bc(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        func_0x000107c2a2ac(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x000107c2a2c4(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
      }
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bc510; end: 1088bc543;  */

void FUN_1088bc510(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  return;
}



/* Entry: 1088bc544; end: 1088bc557;  */

void FUN_1088bc544(void)

{
  func_0x000107c2a2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bc558; end: 1088bc57b;  */

undefined ** FUN_1088bc558(void)

{
  return &PTR_DAT_110a81850;
}



/* Entry: 1088bc57c; end: 1088bc66f;  */

long * FUN_1088bc57c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x0001088bc99c();
  plVar2 = param_1;
  if ((char)param_1[4] == '\x01') {
    func_0x0001088bc974();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x0001088bc980();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x21) == '\x01') {
    func_0x0001088bc974();
    plVar3 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x0001088bc980();
    param_4 = plVar3;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar3 = unaff_x19;
    func_0x00010599ccb0();
    param_4 = plVar3;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    plVar3 = unaff_x19;
    func_0x000107c282e8();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x22) == '\x01') {
    func_0x0001088bc974();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x0001088bc980();
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



/* Entry: 1088bc670; end: 1088bc6ef;  */

long FUN_1088bc670(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar1 = uVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2 + (ulong)*(byte *)(param_1 + 0x21) * 2 +
          (ulong)*(byte *)(param_1 + 0x22) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088bc6f0; end: 1088bc753;  */

undefined8 * FUN_1088bc6f0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a81720;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088bc9ac();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = *(uint *)(param_3 + 0x24);
  *(uint *)((long)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  if ((uVar1 & 0xfffffffe) == 2) {
    param_1[3] = *(undefined8 *)(param_3 + 0x18);
  }
  return param_1;
}



/* Entry: 1088bc754; end: 1088bc783;  */

long FUN_1088bc754(long param_1)

{
  func_0x000107c347b8();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 1088bc784; end: 1088bc787;  */

long FUN_1088bc784(long param_1)

{
  func_0x000107c347b8();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 1088bc788; end: 1088bc79b;  */

void FUN_1088bc788(void)

{
  FUN_1088bc754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bc79c; end: 1088bc7bf;  */

undefined ** FUN_1088bc79c(void)

{
  return &PTR_DAT_110a818a8;
}



/* Entry: 1088bc7c0; end: 1088bc8ab;  */

long * FUN_1088bc7c0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  func_0x0001088bc99c();
  plVar6 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x0001088bc974();
    plVar6 = (long *)(ulong)*(uint *)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x000107c280a8(8,param_1);
    func_0x000107c280b8(plVar6,uVar2);
    param_4 = plVar6;
  }
  if (*(int *)(unaff_x20 + 0x24) == 3) {
    func_0x0001088bc974();
    if (*(int *)(unaff_x20 + 0x24) == 3) {
      param_4 = *(long **)(unaff_x20 + 0x18);
    }
    else {
      param_4 = (long *)0x0;
    }
    uVar2 = 0x18;
  }
  else {
    if (*(int *)(unaff_x20 + 0x24) != 2) goto LAB_1088bc874;
    func_0x0001088bc974();
    if (*(int *)(unaff_x20 + 0x24) == 2) {
      param_4 = *(long **)(unaff_x20 + 0x18);
    }
    else {
      param_4 = (long *)0x0;
    }
    uVar2 = 0x10;
  }
  func_0x000107c280a8(uVar2,plVar6);
  func_0x000107c280ac(param_4,uVar2);
LAB_1088bc874:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
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
      iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar7 = (int)uVar4;
      uVar1 = iVar7 - iVar8;
      uVar4 = (ulong)uVar1;
      if (uVar1 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      param_4 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar7);
  }
  _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)uVar4);
}



/* Entry: 1088bc8ac; end: 1088bc9c3;  */

long FUN_1088bc8ac(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(uint *)(param_1 + 0x24) & 0xfffffffe) == 2) {
    lVar1 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088bc9c4; end: 1088bca57;  */

undefined8 * FUN_1088bc9c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a81948;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
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
    func_0x0001088bce88(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 1088bca58; end: 1088bca87;  */

long FUN_1088bca58(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088bca88(param_1);
  return param_1;
}



/* Entry: 1088bca88; end: 1088bcabf;  */

void FUN_1088bca88(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x000107c30258(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010b59cae8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bcac0; end: 1088bcac3;  */

long FUN_1088bcac0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1088bca88(param_1);
  return param_1;
}



/* Entry: 1088bcac4; end: 1088bcad7;  */

void FUN_1088bcac4(void)

{
  FUN_1088bca58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bcad8; end: 1088bcae3;  */

undefined ** FUN_1088bcad8(void)

{
  return &PTR_DAT_110a81988;
}



/* Entry: 1088bcae4; end: 1088bcb3b;  */

void FUN_1088bcae4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b59cb3c(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088bcb3c; end: 1088bcc4f;  */

long * FUN_1088bcb3c(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x24),param_2,param_3);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 != 0) {
      puVar6 = (undefined8 *)*puVar6;
      goto LAB_1088bcba4;
    }
  }
  else if (*(char *)((long)puVar6 + 0x17) != '\0') {
LAB_1088bcba4:
    func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f4ea332);
    plVar1 = param_3;
    func_0x0001088bcee0(param_3,2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)puVar6 + 0x17);
  if (lVar2 < 0) {
    lVar2 = puVar6[1];
    if (lVar2 == 0) goto LAB_1088bcc0c;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_1088bcc0c;
  func_0x000107c303d4(puVar6,lVar2,1,&UNK_10f4ea361);
  plVar1 = param_3;
  func_0x0001088bcee0(param_3,3);
LAB_1088bcc0c:
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



/* Entry: 1088bcc50; end: 1088bccf7;  */

long FUN_1088bcc50(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_1088bcc88;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_1088bcc88:
    lVar3 = 0;
    goto LAB_1088bcc8c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_1088bcc8c:
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
    FUN_1088bccf8();
    lVar3 = lVar3 + lVar2 + 1;
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



/* Entry: 1088bccf8; end: 1088bcd23;  */

long FUN_1088bccf8(long param_1)

{
  func_0x00010b59cc7c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1088bcd24; end: 1088bcd27;  */

void FUN_1088bcd24(long param_1,long param_2)

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
      func_0x0001088bce88(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      func_0x00010b59cd28();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bcd28; end: 1088bce2b;  */

void FUN_1088bcd28(long param_1,long param_2)

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
      func_0x0001088bce88(uVar2,*(undefined8 *)(param_2 + 0x28));
      *(ulong *)(param_1 + 0x28) = uVar2;
    }
    else {
      func_0x00010b59cd28();
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bce2c; end: 1088bce33;  */

void FUN_1088bce2c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x30);
  }
  *puVar1 = &PTR_FUN_110a81948;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 1088bce34; end: 1088bcecb;  */

void FUN_1088bce34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x30);
  }
  *puVar1 = &PTR_FUN_110a81948;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = 0;
  return;
}



/* Entry: 1088bcecc; end: 1088bceeb;  */

void FUN_1088bcecc(void)

{
  return;
}



/* Entry: 1088bceec; end: 1088bcf07;  */

long FUN_1088bceec(long param_1)

{
  long extraout_x8;
  
  func_0x0001088bd47c();
  FUN_1088bea1c();
  return param_1 + extraout_x8;
}



/* Entry: 1088bcf08; end: 1088bd033;  */

undefined8 * FUN_1088bcf08(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a81b80;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088bea4c();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x0001088bec20();
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x0001088bec20();
  param_1[4] = lVar2;
  lVar2 = param_3 + 0x28;
  func_0x0001088bec20();
  param_1[5] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0001088be768(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0001088be768(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0001088be824(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0001088be824(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x0001088be8a0(param_2,*(undefined8 *)(param_3 + 0x50));
  }
  param_1[10] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x58));
  }
  param_1[0xb] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x60);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_3 + 0x68);
  param_1[0xc] = uVar3;
  return param_1;
}



/* Entry: 1088bd034; end: 1088bd05f;  */

undefined8 FUN_1088bd034(undefined8 param_1)

{
  func_0x0001088beac8();
  FUN_1088bd060(param_1);
  return param_1;
}



/* Entry: 1088bd060; end: 1088bd0e7;  */

void FUN_1088bd060(void)

{
  long unaff_x19;
  
  func_0x0001088bec34();
  func_0x000107c30258(unaff_x19 + 0x20);
  func_0x000107c30258(unaff_x19 + 0x28);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_1088be2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_1088be2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_1088bda20();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_1088bda20();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_1088bdeb0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bd0e8; end: 1088bd0eb;  */

undefined8 FUN_1088bd0e8(undefined8 param_1)

{
  func_0x0001088beac8();
  FUN_1088bd060(param_1);
  return param_1;
}



/* Entry: 1088bd0ec; end: 1088bd0ff;  */

void FUN_1088bd0ec(void)

{
  FUN_1088bd034();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bd100; end: 1088bd10b;  */

undefined ** FUN_1088bd100(void)

{
  return &PTR_DAT_110a81bc0;
}



/* Entry: 1088bd10c; end: 1088bd223;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088bd10c(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x0001088bec28();
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088bd1c0(*(undefined8 *)(unaff_x19 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088bd1c0(*(undefined8 *)(unaff_x19 + 0x38));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088bd224(*(undefined8 *)(unaff_x19 + 0x40));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1088bd224(*(undefined8 *)(unaff_x19 + 0x48));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_1088bd238(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x58));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088bd224; end: 1088bd237;  */

void FUN_1088bd224(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088bd238; end: 1088bd27f;  */

void FUN_1088bd238(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1088bdf40(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_1088bde5c(param_1);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088bd280; end: 1088bd5eb;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1088bd280(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  puVar7 = (undefined8 *)(ulong)uVar1;
  plVar5 = param_3;
  if ((uVar1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x14);
    param_2 = (long *)0x1;
    func_0x0001088bea40();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x38) + 0x14);
    param_2 = (long *)0x2;
    func_0x0001088bea40();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x40) + 0x14);
    param_2 = (long *)0x3;
    func_0x0001088bea40();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x48) + 0x14);
    param_2 = (long *)0x4;
    func_0x0001088bea40();
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x0001088bebfc();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x50) + 0x14);
    param_2 = (long *)0x6;
    func_0x0001088bea40();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x58) + 0x18);
    param_2 = (long *)0x7;
    func_0x0001088bea40();
  }
  lVar4 = *(long *)(param_1 + 0x60);
  plVar2 = param_2;
  if (lVar4 != 0) {
    plVar2 = param_3;
    func_0x00010599ce18();
    plVar5 = param_2;
  }
  func_0x0001088beb1c(*(undefined8 *)(param_1 + 0x18));
  if (lVar4 < 0) {
    lVar4 = 0;
    if (puVar7[1] != 0) {
      puVar3 = (undefined8 *)*puVar7;
      goto LAB_1088bd3a8;
    }
  }
  else {
    puVar3 = puVar7;
    if ((int)lVar4 != 0) {
LAB_1088bd3a8:
      func_0x0001088beab4(puVar3);
      lVar4 = 9;
      plVar2 = param_3;
      func_0x0001088beaf8();
    }
  }
  func_0x0001088beb1c(*(undefined8 *)(param_1 + 0x20));
  if (lVar4 < 0) {
    lVar4 = 0;
    if (puVar7[1] != 0) {
      puVar3 = (undefined8 *)*puVar7;
      goto LAB_1088bd3e8;
    }
  }
  else {
    puVar3 = puVar7;
    if ((int)lVar4 != 0) {
LAB_1088bd3e8:
      func_0x0001088beab4(puVar3);
      lVar4 = 10;
      plVar2 = param_3;
      func_0x0001088beaf8();
    }
  }
  func_0x0001088beb1c(*(undefined8 *)(param_1 + 0x28));
  if (lVar4 < 0) {
    if (puVar7[1] == 0) goto LAB_1088bd444;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if ((int)lVar4 == 0) goto LAB_1088bd444;
  func_0x0001088beab4(puVar7);
  plVar2 = param_3;
  func_0x0001088beaf8(param_3,0xb);
LAB_1088bd444:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
  }
  func_0x0001088beb4c();
  if ((long)plVar5 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar2 < (long)(int)plVar5) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
      iVar6 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar4 = (long)plVar2 + (long)iVar8;
      plVar2 = param_3;
      func_0x000107c303e4(param_3,lVar4);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar2 + (long)iVar6);
  }
  _memcpy(plVar2,lVar4,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)plVar5);
}



/* Entry: 1088bd5ec; end: 1088bd623;  */

long FUN_1088bd5ec(long param_1)

{
  long extraout_x8;
  
  FUN_1088be4cc();
  FUN_1088bea1c();
  return param_1 + extraout_x8;
}



/* Entry: 1088bd624; end: 1088bd627;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088bd624(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088bebb4();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0001088beb04();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088be768();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x0001088bd810();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088be768();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x0001088bd810();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088be824();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_1088bd924();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088be824();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_1088bd924();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088be8a0();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_1088bd95c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088bebf4();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  func_0x0001088beb94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088beba4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bd628; end: 1088bd923;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088bd628(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088bebb4();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0001088beb04();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088be768();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x0001088bd810();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088be768();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x0001088bd810();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088be824();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_1088bd924();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001088be824();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_1088bd924();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088be8a0();
        *(ulong **)(unaff_x21 + 0x50) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_1088bd95c();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088bebf4();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(int *)(unaff_x20 + 0x68) != 0) {
    *(int *)(unaff_x21 + 0x68) = *(int *)(unaff_x20 + 0x68);
  }
  func_0x0001088beb94();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x0001088beba4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088bd924; end: 1088bd95b;  */

void FUN_1088bd924(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x18) != iVar1) {
      *(int *)(param_1 + 0x18) = iVar1;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    }
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bd95c; end: 1088bda1f;  */

void FUN_1088bd95c(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x0001088bebb4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar2;
      func_0x0001088be938();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088be088();
    }
  }
  func_0x0001088beb94();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    if ((int)unaff_x21[5] == iVar1) {
      if (iVar1 == 2) {
        param_1 = (ulong *)unaff_x21[4];
        func_0x0001088bdb34();
      }
    }
    else {
      if ((int)unaff_x21[5] != 0) {
        param_1 = unaff_x21;
        FUN_1088bde5c();
      }
      *(int *)(unaff_x21 + 5) = iVar1;
      if (iVar1 == 2) {
        FUN_1088be9a8();
        unaff_x21[4] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088beba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088bda20; end: 1088bda4f;  */

long FUN_1088bda20(long param_1)

{
  func_0x0001088beac8();
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1088bda50; end: 1088bda53;  */

long FUN_1088bda50(long param_1)

{
  func_0x0001088beac8();
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1088bda54; end: 1088bda67;  */

void FUN_1088bda54(void)

{
  FUN_1088bda20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bda68; end: 1088bda73;  */

undefined ** FUN_1088bda68(void)

{
  return &PTR_DAT_110a81c00;
}



/* Entry: 1088bda74; end: 1088bdad7;  */

long * FUN_1088bda74(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088beae8();
  if ((int)param_1[3] == 1) {
    func_0x0001088bebe8();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088beb4c();
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



/* Entry: 1088bdad8; end: 1088bdbaf;  */

ulong FUN_1088bdad8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  else {
    uVar1 = 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x14) = (int)uVar1;
  return uVar1;
}



/* Entry: 1088bdbb0; end: 1088bdbd3;  */

undefined8 FUN_1088bdbb0(undefined8 param_1)

{
  func_0x0001088beac8();
  return param_1;
}



/* Entry: 1088bdbd4; end: 1088bdbd7;  */

undefined8 FUN_1088bdbd4(undefined8 param_1)

{
  func_0x0001088beac8();
  return param_1;
}



/* Entry: 1088bdbd8; end: 1088bdbeb;  */

void FUN_1088bdbd8(void)

{
  FUN_1088bdbb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bdbec; end: 1088bdc0f;  */

undefined ** FUN_1088bdbec(void)

{
  return &PTR_DAT_110a81c40;
}



/* Entry: 1088bdc10; end: 1088bdd43;  */

long * FUN_1088bdc10(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x0001088beae8();
  if ((int)param_1[2] != 0) {
    func_0x0001088bebe8();
    func_0x000107c282e4();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x0001088bea78();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x0001088bebfc();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x0001088bebe8();
    func_0x000107c282ac();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x0001088bebe8();
    FUN_1088bdd44();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088bebe8();
    FUN_1088b96ec();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    func_0x0001088bea78();
    plVar3 = (long *)0x30;
    func_0x000107c280a8(0x30,plVar2);
    func_0x0001088bead0();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(char *)(unaff_x20 + 0x25) == '\x01') {
    func_0x0001088bea78();
    plVar2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar3);
    func_0x0001088bead0();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x26) == '\x01') {
    func_0x0001088bea78();
    param_4 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar2);
    func_0x0001088bead0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088beb4c();
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



/* Entry: 1088bdd44; end: 1088bdd7b;  */

void FUN_1088bdd44(undefined8 param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  
  func_0x000107c28094(param_1,param_3);
  pbVar2 = (byte *)0x20;
  func_0x000107c280a8(0x20,param_1);
  for (uVar1 = (ulong)param_2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pbVar2 = (byte)uVar1 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar1;
  return;
}



/* Entry: 1088bdd7c; end: 1088bde5b;  */

long FUN_1088bdd7c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = uVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x1c)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar2 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar1 = uVar2 + (ulong)*(byte *)(param_1 + 0x24) * 2 + (ulong)*(byte *)(param_1 + 0x25) * 2 +
          (ulong)*(byte *)(param_1 + 0x26) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088bde5c; end: 1088bdeaf;  */

void FUN_1088bde5c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x28) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_1088bdbb0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 1088bdeb0; end: 1088bdedb;  */

undefined8 FUN_1088bdeb0(undefined8 param_1)

{
  func_0x0001088beac8();
  FUN_1088bdedc(param_1);
  return param_1;
}



/* Entry: 1088bdedc; end: 1088bdf1b;  */

void FUN_1088bdedc(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088be110();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(param_1 + 0x28) == 2) {
      uVar1 = *(ulong *)(param_1 + 8);
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
      }
      if (uVar1 == 0) {
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_1088bdbb0();
        }
        __ZdlPv();
      }
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* Entry: 1088bdf1c; end: 1088bdf1f;  */

undefined8 FUN_1088bdf1c(undefined8 param_1)

{
  func_0x0001088beac8();
  FUN_1088bdedc(param_1);
  return param_1;
}



/* Entry: 1088bdf20; end: 1088bdf33;  */

void FUN_1088bdf20(void)

{
  FUN_1088bdeb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088bdf34; end: 1088bdf3f;  */

undefined ** FUN_1088bdf34(void)

{
  return &PTR_DAT_110a81ca0;
}



/* Entry: 1088bdf40; end: 1088be083;  */

void FUN_1088bdf40(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 1088be084; end: 1088be087;  */

void FUN_1088be084(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x0001088bebb4();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      param_1 = puVar2;
      func_0x0001088be938();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088be088();
    }
  }
  func_0x0001088beb94();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    if ((int)unaff_x21[5] == iVar1) {
      if (iVar1 == 2) {
        param_1 = (ulong *)unaff_x21[4];
        func_0x0001088bdb34();
      }
    }
    else {
      if ((int)unaff_x21[5] != 0) {
        param_1 = unaff_x21;
        FUN_1088bde5c();
      }
      *(int *)(unaff_x21 + 5) = iVar1;
      if (iVar1 == 2) {
        FUN_1088be9a8();
        unaff_x21[4] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088beba4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088be088; end: 1088be10f;  */

void FUN_1088be088(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088beb88();
  func_0x0001088beb10(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088be110; end: 1088be13b;  */

undefined8 FUN_1088be110(undefined8 param_1)

{
  func_0x0001088beac8();
  FUN_1088be13c(param_1);
  return param_1;
}



/* Entry: 1088be13c; end: 1088be163;  */

/* WARNING: Possible PIC construction at 0x0001088be150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001088be154) */

void FUN_1088be13c(long param_1)

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



/* Entry: 1088be164; end: 1088be167;  */

undefined8 FUN_1088be164(undefined8 param_1)

{
  func_0x0001088beac8();
  FUN_1088be13c(param_1);
  return param_1;
}



/* Entry: 1088be168; end: 1088be17b;  */

void FUN_1088be168(void)

{
  FUN_1088be110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088be17c; end: 1088be187;  */

undefined ** FUN_1088be17c(void)

{
  return &PTR_DAT_110a81cf0;
}



/* Entry: 1088be188; end: 1088be25b;  */

long * FUN_1088be188(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x0001088beb1c(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_1088be1c8;
  }
  else if ((int)plVar1 != 0) {
LAB_1088be1c8:
    func_0x0001088beab4();
    plVar1 = (long *)0x1;
    param_2 = param_3;
    func_0x0001088bea58();
  }
  func_0x0001088beb1c(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_1088be224;
  }
  else if ((int)plVar1 == 0) goto LAB_1088be224;
  func_0x0001088beab4();
  param_2 = param_3;
  func_0x0001088bea58(param_3,2);
LAB_1088be224:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0001088beb4c();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 1088be25c; end: 1088be2db;  */

long FUN_1088be25c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long lVar3;
  
  lVar2 = param_1;
  func_0x0001088beb28(*(undefined8 *)(param_1 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = lVar2 + 1;
  }
  func_0x0001088beb28(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x0001088beabc();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088bebdc();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 1088be2dc; end: 1088be2df;  */

void FUN_1088be2dc(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088beb88();
  func_0x0001088beb10(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  func_0x0001088beb10(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088beb04();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1088be2e0; end: 1088be30b;  */

undefined8 FUN_1088be2e0(undefined8 param_1)

{
  func_0x0001088beac8();
  FUN_1088be30c(param_1);
  return param_1;
}



/* Entry: 1088be30c; end: 1088be353;  */

void FUN_1088be30c(void)

{
  long unaff_x19;
  
  func_0x0001088bec34();
  func_0x000107c30258(unaff_x19 + 0x20);
  func_0x000107c30258(unaff_x19 + 0x28);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088be354; end: 1088be357;  */

undefined8 FUN_1088be354(undefined8 param_1)

{
  func_0x0001088beac8();
  FUN_1088be30c(param_1);
  return param_1;
}



/* Entry: 1088be358; end: 1088be36b;  */

void FUN_1088be358(void)

{
  FUN_1088be2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


