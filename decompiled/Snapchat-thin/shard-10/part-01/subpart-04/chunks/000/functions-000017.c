/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10793be68; end: 10793be6b;  */

undefined8 FUN_10793be68(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793be34(param_1);
  return param_1;
}



/* Entry: 10793c22c; end: 10793c25b;  */

void FUN_10793c22c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x00010793be8c();
  func_0x000107946c18();
  func_0x000107946614();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar1 = unaff_x22;
  }
  func_0x0001079467d4();
  uVar2 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = extraout_x8_00;
  if ((long)extraout_x8_00 < 0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  uVar2 = extraout_x8_01;
  if ((long)extraout_x8_01 < 0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x30));
  uVar2 = extraout_x8_02;
  if ((long)extraout_x8_02 < 0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x0001001a53d4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x38);
    if (param_1 == (ulong *)0x0) {
      func_0x0001079458d4();
      *(ulong **)(unaff_x21 + 0x38) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010793bc84();
    }
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  func_0x000107946584();
  if ((extraout_x8_03 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793c3c8; end: 10793c3eb;  */

undefined8 FUN_10793c3c8(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793c54c; end: 10793c567;  */

void FUN_10793c54c(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x000107946934();
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



/* Entry: 10793c6dc; end: 10793c773;  */

void FUN_10793c6dc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946d64();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793c9a4; end: 10793c9d7;  */

void FUN_10793c9a4(long param_1)

{
  func_0x000107947304();
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x68) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x70) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  return;
}



/* Entry: 10793ce90; end: 10793d077;  */

/* WARNING: Removing unreachable block (ram,0x00010793cee4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10793ce90(ulong param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  ulong *extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar5;
  ulong extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  ulong extraout_x10;
  long unaff_x19;
  
  func_0x000107946c8c();
  uVar5 = *(ulong *)(extraout_x8 + 0x18);
  iVar3 = *(int *)(extraout_x8 + 0x20);
  puVar1 = (ulong *)(extraout_x8 + 0x18);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  while (((long)iVar3 & 0x1fffffffffffffffU) != 0) {
    param_1 = *puVar1;
    func_0x00010793d078();
    func_0x000107946ff0();
    puVar1 = puVar1 + 1;
  }
  func_0x0001079471e8();
  func_0x00010794694c();
  func_0x0001079471d8();
  iVar3 = iVar3 + extraout_w10 + (int)extraout_x10 * 2;
  puVar1 = extraout_x8_00;
  if ((extraout_x9 & 1) != 0) {
    puVar1 = (ulong *)(extraout_x9 + 7);
  }
  while ((extraout_x10 & 0x1fffffffffffffff) != 0) {
    param_1 = *puVar1;
    func_0x00010793d078();
    func_0x000107946ff0();
    puVar1 = puVar1 + 1;
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x60));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x68));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x70));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  uVar2 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x00010793c668(*(undefined8 *)(unaff_x19 + 0x78));
      func_0x0001079462c4();
      iVar3 = extraout_w8_00 + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x000106af66c4(*(undefined8 *)(unaff_x19 + 0x80));
      func_0x000107946ad4();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      func_0x000106af66c4(*(undefined8 *)(unaff_x19 + 0x88));
      func_0x000107946ad4();
    }
    if ((uVar2 >> 3 & 1) != 0) {
      func_0x000107931520(*(undefined8 *)(unaff_x19 + 0x90));
      func_0x000107946ad4();
    }
    if ((uVar2 >> 4 & 1) != 0) {
      func_0x000106af66c4(*(undefined8 *)(unaff_x19 + 0x98));
      func_0x000107946ad4();
    }
    if ((uVar2 >> 5 & 1) != 0) {
      func_0x000107933a64(*(undefined8 *)(unaff_x19 + 0xa0));
      func_0x0001079462c4();
      iVar3 = extraout_w8 + 1;
    }
  }
  if (*(int *)(unaff_x19 + 0xa8) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0xa8)) * -9 + 0x280U >> 6) + 1;
  }
  iVar3 = iVar3 + (uint)*(byte *)(unaff_x19 + 0xac) * 2 + (uint)*(byte *)(unaff_x19 + 0xad) * 2;
  if (*(int *)(unaff_x19 + 0xb0) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0xb0)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar4 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar4 = *(long *)(extraout_x9_00 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(unaff_x19 + 0x14) = iVar3;
  return;
}



/* Entry: 10793d310; end: 10793d323;  */

void FUN_10793d310(void)

{
  func_0x00010793d2e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793d50c; end: 10793d52f;  */

undefined8 FUN_10793d50c(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793d6f0; end: 10793d72f;  */

void FUN_10793d6f0(long param_1)

{
  long unaff_x19;
  
  func_0x0001079473cc();
  if (param_1 != 0) {
    func_0x00010793d2e4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_10793d50c();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x000107931394();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793da74; end: 10793da77;  */

long FUN_10793da74(long param_1)

{
  func_0x000107946a94();
  FUN_1079439d8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793db9c; end: 10793dbcb;  */

void FUN_10793db9c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x00010793dbcc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793dcf0; end: 10793dcf3;  */

undefined8 FUN_10793dcf0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793dccc(param_1);
  return param_1;
}



/* Entry: 10793e048; end: 10793e077;  */

void FUN_10793e048(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x00010793dd14();
  func_0x000107946c18();
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  uVar1 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar1 = param_2[1];
  }
  if (uVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x000107947294();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010793def4();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793e1b4; end: 10793e1b7;  */

void FUN_10793e1b4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x00010793e1e8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793e3b4; end: 10793e3bf;  */

undefined ** FUN_10793e3b4(void)

{
  return &PTR_DAT_1109ef938;
}



/* Entry: 10793e63c; end: 10793e64f;  */

void FUN_10793e63c(void)

{
  func_0x00010793e600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793e864; end: 10793e867;  */

undefined8 FUN_10793e864(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793e834(param_1);
  return param_1;
}



/* Entry: 10793eba4; end: 10793eba7;  */

undefined8 FUN_10793eba4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793eb80(param_1);
  return param_1;
}



/* Entry: 10793ed78; end: 10793eda7;  */

void FUN_10793ed78(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x00010793ebc8();
  func_0x000107946c18();
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  uVar1 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar1 = param_2[1];
  }
  if (uVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x000107947294();
      *(ulong **)(unaff_x21 + 0x20) = param_1;
    }
    else {
      func_0x00010793def4();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10793ee90; end: 10793eedf;  */

void FUN_10793ee90(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000107946280();
  while (unaff_x22 != 0) {
    func_0x00010793eee0(*unaff_x21);
    func_0x000107946ff0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 10793efa8; end: 10793f047;  */

long * FUN_10793efa8(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107946704();
  if ((int)param_1[3] != 0) {
    func_0x0001079468c8();
    param_2 = param_1;
    func_0x000107946ec0();
    func_0x000107946a60();
    unaff_x20 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x10));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10793f014;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10793f014;
  param_4 = (long *)&UNK_10f439045;
  func_0x000107946aa4();
  func_0x000107946498();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10793f014:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
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



/* Entry: 10793f280; end: 10793f34b;  */

void FUN_10793f280(ulong *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946b0c();
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x000107946d58();
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793f5d4; end: 10793f647;  */

void FUN_10793f5d4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  return;
}



/* Entry: 10793f7fc; end: 10793f7ff;  */

undefined8 FUN_10793f7fc(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793fa90; end: 10793fb0b;  */

undefined ** FUN_10793fa90(void)

{
  return &PTR_DAT_1109efc30;
}



/* Entry: 10793fc8c; end: 10793fc8f;  */

void FUN_10793fc8c(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464ac();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10793fe10; end: 10793fe77;  */

long FUN_10793fe10(void)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010794656c();
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x000107946a20();
    unaff_x20 = unaff_x20 + extraout_x8 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x2c) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10793ff78; end: 10793ffb3;  */

long FUN_10793ff78(long param_1)

{
  func_0x000107946a94();
  func_0x000107946c10();
  func_0x000107946f1c();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107931394();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 107940170; end: 107940217;  */

void FUN_107940170(ulong *param_1,long param_2,ulong param_3)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x0001001a53d4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001079470a4();
    if (param_1 == (ulong *)0x0) {
      func_0x000107946eb0();
      *(ulong **)(unaff_x21 + 0x28) = param_1;
    }
    else {
      func_0x000107931364();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_01 & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 1079403bc; end: 1079403bf;  */

void FUN_1079403bc(ulong *param_1)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001079464ac();
  func_0x000107947214();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x28) = extraout_w8;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 107940580; end: 1079405fb;  */

void FUN_107940580(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107946514();
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
  func_0x0001079468ac();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  iVar1 = (int)param_1;
  func_0x00010794711c(lVar3 + (ulong)*(byte *)(unaff_x19 + 0x20) * 2);
  if ((extraout_x8_01 & 1) != 0) {
    func_0x000107947044();
    lVar3 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(unaff_x19 + 0x24) = iVar1;
  return;
}



/* Entry: 107940700; end: 10794078b;  */

long * FUN_107940700(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x0001079465d0();
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_107940754;
  }
  else if ((int)plVar1 == 0) goto LAB_107940754;
  func_0x000107946aa4();
  param_2 = param_3;
  func_0x000107946f64(param_3,1);
LAB_107940754:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x000107946ab4();
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



/* Entry: 10794087c; end: 1079408a7;  */

void FUN_10794087c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468d4();
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



/* Entry: 107940a14; end: 107940a27;  */

void FUN_107940a14(void)

{
  func_0x0001079409ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107940b9c; end: 107940baf;  */

void FUN_107940b9c(void)

{
  func_0x000107940b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107940d5c; end: 107940dab;  */

void FUN_107940d5c(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010794656c();
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 107940ea0; end: 10794110b;  */

void FUN_107940ea0(void)

{
  uint extraout_w8;
  undefined4 extraout_var;
  long unaff_x19;
  
  func_0x000107946c2c();
  if (extraout_w8 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x000107940ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedef8a)[CONCAT44(extraout_var,extraout_w8)] * 4 + 0x107940ed0))
              ();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10794155c; end: 10794155f;  */

void FUN_10794155c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x000107947068();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_107940ea0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x00010793fa48();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945b7c();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x00010794736c();
        func_0x00010793fc90();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945bcc();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x00010793fe7c();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945c18();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x00010793feb4();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945c70();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        FUN_107940170();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945cc0();
      break;
    case 6:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x0001079403c0();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945d48();
      break;
    case 7:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107940600();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945d94();
      break;
    case 8:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x0001079407e8();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945dfc();
      break;
    case 9:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x0001079409b4();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945e48();
      break;
    case 10:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x0001079409e0();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945e94();
      break;
    case 0xb:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x000107940aa4();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945ee4();
      break;
    case 0xc:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x000107940b68();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945f34();
      break;
    case 0xd:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107940db0();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      FUN_107945f84();
      break;
    case 0xe:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x000107940ddc();
        goto code_r0x000107941860;
      }
      func_0x000107946bdc();
      func_0x000107945fd0();
      break;
    default:
      goto code_r0x000107941860;
    }
    unaff_x21[2] = (ulong)param_1;
  }
code_r0x000107941860:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 107941938; end: 1079419bb;  */

long * FUN_107941938(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if ((int)param_1[2] != 0) {
    func_0x00010794668c();
    func_0x000107946d6c();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    func_0x00010794668c();
    func_0x000107946bd4();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
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



/* Entry: 107941b50; end: 107941bcf;  */

long FUN_107941b50(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x000107946514();
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
  func_0x0001079468ac();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0001079470cc();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 107941e2c; end: 107941ef3;  */

void FUN_107941e2c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_107941ed8;
  func_0x000107947068();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x000107941c48();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x0001079467c4();
      func_0x00010794736c();
      func_0x000107941bd4();
      goto LAB_107941ed8;
    }
    func_0x000107946bdc();
    func_0x000107946080();
  }
  else {
    if (iVar1 != 1) goto LAB_107941ed8;
    if (unaff_w24 == 1) {
      func_0x0001079467c4();
      func_0x0001079418ac();
      goto LAB_107941ed8;
    }
    func_0x000107946bdc();
    func_0x000107946020();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_107941ed8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010794672c();
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



/* Entry: 10794203c; end: 107942113;  */

void FUN_10794203c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x000107946514();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  func_0x0001079468ac();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x0001079470c0();
  return;
}



/* Entry: 107942268; end: 1079422d7;  */

long FUN_107942268(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x000107946280();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    func_0x000107931520();
    func_0x000107946ff0();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 107942400; end: 107942517;  */

long * FUN_107942400(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x20);
    func_0x0001079467a0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    func_0x0001079469d8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010794668c();
    func_0x0001079472ac();
    func_0x00010794708c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
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



/* Entry: 107942634; end: 1079426ab;  */

long * FUN_107942634(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if ((int)param_1[2] != 0) {
    func_0x00010794668c();
    func_0x000107946a50();
    func_0x000107946ec8();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010794668c();
    func_0x000107947244();
    func_0x000107946bd4();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
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



/* Entry: 1079427f0; end: 107942857;  */

void FUN_1079427f0(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107946514();
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
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    func_0x000107946a08();
    iVar1 = extraout_w8 + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10794291c; end: 10794294b;  */

void FUN_10794291c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
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



/* Entry: 107942b64; end: 107942b77;  */

void FUN_107942b64(void)

{
  func_0x000107942ad4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107942f7c; end: 107942f9b;  */

long * FUN_107942f7c(void)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x000107946fe4();
  plVar1 = (long *)(unaff_x19 + 0x10);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 107943170; end: 10794321f;  */

void FUN_107943170(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001079464ac();
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946f48();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
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



/* Entry: 10794374c; end: 107943773;  */

void FUN_10794374c(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107943884; end: 1079438ab;  */

void FUN_107943884(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 1079439d8; end: 1079439ff;  */

void FUN_1079439d8(void)

{
  long extraout_x8;
  
  func_0x000107946d94();
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107944dfc; end: 107944e4b;  */

void FUN_107944dfc(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079467e4();
  }
  func_0x000107946d24();
  func_0x000107946d3c(&PTR_FUN_1109ed9b0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946778();
  FUN_107931b0c();
  func_0x000107946dd0();
  return;
}



/* Entry: 107945390; end: 107945493;  */

void FUN_107945390(long param_1)

{
  ulong extraout_x8;
  
  func_0x000107946b0c();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079466e4();
  }
  func_0x000107946e4c();
  func_0x000107946e58(&PTR_DAT_1109ec6a0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946884();
  func_0x000107946dd0();
  return;
}



/* Entry: 1079456ec; end: 107945877;  */

void FUN_1079456ec(long param_1)

{
  ulong extraout_x8;
  
  func_0x000107946b0c();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079466e4();
  }
  func_0x000107946e4c();
  func_0x000107946e58(&PTR_FUN_1109ece70);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946884();
  func_0x000107946dd0();
  return;
}



/* Entry: 107945b2c; end: 107945b7b;  */

void FUN_107945b2c(long param_1)

{
  ulong extraout_x8;
  
  func_0x00010068f438();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079467e4();
  }
  func_0x000107946d24();
  func_0x000107946d3c(&PTR_DAT_1109ed5a0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946778();
  func_0x00010793e1e8();
  func_0x000107946dd0();
  return;
}



/* Entry: 107945f84; end: 107945fcf;  */

void FUN_107945f84(long param_1)

{
  ulong extraout_x8;
  
  func_0x000107946b0c();
  if (param_1 == 0) {
    func_0x000107946b04();
  }
  else {
    func_0x0001079466e4();
  }
  func_0x000107946e4c();
  func_0x000107946e58(&PTR_DAT_1109ec970);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946884();
  func_0x000107946dd0();
  return;
}



/* Entry: 1079474f8; end: 107947533;  */

undefined8 FUN_1079474f8(undefined8 param_1)

{
  func_0x000107947740();
  func_0x000107947498();
  return param_1;
}



/* Entry: 1079476d4; end: 10794771f;  */

void FUN_1079476d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_DAT_1109f1000;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined1 *)((long)puVar1 + 0x14) = 0;
  return;
}



/* Entry: 1079482ac; end: 107948337;  */

void FUN_1079482ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 2) {
    lVar2 = lVar1;
    func_0x00010c0dfd40(lVar1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    lVar2 = param_1;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10794a7f4; end: 10794b38b;  */

/* WARNING: Possible PIC construction at 0x00010794ab24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010794ab40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010794ab28) */
/* WARNING: Removing unreachable block (ram,0x00010794ab44) */
/* WARNING: Removing unreachable block (ram,0x00010794ac24) */
/* WARNING: Removing unreachable block (ram,0x00010794ab9c) */
/* WARNING: Removing unreachable block (ram,0x00010794ac28) */
/* WARNING: Removing unreachable block (ram,0x00010794aed4) */
/* WARNING: Removing unreachable block (ram,0x00010794ae90) */
/* WARNING: Removing unreachable block (ram,0x00010794aed8) */
/* WARNING: Removing unreachable block (ram,0x00010794af0c) */
/* WARNING: Removing unreachable block (ram,0x00010794af54) */
/* WARNING: Removing unreachable block (ram,0x00010794af64) */
/* WARNING: Removing unreachable block (ram,0x00010794af68) */
/* WARNING: Removing unreachable block (ram,0x00010794af78) */
/* WARNING: Removing unreachable block (ram,0x00010794af80) */
/* WARNING: Removing unreachable block (ram,0x00010794b00c) */
/* WARNING: Removing unreachable block (ram,0x00010794b028) */
/* WARNING: Removing unreachable block (ram,0x00010794b03c) */
/* WARNING: Removing unreachable block (ram,0x00010794b388) */
/* WARNING: Removing unreachable block (ram,0x00010794b35c) */

void FUN_10794a7f4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  double dVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010bf86660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e2c118,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf86660();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c046240();
  _objc_alloc();
  uVar1 = param_1;
  func_0x00010c297e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  uVar2 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c08fa60();
  if (uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(param_1);
  func_0x00010c0607c0();
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_alloc();
  dVar9 = 0.0;
  func_0x00010c01fba0();
  func_0x00010bf86660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar3);
  _objc_alloc();
  func_0x00010c052aa0(dVar9 * 1000.0);
  uVar1 = param_1;
  func_0x00010c241220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfda7c0();
  _objc_release(uVar1);
  func_0x00010c0ba0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc();
  uVar1 = param_1;
  func_0x00010bf86660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0068e0();
  _objc_release(uVar1);
  func_0x00010bf86660();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc();
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0c5180(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  FUN_1079482ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0c6c20(param_1);
  func_0x00010c083e00();
  puVar3 = PTR_PTR_1126bfca8;
  _objc_alloc(PTR_PTR_1126bfca8);
  uVar4 = param_1;
  func_0x00010c0c54a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0c5480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020b60(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010c083e00();
  if ((uVar4 & 1) == 0) {
    func_0x00010c0c6c20();
    func_0x000107948338();
  }
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_alloc();
  uVar4 = param_1;
  func_0x00010c2709c0(param_1);
  uVar5 = param_1;
  func_0x00010c26f480(param_1);
  func_0x00010c052380((double)(long)uVar4 / 1000.0 + (double)(long)uVar5 / 1000.0);
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar6);
    puVar7 = puVar6;
  }
  func_0x000107948338(uVar2);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c3390;
  _objc_alloc(PTR_PTR_1126c3390);
  uVar2 = param_1;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0c6e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa840(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10794b820; end: 10794b887; +[SCMTGetPoiPlaylistResponse descriptor] */

void FUN_10794b820(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113726f80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b64cb0,
                        &PTR____CFConstantStringClassReference_110ea61f8,
                        &PTR_s_snapchat_map_11323a6d0,&PTR_DAT_11323a7a8,2,0x18,0x1c);
    puRam0000000113726f80 = puVar1;
  }
  return;
}



/* Entry: 10794bbb0; end: 10794be57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10794bbb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uStack_70;
  
  puVar1 = PTR_PTR_1126d5738;
  _objc_alloc();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uStack_70 = 0;
  }
  else {
    uStack_70 = lVar2 + _DAT_112766298;
    _objc_loadWeakRetained();
  }
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = lVar3 + _DAT_1127662a0;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar4;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0x20);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = lVar6 + _DAT_11276629c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar7;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar10 = 0;
  if (lVar9 != 0) {
    lVar10 = lVar9 + _DAT_1127662a8;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar10;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar13 = 0;
  if (lVar12 != 0) {
    lVar13 = lVar12 + _DAT_1127662ac;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar13;
  func_0x00010c0c8780();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar16 = 0;
  if (lVar15 != 0) {
    lVar16 = lVar15 + _DAT_1127662b0;
    _objc_loadWeakRetained();
  }
  lVar17 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = param_1 + _DAT_1127662b4;
    _objc_loadWeakRetained();
  }
  lVar18 = lVar19;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087e0(puVar1,param_2,uStack_70,lVar5,uVar20,lVar8,lVar11,lVar14,lVar17,lVar18);
  _objc_release(lVar18);
  _objc_release(lVar19);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uStack_70);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10794c7cc; end: 10794c82b; -[SCMemoriesSnapDocSaveManager _defaultNotImplemented] */

void FUN_10794c7cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10794d160; end: 10794d8eb; -[SCMemoriesSnapDocSaveManager _mapToDataMutatingSharedStory:storyMetadata:subject:] */

void FUN_10794d160(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uStack_130;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar3;
  FUN_10794f29c(puVar3,5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  FUN_10794f29c(puVar3,6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010794f3d8(uVar7,puVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010795025c(puVar4,puVar3);
  if (puVar6 == (undefined *)0x0) {
    uStack_130 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0ef840();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010794f724(uVar9,puVar3,puVar2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar10;
    func_0x00010c0ef880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar8);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001079505f0(uVar10,puVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x0001079507c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf85640();
  _objc_release(puVar13);
  _objc_release(puVar12);
  puVar13 = PTR_PTR_1126b2220;
  _objc_alloc();
  puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a560();
  _objc_release(puVar14);
  _objc_release(puVar12);
  puVar14 = puVar3;
  func_0x000107950544();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed100();
  func_0x00010c25b720();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  puVar15 = puVar4;
  func_0x00010c27dd80();
  puVar12 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if ((int)puVar15 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010794f724(uVar9,puVar3,puVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar19 = *(undefined8 *)(param_1 + 8);
    func_0x00010c22c220();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar19;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 0xffffffffa9fc90cc;
    func_0x00010b77c6b4();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010c0c4bc0(puVar4);
    func_0x00010bfbd540();
    func_0x00010bf977c0();
    func_0x00010bf97860();
    puVar20 = puVar3;
    func_0x00010bf30ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb280();
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c14b200((double)((ulong)puVar15 & 0xffffffff),uVar9);
    _objc_release(puVar20);
    _objc_release(uVar16);
    _objc_release(uVar9);
    _objc_release(uVar19);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  else {
    puVar12 = puVar4;
    func_0x00010c27dd80();
    if ((int)puVar12 != 1) goto LAB_10794d848;
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010c22c220();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010794f724(uVar17,puVar3,puVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = 0xffffffff9f8c09ae;
    func_0x00010b77c6b4();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_4;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbd540();
    func_0x00010bf977c0();
    func_0x00010bf97860();
    puVar12 = puVar3;
    func_0x00010bf30ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb280();
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c14b320(uVar9);
    _objc_release(puVar12);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar9);
    _objc_release(uVar16);
    _objc_release(param_5);
    puVar12 = param_3;
  }
  _objc_release(puVar12);
LAB_10794d848:
  _objc_release(uVar8);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uStack_130);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10794e570; end: 10794e607;  */

void FUN_10794e570(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf51e00();
  func_0x00010be5cf40(uVar1,param_2,uVar4,uVar2,uVar8,uVar5,uVar3,uVar6,uVar7,
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x18),
                      *(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10794f29c; end: 10794f3d7;  */

void FUN_10794f29c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10794ff8c; end: 10794ffd3;  */

void FUN_10794ff8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107950c0c; end: 107950c9f; -[SCDecryptedContentCache initWithTemporaryFileWriter:] */

undefined1 * FUN_107950c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8ed8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079514f8; end: 107951527; -[SCMediaReferenceFactoryImpl .cxx_destruct] */

void FUN_1079514f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107951f74; end: 107952037;  */

void FUN_107951f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,PTR_PTR_11323ac20,
                      &PTR____CFConstantStringClassReference_110ea6418,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d5770;
  _objc_alloc(PTR_PTR_1126d5770);
  func_0x00010c04c260();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107952834; end: 1079529bb; -[SCSnapDocManagerImpl queryPlaybackMediaStatusForKey:snapDoc:] */

long FUN_107952834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_48 = 0;
  func_0x00010bee7c60(param_1);
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  if (lVar1 == 0) {
    _objc_initWeak(auStack_50,param_1);
    _objc_copyWeak(auStack_58,auStack_50);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bde4280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c067ec0();
    lVar3 = (long)(int)uVar2;
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
  }
  else {
    func_0x00010be52ae0(param_1);
    lVar3 = 3;
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 107953168; end: 107953173;  */

void FUN_107953168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107953170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 107953a44; end: 107953b27;  */

void FUN_107953a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c13eb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107954450; end: 107954667; -[SCSnapDocManagerImpl retrieveCachedMediaForKey:mediaMetadata:snapDoc:pageInfo:] */

/* WARNING: Removing unreachable block (ram,0x000107954500) */

void FUN_107954450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bee77e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_retain(0);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bde7e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be963c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5768;
  _objc_alloc();
  uVar4 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(uVar2);
  func_0x00010bf0b760(param_4);
  _objc_release(param_4);
  func_0x00010c029620(puVar3);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(0);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107954f2c; end: 107954fbb; -[SCSnapDocManagerImpl createContentWriterForMediaContextType:error:] */

void FUN_107954f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf55600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (param_4 != (undefined8 *)0x0) {
    uVar1 = uVar2;
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010b7f5498();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = uVar3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10795551c; end: 107955787; -[SCSnapDocManagerImpl addMediaReferenceForKey:fakeSnapDoc:existingContentKey:newLocalContentKey:error:] */

void FUN_10795551c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc();
  puVar1 = PTR_PTR_1126bfc90;
  func_0x00010c0c46a0(param_3);
  func_0x00010c119380(puVar1);
  func_0x00010c0295e0();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf39ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  puStack_88 = &UNK_107955788;
  puStack_80 = &UNK_107955798;
  uStack_78 = 0;
  _objc_retain(puVar2);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(puVar2);
  func_0x00010c0c0800(uVar4);
  uVar3 = puStack_98[5];
  _objc_retain(uVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107956064; end: 107956093;  */

void FUN_107956064(long param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 107956610; end: 1079567f7; -[SCSnapDocManagerImpl authClaimMediaWithSnapDocKey:snapDoc:onComplete:onError:] */

/* WARNING: Removing unreachable block (ram,0x00010795673c) */
/* WARNING: Removing unreachable block (ram,0x000107956740) */

void FUN_107956610(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0c46a0(param_4);
  if ((uint)(int)param_1 < 0x2d) {
    puVar1 = PTR_PTR_1126b25b8;
    _objc_alloc(PTR_PTR_1126b25b8);
    uVar2 = param_4;
    func_0x00010bf9e140(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0(param_4);
    func_0x00010c011280(puVar1);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b25c0;
    _objc_alloc(PTR_PTR_1126b25c0);
    uVar2 = param_5;
    func_0x00010bf25f00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar3);
    _objc_retain(0);
    _objc_release(uVar2);
    func_0x00010bf10660(param_2);
    _objc_retain(0);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
    _objc_release(puVar3);
    _objc_release(0);
    _objc_release(puVar1);
  }
  else if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,&PTR____CFConstantStringClassReference_110ea6658);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1079571fc; end: 10795798b; -[SCSnapDocManagerImpl _maybeRegisterMediaForSnapDocKey:mediaReference:mediaMetadata:snapDoc:completion:] */

void FUN_1079571fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined *param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if (param_4 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,0);
    goto LAB_10795794c;
  }
  lVar2 = param_1;
  func_0x00010bde7e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = param_4;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 != 0) goto LAB_1079572e4;
    (**(code **)(param_7 + 0x10))(param_7,1,lVar2);
  }
  else {
    _objc_release(lVar3);
LAB_1079572e4:
    lVar3 = param_5;
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x000107951fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x000107951fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_5;
    func_0x00010bf93e40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c08fa60();
    if ((lVar4 == 0) && (lVar4 = lVar6, func_0x00010c08fa60(), lVar4 == 0)) {
      lVar4 = lVar3;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c08fa60();
      lVar12 = lVar6;
      lVar11 = lVar5;
      if (lVar7 != 0) {
        lVar7 = lVar3;
        func_0x00010c085300();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c08fa60();
        if (lVar8 != 0) {
          uVar9 = *(ulong *)(param_1 + 0x38);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010bf1f3c0();
          _objc_release(uVar9);
          _objc_release(lVar7);
          _objc_release(lVar4);
          if ((uVar10 & 1) != 0) goto LAB_1079574b8;
          lVar4 = lVar3;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar4;
          func_0x000107952038();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          _objc_release(lVar4);
          lVar4 = lVar3;
          func_0x00010c085300();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar4;
          func_0x000107952038();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
        }
        _objc_release(lVar7);
      }
      _objc_release(lVar4);
      lVar6 = lVar12;
      lVar5 = lVar11;
    }
LAB_1079574b8:
    lVar4 = lVar5;
    func_0x00010c08fa60();
    if ((lVar4 == 0) || (lVar4 = lVar6, func_0x00010c08fa60(), lVar4 == 0)) {
LAB_107957534:
      puVar18 = (undefined *)0x0;
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar13;
      func_0x00010bf1f3c0();
      _objc_release(uVar13);
      if ((int)uVar19 == 0) goto LAB_107957534;
      puVar14 = PTR_PTR_1126c0308;
      _objc_opt_new(PTR_PTR_1126c0308);
      func_0x00010c220160();
      puVar18 = PTR_PTR_1126b9620;
      _objc_opt_new();
      func_0x00010c1b0b60();
      _objc_release(puVar14);
    }
    lVar4 = param_4;
    func_0x00010c0c6c20();
    uVar1 = (int)lVar4 - 1;
    if (uVar1 < 0xb) {
      uVar19 = *(undefined8 *)(&UNK_10dee0640 + (ulong)uVar1 * 8);
    }
    else {
      uVar19 = 0;
    }
    lVar4 = param_4;
    func_0x00010c299d20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar7 = param_4;
      func_0x00010c299d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29aca0();
      _objc_release(lVar7);
    }
    _objc_release(lVar4);
    puVar14 = PTR_PTR_1126bfc90;
    func_0x00010c0c46a0(param_3);
    func_0x00010c119380();
    func_0x0001079520f4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010b0ee738();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_4;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    if (lVar11 == 0) {
      puVar15 = PTR_PTR_1126b1058;
      _objc_alloc();
      lVar7 = lVar2;
      func_0x00010c0c5180(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar2;
      func_0x00010c0c46a0(lVar2);
      func_0x000107951d78();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b7f5628(uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b360();
      _objc_release(uVar19);
      _objc_release(lVar11);
      _objc_release(lVar7);
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar7 = lVar2;
      func_0x00010c0c46a0();
      func_0x00010b7f519c();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar2;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(lVar7);
      puVar17 = PTR_PTR_1126b1050;
      _objc_alloc(PTR_PTR_1126b1050);
      lVar7 = param_4;
      func_0x00010bdc2b80(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05a200(puVar17);
      _objc_release(lVar7);
      _objc_retain(param_7);
      _objc_retain(lVar2);
      func_0x00010be893a0(param_1);
      _objc_release(lVar2);
      _objc_release(param_7);
      _objc_release(puVar17);
      _objc_release(puVar16);
    }
    else {
      uVar19 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_4;
      func_0x00010bf4cce0(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar18;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      _objc_retain(lVar2);
      func_0x00010c125e00(uVar19);
      _objc_release(puVar16);
      _objc_release(lVar7);
      _objc_release(uVar19);
      _objc_release(lVar2);
      puVar15 = param_7;
    }
    _objc_release(puVar15);
    _objc_release(lVar4);
    _objc_release(puVar14);
    _objc_release(puVar18);
    _objc_release(lVar3);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar2);
LAB_10795794c:
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107958608; end: 1079587eb; -[SCSnapDocManagerImpl _decryptContentResult:key:iv:mediaType:] */

void FUN_107958608(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == (undefined *)0x0) {
    param_1 = (undefined *)0x0;
  }
  else if ((param_6 == 3) && ((param_1[0x50] & 1) != 0)) {
    func_0x00010bdf8a60(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_3;
    func_0x00010b7f5374();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(param_3);
      param_1 = param_3;
    }
    else {
      puVar2 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar2);
      puVar2 = param_1;
      func_0x00010bdf8ae0(param_1,param_2,puVar1,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c08fa60();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = param_3;
        func_0x00010bfc40e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be8f7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e0f538,puVar3)
        ;
        _objc_release(puVar3);
      }
      param_1 = PTR_PTR_1126d5790;
      _objc_alloc(PTR_PTR_1126d5790);
      puVar3 = param_3;
      func_0x00010bfc40e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0036a0(param_1,param_2,puVar3,puVar2,1);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107958c5c; end: 107958f2b; -[SCSnapDocManagerImpl _decryptContentResultStreaming:key:iv:] */

void FUN_107958c5c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bfcb5a0(param_3);
  puVar2 = param_3;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010bdf8a40(param_1,param_2,param_3,param_4,param_5,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + 0x68) == 0) {
      puVar3 = *(undefined **)(param_1 + 0x58);
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bfacf80(puVar3,param_2,puVar5,3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = param_1;
      func_0x00010bec53c0(param_1,param_2,param_3,puVar2,puVar6,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        func_0x00010bdf8a40(param_1,param_2,param_3,param_4,param_5,puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar4);
        param_1 = puVar4;
      }
    }
    else {
      puVar6 = param_3;
      func_0x00010bfc40e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(param_1 + 0x68);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      puStack_98 = &UNK_107958f2c;
      puStack_90 = &UNK_1109f1800;
      puStack_88 = param_1;
      _objc_retain(param_3);
      puStack_80 = param_3;
      _objc_retain(puVar2);
      puStack_78 = puVar2;
      _objc_retain(param_4);
      uStack_70 = param_4;
      _objc_retain(param_5);
      uStack_68 = param_5;
      func_0x00010bf270a0(lVar7,param_2,puVar6,param_4,param_5,&puStack_a8);
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        func_0x00010bdf8a40(param_1,param_2,param_3,param_4,param_5,puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_1 = PTR_PTR_1126d5798;
        _objc_alloc(PTR_PTR_1126d5798);
        func_0x00010c0036e0();
      }
      _objc_release(lVar7);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(puStack_78);
      puVar4 = puStack_80;
    }
    _objc_release(puVar4);
    _objc_release(puVar6);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107959998; end: 107959baf; -[SCSnapDocManagerImpl _updateMediaReferenceWithKey:snapDoc:contentWriter:mediaId:error:] */

undefined8
FUN_107959998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,long param_6,undefined8 *param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x0001079521d8(param_6,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_7 == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      uVar5 = 0;
      *param_7 = puVar6;
    }
    goto LAB_107959b70;
  }
  puVar2 = PTR_PTR_1126bc860;
  func_0x00010bf4c8c0(PTR_PTR_1126bc860);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_5;
  func_0x00010c126140();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010b7f5498();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar3;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c08fa60();
    _objc_release(puVar6);
    if (puVar4 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) goto joined_r0x000107959b50;
    }
    puVar6 = puVar3;
    func_0x00010bf267e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf020(lVar1);
    _objc_release(puVar6);
    puVar6 = (undefined *)0x0;
    uVar5 = 1;
  }
  else {
joined_r0x000107959b50:
    if (param_7 == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      _objc_retainAutorelease(puVar6);
      uVar5 = 0;
      *param_7 = puVar6;
    }
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_107959b70:
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 10795a4ec; end: 10795a4ef; -[SCSnapDocManagerImpl _logErrorForMethod:error:] */

void FUN_10795a4ec(void)

{
  return;
}



/* Entry: 10795b0c0; end: 10795b18f;  */

void FUN_10795b0c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d57a8;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c059f60();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10795b58c; end: 10795b593;  */

void FUN_10795b58c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e0a478;
  }
  else {
    _objc_retain();
    lVar1 = param_2;
    func_0x00010c0c46a0();
    func_0x00010b7f519c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010c14de00(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10795b940; end: 10795b947; -[SCSnapDocMediaResultImpl getAssetType] */

undefined4 FUN_10795b940(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10795bad4; end: 10795bb9f; -[SCSnapDocThumbnailResolverImpl initWithSnapDocMediaResolver:contentDelivery:playbackAssetRepository:] */

undefined1 *
FUN_10795bad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8f00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10795c550; end: 10795c6cb; -[SCSnapDocThumbnailResolverImpl _generateAndCacheThumbnailForSnapDoc:snapDocKey:pageInfo:thumbnailRequestConfig:completion:] */

void FUN_10795c550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010be96240(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10795d27c; end: 10795d3d3; -[SCSnapDocThumbnailResolverImpl _generateThumbnailFromBaseImage:overlayImage:isSpectacles:thumbnailSize:] */

void FUN_10795d27c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_5 == 0) {
    uVar1 = 0;
  }
  else {
    dVar4 = param_1;
    dVar2 = param_2;
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    dVar3 = param_2 / dVar2;
    if (param_2 / dVar2 <= param_1 / dVar4) {
      dVar3 = param_1 / dVar4;
    }
    dVar2 = dVar3 * 1.4142135623730951;
    dVar4 = dVar2;
    if (param_7 == 0) {
      dVar4 = dVar3;
    }
    func_0x00010c23d0a0(param_5);
    dVar3 = dVar3 * dVar4;
    func_0x00010c23d0a0(param_5);
    dVar2 = dVar2 * dVar4;
    dVar4 = (param_1 - dVar3) * 0.5;
    dVar5 = (param_2 - dVar2) * 0.5;
    _UIGraphicsBeginImageContextWithOptions(param_1,param_2,0,1);
    func_0x00010bf89920(dVar4,dVar5,dVar3,dVar2,param_5);
    _objc_release(param_5);
    func_0x00010bf89920(dVar4,dVar5,dVar3,dVar2,param_6);
    _objc_release(param_6);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    uVar1 = param_6;
    _UIImageJPEGRepresentation(0x3fe3333333333333,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10795d884; end: 10795d8b7;  */

void FUN_10795d884(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113726fc0;
  puRam0000000113726fc0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10795e294; end: 10795e29b; -[SCMemoriesStorySavingLoggingStatus saveToMemories] */

undefined1 FUN_10795e294(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10795e478; end: 10795e47b; -[SCShakePromptCoordinatorHelper showInternalShakePromptWithUIWindow:projectName:description:videoUrl:message:] */

void FUN_10795e478(void)

{
  return;
}



/* Entry: 10795ea94; end: 10795ebbb; -[SCCollectionViewLeftAlignedLayout evaluatedSectionInsetForItemAtIndex:] */

undefined8 FUN_10795ea94(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_2;
  func_0x00010bf40120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    uVar1 = param_2;
    func_0x00010bf40120(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010bf40120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40280(uVar2);
    _objc_release(param_2);
    _objc_release(uVar2);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c156130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_sectionInset_112633268);
  return param_1;
}



/* Entry: 10795ed04; end: 10795ee17; -[SCShakeSeparatorView _setupLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10795ed04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112766374;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x94);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10795ee18;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10795f474; end: 10795f483; -[SCShakeSeparatorView label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10795f474(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112766374);
}



/* Entry: 10795f5d4; end: 10795f60b; -[SCSnapchatDeviceInfoProvider isUserloggedIn] */

bool FUN_10795f5d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c293740(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



/* Entry: 10795f824; end: 10795f8a7; -[SCShakeAsyncLogManager waitLogsForShakeId:] */

void FUN_10795f824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = 0;
    _dispatch_time(0,60000000000);
    _dispatch_group_wait(lVar1,uVar2);
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


