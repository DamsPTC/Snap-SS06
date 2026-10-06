/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098ce140; end: 1098ce1af;  */

undefined8 * FUN_1098ce140(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110b19000;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
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



/* Entry: 1098ce1b0; end: 1098ce1df;  */

long FUN_1098ce1b0(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098ce1e0(param_1);
  return param_1;
}



/* Entry: 1098ce1e0; end: 1098ce207;  */

/* WARNING: Possible PIC construction at 0x0001098ce1f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098ce1f8) */

void FUN_1098ce1e0(long param_1)

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



/* Entry: 1098ce208; end: 1098ce20b;  */

long FUN_1098ce208(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_1098ce1e0(param_1);
  return param_1;
}



/* Entry: 1098ce20c; end: 1098ce21f;  */

void FUN_1098ce20c(void)

{
  FUN_1098ce1b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ce220; end: 1098ce22b;  */

undefined ** FUN_1098ce220(void)

{
  return &PTR_DAT_110b19040;
}



/* Entry: 1098ce22c; end: 1098ce26f;  */

void FUN_1098ce22c(long param_1)

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



/* Entry: 1098ce270; end: 1098ce35f;  */

long * FUN_1098ce270(long param_1,long *param_2,long *param_3)

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
      goto LAB_1098ce2b4;
    }
  }
  else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_1098ce2b4:
    func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f58705f);
    param_2 = param_3;
    FUN_1098ce4ec(param_3,1);
  }
  puVar5 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar1 = (long)*(char *)((long)puVar5 + 0x17);
  if (lVar1 < 0) {
    lVar1 = puVar5[1];
    if (lVar1 == 0) goto LAB_1098ce31c;
    puVar5 = (undefined8 *)*puVar5;
  }
  else if (*(char *)((long)puVar5 + 0x17) == '\0') goto LAB_1098ce31c;
  func_0x000107c303d4(puVar5,lVar1,1,&UNK_10f58707d);
  param_2 = param_3;
  FUN_1098ce4ec(param_3,2);
LAB_1098ce31c:
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



/* Entry: 1098ce360; end: 1098ce3ef;  */

long FUN_1098ce360(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_1098ce398;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_1098ce398:
    lVar3 = 0;
    goto LAB_1098ce39c;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_1098ce39c:
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



/* Entry: 1098ce3f0; end: 1098ce3f3;  */

void FUN_1098ce3f0(long param_1,long param_2)

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



/* Entry: 1098ce3f4; end: 1098ce493;  */

void FUN_1098ce3f4(long param_1,long param_2)

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



/* Entry: 1098ce494; end: 1098ce49b;  */

void FUN_1098ce494(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x00010b4d80e0(param_2,0x28);
  }
  *puVar1 = &PTR_FUN_110b19000;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1098ce49c; end: 1098ce4eb;  */

void FUN_1098ce49c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110b19000;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1098ce4ec; end: 1098ce537;  */

long * FUN_1098ce4ec(long *param_1,undefined8 param_2)

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



/* Entry: 1098ce538; end: 1098ce563;  */

undefined8 FUN_1098ce538(undefined8 param_1)

{
  func_0x0001098cfb88();
  FUN_1098ce564(param_1);
  return param_1;
}



/* Entry: 1098ce564; end: 1098ce5a3;  */

long FUN_1098ce564(long param_1)

{
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  if (0 < *(int *)(param_1 + 0x14)) {
    FUN_1098cf79c(param_1 + 0x10);
  }
  return param_1 + 0x10;
}



/* Entry: 1098ce5a4; end: 1098ce5a7;  */

undefined8 FUN_1098ce5a4(undefined8 param_1)

{
  func_0x0001098cfb88();
  FUN_1098ce564(param_1);
  return param_1;
}



/* Entry: 1098ce5a8; end: 1098ce5bb;  */

void FUN_1098ce5a8(void)

{
  FUN_1098ce538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ce5bc; end: 1098ce5c7;  */

undefined ** FUN_1098ce5bc(void)

{
  return &PTR_DAT_110b19408;
}



/* Entry: 1098ce5c8; end: 1098ce817;  */

void FUN_1098ce5c8(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x38);
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



/* Entry: 1098ce818; end: 1098ce81b;  */

void FUN_1098ce818(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  lVar1 = param_2 + 0x10;
  FUN_1098ce904(param_1 + 0x10);
  func_0x0001098cfc04(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098cfbf8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x0001098cfc04(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098cfbf8();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x0001098cfc04(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098cfbf8();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x0001098cfc04(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098cfbf8();
    }
    func_0x000107c30248(param_1 + 0x38);
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



/* Entry: 1098ce81c; end: 1098ce903;  */

void FUN_1098ce81c(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  
  lVar1 = param_2 + 0x10;
  FUN_1098ce904(param_1 + 0x10);
  func_0x0001098cfc04(*(undefined8 *)(param_2 + 0x20));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098cfbf8();
    }
    func_0x000107c30248(param_1 + 0x20);
  }
  func_0x0001098cfc04(*(undefined8 *)(param_2 + 0x28));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098cfbf8();
    }
    func_0x000107c30248(param_1 + 0x28);
  }
  func_0x0001098cfc04(*(undefined8 *)(param_2 + 0x30));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098cfbf8();
    }
    func_0x000107c30248(param_1 + 0x30);
  }
  func_0x0001098cfc04(*(undefined8 *)(param_2 + 0x38));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001098cfbf8();
    }
    func_0x000107c30248(param_1 + 0x38);
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



