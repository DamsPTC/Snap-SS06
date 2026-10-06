/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b576630; end: 10b576663;  */

long FUN_10b576630(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b576970(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b576664; end: 10b576667;  */

long FUN_10b576664(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b576970(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b576668; end: 10b57667b;  */

void FUN_10b576668(void)

{
  FUN_10b576630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b57667c; end: 10b5766a3;  */

undefined ** FUN_10b57667c(void)

{
  return &PTR_DAT_110d0c670;
}



/* Entry: 10b5766a4; end: 10b576817;  */

long * FUN_10b5766a4(undefined1 *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar7;
  undefined8 extraout_x8_03;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  puVar3 = param_1;
  if (0 < (int)uVar1) {
    FUN_10b576a0c();
    puVar5 = puVar3 + 2;
    *puVar3 = 10;
    while (0x7f < uVar1) {
      func_0x00010b576a2c();
    }
    puVar5[-1] = (char)uVar1;
    puVar9 = *(uint **)(param_1 + 0x18);
    do {
      FUN_10b576a0c();
      uVar6 = (ulong)*puVar9;
      param_2 = (long *)(puVar3 + 1);
      while (bVar2 = 0x7f < (uint)uVar6, bVar2) {
        func_0x00010b576a18();
        uVar6 = extraout_x8;
      }
      func_0x00010b576a40();
    } while (!bVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar1) {
    FUN_10b576a0c();
    param_2 = (long *)(puVar3 + 2);
    *puVar3 = 0x12;
    while (0x7f < uVar1) {
      func_0x00010b576a2c();
    }
    *(char *)((long)param_2 + -1) = (char)uVar1;
    do {
      FUN_10b576a0c();
      func_0x00010b576a5c();
      uVar7 = extraout_x8_00;
      while (bVar2 = 0x7f < (uint)uVar7, bVar2) {
        func_0x00010b576a18();
        uVar7 = extraout_x8_01;
      }
      func_0x00010b576a40();
    } while (!bVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar1) {
    FUN_10b576a0c();
    param_2 = (long *)(puVar3 + 2);
    *puVar3 = 0x1a;
    while (0x7f < uVar1) {
      func_0x00010b576a2c();
    }
    *(char *)((long)param_2 + -1) = (char)uVar1;
    do {
      FUN_10b576a0c();
      func_0x00010b576a5c();
      uVar7 = extraout_x8_02;
      while (bVar2 = 0x7f < (uint)uVar7, bVar2) {
        func_0x00010b576a18();
        uVar7 = extraout_x8_03;
      }
      func_0x00010b576a40();
    } while (!bVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar4 = *(long *)(uVar8 + 8);
      uVar6 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar4 = uVar8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar10 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar10 - iVar11);
        if (iVar10 - iVar11 == 0 || iVar10 < iVar11) break;
        func_0x00010b4d5738();
        puVar3 = (undefined1 *)((long)param_2 + (long)iVar11);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar10);
    }
    _memcpy(param_2,lVar4,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10b576818; end: 10b5768ff;  */

void FUN_10b576818(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  lVar5 = param_1 + 0x10;
  func_0x00010b4d3e38();
  iVar7 = (int)lVar5;
  *(int *)(param_1 + 0x20) = iVar7;
  iVar4 = 0;
  if (lVar5 != 0) {
    iVar4 = ((int)LZCOUNT((long)iVar7) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = param_1 + 0x28;
  func_0x00010b4d3e70();
  iVar8 = (int)lVar5;
  *(int *)(param_1 + 0x38) = iVar8;
  iVar1 = 0;
  if (lVar5 != 0) {
    iVar1 = ((int)LZCOUNT((long)iVar8) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = param_1 + 0x40;
  func_0x00010b4d3e70();
  iVar3 = (int)lVar5;
  *(int *)(param_1 + 0x50) = iVar3;
  iVar2 = 0;
  if (lVar5 != 0) {
    iVar2 = ((int)LZCOUNT((long)iVar3) * -9 + 0x280U >> 6) + 1;
  }
  iVar4 = iVar4 + iVar7 + iVar8 + iVar1 + iVar3 + iVar2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar5 = (long)*(char *)(uVar6 + 0x1f);
    if (lVar5 < 0) {
      lVar5 = *(long *)(uVar6 + 0x10);
    }
    iVar4 = (int)lVar5 + iVar4;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  return;
}



/* Entry: 10b576900; end: 10b576903;  */

void FUN_10b576900(long param_1,long param_2)

{
  func_0x0001088ffb98(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  func_0x000107c282d0(param_1 + 0x40,param_2 + 0x40);
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



/* Entry: 10b576904; end: 10b576967;  */

void FUN_10b576904(long param_1,long param_2)

{
  func_0x0001088ffb98(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  func_0x000107c282d0(param_1 + 0x40,param_2 + 0x40);
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



/* Entry: 10b576968; end: 10b57696f;  */

void FUN_10b576968(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0c630;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = param_2;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = param_2;
  puVar1[10] = 0;
  return;
}



/* Entry: 10b576970; end: 10b576a0b;  */

long FUN_10b576970(long param_1)

{
  func_0x000107c282dc(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 4)) {
    func_0x0001004a6984(param_1);
  }
  return param_1;
}



/* Entry: 10b576a0c; end: 10b576aa3;  */

ulong * FUN_10b576a0c(void)

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



/* Entry: 10b576aa4; end: 10b576acf;  */

long FUN_10b576aa4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b576ad0; end: 10b576b1f;  */

undefined8 * FUN_10b576ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110d0c6d0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b576a70(param_1,param_3);
  return param_1;
}



/* Entry: 10b576b20; end: 10b576b23;  */

long FUN_10b576b20(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  return param_1;
}



/* Entry: 10b576b24; end: 10b576b37;  */

void FUN_10b576b24(void)

{
  FUN_10b576aa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b576b38; end: 10b576b57;  */

undefined ** FUN_10b576b38(void)

{
  return &PTR_DAT_110d0c710;
}



/* Entry: 10b576b58; end: 10b576c03;  */

long * FUN_10b576b58(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  plVar2 = param_1;
  if (param_1[2] != 0) {
    plVar1 = param_1;
    func_0x00010b576c74();
    plVar2 = (long *)0x8;
    func_0x000107c280a8(8,plVar1);
    func_0x00010b576c80();
    param_2 = plVar2;
  }
  if (param_1[3] != 0) {
    func_0x00010b576c74();
    param_2 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x00010b576c80();
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



/* Entry: 10b576c04; end: 10b576c8b;  */

ulong FUN_10b576c04(long param_1)

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



/* Entry: 10b576c8c; end: 10b576d6f;  */

undefined8 * FUN_10b576c8c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0c770;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x00010b577304(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00010b577304(param_1 + 5);
  *(undefined4 *)(param_1 + 7) = 0;
  func_0x00010b577304(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  func_0x00010b577304(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0xd) = 0;
  func_0x000107c2a448(param_1 + 0xe,param_2,param_3 + 0x70);
  param_1[0x10] = 0;
  return param_1;
}



/* Entry: 10b576d70; end: 10b576da3;  */

long FUN_10b576d70(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5771d0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b576da4; end: 10b576da7;  */

long FUN_10b576da4(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5771d0(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b576da8; end: 10b576dbb;  */

void FUN_10b576da8(void)

{
  FUN_10b576d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b576dbc; end: 10b576deb;  */

undefined ** FUN_10b576dbc(void)

{
  return &PTR_DAT_110d0c7b0;
}



/* Entry: 10b576dec; end: 10b577017;  */

long * FUN_10b576dec(undefined1 *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 uVar6;
  undefined8 extraout_x8_06;
  ulong uVar7;
  ulong extraout_x8_07;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  puVar3 = param_1;
  if (0 < (int)uVar1) {
    FUN_10b577294();
    param_2 = (long *)(puVar3 + 2);
    *puVar3 = 10;
    while (0x7f < uVar1) {
      func_0x00010b5772a0();
    }
    *(char *)((long)param_2 + -1) = (char)uVar1;
    do {
      FUN_10b577294();
      func_0x00010b5772c8();
      uVar6 = extraout_x8;
      while (bVar2 = 0x7f < (uint)uVar6, bVar2) {
        func_0x00010b5772b4();
        uVar6 = extraout_x8_00;
      }
      func_0x00010b5772dc();
    } while (!bVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar1) {
    FUN_10b577294();
    param_2 = (long *)(puVar3 + 2);
    *puVar3 = 0x12;
    while (0x7f < uVar1) {
      func_0x00010b5772a0();
    }
    *(char *)((long)param_2 + -1) = (char)uVar1;
    do {
      FUN_10b577294();
      func_0x00010b5772c8();
      uVar6 = extraout_x8_01;
      while (bVar2 = 0x7f < (uint)uVar6, bVar2) {
        func_0x00010b5772b4();
        uVar6 = extraout_x8_02;
      }
      func_0x00010b5772dc();
    } while (!bVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  if (0 < (int)uVar1) {
    FUN_10b577294();
    param_2 = (long *)(puVar3 + 2);
    *puVar3 = 0x1a;
    while (0x7f < uVar1) {
      func_0x00010b5772a0();
    }
    *(char *)((long)param_2 + -1) = (char)uVar1;
    do {
      FUN_10b577294();
      func_0x00010b5772c8();
      uVar6 = extraout_x8_03;
      while (bVar2 = 0x7f < (uint)uVar6, bVar2) {
        func_0x00010b5772b4();
        uVar6 = extraout_x8_04;
      }
      func_0x00010b5772dc();
    } while (!bVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (0 < (int)uVar1) {
    FUN_10b577294();
    param_2 = (long *)(puVar3 + 2);
    *puVar3 = 0x22;
    while (0x7f < uVar1) {
      func_0x00010b5772a0();
    }
    *(char *)((long)param_2 + -1) = (char)uVar1;
    do {
      FUN_10b577294();
      func_0x00010b5772c8();
      uVar6 = extraout_x8_05;
      while (bVar2 = 0x7f < (uint)uVar6, bVar2) {
        func_0x00010b5772b4();
        uVar6 = extraout_x8_06;
      }
      func_0x00010b5772dc();
    } while (!bVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  if (0 < (int)uVar1) {
    FUN_10b577294();
    puVar5 = puVar3 + 2;
    *puVar3 = 0x2a;
    while (0x7f < uVar1) {
      func_0x00010b5772a0();
    }
    puVar5[-1] = (char)uVar1;
    puVar9 = *(uint **)(param_1 + 0x78);
    do {
      FUN_10b577294();
      uVar7 = (ulong)*puVar9;
      param_2 = (long *)(puVar3 + 1);
      while (bVar2 = 0x7f < (uint)uVar7, bVar2) {
        func_0x00010b5772b4();
        uVar7 = extraout_x8_07;
      }
      func_0x00010b5772dc();
    } while (!bVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar7 = (ulong)*(char *)(uVar8 + 0x1f);
    if ((long)uVar7 < 0) {
      lVar4 = *(long *)(uVar8 + 8);
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      lVar4 = uVar8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar7) {
      while( true ) {
        iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar10 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar10 - iVar11);
        if (iVar10 - iVar11 == 0 || iVar10 < iVar11) break;
        func_0x00010b4d5738();
        puVar3 = (undefined1 *)((long)param_2 + (long)iVar11);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar10);
    }
    _memcpy(param_2,lVar4,uVar7 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar7);
  }
  return param_2;
}



/* Entry: 10b577018; end: 10b577147;  */

void FUN_10b577018(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  long lVar11;
  ulong uVar12;
  int iVar13;
  
  lVar11 = param_1 + 0x10;
  func_0x00010b4d3e70();
  iVar13 = (int)lVar11;
  *(int *)(param_1 + 0x20) = iVar13;
  uVar5 = lVar11 == 0;
  iVar10 = 0;
  if (!(bool)uVar5) {
    iVar10 = ((int)LZCOUNT((long)iVar13) * -9 + 0x280U >> 6) + 1;
  }
  iVar8 = (int)param_1;
  iVar6 = iVar8 + 0x28;
  func_0x00010b4d3e70();
  *(int *)(param_1 + 0x38) = iVar6;
  func_0x00010b5772ec();
  iVar1 = 0;
  if (!(bool)uVar5) {
    iVar1 = extraout_w8 + 1;
  }
  iVar7 = iVar8 + 0x40;
  func_0x00010b4d3e70();
  *(int *)(param_1 + 0x50) = iVar7;
  func_0x00010b5772ec();
  iVar2 = 0;
  if (!(bool)uVar5) {
    iVar2 = extraout_w8_00 + 1;
  }
  iVar8 = iVar8 + 0x58;
  func_0x00010b4d3e70();
  *(int *)(param_1 + 0x68) = iVar8;
  func_0x00010b5772ec();
  iVar3 = 0;
  if (!(bool)uVar5) {
    iVar3 = extraout_w8_01 + 1;
  }
  lVar11 = param_1 + 0x70;
  func_0x00010b4d3e38();
  iVar9 = (int)lVar11;
  *(int *)(param_1 + 0x80) = iVar9;
  iVar4 = 0;
  if (lVar11 != 0) {
    iVar4 = ((int)LZCOUNT((long)iVar9) * -9 + 0x280U >> 6) + 1;
  }
  iVar10 = iVar10 + iVar13 + iVar6 + iVar1 + iVar7 + iVar2 + iVar8 + iVar3 + iVar9 + iVar4;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar11 = (long)*(char *)(uVar12 + 0x1f);
    if (lVar11 < 0) {
      lVar11 = *(long *)(uVar12 + 0x10);
    }
    iVar10 = (int)lVar11 + iVar10;
  }
  *(int *)(param_1 + 0x84) = iVar10;
  return;
}



/* Entry: 10b577148; end: 10b57714b;  */

void FUN_10b577148(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  func_0x000107c282d0(param_1 + 0x40,param_2 + 0x40);
  func_0x000107c282d0(param_1 + 0x58,param_2 + 0x58);
  func_0x0001088ffb98(param_1 + 0x70,param_2 + 0x70);
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



/* Entry: 10b57714c; end: 10b5771c7;  */

void FUN_10b57714c(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
  func_0x000107c282d0(param_1 + 0x40,param_2 + 0x40);
  func_0x000107c282d0(param_1 + 0x58,param_2 + 0x58);
  func_0x0001088ffb98(param_1 + 0x70,param_2 + 0x70);
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



/* Entry: 10b5771c8; end: 10b5771cf;  */

void FUN_10b5771c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x88;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x88);
  }
  *puVar1 = &PTR_FUN_110d0c770;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = param_2;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = param_2;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = param_2;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = param_2;
  puVar1[0x10] = 0;
  return;
}



/* Entry: 10b5771d0; end: 10b577293;  */

/* WARNING: Possible PIC construction at 0x00010b5771ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b5771fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b5771f0) */
/* WARNING: Removing unreachable block (ram,0x00010b577200) */

long FUN_10b5771d0(long param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x000107c2a450(param_1 + 0x60);
  func_0x00010006804c(param_1 + 0x48);
  if (in_NG == in_OV) {
    func_0x0001002a998c(param_1);
  }
  return param_1;
}



/* Entry: 10b577294; end: 10b577317;  */

ulong * FUN_10b577294(void)

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



/* Entry: 10b577318; end: 10b5773fb;  */

void FUN_10b577318(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b578d24();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b5773c0;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b577c38();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b578d24();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b5773c0;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b577e38();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b578d24();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5773c0;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b577fb4();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b578d24();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5773c0;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b578244();
    }
    break;
  default:
    goto LAB_10b5773c0;
  }
  __ZdlPv();
LAB_10b5773c0:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10b5773fc; end: 10b5774b3;  */

undefined8 * FUN_10b5773fc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0c958;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b578ba0();
  }
  lVar2 = param_3 + 0x10;
  func_0x00010b578be4();
  param_1[2] = lVar2;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x18);
  switch(uVar1) {
  case 4:
    func_0x00010b578d0c();
    func_0x00010b5788d8();
    break;
  case 5:
    func_0x00010b578d0c();
    func_0x00010b57895c();
    break;
  case 6:
    func_0x00010b578d0c();
    func_0x00010b5789d4();
    break;
  case 7:
    func_0x00010b578d0c();
    func_0x00010b578a60();
    break;
  default:
    goto LAB_10b5774a8;
  }
  param_1[4] = lVar2;
LAB_10b5774a8:
  return param_1;
}



/* Entry: 10b5774b4; end: 10b5774df;  */

undefined8 FUN_10b5774b4(undefined8 param_1)

{
  func_0x00010b578c70();
  FUN_10b5774e0(param_1);
  return param_1;
}



/* Entry: 10b5774e0; end: 10b577517;  */

void FUN_10b5774e0(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b578d24();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b5773c0;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b577c38();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b578d24();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b5773c0;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b577e38();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b578d24();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5773c0;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b577fb4();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b578d24();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5773c0;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_10b578244();
    }
    break;
  default:
    goto LAB_10b5773c0;
  }
  __ZdlPv();
LAB_10b5773c0:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10b577518; end: 10b57751b;  */

undefined8 FUN_10b577518(undefined8 param_1)

{
  func_0x00010b578c70();
  FUN_10b5774e0(param_1);
  return param_1;
}



/* Entry: 10b57751c; end: 10b57752f;  */

void FUN_10b57751c(void)

{
  FUN_10b5774b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b577530; end: 10b57754b;  */

undefined8 FUN_10b577530(undefined8 param_1)

{
  func_0x00010b578c70();
  func_0x00010b578c80();
  func_0x00010b578ce0();
  return param_1;
}



/* Entry: 10b57754c; end: 10b577583;  */

void FUN_10b57754c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b578bac();
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  FUN_10b577318();
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



/* Entry: 10b577584; end: 10b577667;  */

long * FUN_10b577584(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  int iVar6;
  long unaff_x22;
  int iVar7;
  
  plVar5 = param_3;
  plVar3 = param_2;
  if ((int)param_1[3] != 0) {
    plVar3 = param_1;
    func_0x00010b578c3c();
    param_2 = plVar3;
    func_0x00010b578c88();
    func_0x00010b578cf4();
  }
  func_0x00010b578c00(param_1[2]);
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b577600;
  }
  else if ((int)param_2 == 0) goto LAB_10b577600;
  param_4 = (long *)&UNK_10f77b9d3;
  func_0x00010b578bd4();
  func_0x00010b578b34(param_3,3);
  plVar3 = param_3;
LAB_10b577600:
  plVar4 = (long *)(ulong)*(uint *)((long)param_1 + 0x2c);
  uVar2 = *(uint *)((long)param_1 + 0x2c) - 4;
  if (uVar2 < 4) {
    plVar5 = (long *)(ulong)*(uint *)(param_1[4] + *(long *)(&UNK_10e5bfbb0 + (ulong)uVar2 * 8));
    func_0x000107c303cc();
    param_4 = plVar3;
    plVar3 = plVar4;
  }
  if ((param_1[1] & 1U) == 0) {
    return plVar3;
  }
  func_0x00010b578cb8();
  if ((long)plVar5 < 0) {
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010b578d00();
  if (*plVar4 - (long)param_4 < (long)(int)plVar5) {
    while( true ) {
      iVar7 = ((int)*plVar4 - (int)param_4) + 0x10;
      iVar6 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar6 - iVar7);
      if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar7);
      param_4 = plVar4;
      func_0x000107c303e4(plVar4,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar6);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)plVar5);
}



/* Entry: 10b577668; end: 10b577733;  */

long FUN_10b577668(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b578b80();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c282a0();
    lVar2 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x2c)) {
  case 4:
    func_0x00010b577734(*(undefined8 *)(unaff_x19 + 0x20));
    break;
  case 5:
    func_0x00010b57774c(*(undefined8 *)(unaff_x19 + 0x20));
    break;
  case 6:
    func_0x00010b577764(*(undefined8 *)(unaff_x19 + 0x20));
    break;
  case 7:
    func_0x00010b57777c(*(undefined8 *)(unaff_x19 + 0x20));
    break;
  default:
    goto LAB_10b577708;
  }
  func_0x00010b578c24();
LAB_10b577708:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b578ca0();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x28) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b577734; end: 10b577793;  */

void FUN_10b577734(void)

{
  FUN_10b577d98();
  func_0x00010b578b40();
  return;
}



/* Entry: 10b577794; end: 10b577797;  */

void FUN_10b577794(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 8);
  lVar3 = param_1;
  lVar4 = param_2;
  func_0x00010b578bf4(*(undefined8 *)(param_2 + 0x10));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      func_0x00010b578c18();
    }
    lVar3 = param_1 + 0x10;
    func_0x000107c30248();
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        lVar3 = param_1;
        FUN_10b577318();
      }
      *(int *)(param_1 + 0x2c) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b578c58();
        func_0x00010b577944();
        goto LAB_10b5778fc;
      }
      func_0x00010b578d18();
      func_0x00010b5788d8();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b578c58();
        func_0x00010b5779bc();
        goto LAB_10b5778fc;
      }
      func_0x00010b578d18();
      func_0x00010b57895c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b578c58();
        func_0x00010b577a14();
        goto LAB_10b5778fc;
      }
      func_0x00010b578d18();
      func_0x00010b5789d4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010b578c58();
        func_0x00010b577ad0();
        goto LAB_10b5778fc;
      }
      func_0x00010b578d18();
      func_0x00010b578a60();
      break;
    default:
      goto LAB_10b5778fc;
    }
    *(long *)(param_1 + 0x20) = lVar3;
  }
LAB_10b5778fc:
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



/* Entry: 10b577798; end: 10b577943;  */

void FUN_10b577798(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 8);
  lVar3 = param_1;
  lVar4 = param_2;
  func_0x00010b578bf4(*(undefined8 *)(param_2 + 0x10));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(lVar4 + 8);
  }
  if (lVar6 != 0) {
    if ((uVar5 & 1) != 0) {
      func_0x00010b578c18();
    }
    lVar3 = param_1 + 0x10;
    func_0x000107c30248();
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        lVar3 = param_1;
        FUN_10b577318();
      }
      *(int *)(param_1 + 0x2c) = iVar1;
    }
    switch(iVar1) {
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b578c58();
        func_0x00010b577944();
        goto LAB_10b5778fc;
      }
      func_0x00010b578d18();
      func_0x00010b5788d8();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b578c58();
        func_0x00010b5779bc();
        goto LAB_10b5778fc;
      }
      func_0x00010b578d18();
      func_0x00010b57895c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b578c58();
        func_0x00010b577a14();
        goto LAB_10b5778fc;
      }
      func_0x00010b578d18();
      func_0x00010b5789d4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x00010b578c58();
        func_0x00010b577ad0();
        goto LAB_10b5778fc;
      }
      func_0x00010b578d18();
      func_0x00010b578a60();
      break;
    default:
      goto LAB_10b5778fc;
    }
    *(long *)(param_1 + 0x20) = lVar3;
  }
LAB_10b5778fc:
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



/* Entry: 10b577944; end: 10b577c37;  */

void FUN_10b577944(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b578b68();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    func_0x00010b578c78();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    func_0x00010b578cd8();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b578c48();
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



/* Entry: 10b577c38; end: 10b577c63;  */

undefined8 FUN_10b577c38(undefined8 param_1)

{
  func_0x00010b578c70();
  func_0x00010b578c80();
  func_0x00010b578ce0();
  return param_1;
}



/* Entry: 10b577c64; end: 10b577c77;  */

void FUN_10b577c64(void)

{
  FUN_10b577c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b577c78; end: 10b577c83;  */

undefined ** FUN_10b577c78(void)

{
  return &PTR_DAT_110d0c9e8;
}



/* Entry: 10b577c84; end: 10b577cb7;  */

void FUN_10b577c84(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b578bac();
  func_0x00010b578cd0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 10b577cb8; end: 10b577d97;  */

long * FUN_10b577cb8(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x00010b578bb8();
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b577ce8;
  }
  else if ((int)param_2 != 0) {
LAB_10b577ce8:
    param_4 = (long *)&UNK_10f77ba14;
    func_0x00010b578bd4();
    param_2 = (long *)0x1;
    param_1 = unaff_x19;
    func_0x00010b578b34();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x00010b578c3c();
    param_2 = param_1;
    func_0x00010b578c88();
    func_0x00010b578cf4();
    unaff_x20 = param_1;
  }
  func_0x00010b578c00(*(undefined8 *)(unaff_x21 + 0x18));
  if ((long)param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b577d64;
  }
  else if ((int)param_2 == 0) goto LAB_10b577d64;
  param_4 = (long *)&UNK_10f77ba58;
  func_0x00010b578bd4();
  func_0x00010b578b34();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b577d64:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b578cb8();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b578d00();
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



/* Entry: 10b577d98; end: 10b577e33;  */

long FUN_10b577d98(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b578b80();
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
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b578ca0();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b577e34; end: 10b577e37;  */

void FUN_10b577e34(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b578b68();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    func_0x00010b578c78();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    func_0x00010b578cd8();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b578c48();
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



/* Entry: 10b577e38; end: 10b577e5f;  */

undefined8 FUN_10b577e38(undefined8 param_1)

{
  func_0x00010b578c70();
  func_0x00010b578c80();
  return param_1;
}



/* Entry: 10b577e60; end: 10b577e73;  */

void FUN_10b577e60(void)

{
  FUN_10b577e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b577e74; end: 10b577e7f;  */

undefined ** FUN_10b577e74(void)

{
  return &PTR_DAT_110d0ca48;
}



/* Entry: 10b577e80; end: 10b577eaf;  */

void FUN_10b577e80(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b578bac();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10b577eb0; end: 10b577f5b;  */

long * FUN_10b577eb0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar2;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  int iVar4;
  
  func_0x00010b578bb8();
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b577efc;
  }
  else if ((int)param_2 == 0) goto LAB_10b577efc;
  param_4 = (long *)&UNK_10f77ba9d;
  func_0x00010b578bd4();
  func_0x00010b578b34();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b577efc:
  plVar2 = param_1;
  if (*(char *)(unaff_x21 + 0x18) == '\x01') {
    func_0x00010b578c3c();
    plVar2 = (long *)(ulong)*(byte *)(unaff_x21 + 0x18);
    func_0x00010b578c88();
    func_0x000107c280a8(plVar2,param_1);
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b578cb8();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b578d00();
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



/* Entry: 10b577f5c; end: 10b577faf;  */

void FUN_10b577f5c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b578b80();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)param_1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x18) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b578ca0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  return;
}



/* Entry: 10b577fb0; end: 10b577fb3;  */

void FUN_10b577fb0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b578b68();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    func_0x00010b578c78();
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b578c48();
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



/* Entry: 10b577fb4; end: 10b577fef;  */

long FUN_10b577fb4(long param_1)

{
  func_0x00010b578c70();
  func_0x00010b578c80();
  func_0x00010b578ce0();
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  return param_1;
}



/* Entry: 10b577ff0; end: 10b578003;  */

void FUN_10b577ff0(void)

{
  FUN_10b577fb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b578004; end: 10b57800f;  */

undefined ** FUN_10b578004(void)

{
  return &PTR_DAT_110d0caa0;
}



/* Entry: 10b578010; end: 10b57804f;  */

void FUN_10b578010(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b578bac();
  func_0x00010b578cd0();
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
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



/* Entry: 10b578050; end: 10b57818f;  */

long * FUN_10b578050(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x00010b578bb8();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b578080;
  }
  else if ((int)param_2 != 0) {
LAB_10b578080:
    param_4 = (long *)&UNK_10f77badf;
    func_0x00010b578bd4();
    param_2 = 1;
    param_1 = unaff_x19;
    func_0x00010b578b34();
    unaff_x20 = param_1;
  }
  func_0x00010b578c00(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5780c0;
  }
  else if ((int)param_2 != 0) {
LAB_10b5780c0:
    param_4 = (long *)&UNK_10f77bb20;
    func_0x00010b578bd4();
    param_2 = 2;
    param_1 = unaff_x19;
    func_0x00010b578b34();
    unaff_x20 = param_1;
  }
  func_0x00010b578c00(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b578100;
  }
  else if ((int)param_2 != 0) {
LAB_10b578100:
    param_4 = (long *)&UNK_10f77bb63;
    func_0x00010b578bd4();
    param_2 = 3;
    param_1 = unaff_x19;
    func_0x00010b578b34();
    unaff_x20 = param_1;
  }
  func_0x00010b578c00(*(undefined8 *)(unaff_x21 + 0x28));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b57815c;
  }
  else if ((int)param_2 == 0) goto LAB_10b57815c;
  param_4 = (long *)&UNK_10f77bbab;
  func_0x00010b578bd4();
  func_0x00010b578b34();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10b57815c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010b578cb8();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010b578d00();
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



/* Entry: 10b578190; end: 10b57823f;  */

long FUN_10b578190(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b578b80();
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
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b578ca0();
    lVar1 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x30) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b578240; end: 10b578243;  */

void FUN_10b578240(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b578b68();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    func_0x00010b578c78();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    func_0x00010b578cd8();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b578c48();
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



/* Entry: 10b578244; end: 10b578297;  */

long FUN_10b578244(long param_1)

{
  func_0x00010b578c70();
  func_0x00010b578c80();
  func_0x00010b578ce0();
  func_0x000107c30258(param_1 + 0x20);
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  func_0x000107c30258(param_1 + 0x38);
  func_0x000107c30258(param_1 + 0x40);
  return param_1;
}



/* Entry: 10b578298; end: 10b5782ab;  */

void FUN_10b578298(void)

{
  FUN_10b578244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5782ac; end: 10b5782b7;  */

undefined ** FUN_10b5782ac(void)

{
  return &PTR_DAT_110d0caf8;
}



/* Entry: 10b5782b8; end: 10b578317;  */

void FUN_10b5782b8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b578bac();
  func_0x00010b578cd0();
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
  func_0x000107c3025c(unaff_x19 + 0x30);
  func_0x000107c3025c(unaff_x19 + 0x38);
  func_0x000107c3025c(unaff_x19 + 0x40);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined4 *)(unaff_x19 + 0x58) = 0;
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



/* Entry: 10b578318; end: 10b5785b7;  */

long * FUN_10b578318(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *plVar4;
  int iVar5;
  long unaff_x22;
  long *plVar6;
  int iVar7;
  
  plVar1 = param_1;
  plVar2 = param_2;
  plVar6 = param_3;
  func_0x00010b578c00(param_1[2]);
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b578358;
  }
  else if ((int)plVar2 != 0) {
LAB_10b578358:
    func_0x00010b578bd4();
    plVar2 = (long *)0x1;
    plVar1 = param_3;
    func_0x00010b578b5c();
    param_2 = plVar1;
  }
  plVar4 = plVar1;
  if ((char)param_1[9] == '\x01') {
    func_0x00010b578c30();
    plVar4 = (long *)(ulong)*(byte *)(param_1 + 9);
    func_0x00010b578c88();
    func_0x000107c280a8();
    plVar2 = plVar1;
    param_2 = plVar4;
  }
  func_0x00010b578c00(param_1[3]);
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5783c4;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5783c4:
    func_0x00010b578bd4();
    plVar2 = (long *)0x3;
    plVar4 = param_3;
    func_0x00010b578b5c();
    param_2 = plVar4;
  }
  func_0x00010b578c00(param_1[4]);
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b578404;
  }
  else if ((int)plVar2 != 0) {
LAB_10b578404:
    func_0x00010b578bd4();
    plVar2 = (long *)0x4;
    plVar4 = param_3;
    func_0x00010b578b5c();
    param_2 = plVar4;
  }
  func_0x00010b578c00(param_1[5]);
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b578444;
  }
  else if ((int)plVar2 != 0) {
LAB_10b578444:
    func_0x00010b578bd4();
    plVar4 = param_3;
    func_0x00010b578b5c(param_3,5);
    param_2 = plVar4;
  }
  plVar2 = (long *)param_1[10];
  if (plVar2 != (long *)0x0) {
    plVar4 = param_3;
    func_0x000106af68d0();
    plVar6 = param_2;
    param_2 = plVar4;
  }
  func_0x00010b578c00(param_1[6]);
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b57849c;
  }
  else if ((int)plVar2 != 0) {
LAB_10b57849c:
    func_0x00010b578bd4();
    plVar2 = (long *)0x7;
    plVar4 = param_3;
    func_0x00010b578b5c();
    param_2 = plVar4;
  }
  func_0x00010b578c00(param_1[7]);
  if ((long)plVar2 < 0) {
    plVar2 = (long *)0x0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10b5784dc;
  }
  else if ((int)plVar2 != 0) {
LAB_10b5784dc:
    func_0x00010b578bd4();
    plVar2 = (long *)0x8;
    plVar4 = param_3;
    func_0x00010b578b5c();
    param_2 = plVar4;
  }
  plVar1 = plVar4;
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    func_0x00010b578c30();
    plVar1 = (long *)0x48;
    func_0x000107c280a8();
    func_0x00010b578ce8();
    plVar2 = plVar4;
    param_2 = plVar1;
  }
  func_0x00010b578c00(param_1[8]);
  if ((long)plVar2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10b57855c;
  }
  else if ((int)plVar2 == 0) goto LAB_10b57855c;
  func_0x00010b578bd4();
  plVar1 = param_3;
  func_0x00010b578b5c(param_3,10);
  param_2 = plVar1;
LAB_10b57855c:
  if ((int)param_1[0xb] != 0) {
    func_0x00010b578c30();
    param_2 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar1);
    func_0x00010b578ce8();
  }
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  func_0x00010b578cb8();
  if ((long)plVar6 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    plVar6 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar6) {
    while( true ) {
      iVar7 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar5 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar5 - iVar7);
      if (iVar5 - iVar7 == 0 || iVar5 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar5);
  }
  _memcpy(param_2,lVar3,(ulong)plVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar6);
}



/* Entry: 10b5785b8; end: 10b57871f;  */

void FUN_10b5785b8(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b578b80();
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
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x38));
  lVar2 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  func_0x00010b578c0c(*(undefined8 *)(unaff_x19 + 0x40));
  lVar2 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010b578c24();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x48) * 2;
  if (*(int *)(unaff_x19 + 0x4c) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x4c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x50)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(int *)(unaff_x19 + 0x58) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x58)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b578ca0();
    lVar2 = extraout_x8_06;
    if (extraout_x8_06 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x5c) = iVar1;
  return;
}



