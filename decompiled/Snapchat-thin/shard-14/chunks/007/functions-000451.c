/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b599498; end: 10b59955f;  */

long * FUN_10b599498(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  long *plVar5;
  int iVar6;
  
  plVar2 = param_2;
  plVar5 = param_3;
  func_0x00010b59a458();
  if ((long)plVar2 < 0) {
    plVar2 = (long *)unaff_x22[1];
    if (plVar2 != (long *)0x0) {
      plVar1 = (long *)*unaff_x22;
      goto LAB_10b5994d0;
    }
  }
  else {
    plVar1 = unaff_x22;
    if ((int)plVar2 != 0) {
LAB_10b5994d0:
      func_0x00010b59a434();
      func_0x00010b59a570();
      func_0x00010b59a3e8();
      param_2 = plVar1;
    }
  }
  func_0x00010b59a4b4(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)plVar2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b599528;
  }
  else if ((int)plVar2 == 0) goto LAB_10b599528;
  func_0x00010b59a434();
  param_2 = param_3;
  func_0x00010b59a3e8(param_3,2);
LAB_10b599528:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b59a504();
  if ((long)plVar5 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar4 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
      if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar3,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 10b599560; end: 10b5995db;  */

long FUN_10b599560(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x00010b59a484();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar3 = param_1 + 1;
  }
  func_0x00010b59a4d8(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b59a4f8();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar3 = lVar1 + lVar3;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b5995dc; end: 10b5995df;  */

void FUN_10b5995dc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b59a41c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b59a4c0();
    }
    func_0x00010b59a55c();
  }
  func_0x00010b59a4cc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b59a4c0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b59a4a4();
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



/* Entry: 10b5995e0; end: 10b59964f;  */

