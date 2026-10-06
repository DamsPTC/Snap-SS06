/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5c0e4c; end: 10b5c1113;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5c0e4c(ulong *param_1,long param_2,ulong *param_3)

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



/* Entry: 10b5c1114; end: 10b5c113f;  */

undefined8 FUN_10b5c1114(undefined8 param_1)

{
  func_0x00010b5c18b8();
  FUN_10b5c1140(param_1);
  return param_1;
}



/* Entry: 10b5c1140; end: 10b5c1163;  */

void FUN_10b5c1140(void)

{
  long unaff_x19;
  
  func_0x00010b5c1840();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c1164; end: 10b5c1167;  */

undefined8 FUN_10b5c1164(undefined8 param_1)

{
  func_0x00010b5c18b8();
  FUN_10b5c1140(param_1);
  return param_1;
}



/* Entry: 10b5c1168; end: 10b5c117b;  */

void FUN_10b5c1168(void)

{
  FUN_10b5c1114();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c117c; end: 10b5c1187;  */

undefined ** FUN_10b5c117c(void)

{
  return &PTR_DAT_110d18b40;
}



/* Entry: 10b5c1188; end: 10b5c123f;  */

long * FUN_10b5c1188(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x22;
  int iVar6;
  
  plVar1 = param_2;
  func_0x00010b5c18ac(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5c11e4;
  }
  else if ((int)plVar1 == 0) goto LAB_10b5c11e4;
  func_0x00010b5c1858();
  param_2 = param_3;
  func_0x00010b5c184c(param_3,1);
LAB_10b5c11e4:
  plVar1 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x00010b5c17dc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),param_2);
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



/* Entry: 10b5c1240; end: 10b5c12b3;  */

long FUN_10b5c1240(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x00010b5c1820();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000108c6cd50(*(undefined8 *)(unaff_x19 + 0x20));
    func_0x00010b5c1874();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = (int)param_1;
  return param_1;
}



/* Entry: 10b5c12b4; end: 10b5c12b7;  */

void FUN_10b5c12b4(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b5c1800();
  func_0x00010b5c1880();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x00010b5c18a0();
    }
    func_0x00010b5c1928();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x00010b5c18c0();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010b535e30();
    }
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



/* Entry: 10b5c12b8; end: 10b5c12e3;  */

undefined8 FUN_10b5c12b8(undefined8 param_1)

{
  func_0x00010b5c18b8();
  FUN_10b5c12e4(param_1);
  return param_1;
}



/* Entry: 10b5c12e4; end: 10b5c131f;  */

void FUN_10b5c12e4(void)

