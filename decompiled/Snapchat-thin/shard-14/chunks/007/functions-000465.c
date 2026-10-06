/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5bd8c4; end: 10b5bd8d7;  */

void FUN_10b5bd8c4(void)

{
  FUN_10b5bd880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bd8d8; end: 10b5bd8e3;  */

undefined ** FUN_10b5bd8d8(void)

{
  return &PTR_DAT_110d18508;
}



/* Entry: 10b5bd8e4; end: 10b5bd91f;  */

void FUN_10b5bd8e4(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10b5bd7a4();
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



/* Entry: 10b5bd920; end: 10b5bd9cb;  */

long * FUN_10b5bd920(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar3 = param_3;
    func_0x000107c28094(param_3,param_2);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    puVar2 = (undefined4 *)0xd;
    func_0x000107c280a8(0xd,plVar3);
    param_2 = (long *)(puVar2 + 1);
    *puVar2 = uVar1;
  }
  plVar3 = (long *)(ulong)*(uint *)(param_1 + 0x24);
  if ((*(uint *)(param_1 + 0x24) & 0xfffffffe) == 2) {
    func_0x000107c303cc(plVar3,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x10),param_2,param_3);
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



/* Entry: 10b5bd9cc; end: 10b5bda3b;  */

long FUN_10b5bd9cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar3 = 5;
  }
  if ((*(uint *)(param_1 + 0x24) & 0xfffffffe) == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010793598c();
    lVar3 = lVar3 + lVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(param_1 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5bda3c; end: 10b5bda3f;  */

void FUN_10b5bda3c(long param_1,long param_2)

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
  if (iVar1 == 0) goto LAB_10b5bdaf4;
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b5bd7a4(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 != 3) {
LAB_10b5bdae4:
      func_0x000107c284d4(uVar3,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar3;
      goto LAB_10b5bdaf4;
    }
    FUN_10b5bdb80();
  }
  else {
    if (iVar1 != 2) goto LAB_10b5bdaf4;
    if (iVar2 != 2) goto LAB_10b5bdae4;
    FUN_10b5bdb80();
  }
  func_0x00010bd1b688();
LAB_10b5bdaf4:
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



/* Entry: 10b5bda40; end: 10b5bdb2f;  */

void FUN_10b5bda40(long param_1,long param_2)

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
  if (iVar1 == 0) goto LAB_10b5bdaf4;
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      FUN_10b5bd7a4(param_1);
    }
    *(int *)(param_1 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 != 3) {
LAB_10b5bdae4:
      func_0x000107c284d4(uVar3,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar3;
      goto LAB_10b5bdaf4;
    }
    FUN_10b5bdb80();
  }
  else {
    if (iVar1 != 2) goto LAB_10b5bdaf4;
    if (iVar2 != 2) goto LAB_10b5bdae4;
    FUN_10b5bdb80();
  }
  func_0x00010bd1b688();
LAB_10b5bdaf4:
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



/* Entry: 10b5bdb30; end: 10b5bdb37;  */

void FUN_10b5bdb30(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110d184c8;
  puVar1[1] = param_2;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b5bdb38; end: 10b5bdb7f;  */

void FUN_10b5bdb38(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110d184c8;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b5bdb80; end: 10b5bdbab;  */

undefined8 FUN_10b5bdb80(void)

{
  long unaff_x21;
  
  return *(undefined8 *)(unaff_x21 + 0x18);
}



/* Entry: 10b5bdbac; end: 10b5bdbd3;  */

undefined8 FUN_10b5bdbac(undefined8 param_1)

{
  func_0x00010b5c06e0();
  func_0x00010b5c0848();
  return param_1;
}



/* Entry: 10b5bdbd4; end: 10b5bdbd7;  */

undefined8 FUN_10b5bdbd4(undefined8 param_1)

{
  func_0x00010b5c06e0();
  func_0x00010b5c0848();
  return param_1;
}



/* Entry: 10b5bdbd8; end: 10b5bdbeb;  */

void FUN_10b5bdbd8(void)

{
  FUN_10b5bdbac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bdbec; end: 10b5bdbf7;  */

undefined ** FUN_10b5bdbec(void)

{
  return &PTR_DAT_110d187a0;
}



/* Entry: 10b5bdbf8; end: 10b5bdc23;  */

void FUN_10b5bdbf8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5c06ac();
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



/* Entry: 10b5bdc24; end: 10b5bdcbf;  */

long * FUN_10b5bdc24(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b5c0638(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5bdc88;
  }
  else if ((int)plVar1 == 0) goto LAB_10b5bdc88;
  func_0x00010b5c0604();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar4 = unaff_x22;
LAB_10b5bdc88:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5c0718();
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



/* Entry: 10b5bdcc0; end: 10b5bdd17;  */

void FUN_10b5bdcc0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5c0644();
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
    func_0x00010b5c0724();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5bdd18; end: 10b5bdd1b;  */

void FUN_10b5bdd18(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c0750();
  func_0x00010b5c0664(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
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



/* Entry: 10b5bdd1c; end: 10b5bdd7b;  */

void FUN_10b5bdd1c(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c0750();
  func_0x00010b5c0664(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
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



/* Entry: 10b5bdd7c; end: 10b5bddbb;  */

long FUN_10b5bdd7c(long param_1)

{
  func_0x00010b5c06e0();
  func_0x00010b5c0848();
  func_0x000107c30258(param_1 + 0x18);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_10b5bddd4(param_1);
  }
  return param_1;
}



/* Entry: 10b5bddbc; end: 10b5bddbf;  */

long FUN_10b5bddbc(long param_1)

{
  func_0x00010b5c06e0();
  func_0x00010b5c0848();
  func_0x000107c30258(param_1 + 0x18);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_10b5bddd4(param_1);
  }
  return param_1;
}



/* Entry: 10b5bddc0; end: 10b5bddd3;  */

void FUN_10b5bddc0(void)

{
  FUN_10b5bdd7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bddd4; end: 10b5bde03;  */

void FUN_10b5bddd4(long param_1)

{
  if (*(int *)(param_1 + 0x2c) - 3U < 2) {
    func_0x00010b5c07dc();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10b5bde04; end: 10b5bde0f;  */

undefined ** FUN_10b5bde04(void)

{
  return &PTR_DAT_110d187e0;
}



/* Entry: 10b5bde10; end: 10b5bde47;  */

void FUN_10b5bde10(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5c06ac();
  func_0x00010b5c07fc();
  FUN_10b5bddd4();
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



/* Entry: 10b5bde48; end: 10b5bdf67;  */

long * FUN_10b5bde48(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  ulong unaff_x22;
  int iVar3;
  
  func_0x00010b5c0614();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5bde78;
  }
  else if ((int)param_2 != 0) {
LAB_10b5bde78:
    param_4 = (long *)&UNK_10f77e567;
    func_0x00010b5c0604();
    param_2 = 1;
    param_1 = unaff_x19;
    func_0x00010b5c05a8();
    unaff_x20 = param_1;
  }
  func_0x00010b5c0638(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5bdeb8;
  }
  else if ((int)param_2 != 0) {
LAB_10b5bdeb8:
    param_4 = (long *)&UNK_10f77e594;
    func_0x00010b5c0604();
    param_1 = unaff_x19;
    func_0x00010b5c05a8();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x2c) == 4) {
    func_0x00010b5c0638(*(undefined8 *)(unaff_x21 + 0x20));
    func_0x00010b5c0604();
  }
  else {
    unaff_x19 = param_1;
    unaff_x22 = param_3;
    if (*(int *)(unaff_x21 + 0x2c) != 3) goto LAB_10b5bdf34;
    func_0x00010b5c0880(*(undefined8 *)(unaff_x21 + 0x20));
    unaff_x19 = param_1;
    unaff_x22 = param_3;
  }
  func_0x000107c280a0();
  param_4 = unaff_x20;
  unaff_x20 = unaff_x19;
LAB_10b5bdf34:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b5c0718();
  if ((long)unaff_x22 < 0) {
    unaff_x22 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5c0898();
  if ((long)(int)unaff_x22 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)unaff_x22);
  }
  while( true ) {
    iVar3 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar2 = (int)unaff_x22;
    unaff_x22 = (ulong)(uint)(iVar2 - iVar3);
    if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar3);
    param_4 = unaff_x19;
    func_0x000107c303e4(unaff_x19,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar2);
}



/* Entry: 10b5bdf68; end: 10b5be00b;  */

long FUN_10b5bdf68(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b5c0644();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10b5bdf94;
LAB_10b5bdf80:
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10b5bdf80;
LAB_10b5bdf94:
    lVar2 = 0;
  }
  func_0x00010b5c0670(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5c0684();
  }
  if (*(int *)(unaff_x19 + 0x2c) == 4) {
    func_0x00010b5c07a0(*(undefined8 *)(unaff_x19 + 0x20));
  }
  else {
    if (*(int *)(unaff_x19 + 0x2c) != 3) goto LAB_10b5bdfe0;
    func_0x00010b5c07a8(*(undefined8 *)(unaff_x19 + 0x20));
  }
  func_0x00010b5c0684();
LAB_10b5bdfe0:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c0724();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x28) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5be00c; end: 10b5be00f;  */

void FUN_10b5be00c(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5c06c8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c0804();
  }
  iVar1 = *(int *)(unaff_x20 + 0x2c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x2c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b5bddd4();
      }
      *(int *)((long)unaff_x21 + 0x2c) = iVar1;
    }
    func_0x00010b5c06e8();
    if ((iVar1 == 4) || (iVar1 == 3)) {
      if (iVar2 != iVar1) {
        unaff_x21[4] = extraout_x8_01;
      }
      param_1 = unaff_x21 + 4;
      func_0x00010b5c0730();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c06b8();
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



/* Entry: 10b5be010; end: 10b5be103;  */

void FUN_10b5be010(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5c06c8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c0804();
  }
  iVar1 = *(int *)(unaff_x20 + 0x2c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x2c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b5bddd4();
      }
      *(int *)((long)unaff_x21 + 0x2c) = iVar1;
    }
    func_0x00010b5c06e8();
    if ((iVar1 == 4) || (iVar1 == 3)) {
      if (iVar2 != iVar1) {
        unaff_x21[4] = extraout_x8_01;
      }
      param_1 = unaff_x21 + 4;
      func_0x00010b5c0730();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c06b8();
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



/* Entry: 10b5be104; end: 10b5be12f;  */

undefined8 FUN_10b5be104(undefined8 param_1)

{
  func_0x00010b5c06e0();
  FUN_10b5be130(param_1);
  return param_1;
}



/* Entry: 10b5be130; end: 10b5be157;  */

/* WARNING: Possible PIC construction at 0x00010b5be144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b5be148) */

void FUN_10b5be130(long param_1)

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



/* Entry: 10b5be158; end: 10b5be15b;  */

undefined8 FUN_10b5be158(undefined8 param_1)

{
  func_0x00010b5c06e0();
  FUN_10b5be130(param_1);
  return param_1;
}



/* Entry: 10b5be15c; end: 10b5be16f;  */

void FUN_10b5be15c(void)

{
  FUN_10b5be104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5be170; end: 10b5be17b;  */

undefined ** FUN_10b5be170(void)

{
  return &PTR_DAT_110d18828;
}



/* Entry: 10b5be17c; end: 10b5be1ab;  */

void FUN_10b5be17c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5c06ac();
  func_0x00010b5c07fc();
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



/* Entry: 10b5be1ac; end: 10b5be26b;  */

long * FUN_10b5be1ac(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x00010b5c0614();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be1dc;
  }
  else if ((int)param_2 != 0) {
LAB_10b5be1dc:
    param_4 = (long *)&UNK_10f77e5e9;
    func_0x00010b5c0604();
    param_2 = 1;
    param_1 = unaff_x19;
    func_0x00010b5c05a8();
    unaff_x20 = param_1;
  }
  func_0x00010b5c0638(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5be238;
  }
  else if ((int)param_2 == 0) goto LAB_10b5be238;
  param_4 = (long *)&UNK_10f77e617;
  func_0x00010b5c0604();
  func_0x00010b5c05a8();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b5be238:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b5c0718();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5c0898();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10b5be26c; end: 10b5be2e3;  */

long FUN_10b5be26c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b5c0644();
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
  func_0x00010b5c0670(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5c0684();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c0724();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5be2e4; end: 10b5be2e7;  */

void FUN_10b5be2e4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c0750();
  func_0x00010b5c0664(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
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



/* Entry: 10b5be2e8; end: 10b5be36f;  */

void FUN_10b5be2e8(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c0750();
  func_0x00010b5c0664(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x000107c30248(unaff_x19 + 0x10);
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x000107c30248(unaff_x19 + 0x18);
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



/* Entry: 10b5be370; end: 10b5be39b;  */

undefined8 FUN_10b5be370(undefined8 param_1)

{
  func_0x00010b5c06e0();
  FUN_10b5be39c(param_1);
  return param_1;
}



/* Entry: 10b5be39c; end: 10b5be463;  */

void FUN_10b5be39c(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  func_0x00010b5c07dc();
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x00010b5c085c();
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  func_0x000107c30258(param_1 + 0x58);
  func_0x000107c30258(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010bceb834();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_10b5bdbac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_10b5bdbac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_10b5bdd7c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_10b5be47c(param_1);
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    if (*(int *)(param_1 + 0xa4) == 0x15 || *(int *)(param_1 + 0xa4) == 0xf) {
      func_0x000107c30258(param_1 + 0x98);
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return;
}



/* Entry: 10b5be464; end: 10b5be467;  */

undefined8 FUN_10b5be464(undefined8 param_1)

{
  func_0x00010b5c06e0();
  FUN_10b5be39c(param_1);
  return param_1;
}



/* Entry: 10b5be468; end: 10b5be47b;  */

void FUN_10b5be468(void)

{
  FUN_10b5be370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5be47c; end: 10b5be4e3;  */

void FUN_10b5be47c(long param_1)

{
  if (*(int *)(param_1 + 0xa0) == 0x14 || *(int *)(param_1 + 0xa0) == 7) {
    func_0x000107c30258(param_1 + 0x90);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}



/* Entry: 10b5be4e4; end: 10b5be4ef;  */

undefined ** FUN_10b5be4e4(void)

{
  return &PTR_DAT_110d18868;
}



/* Entry: 10b5be4f0; end: 10b5be5cb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5be4f0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x00010b5c086c();
  func_0x00010b5c0864();
  func_0x000107c3025c(param_1 + 0x40);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  func_0x000107c3025c(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb8d8(*(undefined8 *)(param_1 + 0x68));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5bdbf8(*(undefined8 *)(param_1 + 0x70));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5bdbf8(*(undefined8 *)(param_1 + 0x78));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b5bde10(*(undefined8 *)(param_1 + 0x80));
    }
  }
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0;
  FUN_10b5be47c(param_1);
  func_0x00010b5be4b0(param_1);
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



/* Entry: 10b5be5cc; end: 10b5bec97;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5be5cc(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long extraout_x8;
  int iVar8;
  long unaff_x22;
  undefined8 *puVar9;
  int iVar10;
  
  plVar3 = param_1;
  plVar5 = param_2;
  plVar7 = param_3;
  func_0x00010b5c0638(param_1[3]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be60c;
  }
  else if ((int)plVar5 != 0) {
LAB_10b5be60c:
    func_0x00010b5c0604();
    plVar5 = (long *)0x1;
    plVar3 = param_3;
    func_0x00010b5c0578();
    param_2 = plVar3;
  }
  func_0x00010b5c0638(param_1[4]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be64c;
  }
  else if ((int)plVar5 != 0) {
LAB_10b5be64c:
    func_0x00010b5c0604();
    plVar5 = (long *)0x2;
    plVar3 = param_3;
    func_0x00010b5c0578();
    param_2 = plVar3;
  }
  func_0x00010b5c0638(param_1[5]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be68c;
  }
  else if ((int)plVar5 != 0) {
LAB_10b5be68c:
    func_0x00010b5c0604();
    plVar5 = (long *)0x3;
    plVar3 = param_3;
    func_0x00010b5c0578();
    param_2 = plVar3;
  }
  func_0x00010b5c0638(param_1[6]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be6cc;
  }
  else if ((int)plVar5 != 0) {
LAB_10b5be6cc:
    func_0x00010b5c0604();
    plVar5 = (long *)0x4;
    plVar3 = param_3;
    func_0x00010b5c0578();
    param_2 = plVar3;
  }
  func_0x00010b5c0638(param_1[7]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be70c;
  }
  else if ((int)plVar5 != 0) {
LAB_10b5be70c:
    func_0x00010b5c0604();
    plVar5 = (long *)0x5;
    plVar3 = param_3;
    func_0x00010b5c0578();
    param_2 = plVar3;
  }
  func_0x00010b5c0638(param_1[8]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be74c;
  }
  else if ((int)plVar5 != 0) {
LAB_10b5be74c:
    func_0x00010b5c0604();
    plVar5 = (long *)0x6;
    plVar3 = param_3;
    func_0x00010b5c0578();
    param_2 = plVar3;
  }
  if ((int)param_1[0x14] == 7) {
    func_0x00010b5c0880(param_1[0x12]);
    plVar5 = (long *)0x7;
    func_0x000107c280a0();
    param_2 = plVar3;
  }
  func_0x00010b5c0638(param_1[9]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be7b0;
  }
  else if ((int)plVar5 != 0) {
LAB_10b5be7b0:
    func_0x00010b5c0604();
    plVar5 = (long *)0x8;
    plVar3 = param_3;
    func_0x00010b5c0578();
    param_2 = plVar3;
  }
  func_0x00010b5c0638(param_1[10]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be7f0;
  }
  else if ((int)plVar5 != 0) {
LAB_10b5be7f0:
    func_0x00010b5c0604();
    plVar5 = (long *)0x9;
    plVar3 = param_3;
    func_0x00010b5c0578();
    param_2 = plVar3;
  }
  func_0x00010b5c0638(param_1[0xb]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5be830;
  }
  else if ((int)plVar5 != 0) {
LAB_10b5be830:
    func_0x00010b5c0604();
    plVar5 = (long *)0xa;
    plVar3 = param_3;
    func_0x00010b5c0578();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if ((char)param_1[0x11] == '\x01') {
    func_0x00010b5c05ec();
    plVar2 = (long *)0x58;
    func_0x000107c280a8();
    func_0x00010b5c06a0();
    plVar5 = plVar3;
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)((long)param_1 + 0x89) == '\x01') {
    func_0x00010b5c05ec();
    plVar3 = (long *)0x60;
    func_0x000107c280a8();
    func_0x00010b5c06a0();
    plVar5 = plVar2;
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (*(char *)((long)param_1 + 0x8a) == '\x01') {
    func_0x00010b5c05ec();
    plVar2 = (long *)0x68;
    func_0x000107c280a8();
    func_0x00010b5c06a0();
    plVar5 = plVar3;
    param_2 = plVar2;
  }
  func_0x00010b5c0638(param_1[0xc]);
  if ((long)plVar5 < 0) {
    plVar5 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5be904;
  }
  else if ((int)plVar5 == 0) goto LAB_10b5be904;
  func_0x00010b5c0604();
  plVar5 = (long *)0xe;
  plVar2 = param_3;
  func_0x00010b5c0578();
  param_2 = plVar2;
LAB_10b5be904:
  if (*(int *)((long)param_1 + 0xa4) == 0xf) {
    func_0x00010b5c0880(param_1[0x13]);
    plVar5 = (long *)0xf;
    func_0x000107c280a0();
    param_2 = plVar2;
  }
  uVar1 = *(uint *)(param_1 + 2);
  puVar9 = (undefined8 *)(ulong)uVar1;
  if ((uVar1 & 1) != 0) {
    plVar5 = (long *)param_1[0xd];
    plVar7 = (long *)(ulong)*(uint *)((long)plVar5 + 0x14);
    param_2 = (long *)0x10;
    func_0x00010b5c05b4();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar5 = (long *)param_1[0xe];
    plVar7 = (long *)(ulong)*(uint *)(plVar5 + 3);
    param_2 = (long *)0x11;
    func_0x00010b5c05b4();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar5 = (long *)param_1[0xf];
    plVar7 = (long *)(ulong)*(uint *)(plVar5 + 3);
    param_2 = (long *)0x12;
    func_0x00010b5c05b4();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar5 = (long *)param_1[0x10];
    plVar7 = (long *)(ulong)*(uint *)(plVar5 + 5);
    param_2 = (long *)0x13;
    func_0x00010b5c05b4();
  }
  if ((int)param_1[0x14] == 0x14) {
    func_0x00010b5c0638(param_1[0x12]);
    puVar4 = puVar9;
    if ((long)plVar5 < 0) {
      puVar4 = (undefined8 *)*puVar9;
    }
    func_0x00010b5c0604(puVar4);
    plVar5 = (long *)0x14;
    param_2 = param_3;
    func_0x00010b5c0578();
  }
  if (*(int *)((long)param_1 + 0xa4) == 0x15) {
    func_0x00010b5c0638(param_1[0x13]);
    if ((long)plVar5 < 0) {
      puVar9 = (undefined8 *)*puVar9;
    }
    func_0x00010b5c0604(puVar9);
    param_2 = param_3;
    func_0x00010b5c0578(param_3,0x15);
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b5c0718();
    if ((long)plVar7 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
      plVar7 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar7) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)plVar7;
        plVar7 = (long *)(ulong)(uint)(iVar8 - iVar10);
        if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
        func_0x00010b4d5738();
        lVar6 = (long)param_2 + (long)iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar6);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar6,(ulong)plVar7 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar7);
  }
  return param_2;
}



/* Entry: 10b5bec98; end: 10b5becb3;  */

long FUN_10b5bec98(long param_1)

{
  long extraout_x8;
  
  FUN_10b5bdcc0();
  func_0x00010b5c0590();
  return param_1 + extraout_x8;
}



/* Entry: 10b5becb4; end: 10b5becb7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5becb4(ulong *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5c06c8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  puVar4 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x18));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c0804();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x20));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 4;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x28));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 5;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x30));
  lVar6 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c8();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x38));
  lVar6 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c0();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x40));
  lVar6 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 8;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x48));
  lVar6 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 9;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x50));
  lVar6 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 10;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x58));
  lVar6 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 0xb;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x60));
  lVar6 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 0xc;
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[0xd];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x000106af67c0();
        unaff_x21[0xd] = (ulong)param_1;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[0xe];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x00010b5c01bc();
        unaff_x21[0xe] = (ulong)param_1;
      }
      else {
        FUN_10b5bdd1c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[0xf];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x00010b5c01bc();
        unaff_x21[0xf] = (ulong)param_1;
      }
      else {
        FUN_10b5bdd1c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[0x10];
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5c0218();
        unaff_x21[0x10] = (ulong)puVar4;
        param_1 = puVar4;
      }
      else {
        FUN_10b5be010();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x11) = 1;
  }
  if (*(char *)(unaff_x20 + 0x89) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x89) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8a) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x8a) = 1;
  }
  func_0x00010b5c07b0();
  iVar2 = *(int *)(unaff_x20 + 0xa0);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[0x14];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_10b5be47c();
      }
      *(int *)(unaff_x21 + 0x14) = iVar2;
    }
    if ((iVar2 == 0x14) || (iVar2 == 7)) {
      if (iVar3 != iVar2) {
        unaff_x21[0x12] = (ulong)&DAT_11383d918;
      }
      param_1 = unaff_x21 + 0x12;
      func_0x00010b5c0730();
    }
  }
  iVar2 = *(int *)(unaff_x20 + 0xa4);
  if (iVar2 != 0) {
    iVar3 = *(int *)((long)unaff_x21 + 0xa4);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        func_0x00010b5be4b0();
      }
      *(int *)((long)unaff_x21 + 0xa4) = iVar2;
    }
    if ((iVar2 == 0x15) || (iVar2 == 0xf)) {
      if (iVar3 != iVar2) {
        unaff_x21[0x13] = (ulong)&DAT_11383d918;
      }
      param_1 = unaff_x21 + 0x13;
      func_0x00010b5c0730();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5c06b8();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5becb8; end: 10b5bf053;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5becb8(ulong *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5c06c8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  puVar4 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x18));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c0804();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x20));
  lVar6 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 4;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x28));
  lVar6 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 5;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x30));
  lVar6 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c8();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x38));
  lVar6 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c0();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x40));
  lVar6 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 8;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x48));
  lVar6 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 9;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x50));
  lVar6 = extraout_x8_06;
  if (extraout_x8_06 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 10;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x58));
  lVar6 = extraout_x8_07;
  if (extraout_x8_07 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 0xb;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x60));
  lVar6 = extraout_x8_08;
  if (extraout_x8_08 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 0xc;
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[0xd];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x000106af67c0();
        unaff_x21[0xd] = (ulong)param_1;
      }
      else {
        func_0x00010bceb8bc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[0xe];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x00010b5c01bc();
        unaff_x21[0xe] = (ulong)param_1;
      }
      else {
        FUN_10b5bdd1c();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[0xf];
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar4;
        func_0x00010b5c01bc();
        unaff_x21[0xf] = (ulong)param_1;
      }
      else {
        FUN_10b5bdd1c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = (ulong *)unaff_x21[0x10];
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5c0218();
        unaff_x21[0x10] = (ulong)puVar4;
        param_1 = puVar4;
      }
      else {
        FUN_10b5be010();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x11) = 1;
  }
  if (*(char *)(unaff_x20 + 0x89) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x89) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8a) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x8a) = 1;
  }
  func_0x00010b5c07b0();
  iVar2 = *(int *)(unaff_x20 + 0xa0);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[0x14];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_10b5be47c();
      }
      *(int *)(unaff_x21 + 0x14) = iVar2;
    }
    if ((iVar2 == 0x14) || (iVar2 == 7)) {
      if (iVar3 != iVar2) {
        unaff_x21[0x12] = (ulong)&DAT_11383d918;
      }
      param_1 = unaff_x21 + 0x12;
      func_0x00010b5c0730();
    }
  }
  iVar2 = *(int *)(unaff_x20 + 0xa4);
  if (iVar2 != 0) {
    iVar3 = *(int *)((long)unaff_x21 + 0xa4);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        func_0x00010b5be4b0();
      }
      *(int *)((long)unaff_x21 + 0xa4) = iVar2;
    }
    if ((iVar2 == 0x15) || (iVar2 == 0xf)) {
      if (iVar3 != iVar2) {
        unaff_x21[0x13] = (ulong)&DAT_11383d918;
      }
      param_1 = unaff_x21 + 0x13;
      func_0x00010b5c0730();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5c06b8();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5bf054; end: 10b5bf097;  */

long FUN_10b5bf054(long param_1)

{
  func_0x00010b5c06e0();
  func_0x00010b5c0848();
  func_0x000107c30258(param_1 + 0x18);
  func_0x00010b5c07dc();
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_10b5bf0b0(param_1);
  }
  return param_1;
}



/* Entry: 10b5bf098; end: 10b5bf09b;  */

long FUN_10b5bf098(long param_1)

{
  func_0x00010b5c06e0();
  func_0x00010b5c0848();
  func_0x000107c30258(param_1 + 0x18);
  func_0x00010b5c07dc();
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_10b5bf0b0(param_1);
  }
  return param_1;
}



/* Entry: 10b5bf09c; end: 10b5bf0af;  */

void FUN_10b5bf09c(void)

{
  FUN_10b5bf054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bf0b0; end: 10b5bf0e3;  */

void FUN_10b5bf0b0(long param_1)

{
  if ((*(uint *)(param_1 + 0x3c) & 0xfffffffe) == 4) {
    func_0x000107c30258(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10b5bf0e4; end: 10b5bf0ef;  */

undefined ** FUN_10b5bf0e4(void)

{
  return &PTR_DAT_110d188a8;
}



/* Entry: 10b5bf0f0; end: 10b5bf133;  */

void FUN_10b5bf0f0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5c06ac();
  func_0x00010b5c07fc();
  func_0x000107c3025c(unaff_x19 + 0x20);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  FUN_10b5bf0b0();
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



/* Entry: 10b5bf134; end: 10b5bf2b7;  */

long * FUN_10b5bf134(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  ulong unaff_x22;
  int iVar4;
  
  func_0x00010b5c0614();
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5bf164;
  }
  else if ((int)param_2 != 0) {
LAB_10b5bf164:
    param_4 = (long *)&UNK_10f77e88d;
    func_0x00010b5c0604();
    param_2 = (long *)0x1;
    param_1 = unaff_x19;
    func_0x00010b5c05a8();
    unaff_x20 = param_1;
  }
  func_0x00010b5c0638(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5bf1a4;
  }
  else if ((int)param_2 != 0) {
LAB_10b5bf1a4:
    param_4 = (long *)&UNK_10f77e8b8;
    func_0x00010b5c0604();
    param_2 = (long *)0x2;
    param_1 = unaff_x19;
    func_0x00010b5c05a8();
    unaff_x20 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x00010b5c080c();
    plVar2 = (long *)0x18;
    func_0x000107c280a8();
    func_0x00010b5c07e4();
    param_2 = param_1;
    unaff_x20 = plVar2;
  }
  if (*(int *)(unaff_x21 + 0x3c) == 5) {
    func_0x00010b5c0638(*(undefined8 *)(unaff_x21 + 0x30));
    func_0x00010b5c0604();
    param_2 = (long *)0x5;
    plVar2 = unaff_x19;
    param_3 = unaff_x22;
LAB_10b5bf238:
    func_0x000107c280a0();
    param_4 = unaff_x20;
    unaff_x20 = plVar2;
  }
  else if (*(int *)(unaff_x21 + 0x3c) == 4) {
    func_0x00010b5c0880(*(undefined8 *)(unaff_x21 + 0x30));
    param_2 = (long *)0x4;
    goto LAB_10b5bf238;
  }
  func_0x00010b5c0638(*(undefined8 *)(unaff_x21 + 0x20));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5bf284;
  }
  else if ((int)param_2 == 0) goto LAB_10b5bf284;
  param_4 = (long *)&UNK_10f77e918;
  func_0x00010b5c0604();
  func_0x00010b5c05a8();
  plVar2 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b5bf284:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b5c0718();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b5c0898();
  if ((long)(int)param_3 <= *plVar2 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10b5bf2b8; end: 10b5bf39b;  */

long FUN_10b5bf2b8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b5c0644();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10b5bf2e4;
LAB_10b5bf2d0:
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10b5bf2d0;
LAB_10b5bf2e4:
    lVar2 = 0;
  }
  func_0x00010b5c0670(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5c0684();
  }
  func_0x00010b5c0670(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b5c0794();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT(*(int *)(unaff_x19 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(unaff_x19 + 0x3c) == 5) {
    func_0x00010b5c07a0(*(undefined8 *)(unaff_x19 + 0x30));
  }
  else {
    if (*(int *)(unaff_x19 + 0x3c) != 4) goto LAB_10b5bf370;
    func_0x00010b5c07a8(*(undefined8 *)(unaff_x19 + 0x30));
  }
  func_0x00010b5c0684();
LAB_10b5bf370:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c0724();
    lVar1 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x38) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5bf39c; end: 10b5bf4c3;  */

void FUN_10b5bf39c(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010b5c06c8();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c0804();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x00010b5c0658();
    }
    param_1 = unaff_x21 + 4;
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 5) = *(int *)(unaff_x20 + 0x28);
  }
  iVar1 = *(int *)(unaff_x20 + 0x3c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x3c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b5bf0b0();
      }
      *(int *)((long)unaff_x21 + 0x3c) = iVar1;
    }
    func_0x00010b5c06e8();
    if ((iVar1 == 5) || (iVar1 == 4)) {
      if (iVar2 != iVar1) {
        unaff_x21[6] = extraout_x8_02;
      }
      param_1 = unaff_x21 + 6;
      func_0x00010b5c0730();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c06b8();
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



/* Entry: 10b5bf4c4; end: 10b5bf4ef;  */

undefined8 FUN_10b5bf4c4(undefined8 param_1)

{
  func_0x00010b5c06e0();
  FUN_10b5bf4f0(param_1);
  return param_1;
}



/* Entry: 10b5bf4f0; end: 10b5bf523;  */

long * FUN_10b5bf4f0(void)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x00010b5c0850();
  func_0x00010b5c085c();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_10b5be370();
  }
  __ZdlPv();
  plVar1 = (long *)(unaff_x19 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5bf524; end: 10b5bf527;  */

undefined8 FUN_10b5bf524(undefined8 param_1)

{
  func_0x00010b5c06e0();
  FUN_10b5bf4f0(param_1);
  return param_1;
}



/* Entry: 10b5bf528; end: 10b5bf53b;  */

void FUN_10b5bf528(void)

{
  FUN_10b5bf4c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bf53c; end: 10b5bf547;  */

undefined ** FUN_10b5bf53c(void)

{
  return &PTR_DAT_110d188f0;
}



/* Entry: 10b5bf548; end: 10b5bf5a7;  */

void FUN_10b5bf548(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x00010b5c086c();
  func_0x00010b5c0864();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5be4f0(*(undefined8 *)(param_1 + 0x40));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x48) = 0;
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



/* Entry: 10b5bf5a8; end: 10b5bf7bf;  */

long * FUN_10b5bf5a8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  int iVar6;
  long unaff_x22;
  undefined8 *puVar7;
  int iVar8;
  
  plVar3 = param_1;
  plVar4 = param_2;
  plVar5 = param_3;
  func_0x00010b5c0638(param_1[6]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5bf5ec;
  }
  else if ((int)plVar4 != 0) {
LAB_10b5bf5ec:
    param_4 = (long *)&UNK_10f77e94d;
    func_0x00010b5c0604();
    plVar4 = (long *)0x1;
    plVar3 = param_3;
    func_0x00010b5c05a8();
    param_2 = plVar3;
  }
  lVar2 = param_1[4];
  for (puVar7 = (undefined8 *)0x0; (int)lVar2 != (int)puVar7;
      puVar7 = (undefined8 *)(ulong)((int)puVar7 + 1)) {
    func_0x00010b5c0778();
    plVar5 = (long *)(ulong)*(uint *)(plVar4 + 7);
    plVar3 = (long *)0x2;
    func_0x00010b5c07d0();
    param_2 = plVar3;
  }
  func_0x00010b5c0638(param_1[7]);
  if ((long)plVar4 < 0) {
    if (puVar7[1] == 0) goto LAB_10b5bf678;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if ((int)plVar4 == 0) goto LAB_10b5bf678;
  param_4 = (long *)&UNK_10f77e96f;
  func_0x00010b5c0604(puVar7);
  func_0x00010b5c05a8(param_3,3);
  plVar3 = param_3;
  param_2 = param_3;
LAB_10b5bf678:
  plVar4 = plVar3;
  if ((char)param_1[9] == '\x01') {
    func_0x00010b5c080c();
    plVar4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x00010b5c07e4();
    param_2 = plVar4;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[8] + 0x14);
    plVar4 = (long *)0x5;
    func_0x00010b5c07d0();
    param_2 = plVar4;
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b5c0718();
    if ((long)plVar5 < 0) {
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    func_0x00010b5c0898();
    if (*plVar4 - (long)param_4 < (long)(int)plVar5) {
      while( true ) {
        iVar8 = ((int)*plVar4 - (int)param_4) + 0x10;
        iVar6 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar8);
        param_4 = plVar4;
        func_0x000107c303e4(plVar4,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)plVar5);
  }
  return param_2;
}



/* Entry: 10b5bf7c0; end: 10b5bf7c3;  */

void FUN_10b5bf7c0(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x00010b5c06c8();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  FUN_10b5bf898();
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c8();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x40);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010b5c02a0();
      *(ulong **)(unaff_x21 + 0x40) = puVar4;
      puVar1 = puVar4;
    }
    else {
      FUN_10b5becb8();
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  func_0x00010b5c07b0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c06b8();
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



/* Entry: 10b5bf7c4; end: 10b5bf897;  */

void FUN_10b5bf7c4(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar4;
  
  func_0x00010b5c06c8();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  lVar2 = unaff_x20 + 0x18;
  FUN_10b5bf898();
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c8();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x40);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010b5c02a0();
      *(ulong **)(unaff_x21 + 0x40) = puVar4;
      puVar1 = puVar4;
    }
    else {
      FUN_10b5becb8();
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  func_0x00010b5c07b0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c06b8();
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



/* Entry: 10b5bf898; end: 10b5bf8a7;  */

void FUN_10b5bf898(long *param_1,long param_2)

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



/* Entry: 10b5bf8a8; end: 10b5bf97b;  */

undefined8 * FUN_10b5bf8a8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d18760;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5c05c0();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b5bff24(param_1 + 3,param_2,param_3 + 0x18);
  lVar2 = param_3 + 0x30;
  func_0x00010b5c0748();
  param_1[6] = lVar2;
  lVar2 = param_3 + 0x38;
  func_0x00010b5c0748();
  param_1[7] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5c0438(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b5c0510(param_2,*(undefined8 *)(param_3 + 0x48));
  }
  param_1[9] = param_2;
  uVar4 = *(undefined8 *)(param_3 + 0x58);
  uVar3 = *(undefined8 *)(param_3 + 0x50);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0x60);
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return param_1;
}



/* Entry: 10b5bf97c; end: 10b5bf9a7;  */

undefined8 FUN_10b5bf97c(undefined8 param_1)

{
  func_0x00010b5c06e0();
  FUN_10b5bf9a8(param_1);
  return param_1;
}



/* Entry: 10b5bf9a8; end: 10b5bf9eb;  */

long * FUN_10b5bf9a8(void)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x00010b5c0850();
  func_0x00010b5c085c();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_10b5bf4c4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_10b5be104();
  }
  __ZdlPv();
  plVar1 = (long *)(unaff_x19 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10b5bf9ec; end: 10b5bf9ef;  */

undefined8 FUN_10b5bf9ec(undefined8 param_1)

{
  func_0x00010b5c06e0();
  FUN_10b5bf9a8(param_1);
  return param_1;
}



/* Entry: 10b5bf9f0; end: 10b5bfa03;  */

void FUN_10b5bf9f0(void)

{
  FUN_10b5bf97c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5bfa04; end: 10b5bfa0f;  */

undefined ** FUN_10b5bfa04(void)

{
  return &PTR_DAT_110d18930;
}



/* Entry: 10b5bfa10; end: 10b5bfa87;  */

void FUN_10b5bfa10(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x00010b5c086c();
  func_0x00010b5c0864();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5bf548(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b5be17c(*(undefined8 *)(param_1 + 0x48));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
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



/* Entry: 10b5bfa88; end: 10b5bfc47;  */

long * FUN_10b5bfa88(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long extraout_x8;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  
  plVar2 = param_1;
  plVar7 = param_3;
  plVar4 = param_2;
  if ((int)param_1[10] != 0) {
    param_2 = param_1;
    func_0x00010b5c05ec();
    plVar2 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010b5c07f0();
    plVar4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)((long)param_1 + 0x54) != 0) {
    func_0x00010b5c05ec();
    plVar3 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010b5c07f0();
    param_2 = plVar2;
    plVar4 = plVar3;
  }
  lVar6 = param_1[4];
  for (puVar9 = (undefined8 *)0x0; (int)lVar6 != (int)puVar9;
      puVar9 = (undefined8 *)(ulong)((int)puVar9 + 1)) {
    func_0x00010b5c0778();
    plVar7 = (long *)(ulong)*(uint *)((long)param_2 + 0x14);
    plVar3 = (long *)0x3;
    func_0x00010b5c05b4();
    plVar4 = plVar3;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[8] + 0x14);
    plVar3 = (long *)0x4;
    func_0x00010b5c05b4();
    plVar4 = plVar3;
  }
  plVar2 = (long *)param_1[0xb];
  if (plVar2 != (long *)0x0) {
    plVar3 = param_3;
    func_0x000107c282c4();
    plVar7 = plVar4;
    plVar4 = plVar3;
  }
  if ((int)param_1[0xc] != 0) {
    func_0x00010b5c05ec();
    plVar4 = (long *)0x30;
    func_0x000107c280a8();
    func_0x00010b5c06a0();
    plVar2 = plVar3;
  }
  func_0x00010b5c0638(param_1[6]);
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (puVar9[1] != 0) {
      puVar5 = (undefined8 *)*puVar9;
      goto LAB_10b5bfb9c;
    }
  }
  else {
    puVar5 = puVar9;
    if ((int)plVar2 != 0) {
LAB_10b5bfb9c:
      func_0x00010b5c0604(puVar5);
      plVar2 = (long *)0x7;
      plVar4 = param_3;
      func_0x00010b5c0578();
    }
  }
  func_0x00010b5c0638(param_1[7]);
  if ((long)plVar2 < 0) {
    if (puVar9[1] == 0) goto LAB_10b5bfbf8;
    puVar9 = (undefined8 *)*puVar9;
  }
  else if ((int)plVar2 == 0) goto LAB_10b5bfbf8;
  func_0x00010b5c0604(puVar9);
  plVar4 = param_3;
  func_0x00010b5c0578(param_3,8);
LAB_10b5bfbf8:
  if ((uVar1 >> 1 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[9] + 0x20);
    plVar4 = (long *)0x9;
    func_0x00010b5c05b4();
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar4;
  }
  func_0x00010b5c0718();
  if ((long)plVar7 < 0) {
    lVar6 = *(long *)(extraout_x8 + 8);
    plVar7 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar6 = extraout_x8 + 8;
  }
  if (*param_3 - (long)plVar4 < (long)(int)plVar7) {
    while( true ) {
      iVar10 = ((int)*param_3 - (int)plVar4) + 0x10;
      iVar8 = (int)plVar7;
      plVar7 = (long *)(ulong)(uint)(iVar8 - iVar10);
      if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
      func_0x00010b4d5738();
      lVar6 = (long)plVar4 + (long)iVar10;
      plVar4 = param_3;
      func_0x000107c303e4(param_3,lVar6);
    }
    func_0x00010b4d5738();
    return (long *)((long)plVar4 + (long)iVar8);
  }
  _memcpy(plVar4,lVar6,(ulong)plVar7 & 0xffffffff);
  return (long *)((long)plVar4 + (long)(int)plVar7);
}



/* Entry: 10b5bfc48; end: 10b5bfd67;  */

long FUN_10b5bfc48(long param_1)

{
  uint uVar1;
  int extraout_w8;
  int extraout_w8_00;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5c06f4();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    param_1 = *unaff_x21;
    FUN_10b5bfd68();
    unaff_x20 = param_1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b5c0670(*(undefined8 *)(unaff_x19 + 0x30));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b5c0684();
  }
  func_0x00010b5c0670(*(undefined8 *)(unaff_x19 + 0x38));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b5c0684();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5bfd68(*(undefined8 *)(unaff_x19 + 0x40));
      func_0x00010b5c0684();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x48);
      FUN_10b5be26c();
      func_0x00010b5c0590();
      unaff_x20 = unaff_x20 + lVar3 + extraout_x8_01 + 1;
    }
  }
  iVar2 = -9;
  if (*(int *)(unaff_x19 + 0x50) != 0) {
    func_0x00010b5c075c();
    iVar2 = extraout_w8;
  }
  if (*(int *)(unaff_x19 + 0x54) != 0) {
    func_0x00010b5c075c();
    iVar2 = extraout_w8_00;
  }
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x58)) * iVar2 + 0x2c0U >> 6) + unaff_x20
    ;
  }
  if (*(int *)(unaff_x19 + 0x60) != 0) {
    unaff_x20 = unaff_x20 + (ulong)((int)LZCOUNT(*(int *)(unaff_x19 + 0x60)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c0724();
    lVar3 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar3 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b5bfd68; end: 10b5bfd83;  */

long FUN_10b5bfd68(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5bf6f0();
  func_0x00010b5c0590();
  return param_1 + extraout_x8;
}



/* Entry: 10b5bfd84; end: 10b5bfd87;  */

void FUN_10b5bfd84(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b5c06c8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10b5bfeac();
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c8();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c0();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b5c0438();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        FUN_10b5bf7c4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b5c0510();
        *(ulong **)(unaff_x21 + 0x48) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b5be2e8();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    *(int *)(unaff_x21 + 0x60) = *(int *)(unaff_x20 + 0x60);
  }
  func_0x00010b5c07b0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5c06b8();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5bfd88; end: 10b5bfeab;  */

void FUN_10b5bfd88(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010b5c06c8();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_10b5bfeac();
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c8();
  }
  func_0x00010b5c0664(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c0658();
    }
    func_0x00010b5c07c0();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10b5c0438();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        FUN_10b5bf7c4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar2 == (ulong *)0x0) {
        FUN_10b5c0510();
        *(ulong **)(unaff_x21 + 0x48) = puVar5;
        puVar2 = puVar5;
      }
      else {
        FUN_10b5be2e8();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(int *)(unaff_x20 + 0x60) != 0) {
    *(int *)(unaff_x21 + 0x60) = *(int *)(unaff_x20 + 0x60);
  }
  func_0x00010b5c07b0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010b5c06b8();
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5bfeac; end: 10b5bfef3;  */

void FUN_10b5bfeac(long *param_1,long param_2)

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



/* Entry: 10b5bfef4; end: 10b5bff23;  */

long * FUN_10b5bfef4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5bff24; end: 10b5bff4f;  */

undefined8 * FUN_10b5bff24(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5bfeac(param_1,param_3);
  return param_1;
}



/* Entry: 10b5bff50; end: 10b5bff7f;  */

long * FUN_10b5bff50(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5bff80; end: 10b5c01bb;  */

void FUN_10b5bff80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b5c0830();
  }
  *puVar1 = &PTR_FUN_110d18580;
  puVar1[1] = param_1;
  func_0x00010b5c06e8();
  puVar1[2] = extraout_x8;
  puVar1[3] = extraout_x8;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 10b5c01bc; end: 10b5c0437;  */

void FUN_10b5c01bc(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5c0750();
  if (param_1 == 0) {
    __Znwm(0x20);
  }
  else {
    func_0x00010b5c0818();
  }
  func_0x00010b5c088c();
  func_0x00010b5c0874(&PTR_FUN_110d18670);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5c05c0();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x00010b5c0630();
  *(long *)(unaff_x21 + 0x10) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  return;
}



/* Entry: 10b5c0438; end: 10b5c050f;  */

undefined8 * FUN_10b5c0438(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x50;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x50);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d18710;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5c05c0();
  }
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[5] = param_1;
  FUN_10b5bf898(puVar1 + 3,param_2 + 0x18);
  lVar2 = param_2 + 0x30;
  func_0x00010b5c0748();
  puVar1[6] = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x00010b5c0748();
  puVar1[7] = lVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b5c02a0(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar1[8] = param_1;
  *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_2 + 0x48);
  return puVar1;
}



/* Entry: 10b5c0510; end: 10b5c0577;  */

void FUN_10b5c0510(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5c0750();
  if (param_1 == 0) {
    __Znwm(0x28);
  }
  else {
    func_0x00010b5c0830();
  }
  func_0x00010b5c088c();
  func_0x00010b5c0874(&PTR_FUN_110d18580);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5c05c0();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x00010b5c0630();
  *(long *)(unaff_x21 + 0x10) = lVar1;
  lVar1 = unaff_x20 + 0x18;
  func_0x00010b5c0630();
  *(long *)(unaff_x21 + 0x18) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  return;
}



/* Entry: 10b5c0578; end: 10b5c08a3;  */

long * FUN_10b5c0578(long *param_1,undefined8 param_2)

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



/* Entry: 10b5c08a4; end: 10b5c098b;  */

undefined8 * FUN_10b5c08a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d18ac0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5c1814();
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
    func_0x00010b5c161c(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c1660(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00010b5c16e0(param_2,*(undefined8 *)(param_3 + 0x40));
  }
  param_1[8] = param_2;
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  return param_1;
}



/* Entry: 10b5c098c; end: 10b5c09b7;  */

undefined8 FUN_10b5c098c(undefined8 param_1)

{
  func_0x00010b5c18b8();
  FUN_10b5c09b8(param_1);
  return param_1;
}



/* Entry: 10b5c09b8; end: 10b5c0a13;  */

void FUN_10b5c09b8(void)

{
  long unaff_x19;
  
  func_0x00010b5c1840();
  func_0x000107c30258(unaff_x19 + 0x20);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_10b5b97f8();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_10b5c1114();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_10b535e64();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    FUN_10b5c12b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c0a14; end: 10b5c0a17;  */

undefined8 FUN_10b5c0a14(undefined8 param_1)

{
  func_0x00010b5c18b8();
  FUN_10b5c09b8(param_1);
  return param_1;
}



/* Entry: 10b5c0a18; end: 10b5c0a2b;  */

void FUN_10b5c0a18(void)

{
  FUN_10b5c098c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c0a2c; end: 10b5c0a37;  */

undefined ** FUN_10b5c0a2c(void)

{
  return &PTR_DAT_110d18b00;
}



/* Entry: 10b5c0a38; end: 10b5c0b5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5c0a38(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x00010b5c1834();
  func_0x000107c3025c(unaff_x19 + 0x20);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5b984c(*(undefined8 *)(unaff_x19 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5c0ac0(*(undefined8 *)(unaff_x19 + 0x30));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010b535efc(*(undefined8 *)(unaff_x19 + 0x38));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x00010b5c0b00(*(undefined8 *)(unaff_x19 + 0x40));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 10b5c0b5c; end: 10b5c0e2b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5c0b5c(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long unaff_x22;
  int iVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((int)param_1[9] != 0) {
    param_2 = param_1;
    func_0x00010b5c18d4();
    plVar2 = (long *)0x8;
    func_0x000107c280a8();
    func_0x00010b5c18f8();
    plVar3 = plVar2;
  }
  func_0x00010b5c18ac(param_1[3]);
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5c0bc0;
  }
  else if ((int)param_2 != 0) {
LAB_10b5c0bc0:
    func_0x00010b5c1858();
    param_2 = (long *)0x2;
    plVar2 = param_3;
    func_0x00010b5c1904();
    plVar3 = plVar2;
  }
  func_0x00010b5c18ac(param_1[4]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5c0c1c;
  }
  else if ((int)param_2 == 0) goto LAB_10b5c0c1c;
  func_0x00010b5c1858();
  plVar2 = param_3;
  func_0x00010b5c1904(param_3,3);
  plVar3 = plVar2;
LAB_10b5c0c1c:
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    func_0x00010b5c18d4();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b5c18f8();
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar3 = (long *)0x5;
    func_0x00010b5c17b8(5,param_1[5],*(undefined4 *)(param_1[5] + 0x1c));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar3 = (long *)0x6;
    func_0x00010b5c17b8(6,param_1[6],*(undefined4 *)(param_1[6] + 0x14));
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar3 = (long *)0x7;
    func_0x00010b5c17b8(7,param_1[7],*(undefined4 *)(param_1[7] + 0x20));
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar3 = (long *)0x8;
    func_0x00010b5c17b8(8,param_1[8],*(undefined4 *)(param_1[8] + 0x14));
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar3;
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



/* Entry: 10b5c0e2c; end: 10b5c0e47;  */

long FUN_10b5c0e2c(long param_1)

{
  long extraout_x8;
  
  FUN_10b5b9970();
  func_0x00010b5c17c4();
  return param_1 + extraout_x8;
}



/* Entry: 10b5c0e48; end: 10b5c0e4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5c0e48(ulong *param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5c1800();
  puVar2 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)param_3 & 0xfffffffffffffffe);
  }
  func_0x00010b5c1880();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x00010b5c18a0();
    }
    func_0x00010b5c1928();
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010b5c18a0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5c161c();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b5b9a00();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x00010b5c1660();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010b5c0fa8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5c18c0();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5c16e0();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010b5c1030();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  func_0x00010b5c17ec();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b5c1890();
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


