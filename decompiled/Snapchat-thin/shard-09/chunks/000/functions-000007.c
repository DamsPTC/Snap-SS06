/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067e3340; end: 1067e3353;  */

void FUN_1067e3340(void)

{
  func_0x000100850ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e3354; end: 1067e3433;  */

void FUN_1067e3354(long param_1)

{
  long lVar1;
  long *plVar2;
  int extraout_w10;
  long *plStack_148;
  long lStack_140;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  ppuStack_48 = &PTR_FUN_11093f370;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar1 = param_1;
  func_0x0001067e35f0();
  if ((int)lVar1 == 0) {
    func_0x0001067e34bc();
    func_0x0001067e3480();
    func_0x0001067e354c();
    func_0x0001067e349c();
    func_0x0001067e35fc();
    func_0x0001067e346c();
    func_0x0001067e34d4();
    func_0x0001067e34e4();
    func_0x0001067e34dc();
  }
  else {
    plVar2 = *(long **)(param_1 + 8);
    lStack_140 = *(long *)(param_1 + 0x10);
    plStack_148 = plVar2;
    if (lStack_140 != 0) {
      do {
        func_0x0001067e34ac();
      } while (extraout_w10 != 0);
    }
    func_0x0001067e35cc(*(undefined8 *)(*plVar2 + 0x38));
    func_0x0001067dfb34(&plStack_148);
  }
  FUN_1067e4e2c(&ppuStack_48);
  return;
}



/* Entry: 1067e3434; end: 1067e3443;  */

void FUN_1067e3434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093f178;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067e3444; end: 1067e346b;  */

long FUN_1067e3444(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1067e346c; end: 1067e3607;  */

void FUN_1067e346c(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001067e347c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1067e3608; end: 1067e3633;  */

undefined8 FUN_1067e3608(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e3634(param_1);
  return param_1;
}



/* Entry: 1067e3634; end: 1067e3653;  */

void FUN_1067e3634(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001067e5864();
  func_0x0001067e5a54();
  uVar1 = *(ulong *)(unaff_x19 + 0x20) ^ 2;
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



/* Entry: 1067e3654; end: 1067e3657;  */

undefined8 FUN_1067e3654(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e3634(param_1);
  return param_1;
}



/* Entry: 1067e3658; end: 1067e366b;  */

void FUN_1067e3658(void)

{
  FUN_1067e3608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e366c; end: 1067e3677;  */

undefined ** FUN_1067e366c(void)

{
  return &PTR_DAT_11093f540;
}



/* Entry: 1067e3678; end: 1067e36b3;  */

void FUN_1067e3678(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001067e5818();
  func_0x0001067e5a04();
  func_0x0001067e5a9c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 1067e36b4; end: 1067e3837;  */

long * FUN_1067e36b4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long extraout_x8;
  int iVar5;
  long *unaff_x22;
  long lVar6;
  long *plVar7;
  int iVar8;
  
  plVar2 = param_1;
  plVar4 = param_2;
  plVar7 = param_3;
  func_0x0001067e58cc(param_1[2]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)unaff_x22[1];
    if (plVar4 != (long *)0x0) {
      plVar1 = (long *)*unaff_x22;
      goto LAB_1067e36f4;
    }
  }
  else {
    plVar1 = unaff_x22;
    if ((int)plVar4 != 0) {
LAB_1067e36f4:
      func_0x0001067e5878();
      func_0x0001067e59b4();
      func_0x0001067e57d8();
      plVar2 = plVar1;
      param_2 = plVar1;
    }
  }
  func_0x0001067e58cc(param_1[3]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_1067e3730;
  }
  else if ((int)plVar4 != 0) {
LAB_1067e3730:
    func_0x0001067e5878();
    plVar4 = (long *)0x2;
    plVar2 = param_3;
    func_0x0001067e57d8();
    param_2 = plVar2;
  }
  func_0x0001067e58cc(param_1[4]);
  if ((long)plVar4 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1067e378c;
  }
  else if ((int)plVar4 == 0) goto LAB_1067e378c;
  func_0x0001067e5878();
  plVar2 = param_3;
  func_0x0001067e57d8(param_3,3);
  param_2 = plVar2;
LAB_1067e378c:
  plVar4 = plVar2;
  if (param_1[5] != 0) {
    func_0x0001067e580c();
    lVar6 = param_1[5];
    plVar4 = (long *)0x21;
    func_0x0001001a59d0(0x21,plVar2);
    param_2 = plVar4 + 1;
    *plVar4 = lVar6;
  }
  plVar2 = plVar4;
  if (param_1[6] != 0) {
    func_0x0001067e580c();
    lVar6 = param_1[6];
    plVar2 = (long *)0x29;
    func_0x0001001a59d0(0x29,plVar4);
    param_2 = plVar2 + 1;
    *plVar2 = lVar6;
  }
  if ((int)param_1[7] != 0) {
    func_0x0001067e580c();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 7);
    uVar3 = 0x30;
    func_0x0001001a59d0(0x30,plVar2);
    func_0x0001001a59d0(param_2,uVar3);
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x0001067e5958();
    if ((long)plVar7 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
      plVar7 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar7) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar5 = (int)plVar7;
        plVar7 = (long *)(ulong)(uint)(iVar5 - iVar8);
        if (iVar5 - iVar8 == 0 || iVar5 < iVar8) break;
        func_0x00010b4d5738();
        lVar6 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar6);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar5);
    }
    _memcpy(param_2,lVar6,(ulong)plVar7 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar7);
  }
  return param_2;
}



