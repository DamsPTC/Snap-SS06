/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5d6d3c; end: 10b5d6d47;  */

undefined ** FUN_10b5d6d3c(void)

{
  return &PTR_DAT_110d246f8;
}



/* Entry: 10b5d6d48; end: 10b5d6d87;  */

void FUN_10b5d6d48(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  func_0x000107c3025c(param_1 + 0x40);
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



/* Entry: 10b5d6d88; end: 10b5d6fcf;  */

long * FUN_10b5d6d88(long *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  int iVar13;
  
  puVar11 = (undefined8 *)(param_1[8] & 0xfffffffffffffffc);
  lVar7 = (long)*(char *)((long)puVar11 + 0x17);
  plVar5 = param_1;
  if (lVar7 < 0) {
    lVar7 = puVar11[1];
    if (lVar7 == 0) goto LAB_10b5d6df8;
    puVar4 = (undefined8 *)*puVar11;
  }
  else {
    puVar4 = puVar11;
    if (*(char *)((long)puVar11 + 0x17) == '\0') goto LAB_10b5d6df8;
  }
  func_0x000107c303d4(puVar4,lVar7,1,&UNK_10f77f37a);
  plVar5 = param_3;
  func_0x000107c280a0(param_3,1,puVar11,param_2);
  param_2 = plVar5;
LAB_10b5d6df8:
  uVar3 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar3) {
    func_0x00010b5d7454();
    *(undefined1 *)plVar5 = 0x12;
    plVar6 = plVar5;
    while (0x7f < uVar3) {
      func_0x00010b5d7494();
    }
    *(char *)((long)plVar5 + 1) = (char)uVar3;
    piVar12 = (int *)param_1[3];
    piVar2 = piVar12 + (int)param_1[2];
    do {
      func_0x00010b5d7454();
      uVar8 = (ulong)*piVar12;
      param_2 = (long *)((long)plVar6 + 1);
      plVar5 = plVar6;
      while (0x7f < uVar8) {
        func_0x00010b5d74a8();
        uVar8 = extraout_x8;
      }
      piVar12 = piVar12 + 1;
      *(char *)plVar6 = (char)uVar8;
      plVar6 = plVar5;
    } while (piVar12 < piVar2);
  }
  uVar3 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar3) {
    func_0x00010b5d7454();
    *(undefined1 *)plVar5 = 0x1a;
    plVar6 = plVar5;
    while (0x7f < uVar3) {
      func_0x00010b5d7494();
    }
    *(char *)((long)plVar5 + 1) = (char)uVar3;
    piVar12 = (int *)param_1[6];
    piVar2 = piVar12 + (int)param_1[5];
    do {
      func_0x00010b5d7454();
      uVar8 = (ulong)*piVar12;
      param_2 = (long *)((long)plVar6 + 1);
      plVar5 = plVar6;
      while (0x7f < uVar8) {
        func_0x00010b5d74a8();
        uVar8 = extraout_x8_00;
      }
      piVar12 = piVar12 + 1;
      *(char *)plVar6 = (char)uVar8;
      plVar6 = plVar5;
    } while (piVar12 < piVar2);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar9 = param_1[1] & 0xfffffffffffffffe;
    uVar8 = (ulong)*(char *)(uVar9 + 0x1f);
    if ((long)uVar8 < 0) {
      lVar7 = *(long *)(uVar9 + 8);
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      lVar7 = uVar9 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar8) {
      while( true ) {
        iVar13 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar10 = (int)uVar8;
        uVar8 = (ulong)(uint)(iVar10 - iVar13);
        if (iVar10 - iVar13 == 0 || iVar10 < iVar13) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar13);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar10);
    }
    _memcpy(param_2,lVar7,uVar8 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar8);
  }
  return param_2;
}



/* Entry: 10b5d6fd0; end: 10b5d7047;  */

