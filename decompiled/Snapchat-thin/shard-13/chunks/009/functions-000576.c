/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae16754; end: 10ae1678b;  */

void FUN_10ae16754(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
  func_0x00010ae1c1c0();
  func_0x00010ae1c250();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10ae1678c; end: 10ae168a7;  */

long * FUN_10ae1678c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae1bce0();
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae167bc;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae167bc:
      param_4 = (long *)&UNK_10f6c421a;
      func_0x00010ae1bf84();
      func_0x00010ae1bc64();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x00010ae1c000();
    plVar2 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010ae1c0e8();
    param_2 = param_1;
    unaff_x20 = plVar2;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10ae16818;
  }
  else if ((int)param_2 != 0) {
LAB_10ae16818:
    param_4 = (long *)&UNK_10f6c4240;
    func_0x00010ae1bf84();
    param_2 = (long *)0x3;
    plVar2 = unaff_x19;
    func_0x00010ae1bd2c();
    unaff_x20 = plVar2;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x20));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae16874;
  }
  else if ((int)param_2 == 0) goto LAB_10ae16874;
  param_4 = (long *)&UNK_10f6c426a;
  func_0x00010ae1bf84();
  func_0x00010ae1bd2c();
  plVar2 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae16874:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae168a8; end: 10ae16943;  */

long FUN_10ae168a8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010ae1bd38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010ae1bf74();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x00010ae1be1c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10ae16944; end: 10ae16947;  */

void FUN_10ae16944(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c2d8();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae16948; end: 10ae169df;  */

void FUN_10ae16948(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c2d8();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae169e0; end: 10ae16a17;  */

undefined8 FUN_10ae169e0(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  func_0x00010ae1c1d8();
  func_0x00010ae1c21c();
  return param_1;
}



/* Entry: 10ae16a18; end: 10ae16a1b;  */

undefined8 FUN_10ae16a18(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  func_0x00010ae1c1d8();
  func_0x00010ae1c21c();
  return param_1;
}



/* Entry: 10ae16a1c; end: 10ae16a2f;  */

void FUN_10ae16a1c(void)

{
  FUN_10ae169e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae16a30; end: 10ae16a3b;  */

undefined ** FUN_10ae16a30(void)

{
  return &PTR_DAT_110c7ad00;
}



/* Entry: 10ae16a3c; end: 10ae16a7b;  */

void FUN_10ae16a3c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
  func_0x00010ae1c1c0();
  func_0x00010ae1c250();
  func_0x00010ae1c1d0();
  func_0x00010ae1c290();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 10ae16a7c; end: 10ae16c03;  */

long * FUN_10ae16a7c(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x00010ae1bce0();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae16aac;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae16aac:
      param_4 = (long *)&UNK_10f6c4292;
      func_0x00010ae1bf84();
      func_0x00010ae1bc64();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae16ae4;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae16ae4:
      param_4 = (long *)&UNK_10f6c42a9;
      func_0x00010ae1bf84();
      func_0x00010ae1bbfc();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_10ae16b1c;
  }
  else if ((int)param_2 != 0) {
LAB_10ae16b1c:
    param_4 = (long *)&UNK_10f6c42ca;
    func_0x00010ae1bf84();
    param_2 = 3;
    param_1 = unaff_x19;
    func_0x00010ae1bd2c();
    unaff_x20 = param_1;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) goto LAB_10ae16b5c;
  }
  else if ((int)param_2 != 0) {
LAB_10ae16b5c:
    param_4 = (long *)&UNK_10f6c42e9;
    func_0x00010ae1bf84();
    param_1 = unaff_x19;
    func_0x00010ae1bd2c();
    unaff_x20 = param_1;
  }
  lVar3 = *(long *)(unaff_x21 + 0x38);
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x000107c282c4();
    param_3 = unaff_x20;
    unaff_x20 = param_1;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x30));
  if (lVar3 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae16bd0;
  }
  else if ((int)lVar3 == 0) goto LAB_10ae16bd0;
  param_4 = (long *)&UNK_10f6c430b;
  func_0x00010ae1bf84();
  func_0x00010ae1bd2c();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae16bd0:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae16c04; end: 10ae16dc3;  */