/* Entry: 10b578720; end: 10b57874b;  */

void FUN_10b578720(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b578b68();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    func_0x00010b578c78();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    func_0x00010b578cd8();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x000107c30248();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x000107c30248();
  }
  func_0x00010b578bf4(*(undefined8 *)(unaff_x20 + 0x40));
  lVar1 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b578c18();
    }
    param_1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x48) = 1;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x19 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    *(long *)(unaff_x19 + 0x50) = *(long *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b578c48();
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



/* Entry: 10b57874c; end: 10b5788d7;  */

void FUN_10b57874c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_DAT_110d0c818;
  puVar1[1] = param_1;
  func_0x00010b578cac();
  puVar1[2] = extraout_x8;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b5788d8; end: 10b578b27;  */

undefined8 * FUN_10b5788d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x28);
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110d0c8b8;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b578ba0();
  }
  lVar2 = param_2 + 0x10;
  func_0x00010b578be4();
  puVar1[2] = lVar2;
  lVar2 = param_2 + 0x18;
  func_0x00010b578be4();
  puVar1[3] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return puVar1;
}



/* Entry: 10b578b28; end: 10b578d2f;  */

void FUN_10b578b28(void)

{
  return;
}



/* Entry: 10b578d30; end: 10b578d97;  */

undefined8 * FUN_10b578d30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0cbe0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_3 = param_3 + 0x10;
  func_0x000107c2809c(param_3,param_2);
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 10b578d98; end: 10b578dc7;  */