void FUN_10b5d6fd0(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d7480();
  func_0x000107c282d0();
  func_0x000107c282d0(unaff_x19 + 0x28,unaff_x20 + 0x28);
  uVar1 = *(ulong *)(unaff_x20 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(unaff_x19 + 0x40,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b5d7048; end: 10b5d70af;  */

undefined8 * FUN_10b5d7048(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d246b8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5d7330(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b5d70b0; end: 10b5d70df;  */

long FUN_10b5d70b0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5d735c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d70e0; end: 10b5d70e3;  */

long FUN_10b5d70e0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5d735c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d70e4; end: 10b5d70f7;  */

void FUN_10b5d70e4(void)

{
  FUN_10b5d70b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d70f8; end: 10b5d7103;  */

undefined ** FUN_10b5d70f8(void)

{
  return &PTR_DAT_110d24750;
}



/* Entry: 10b5d7104; end: 10b5d7147;  */

void FUN_10b5d7104(long param_1)

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



/* Entry: 10b5d7148; end: 10b5d727b;  */

long * FUN_10b5d7148(long param_1,long *param_2,long *param_3)

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
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x48),param_2,param_3);
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



/* Entry: 10b5d727c; end: 10b5d727f;  */

void FUN_10b5d727c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d7480();
  FUN_10b5d72bc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b5d7280; end: 10b5d72bb;  */

void FUN_10b5d7280(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d7480();
  FUN_10b5d72bc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b5d72bc; end: 10b5d72cb;  */

void FUN_10b5d72bc(long *param_1,long param_2)

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



/* Entry: 10b5d72cc; end: 10b5d7303;  */

void FUN_10b5d72cc(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_10b5d7104();
  func_0x00010b5d7480(param_1,param_2);
  FUN_10b5d72bc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 10b5d7304; end: 10b5d732f;  */

undefined1  [16] FUN_10b5d7304(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 10b5d7330; end: 10b5d735b;  */

undefined8 * FUN_10b5d7330(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5d72bc(param_1,param_3);
  return param_1;
}



/* Entry: 10b5d735c; end: 10b5d738b;  */

long * FUN_10b5d735c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5d738c; end: 10b5d7443;  */

void FUN_10b5d738c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  *puVar1 = &PTR_FUN_110d24668;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = param_1;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = param_1;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 9) = 0;
  return;
}



/* Entry: 10b5d7444; end: 10b5d74bb;  */

void FUN_10b5d7444(void)

{
  return;
}



/* Entry: 10b5d74bc; end: 10b5d74e7;  */

undefined8 * FUN_10b5d74bc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110d247e8;
  param_1[1] = param_2;
  FUN_10b5d74e8();
  return param_1;
}



/* Entry: 10b5d74e8; end: 10b5d750b;  */

void FUN_10b5d74e8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined **)(param_1 + 0x28) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x30) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x38) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x40) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x48) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x50) = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 10b5d750c; end: 10b5d75c7;  */

undefined8 * FUN_10b5d750c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d247e8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(param_1 + 2,param_2,param_3 + 0x10);
  lVar1 = param_3 + 0x28;
  func_0x00010b5d8168();
  param_1[5] = lVar1;
  lVar1 = param_3 + 0x30;
  func_0x00010b5d8168();
  param_1[6] = lVar1;
  lVar1 = param_3 + 0x38;
  func_0x00010b5d8168();
  param_1[7] = lVar1;
  lVar1 = param_3 + 0x40;
  func_0x00010b5d8168();
  param_1[8] = lVar1;
  lVar1 = param_3 + 0x48;
  func_0x00010b5d8168();
  param_1[9] = lVar1;
  param_3 = param_3 + 0x50;
  func_0x00010b5d8168();
  param_1[10] = param_3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return param_1;
}



/* Entry: 10b5d75c8; end: 10b5d75f3;  */

undefined8 FUN_10b5d75c8(undefined8 param_1)

{
  func_0x00010b5d81b4();
  FUN_10b5d75f4(param_1);
  return param_1;
}



/* Entry: 10b5d75f4; end: 10b5d7643;  */

long * FUN_10b5d75f4(long param_1)

