/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b54aa90; end: 10b54aa93;  */

void FUN_10b54aa90(long param_1,long param_2)

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



/* Entry: 10b54aa94; end: 10b54ab33;  */

void FUN_10b54aa94(long param_1,long param_2)

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



/* Entry: 10b54ab34; end: 10b54ab3b;  */

void FUN_10b54ab34(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d04a30;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b54ab3c; end: 10b54ab8b;  */

void FUN_10b54ab3c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d04a30;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b54ab8c; end: 10b54abab;  */

long * FUN_10b54ab8c(long *param_1,undefined8 param_2)

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



/* Entry: 10b54abac; end: 10b54ac53;  */

undefined8 * FUN_10b54abac(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d04ae8;
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
    func_0x00010b54b0d4(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b54b118(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  param_1[6] = *(undefined8 *)(param_3 + 0x30);
  return param_1;
}



/* Entry: 10b54ac54; end: 10b54ac87;  */

long FUN_10b54ac54(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54ac88(param_1);
  return param_1;
}



/* Entry: 10b54ac88; end: 10b54acc7;  */

void FUN_10b54ac88(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b53ebe0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b54b230();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54acc8; end: 10b54accb;  */

long FUN_10b54acc8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54ac88(param_1);
  return param_1;
}



/* Entry: 10b54accc; end: 10b54acdf;  */

void FUN_10b54accc(void)

{
  FUN_10b54ac54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54ace0; end: 10b54aceb;  */

undefined ** FUN_10b54ace0(void)

{
  return &PTR_DAT_110d04b28;
}



/* Entry: 10b54acec; end: 10b54ad53;  */

void FUN_10b54acec(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b53ec64(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b54b2cc(*(undefined8 *)(param_1 + 0x28));
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



/* Entry: 10b54ad54; end: 10b54af2f;  */

long * FUN_10b54ad54(long param_1,long *param_2,long *param_3)

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
  puVar9 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)puVar9 + 0x17);
  if (lVar5 < 0) {
    lVar5 = puVar9[1];
    if (lVar5 == 0) goto LAB_10b54adf4;
    puVar4 = (undefined8 *)*puVar9;
  }
  else {
    puVar4 = puVar9;
    if (*(char *)((long)puVar9 + 0x17) == '\0') goto LAB_10b54adf4;
  }
  func_0x000107c303d4(puVar4,lVar5,1,&UNK_10f778fee);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,2,puVar9,param_2);
  param_2 = plVar2;
LAB_10b54adf4:
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x3;
    func_0x00010b54b184(3,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x30));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x4;
    func_0x00010b54b184(4,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x50));
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



/* Entry: 10b54af30; end: 10b54af5f;  */

void FUN_10b54af30(void)

{
  FUN_10b53ee0c();
  func_0x00010b54b168();
  return;
}



/* Entry: 10b54af60; end: 10b54af63;  */

void FUN_10b54af60(long param_1,long param_2)

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
        func_0x00010b54b0d4(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x00010b54b118(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10b54b678();
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



/* Entry: 10b54af64; end: 10b54b073;  */

void FUN_10b54af64(long param_1,long param_2)

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
        func_0x00010b54b0d4(uVar2,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x00010b54b118(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_10b54b678();
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



/* Entry: 10b54b074; end: 10b54b07b;  */

void FUN_10b54b074(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d04ae8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b54b07c; end: 10b54b15b;  */

void FUN_10b54b07c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d04ae8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



/* Entry: 10b54b15c; end: 10b54b18f;  */

void FUN_10b54b15c(void)

{
  return;
}



/* Entry: 10b54b190; end: 10b54b22f;  */

undefined8 * FUN_10b54b190(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d04ba0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x00010b54b838();
  param_1[2] = lVar1;
  lVar1 = param_3 + 0x18;
  func_0x00010b54b838();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b54b838();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b54b838();
  param_1[5] = lVar1;
  lVar1 = param_3 + 0x30;
  func_0x00010b54b838();
  param_1[6] = lVar1;
  lVar1 = param_3 + 0x38;
  func_0x00010b54b838();
  param_1[7] = lVar1;
  *(undefined4 *)(param_1 + 10) = 0;
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar2;
  return param_1;
}



/* Entry: 10b54b230; end: 10b54b25f;  */

long FUN_10b54b230(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54b260(param_1);
  return param_1;
}



/* Entry: 10b54b260; end: 10b54b2a7;  */

/* WARNING: Possible PIC construction at 0x00010b54b274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b54b284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b54b294: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b54b288) */
/* WARNING: Removing unreachable block (ram,0x00010b54b278) */
/* WARNING: Removing unreachable block (ram,0x00010b54b298) */

void FUN_10b54b260(long param_1)

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



/* Entry: 10b54b2a8; end: 10b54b2ab;  */

long FUN_10b54b2a8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54b260(param_1);
  return param_1;
}



/* Entry: 10b54b2ac; end: 10b54b2bf;  */

void FUN_10b54b2ac(void)

{
  FUN_10b54b230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54b2c0; end: 10b54b2cb;  */

undefined ** FUN_10b54b2c0(void)

{
  return &PTR_DAT_110d04be0;
}



/* Entry: 10b54b2cc; end: 10b54b333;  */

void FUN_10b54b2cc(long param_1)

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



/* Entry: 10b54b334; end: 10b54b543;  */

long * FUN_10b54b334(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x22;
  int iVar7;
  
  plVar2 = param_2;
  func_0x00010b54b864(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54b374;
  }
  else if ((int)plVar2 != 0) {
LAB_10b54b374:
    func_0x00010b54b830();
    plVar2 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b54b824();
  }
  func_0x00010b54b864(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54b3b4;
  }
  else if ((int)plVar2 != 0) {
LAB_10b54b3b4:
    func_0x00010b54b830();
    plVar2 = (long *)0x2;
    param_2 = param_3;
    func_0x00010b54b824();
  }
  func_0x00010b54b864(*(undefined8 *)(param_1 + 0x20));
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54b3f4;
  }
  else if ((int)plVar2 != 0) {
LAB_10b54b3f4:
    func_0x00010b54b830();
    plVar2 = (long *)0x3;
    param_2 = param_3;
    func_0x00010b54b824();
  }
  func_0x00010b54b864(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54b434;
  }
  else if ((int)plVar2 != 0) {
LAB_10b54b434:
    func_0x00010b54b830();
    param_2 = param_3;
    func_0x00010b54b824(param_3,4);
  }
  lVar3 = *(long *)(param_1 + 0x40);
  plVar2 = param_2;
  if (lVar3 != 0) {
    plVar2 = param_3;
    func_0x000107c282c4(param_3,lVar3,param_2);
  }
  func_0x00010b54b864(*(undefined8 *)(param_1 + 0x30));
  if (lVar3 < 0) {
    lVar3 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54b48c;
  }
  else if ((int)lVar3 != 0) {
LAB_10b54b48c:
    func_0x00010b54b830();
    lVar3 = 6;
    plVar2 = param_3;
    func_0x00010b54b824();
  }
  func_0x00010b54b864(*(undefined8 *)(param_1 + 0x38));
  if (lVar3 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b54b4e8;
  }
  else if ((int)lVar3 == 0) goto LAB_10b54b4e8;
  func_0x00010b54b830();
  plVar2 = param_3;
  func_0x00010b54b824(param_3,7);
LAB_10b54b4e8:
  plVar1 = plVar2;
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar1 = param_3;
    func_0x00010599ce18(param_3,*(long *)(param_1 + 0x48),plVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar1;
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



/* Entry: 10b54b544; end: 10b54b673;  */

long FUN_10b54b544(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010b54b858(*(undefined8 *)(param_1 + 0x10));
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
  func_0x00010b54b858(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b54b870();
  }
  func_0x00010b54b858(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b54b870();
  }
  func_0x00010b54b858(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b54b870();
  }
  func_0x00010b54b858(*(undefined8 *)(param_1 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b54b870();
  }
  func_0x00010b54b858(*(undefined8 *)(param_1 + 0x38));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b54b870();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x50) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b54b674; end: 10b54b677;  */

void FUN_10b54b674(long param_1,long param_2)

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
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
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



/* Entry: 10b54b678; end: 10b54b7bf;  */

void FUN_10b54b678(long param_1,long param_2)

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
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b54b84c(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54b840();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0x48);
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



/* Entry: 10b54b7c0; end: 10b54b7c7;  */

void FUN_10b54b7c0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d04ba0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  return;
}



/* Entry: 10b54b7c8; end: 10b54b823;  */

void FUN_10b54b7c8(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d04ba0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  puVar1[6] = &DAT_11383d918;
  puVar1[7] = &DAT_11383d918;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  return;
}



/* Entry: 10b54b824; end: 10b54b88f;  */

long * FUN_10b54b824(long *param_1,undefined8 param_2)

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



/* Entry: 10b54b890; end: 10b54b8cf;  */

long FUN_10b54b890(long param_1)

{
  func_0x00010b54cf30();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x00010b54cf14();
  func_0x000107c30258(param_1 + 0x28);
  return param_1;
}



/* Entry: 10b54b8d0; end: 10b54b8d3;  */

long FUN_10b54b8d0(long param_1)

{
  func_0x00010b54cf30();
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  func_0x00010b54cf14();
  func_0x000107c30258(param_1 + 0x28);
  return param_1;
}



/* Entry: 10b54b8d4; end: 10b54b8e7;  */

void FUN_10b54b8d4(void)

{
  FUN_10b54b890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54b8e8; end: 10b54b8f3;  */

undefined ** FUN_10b54b8e8(void)

{
  return &PTR_DAT_110d04d38;
}



/* Entry: 10b54b8f4; end: 10b54b93b;  */

void FUN_10b54b8f4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
  func_0x00010b54cf1c();
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



/* Entry: 10b54b93c; end: 10b54ba8f;  */

long * FUN_10b54b93c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  func_0x00010b54cf6c();
  func_0x00010b54ce40(*(undefined8 *)(param_1 + 0x10));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54b978;
  }
  else if ((int)param_2 != 0) {
LAB_10b54b978:
    func_0x00010b54ce2c();
    param_2 = 1;
    unaff_x20 = param_3;
    func_0x00010b54cdf0();
  }
  func_0x00010b54ce40(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54b9b8;
  }
  else if ((int)param_2 != 0) {
LAB_10b54b9b8:
    func_0x00010b54ce2c();
    param_2 = 2;
    unaff_x20 = param_3;
    func_0x00010b54cdf0();
  }
  func_0x00010b54ce40(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54b9f8;
  }
  else if ((int)param_2 != 0) {
LAB_10b54b9f8:
    func_0x00010b54ce2c();
    param_2 = 3;
    unaff_x20 = param_3;
    func_0x00010b54cdf0();
  }
  func_0x00010b54ce40(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b54ba54;
  }
  else if ((int)param_2 == 0) goto LAB_10b54ba54;
  func_0x00010b54ce2c();
  unaff_x20 = param_3;
  func_0x00010b54cdf0(param_3,4);
LAB_10b54ba54:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  uVar3 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
  uVar2 = (ulong)*(char *)(uVar3 + 0x1f);
  if ((long)uVar2 < 0) {
    lVar1 = *(long *)(uVar3 + 8);
    uVar2 = *(ulong *)(uVar3 + 0x10);
  }
  else {
    lVar1 = uVar3 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)uVar2) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar4 = (int)uVar2;
      uVar2 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      lVar1 = (long)unaff_x20 + (long)iVar5;
      unaff_x20 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar4);
  }
  _memcpy(unaff_x20,lVar1,uVar2 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)uVar2);
}



/* Entry: 10b54ba90; end: 10b54bb4b;  */

long FUN_10b54ba90(long param_1)

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
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x10));
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
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b54ce74();
  }
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b54ce74();
  }
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b54ce74();
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