long FUN_10b578d98(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b578dc8; end: 10b578dcb;  */

long FUN_10b578dc8(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b578dcc; end: 10b578ddf;  */

void FUN_10b578dcc(void)

{
  FUN_10b578d98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b578de0; end: 10b578deb;  */

undefined ** FUN_10b578de0(void)

{
  return &PTR_DAT_110d0cc20;
}



/* Entry: 10b578dec; end: 10b578f0b;  */

void FUN_10b578dec(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
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



/* Entry: 10b578f0c; end: 10b578f0f;  */

void FUN_10b578f0c(long param_1,long param_2)

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



/* Entry: 10b578f10; end: 10b578f7f;  */

void FUN_10b578f10(long param_1,long param_2)

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



/* Entry: 10b578f80; end: 10b578f87;  */

void FUN_10b578f80(undefined8 param_1,undefined8 *param_2)

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
  *puVar1 = &PTR_FUN_110d0cbe0;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b578f88; end: 10b578fd7;  */

void FUN_10b578f88(undefined8 *param_1)

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
  *puVar1 = &PTR_FUN_110d0cbe0;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 10b578fd8; end: 10b578fdf;  */

void FUN_10b578fd8(void)

{
  return;
}



/* Entry: 10b578fe0; end: 10b579067;  */

undefined8 * FUN_10b578fe0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0cc98;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x000107c282d4(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107c282d4(param_1 + 5,param_2,param_3 + 0x28);
  param_1[7] = 0;
  return param_1;
}



/* Entry: 10b579068; end: 10b57909b;  */

long FUN_10b579068(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b579358(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b57909c; end: 10b57909f;  */

long FUN_10b57909c(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b579358(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5790a0; end: 10b5790b3;  */

void FUN_10b5790a0(void)

{
  FUN_10b579068();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5790b4; end: 10b5790d7;  */

undefined ** FUN_10b5790b4(void)

{
  return &PTR_DAT_110d0ccd8;
}



/* Entry: 10b5790d8; end: 10b5791fb;  */

long * FUN_10b5790d8(undefined1 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  puVar3 = param_1;
  if (uVar2 != 0) {
    FUN_10b5793e0();
    puVar5 = puVar3 + 2;
    *puVar3 = 10;
    while (0x7f < uVar2) {
      func_0x00010b5793f8();
    }
    puVar5[-1] = (char)uVar2;
    piVar8 = *(int **)(param_1 + 0x18);
    piVar1 = piVar8 + *(int *)(param_1 + 0x10);
    do {
      FUN_10b5793e0();
      uVar6 = (ulong)*piVar8;
      param_2 = (long *)(puVar3 + 1);
      while (0x7f < uVar6) {
        func_0x00010b57940c();
        uVar6 = extraout_x8;
      }
      piVar8 = piVar8 + 1;
      *(char *)((long)param_2 + -1) = (char)uVar6;
    } while (piVar8 < piVar1);
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    FUN_10b5793e0();
    puVar5 = puVar3 + 2;
    *puVar3 = 0x12;
    while (0x7f < uVar2) {
      func_0x00010b5793f8();
    }
    puVar5[-1] = (char)uVar2;
    piVar8 = *(int **)(param_1 + 0x30);
    piVar1 = piVar8 + *(int *)(param_1 + 0x28);
    do {
      FUN_10b5793e0();
      uVar6 = (ulong)*piVar8;
      param_2 = (long *)(puVar3 + 1);
      while (0x7f < uVar6) {
        func_0x00010b57940c();
        uVar6 = extraout_x8_00;
      }
      piVar8 = piVar8 + 1;
      *(char *)((long)param_2 + -1) = (char)uVar6;
    } while (piVar8 < piVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar4 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar4 = uVar7 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar6) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        puVar3 = (undefined1 *)((long)param_2 + (long)iVar10);
        param_2 = param_3;
        func_0x000107c303e4(param_3,puVar3);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar9);
    }
    _memcpy(param_2,lVar4,uVar6 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar6);
  }
  return param_2;
}



/* Entry: 10b5791fc; end: 10b5792f7;  */

long FUN_10b5791fc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = 0;
  lVar1 = 0;
  for (lVar4 = (long)*(int *)(param_1 + 0x10); lVar4 != 0; lVar4 = lVar4 + -1) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x18) + (lVar2 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar1;
    lVar2 = lVar2 + 0x100000000;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + (ulong)((int)LZCOUNT((long)(int)lVar1) * -9 + 0x280U >> 6) + 1;
  }
  lVar5 = 0;
  lVar4 = 0;
  *(int *)(param_1 + 0x20) = (int)lVar1;
  for (lVar1 = (long)*(int *)(param_1 + 0x28); lVar1 != 0; lVar1 = lVar1 + -1) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(*(long *)(param_1 + 0x30) + (lVar5 >> 0x1e))) * -9 +
                    0x280U >> 6) + lVar4;
    lVar5 = lVar5 + 0x100000000;
  }
  lVar2 = lVar4 + lVar2;
  if (lVar4 != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)(int)lVar4) * -9 + 0x280U >> 6) + 1;
  }
  *(int *)(param_1 + 0x38) = (int)lVar4;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(param_1 + 0x3c) = (int)lVar2;
  return lVar2;
}