{
  long unaff_x19;
  
  func_0x00010b5c1840();
  func_0x000107c30258(unaff_x19 + 0x20);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_10b5b97f8();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c1320; end: 10b5c1323;  */

undefined8 FUN_10b5c1320(undefined8 param_1)

{
  func_0x00010b5c18b8();
  FUN_10b5c12e4(param_1);
  return param_1;
}



/* Entry: 10b5c1324; end: 10b5c1337;  */

void FUN_10b5c1324(void)

{
  FUN_10b5c12b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c1338; end: 10b5c1343;  */

undefined ** FUN_10b5c1338(void)

{
  return &PTR_DAT_110d18b88;
}



/* Entry: 10b5c1344; end: 10b5c1473;  */

long * FUN_10b5c1344(long param_1,long *param_2,long *param_3)

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
  
  uVar1 = *(uint *)(param_1 + 0x10);
  plVar3 = param_2;
  plVar2 = param_2;
  if ((uVar1 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x28);
    plVar2 = (long *)0x1;
    func_0x00010b5c17dc(1,plVar3,*(undefined4 *)((long)plVar3 + 0x1c),param_2);
  }
  func_0x00010b5c18ac(*(undefined8 *)(param_1 + 0x18));
  if ((long)plVar3 < 0) {
    plVar3 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5c13a8;
  }
  else if ((int)plVar3 != 0) {
LAB_10b5c13a8:
    func_0x00010b5c1858();
    plVar3 = (long *)0x2;
    plVar2 = param_3;
    func_0x00010b5c184c();
  }
  func_0x00010b5c18ac(*(undefined8 *)(param_1 + 0x20));
  if ((long)plVar3 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5c1404;
  }
  else if ((int)plVar3 == 0) goto LAB_10b5c1404;
  func_0x00010b5c1858();
  plVar2 = param_3;
  func_0x00010b5c184c(param_3,3);
LAB_10b5c1404:
  plVar3 = plVar2;
  if ((uVar1 >> 1 & 1) != 0) {
    plVar3 = (long *)0x7;
    func_0x00010b5c17dc(7,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),plVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar3;
  }
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



/* Entry: 10b5c1474; end: 10b5c1523;  */

long FUN_10b5c1474(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  
  func_0x00010b5c1820();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  uVar2 = *(ulong *)(unaff_x19 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010b5c1874();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10b5c0e2c(*(undefined8 *)(unaff_x19 + 0x28));
      func_0x00010b5c1874();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000108c6cd50(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x00010b5c1874();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    param_1 = lVar3 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = (int)param_1;
  return param_1;
}



/* Entry: 10b5c1524; end: 10b5c153f;  */

void FUN_10b5c1524(ulong *param_1,long param_2,ulong *param_3)

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
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5c161c();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_10b5b9a00();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x00010b5c18c0();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010b535e30();
      }
    }
  }
  func_0x00010b5c17ec();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
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



/* Entry: 10b5c1540; end: 10b5c165f;  */

void FUN_10b5c1540(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    param_1 = 0x28;
    __Znwm();
  }
  else {
    func_0x00010b5c18ec();
  }
  func_0x00010b5c1930(&PTR_FUN_110d18a20);
  *(undefined8 *)(param_1 + 0x18) = extraout_x8;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b5c1660; end: 10b5c178b;  */

undefined8 * FUN_10b5c1660(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b5c18ec();
  }
  puVar2 = puVar1 + 1;
  *puVar2 = param_1;
  *puVar1 = &PTR_FUN_110d18a20;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b5c1814();
  }
  func_0x00010b5c1860();
  puVar1[3] = puVar2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x000108c6f470(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar1[4] = param_1;
  return puVar1;
}



/* Entry: 10b5c178c; end: 10b5c1943;  */

void FUN_10b5c178c(void)

{
  return;
}



/* Entry: 10b5c1944; end: 10b5c19bb;  */