/* Entry: 1067e3838; end: 1067e3907;  */

void FUN_1067e3838(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001067e578c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x0001001a5744();
    iVar1 = (int)param_1 + 1;
  }
  func_0x0001067e58a0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  func_0x0001067e58a0(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    iVar1 = iVar1 + 9;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    iVar1 = iVar1 + 9;
  }
  if (*(int *)(unaff_x19 + 0x38) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x38)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001067e5a70();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x3c) = iVar1;
  return;
}



/* Entry: 1067e3908; end: 1067e390b;  */

void FUN_1067e3908(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001067e5734();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e5970();
  }
  func_0x0001067e583c();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e59fc();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x0001001a53d4();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5854();
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



/* Entry: 1067e390c; end: 1067e39c7;  */

void FUN_1067e390c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001067e5734();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e5970();
  }
  func_0x0001067e583c();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e59fc();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x0001001a53d4();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5854();
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



/* Entry: 1067e39c8; end: 1067e39f3;  */

undefined8 FUN_1067e39c8(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e39f4(param_1);
  return param_1;
}



/* Entry: 1067e39f4; end: 1067e3a23;  */

/* WARNING: Possible PIC construction at 0x0001067e3a0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001067e3a10) */
/* WARNING: Removing unreachable block (ram,0x0001067e5a0c) */