void FUN_10b5995e0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b59a41c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b59a4c0();
    }
    func_0x00010b59a55c();
  }
  func_0x00010b59a4cc(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b59a4c0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b59a4a4();
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



/* Entry: 10b599650; end: 10b59965f;  */

void FUN_10b599650(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
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



/* Entry: 10b599660; end: 10b599683;  */

undefined8 FUN_10b599660(undefined8 param_1)

{
  func_0x000107c39ec8();
  return param_1;
}



/* Entry: 10b599684; end: 10b599687;  */

undefined8 FUN_10b599684(undefined8 param_1)

{
  func_0x000107c39ec8();
  return param_1;
}



/* Entry: 10b599688; end: 10b59969b;  */

void FUN_10b599688(void)

{
  FUN_10b599660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59969c; end: 10b59975b;  */

undefined ** FUN_10b59969c(void)

{
  return &PTR_DAT_110d12870;
}



/* Entry: 10b59975c; end: 10b59976f;  */

void FUN_10b59975c(void)

{
  func_0x000107c30644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b599770; end: 10b599793;  */

undefined ** FUN_10b599770(void)

{
  return &PTR_DAT_110d128e0;
}



/* Entry: 10b599794; end: 10b59984f;  */

long * FUN_10b599794(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  int iVar6;
  
  plVar1 = param_1;
  plVar5 = param_3;
  if ((int)param_1[2] != 0) {
    plVar2 = param_1;
    func_0x00010b59a3a0();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b59a518();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(int *)((long)param_1 + 0x14) != 0) {
    func_0x00010b59a3a0();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b59a3d0();
    param_2 = plVar2;
  }
  if ((int)param_1[3] != 0) {
    func_0x00010b59a3a0();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b59a3d0();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x00010b59a504();
    if ((long)plVar5 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      plVar5 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar5) {
      while( true ) {
        iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar4 = (int)plVar5;
        plVar5 = (long *)(ulong)(uint)(iVar4 - iVar6);
        if (iVar4 - iVar6 == 0 || iVar4 < iVar6) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar6;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar4);
    }
    _memcpy(param_2,lVar3,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar5);
  }
  return param_2;
}



/* Entry: 10b599850; end: 10b59991f;  */

long FUN_10b599850(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x14)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + (ulong)((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
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



/* Entry: 10b599920; end: 10b599933;  */

void FUN_10b599920(void)

{
  func_0x000107c30650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b599934; end: 10b59a077;  */

long * FUN_10b599934(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  int iVar8;
  long *unaff_x22;
  undefined8 *puVar9;
  int iVar10;
  
  plVar4 = param_2;
  plVar5 = param_3;
  func_0x00010b59a4b4(*(undefined8 *)(param_1 + 0x30));
  if ((long)plVar4 < 0) {
    plVar4 = (long *)unaff_x22[1];
    if (plVar4 != (long *)0x0) {
      plVar3 = (long *)*unaff_x22;
      goto LAB_10b599978;
    }
  }
  else {
    plVar3 = unaff_x22;
    if ((int)plVar4 != 0) {
LAB_10b599978:
      func_0x00010b59a434();
      func_0x00010b59a570();
      func_0x00010b59a44c();
      param_2 = plVar3;
    }
  }
  func_0x00010b59a4b4(*(undefined8 *)(param_1 + 0x38));
  if ((long)plVar4 < 0) {
    plVar4 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_10b5999b4;
  }
  else if ((int)plVar4 != 0) {
LAB_10b5999b4:
    func_0x00010b59a434();
    plVar4 = (long *)0x4;
    param_2 = param_3;
    func_0x00010b59a44c();
  }
  iVar8 = *(int *)(param_1 + 0x20);
  puVar9 = (undefined8 *)0x0;
  while (iVar10 = (int)puVar9, iVar8 != iVar10) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar6 & 1) != 0) {
      puVar1 = (ulong *)(uVar6 + (long)iVar10 * 8 + 7);
    }
    plVar4 = (long *)*puVar1;
    plVar5 = (long *)(ulong)*(uint *)(plVar4 + 4);
    param_2 = (long *)0x5;
    func_0x00010b59a394();
    puVar9 = (undefined8 *)(ulong)(iVar10 + 1);
  }
  uVar2 = *(uint *)(param_1 + 0x78);
  plVar3 = (long *)(ulong)uVar2;
  if (uVar2 == 6) {
    lVar7 = 0x18;
LAB_10b599a34:
    plVar4 = *(long **)(param_1 + 0x70);
    plVar5 = (long *)(ulong)*(uint *)((long)plVar4 + lVar7);
    func_0x00010b59a394();
    param_2 = plVar3;
  }
  else if (uVar2 == 7) {
    lVar7 = 0x20;
    goto LAB_10b599a34;
  }
  func_0x00010b59a4b4(*(undefined8 *)(param_1 + 0x40));
  if ((long)plVar4 < 0) {
    if (puVar9[1] == 0) goto LAB_10b599a84;
    puVar9 = (undefined8 *)*puVar9;
  }
  else if ((int)plVar4 == 0) goto LAB_10b599a84;
  func_0x00010b59a434(puVar9);
  plVar3 = param_3;
  func_0x00010b59a44c(param_3,8);
  param_2 = plVar3;
LAB_10b599a84:
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x48) + 0x14);
    plVar3 = (long *)0x9;
    func_0x00010b59a394();
    param_2 = plVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x50) + 0x1c);
    plVar3 = (long *)0xa;
    func_0x00010b59a394();
    param_2 = plVar3;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x58) + 0x18);
    plVar3 = (long *)0xb;
    func_0x00010b59a394();
    param_2 = plVar3;
  }
  if (*(int *)(param_1 + 0x78) == 0xc) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x70) + 0x28);
    plVar3 = (long *)0xc;
    func_0x00010b59a394();
    param_2 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)(param_1 + 0x68) != 0) {
    func_0x00010b59a550();
    plVar4 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar3);
    func_0x00010b59a518();
    param_2 = plVar4;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x60) + 0x20);
    plVar4 = (long *)0xe;
    func_0x00010b59a394();
    param_2 = plVar4;
  }
  if (*(int *)(param_1 + 0x78) == 0xf) {
    plVar5 = (long *)(ulong)*(uint *)(*(long *)(param_1 + 0x70) + 0x10);
    plVar4 = (long *)0xf;
    func_0x00010b59a394();
    param_2 = plVar4;
  }
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    func_0x00010b59a550();
    param_2 = (long *)0x80;
    func_0x000107c280a8(0x80,plVar4);
    func_0x00010b59a3d0();
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b59a504();
  if ((long)plVar5 < 0) {
    lVar7 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar7 = extraout_x8 + 8;
  }
  if ((long)(int)plVar5 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar7,(ulong)plVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar5);
  }
  while( true ) {
    iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar8 = (int)plVar5;
    plVar5 = (long *)(ulong)(uint)(iVar8 - iVar10);
    if (iVar8 - iVar10 == 0 || iVar8 < iVar10) break;
    func_0x00010b4d5738();
    lVar7 = (long)param_2 + (long)iVar10;
    param_2 = param_3;
    func_0x000107c303e4(param_3,lVar7);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar8);
}



/* Entry: 10b59a078; end: 10b59a087;  */

void FUN_10b59a078(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_FUN_110d12478;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b59a088; end: 10b59a107;  */

void FUN_10b59a088(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d12478;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 10b59a108; end: 10b59a16b;  */

undefined8 * FUN_10b59a108(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c39ecc();
  }
  else {
    func_0x00010b59a538();
  }
  *puVar1 = &PTR_DAT_110d125b8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x00010b599720();
  return puVar1;
}



/* Entry: 10b59a16c; end: 10b59a2af;  */

undefined8 * FUN_10b59a16c(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c39ecc();
  }
  else {
    func_0x00010b59a538();
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_FUN_110d123d8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b59a410();
  }
  *(undefined4 *)(puVar2 + 3) = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  *(int *)((long)puVar2 + 0x1c) = iVar1;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10);
  if (iVar1 - 1U < 3) {
    *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  }
  return puVar2;
}



/* Entry: 10b59a2b0; end: 10b59a31f;  */

undefined8 * FUN_10b59a2b0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d12478;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_10b599650();
  return puVar1;
}



/* Entry: 10b59a320; end: 10b59a387;  */