undefined8 * FUN_10b5c1944(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d18c20;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 10b5c19bc; end: 10b5c19eb;  */

long FUN_10b5c19bc(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c19ec(param_1);
  return param_1;
}



/* Entry: 10b5c19ec; end: 10b5c1a07;  */

void FUN_10b5c19ec(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c1a08; end: 10b5c1a0b;  */

long FUN_10b5c1a08(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c19ec(param_1);
  return param_1;
}



/* Entry: 10b5c1a0c; end: 10b5c1a1f;  */

void FUN_10b5c1a0c(void)

{
  FUN_10b5c19bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c1a20; end: 10b5c1a2b;  */

undefined ** FUN_10b5c1a20(void)

{
  return &PTR_DAT_110d18c60;
}



/* Entry: 10b5c1a2c; end: 10b5c1b3f;  */

void FUN_10b5c1a2c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 10b5c1b40; end: 10b5c1b43;  */

void FUN_10b5c1b40(long param_1,long param_2)

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
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b535e30(*(long *)(param_1 + 0x18));
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



/* Entry: 10b5c1b44; end: 10b5c1bd7;  */

void FUN_10b5c1b44(long param_1,long param_2)

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
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      func_0x00010b535e30(*(long *)(param_1 + 0x18));
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



/* Entry: 10b5c1bd8; end: 10b5c1bdf;  */

void FUN_10b5c1bd8(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d18c20;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5c1be0; end: 10b5c1c23;  */

void FUN_10b5c1be0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d18c20;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10b5c1c24; end: 10b5c1c2b;  */

void FUN_10b5c1c24(void)

{
  return;
}



/* Entry: 10b5c1c2c; end: 10b5c1c5b;  */

long FUN_10b5c1c2c(long param_1)

{
  func_0x00010b5c2ddc();
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10b5c1c5c; end: 10b5c1c5f;  */

long FUN_10b5c1c5c(long param_1)

{
  func_0x00010b5c2ddc();
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 10b5c1c60; end: 10b5c1c73;  */

void FUN_10b5c1c60(void)

{
  FUN_10b5c1c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c1c74; end: 10b5c1c93;  */

undefined ** FUN_10b5c1c74(void)

{
  return &PTR_DAT_110d18e58;
}



/* Entry: 10b5c1c94; end: 10b5c1da3;  */

long * FUN_10b5c1c94(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5c2db0();
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 8:
    func_0x00010b5c2d20();
    func_0x00010b5c2e80();
    param_4 = (long *)0x40;
    break;
  case 9:
    func_0x00010b5c2d20();
    func_0x00010b5c2e80();
    param_4 = (long *)0x48;
    break;
  case 10:
    func_0x00010b5c2d20();
    func_0x00010b5c2e80();
    param_4 = (long *)0x50;
    break;
  case 0xb:
    func_0x00010b5c2d20();
    func_0x00010b5c2e80();
    param_4 = (long *)0x58;
    break;
  default:
    goto LAB_10b5c1d68;
  }
  func_0x000107c280a8();
  func_0x00010b5c2da4();
LAB_10b5c1d68:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5c2e3c();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 10b5c1da4; end: 10b5c1e3f;  */

long FUN_10b5c1da4(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(uint *)(param_1 + 0x18) & 0xfffffffc) == 8) {
    func_0x00010b5c2de4(*(undefined4 *)(param_1 + 0x10));
    lVar1 = extraout_x8;
  }
  else {
    lVar1 = 0;
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



/* Entry: 10b5c1e40; end: 10b5c1ec7;  */

void FUN_10b5c1e40(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x60) == 5) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5c1e9c;
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_10b58e9f0();
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) != 1) goto LAB_10b5c1e9c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10b5c1e9c;
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_10b55776c();
    }
  }
  __ZdlPv();
LAB_10b5c1e9c:
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10b5c1ec8; end: 10b5c1f27;  */

long FUN_10b5c1ec8(long param_1)

{
  func_0x00010b5c2ddc();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5ae248();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_10b5c1e40(param_1);
  }
  func_0x000107c2a450(param_1 + 0x30);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5c1f28; end: 10b5c1f2b;  */

long FUN_10b5c1f28(long param_1)

{
  func_0x00010b5c2ddc();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5ae248();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_10b5c1e40(param_1);
  }
  func_0x000107c2a450(param_1 + 0x30);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5c1f2c; end: 10b5c1f3f;  */

void FUN_10b5c1f2c(void)

{
  FUN_10b5c1ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c1f40; end: 10b5c1f4b;  */

undefined ** FUN_10b5c1f40(void)

{
  return &PTR_DAT_110d18ea0;
}



/* Entry: 10b5c1f4c; end: 10b5c1faf;  */

void FUN_10b5c1f4c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b5ae29c(*(undefined8 *)(param_1 + 0x48));
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  FUN_10b5c1e40(param_1);
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



/* Entry: 10b5c1fb0; end: 10b5c235b;  */

byte * FUN_10b5c1fb0(byte *param_1,long param_2,ulong param_3,byte *param_4)

{
  uint *puVar1;
  long lVar2;
  byte *pbVar3;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  func_0x00010b5c2db0();
  if (*(int *)(param_1 + 0x60) == 1) {
    param_2 = *(long *)(unaff_x20 + 0x58);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00010b5c2d90();
    param_4 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  while (iVar6 != 0) {
    func_0x00010b5c2d2c();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (byte *)0x2;
    func_0x00010b5c2dc0();
    func_0x00010b5c2e54();
  }
  uVar4 = *(uint *)(unaff_x20 + 0x40);
  if (0 < (int)uVar4) {
    func_0x00010b5c2d20();
    pbVar3 = param_1 + 2;
    *param_1 = 0x1a;
    for (; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      pbVar3[-1] = (byte)uVar4 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar4;
    puVar5 = *(uint **)(unaff_x20 + 0x38);
    puVar1 = puVar5 + *(int *)(unaff_x20 + 0x30);
    do {
      func_0x00010b5c2d20();
      uVar4 = *puVar5;
      pbVar3 = param_1;
      while( true ) {
        param_4 = pbVar3 + 1;
        if (uVar4 < 0x80) break;
        *pbVar3 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        pbVar3 = param_4;
      }
      puVar5 = puVar5 + 1;
      *pbVar3 = (byte)uVar4;
    } while (puVar5 < puVar1);
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x44);
    param_1 = (byte *)0x4;
    func_0x00010b5c2dc0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x60) == 5) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + 0x18);
    param_1 = (byte *)0x5;
    func_0x00010b5c2dc0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x00010b5c2d20();
    param_4 = (byte *)0x30;
    func_0x000107c280a8(0x30,param_1);
    func_0x00010b5c2da4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c2e3c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar4 = iVar6 - iVar7;
        param_3 = (ulong)uVar4;
        if (uVar4 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar6;
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 10b5c235c; end: 10b5c23b3;  */

long FUN_10b5c235c(long param_1)

{
  func_0x00010b5c2ddc();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5c23b4; end: 10b5c23b7;  */

long FUN_10b5c23b4(long param_1)

{
  func_0x00010b5c2ddc();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_10b5c93e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5c23b8; end: 10b5c23cb;  */

void FUN_10b5c23b8(void)

{
  FUN_10b5c235c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c23cc; end: 10b5c23d7;  */

undefined ** FUN_10b5c23cc(void)

{
  return &PTR_DAT_110d18ee8;
}



/* Entry: 10b5c23d8; end: 10b5c243f;  */

void FUN_10b5c23d8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5c9480(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5c9480(*(undefined8 *)(param_1 + 0x38));
    }
  }
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b5c2440; end: 10b5c262f;  */

long * FUN_10b5c2440(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5c2db0();
  iVar3 = *(int *)(param_1 + 0x20);
  while (iVar3 != 0) {
    func_0x00010b5c2d2c();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00010b5c2d90();
    func_0x00010b5c2e54();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_4 = (long *)0x2;
    func_0x00010b5c2dc0();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_4 = (long *)0x3;
    func_0x00010b5c2dc0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c2e3c();
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



/* Entry: 10b5c2630; end: 10b5c2667;  */

long FUN_10b5c2630(long param_1)

{
  func_0x00010b5c2ddc();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5c2668; end: 10b5c266b;  */

long FUN_10b5c2668(long param_1)

{
  func_0x00010b5c2ddc();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 10b5c266c; end: 10b5c267f;  */

void FUN_10b5c266c(void)

{
  FUN_10b5c2630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c2680; end: 10b5c268b;  */

undefined ** FUN_10b5c2680(void)

{
  return &PTR_DAT_110d18f30;
}



/* Entry: 10b5c268c; end: 10b5c26cf;  */

void FUN_10b5c268c(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b5c26d0; end: 10b5c27e7;  */

long * FUN_10b5c26d0(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b5c2db0();
  iVar4 = *(int *)(param_1 + 0x18);
  while (iVar4 != 0) {
    func_0x00010b5c2d2c();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00010b5c2d90();
    func_0x00010b5c2e54();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5c2d20();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x28);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x000107c280b8(param_4,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c2e3c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5c27e8; end: 10b5c2843;  */

void FUN_10b5c27e8(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107c303c4(param_1 + 0x10,param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
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



/* Entry: 10b5c2844; end: 10b5c28ab;  */

undefined8 * FUN_10b5c2844(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d18e18;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10b5c2b44(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = *(undefined8 *)(param_3 + 0x28);
  return param_1;
}



/* Entry: 10b5c28ac; end: 10b5c28d7;  */

long FUN_10b5c28ac(long param_1)

{
  func_0x00010b5c2ddc();
  FUN_10b5c2b70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5c28d8; end: 10b5c28db;  */

long FUN_10b5c28d8(long param_1)

{
  func_0x00010b5c2ddc();
  FUN_10b5c2b70(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5c28dc; end: 10b5c28ef;  */

void FUN_10b5c28dc(void)

{
  FUN_10b5c28ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c28f0; end: 10b5c28fb;  */

undefined ** FUN_10b5c28f0(void)

{
  return &PTR_DAT_110d18f78;
}



/* Entry: 10b5c28fc; end: 10b5c293f;  */

void FUN_10b5c28fc(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
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



/* Entry: 10b5c2940; end: 10b5c29fb;  */

long * FUN_10b5c2940(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b5c2db0();
  lVar3 = param_1[3];
  while ((int)lVar3 != 0) {
    func_0x00010b5c2d2c();
    param_3 = (ulong)*(uint *)(param_2 + 0x2c);
    func_0x00010b5c2d90();
    func_0x00010b5c2e54();
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5c2d20();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010b5c2da4();
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b5c2d20();
    param_4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x00010b5c2da4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c2e3c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5c29fc; end: 10b5c2a7b;  */

long FUN_10b5c29fc(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5c2e8c();
  func_0x00010b5c2d48();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10b5c2a7c();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x00010b5c2de4();
    unaff_x20 = unaff_x20 + extraout_x8;
  }
  if (*(int *)(unaff_x19 + 0x2c) != 0) {
    func_0x00010b5c2de4();
    unaff_x20 = unaff_x20 + extraout_x8_00;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c2e74();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10b5c2a7c; end: 10b5c2aa7;  */

long FUN_10b5c2a7c(long param_1)

{
  func_0x00010b5c2770();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 10b5c2aa8; end: 10b5c2aab;  */

void FUN_10b5c2aa8(long param_1,long param_2)

{
  FUN_10b5c2b0c(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b5c2aac; end: 10b5c2b0b;  */

void FUN_10b5c2aac(long param_1,long param_2)

{
  FUN_10b5c2b0c(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
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



/* Entry: 10b5c2b0c; end: 10b5c2b43;  */

void FUN_10b5c2b0c(long *param_1,long param_2)

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



/* Entry: 10b5c2b44; end: 10b5c2b6f;  */

undefined8 * FUN_10b5c2b44(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10b5c2b0c(param_1,param_3);
  return param_1;
}



/* Entry: 10b5c2b70; end: 10b5c2b9f;  */

long * FUN_10b5c2b70(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5c2ba0; end: 10b5c2d0f;  */

void FUN_10b5c2ba0(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d18cd8;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b5c2d10; end: 10b5c2eaf;  */

void FUN_10b5c2d10(void)

{
  return;
}



/* Entry: 10b5c2eb0; end: 10b5c2f33;  */

undefined8 * FUN_10b5c2eb0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d19048;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x000107c2809c(lVar1,param_2);
  param_1[3] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000108c6f470(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 10b5c2f34; end: 10b5c2f63;  */

long FUN_10b5c2f34(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c2f64(param_1);
  return param_1;
}



/* Entry: 10b5c2f64; end: 10b5c2f93;  */

void FUN_10b5c2f64(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b535e64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c2f94; end: 10b5c2f97;  */

long FUN_10b5c2f94(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5c2f64(param_1);
  return param_1;
}



/* Entry: 10b5c2f98; end: 10b5c2fab;  */

void FUN_10b5c2f98(void)

{
  FUN_10b5c2f34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c2fac; end: 10b5c2fb7;  */

undefined ** FUN_10b5c2fac(void)

{
  return &PTR_DAT_110d19088;
}



/* Entry: 10b5c2fb8; end: 10b5c3007;  */

void FUN_10b5c2fb8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b535efc(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10b5c3008; end: 10b5c30db;  */

long * FUN_10b5c3008(long param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_10b5c3074;
    puVar1 = (undefined8 *)*puVar7;
  }
  else {
    puVar1 = puVar7;
    if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b5c3074;
  }
  func_0x000107c303d4(puVar1,lVar3,1,&UNK_10f77eac6);
  plVar2 = param_3;
  func_0x000107c280a0(param_3,1,puVar7,param_2);
  param_2 = plVar2;
LAB_10b5c3074:
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,param_3);
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



/* Entry: 10b5c30dc; end: 10b5c315f;  */

long FUN_10b5c30dc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10b5c3114;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_10b5c3114:
    lVar3 = 0;
    goto LAB_10b5c3118;
  }
  func_0x000107c282a0();
  lVar3 = uVar1 + 1;
LAB_10b5c3118:
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x000108c6cd50();
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



/* Entry: 10b5c3160; end: 10b5c3163;  */

void FUN_10b5c3160(long param_1,long param_2)

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
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b535e30();
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



/* Entry: 10b5c3164; end: 10b5c3237;  */

void FUN_10b5c3164(long param_1,long param_2)

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
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x000108c6f470(uVar2,*(undefined8 *)(param_2 + 0x20));
      *(ulong *)(param_1 + 0x20) = uVar2;
    }
    else {
      func_0x00010b535e30();
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



/* Entry: 10b5c3238; end: 10b5c323f;  */

void FUN_10b5c3238(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d19048;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5c3240; end: 10b5c328f;  */

void FUN_10b5c3240(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d19048;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = &DAT_11383d918;
  puVar1[4] = 0;
  return;
}



/* Entry: 10b5c3290; end: 10b5c32a3;  */

void FUN_10b5c3290(void)

{
  return;
}



/* Entry: 10b5c32a4; end: 10b5c32cb;  */

undefined8 FUN_10b5c32a4(undefined8 param_1)

{
  func_0x00010b5c6488();
  func_0x00010b5c6528();
  return param_1;
}



/* Entry: 10b5c32cc; end: 10b5c32cf;  */

undefined8 FUN_10b5c32cc(undefined8 param_1)

{
  func_0x00010b5c6488();
  func_0x00010b5c6528();
  return param_1;
}



/* Entry: 10b5c32d0; end: 10b5c32e3;  */

void FUN_10b5c32d0(void)

{
  FUN_10b5c32a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5c32e4; end: 10b5c32ef;  */

undefined ** FUN_10b5c32e4(void)

{
  return &PTR_DAT_110d192c8;
}



/* Entry: 10b5c32f0; end: 10b5c331f;  */

void FUN_10b5c32f0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5c63c8();
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



/* Entry: 10b5c3320; end: 10b5c33df;  */

long * FUN_10b5c3320(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  func_0x00010b5c6530();
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c28094();
    unaff_x20 = (long *)(ulong)*(uint *)(unaff_x21 + 0x18);
    param_2 = 8;
    func_0x000107c280a8(8,plVar2);
    func_0x000107c280b8();
  }
  func_0x00010b5c6420(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b5c33a8;
  }
  else if ((int)param_2 == 0) goto LAB_10b5c33a8;
  func_0x00010b5c63d4();
  unaff_x20 = unaff_x19;
  func_0x00010b5c6310();
LAB_10b5c33a8:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b5c64ec();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x20 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*unaff_x19 - (int)unaff_x20) + 0x10;
      iVar4 = (int)param_3;
      uVar1 = iVar4 - iVar5;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      unaff_x20 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x20 + (long)iVar4);
  }
  _memcpy(unaff_x20,lVar3,param_3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)param_3);
}



/* Entry: 10b5c33e0; end: 10b5c344b;  */

void FUN_10b5c33e0(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5c635c();
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
    func_0x00010b5c6540();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5c64b0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b5c344c; end: 10b5c344f;  */

void FUN_10b5c344c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c63e4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c63fc();
    }
    func_0x00010b5c6574();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c642c();
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



/* Entry: 10b5c3450; end: 10b5c34cf;  */

void FUN_10b5c3450(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5c63e4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5c63fc();
    }
    func_0x00010b5c6574();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5c642c();
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



/* Entry: 10b5c34d0; end: 10b5c3503;  */

void FUN_10b5c34d0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x68) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x70) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(param_1 + 0x78,0xf8);
  return;
}



/* Entry: 10b5c3504; end: 10b5c3923;  */

undefined8 * FUN_10b5c3504(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d19288;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b5c6398();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = param_2;
  FUN_10b5c4e38(param_1 + 3,param_3 + 0x18);
  func_0x000108904afc(param_1 + 6,param_2,param_3 + 0x30);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  func_0x00010b5c4e48(param_1 + 9,param_3 + 0x48);
  lVar2 = param_3 + 0x60;
  func_0x00010b5c6558();
  param_1[0xc] = lVar2;
  lVar2 = param_3 + 0x68;
  func_0x00010b5c6558();
  param_1[0xd] = lVar2;
  lVar2 = param_3 + 0x70;
  func_0x00010b5c6558();
  param_1[0xe] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5c5d50(param_2,*(undefined8 *)(param_3 + 0x78));
  }
  param_1[0xf] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5b05a0(param_2,*(undefined8 *)(param_3 + 0x80));
  }
  param_1[0x10] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5db4(param_2,*(undefined8 *)(param_3 + 0x88));
  }
  param_1[0x11] = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5df0(param_2,*(undefined8 *)(param_3 + 0x90));
  }
  param_1[0x12] = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5e20(param_2,*(undefined8 *)(param_3 + 0x98));
  }
  param_1[0x13] = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5e50(param_2,*(undefined8 *)(param_3 + 0xa0));
  }
  param_1[0x14] = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5e8c(param_2,*(undefined8 *)(param_3 + 0xa8));
  }
  param_1[0x15] = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5ebc(param_2,*(undefined8 *)(param_3 + 0xb0));
  }
  param_1[0x16] = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5ef0(param_2,*(undefined8 *)(param_3 + 0xb8));
  }
  param_1[0x17] = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5f2c(param_2,*(undefined8 *)(param_3 + 0xc0));
  }
  param_1[0x18] = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5f68(param_2,*(undefined8 *)(param_3 + 200));
  }
  param_1[0x19] = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5f98(param_2,*(undefined8 *)(param_3 + 0xd0));
  }
  param_1[0x1a] = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5fcc(param_2,*(undefined8 *)(param_3 + 0xd8));
  }
  param_1[0x1b] = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5b8104(param_2,*(undefined8 *)(param_3 + 0xe0));
  }
  param_1[0x1c] = uVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c5ffc(param_2,*(undefined8 *)(param_3 + 0xe8));
  }
  param_1[0x1d] = uVar3;
  if ((uVar1 >> 0xf & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c6038(param_2,*(undefined8 *)(param_3 + 0xf0));
  }
  param_1[0x1e] = uVar3;
  if ((uVar1 >> 0x10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c6068(param_2,*(undefined8 *)(param_3 + 0xf8));
  }
  param_1[0x1f] = uVar3;
  if ((uVar1 >> 0x11 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c60a4(param_2,*(undefined8 *)(param_3 + 0x100));
  }
  param_1[0x20] = uVar3;
  if ((uVar1 >> 0x12 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5270c0(param_2,*(undefined8 *)(param_3 + 0x108));
  }
  param_1[0x21] = uVar3;
  if ((uVar1 >> 0x13 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5a1c8c(param_2,*(undefined8 *)(param_3 + 0x110));
  }
  param_1[0x22] = uVar3;
  if ((uVar1 >> 0x14 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c60d4(param_2,*(undefined8 *)(param_3 + 0x118));
  }
  param_1[0x23] = uVar3;
  if ((uVar1 >> 0x15 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b558b84(param_2,*(undefined8 *)(param_3 + 0x120));
  }
  param_1[0x24] = uVar3;
  if ((uVar1 >> 0x16 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c6104(param_2,*(undefined8 *)(param_3 + 0x128));
  }
  param_1[0x25] = uVar3;
  if ((uVar1 >> 0x17 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b508498(param_2,*(undefined8 *)(param_3 + 0x130));
  }
  param_1[0x26] = uVar3;
  if ((uVar1 >> 0x18 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c6134(param_2,*(undefined8 *)(param_3 + 0x138));
  }
  param_1[0x27] = uVar3;
  if ((uVar1 >> 0x19 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c6164(param_2,*(undefined8 *)(param_3 + 0x140));
  }
  param_1[0x28] = uVar3;
  if ((uVar1 >> 0x1a & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010b5c6194(param_2,*(undefined8 *)(param_3 + 0x148));
  }
  param_1[0x29] = uVar3;
  if ((uVar1 >> 0x1b & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_10b5c61c4(param_2,*(undefined8 *)(param_3 + 0x150));
  }
  param_1[0x2a] = uVar3;
  if ((uVar1 >> 0x1c & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b5c626c(param_2,*(undefined8 *)(param_3 + 0x158));
  }
  param_1[0x2b] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x160);
  param_1[0x2d] = *(undefined8 *)(param_3 + 0x168);
  param_1[0x2c] = uVar3;
  return param_1;
}



/* Entry: 10b5c3924; end: 10b5c394f;  */

undefined8 FUN_10b5c3924(undefined8 param_1)

{
  func_0x00010b5c6488();
  FUN_10b5c3950(param_1);
  return param_1;
}