{
  long *plVar1;
  
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5d7644; end: 10b5d7647;  */

undefined8 FUN_10b5d7644(undefined8 param_1)

{
  func_0x00010b5d81b4();
  FUN_10b5d75f4(param_1);
  return param_1;
}



/* Entry: 10b5d7648; end: 10b5d765b;  */

void FUN_10b5d7648(void)

{
  FUN_10b5d75c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d765c; end: 10b5d7667;  */

undefined ** FUN_10b5d765c(void)

{
  return &PTR_DAT_110d248c8;
}



/* Entry: 10b5d7668; end: 10b5d76cf;  */

void FUN_10b5d7668(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
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



/* Entry: 10b5d76d0; end: 10b5d79b3;  */

long * FUN_10b5d76d0(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long unaff_x22;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  
  plVar6 = param_2;
  func_0x00010b5d8170(*(undefined8 *)(param_1 + 0x28));
  if ((long)plVar6 < 0) {
    plVar6 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5d771c;
  }
  else if ((int)plVar6 != 0) {
LAB_10b5d771c:
    func_0x00010b5d8160();
    plVar6 = (long *)0x1;
    param_2 = param_3;
    func_0x00010b5d813c();
  }
  lVar13 = 8;
  puVar5 = &UNK_10f77f400;
  for (uVar12 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
      uVar12 = uVar12 - 1) {
    uVar8 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar8 & 1) != 0) {
      puVar2 = (ulong *)(uVar8 + lVar13 + -1);
    }
    plVar10 = (long *)*puVar2;
    lVar7 = (long)*(char *)((long)plVar10 + 0x17);
    plVar6 = plVar10;
    if (lVar7 < 0) {
      lVar7 = plVar10[1];
      plVar6 = (long *)*plVar10;
    }
    func_0x000107c303d4(plVar6,lVar7,1,&UNK_10f77f400);
    lVar7 = (long)*(char *)((long)plVar10 + 0x17);
    if (((lVar7 < 0) && (lVar7 = plVar10[1], 0x7f < lVar7)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar7)) {
      plVar6 = (long *)0x2;
      plVar3 = param_3;
      func_0x00010b4d5120(param_3,2,plVar10,param_2);
    }
    else {
      *(undefined1 *)param_2 = 0x12;
      *(char *)((long)param_2 + 1) = (char)lVar7;
      plVar6 = plVar10;
      if (*(char *)((long)plVar10 + 0x17) < '\0') {
        plVar6 = (long *)*plVar10;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),plVar6,lVar7);
      plVar3 = (long *)((undefined1 *)((long)param_2 + 2) + lVar7);
    }
    lVar13 = lVar13 + 8;
    param_2 = plVar3;
  }
  func_0x00010b5d8170(*(undefined8 *)(param_1 + 0x30));
  if ((long)plVar6 < 0) {
    puVar4 = (undefined *)0x7461686370616e73;
LAB_10b5d7834:
    func_0x00010b5d8160(puVar4);
    plVar6 = (long *)0x3;
    param_2 = param_3;
    func_0x00010b5d813c();
  }
  else {
    puVar4 = puVar5;
    if ((int)plVar6 != 0) goto LAB_10b5d7834;
  }
  func_0x00010b5d8170(*(undefined8 *)(param_1 + 0x38));
  if ((long)plVar6 < 0) {
    puVar4 = (undefined *)0x7461686370616e73;
LAB_10b5d7874:
    func_0x00010b5d8160(puVar4);
    plVar6 = (long *)0x4;
    param_2 = param_3;
    func_0x00010b5d813c();
  }
  else {
    puVar4 = puVar5;
    if ((int)plVar6 != 0) goto LAB_10b5d7874;
  }
  func_0x00010b5d8170(*(undefined8 *)(param_1 + 0x40));
  if ((long)plVar6 < 0) {
    puVar4 = (undefined *)0x7461686370616e73;
LAB_10b5d78b4:
    func_0x00010b5d8160(puVar4);
    plVar6 = (long *)0x5;
    param_2 = param_3;
    func_0x00010b5d813c();
  }
  else {
    puVar4 = puVar5;
    if ((int)plVar6 != 0) goto LAB_10b5d78b4;
  }
  func_0x00010b5d8170(*(undefined8 *)(param_1 + 0x48));
  if ((long)plVar6 < 0) {
    puVar4 = (undefined *)0x7461686370616e73;
LAB_10b5d78f4:
    func_0x00010b5d8160(puVar4);
    plVar6 = (long *)0x6;
    param_2 = param_3;
    func_0x00010b5d813c();
  }
  else {
    puVar4 = puVar5;
    if ((int)plVar6 != 0) goto LAB_10b5d78f4;
  }
  func_0x00010b5d8170(*(undefined8 *)(param_1 + 0x50));
  if ((long)plVar6 < 0) {
    puVar5 = (undefined *)0x7461686370616e73;
  }
  else if ((int)plVar6 == 0) goto LAB_10b5d7950;
  func_0x00010b5d8160(puVar5);
  param_2 = param_3;
  func_0x00010b5d813c(param_3,7);
LAB_10b5d7950:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar12 = (ulong)*(char *)(uVar8 + 0x1f);
  if ((long)uVar12 < 0) {
    lVar13 = *(long *)(uVar8 + 8);
    uVar12 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    lVar13 = uVar8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar12) {
    while( true ) {
      iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar9 = (int)uVar12;
      uVar12 = (ulong)(uint)(iVar9 - iVar11);
      if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
      func_0x00010b4d5738();
      puVar1 = (undefined1 *)((long)param_2 + (long)iVar11);
      param_2 = param_3;
      func_0x000107c303e4(param_3,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar9);
  }
  _memcpy(param_2,lVar13,uVar12 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar12);
}



/* Entry: 10b5d79b4; end: 10b5d7ae3;  */

ulong FUN_10b5d79b4(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulong)uVar2;
  lVar6 = 8;
  uVar3 = param_1;
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
  func_0x00010b5d8190(*(undefined8 *)(param_1 + 0x28));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b5d8184();
  }
  func_0x00010b5d8190(*(undefined8 *)(param_1 + 0x30));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b5d8184();
  }
  func_0x00010b5d8190(*(undefined8 *)(param_1 + 0x38));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b5d8184();
  }
  func_0x00010b5d8190(*(undefined8 *)(param_1 + 0x40));
  lVar6 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b5d8184();
  }
  func_0x00010b5d8190(*(undefined8 *)(param_1 + 0x48));
  lVar6 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b5d8184();
  }
  func_0x00010b5d8190(*(undefined8 *)(param_1 + 0x50));
  lVar6 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar6 = *(long *)(uVar3 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    func_0x00010b5d8184();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x58) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b5d7ae4; end: 10b5d7ae7;  */