void FUN_1067e39f4(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001067e5864();
  func_0x0001067e5a54();
  uVar1 = *(ulong *)(unaff_x19 + 0x20) ^ 2;
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



/* Entry: 1067e3a24; end: 1067e3a27;  */

undefined8 FUN_1067e3a24(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e39f4(param_1);
  return param_1;
}



/* Entry: 1067e3a28; end: 1067e3a3b;  */

void FUN_1067e3a28(void)

{
  FUN_1067e39c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e3a3c; end: 1067e3a47;  */

undefined ** FUN_1067e3a3c(void)

{
  return &PTR_DAT_11093f590;
}



/* Entry: 1067e3a48; end: 1067e3a8b;  */

void FUN_1067e3a48(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001067e5818();
  func_0x0001067e5a04();
  func_0x0001067e5a9c();
  func_0x00010029b2d4(unaff_x19 + 0x28);
  func_0x00010029b2d4(unaff_x19 + 0x30);
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



/* Entry: 1067e3a8c; end: 1067e3bfb;  */

long * FUN_1067e3a8c(long *param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x0001067e57e4();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1067e3abc;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1067e3abc:
      param_4 = (long *)&UNK_10f398feb;
      func_0x0001067e5878();
      func_0x0001067e576c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001067e58cc(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1067e3af4;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1067e3af4:
      param_4 = (long *)&UNK_10f39901d;
      func_0x0001067e5878();
      func_0x0001067e5758();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001067e58cc(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_1067e3b2c;
  }
  else if ((int)param_2 != 0) {
LAB_1067e3b2c:
    param_4 = (long *)&UNK_10f399050;
    func_0x0001067e5878();
    param_2 = 3;
    param_1 = unaff_x19;
    func_0x0001067e5780();
    unaff_x20 = param_1;
  }
  func_0x0001067e58cc(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_1067e3b6c;
  }
  else if ((int)param_2 != 0) {
LAB_1067e3b6c:
    param_4 = (long *)&UNK_10f39907f;
    func_0x0001067e5878();
    param_2 = 4;
    param_1 = unaff_x19;
    func_0x0001067e5780();
    unaff_x20 = param_1;
  }
  func_0x0001067e58cc(*(undefined8 *)(unaff_x21 + 0x30));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1067e3bc8;
  }
  else if ((int)param_2 == 0) goto LAB_1067e3bc8;
  param_4 = (long *)&UNK_10f3990aa;
  func_0x0001067e5878();
  func_0x0001067e5780();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1067e3bc8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001067e5958();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001067e5a5c();
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



/* Entry: 1067e3bfc; end: 1067e3cc7;  */

long FUN_1067e3bfc(long param_1)

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
  
  func_0x0001067e578c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar2 = param_1 + 1;
  }
  func_0x0001067e58a0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  func_0x0001067e58a0(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  func_0x0001067e58a0(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  func_0x0001067e58a0(*(undefined8 *)(unaff_x19 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001067e5a70();
    lVar1 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x38) = (int)lVar2;
  return lVar2;
}



/* Entry: 1067e3cc8; end: 1067e3ccb;  */

void FUN_1067e3cc8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001067e5734();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e5970();
  }
  func_0x0001067e583c();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e59fc();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x0001001a53d4();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x0001001a53d4();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x0001001a53d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5854();
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



/* Entry: 1067e3ccc; end: 1067e3dab;  */

void FUN_1067e3ccc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001067e5734();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e5970();
  }
  func_0x0001067e583c();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e59fc();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x0001001a53d4();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x0001001a53d4();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x0001001a53d4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5854();
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



/* Entry: 1067e3dac; end: 1067e3dd7;  */

long FUN_1067e3dac(long param_1)

{
  func_0x0001067e58c4();
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1067e3dd8; end: 1067e3ddb;  */

long FUN_1067e3dd8(long param_1)

{
  func_0x0001067e58c4();
  func_0x000100067de0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1067e3ddc; end: 1067e3def;  */

void FUN_1067e3ddc(void)

{
  FUN_1067e3dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e3df0; end: 1067e3dfb;  */

undefined ** FUN_1067e3df0(void)

{
  return &PTR_DAT_11093f5d8;
}



/* Entry: 1067e3dfc; end: 1067e3ee7;  */

void FUN_1067e3dfc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001067e5818();
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



/* Entry: 1067e3ee8; end: 1067e3eeb;  */

void FUN_1067e3ee8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001067e5734();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e5970();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5854();
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



/* Entry: 1067e3eec; end: 1067e3f33;  */

void FUN_1067e3eec(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001067e5734();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e5970();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5854();
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



/* Entry: 1067e3f34; end: 1067e3f4f;  */

long FUN_1067e3f34(long param_1)

{
  long extraout_x8;
  
  func_0x0001067e3e90();
  FUN_1067e571c();
  return param_1 + extraout_x8;
}



/* Entry: 1067e3f50; end: 1067e3f83;  */

void FUN_1067e3f50(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_11093f500;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = &DAT_11383d918;
  param_1[4] = &DAT_11383d918;
  param_1[5] = &DAT_11383d918;
  param_1[6] = &DAT_11383d918;
  param_1[7] = &DAT_11383d918;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  return;
}



/* Entry: 1067e3f84; end: 1067e3faf;  */

undefined8 FUN_1067e3f84(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e3fb0(param_1);
  return param_1;
}



/* Entry: 1067e3fb0; end: 1067e402f;  */

void FUN_1067e3fb0(long param_1)

{
  func_0x000100067de0(param_1 + 0x18);
  func_0x000100067de0(param_1 + 0x20);
  func_0x000100067de0(param_1 + 0x28);
  func_0x000100067de0(param_1 + 0x30);
  func_0x000100067de0(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1067e3608();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1067e39c8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1067e4880();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_1067e4a64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e4030; end: 1067e4033;  */

undefined8 FUN_1067e4030(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e3fb0(param_1);
  return param_1;
}



/* Entry: 1067e4034; end: 1067e4047;  */

void FUN_1067e4034(void)

{
  FUN_1067e3f84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e4048; end: 1067e4053;  */

undefined ** FUN_1067e4048(void)

{
  return &PTR_DAT_11093f628;
}



/* Entry: 1067e4054; end: 1067e4157;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1067e4054(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x0001067e59dc();
  func_0x0001067e5a9c();
  func_0x00010029b2d4(unaff_x19 + 0x28);
  func_0x00010029b2d4(unaff_x19 + 0x30);
  func_0x00010029b2d4(unaff_x19 + 0x38);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1067e3678(*(undefined8 *)(unaff_x19 + 0x40));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1067e3a48(*(undefined8 *)(unaff_x19 + 0x48));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001067e40f8(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0001067e4128(*(undefined8 *)(unaff_x19 + 0x58));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined4 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
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



/* Entry: 1067e4158; end: 1067e43ff;  */

long * FUN_1067e4158(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  int iVar7;
  long *unaff_x22;
  int iVar8;
  
  plVar3 = param_1;
  plVar4 = param_2;
  plVar6 = param_3;
  func_0x0001067e58cc(param_1[3]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)unaff_x22[1];
    if (plVar4 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1067e419c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)plVar4 != 0) {
LAB_1067e419c:
      func_0x0001067e5878();
      func_0x0001067e59b4();
      func_0x0001067e57d8();
      plVar3 = plVar2;
      param_2 = plVar2;
    }
  }
  func_0x0001067e58cc(param_1[4]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_1067e41d8;
  }
  else if ((int)plVar4 != 0) {
LAB_1067e41d8:
    func_0x0001067e5878();
    plVar4 = (long *)0x2;
    plVar3 = param_3;
    func_0x0001067e57d8();
    param_2 = plVar3;
  }
  func_0x0001067e58cc(param_1[5]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_1067e4218;
  }
  else if ((int)plVar4 != 0) {
LAB_1067e4218:
    func_0x0001067e5878();
    plVar4 = (long *)0x3;
    plVar3 = param_3;
    func_0x0001067e57d8();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if (param_1[0xc] != 0) {
    func_0x0001067e580c();
    plVar2 = (long *)0x20;
    func_0x0001001a59d0();
    func_0x0001067e5990();
    plVar4 = plVar3;
    param_2 = plVar2;
  }
  plVar3 = plVar2;
  if (param_1[0xd] != 0) {
    func_0x0001067e580c();
    plVar3 = (long *)0x28;
    func_0x0001001a59d0();
    func_0x0001067e5990();
    plVar4 = plVar2;
    param_2 = plVar3;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)param_1[8];
    plVar6 = (long *)(ulong)*(uint *)((long)plVar4 + 0x3c);
    plVar3 = (long *)0x6;
    func_0x0001067e58e0();
    param_2 = plVar3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    plVar4 = (long *)param_1[9];
    plVar6 = (long *)(ulong)*(uint *)(plVar4 + 7);
    plVar3 = (long *)0x7;
    func_0x0001067e58e0();
    param_2 = plVar3;
  }
  plVar2 = plVar3;
  if ((int)param_1[0xf] != 0) {
    func_0x0001067e580c();
    plVar2 = (long *)(ulong)*(uint *)(param_1 + 0xf);
    plVar4 = (long *)0x40;
    func_0x0001001a59d0(0x40,plVar3);
    func_0x0001001a59fc();
    param_2 = plVar2;
  }
  if (param_1[0xe] != 0) {
    func_0x0001067e580c();
    param_2 = (long *)0x48;
    func_0x0001001a59d0();
    func_0x0001067e5990();
    plVar4 = plVar2;
  }
  func_0x0001067e58cc(param_1[6]);
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_1067e4324;
  }
  else if ((int)plVar4 != 0) {
LAB_1067e4324:
    func_0x0001067e5878();
    plVar4 = (long *)0xa;
    param_2 = param_3;
    func_0x0001067e57d8();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    plVar4 = (long *)param_1[10];
    plVar6 = (long *)(ulong)*(uint *)(plVar4 + 4);
    param_2 = (long *)0xb;
    func_0x0001067e58e0();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    plVar4 = (long *)param_1[0xb];
    plVar6 = (long *)(ulong)*(uint *)(plVar4 + 3);
    param_2 = (long *)0xc;
    func_0x0001067e58e0();
  }
  func_0x0001067e58cc(param_1[7]);
  if ((long)plVar4 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1067e43b0;
  }
  else if ((int)plVar4 == 0) goto LAB_1067e43b0;
  func_0x0001067e5878();
  param_2 = param_3;
  func_0x0001067e57d8(param_3,0xd);
LAB_1067e43b0:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x0001067e5958();
  if ((long)plVar6 < 0) {
    lVar5 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar5 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar6) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar7 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar7 - iVar8);
      if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
      func_0x00010b4d5738();
      lVar5 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar5);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar7);
  }
  _memcpy(param_2,lVar5,(ulong)plVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar6);
}



/* Entry: 1067e4400; end: 1067e4583;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1067e4400(long param_1)

{
  uint uVar1;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar4;
  long extraout_x9;
  long lVar5;
  
  lVar4 = param_1;
  func_0x0001067e58a0(*(undefined8 *)(param_1 + 0x18));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(lVar4 + 8);
  }
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar5 = lVar4 + 1;
  }
  func_0x0001067e58a0(*(undefined8 *)(param_1 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  func_0x0001067e58a0(*(undefined8 *)(param_1 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  func_0x0001067e58a0(*(undefined8 *)(param_1 + 0x30));
  lVar3 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  func_0x0001067e58a0(*(undefined8 *)(param_1 + 0x38));
  lVar3 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1067e3838(*(undefined8 *)(param_1 + 0x40));
      func_0x0001067e571c();
      func_0x0001067e5914();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1067e3bfc(*(undefined8 *)(param_1 + 0x48));
      func_0x0001067e571c();
      func_0x0001067e5914();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1067e499c(*(undefined8 *)(param_1 + 0x50));
      func_0x0001067e571c();
      func_0x0001067e5914();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0001067e4b28(*(undefined8 *)(param_1 + 0x58));
      func_0x0001067e571c();
      func_0x0001067e5914();
    }
  }
  iVar2 = -9;
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x0001067e5824();
    iVar2 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x0001067e5824();
    iVar2 = extraout_w8_00;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x0001067e5824();
    iVar2 = extraout_w8_01;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    func_0x0001067e5980((int)LZCOUNT((long)*(int *)(param_1 + 0x78)) * iVar2 + 0x280);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001067e5a70();
    lVar4 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    lVar5 = lVar4 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 1067e4584; end: 1067e4773;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1067e4584(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001067e5890();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x0001067e583c();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e5a7c();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x0001001a53d4();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x0001001a53d4();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  func_0x0001067e58b8(*(undefined8 *)(unaff_x20 + 0x38));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    param_1 = (ulong *)(unaff_x21 + 0x38);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001067e5544();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        FUN_1067e390c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001067e55d8();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_1067e3ccc();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x0001067e565c();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        FUN_1067e4774();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        func_0x0001067e56bc();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_1067e47dc();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x21 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    *(int *)(unaff_x21 + 0x78) = *(int *)(unaff_x20 + 0x78);
  }
  func_0x0001067e59e8();
  if ((extraout_x8_04 & 1) != 0) {
    func_0x0001067e5880();
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



/* Entry: 1067e4774; end: 1067e47db;  */

void FUN_1067e4774(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001067e5734();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e5970();
  }
  func_0x0001067e583c();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e59fc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5854();
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



/* Entry: 1067e47dc; end: 1067e4873;  */

void FUN_1067e47dc(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x0001067e5890();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_1067e3eec();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_1067e4a18();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1067e54f0();
        unaff_x21[2] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5880();
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



/* Entry: 1067e4874; end: 1067e487f;  */

undefined1  [16] FUN_1067e4874(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x3c;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 1067e4880; end: 1067e48ab;  */

undefined8 FUN_1067e4880(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e48ac(param_1);
  return param_1;
}



/* Entry: 1067e48ac; end: 1067e48c7;  */

void FUN_1067e48ac(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001067e5864();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
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



/* Entry: 1067e48c8; end: 1067e48cb;  */

undefined8 FUN_1067e48c8(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e48ac(param_1);
  return param_1;
}



/* Entry: 1067e48cc; end: 1067e48df;  */

void FUN_1067e48cc(void)

{
  FUN_1067e4880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e48e0; end: 1067e48eb;  */

undefined ** FUN_1067e48e0(void)

{
  return &PTR_DAT_11093f670;
}



/* Entry: 1067e48ec; end: 1067e499b;  */

long * FUN_1067e48ec(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001067e57e4();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1067e491c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1067e491c:
      param_4 = (long *)&UNK_10f3991dc;
      func_0x0001067e5878();
      func_0x0001067e576c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001067e58cc(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1067e4968;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1067e4968;
  param_4 = (long *)&UNK_10f399216;
  func_0x0001067e5878();
  func_0x0001067e5758();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1067e4968:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001067e5958();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001067e5a5c();
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



/* Entry: 1067e499c; end: 1067e4a13;  */

long FUN_1067e499c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x0001067e578c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar2 = param_1 + 1;
  }
  func_0x0001067e58a0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001067e5a70();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar2;
  return lVar2;
}



/* Entry: 1067e4a14; end: 1067e4a17;  */

void FUN_1067e4a14(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001067e5734();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e5970();
  }
  func_0x0001067e583c();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001067e58ac();
    }
    func_0x0001067e59fc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5854();
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



/* Entry: 1067e4a18; end: 1067e4a63;  */

void FUN_1067e4a18(void)

{
  undefined1 in_ZR;
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001067e59cc();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_1067e3dac();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1067e4a64; end: 1067e4a8f;  */

undefined8 FUN_1067e4a64(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e4a90(param_1);
  return param_1;
}



/* Entry: 1067e4a90; end: 1067e4aa3;  */

void FUN_1067e4a90(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0001067e59cc();
  if ((bool)in_ZR) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_1067e3dac();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1067e4aa4; end: 1067e4ab7;  */

void FUN_1067e4aa4(void)

{
  FUN_1067e4a64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e4ab8; end: 1067e4ac3;  */

undefined ** FUN_1067e4ab8(void)

{
  return &PTR_DAT_11093f6c8;
}



/* Entry: 1067e4ac4; end: 1067e4b77;  */

long * FUN_1067e4ac4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001067e5924();
  if (*(int *)(param_1 + 0x1c) == 1) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x18);
    param_4 = (long *)0x1;
    func_0x0001067e5948();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001067e5958();
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



/* Entry: 1067e4b78; end: 1067e4b7b;  */

void FUN_1067e4b78(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x0001067e5890();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_1067e3eec();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_1067e4a18();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_1067e54f0();
        unaff_x21[2] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001067e5880();
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



/* Entry: 1067e4b7c; end: 1067e4ba7;  */

undefined8 FUN_1067e4b7c(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e4ba8(param_1);
  return param_1;
}



/* Entry: 1067e4ba8; end: 1067e4bc3;  */

void FUN_1067e4ba8(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001067e5864();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
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



/* Entry: 1067e4bc4; end: 1067e4bc7;  */

undefined8 FUN_1067e4bc4(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e4ba8(param_1);
  return param_1;
}



/* Entry: 1067e4bc8; end: 1067e4bdb;  */

void FUN_1067e4bc8(void)

{
  FUN_1067e4b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e4bdc; end: 1067e4be7;  */

undefined ** FUN_1067e4bdc(void)

{
  return &PTR_DAT_11093f720;
}



/* Entry: 1067e4be8; end: 1067e4c1f;  */

void FUN_1067e4be8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001067e5818();
  func_0x0001067e5a04();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 1067e4c20; end: 1067e4d0b;  */

long * FUN_1067e4c20(long *param_1,long param_2,long *param_3,long *param_4)

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
  
  func_0x0001067e57e4();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1067e4c50;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1067e4c50:
      param_4 = (long *)&UNK_10f399256;
      func_0x0001067e5878();
      func_0x0001067e576c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001067e58cc(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1067e4c9c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1067e4c9c;
  param_4 = (long *)&UNK_10f3992a5;
  func_0x0001067e5878();
  func_0x0001067e5758();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1067e4c9c:
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    func_0x00010599ccb0();
    param_1 = unaff_x19;
    param_3 = unaff_x20;
    unaff_x20 = unaff_x19;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x21 + 0x28) != 0) {
    func_0x0001067e59a8();
    plVar2 = (long *)0x20;
    func_0x0001001a59d0(0x20,param_1);
    func_0x0001067e599c();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001067e5958();
    if ((long)param_3 < 0) {
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    func_0x0001067e5a5c();
    if (*plVar2 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        param_3 = (long *)(ulong)(uint)(iVar3 - iVar4);
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
  return unaff_x20;
}



/* Entry: 1067e4d0c; end: 1067e4e2b;  */

long FUN_1067e4d0c(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar3;
  
  func_0x0001067e578c();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar3 = param_1 + 1;
  }
  func_0x0001067e58a0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  iVar1 = -9;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x0001067e5824();
    iVar1 = extraout_w8;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x0001067e5980((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * iVar1 + 0x280);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001067e5a70();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)lVar3;
  return lVar3;
}



/* Entry: 1067e4e2c; end: 1067e4e4f;  */

undefined8 FUN_1067e4e2c(undefined8 param_1)

{
  func_0x0001067e58c4();
  return param_1;
}



/* Entry: 1067e4e50; end: 1067e4e53;  */

undefined8 FUN_1067e4e50(undefined8 param_1)

{
  func_0x0001067e58c4();
  return param_1;
}



/* Entry: 1067e4e54; end: 1067e4e67;  */

void FUN_1067e4e54(void)

{
  FUN_1067e4e2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e4e68; end: 1067e4eef;  */

undefined ** FUN_1067e4e68(void)

{
  return &PTR_DAT_11093f780;
}



/* Entry: 1067e4ef0; end: 1067e4f1b;  */

undefined8 FUN_1067e4ef0(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e4f1c(param_1);
  return param_1;
}



/* Entry: 1067e4f1c; end: 1067e4f37;  */

void FUN_1067e4f1c(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001067e5864();
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
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



/* Entry: 1067e4f38; end: 1067e4f3b;  */

undefined8 FUN_1067e4f38(undefined8 param_1)

{
  func_0x0001067e58c4();
  FUN_1067e4f1c(param_1);
  return param_1;
}



/* Entry: 1067e4f3c; end: 1067e4f4f;  */

void FUN_1067e4f3c(void)

{
  FUN_1067e4ef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e4f50; end: 1067e4f5b;  */

undefined ** FUN_1067e4f50(void)

{
  return &PTR_DAT_11093f7e8;
}



/* Entry: 1067e4f5c; end: 1067e4f8f;  */

void FUN_1067e4f5c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001067e5818();
  func_0x0001067e5a04();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 1067e4f90; end: 1067e5063;  */

long * FUN_1067e4f90(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001067e57e4();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1067e4fc0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1067e4fc0:
      param_4 = (long *)&UNK_10f3992f2;
      func_0x0001067e5878();
      func_0x0001067e576c();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0001067e58cc(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1067e500c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1067e500c;
  param_4 = (long *)&UNK_10f399340;
  func_0x0001067e5878();
  func_0x0001067e5758();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1067e500c:
  plVar2 = param_1;
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x0001067e59a8();
    plVar2 = (long *)0x18;
    func_0x0001001a59d0(0x18,param_1);
    func_0x0001067e599c();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001067e5958();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001067e5a5c();
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



/* Entry: 1067e5064; end: 1067e516b;  */

long FUN_1067e5064(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x0001067e578c();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar2 = param_1 + 1;
  }
  func_0x0001067e58a0(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x0001067e5934();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001067e5980((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001067e5a70();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 1067e516c; end: 1067e518f;  */

undefined8 FUN_1067e516c(undefined8 param_1)

{
  func_0x0001067e58c4();
  return param_1;
}



/* Entry: 1067e5190; end: 1067e5193;  */

undefined8 FUN_1067e5190(undefined8 param_1)

{
  func_0x0001067e58c4();
  return param_1;
}



/* Entry: 1067e5194; end: 1067e51a7;  */

void FUN_1067e5194(void)

{
  FUN_1067e516c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067e51a8; end: 1067e527f;  */

undefined ** FUN_1067e51a8(void)

{
  return &PTR_DAT_11093f848;
}



/* Entry: 1067e5280; end: 1067e54ef;  */

void FUN_1067e5280(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    func_0x0001067e5a1c();
  }
  else {
    func_0x0001067e58f8();
  }
  func_0x0001067e5904(&PTR_FUN_11093f230);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1067e54f0; end: 1067e571b;  */

void FUN_1067e54f0(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x0001067e5964();
  if (param_1 == 0) {
    func_0x0001067e5940();
  }
  else {
    func_0x0001067e57a0();
  }
  func_0x0001067e5a34();
  func_0x0001067e5a48(&PTR_FUN_11093f280);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001067e57cc();
  }
  func_0x0001067e58ec();
  *(long *)(unaff_x21 + 0x10) = param_1;
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  return;
}



/* Entry: 1067e571c; end: 1067e5ad7;  */

void FUN_1067e571c(void)

{
  return;
}



/* Entry: 1067e5ad8; end: 1067e5b4b; -[SCGrapheneSecurityConfigsMetric2 init] */

undefined1 * FUN_1067e5ad8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f34b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067e5b4c; end: 1067e5bc3;  */

void FUN_1067e5b4c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11093f998,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067e5bc4; end: 1067e5c3b;  */

void FUN_1067e5bc4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11093f9e8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067e5c3c; end: 1067e5daf;  */

void FUN_1067e5c3c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11093fa38,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1067e5db0;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_11093fa88,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1067e5db0; end: 1067e5e27;  */

void FUN_1067e5db0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11093fa88,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067e5e28; end: 1067e5f9b;  */

void FUN_1067e5e28(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11093fad8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1067e5f9c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11093fb28,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_1067e6110;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_11093fb78,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 1067e5f9c; end: 1067e610f;  */

void FUN_1067e5f9c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11093fb28,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1067e6110;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_11093fb78,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1067e6110; end: 1067e6187;  */

void FUN_1067e6110(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11093fb78,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067e6188; end: 1067e61ff;  */

void FUN_1067e6188(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11093fbc8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067e6200; end: 1067e6277;  */

void FUN_1067e6200(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11093fc18,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067e6278; end: 1067e62ef; -[SCNSecurityConfigurationClientSecurityConfigurationClient initWithCpp:] */

undefined1 * FUN_1067e6278(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f34b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1067e6618();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1067e65ec(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067e62f0; end: 1067e6423; +[SCNSecurityConfigurationClientSecurityConfigurationClient create:bitsetLengthBits:bitsetData:] */

void FUN_1067e62f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int extraout_w10;
  undefined ***pppuVar1;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_5);
  func_0x00010029a6ec(&lStack_60,param_5);
  FUN_1067e6648(&lStack_48,param_3,param_4,&lStack_60);
  func_0x000100100fec(&lStack_60);
  if (lStack_48 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    ppuStack_38 = &PTR_DAT_11093fc98;
    lStack_60 = lStack_48;
    lStack_58 = lStack_40;
    if (lStack_40 != 0) {
      do {
        FUN_1067e6618();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = &ppuStack_38;
    func_0x00010015c218(pppuVar1,&lStack_60,FUN_1067e6578);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000df524(&lStack_60);
  }
  FUN_1067e65ec(&lStack_48);
  func_0x0001067e6628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}