long FUN_10ae16c04(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010ae1bd38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010ae1bf74();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1bf5c();
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x38)) * -9 + 0x2c0U >> 6) + lVar2;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar1 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x40) = (int)lVar2;
  return lVar2;
}



/* Entry: 10ae16dc4; end: 10ae16e43;  */

long FUN_10ae16dc4(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c21c();
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10ae1425c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10ae17f34();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10ae08324();
  }
  __ZdlPv();
  FUN_10ae1a840(param_1 + 0x18);
  return param_1;
}



/* Entry: 10ae16e44; end: 10ae16e47;  */

long FUN_10ae16e44(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c21c();
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_10ae1425c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10ae17f34();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10ae08324();
  }
  __ZdlPv();
  FUN_10ae1a840(param_1 + 0x18);
  return param_1;
}



/* Entry: 10ae16e48; end: 10ae16e5b;  */

void FUN_10ae16e48(void)

{
  FUN_10ae16dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae16e5c; end: 10ae16e67;  */

undefined ** FUN_10ae16e5c(void)

{
  return &PTR_DAT_110c7ad38;
}



/* Entry: 10ae16e68; end: 10ae16f2b;  */

void FUN_10ae16e68(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  func_0x00010ae1adc8(param_1 + 3);
  func_0x00010ae1c290();
  func_0x000107c3025c(param_1 + 7);
  func_0x000107c3025c(param_1 + 8);
  func_0x000107c3025c(param_1 + 9);
  func_0x000107c3025c(param_1 + 10);
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10ae142b4(param_1[0xb]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010ae16efc(param_1[0xc]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10ae08398(param_1[0xd]);
    }
  }
  func_0x00010ae1c3e4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 10ae16f2c; end: 10ae17137;  */

long * FUN_10ae16f2c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  
  func_0x00010ae1bdb8();
  lVar3 = param_1[4];
  for (plVar6 = (long *)0x0; (int)lVar3 != (int)plVar6; plVar6 = (long *)(ulong)((int)plVar6 + 1)) {
    func_0x00010ae1c0a4();
    param_3 = (ulong)*(uint *)(param_2 + 0x40);
    param_1 = (long *)0x1;
    func_0x00010ae1bec8();
    unaff_x20 = param_1;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    param_2 = plVar6[1];
    if (param_2 != 0) {
      plVar4 = (long *)*plVar6;
      goto LAB_10ae16f98;
    }
  }
  else {
    plVar4 = plVar6;
    if ((int)param_2 != 0) {
LAB_10ae16f98:
      param_4 = (long *)&UNK_10f6c432c;
      func_0x00010ae1bf84();
      func_0x00010ae1bbfc();
      param_1 = plVar4;
      unaff_x20 = plVar4;
    }
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x38));
  if (param_2 < 0) {
    param_2 = 0;
    if (plVar6[1] != 0) {
      plVar4 = (long *)*plVar6;
      goto LAB_10ae16fd0;
    }
  }
  else {
    plVar4 = plVar6;
    if ((int)param_2 != 0) {
LAB_10ae16fd0:
      param_4 = (long *)&UNK_10f6c4352;
      func_0x00010ae1bf84(plVar4);
      param_2 = 3;
      param_1 = unaff_x19;
      func_0x00010ae1bd2c();
      unaff_x20 = param_1;
    }
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x40));
  if (param_2 < 0) {
    param_2 = 0;
    if (plVar6[1] != 0) {
      plVar4 = (long *)*plVar6;
      goto LAB_10ae17010;
    }
  }
  else {
    plVar4 = plVar6;
    if ((int)param_2 != 0) {
LAB_10ae17010:
      param_4 = (long *)&UNK_10f6c4376;
      func_0x00010ae1bf84(plVar4);
      param_2 = 4;
      param_1 = unaff_x19;
      func_0x00010ae1bd2c();
      unaff_x20 = param_1;
    }
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x48));
  if (param_2 < 0) {
    param_2 = 0;
    if (plVar6[1] != 0) {
      plVar6 = (long *)*plVar6;
      goto LAB_10ae17050;
    }
  }
  else if ((int)param_2 != 0) {
LAB_10ae17050:
    param_4 = (long *)&UNK_10f6c4399;
    func_0x00010ae1bf84(plVar6);
    param_2 = 5;
    param_1 = unaff_x19;
    func_0x00010ae1bd2c();
    unaff_x20 = param_1;
  }
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  puVar7 = (undefined8 *)(ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x58);
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    param_1 = (long *)0x6;
    func_0x00010ae1bec8();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x60);
    param_3 = (ulong)*(uint *)(param_2 + 0x30);
    param_1 = (long *)0x7;
    func_0x00010ae1bec8();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x68);
    param_3 = (ulong)*(uint *)(param_2 + 0x30);
    param_1 = (long *)0x8;
    func_0x00010ae1bec8();
    unaff_x20 = param_1;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x50));
  if (param_2 < 0) {
    if (puVar7[1] == 0) goto LAB_10ae17104;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if ((int)param_2 == 0) goto LAB_10ae17104;
  param_4 = (long *)&UNK_10f6c43c2;
  func_0x00010ae1bf84(puVar7);
  func_0x00010ae1bd2c();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae17104:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar8 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar8);
      if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar8);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae17138; end: 10ae17283;  */