undefined8 * FUN_10b59a320(undefined8 *param_1)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010b59a4ec();
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x30;
    __Znwm();
  }
  else {
    func_0x00010b59a544();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_DAT_110d12568;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b59a410();
  }
  func_0x00010598fd00(param_1 + 2);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b59a388; end: 10b59a58b;  */

void FUN_10b59a388(void)

{
  return;
}



/* Entry: 10b59a58c; end: 10b59a59f;  */

void FUN_10b59a58c(void)

{
  func_0x000107c30654();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59a5a0; end: 10b59a753;  */

long * FUN_10b59a5a0(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  
  puVar8 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar8 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar8[1];
    if (lVar4 == 0) goto LAB_10b59a618;
    puVar9 = (undefined8 *)*puVar8;
  }
  else {
    puVar9 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) == '\0') goto LAB_10b59a618;
  }
  func_0x000107c303d4(puVar9,lVar4,1,&UNK_10f77d539);
  plVar3 = param_3;
  func_0x000107c280a0(param_3,1,puVar8,param_2);
  param_2 = plVar3;
LAB_10b59a618:
  lVar4 = 8;
  for (uVar11 = (ulong)(*(uint *)(param_1 + 0x18) &
                       ((int)*(uint *)(param_1 + 0x18) >> 0x1f ^ 0xffffffffU)); uVar11 != 0;
      uVar11 = uVar11 - 1) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar2 = (ulong *)(param_1 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar2 = (ulong *)(uVar6 + lVar4 + -1);
    }
    puVar9 = (undefined8 *)*puVar2;
    lVar5 = (long)*(char *)((long)puVar9 + 0x17);
    puVar8 = puVar9;
    if (lVar5 < 0) {
      lVar5 = puVar9[1];
      puVar8 = (undefined8 *)*puVar9;
    }
    func_0x000107c303d4(puVar8,lVar5,1,&UNK_10f77d576);
    lVar5 = (long)*(char *)((long)puVar9 + 0x17);
    if (((lVar5 < 0) && (lVar5 = puVar9[1], 0x7f < lVar5)) ||
       ((*param_3 - (long)param_2) + 0xe < lVar5)) {
      plVar3 = param_3;
      func_0x00010b4d5120(param_3,2,puVar9,param_2);
    }
    else {
      *(undefined1 *)param_2 = 0x12;
      *(char *)((long)param_2 + 1) = (char)lVar5;
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        puVar9 = (undefined8 *)*puVar9;
      }
      _memcpy((undefined1 *)((long)param_2 + 2),puVar9,lVar5);
      plVar3 = (long *)((undefined1 *)((long)param_2 + 2) + lVar5);
    }
    lVar4 = lVar4 + 8;
    param_2 = plVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar11 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar11 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar11 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if ((long)(int)uVar11 <= *param_3 - (long)param_2) {
    _memcpy(param_2,lVar4,uVar11 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar11);
  }
  while( true ) {
    iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
    iVar7 = (int)uVar11;
    uVar11 = (ulong)(uint)(iVar7 - iVar10);
    if (iVar7 - iVar10 == 0 || iVar7 < iVar10) break;
    func_0x00010b4d5738();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar10);
    param_2 = param_3;
    func_0x000107c303e4(param_3,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_2 + (long)iVar7);
}



/* Entry: 10b59a754; end: 10b59a80b;  */

ulong FUN_10b59a754(long param_1)

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
  uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar5 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar5 + 8);
  }
  if (lVar6 != 0) {
    func_0x000107c282a0();
    uVar4 = uVar4 + uVar5 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    uVar4 = lVar6 + uVar4;
  }
  *(int *)(param_1 + 0x30) = (int)uVar4;
  return uVar4;
}



/* Entry: 10b59a80c; end: 10b59a80f;  */

void FUN_10b59a80c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
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



/* Entry: 10b59a810; end: 10b59a8bf;  */