/* Entry: 10b5792f8; end: 10b57934f;  */

void FUN_10b5792f8(long param_1,long param_2)

{
  func_0x000107c282d0(param_1 + 0x10,param_2 + 0x10);
  func_0x000107c282d0(param_1 + 0x28,param_2 + 0x28);
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



/* Entry: 10b579350; end: 10b579357;  */

void FUN_10b579350(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x40);
  }
  *puVar1 = &PTR_FUN_110d0cc98;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = param_2;
  puVar1[7] = 0;
  return;
}



/* Entry: 10b579358; end: 10b5793df;  */

/* WARNING: Possible PIC construction at 0x00010b57936c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b579370) */

long FUN_10b579358(long param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x00010006804c(param_1 + 0x18);
  if (in_NG == in_OV) {
    func_0x0001002a998c(param_1);
  }
  return param_1;
}



/* Entry: 10b5793e0; end: 10b57941f;  */

ulong * FUN_10b5793e0(void)

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



/* Entry: 10b579420; end: 10b5794ab;  */

undefined8 * FUN_10b579420(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110d0cd58;
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
    FUN_10b5472e0(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  param_1[6] = *(undefined8 *)(param_3 + 0x30);
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10b5794ac; end: 10b5794db;  */

long FUN_10b5794ac(long param_1)

{
  func_0x000107c28090(param_1 + 8);
  FUN_10b5794dc(param_1);
  return param_1;
}



/* Entry: 10b5794dc; end: 10b57950b;  */

void FUN_10b5794dc(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b53a814();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