ulong FUN_10ae17138(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar4;
  long extraout_x9;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar5 = (ulong)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar4 & 1) != 0) {
    puVar1 = (ulong *)(uVar4 + 7);
  }
  uVar4 = param_1;
  while ((uVar5 & 0x1fffffffffffffff) != 0) {
    uVar4 = *puVar1;
    FUN_10ae17284();
    func_0x00010ae1c2e0();
    puVar1 = puVar1 + 1;
  }
  func_0x00010ae1c024(*(undefined8 *)(param_1 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(param_1 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(param_1 + 0x40));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(param_1 + 0x48));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(param_1 + 0x50));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010ae172a0(*(undefined8 *)(param_1 + 0x58));
      func_0x00010ae1c074();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x00010ae172bc(*(undefined8 *)(param_1 + 0x60));
      func_0x00010ae1c074();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      FUN_10ae084e8(*(undefined8 *)(param_1 + 0x68));
      func_0x00010ae1bcb0();
      func_0x00010ae1c3cc();
      uVar5 = extraout_x8_04 + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar3 = extraout_x8_05;
    if (extraout_x8_05 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    uVar5 = lVar3 + uVar5;
  }
  *(int *)(param_1 + 0x14) = (int)uVar5;
  return uVar5;
}



/* Entry: 10ae17284; end: 10ae172d7;  */

long FUN_10ae17284(long param_1)

{
  long extraout_x8;
  
  FUN_10ae16c04();
  func_0x00010ae1bcb0();
  return param_1 + extraout_x8;
}



/* Entry: 10ae172d8; end: 10ae172db;  */

void FUN_10ae172d8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010ae1c098();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar3 = unaff_x20 + 0x18;
  FUN_10ae1748c(unaff_x21 + 0x18);
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x50);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar2 = uVar5;
        FUN_10ae1ae3c();
        *(ulong *)(unaff_x21 + 0x58) = uVar2;
      }
      else {
        FUN_10ae143ac();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x60) == 0) {
        uVar2 = uVar5;
        FUN_10ae1ae8c();
        *(ulong *)(unaff_x21 + 0x60) = uVar2;
      }
      else {
        FUN_10ae1749c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x68) == 0) {
        FUN_10ae1aef0();
        *(ulong *)(unaff_x21 + 0x68) = uVar5;
      }
      else {
        FUN_10ae08590();
      }
    }
  }
  func_0x00010ae1c30c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010ae1c05c();
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10ae172dc; end: 10ae1748b;  */