void FUN_10b59a810(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010598fce8(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x28,uVar1,uVar2);
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



/* Entry: 10b59a8c0; end: 10b59a8c7;  */

void FUN_10b59a8c0(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_DAT_110d12a80;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b59a8c8; end: 10b59a9df;  */

void FUN_10b59a8c8(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110d12a80;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  puVar1[5] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 10b59a9e0; end: 10b59aa8b;  */

undefined8 * FUN_10b59a9e0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d12b80;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b59b204(param_1 + 2,param_2,param_3 + 0x10);
  func_0x00010598fd00(param_1 + 5,param_2,param_3 + 0x28);
  func_0x00010598fd00(param_1 + 8,param_2,param_3 + 0x40);
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xb] = *(undefined8 *)(param_3 + 0x58);
  return param_1;
}



/* Entry: 10b59aa8c; end: 10b59aabb;  */

long FUN_10b59aa8c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b59b260(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59aabc; end: 10b59aabf;  */

long FUN_10b59aabc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b59b260(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59aac0; end: 10b59aad3;  */

void FUN_10b59aac0(void)

{
  FUN_10b59aa8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59aad4; end: 10b59aadf;  */

undefined ** FUN_10b59aad4(void)

{
  return &PTR_DAT_110d12bc0;
}



/* Entry: 10b59aae0; end: 10b59acdf;  */

/* WARNING: Removing unreachable block (ram,0x00010b59ac40) */
/* WARNING: Removing unreachable block (ram,0x00010b59ac50) */
/* WARNING: Removing unreachable block (ram,0x00010b59ac54) */
/* WARNING: Removing unreachable block (ram,0x00010b59ac60) */
/* WARNING: Removing unreachable block (ram,0x00010b59ac68) */
/* WARNING: Removing unreachable block (ram,0x00010b59ac90) */
/* WARNING: Removing unreachable block (ram,0x00010b59ac70) */
/* WARNING: Removing unreachable block (ram,0x00010b59ac78) */
/* WARNING: Removing unreachable block (ram,0x00010b59ac7c) */
/* WARNING: Removing unreachable block (ram,0x00010b59ac84) */

long * FUN_10b59aae0(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int extraout_w8;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  long unaff_x26;
  
  uVar14 = 0;
  uVar2 = *(uint *)(param_1 + 3);
  plVar15 = (long *)(ulong)uVar2;
  plVar7 = param_1;
  plVar12 = param_2;
  while( true ) {
    cVar4 = SBORROW4(uVar2,uVar14);
    cVar5 = (int)(uVar2 - uVar14) < 0;
    uVar6 = uVar2 == uVar14;
    if ((bool)uVar6) break;
    uVar10 = param_1[2];
    puVar1 = (ulong *)(param_1 + 2);
    if ((uVar10 & 1) != 0) {
      puVar1 = (ulong *)(uVar10 + (long)(int)uVar14 * 8 + 7);
    }
    param_2 = (long *)*puVar1;
    plVar7 = (long *)0x1;
    func_0x000107c303cc(1,param_2,*(undefined4 *)((long)param_2 + 0x4c),plVar12,param_3);
    uVar14 = uVar14 + 1;
    plVar12 = plVar7;
  }
  plVar8 = plVar7;
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    func_0x00010b59b3dc();
    plVar8 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010b59b438();
    param_2 = plVar7;
    plVar12 = plVar8;
  }
  func_0x00010b59b488((int)param_1[6]);
  while (unaff_x26 != 0) {
    func_0x00010b59b34c();
    plVar8 = plVar15;
    if ((long)param_2 < 0) {
      param_2 = (long *)plVar15[1];
      plVar8 = (long *)*plVar15;
    }
    func_0x00010b59b394(plVar8);
    cVar3 = *(char *)((long)plVar15 + 0x17);
    if ((((long)cVar3 < 0) && (func_0x00010b59b45c(), !(bool)uVar6 && cVar5 == cVar4)) ||
       (func_0x00010b59b380(), cVar5 != cVar4)) {
      param_2 = (long *)0x3;
      plVar8 = param_3;
      func_0x00010b59b3a0();
      plVar12 = plVar8;
    }
    else {
      func_0x00010b59b400();
      if (extraout_w8 < 0) {
        plVar15 = (long *)*plVar15;
      }
      func_0x00010b59b36c();
      plVar12 = (long *)((long)plVar12 + (long)cVar3);
    }
    func_0x00010b59b47c();
  }
  if (*(int *)((long)param_1 + 0x5c) != 0) {
    func_0x00010b59b3dc();
    plVar12 = (long *)(ulong)*(uint *)((long)param_1 + 0x5c);
    func_0x000107c280a8(0x20,plVar8);
    func_0x000107c280b8();
  }
  func_0x00010b59b488((int)param_1[9]);
  if ((param_1[1] & 1U) != 0) {
    uVar11 = param_1[1] & 0xfffffffffffffffe;
    uVar10 = (ulong)*(char *)(uVar11 + 0x1f);
    if ((long)uVar10 < 0) {
      lVar9 = *(long *)(uVar11 + 8);
      uVar10 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      lVar9 = uVar11 + 8;
    }
    if (*param_3 - (long)plVar12 < (long)(int)uVar10) {
      while( true ) {
        iVar16 = ((int)*param_3 - (int)plVar12) + 0x10;
        iVar13 = (int)uVar10;
        uVar10 = (ulong)(uint)(iVar13 - iVar16);
        if (iVar13 - iVar16 == 0 || iVar13 < iVar16) break;
        func_0x00010b4d5738();
        lVar9 = (long)plVar12 + (long)iVar16;
        plVar12 = param_3;
        func_0x000107c303e4(param_3,lVar9);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar12 + (long)iVar13);
    }
    _memcpy(plVar12,lVar9,uVar10 & 0xffffffff);
    return (long *)((long)plVar12 + (long)(int)uVar10);
  }
  return plVar12;
}



/* Entry: 10b59ace0; end: 10b59add3;  */

/* WARNING: Removing unreachable block (ram,0x00010b59ad54) */
/* WARNING: Removing unreachable block (ram,0x00010b59ad70) */

void FUN_10b59ace0(long param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  lVar4 = (long)iVar2;
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  for (lVar5 = lVar4 << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
    uVar3 = *puVar1;
    FUN_10b59b074();
    lVar4 = uVar3 + lVar4 + (ulong)((int)LZCOUNT((int)uVar3) * -9 + 0x160U >> 6);
    iVar2 = (int)lVar4;
    puVar1 = puVar1 + 1;
  }
  func_0x00010b59b428(*(undefined4 *)(param_1 + 0x30));
  func_0x00010b59b428(*(undefined4 *)(param_1 + 0x48));
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x58) * 2;
  if (*(int *)(param_1 + 0x5c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x5c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar3 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x60) = iVar2;
  return;
}



/* Entry: 10b59add4; end: 10b59ade7;  */

void FUN_10b59add4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b59b468();
  FUN_10b59add4();
  func_0x00010b59b444();
  func_0x00010598fce8(unaff_x19 + 0x40,unaff_x20 + 0x40);
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x58) = 1;
  }
  if (*(int *)(unaff_x20 + 0x5c) != 0) {
    *(int *)(unaff_x19 + 0x5c) = *(int *)(unaff_x20 + 0x5c);
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



/* Entry: 10b59ade8; end: 10b59ae27;  */

long FUN_10b59ade8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c282b4(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59ae28; end: 10b59ae2b;  */

long FUN_10b59ae28(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c282b4(param_1 + 0x28);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59ae2c; end: 10b59ae3f;  */

void FUN_10b59ae2c(void)

{
  FUN_10b59ade8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59ae40; end: 10b59ae4b;  */

undefined ** FUN_10b59ae40(void)

{
  return &PTR_DAT_110d12c20;
}



/* Entry: 10b59ae4c; end: 10b59ae97;  */

void FUN_10b59ae4c(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c282c0(param_1 + 0x10);
  func_0x000107c282c0(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x48) = 0;
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



/* Entry: 10b59ae98; end: 10b59b073;  */

/* WARNING: Removing unreachable block (ram,0x00010b59afd4) */
/* WARNING: Removing unreachable block (ram,0x00010b59afe4) */
/* WARNING: Removing unreachable block (ram,0x00010b59afe8) */
/* WARNING: Removing unreachable block (ram,0x00010b59aff4) */
/* WARNING: Removing unreachable block (ram,0x00010b59affc) */
/* WARNING: Removing unreachable block (ram,0x00010b59b024) */
/* WARNING: Removing unreachable block (ram,0x00010b59b004) */
/* WARNING: Removing unreachable block (ram,0x00010b59b00c) */
/* WARNING: Removing unreachable block (ram,0x00010b59b010) */
/* WARNING: Removing unreachable block (ram,0x00010b59b018) */

long * FUN_10b59ae98(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int extraout_w8;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  int iVar14;
  long unaff_x26;
  
  puVar13 = (undefined8 *)(param_1[8] & 0xfffffffffffffffc);
  plVar7 = (long *)(long)*(char *)((long)puVar13 + 0x17);
  plVar6 = param_1;
  if ((long)plVar7 < 0) {
    plVar7 = (long *)0x0;
    if ((long *)puVar13[1] == (long *)0x0) goto LAB_10b59af10;
    puVar5 = (undefined8 *)*puVar13;
    plVar7 = (long *)puVar13[1];
  }
  else {
    puVar5 = puVar13;
    if (*(char *)((long)puVar13 + 0x17) == '\0') goto LAB_10b59af10;
  }
  func_0x000107c303d4(puVar5,plVar7,1,&UNK_10f77d65c);
  plVar7 = (long *)0x1;
  plVar6 = param_3;
  func_0x000107c280a0(param_3,1,puVar13,param_2);
  param_2 = plVar6;
LAB_10b59af10:
  uVar10 = (uint)*(byte *)(param_1 + 9);
  cVar2 = SBORROW4(uVar10,1);
  cVar3 = (int)(uVar10 - 1) < 0;
  uVar4 = uVar10 == 1;
  if ((bool)uVar4) {
    func_0x00010b59b3dc();
    param_2 = (long *)0x10;
    func_0x000107c280a8();
    func_0x00010b59b438();
    plVar7 = plVar6;
  }
  func_0x00010b59b488((int)param_1[3]);
  while (unaff_x26 != 0) {
    func_0x00010b59b34c();
    puVar13 = unaff_x23;
    if ((long)plVar7 < 0) {
      plVar7 = (long *)unaff_x23[1];
      puVar13 = (undefined8 *)*unaff_x23;
    }
    func_0x00010b59b394(puVar13);
    cVar1 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar1 < 0) && (func_0x00010b59b45c(), !(bool)uVar4 && cVar3 == cVar2)) ||
       (func_0x00010b59b380(), cVar3 != cVar2)) {
      plVar7 = (long *)0x3;
      param_2 = param_3;
      func_0x00010b59b3a0();
    }
    else {
      func_0x00010b59b400();
      if (extraout_w8 < 0) {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      func_0x00010b59b36c();
      param_2 = (long *)((long)param_2 + (long)cVar1);
    }
    func_0x00010b59b47c();
  }
  func_0x00010b59b488((int)param_1[6]);
  if ((param_1[1] & 1U) != 0) {
    uVar11 = param_1[1] & 0xfffffffffffffffe;
    uVar9 = (ulong)*(char *)(uVar11 + 0x1f);
    if ((long)uVar9 < 0) {
      lVar8 = *(long *)(uVar11 + 8);
      uVar9 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      lVar8 = uVar11 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar9) {
      while( true ) {
        iVar14 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar12 = (int)uVar9;
        uVar9 = (ulong)(uint)(iVar12 - iVar14);
        if (iVar12 - iVar14 == 0 || iVar12 < iVar14) break;
        func_0x00010b4d5738();
        lVar8 = (long)param_2 + (long)iVar14;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar8);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar12);
    }
    _memcpy(param_2,lVar8,uVar9 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar9);
  }
  return param_2;
}



/* Entry: 10b59b074; end: 10b59b11f;  */

/* WARNING: Removing unreachable block (ram,0x00010b59b0bc) */

void FUN_10b59b074(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  while ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != 0) {
    FUN_10b59b330();
    func_0x00010b59b3f0();
  }
  func_0x00010b59b428(*(undefined4 *)(param_1 + 0x30));
  uVar2 = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    uVar4 = uVar4 + (int)uVar2 + 1;
  }
  iVar1 = uVar4 + (uint)*(byte *)(param_1 + 0x48) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  return;
}



/* Entry: 10b59b120; end: 10b59b19f;  */

void FUN_10b59b120(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b59b468();
  func_0x00010598fce8();
  func_0x00010b59b444();
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
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x48) = 1;
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



/* Entry: 10b59b1a0; end: 10b59b1af;  */

void FUN_10b59b1a0(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0x50;
    __Znwm();
  }
  else {
    FUN_10b4d80e0(param_2,0x50);
  }
  func_0x00010b59b494(&PTR_FUN_110d12b30);
  *(undefined **)(param_2 + 0x40) = &DAT_11383d918;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined1 *)(param_2 + 0x48) = 0;
  return;
}