/* Entry: 10b54bb4c; end: 10b54bb4f;  */

void FUN_10b54bb4c(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  lVar1 = param_2;
  func_0x00010b54ce4c(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b54ce4c(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b54ce4c(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b54ce4c(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54ce34();
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



/* Entry: 10b54bb50; end: 10b54bc2b;  */

void FUN_10b54bb50(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  lVar1 = param_2;
  func_0x00010b54ce4c(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x00010b54ce4c(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(param_1 + 0x18);
  }
  func_0x00010b54ce4c(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x00010b54ce4c(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b54ce34();
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



/* Entry: 10b54bc2c; end: 10b54bca7;  */

void FUN_10b54bc2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b54cf58();
  *unaff_x19 = &PTR_FUN_110d04ca8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b54cea8();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  lVar1 = unaff_x20 + 0x18;
  func_0x00010b54ce6c();
  unaff_x19[3] = lVar1;
  lVar1 = unaff_x20 + 0x20;
  func_0x00010b54ce6c();
  unaff_x19[4] = lVar1;
  if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010b54ceec();
  }
  unaff_x19[5] = lVar1;
  unaff_x19[6] = *(undefined8 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 10b54bca8; end: 10b54bcd3;  */

undefined8 FUN_10b54bca8(undefined8 param_1)

{
  func_0x00010b54cf30();
  FUN_10b54bcd4(param_1);
  return param_1;
}



/* Entry: 10b54bcd4; end: 10b54bcff;  */

void FUN_10b54bcd4(void)

{
  long unaff_x19;
  
  func_0x00010b54cf38();
  func_0x00010b54cf14();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_10b53ebe0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54bd00; end: 10b54bd03;  */

undefined8 FUN_10b54bd00(undefined8 param_1)

{
  func_0x00010b54cf30();
  FUN_10b54bcd4(param_1);
  return param_1;
}



/* Entry: 10b54bd04; end: 10b54bd17;  */

void FUN_10b54bd04(void)

{
  FUN_10b54bca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54bd18; end: 10b54bd23;  */

undefined ** FUN_10b54bd18(void)

{
  return &PTR_DAT_110d04d88;
}



/* Entry: 10b54bd24; end: 10b54bd6b;  */

void FUN_10b54bd24(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b54cf44();
  func_0x00010b54cf1c();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10b53ec64(*(undefined8 *)(unaff_x19 + 0x28));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
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



/* Entry: 10b54bd6c; end: 10b54be97;  */

long * FUN_10b54bd6c(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  func_0x00010b54cf6c();
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar1 = param_3;
    func_0x000107c28094(param_3);
    unaff_x20 = *(long **)(unaff_x21 + 0x30);
    param_2 = 8;
    func_0x000107c280a8(8,plVar1);
    func_0x000107c280ac();
  }
  func_0x00010b54ce40(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54bddc;
  }
  else if ((int)param_2 != 0) {
LAB_10b54bddc:
    func_0x00010b54ce2c();
    param_2 = 2;
    unaff_x20 = param_3;
    func_0x00010b54cdf0();
  }
  func_0x00010b54ce40(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b54be38;
  }
  else if ((int)param_2 == 0) goto LAB_10b54be38;
  func_0x00010b54ce2c();
  unaff_x20 = param_3;
  func_0x00010b54cdf0(param_3,3);
LAB_10b54be38:
  plVar1 = unaff_x20;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(unaff_x21 + 0x28),
                        *(undefined4 *)(*(long *)(unaff_x21 + 0x28) + 0x30),unaff_x20,param_3);
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return plVar1;
  }
  uVar4 = *(ulong *)(unaff_x21 + 8) & 0xfffffffffffffffe;
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



/* Entry: 10b54be98; end: 10b54bf4f;  */

long FUN_10b54be98(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1;
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x18));
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
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x20));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(lVar2 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b54ce74();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b54af30(*(undefined8 *)(param_1 + 0x28));
    func_0x00010b54ce74();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b54bf50; end: 10b54bf53;  */

void FUN_10b54bf50(long param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b54cf6c();
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(unaff_x21 + 0x28);
    if (lVar2 == 0) {
      func_0x00010b54ceb4(0,*(undefined8 *)(unaff_x20 + 0x28));
      *(long *)(unaff_x21 + 0x28) = lVar2;
    }
    else {
      FUN_10b53eeec();
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010b54cf84();
  if ((extraout_x8_01 & 1) != 0) {
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



/* Entry: 10b54bf54; end: 10b54c027;  */

void FUN_10b54bf54(long param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b54cf6c();
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(unaff_x21 + 0x28);
    if (lVar2 == 0) {
      func_0x00010b54ceb4(0,*(undefined8 *)(unaff_x20 + 0x28));
      *(long *)(unaff_x21 + 0x28) = lVar2;
    }
    else {
      FUN_10b53eeec();
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00010b54cf84();
  if ((extraout_x8_01 & 1) != 0) {
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



/* Entry: 10b54c028; end: 10b54c167;  */

void FUN_10b54c028(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010b54cf58();
  *unaff_x19 = &PTR_FUN_110d04cf8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b54cea8();
  }
  *(undefined4 *)(unaff_x19 + 2) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  lVar2 = unaff_x20 + 0x18;
  func_0x00010b54ce6c();
  unaff_x19[3] = lVar2;
  lVar2 = unaff_x20 + 0x20;
  func_0x00010b54ce6c();
  unaff_x19[4] = lVar2;
  lVar2 = unaff_x20 + 0x28;
  func_0x00010b54ce6c();
  unaff_x19[5] = lVar2;
  lVar2 = unaff_x20 + 0x30;
  func_0x00010b54ce6c();
  unaff_x19[6] = lVar2;
  lVar2 = unaff_x20 + 0x38;
  func_0x00010b54ce6c();
  unaff_x19[7] = lVar2;
  lVar2 = unaff_x20 + 0x40;
  func_0x00010b54ce6c();
  unaff_x19[8] = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x00010b532cd8();
  }
  unaff_x19[9] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b54ceec();
  }
  unaff_x19[10] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010b54ceec();
  }
  unaff_x19[0xb] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_10b54cd5c();
  }
  unaff_x19[0xc] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b532d0c();
  }
  unaff_x19[0xd] = unaff_x21;
  if ((uVar1 >> 5 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b54ceec();
  }
  unaff_x19[0xe] = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
  unaff_x19[0x13] = *(undefined8 *)(unaff_x20 + 0x98);
  unaff_x19[0x12] = uVar6;
  unaff_x19[0x11] = uVar5;
  unaff_x19[0x10] = uVar4;
  unaff_x19[0xf] = uVar3;
  return;
}



/* Entry: 10b54c168; end: 10b54c193;  */

undefined8 FUN_10b54c168(undefined8 param_1)

{
  func_0x00010b54cf30();
  FUN_10b54c194(param_1);
  return param_1;
}



/* Entry: 10b54c194; end: 10b54c22f;  */

void FUN_10b54c194(void)

{
  long unaff_x19;
  
  func_0x00010b54cf38();
  func_0x00010b54cf14();
  func_0x000107c30258(unaff_x19 + 0x28);
  func_0x000107c30258(unaff_x19 + 0x30);
  func_0x000107c30258(unaff_x19 + 0x38);
  func_0x000107c30258(unaff_x19 + 0x40);
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_10b53cbd8();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_10b53ebe0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_10b53ebe0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    FUN_10b54b890();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_10b54bca8();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    FUN_10b53ebe0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54c230; end: 10b54c233;  */

undefined8 FUN_10b54c230(undefined8 param_1)

{
  func_0x00010b54cf30();
  FUN_10b54c194(param_1);
  return param_1;
}



/* Entry: 10b54c234; end: 10b54c247;  */

void FUN_10b54c234(void)

{
  FUN_10b54c168();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54c248; end: 10b54c253;  */

undefined ** FUN_10b54c248(void)

{
  return &PTR_DAT_110d04dd8;
}



/* Entry: 10b54c254; end: 10b54c31f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b54c254(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b54cf44();
  func_0x00010b54cf1c();
  func_0x000107c3025c(unaff_x19 + 0x28);
  func_0x000107c3025c(unaff_x19 + 0x30);
  func_0x000107c3025c(unaff_x19 + 0x38);
  func_0x000107c3025c(unaff_x19 + 0x40);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b53cc3c(*(undefined8 *)(unaff_x19 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b53ec64(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b53ec64(*(undefined8 *)(unaff_x19 + 0x58));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b54b8f4(*(undefined8 *)(unaff_x19 + 0x60));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_10b54bd24(*(undefined8 *)(unaff_x19 + 0x68));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10b53ec64(*(undefined8 *)(unaff_x19 + 0x70));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 10b54c320; end: 10b54c72b;  */

long * FUN_10b54c320(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long unaff_x22;
  int iVar9;
  
  plVar2 = param_1;
  plVar4 = param_2;
  if (param_1[0xf] != 0) {
    param_2 = param_1;
    FUN_10b54cde4();
    plVar2 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010b54ce90();
    plVar4 = plVar2;
  }
  func_0x00010b54ce40(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54c388;
  }
  else if ((int)param_2 != 0) {
LAB_10b54c388:
    func_0x00010b54ce2c();
    param_2 = (long *)0x2;
    plVar2 = param_3;
    func_0x00010b54cdfc();
    plVar4 = plVar2;
  }
  func_0x00010b54ce40(param_1[4]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54c3c8;
  }
  else if ((int)param_2 != 0) {
LAB_10b54c3c8:
    func_0x00010b54ce2c();
    param_2 = (long *)0x3;
    plVar2 = param_3;
    func_0x00010b54cdfc();
    plVar4 = plVar2;
  }
  func_0x00010b54ce40(param_1[5]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54c408;
  }
  else if ((int)param_2 != 0) {
LAB_10b54c408:
    func_0x00010b54ce2c();
    param_2 = (long *)0x4;
    plVar2 = param_3;
    func_0x00010b54cdfc();
    plVar4 = plVar2;
  }
  plVar3 = plVar2;
  if (param_1[0x10] != 0) {
    FUN_10b54cde4();
    plVar3 = (long *)0x38;
    func_0x000107c280a8();
    func_0x00010b54ce90();
    param_2 = plVar2;
    plVar4 = plVar3;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)param_1[9];
    plVar3 = (long *)0x8;
    func_0x00010b54ce14(8,param_2,(int)param_2[3]);
    plVar4 = plVar3;
  }
  func_0x00010b54ce40(param_1[6]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54c488;
  }
  else if ((int)param_2 != 0) {
LAB_10b54c488:
    func_0x00010b54ce2c();
    param_2 = (long *)0x9;
    plVar3 = param_3;
    func_0x00010b54cdfc();
    plVar4 = plVar3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)param_1[10];
    plVar3 = (long *)0xa;
    func_0x00010b54ce14(10,param_2,(int)param_2[6]);
    plVar4 = plVar3;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = (long *)param_1[0xb];
    plVar3 = (long *)0xb;
    func_0x00010b54ce14(0xb,param_2,(int)param_2[6]);
    plVar4 = plVar3;
  }
  plVar2 = plVar3;
  if ((char)param_1[0x12] == '\x01') {
    FUN_10b54cde4();
    plVar2 = (long *)0x60;
    func_0x000107c280a8();
    func_0x00010b54ce08();
    param_2 = plVar3;
    plVar4 = plVar2;
  }
  plVar3 = plVar2;
  if ((int)param_1[0x11] != 0) {
    FUN_10b54cde4();
    plVar3 = (long *)0x68;
    func_0x000107c280a8();
    func_0x00010b54ce08();
    param_2 = plVar2;
    plVar4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)((long)param_1 + 0x8c) != 0) {
    FUN_10b54cde4();
    plVar2 = (long *)(ulong)*(uint *)((long)param_1 + 0x8c);
    param_2 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar3);
    func_0x000107c280b8();
    plVar4 = plVar2;
  }
  func_0x00010b54ce40(param_1[7]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b54c570;
  }
  else if ((int)param_2 != 0) {
LAB_10b54c570:
    func_0x00010b54ce2c();
    param_2 = (long *)0x10;
    plVar2 = param_3;
    func_0x00010b54cdfc();
    plVar4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)((long)param_1 + 0x91) == '\x01') {
    FUN_10b54cde4();
    plVar3 = (long *)0x88;
    func_0x000107c280a8();
    func_0x00010b54ce08();
    param_2 = plVar2;
    plVar4 = plVar3;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = (long *)param_1[0xc];
    plVar3 = (long *)0x12;
    func_0x00010b54ce14(0x12,param_2,(int)param_2[6]);
    plVar4 = plVar3;
  }
  func_0x00010b54ce40(param_1[8]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b54c60c;
  }
  else if ((int)param_2 == 0) goto LAB_10b54c60c;
  func_0x00010b54ce2c();
  plVar3 = param_3;
  func_0x00010b54cdfc(param_3,0x13);
  plVar4 = plVar3;
LAB_10b54c60c:
  if ((uVar1 >> 4 & 1) != 0) {
    plVar3 = (long *)0x14;
    func_0x00010b54ce14(0x14,param_1[0xd],*(undefined4 *)(param_1[0xd] + 0x14));
    plVar4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(char *)((long)param_1 + 0x92) == '\x01') {
    FUN_10b54cde4();
    plVar2 = (long *)0xa8;
    func_0x000107c280a8(0xa8,plVar3);
    func_0x00010b54ce08();
    plVar4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)((long)param_1 + 0x93) == '\x01') {
    FUN_10b54cde4();
    plVar3 = (long *)0xb0;
    func_0x000107c280a8(0xb0,plVar2);
    func_0x00010b54ce08();
    plVar4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(char *)((long)param_1 + 0x94) == '\x01') {
    FUN_10b54cde4();
    plVar2 = (long *)0xb8;
    func_0x000107c280a8(0xb8,plVar3);
    func_0x00010b54ce08();
    plVar4 = plVar2;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    plVar2 = (long *)0x18;
    func_0x00010b54ce14(0x18,param_1[0xe],*(undefined4 *)(param_1[0xe] + 0x30));
    plVar4 = plVar2;
  }
  if (param_1[0x13] != 0) {
    FUN_10b54cde4();
    plVar4 = (long *)0xc8;
    func_0x000107c280a8(200,plVar2);
    func_0x00010b54ce90();
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
    if (*param_3 - (long)plVar4 < (long)(int)uVar6) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar4) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar5 = (long)plVar4 + (long)iVar9;
        plVar4 = param_3;
        func_0x000107c303e4(param_3,lVar5);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar4 + (long)iVar8);
    }
    _memcpy(plVar4,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar4 + (long)(int)uVar6);
  }
  return plVar4;
}



/* Entry: 10b54c72c; end: 10b54c967;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b54c72c(long param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar4;
  int extraout_w9;
  ulong uVar5;
  
  lVar4 = param_1;
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b54ce74();
  }
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b54ce74();
  }
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x30));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b54ce74();
  }
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x38));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b54cf78();
  }
  func_0x00010b54ce58(*(undefined8 *)(param_1 + 0x40));
  lVar3 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b54cf78();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5291d0(*(undefined8 *)(param_1 + 0x48));
      func_0x00010b54ce74();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b54af30(*(undefined8 *)(param_1 + 0x50));
      func_0x00010b54ce74();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b54af30(*(undefined8 *)(param_1 + 0x58));
      func_0x00010b54ce74();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b54ba90(*(undefined8 *)(param_1 + 0x60));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x00010b5291ec(*(undefined8 *)(param_1 + 0x68));
      func_0x00010b54cf78();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_10b54af30(*(undefined8 *)(param_1 + 0x70));
      func_0x00010b54cf78();
    }
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x00010b54cef4(0xfffffff7);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010b54cef4();
  }
  func_0x00010b54ce80();
  func_0x00010b54ce80();
  func_0x00010b54ce80();
  func_0x00010b54ce80();
  iVar2 = extraout_w9;
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x98)) * extraout_w8 + 0x280U >> 6) + extraout_w9 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 10b54c968; end: 10b54c96b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b54c968(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b54cf6c();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x28);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x48) == 0) {
        uVar3 = uVar2;
        func_0x00010b532cd8(uVar2,*(undefined8 *)(unaff_x20 + 0x48));
        *(ulong *)(unaff_x21 + 0x48) = uVar3;
      }
      else {
        FUN_10b53cd78();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x50);
      if (lVar4 == 0) {
        func_0x00010b54ceb4(0,*(undefined8 *)(unaff_x20 + 0x50));
        *(long *)(unaff_x21 + 0x50) = lVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x58);
      if (lVar4 == 0) {
        func_0x00010b54ceb4(0,*(undefined8 *)(unaff_x20 + 0x58));
        *(long *)(unaff_x21 + 0x58) = lVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x60) == 0) {
        uVar3 = uVar2;
        FUN_10b54cd5c(uVar2,*(undefined8 *)(unaff_x20 + 0x60));
        *(ulong *)(unaff_x21 + 0x60) = uVar3;
      }
      else {
        FUN_10b54bb50();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x68) == 0) {
        func_0x00010b532d0c(uVar2,*(undefined8 *)(unaff_x20 + 0x68));
        *(ulong *)(unaff_x21 + 0x68) = uVar2;
      }
      else {
        FUN_10b54bf54();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x70);
      if (lVar4 == 0) {
        func_0x00010b54ceb4(0,*(undefined8 *)(unaff_x20 + 0x70));
        *(long *)(unaff_x21 + 0x70) = lVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x88) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x90) = 1;
  }
  if (*(char *)(unaff_x20 + 0x91) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x91) = 1;
  }
  if (*(char *)(unaff_x20 + 0x92) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x92) = 1;
  }
  if (*(char *)(unaff_x20 + 0x93) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x93) = 1;
  }
  if (*(char *)(unaff_x20 + 0x94) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x94) = 1;
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  func_0x00010b54cf84();
  if ((extraout_x8_05 & 1) == 0) {
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



/* Entry: 10b54c96c; end: 10b54cc3f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b54c96c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b54cf6c();
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x18);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x20);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x28);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010b54ce4c(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b54ce34();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0x3f) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x48) == 0) {
        uVar3 = uVar2;
        func_0x00010b532cd8(uVar2,*(undefined8 *)(unaff_x20 + 0x48));
        *(ulong *)(unaff_x21 + 0x48) = uVar3;
      }
      else {
        FUN_10b53cd78();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x50);
      if (lVar4 == 0) {
        func_0x00010b54ceb4(0,*(undefined8 *)(unaff_x20 + 0x50));
        *(long *)(unaff_x21 + 0x50) = lVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x58);
      if (lVar4 == 0) {
        func_0x00010b54ceb4(0,*(undefined8 *)(unaff_x20 + 0x58));
        *(long *)(unaff_x21 + 0x58) = lVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x60) == 0) {
        uVar3 = uVar2;
        FUN_10b54cd5c(uVar2,*(undefined8 *)(unaff_x20 + 0x60));
        *(ulong *)(unaff_x21 + 0x60) = uVar3;
      }
      else {
        FUN_10b54bb50();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x68) == 0) {
        func_0x00010b532d0c(uVar2,*(undefined8 *)(unaff_x20 + 0x68));
        *(ulong *)(unaff_x21 + 0x68) = uVar2;
      }
      else {
        FUN_10b54bf54();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x70);
      if (lVar4 == 0) {
        func_0x00010b54ceb4(0,*(undefined8 *)(unaff_x20 + 0x70));
        *(long *)(unaff_x21 + 0x70) = lVar4;
      }
      else {
        FUN_10b53eeec();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x88) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x90) = 1;
  }
  if (*(char *)(unaff_x20 + 0x91) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x91) = 1;
  }
  if (*(char *)(unaff_x20 + 0x92) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x92) = 1;
  }
  if (*(char *)(unaff_x20 + 0x93) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x93) = 1;
  }
  if (*(char *)(unaff_x20 + 0x94) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x94) = 1;
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  func_0x00010b54cf84();
  if ((extraout_x8_05 & 1) == 0) {
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



/* Entry: 10b54cc40; end: 10b54cc57;  */

void FUN_10b54cc40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x00010b54cf50();
  }
  else {
    func_0x00010b54ce9c();
  }
  *puVar1 = &PTR_FUN_110d04c58;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b54cc58; end: 10b54cd5b;  */

void FUN_10b54cc58(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b54cf50();
  }
  else {
    func_0x00010b54ce9c();
  }
  *puVar1 = &PTR_FUN_110d04c58;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = &DAT_11383d918;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b54cd5c; end: 10b54cde3;  */

undefined8 * FUN_10b54cd5c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b54cf50();
  }
  else {
    func_0x00010b54ce9c();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d04c58;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b54cea8();
  }
  lVar2 = param_2 + 0x10;
  func_0x00010b54cebc();
  puVar1[2] = lVar2;
  lVar2 = param_2 + 0x18;
  func_0x00010b54cebc();
  puVar1[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x00010b54cebc();
  puVar1[4] = lVar2;
  param_2 = param_2 + 0x28;
  func_0x00010b54cebc();
  puVar1[5] = param_2;
  *(undefined4 *)(puVar1 + 6) = 0;
  return puVar1;
}