void FUN_10ae172dc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  
  func_0x00010ae1c098();
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  lVar3 = unaff_x20 + 0x18;
  FUN_10ae1748c(unaff_x21 + 0x18);
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x30);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x38);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x40));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x40);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x48);
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x000107c30248(unaff_x21 + 0x50);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x58) == 0) {
        uVar2 = uVar5;
        FUN_10ae1ae3c();
        *(ulong *)(unaff_x21 + 0x58) = uVar2;
      }
      else {
        FUN_10ae143ac();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x60) == 0) {
        uVar2 = uVar5;
        FUN_10ae1ae8c();
        *(ulong *)(unaff_x21 + 0x60) = uVar2;
      }
      else {
        FUN_10ae1749c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x68) == 0) {
        FUN_10ae1aef0();
        *(ulong *)(unaff_x21 + 0x68) = uVar5;
      }
      else {
        FUN_10ae08590();
      }
    }
  }
  func_0x00010ae1c30c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010ae1c05c();
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10ae1748c; end: 10ae1749b;  */

void FUN_10ae1748c(long *param_1,long param_2)

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



/* Entry: 10ae1749c; end: 10ae174e7;  */

void FUN_10ae1749c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc10();
  func_0x00010ae1bf4c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1c8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae174e8; end: 10ae17513;  */

long FUN_10ae174e8(long param_1)