/* Entry: 10b59b1b0; end: 10b59b203;  */

int * FUN_10b59b1b0(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    func_0x000109311b98(param_1,0,iVar1);
    *param_1 = iVar1;
    func_0x00010b4c3844(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 10b59b204; end: 10b59b22f;  */

undefined8 * FUN_10b59b204(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b59add4(param_1,param_3);
  return param_1;
}



/* Entry: 10b59b230; end: 10b59b25f;  */

long * FUN_10b59b230(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b59b260; end: 10b59b32f;  */

long * FUN_10b59b260(long *param_1)

{
  func_0x000107c282b4(param_1 + 6);
  func_0x000107c282b4(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b59b330; end: 10b59b4a7;  */

long FUN_10b59b330(void)

{
  ulong uVar1;
  byte bVar2;
  ulong *unaff_x21;
  long unaff_x23;
  
  if ((*unaff_x21 & 1) != 0) {
    unaff_x21 = (ulong *)(*unaff_x21 + unaff_x23 + -1);
  }
  bVar2 = *(byte *)(*unaff_x21 + 0x17);
  uVar1 = *(ulong *)(*unaff_x21 + 8);
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  return uVar1 + ((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
}



/* Entry: 10b59b4a8; end: 10b59b4d3;  */

long FUN_10b59b4a8(long param_1)

{
  func_0x00010b59c080();
  FUN_10b59be80(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59b4d4; end: 10b59b4d7;  */

long FUN_10b59b4d4(long param_1)

{
  func_0x00010b59c080();
  FUN_10b59be80(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59b4d8; end: 10b59b4eb;  */

void FUN_10b59b4d8(void)

{
  FUN_10b59b4a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59b4ec; end: 10b59b4f7;  */

undefined ** FUN_10b59b4ec(void)

{
  return &PTR_DAT_110d12da0;
}



/* Entry: 10b59b4f8; end: 10b59b53b;  */

void FUN_10b59b4f8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b59b53c; end: 10b59b6b3;  */

long * FUN_10b59b53c(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x18);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    puVar1 = (ulong *)(param_1 + 0x10);
    if ((uVar5 & 1) != 0) {
      puVar1 = (ulong *)(uVar5 + (long)iVar7 * 8 + 7);
    }
    plVar2 = (long *)0x1;
    func_0x000107c303cc(1,*puVar1,*(undefined4 *)(*puVar1 + 0x1c),param_2,param_3);
    param_2 = plVar2;
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar2 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(byte *)(param_1 + 0x28);
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280a8(param_2,uVar3);
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



/* Entry: 10b59b6b4; end: 10b59b6b7;  */

void FUN_10b59b6b4(long param_1,long param_2)

{
  FUN_10b59b710(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 10b59b6b8; end: 10b59b70f;  */

void FUN_10b59b6b8(long param_1,long param_2)

{
  FUN_10b59b710(param_1 + 0x10,param_2 + 0x10);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 1;
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



/* Entry: 10b59b710; end: 10b59b71f;  */

void FUN_10b59b710(long *param_1,long param_2)

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



/* Entry: 10b59b720; end: 10b59b74b;  */

long FUN_10b59b720(long param_1)

{
  func_0x00010b59c080();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59b74c; end: 10b59b74f;  */

long FUN_10b59b74c(long param_1)

{
  func_0x00010b59c080();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59b750; end: 10b59b763;  */

void FUN_10b59b750(void)

{
  FUN_10b59b720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59b764; end: 10b59b76f;  */

undefined ** FUN_10b59b764(void)

{
  return &PTR_DAT_110d12de0;
}



/* Entry: 10b59b770; end: 10b59b79f;  */

void FUN_10b59b770(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b59c088();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b59b7a0; end: 10b59b867;  */

long * FUN_10b59b7a0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = param_1;
    func_0x00010b59c074();
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    uVar2 = 8;
    func_0x000107c280a8(8,lVar1);
    func_0x000107c280a8(param_2,uVar2);
  }
  puVar6 = (undefined8 *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] == 0) goto LAB_10b59b82c;
    puVar6 = (undefined8 *)*puVar6;
  }
  else if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_10b59b82c;
  func_0x00010b59c058(puVar6);
  param_2 = param_3;
  func_0x00010b59c03c(param_3,2);
LAB_10b59b82c:
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
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)uVar3;
      uVar3 = (ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar1 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar1,uVar3 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar3);
}



/* Entry: 10b59b868; end: 10b59b9af;  */

void FUN_10b59b868(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x00010b59c0a0();
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x18)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b59b9b0; end: 10b59ba3f;  */

undefined8 * FUN_10b59b9b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d12d60;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b59c060();
  }
  lVar2 = param_3 + 0x10;
  func_0x000107c2809c(lVar2,param_2);
  param_1[2] = lVar2;
  lVar2 = param_3 + 0x18;
  func_0x000107c2809c(lVar2,param_2);
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 6) = 0;
  iVar1 = *(int *)(param_3 + 0x34);
  *(int *)((long)param_1 + 0x34) = iVar1;
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  if (iVar1 == 3) {
    FUN_10b59bfa0(param_2,*(undefined8 *)(param_3 + 0x28));
    param_1[5] = param_2;
  }
  return param_1;
}



/* Entry: 10b59ba40; end: 10b59ba6b;  */

undefined8 FUN_10b59ba40(undefined8 param_1)

{
  func_0x00010b59c080();
  FUN_10b59ba6c(param_1);
  return param_1;
}



/* Entry: 10b59ba6c; end: 10b59baab;  */

void FUN_10b59ba6c(long param_1)

{
  ulong uVar1;
  
  func_0x000107c30258(param_1 + 0x10);
  func_0x000107c30258(param_1 + 0x18);
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(int *)(param_1 + 0x34) == 3) {
      uVar1 = *(ulong *)(param_1 + 8);
      if ((uVar1 & 1) != 0) {
        uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
      }
      if (uVar1 == 0) {
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_10b59b4a8();
        }
        __ZdlPv();
      }
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}



/* Entry: 10b59baac; end: 10b59baaf;  */

undefined8 FUN_10b59baac(undefined8 param_1)

{
  func_0x00010b59c080();
  FUN_10b59ba6c(param_1);
  return param_1;
}



/* Entry: 10b59bab0; end: 10b59bac3;  */

void FUN_10b59bab0(void)

{
  FUN_10b59ba40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59bac4; end: 10b59bacf;  */

undefined ** FUN_10b59bac4(void)

{
  return &PTR_DAT_110d12e20;
}



/* Entry: 10b59bad0; end: 10b59bb0f;  */

void FUN_10b59bad0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b59c088();
  func_0x000107c3025c(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  func_0x00010b59b95c();
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



/* Entry: 10b59bb10; end: 10b59bc43;  */

long * FUN_10b59bb10(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(param_1[2] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  plVar1 = param_1;
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b59bb54;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b59bb54:
    func_0x00010b59c058(puVar7,lVar3,param_3,&UNK_10f77d772);
    param_2 = param_3;
    func_0x00010b59c03c(param_3,1);
    plVar1 = param_2;
  }
  puVar7 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if (puVar7[1] == 0) goto LAB_10b59bbb4;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b59bbb4;
  func_0x00010b59c058(puVar7);
  plVar1 = param_3;
  func_0x00010b59c03c(param_3,2);
  param_2 = plVar1;
LAB_10b59bbb4:
  if (*(int *)((long)param_1 + 0x34) == 3) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,param_1[5],*(undefined4 *)(param_1[5] + 0x2c),param_2,param_3);
    param_2 = plVar1;
  }
  if (param_1[4] != 0) {
    func_0x00010b59c074();
    param_2 = (long *)param_1[4];
    uVar2 = 0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x000107c280ac(param_2,uVar2);
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
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar8);
        if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
        func_0x00010b4d5738();
        lVar3 = (long)param_2 + (long)iVar8;
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



/* Entry: 10b59bc44; end: 10b59bd07;  */

long FUN_10b59bc44(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  
  func_0x00010b59c0a0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    param_1 = param_1 + uVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    param_1 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(int *)(unaff_x19 + 0x34) == 3) {
    lVar2 = *(long *)(unaff_x19 + 0x28);
    FUN_10b59bd08();
    param_1 = param_1 + lVar2 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x30) = (int)param_1;
  return param_1;
}



/* Entry: 10b59bd08; end: 10b59bd33;  */

long FUN_10b59bd08(long param_1)

{
  func_0x00010b59b61c();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b59bd34; end: 10b59bd37;  */

void FUN_10b59bd34(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar4,uVar3);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x34) == iVar1) {
      if (iVar1 == 3) {
        FUN_10b59b6b8(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
      }
    }
    else {
      if (*(int *)(param_1 + 0x34) != 0) {
        func_0x00010b59b95c(param_1);
      }
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 == 3) {
        FUN_10b59bfa0(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
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



/* Entry: 10b59bd38; end: 10b59be67;  */

void FUN_10b59bd38(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x10,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(param_1 + 0x18,uVar4,uVar3);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  iVar1 = *(int *)(param_2 + 0x34);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x34) == iVar1) {
      if (iVar1 == 3) {
        FUN_10b59b6b8(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
      }
    }
    else {
      if (*(int *)(param_1 + 0x34) != 0) {
        func_0x00010b59b95c(param_1);
      }
      *(int *)(param_1 + 0x34) = iVar1;
      if (iVar1 == 3) {
        FUN_10b59bfa0(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
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



/* Entry: 10b59be68; end: 10b59be7f;  */

void FUN_10b59be68(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d12cc0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b59be80; end: 10b59beaf;  */

long * FUN_10b59be80(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b59beb0; end: 10b59bf9f;  */

void FUN_10b59beb0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d12cc0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b59bfa0; end: 10b59c01f;  */

undefined8 * FUN_10b59bfa0(undefined8 *param_1,long param_2)

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
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d12d10;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b59c060();
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  FUN_10b59b710(puVar1 + 2,param_2 + 0x10);
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_2 + 0x28);
  return puVar1;
}



/* Entry: 10b59c020; end: 10b59c113;  */

void FUN_10b59c020(void)

{
  return;
}



/* Entry: 10b59c114; end: 10b59c127;  */

void FUN_10b59c114(void)

{
  func_0x000107c30660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59c128; end: 10b59c147;  */

undefined ** FUN_10b59c128(void)

{
  return &PTR_DAT_110d12ef0;
}



/* Entry: 10b59c148; end: 10b59c24b;  */

long * FUN_10b59c148(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar1 = param_1;
  if ((char)param_1[2] == '\x01') {
    plVar2 = param_1;
    func_0x00010b59c324();
    plVar1 = (long *)0x8;
    func_0x000107c280a8(8,plVar2);
    func_0x00010b59c318();
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if (*(char *)((long)param_1 + 0x11) == '\x01') {
    func_0x00010b59c324();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar1);
    func_0x00010b59c318();
    param_2 = plVar2;
  }
  plVar1 = plVar2;
  if (*(char *)((long)param_1 + 0x12) == '\x01') {
    func_0x00010b59c324();
    plVar1 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar2);
    func_0x00010b59c318();
    param_2 = plVar1;
  }
  if (*(char *)((long)param_1 + 0x13) == '\x01') {
    func_0x00010b59c324();
    param_2 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar1);
    func_0x00010b59c318();
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



/* Entry: 10b59c24c; end: 10b59c28f;  */

long FUN_10b59c24c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  lVar2 = ((ulong)(ushort)((ushort)(byte)uVar1 + (ushort)(byte)((uint)uVar1 >> 8) +
                           (ushort)(byte)((uint)uVar1 >> 0x10) + (ushort)(byte)((uint)uVar1 >> 0x18)
                          ) & 0x7f) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x14) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b59c290; end: 10b59c2c7;  */

void FUN_10b59c290(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b59c134();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 1;
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



/* Entry: 10b59c2c8; end: 10b59c2cf;  */

void FUN_10b59c2c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x18);
  }
  *puVar1 = &PTR_DAT_110d12eb0;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b59c2d0; end: 10b59c317;  */

void FUN_10b59c2d0(undefined8 *param_1)

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
  *puVar1 = &PTR_DAT_110d12eb0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b59c318; end: 10b59c32f;  */

void FUN_10b59c318(byte *param_1)

{
  uint unaff_w21;
  
  for (; 0x7f < unaff_w21; unaff_w21 = unaff_w21 >> 7) {
    *param_1 = (byte)unaff_w21 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)unaff_w21;
  return;
}



/* Entry: 10b59c330; end: 10b59c397;  */

undefined8 * FUN_10b59c330(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d12f70;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010598fd00(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10b59c398; end: 10b59c3cb;  */

long FUN_10b59c398(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59c3cc; end: 10b59c3cf;  */

long FUN_10b59c3cc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c282b4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b59c3d0; end: 10b59c3e3;  */

void FUN_10b59c3d0(void)

{
  FUN_10b59c398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b59c3e4; end: 10b59c3ef;  */

undefined ** FUN_10b59c3e4(void)

{
  return &PTR_DAT_110d12fb0;
}



/* Entry: 10b59c3f0; end: 10b59c42b;  */

void FUN_10b59c3f0(long param_1)

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



/* Entry: 10b59c42c; end: 10b59c58f;  */

long * FUN_10b59c42c(long param_1,long *param_2,long *param_3)

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
    func_0x000107c303d4(puVar3,lVar5,1,&UNK_10f77d7b0);
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



/* Entry: 10b59c590; end: 10b59c623;  */

ulong FUN_10b59c590(long param_1)

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