/* Entry: 1098ce904; end: 1098ce963;  */

undefined1  [16] FUN_1098ce904(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    FUN_1098cfa24(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar4 = (undefined4 *)(*(long *)(param_1 + 2) + (long)iVar1 * 4);
    puVar2 = *(undefined4 **)(param_2 + 2);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1098ce964; end: 1098ce987;  */

undefined8 FUN_1098ce964(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098ce988; end: 1098ce98b;  */

undefined8 FUN_1098ce988(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098ce98c; end: 1098ce99f;  */

void FUN_1098ce98c(void)

{
  FUN_1098ce964();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ce9a0; end: 1098ce9bf;  */

undefined ** FUN_1098ce9a0(void)

{
  return &PTR_DAT_110b19450;
}



/* Entry: 1098ce9c0; end: 1098cea1f;  */

long * FUN_1098ce9c0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098cfb14();
  func_0x0001098cfc6c();
  if ((bool)in_ZR) {
    func_0x0001098cfb24();
    func_0x0001098cfb54();
    func_0x0001098cfb64();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cfb90();
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



/* Entry: 1098cea20; end: 1098cea6b;  */

long FUN_1098cea20(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 1098cea6c; end: 1098cea8f;  */

undefined8 FUN_1098cea6c(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cea90; end: 1098cea93;  */

undefined8 FUN_1098cea90(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cea94; end: 1098ceaa7;  */

void FUN_1098cea94(void)

{
  FUN_1098cea6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ceaa8; end: 1098ceac7;  */

undefined ** FUN_1098ceaa8(void)

{
  return &PTR_DAT_110b194a8;
}



/* Entry: 1098ceac8; end: 1098ceb2f;  */

long * FUN_1098ceac8(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  int iVar4;
  
  func_0x0001098cfb14();
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x0001098cfb24();
    func_0x0001098cfb78();
    func_0x000107c280b8();
    param_4 = unaff_x21;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cfb90();
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



/* Entry: 1098ceb30; end: 1098ceb8f;  */

long FUN_1098ceb30(long param_1)

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



/* Entry: 1098ceb90; end: 1098cebb3;  */

undefined8 FUN_1098ceb90(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cebb4; end: 1098cebb7;  */

undefined8 FUN_1098cebb4(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cebb8; end: 1098cebcb;  */

void FUN_1098cebb8(void)

{
  FUN_1098ceb90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cebcc; end: 1098cebeb;  */

undefined ** FUN_1098cebcc(void)

{
  return &PTR_DAT_110b19500;
}



/* Entry: 1098cebec; end: 1098cec4b;  */

long * FUN_1098cebec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098cfb14();
  func_0x0001098cfc6c();
  if ((bool)in_ZR) {
    func_0x0001098cfb24();
    func_0x0001098cfb54();
    func_0x0001098cfb64();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cfb90();
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



/* Entry: 1098cec4c; end: 1098cec97;  */

long FUN_1098cec4c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 1098cec98; end: 1098cecc3;  */

undefined8 FUN_1098cec98(undefined8 param_1)

{
  func_0x0001098cfb88();
  FUN_1098cecc4(param_1);
  return param_1;
}



/* Entry: 1098cecc4; end: 1098cecdf;  */

void FUN_1098cecc4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098ce538();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cece0; end: 1098cece3;  */

undefined8 FUN_1098cece0(undefined8 param_1)

{
  func_0x0001098cfb88();
  FUN_1098cecc4(param_1);
  return param_1;
}



/* Entry: 1098cece4; end: 1098cecf7;  */

void FUN_1098cece4(void)

{
  FUN_1098cec98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cecf8; end: 1098ced03;  */

undefined ** FUN_1098cecf8(void)

{
  return &PTR_DAT_110b19558;
}



/* Entry: 1098ced04; end: 1098cede3;  */

void FUN_1098ced04(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098cfc78();
  if ((extraout_x8 & 1) != 0) {
    FUN_1098ce5c8(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 1098cede4; end: 1098cee0f;  */

long FUN_1098cede4(long param_1)

{
  func_0x0001098ce73c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 1098cee10; end: 1098cee7b;  */

void FUN_1098cee10(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098cfc98();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_1098cfa40();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_1098ce81c(*(long *)(unaff_x21 + 0x18));
    }
  }
  func_0x0001098cfc84();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 1098cee7c; end: 1098cee9f;  */

undefined8 FUN_1098cee7c(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098ceea0; end: 1098ceea3;  */

undefined8 FUN_1098ceea0(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098ceea4; end: 1098ceeb7;  */

void FUN_1098ceea4(void)

{
  FUN_1098cee7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098ceeb8; end: 1098ceed7;  */

undefined ** FUN_1098ceeb8(void)

{
  return &PTR_DAT_110b195a8;
}



/* Entry: 1098ceed8; end: 1098cef37;  */

long * FUN_1098ceed8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098cfb14();
  if ((int)param_1[2] != 0) {
    func_0x0001098cfb24();
    func_0x0001098cfb78();
    func_0x0001098cfb64();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cfb90();
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



/* Entry: 1098cef38; end: 1098cef7f;  */

long FUN_1098cef38(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0001098cfcac();
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



/* Entry: 1098cef80; end: 1098cefa3;  */

undefined8 FUN_1098cef80(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cefa4; end: 1098cefa7;  */

undefined8 FUN_1098cefa4(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cefa8; end: 1098cefbb;  */

void FUN_1098cefa8(void)

{
  FUN_1098cef80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cefbc; end: 1098cefdb;  */

undefined ** FUN_1098cefbc(void)

{
  return &PTR_DAT_110b19600;
}



/* Entry: 1098cefdc; end: 1098cf03b;  */

long * FUN_1098cefdc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098cfb14();
  if ((int)param_1[2] != 0) {
    func_0x0001098cfb24();
    func_0x0001098cfb78();
    func_0x0001098cfb64();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cfb90();
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



/* Entry: 1098cf03c; end: 1098cf083;  */

long FUN_1098cf03c(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0001098cfcac();
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



/* Entry: 1098cf084; end: 1098cf0af;  */

undefined8 FUN_1098cf084(undefined8 param_1)

{
  func_0x0001098cfb88();
  FUN_1098cf0b0(param_1);
  return param_1;
}



/* Entry: 1098cf0b0; end: 1098cf0cb;  */

void FUN_1098cf0b0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1098ce538();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cf0cc; end: 1098cf0cf;  */

undefined8 FUN_1098cf0cc(undefined8 param_1)

{
  func_0x0001098cfb88();
  FUN_1098cf0b0(param_1);
  return param_1;
}



/* Entry: 1098cf0d0; end: 1098cf0e3;  */

void FUN_1098cf0d0(void)

{
  FUN_1098cf084();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cf0e4; end: 1098cf0ef;  */

undefined ** FUN_1098cf0e4(void)

{
  return &PTR_DAT_110b19650;
}



/* Entry: 1098cf0f0; end: 1098cf1cf;  */

void FUN_1098cf0f0(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001098cfc78();
  if ((extraout_x8 & 1) != 0) {
    FUN_1098ce5c8(*(undefined8 *)(unaff_x19 + 0x18));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 1098cf1d0; end: 1098cf23b;  */

void FUN_1098cf1d0(ulong param_1)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001098cfc98();
  if ((param_1 & 1) != 0) {
    param_1 = *(ulong *)(param_1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      FUN_1098cfa40();
      *(ulong *)(unaff_x21 + 0x18) = param_1;
    }
    else {
      FUN_1098ce81c(*(long *)(unaff_x21 + 0x18));
    }
  }
  func_0x0001098cfc84();
  if ((extraout_x8 & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 1098cf23c; end: 1098cf25f;  */

undefined8 FUN_1098cf23c(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cf260; end: 1098cf263;  */

undefined8 FUN_1098cf260(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cf264; end: 1098cf277;  */

void FUN_1098cf264(void)

{
  FUN_1098cf23c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cf278; end: 1098cf297;  */

undefined ** FUN_1098cf278(void)

{
  return &PTR_DAT_110b196a0;
}



/* Entry: 1098cf298; end: 1098cf2f7;  */

long * FUN_1098cf298(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098cfb14();
  func_0x0001098cfc6c();
  if ((bool)in_ZR) {
    func_0x0001098cfb24();
    func_0x0001098cfb54();
    func_0x0001098cfb64();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cfb90();
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



/* Entry: 1098cf2f8; end: 1098cf343;  */

long FUN_1098cf2f8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 1098cf344; end: 1098cf367;  */

undefined8 FUN_1098cf344(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cf368; end: 1098cf36b;  */

undefined8 FUN_1098cf368(undefined8 param_1)

{
  func_0x0001098cfb88();
  return param_1;
}



/* Entry: 1098cf36c; end: 1098cf37f;  */

void FUN_1098cf36c(void)

{
  FUN_1098cf344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cf380; end: 1098cf39f;  */

undefined ** FUN_1098cf380(void)

{
  return &PTR_DAT_110b196f8;
}



/* Entry: 1098cf3a0; end: 1098cf3ff;  */

long * FUN_1098cf3a0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098cfb14();
  func_0x0001098cfc6c();
  if ((bool)in_ZR) {
    func_0x0001098cfb24();
    func_0x0001098cfb54();
    func_0x0001098cfb64();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001098cfb90();
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



/* Entry: 1098cf400; end: 1098cf44b;  */

long FUN_1098cf400(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x10) * 2;
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



/* Entry: 1098cf44c; end: 1098cf477;  */

undefined8 FUN_1098cf44c(undefined8 param_1)

{
  func_0x0001098cfb88();
  FUN_1098cf478(param_1);
  return param_1;
}



/* Entry: 1098cf478; end: 1098cf49f;  */

/* WARNING: Possible PIC construction at 0x0001098cf48c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098cf490) */

void FUN_1098cf478(long param_1)

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



/* Entry: 1098cf4a0; end: 1098cf4a3;  */

undefined8 FUN_1098cf4a0(undefined8 param_1)

{
  func_0x0001098cfb88();
  FUN_1098cf478(param_1);
  return param_1;
}



/* Entry: 1098cf4a4; end: 1098cf4b7;  */

void FUN_1098cf4a4(void)

{
  FUN_1098cf44c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cf4b8; end: 1098cf4c3;  */

undefined ** FUN_1098cf4b8(void)

{
  return &PTR_DAT_110b19750;
}



/* Entry: 1098cf4c4; end: 1098cf68f;  */

void FUN_1098cf4c4(long param_1)

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



/* Entry: 1098cf690; end: 1098cf6e7;  */

void FUN_1098cf690(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x0001098cfb9c();
  }
  else {
    func_0x0001098cfb3c();
  }
  func_0x0001098cfbb8(&PTR_FUN_110b190a8);
  return;
}



/* Entry: 1098cf6e8; end: 1098cf73b;  */

int * FUN_1098cf6e8(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_109311970(param_1,0,iVar1);
    *param_1 = iVar1;
    FUN_1098cf73c(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 1098cf73c; end: 1098cf767;  */

undefined1  [16] FUN_1098cf73c(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (0 < param_2) {
    *puVar2 = *puVar1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + -1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1098cf768; end: 1098cf79b;  */

long FUN_1098cf768(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    FUN_1098cf79c(param_1);
  }
  return param_1;
}



/* Entry: 1098cf79c; end: 1098cf7af;  */

void FUN_1098cf79c(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cf7b0; end: 1098cfa23;  */

void FUN_1098cf7b0(long param_1)

{
  if (param_1 == 0) {
    func_0x0001098cfb9c();
  }
  else {
    func_0x0001098cfb3c();
  }
  func_0x0001098cfbb8(&PTR_FUN_110b190a8);
  return;
}



/* Entry: 1098cfa24; end: 1098cfa3f;  */

void FUN_1098cfa24(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((int)param_2 <= (int)param_1[1]) {
    return;
  }
  uVar2 = *param_1;
  uVar1 = param_1[1];
  plVar4 = *(long **)(param_1 + 2);
  if (uVar1 == 0) {
    if ((int)param_2 < 2) goto LAB_1093119c8;
  }
  else {
    plVar4 = (long *)plVar4[-1];
    if ((int)param_2 < 2) {
LAB_1093119c8:
      uVar5 = 2;
      goto LAB_1093119e0;
    }
    if (0x3ffffffb < (int)uVar1) {
      uVar5 = 0x7fffffff;
      goto LAB_1093119e0;
    }
  }
  uVar1 = uVar1 * 2 + 2;
  if ((int)uVar1 <= (int)param_2) {
    uVar1 = param_2;
  }
  uVar5 = (ulong)uVar1;
LAB_1093119e0:
  if (plVar4 == (long *)0x0) {
    plVar3 = (long *)(uVar5 * 4 + 8);
    __Znwm();
  }
  else {
    plVar3 = plVar4;
    func_0x00010b4d810c(plVar4,uVar5 * 4 + 0xf & 0x3fffffff8);
  }
  *plVar3 = (long)plVar4;
  if (0 < (int)param_1[1]) {
    if (0 < (int)uVar2) {
      _memcpy(plVar3 + 1,*(undefined8 *)(param_1 + 2),(ulong)uVar2 << 2);
    }
    FUN_109311a58(param_1);
  }
  param_1[1] = (uint)uVar5;
  *(long **)(param_1 + 2) = plVar3 + 1;
  return;
}



/* Entry: 1098cfa40; end: 1098cfaf7;  */

undefined8 * FUN_1098cfa40(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x0001098cfc3c();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110b19328;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_1098cf6e8(puVar1 + 2,param_1,param_2 + 0x10);
  lVar2 = param_2 + 0x20;
  func_0x0001098cfc10();
  puVar1[4] = lVar2;
  lVar2 = param_2 + 0x28;
  func_0x0001098cfc10();
  puVar1[5] = lVar2;
  lVar2 = param_2 + 0x30;
  func_0x0001098cfc10();
  puVar1[6] = lVar2;
  param_2 = param_2 + 0x38;
  func_0x0001098cfc10();
  puVar1[7] = param_2;
  *(undefined4 *)(puVar1 + 8) = 0;
  return puVar1;
}



/* Entry: 1098cfaf8; end: 1098cfd13;  */

void FUN_1098cfaf8(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1098cfd14; end: 1098cfd37;  */

undefined8 FUN_1098cfd14(undefined8 param_1)

{
  func_0x0001098d1338();
  return param_1;
}



/* Entry: 1098cfd38; end: 1098cfd3b;  */

undefined8 FUN_1098cfd38(undefined8 param_1)

{
  func_0x0001098d1338();
  return param_1;
}



/* Entry: 1098cfd3c; end: 1098cfd4f;  */

void FUN_1098cfd3c(void)

{
  FUN_1098cfd14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098cfd50; end: 1098cfd73;  */

undefined ** FUN_1098cfd50(void)

{
  return &PTR_DAT_110b19ad0;
}



/* Entry: 1098cfd74; end: 1098cfdf7;  */

long * FUN_1098cfd74(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001098d1320();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001098d12d0();
    func_0x0001098d13a0();
    func_0x0001098d1378();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0001098d12d0();
    func_0x0001098d13b0();
    func_0x0001098d1378();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001098d12d0();
    func_0x0001098d1390();
    func_0x0001098d1378();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001098d1384();
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