/* Entry: 10b54cde4; end: 10b54cf97;  */

ulong * FUN_10b54cde4(void)

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



/* Entry: 10b54cf98; end: 10b54cfcb;  */

long FUN_10b54cf98(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return param_1;
}



/* Entry: 10b54cfcc; end: 10b54cfcf;  */

long FUN_10b54cfcc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return param_1;
}



/* Entry: 10b54cfd0; end: 10b54cfe3;  */

void FUN_10b54cfd0(void)

{
  FUN_10b54cf98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54cfe4; end: 10b54d007;  */

undefined ** FUN_10b54cfe4(void)

{
  return &PTR_DAT_110d04f10;
}



/* Entry: 10b54d008; end: 10b54d0e7;  */

long * FUN_10b54d008(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((int)param_1[4] == 1) {
    plVar2 = param_1;
    func_0x00010b54d5a8();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b54d5b4();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[2] != 0) {
    func_0x00010b54d5a8();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b54d5b4();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b54d5a8();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b54d5b4();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
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
  if ((long)(int)uVar4 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
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



/* Entry: 10b54d0e8; end: 10b54d1cf;  */

long FUN_10b54d0e8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x20) == 1) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b54d1d0; end: 10b54d237;  */

undefined8 * FUN_10b54d1d0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d04ed0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b54d5cc();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b54d51c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b54d238; end: 10b54d267;  */

long FUN_10b54d238(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54d268(param_1);
  return param_1;
}



/* Entry: 10b54d268; end: 10b54d283;  */

void FUN_10b54d268(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b54cf98();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54d284; end: 10b54d287;  */

long FUN_10b54d284(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54d268(param_1);
  return param_1;
}



/* Entry: 10b54d288; end: 10b54d29b;  */

void FUN_10b54d288(void)

{
  FUN_10b54d238();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54d29c; end: 10b54d2a7;  */

undefined ** FUN_10b54d29c(void)

{
  return &PTR_DAT_110d04f60;
}



/* Entry: 10b54d2a8; end: 10b54d3bb;  */

void FUN_10b54d2a8(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b54cff0(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10b54d3bc; end: 10b54d3e7;  */

long FUN_10b54d3bc(long param_1)

{
  FUN_10b54d0e8();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b54d3e8; end: 10b54d3eb;  */

void FUN_10b54d3e8(long param_1,long param_2)

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
      FUN_10b54d51c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b54d174(*(long *)(param_1 + 0x18));
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



/* Entry: 10b54d3ec; end: 10b54d47f;  */

void FUN_10b54d3ec(long param_1,long param_2)

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
      FUN_10b54d51c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b54d174(*(long *)(param_1 + 0x18));
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



/* Entry: 10b54d480; end: 10b54d48f;  */

void FUN_10b54d480(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d04e80;
  puVar1[1] = param_2;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b54d490; end: 10b54d51b;  */

void FUN_10b54d490(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d04e80;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b54d51c; end: 10b54d59f;  */

undefined8 * FUN_10b54d51c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d04e80;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b54d5cc();
  }
  *(undefined4 *)((long)puVar2 + 0x1c) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  *(int *)(puVar2 + 4) = iVar1;
  puVar2[2] = *(undefined8 *)(param_2 + 0x10);
  if (iVar1 == 1) {
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_2 + 0x18);
  }
  return puVar2;
}



/* Entry: 10b54d5a0; end: 10b54d5d7;  */

void FUN_10b54d5a0(void)

{
  return;
}



/* Entry: 10b54d5d8; end: 10b54d6d7;  */

undefined8 * FUN_10b54d5d8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d04fe8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  func_0x000107c282d4(param_1 + 3,param_2,param_3 + 0x18);
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_10b505e04(param_1 + 6,param_2,param_3 + 0x30);
  FUN_10b504dcc(param_1 + 10,param_2,param_3 + 0x50);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010b537450(param_2,*(undefined8 *)(param_3 + 0x70));
  }
  param_1[0xe] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b537494(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  param_1[0xf] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x88);
  uVar2 = *(undefined8 *)(param_3 + 0x80);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_3 + 0x90);
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar2;
  return param_1;
}



/* Entry: 10b54d6d8; end: 10b54d707;  */

long FUN_10b54d6d8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54d708(param_1);
  return param_1;
}



/* Entry: 10b54d708; end: 10b54d747;  */

long FUN_10b54d708(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b54a368();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b5047f8();
  }
  __ZdlPv();
  FUN_10b504e1c(param_1 + 0x50);
  FUN_10b505e44(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b54d748; end: 10b54d74b;  */

long FUN_10b54d748(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b54d708(param_1);
  return param_1;
}



/* Entry: 10b54d74c; end: 10b54d75f;  */

void FUN_10b54d74c(void)

{
  FUN_10b54d6d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b54d760; end: 10b54d76b;  */

undefined ** FUN_10b54d760(void)

{
  return &PTR_DAT_110d05028;
}



/* Entry: 10b54d76c; end: 10b54d7e3;  */

void FUN_10b54d76c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_10b505f5c(param_1 + 0x30);
  func_0x00010b504e9c(param_1 + 0x50);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b54a3f4(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b50488c(*(undefined8 *)(param_1 + 0x78));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
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



/* Entry: 10b54d7e4; end: 10b54dacf;  */

long ** FUN_10b54d7e4(long **param_1,long **param_2,long **param_3)

{
  long *plVar1;
  long **pplVar2;
  undefined8 uVar3;
  long **pplVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long *plStack_68;
  long *aplStack_60 [2];
  
  pplVar2 = param_1;
  if (param_1[0x10] != (long *)0x0) {
    pplVar2 = param_3;
    func_0x000105991a14(param_3,param_1[0x10],param_2);
    param_2 = pplVar2;
  }
  uVar8 = *(uint *)(param_1 + 5);
  if (uVar8 != 0) {
    FUN_10b54de28();
    pbVar7 = (byte *)((long)pplVar2 + 2);
    *(byte *)pplVar2 = 0x12;
    for (; 0x7f < uVar8; uVar8 = uVar8 >> 7) {
      pbVar7[-1] = (byte)uVar8 | 0x80;
      pbVar7 = pbVar7 + 1;
    }
    pbVar7[-1] = (byte)uVar8;
    plVar9 = param_1[4];
    plVar1 = (long *)((long)plVar9 + (long)*(int *)(param_1 + 3) * 4);
    do {
      FUN_10b54de28();
      uVar6 = (ulong)(int)*plVar9;
      pplVar4 = pplVar2;
      while( true ) {
        param_2 = (long **)((long)pplVar4 + 1);
        if (uVar6 < 0x80) break;
        *(byte *)pplVar4 = (byte)uVar6 | 0x80;
        uVar6 = uVar6 >> 7;
        pplVar4 = param_2;
      }
      plVar9 = (long *)((long)plVar9 + 4);
      *(byte *)pplVar4 = (byte)uVar6;
    } while (plVar9 < plVar1);
  }
  uVar8 = *(uint *)(param_1 + 2);
  if ((uVar8 & 1) != 0) {
    pplVar2 = (long **)0x3;
    func_0x00010b54de48(3,param_1[0xe],(int)param_1[0xe][6]);
    func_0x000107c303cc();
    param_2 = pplVar2;
  }
  if ((uVar8 >> 1 & 1) != 0) {
    pplVar2 = (long **)0x4;
    func_0x00010b54de48(4,param_1[0xf],*(undefined4 *)((long)param_1[0xf] + 0x1c));
    func_0x000107c303cc();
    param_2 = pplVar2;
  }
  if (param_1[0x11] != (long *)0x0) {
    pplVar2 = param_3;
    func_0x000107c282c4(param_3,param_1[0x11],param_2);
    param_2 = pplVar2;
  }
  if (*(int *)(param_1 + 6) != 0) {
    if ((*(int *)(param_1 + 6) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b54de64();
      pplVar4 = pplVar2;
      while (pplVar2 = pplVar4, plStack_68 != (long *)0x0) {
        func_0x00010b54de34();
        pplVar4 = pplVar2;
        func_0x00010b54de54();
        func_0x00010b54de6c();
        param_2 = pplVar2;
      }
    }
    else {
      pplVar2 = &plStack_68;
      FUN_10b505fc4(pplVar2);
      for (lVar10 = (long)plStack_68 << 3; pplVar4 = pplVar2, lVar10 != 0; lVar10 = lVar10 + -8) {
        func_0x00010b54de34();
        pplVar2 = pplVar4;
        func_0x00010b54de54();
        param_2 = pplVar4;
      }
      pplVar2 = aplStack_60;
      func_0x000105991ac8(pplVar2);
    }
  }
  if (*(int *)(param_1 + 0x12) != 0) {
    FUN_10b54de28();
    param_2 = (long **)(ulong)*(uint *)(param_1 + 0x12);
    uVar3 = 0x38;
    func_0x000107c280a8(0x38,pplVar2);
    func_0x000107c280b8(param_2,uVar3);
  }
  if (*(int *)(param_1 + 10) != 0) {
    if ((*(int *)(param_1 + 10) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010b54de64();
      while (plStack_68 != (long *)0x0) {
        param_2 = (long **)0x8;
        func_0x00010b54de48(8,plStack_68 + 1,plStack_68 + 2);
        FUN_10b504cf0();
        func_0x00010b54de6c();
      }
    }
    else {
      FUN_10b504ec0(&plStack_68);
      for (lVar10 = (long)plStack_68 << 4; lVar10 != 0; lVar10 = lVar10 + -0x10) {
        param_2 = (long **)0x8;
        func_0x00010b54de48(8,aplStack_60[0][1],aplStack_60[0][1] + 8);
        FUN_10b504cf0();
        aplStack_60[0] = aplStack_60[0] + 2;
      }
      FUN_10b504e60(aplStack_60);
    }
  }
  if (((ulong)param_1[1] & 1) != 0) {
    uVar6 = (ulong)param_1[1] & 0xfffffffffffffffe;
    lVar10 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar10 < 0) {
      lVar5 = *(long *)(uVar6 + 8);
      lVar10 = *(long *)(uVar6 + 0x10);
    }
    else {
      lVar5 = uVar6 + 8;
    }
    func_0x0001053930c4(param_3,lVar5,lVar10,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b54dad0; end: 10b54dc57;  */

/* WARNING: Removing unreachable block (ram,0x00010b54db98) */

long FUN_10b54dad0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_48;
  
  lVar3 = 0;
  lVar2 = 0;
  for (lVar5 = (long)*(int *)(param_1 + 0x18); lVar5 != 0; lVar5 = lVar5 + -1) {
    lVar2 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x20) + (lVar3 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar2;
    lVar3 = lVar3 + 0x100000000;
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + (ulong)((int)LZCOUNT((long)(int)lVar2) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar2;
  lVar3 = lVar3 + (ulong)*(uint *)(param_1 + 0x30);
  func_0x00010b54de64();
  while (uStack_48 != 0) {
    lVar2 = uStack_48 + 8;
    func_0x00010b505c94(lVar2,uStack_48 + 0x20);
    lVar3 = lVar2 + lVar3;
    func_0x00010b54de6c();
  }
  lVar3 = lVar3 + (ulong)*(uint *)(param_1 + 0x50);
  func_0x00010b54de64();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x70);
      FUN_10b5371f0();
      lVar3 = lVar3 + lVar2 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x78);
      func_0x00010b53720c();
      lVar3 = lVar3 + lVar2 + 1;
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x00010b54de74();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x00010b54de74();
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x90)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar4 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b54dc58; end: 10b54dc5b;  */

void FUN_10b54dc58(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  FUN_10b506100(param_1 + 0x30,param_2 + 0x30);
  FUN_10b505080(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar3;
        func_0x00010b537450(uVar3,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        func_0x00010b537494(uVar3,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar3;
      }
      else {
        func_0x00010b5047b8();
      }
    }
  }
  if (*(long *)(param_2 + 0x80) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_2 + 0x80);
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
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



/* Entry: 10b54dc5c; end: 10b54dd73;  */

void FUN_10b54dc5c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(param_1 + 0x18,param_2 + 0x18);
  FUN_10b506100(param_1 + 0x30,param_2 + 0x30);
  FUN_10b505080(param_1 + 0x50,param_2 + 0x50);
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
        uVar2 = uVar3;
        func_0x00010b537450(uVar3,*(undefined8 *)(param_2 + 0x70));
        *(ulong *)(param_1 + 0x70) = uVar2;
      }
      else {
        FUN_10b54a65c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        func_0x00010b537494(uVar3,*(undefined8 *)(param_2 + 0x78));
        *(ulong *)(param_1 + 0x78) = uVar3;
      }
      else {
        func_0x00010b5047b8();
      }
    }
  }
  if (*(long *)(param_2 + 0x80) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_2 + 0x80);
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
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



/* Entry: 10b54dd74; end: 10b54dd7b;  */

void FUN_10b54dd74(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x98;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x98);
  }
  *puVar1 = &PTR_FUN_110d04fe8;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[7] = 0x100000000;
  puVar1[6] = 0x100000000;
  puVar1[8] = &DAT_10e5b4a18;
  puVar1[9] = param_2;
  puVar1[0xb] = 0x100000000;
  puVar1[10] = 0x100000000;
  puVar1[0xc] = &DAT_10e5b4a18;
  puVar1[0xd] = param_2;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  return;
}