void FUN_10b5d7ae4(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  
  lVar1 = param_2 + 0x10;
  func_0x00010598fce8(param_1 + 0x10);
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x40));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x48));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x50));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x50);
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



/* Entry: 10b5d7ae8; end: 10b5d7c57;  */

void FUN_10b5d7ae8(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  
  lVar1 = param_2 + 0x10;
  func_0x00010598fce8(param_1 + 0x10);
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x38);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x40));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x40);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x48));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x48);
  }
  func_0x00010b5d81a8(*(undefined8 *)(param_2 + 0x50));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x00010b5d819c();
    }
    func_0x000107c30248(param_1 + 0x50);
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



/* Entry: 10b5d7c58; end: 10b5d7c83;  */

long FUN_10b5d7c58(long param_1)

{
  func_0x00010b5d81b4();
  FUN_10b5d803c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d7c84; end: 10b5d7c87;  */

long FUN_10b5d7c84(long param_1)

{
  func_0x00010b5d81b4();
  FUN_10b5d803c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d7c88; end: 10b5d7c9b;  */

void FUN_10b5d7c88(void)

{
  FUN_10b5d7c58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d7c9c; end: 10b5d7ca7;  */

undefined ** FUN_10b5d7c9c(void)

{
  return &PTR_DAT_110d24920;
}



/* Entry: 10b5d7ca8; end: 10b5d7ceb;  */

void FUN_10b5d7ca8(long param_1)

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



/* Entry: 10b5d7cec; end: 10b5d7e2b;  */

long * FUN_10b5d7cec(long param_1,long *param_2,long *param_3)

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
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x18),param_2,param_3);
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



/* Entry: 10b5d7e2c; end: 10b5d7e7b;  */

void FUN_10b5d7e2c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5d7e7c; end: 10b5d7e9f;  */

undefined8 FUN_10b5d7e7c(undefined8 param_1)

{
  func_0x00010b5d81b4();
  return param_1;
}



/* Entry: 10b5d7ea0; end: 10b5d7ea3;  */

undefined8 FUN_10b5d7ea0(undefined8 param_1)

{
  func_0x00010b5d81b4();
  return param_1;
}



/* Entry: 10b5d7ea4; end: 10b5d7eb7;  */

void FUN_10b5d7ea4(void)

{
  FUN_10b5d7e7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d7eb8; end: 10b5d7ed7;  */

undefined ** FUN_10b5d7eb8(void)

{
  return &PTR_DAT_110d24970;
}



/* Entry: 10b5d7ed8; end: 10b5d7f7f;  */

long * FUN_10b5d7ed8(long param_1,long *param_2,long *param_3)

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
  plVar1 = param_2;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),param_2);
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



/* Entry: 10b5d7f80; end: 10b5d803b;  */

long FUN_10b5d7f80(long param_1)

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



/* Entry: 10b5d803c; end: 10b5d806b;  */

long * FUN_10b5d803c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5d806c; end: 10b5d813b;  */