{
  func_0x00010ae1bf6c();
  FUN_10ae1a840(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae17514; end: 10ae17517;  */

long FUN_10ae17514(long param_1)

{
  func_0x00010ae1bf6c();
  FUN_10ae1a840(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae17518; end: 10ae1752b;  */

void FUN_10ae17518(void)

{
  FUN_10ae174e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae1752c; end: 10ae17537;  */

undefined ** FUN_10ae1752c(void)

{
  return &PTR_DAT_110c7ad78;
}



/* Entry: 10ae17538; end: 10ae17567;  */

void FUN_10ae17538(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bfa8();
  func_0x00010ae1adc8();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10ae17568; end: 10ae175cf;  */

long * FUN_10ae17568(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x00010ae1bc78();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae1bc94();
    param_3 = (ulong)*(uint *)(param_2 + 0x40);
    func_0x00010ae1be7c();
    func_0x00010ae1c244();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae175d0; end: 10ae1761f;  */

void FUN_10ae175d0(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010ae1bb44();
  while (unaff_x22 != 0) {
    FUN_10ae17284(*unaff_x21);
    func_0x00010ae1c2e0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c160();
  return;
}



/* Entry: 10ae17620; end: 10ae17623;  */

void FUN_10ae17620(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae1748c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae17624; end: 10ae17653;  */

void FUN_10ae17624(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae1bc24();
  FUN_10ae1748c();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae17654; end: 10ae17683;  */

long FUN_10ae17654(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x000107c282b4(param_1 + 0x28);
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae17684; end: 10ae17687;  */

long FUN_10ae17684(long param_1)

{
  func_0x00010ae1bf6c();
  func_0x000107c282b4(param_1 + 0x28);
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae17688; end: 10ae1769b;  */

void FUN_10ae17688(void)

{
  FUN_10ae17654();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae1769c; end: 10ae176a7;  */

undefined ** FUN_10ae1769c(void)

{
  return &PTR_DAT_110c7adb8;
}



/* Entry: 10ae176a8; end: 10ae176db;  */

void FUN_10ae176a8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1be4c();
  func_0x000107c282c0(unaff_x19 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10ae176dc; end: 10ae17813;  */

long * FUN_10ae176dc(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x23;
  int iVar5;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bbb8();
  while (unaff_x26 != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar3 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar3 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1bc50();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar3);
    }
    func_0x00010ae1c18c();
  }
  uVar2 = *(uint *)(unaff_x21 + 0x30);
  while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar3 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar3 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1c124();
      func_0x00010ae1bdf0();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8_00 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar3);
    }
    func_0x00010ae1c18c();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar5 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar4 = (int)param_3;
    param_3 = (ulong)(uint)(iVar4 - iVar5);
    if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar5;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar4);
}



/* Entry: 10ae17814; end: 10ae1788b;  */

long FUN_10ae17814(void)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x30);
  lVar3 = unaff_x20 + (ulong)uVar1;
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(unaff_x19 + 0x40) = (int)lVar3;
  return lVar3;
}



/* Entry: 10ae1788c; end: 10ae1788f;  */

void FUN_10ae1788c(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc10();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10ae17890; end: 10ae178c7;  */

void FUN_10ae17890(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc10();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10ae178c8; end: 10ae178f3;  */

undefined8 FUN_10ae178c8(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae178f4; end: 10ae178f7;  */

undefined8 FUN_10ae178f4(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae178f8; end: 10ae1790b;  */

void FUN_10ae178f8(void)

{
  FUN_10ae178c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae1790c; end: 10ae17917;  */

undefined ** FUN_10ae1790c(void)

{
  return &PTR_DAT_110c7adf8;
}



/* Entry: 10ae17918; end: 10ae1794b;  */

void FUN_10ae17918(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1be4c();
  func_0x00010ae1c1d0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
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



/* Entry: 10ae1794c; end: 10ae17a4b;  */

long * FUN_10ae1794c(long *param_1,long param_2)

{
  char cVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar2;
  ulong uVar3;
  int extraout_w8;
  long lVar4;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long *unaff_x23;
  int iVar6;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bbb8();
  while (unaff_x26 != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar1 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar1 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1bc50();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar1);
    }
    func_0x00010ae1c18c();
  }
  uVar3 = *(ulong *)(unaff_x21 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x00010ae1c124();
    func_0x00010ae1bf94();
    unaff_x20 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x21 + 0x30) != 0) {
    func_0x00010ae1c000();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010ae1c0e8();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)uVar3 < 0) {
    uVar3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if ((long)(int)uVar3 <= *plVar2 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)uVar3);
  }
  while( true ) {
    iVar6 = ((int)*plVar2 - (int)unaff_x30) + 0x10;
    iVar5 = (int)uVar3;
    uVar3 = (ulong)(uint)(iVar5 - iVar6);
    if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
    func_0x00010b4d5738();
    lVar4 = (long)unaff_x30 + (long)iVar6;
    unaff_x30 = plVar2;
    func_0x000107c303e4(plVar2,lVar4);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar5);
}



/* Entry: 10ae17a4c; end: 10ae17ac3;  */

long FUN_10ae17a4c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  func_0x00010ae1bf5c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x00010ae1c074();
  }
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    func_0x00010ae1be1c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x34) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10ae17ac4; end: 10ae17ac7;  */

void FUN_10ae17ac4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc10();
  func_0x00010ae1bf4c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1c8();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae17ac8; end: 10ae17b1f;  */

void FUN_10ae17ac8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc10();
  func_0x00010ae1bf4c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1c8();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae17b20; end: 10ae17b4f;  */

undefined8 FUN_10ae17b20(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  return param_1;
}



/* Entry: 10ae17b50; end: 10ae17b53;  */

undefined8 FUN_10ae17b50(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  func_0x00010ae1c258();
  return param_1;
}



/* Entry: 10ae17b54; end: 10ae17b67;  */

void FUN_10ae17b54(void)

{
  FUN_10ae17b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae17b68; end: 10ae17b73;  */

undefined ** FUN_10ae17b68(void)

{
  return &PTR_DAT_110c7ae30;
}



/* Entry: 10ae17b74; end: 10ae17bab;  */

void FUN_10ae17b74(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
  func_0x00010ae1c1c0();
  func_0x00010ae1c250();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10ae17bac; end: 10ae17ca7;  */

long * FUN_10ae17bac(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010ae1bce0();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae17bdc;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae17bdc:
      param_4 = (long *)&UNK_10f6c4467;
      func_0x00010ae1bf84();
      func_0x00010ae1bc64();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  uVar3 = *(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x00010ae1c124();
    func_0x00010ae1bf94();
    unaff_x20 = param_1;
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae17c54;
  }
  else if ((int)param_2 == 0) goto LAB_10ae17c54;
  param_4 = (long *)&UNK_10f6c448b;
  func_0x00010ae1bf84();
  func_0x00010ae1bd2c();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae17c54:
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x00010ae1c000();
    func_0x00010ae1c380();
    func_0x00010ae1c0e8();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)uVar3 < 0) {
    uVar3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)uVar3) {
    while( true ) {
      iVar6 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar6);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)uVar3);
}



/* Entry: 10ae17ca8; end: 10ae17d43;  */

long FUN_10ae17ca8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010ae1bd38();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  func_0x00010ae1bf74();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c28098();
    func_0x00010ae1c074();
  }
  func_0x00010ae1c024(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x00010ae1be1c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10ae17d44; end: 10ae17d47;  */

void FUN_10ae17d44(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c2d8();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae17d48; end: 10ae17ddf;  */

void FUN_10ae17d48(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  func_0x00010ae1c018(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c2d8();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae17de0; end: 10ae17e07;  */

void FUN_10ae17de0(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
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



/* Entry: 10ae17e08; end: 10ae17e2b;  */

undefined8 FUN_10ae17e08(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  return param_1;
}



/* Entry: 10ae17e2c; end: 10ae17e2f;  */

undefined8 FUN_10ae17e2c(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  return param_1;
}



/* Entry: 10ae17e30; end: 10ae17e43;  */

void FUN_10ae17e30(void)

{
  FUN_10ae17e08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae17e44; end: 10ae17e63;  */

undefined ** FUN_10ae17e44(void)

{
  return &PTR_DAT_110c7ae70;
}



/* Entry: 10ae17e64; end: 10ae17ecf;  */

long * FUN_10ae17e64(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010ae1be3c();
  if (param_1[2] != 0) {
    func_0x00010ae1c1a4();
    func_0x000105991a14();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010ae1c1a4();
    func_0x000107c282cc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1c030();
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



/* Entry: 10ae17ed0; end: 10ae17f33;  */

ulong FUN_10ae17ed0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 10ae17f34; end: 10ae17f5f;  */

undefined8 FUN_10ae17f34(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae17f60; end: 10ae17f63;  */

undefined8 FUN_10ae17f60(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c1d8();
  func_0x00010ae1c13c();
  return param_1;
}



/* Entry: 10ae17f64; end: 10ae17f77;  */

void FUN_10ae17f64(void)

{
  FUN_10ae17f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae17f78; end: 10ae17f83;  */

undefined ** FUN_10ae17f78(void)

{
  return &PTR_DAT_110c7aea8;
}



/* Entry: 10ae17f84; end: 10ae18087;  */

long * FUN_10ae17f84(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  long *unaff_x23;
  int iVar5;
  long *unaff_x30;
  
  func_0x00010ae1c2c0();
  func_0x00010ae1bdb8();
  func_0x00010ae1c03c(param_1[5]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 == 0) goto LAB_10ae17fd4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae17fd4;
  unaff_x30 = (long *)&UNK_10f6c44b1;
  func_0x00010ae1bf84();
  func_0x00010ae1bc64();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae17fd4:
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  while ((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x00010ae1bb68();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x00010ae1bdd8();
    cVar3 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar3 < 0) && (func_0x00010ae1c198(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010ae1bd18(), in_NG != in_OV)) {
      func_0x00010ae1c124();
      func_0x00010ae1bdf0();
      unaff_x20 = param_1;
    }
    else {
      func_0x00010ae1be98();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x00010ae1bbe8();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar3);
    }
    func_0x00010ae1c18c();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar5 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar4 = (int)param_3;
    param_3 = (ulong)(uint)(iVar4 - iVar5);
    if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)unaff_x30 + (long)iVar5);
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar4);
}



/* Entry: 10ae18088; end: 10ae180ef;  */

void FUN_10ae18088(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010ae1bcc8();
  while (unaff_x22 != 0) {
    func_0x00010ae1bb28();
    func_0x00010ae1be88();
  }
  func_0x00010ae1bf5c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c3d8();
  return;
}



/* Entry: 10ae180f0; end: 10ae180f3;  */

void FUN_10ae180f0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc10();
  func_0x00010ae1bf4c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1c8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae180f4; end: 10ae1811b;  */

undefined8 FUN_10ae180f4(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  return param_1;
}



/* Entry: 10ae1811c; end: 10ae1811f;  */

undefined8 FUN_10ae1811c(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  return param_1;
}



/* Entry: 10ae18120; end: 10ae18133;  */

void FUN_10ae18120(void)

{
  FUN_10ae180f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae18134; end: 10ae1813f;  */

undefined ** FUN_10ae18134(void)

{
  return &PTR_DAT_110c7aee0;
}



/* Entry: 10ae18140; end: 10ae1816b;  */

void FUN_10ae18140(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10ae1816c; end: 10ae181ef;  */

long * FUN_10ae1816c(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010ae1bd98();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae181b8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_10ae181b8;
  func_0x00010ae1bf84();
  func_0x00010ae1bfc8();
  param_2 = unaff_x22;
LAB_10ae181b8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010ae1c030();
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



/* Entry: 10ae181f0; end: 10ae18247;  */

void FUN_10ae181f0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010ae1bd38();
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
    func_0x00010ae1c050();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10ae18248; end: 10ae1824b;  */

void FUN_10ae18248(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae1824c; end: 10ae18293;  */

void FUN_10ae1824c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae18294; end: 10ae182bf;  */

undefined8 FUN_10ae18294(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  return param_1;
}



/* Entry: 10ae182c0; end: 10ae182c3;  */

undefined8 FUN_10ae182c0(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  return param_1;
}



/* Entry: 10ae182c4; end: 10ae182d7;  */

void FUN_10ae182c4(void)

{
  FUN_10ae18294();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae182d8; end: 10ae182e3;  */

undefined ** FUN_10ae182d8(void)

{
  return &PTR_DAT_110c7af28;
}



/* Entry: 10ae182e4; end: 10ae18313;  */

void FUN_10ae182e4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
  func_0x00010ae1c1c0();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10ae18314; end: 10ae183c3;  */

long * FUN_10ae18314(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae1bce0();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae18344;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae18344:
      param_4 = (long *)&UNK_10f6c4534;
      func_0x00010ae1bf84();
      func_0x00010ae1bc64();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae18390;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae18390;
  param_4 = (long *)&UNK_10f6c4558;
  func_0x00010ae1bf84();
  func_0x00010ae1bbfc();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae18390:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae183c4; end: 10ae18433;  */

void FUN_10ae183c4(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x00010ae1bd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010ae1bf74();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c3c0();
  return;
}



/* Entry: 10ae18434; end: 10ae18437;  */

void FUN_10ae18434(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae18438; end: 10ae1849f;  */

void FUN_10ae18438(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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



/* Entry: 10ae184a0; end: 10ae184cb;  */

undefined8 FUN_10ae184a0(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  return param_1;
}



/* Entry: 10ae184cc; end: 10ae184cf;  */

undefined8 FUN_10ae184cc(undefined8 param_1)

{
  func_0x00010ae1bf6c();
  func_0x00010ae1c11c();
  func_0x00010ae1c16c();
  return param_1;
}



/* Entry: 10ae184d0; end: 10ae184e3;  */

void FUN_10ae184d0(void)

{
  FUN_10ae184a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae184e4; end: 10ae184ef;  */

undefined ** FUN_10ae184e4(void)

{
  return &PTR_DAT_110c7af68;
}



/* Entry: 10ae184f0; end: 10ae1851f;  */

void FUN_10ae184f0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1bdfc();
  func_0x00010ae1c1c0();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 10ae18520; end: 10ae185cf;  */

long * FUN_10ae18520(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae1bce0();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae18550;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae18550:
      param_4 = (long *)&UNK_10f6c4583;
      func_0x00010ae1bf84();
      func_0x00010ae1bc64();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010ae1c03c(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae1859c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae1859c;
  param_4 = (long *)&UNK_10f6c45a9;
  func_0x00010ae1bf84();
  func_0x00010ae1bbfc();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae1859c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae1c030();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae1c0dc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10ae185d0; end: 10ae1863f;  */

void FUN_10ae185d0(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x00010ae1bd38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
  }
  func_0x00010ae1bf74();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae1c074();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae1c050();
  }
  func_0x00010ae1c3c0();
  return;
}



/* Entry: 10ae18640; end: 10ae18643;  */

void FUN_10ae18640(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae1bc38();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c114();
  }
  func_0x00010ae1bed4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae1c00c();
    }
    func_0x00010ae1c1b8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae1bd88();
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