undefined8 * FUN_10b5d806c(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d247e8;
  puVar1[1] = param_1;
  FUN_10b5d74e8();
  return puVar1;
}



/* Entry: 10b5d813c; end: 10b5d81f3;  */

long * FUN_10b5d813c(long *param_1,undefined8 param_2)

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



/* Entry: 10b5d81f4; end: 10b5d8227;  */

long FUN_10b5d81f4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d8228; end: 10b5d822b;  */

long FUN_10b5d8228(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000105991a90(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d822c; end: 10b5d823f;  */

void FUN_10b5d822c(void)

{
  FUN_10b5d81f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d8240; end: 10b5d824b;  */

undefined ** FUN_10b5d8240(void)

{
  return &PTR_DAT_110d24a58;
}



/* Entry: 10b5d824c; end: 10b5d8287;  */

void FUN_10b5d824c(long param_1)

{
  ulong *puVar1;
  
  func_0x000105991b74(param_1 + 0x10);
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



/* Entry: 10b5d8288; end: 10b5d8407;  */

long * FUN_10b5d8288(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(int *)(param_1 + 0x10) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      plVar3 = &lStack_78;
      func_0x00010564c19c(plVar3);
      while (plVar4 = plVar3, lVar10 = lStack_78, lStack_78 != 0) {
        lVar5 = lStack_78 + 8;
        lVar8 = lStack_78 + 0x20;
        func_0x00010b5d857c();
        lVar6 = (long)*(char *)(lVar10 + 0x1f);
        if (lVar6 < 0) {
          lVar5 = *(long *)(lVar10 + 8);
          lVar6 = *(long *)(lVar10 + 0x10);
        }
        func_0x00010b5d8570(lVar5,lVar6);
        lVar5 = (long)*(char *)(lVar10 + 0x37);
        if (lVar5 < 0) {
          lVar8 = *(long *)(lVar10 + 0x20);
          lVar5 = *(long *)(lVar10 + 0x28);
        }
        func_0x00010b5d8570(lVar8,lVar5);
        plVar3 = &lStack_78;
        func_0x000107c27d54(plVar3);
        param_2 = plVar4;
      }
    }
    else {
      plVar3 = &lStack_78;
      func_0x000105991b98(plVar3);
      puVar1 = apuStack_70[0];
      for (lVar10 = lStack_78 << 3; plVar4 = plVar3, lVar10 != 0; lVar10 = lVar10 + -8) {
        puVar9 = (undefined8 *)*puVar1;
        plVar3 = puVar9 + 3;
        func_0x00010b5d857c();
        lVar5 = (long)*(char *)((long)puVar9 + 0x17);
        puVar2 = puVar9;
        if (lVar5 < 0) {
          lVar5 = puVar9[1];
          puVar2 = (undefined8 *)*puVar9;
        }
        func_0x00010b5d8570(puVar2,lVar5);
        lVar5 = (long)*(char *)((long)puVar9 + 0x2f);
        if (lVar5 < 0) {
          plVar3 = (long *)puVar9[3];
          lVar5 = puVar9[4];
        }
        func_0x00010b5d8570(plVar3,lVar5);
        puVar1 = puVar1 + 1;
        param_2 = plVar4;
      }
      func_0x000105991ac8(apuStack_70);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar10 = (long)*(char *)(uVar7 + 0x1f);
    if (lVar10 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      lVar10 = *(long *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    func_0x0001053930c4(param_3,lVar5,lVar10,param_2);
    param_2 = param_3;
  }
  return param_2;
}



/* Entry: 10b5d8408; end: 10b5d8487;  */

ulong FUN_10b5d8408(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long alStack_38 [3];
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  func_0x00010564c19c(alStack_38);
  while (alStack_38[0] != 0) {
    lVar1 = alStack_38[0] + 8;
    func_0x000105990b3c(lVar1,alStack_38[0] + 0x20);
    uVar3 = lVar1 + uVar3;
    func_0x000107c27d54(alStack_38);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    uVar3 = lVar1 + uVar3;
  }
  *(int *)(param_1 + 0x30) = (int)uVar3;
  return uVar3;
}



/* Entry: 10b5d8488; end: 10b5d848b;  */

void FUN_10b5d8488(long param_1,long param_2)

{
  func_0x0001059929d4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5d848c; end: 10b5d850f;  */

void FUN_10b5d848c(long param_1,long param_2)

{
  func_0x0001059929d4(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 10b5d8510; end: 10b5d8533;  */

void FUN_10b5d8510(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  return;
}



/* Entry: 10b5d8534; end: 10b5d856f;  */

void FUN_10b5d8534(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d24a18;
  puVar1[1] = param_1;
  puVar1[3] = 0x100000000;
  puVar1[2] = 0x100000000;
  puVar1[4] = &DAT_10e5b4a18;
  puVar1[5] = param_1;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b5d8570; end: 10b5d863f;  */

/* WARNING: Removing unreachable block (ram,0x0001006281e8) */

ulong FUN_10b5d8570(ulong param_1,int param_2)

{
  func_0x00010029f6ec(param_1,(long)param_2);
  if ((param_1 & 1) == 0) {
    func_0x000107c613d0();
    func_0x000107c303d0(&UNK_10f7741f2,0);
  }
  return param_1;
}



/* Entry: 10b5d8640; end: 10b5d8667;  */

long FUN_10b5d8640(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5d8668; end: 10b5d86b7;  */

undefined8 * FUN_10b5d8668(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d24ad8;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  func_0x00010b5d8594(param_1,param_3);
  return param_1;
}



/* Entry: 10b5d86b8; end: 10b5d86bb;  */

long FUN_10b5d86b8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b5d86bc; end: 10b5d86cf;  */

void FUN_10b5d86bc(void)

{
  FUN_10b5d8640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d86d0; end: 10b5d86ff;  */

undefined ** FUN_10b5d86d0(void)

{
  return &PTR_DAT_110d24b68;
}



/* Entry: 10b5d8700; end: 10b5d889f;  */

long * FUN_10b5d8700(long *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  plVar2 = param_1;
  if ((int)param_1[2] != 0) {
    plVar3 = param_1;
    FUN_10b5d8d44();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar3);
    func_0x00010b5d8d70();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    FUN_10b5d8d44();
    uVar1 = *(undefined4 *)((long)param_1 + 0x14);
    plVar3 = (long *)0x15;
    func_0x000107c280a8(0x15,plVar2);
    param_2 = (long *)((long)plVar3 + 4);
    *(undefined4 *)plVar3 = uVar1;
  }
  if (param_1[3] != 0) {
    func_0x00010b5d8d88();
    func_0x00010599ccb0();
    param_2 = plVar3;
  }
  if (param_1[4] != 0) {
    func_0x00010b5d8d88();
    func_0x000106af68d0();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if ((int)param_1[5] != 0) {
    FUN_10b5d8d44();
    lVar4 = param_1[5];
    plVar2 = (long *)0x3d;
    func_0x000107c280a8(0x3d,plVar3);
    param_2 = (long *)((long)plVar2 + 4);
    *(int *)plVar2 = (int)lVar4;
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    FUN_10b5d8d44();
    uVar1 = *(undefined4 *)((long)param_1 + 0x2c);
    plVar3 = (long *)0x45;
    func_0x000107c280a8(0x45,plVar2);
    param_2 = (long *)((long)plVar3 + 4);
    *(undefined4 *)plVar3 = uVar1;
  }
  if ((int)param_1[6] != 0) {
    func_0x00010b5d8d88();
    func_0x000108b3207c();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)((long)param_1 + 0x34) != 0) {
    FUN_10b5d8d44();
    plVar2 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar3);
    func_0x00010b5d8d70();
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (param_1[7] != 0) {
    FUN_10b5d8d44();
    plVar3 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar2);
    func_0x00010b5d8d64();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (param_1[8] != 0) {
    FUN_10b5d8d44();
    plVar2 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar3);
    func_0x00010b5d8d64();
    param_2 = plVar2;
  }
  if ((int)param_1[9] != 0) {
    func_0x00010b5d8d88();
    func_0x000109320b88();
    param_2 = plVar2;
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



/* Entry: 10b5d88a0; end: 10b5d89d7;  */

long FUN_10b5d88a0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x38)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x4c) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5d89d8; end: 10b5d8a3f;  */

undefined8 * FUN_10b5d89d8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d24b28;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar1 = param_3 + 0x10;
  func_0x000107c2809c(lVar1,param_2);
  param_1[2] = lVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x18);
  return param_1;
}



/* Entry: 10b5d8a40; end: 10b5d8a6f;  */

long FUN_10b5d8a40(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d8a70; end: 10b5d8a73;  */

long FUN_10b5d8a70(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5d8a74; end: 10b5d8a87;  */

void FUN_10b5d8a74(void)

{
  FUN_10b5d8a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d8a88; end: 10b5d8a93;  */

undefined ** FUN_10b5d8a88(void)

{
  return &PTR_DAT_110d24b98;
}



/* Entry: 10b5d8a94; end: 10b5d8ad3;  */

void FUN_10b5d8a94(long param_1)

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



/* Entry: 10b5d8ad4; end: 10b5d8b93;  */

long * FUN_10b5d8ad4(long param_1,long *param_2,long *param_3)

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
    if (lVar3 == 0) goto LAB_10b5d8b40;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b5d8b40;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77f605);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b5d8b40:
  plVar2 = param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar2 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x18),param_2);
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



/* Entry: 10b5d8b94; end: 10b5d8c1b;  */

void FUN_10b5d8b94(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_10b5d8bcc;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_10b5d8bcc:
    iVar1 = 0;
    goto LAB_10b5d8bd0;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_10b5d8bd0:
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



/* Entry: 10b5d8c1c; end: 10b5d8c1f;  */

void FUN_10b5d8c1c(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10b5d8c20; end: 10b5d8c9b;  */

void FUN_10b5d8c20(long param_1,long param_2)

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
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 10b5d8c9c; end: 10b5d8cab;  */

void FUN_10b5d8c9c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x50);
  }
  *puVar1 = &PTR_FUN_110d24ad8;
  puVar1[1] = param_2;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  return;
}



/* Entry: 10b5d8cac; end: 10b5d8d43;  */

void FUN_10b5d8cac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  *puVar1 = &PTR_FUN_110d24ad8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  return;
}



/* Entry: 10b5d8d44; end: 10b5d8d93;  */

ulong * FUN_10b5d8d44(void)

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



/* Entry: 10b5d8d94; end: 10b5d8d9b; -[SCContextAwareAppStartupThrottleRequest shouldSuspendGlobalConcurrentPerformer] */

undefined8 FUN_10b5d8d94(void)

{
  return 1;
}



/* Entry: 10b5d8d9c; end: 10b5d8da3; -[SCContextAwareAppStartupThrottleRequest isAppStartupThrottleRequest] */

undefined8 FUN_10b5d8d9c(void)

{
  return 1;
}



/* Entry: 10b5d8da4; end: 10b5d8ddf; -[SCContextAwareAppStartupThrottleRequest hash] */

undefined8 FUN_10b5d8da4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1356e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b5d8de0; end: 10b5d8de3; -[SCStartupCompleteTrigger headlessLaunchCompleted] */

void FUN_10b5d8de0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebc170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__signalStartupCompletedIfNeeded_11258ca00);
  return;
}



/* Entry: 10b5d8de4; end: 10b5d8e23; -[SCStartupCompleteTrigger resetForNextStartup] */

void FUN_10b5d8de4(long param_1)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar1 = PTR_PTR_1126b6b18;
  func_0x00010c22b6a0(PTR_PTR_1126b6b18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c138b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5d8e24; end: 10b5d8e2b; -[SCStartupCompleteTrigger markAppEnterBackground] */

undefined1 FUN_10b5d8e24(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b5d8e2c; end: 10b5d8f0f; -[SCStartupCompleteTrigger appStartNotWithCameraOnScreen:featureStartupEventBus:] */

void FUN_10b5d8e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b5d8ed0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10b5d8f10; end: 10b5d8f3f; -[SCStartupCompleteTrigger .cxx_destruct] */

void FUN_10b5d8f10(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b5d8f40; end: 10b5d918b; -[SCIdleMonitorExecutionRequest perform] */

void FUN_10b5d8f40(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = 0;
    _clock_gettime_nsec_np(0);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    FUN_10b5d918c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be22240(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10b5da4f4(uVar7,uVar2,lVar3,&PTR____CFConstantStringClassReference_110f63038,
                  &PTR____CFConstantStringClassReference_110db1158,
                  (uVar1 / 1000 - *(long *)(param_1 + 0x20)) / 1000);
    _objc_release(lVar3);
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    FUN_10b5d918c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be22240(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10b5da828(uVar7,uVar2,lVar3,&PTR____CFConstantStringClassReference_110f63038,
                  &PTR____CFConstantStringClassReference_110db1158,1);
    _objc_release(lVar3);
    _objc_release(uVar2);
    if ((*(char *)(param_1 + 0x30) == '\x01') &&
       (puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0, func_0x00010c077480(), (int)puVar4 != 0)) {
      puVar4 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar4);
      (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
      puVar5 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
    }
    else {
      puVar5 = *(undefined **)(param_1 + 0x10);
      _objc_retainBlock();
      puVar4 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bf17b60();
      _objc_release(puVar4);
      uVar2 = *(undefined8 *)(param_1 + 8);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      uStack_60 = 0x10b5d9200;
      puStack_58 = &UNK_110860cf8;
      puStack_50 = puVar5;
      puStack_48 = puVar6;
      _objc_retain(puVar5);
      func_0x000107c27d8c(uVar2,&puStack_70);
      _objc_release(puStack_50);
    }
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
    return;
  }
  return;
}



/* Entry: 10b5d918c; end: 10b5d924b;  */

void FUN_10b5d918c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c08fa60();
  uVar2 = param_1;
  if (0x40 < uVar1) {
    func_0x00010c08fa60(param_1);
    func_0x00010c11f3c0(param_1);
    func_0x00010c260c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b5d924c; end: 10b5d9253; -[SCIdleMonitorExecutionRequest isMainThread] */

undefined1 FUN_10b5d924c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 10b5d9254; end: 10b5d925b; -[SCIdleMonitorExecutionRequest tag] */

undefined8 FUN_10b5d9254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b5d925c; end: 10b5d92a3; -[SCIdleMonitorExecutionRequest .cxx_destruct] */

void FUN_10b5d925c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5d92a4; end: 10b5d94e7; -[SCIdleMonitorV1 _scheduleWithSnapTaskForAttributedTask:queuePriority:priority:callbackQueue:callbackBlock:] */

void FUN_10b5d92a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar5 = PTR_PTR_1126aeec0;
  if (param_6 == PTR___dispatch_main_q_11034be20) {
    puVar1 = PTR_PTR_1126e02e8;
    func_0x00010c235400(PTR_PTR_1126e02e8,param_2,param_3);
    puVar5 = PTR_PTR_1126aeec0;
    if (((int)puVar1 == 0) || (lVar2 = *(long *)(param_1 + 0xa8), lVar2 == 0)) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x10b5d94fc;
      puStack_78 = &UNK_110842508;
      _objc_retain(param_7);
      puStack_70 = param_7;
      func_0x00010bf0cac0(puVar5,param_2,param_3,param_5,0,&puStack_90);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puStack_70;
    }
    else {
      puVar5 = *(undefined **)(param_1 + 0xb0);
      if (puVar5 == (undefined *)0x0) {
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0b6600();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0xb0);
        *(long *)(param_1 + 0xb0) = lVar3;
        _objc_release(uVar4);
        _objc_release(lVar2);
        puVar5 = *(undefined **)(param_1 + 0xb0);
      }
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_10b5d94e8;
      puStack_50 = &UNK_110842508;
      _objc_retain(param_7);
      puStack_48 = param_7;
      func_0x00010c14fbc0(puVar5,param_2,param_3,param_5,0,&puStack_68);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puStack_48;
    }
  }
  else {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10b5d9510;
    puStack_a8 = &UNK_110858070;
    _objc_retain(param_6);
    puStack_a0 = param_6;
    _objc_retain(param_7);
    puStack_98 = param_7;
    func_0x00010bf0caa0(puVar5,param_2,param_3,param_5,0,&puStack_c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_98);
    puVar1 = puStack_a0;
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b5d94e8; end: 10b5d950f;  */

void FUN_10b5d94e8(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b5d94f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10b5d9510; end: 10b5d9583;  */

void FUN_10b5d9510(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if ((param_2 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b5d9584;
    puStack_30 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_28 = uVar2;
    func_0x000107c27d8c(uVar1,&puStack_48);
    _objc_release(uStack_28);
  }
  return;
}



/* Entry: 10b5d9584; end: 10b5d958f;  */

void FUN_10b5d9584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b5d958c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10b5d9590; end: 10b5d969b;  */

void FUN_10b5d9590(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x78);
    lVar1 = param_2;
    func_0x00010c0e8a60();
    if (lVar1 < 1) {
      *(undefined1 *)(param_1 + 0x4c) = 0;
      func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58));
    }
    else {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x58));
    }
    _os_unfair_lock_unlock(param_1 + 0x78);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b5d969c; end: 10b5d96ab;  */

void FUN_10b5d969c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__cancelFuturePrioritizedStart_1125543e8);
  return;
}


