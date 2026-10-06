/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae097a0; end: 10ae097b3;  */

void FUN_10ae097a0(void)

{
  FUN_10ae09734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae097b4; end: 10ae097bf;  */

undefined ** FUN_10ae097b4(void)

{
  return &PTR_DAT_110c77eb8;
}



/* Entry: 10ae097c0; end: 10ae0981b;  */

void FUN_10ae097c0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0ae24();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 0x20);
  func_0x000107c3025c(unaff_x19 + 0x28);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010ae09644(*(undefined8 *)(unaff_x19 + 0x30));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x45) = 0;
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



/* Entry: 10ae0981c; end: 10ae099bb;  */

long * FUN_10ae0981c(long *param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar5;
  long *unaff_x22;
  int iVar6;
  
  func_0x00010ae0ad78();
  func_0x00010ae0ac30(param_1[3]);
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) {
      plVar4 = (long *)*unaff_x22;
      goto LAB_10ae09854;
    }
  }
  else {
    plVar4 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae09854:
      func_0x00010ae0abc0();
      func_0x00010ae0ab78();
      param_1 = plVar4;
      unaff_x21 = plVar4;
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x38);
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x000107c282cc();
    param_3 = unaff_x21;
    unaff_x21 = param_1;
  }
  func_0x00010ae0ac30(*(undefined8 *)(unaff_x20 + 0x20));
  if (lVar3 < 0) {
    if (unaff_x22[1] != 0) goto LAB_10ae098a4;
  }
  else if ((int)lVar3 != 0) {
LAB_10ae098a4:
    func_0x00010ae0abc0();
    param_1 = unaff_x19;
    func_0x00010ae0ab8c();
    unaff_x21 = param_1;
  }
  plVar4 = *(long **)(unaff_x20 + 0x40);
  if (plVar4 != (long *)0x0) {
    param_1 = unaff_x19;
    func_0x000107c282e8();
    param_3 = unaff_x21;
    unaff_x21 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x00010ae0ab28();
    plVar2 = (long *)0x28;
    func_0x000107c280a8();
    func_0x00010ae0abb4();
    plVar4 = param_1;
    unaff_x21 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x4c) == '\x01') {
    func_0x00010ae0ab28();
    unaff_x21 = (long *)0x30;
    func_0x000107c280a8();
    func_0x00010ae0ac6c();
    plVar4 = plVar2;
  }
  func_0x00010ae0ac30(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)plVar4 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae09964;
  }
  else if ((int)plVar4 == 0) goto LAB_10ae09964;
  func_0x00010ae0abc0();
  unaff_x21 = unaff_x19;
  func_0x00010ae0ab8c();
LAB_10ae09964:
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    unaff_x21 = (long *)0x8;
    func_0x00010ae0ac5c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x00010ae0acb4();
  if ((long)param_3 < 0) {
    lVar3 = *(long *)(extraout_x8 + 8);
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar3 = extraout_x8 + 8;
  }
  if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
      iVar5 = (int)param_3;
      uVar1 = iVar5 - iVar6;
      param_3 = (long *)(ulong)uVar1;
      if (uVar1 == 0 || iVar5 < iVar6) break;
      func_0x00010b4d5738();
      unaff_x21 = unaff_x19;
      func_0x000107c303e4();
    }
    func_0x00010b4d5738();
    return (long *)((long)unaff_x21 + (long)iVar5);
  }
  _memcpy(unaff_x21,lVar3,(ulong)param_3 & 0xffffffff);
  return (long *)((long)unaff_x21 + (long)(int)param_3);
}



/* Entry: 10ae099bc; end: 10ae09aab;  */

void FUN_10ae099bc(long param_1)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  int iVar2;
  long extraout_x8;
  long extraout_x8_00;
  long lVar3;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  long extraout_x9;
  
  lVar4 = param_1;
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar4 + 1;
  }
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0ac3c();
  }
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0ac3c();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10ae0971c(*(undefined8 *)(param_1 + 0x30));
    func_0x00010ae0ac3c();
  }
  iVar2 = -9;
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010ae0ab40();
    iVar2 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010ae0ab40();
    iVar2 = extraout_w8_00;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * iVar2 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x4c) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae0ace4();
    lVar4 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar4 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 10ae09aac; end: 10ae09bc7;  */

void FUN_10ae09aac(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae0ac88();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x000107c30248();
  }
  func_0x00010ae0ac24(*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae0ac18();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      FUN_10ae0aa5c();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_10ae095d4();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(char *)(unaff_x20 + 0x4c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4c) = 1;
  }
  func_0x00010ae0aba0();
  if ((extraout_x8_02 & 1) != 0) {
    func_0x00010ae0ac78();
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



/* Entry: 10ae09bc8; end: 10ae09bf3;  */

undefined8 FUN_10ae09bc8(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae09bf4(param_1);
  return param_1;
}



/* Entry: 10ae09bf4; end: 10ae09c2b;  */

void FUN_10ae09bf4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10ae09064();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceb594();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae09c2c; end: 10ae09c2f;  */

undefined8 FUN_10ae09c2c(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae09bf4(param_1);
  return param_1;
}



/* Entry: 10ae09c30; end: 10ae09c43;  */

void FUN_10ae09c30(void)

{
  FUN_10ae09bc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae09c44; end: 10ae09c4f;  */

undefined ** FUN_10ae09c44(void)

{
  return &PTR_DAT_110c77f08;
}



/* Entry: 10ae09c50; end: 10ae09ca7;  */

void FUN_10ae09c50(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_10ae090fc(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bceb634(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
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



/* Entry: 10ae09ca8; end: 10ae09ddb;  */

long * FUN_10ae09ca8(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010ae0ac98();
  plVar2 = param_4;
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = unaff_x19;
    func_0x000105991a14();
    param_3 = param_4;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x54);
    plVar2 = (long *)0x2;
    func_0x00010ae0ac5c();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    plVar2 = (long *)0x3;
    func_0x00010ae0ac5c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0acb4();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        plVar2 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar4);
    }
    _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 10ae09ddc; end: 10ae09df3;  */

void FUN_10ae09ddc(void)

{
  FUN_10ae09374();
  func_0x00010ae0acf0();
  return;
}



/* Entry: 10ae09df4; end: 10ae09e97;  */

void FUN_10ae09df4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x00010ae0ac88();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x00010ae0adc8();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10ae094a0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000106af6730();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x00010bceb618();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x00010ae0aba0();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010ae0ac78();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10ae09e98; end: 10ae09ec3;  */

long FUN_10ae09e98(long param_1)

{
  func_0x00010ae0ac10();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae09ec4; end: 10ae09ec7;  */

long FUN_10ae09ec4(long param_1)

{
  func_0x00010ae0ac10();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae09ec8; end: 10ae09edb;  */

void FUN_10ae09ec8(void)

{
  FUN_10ae09e98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae09edc; end: 10ae09ee7;  */

undefined ** FUN_10ae09edc(void)

{
  return &PTR_DAT_110c77f58;
}



/* Entry: 10ae09ee8; end: 10ae09f1b;  */

void FUN_10ae09ee8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0aca8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10ae09f1c; end: 10ae09fdf;  */

long * FUN_10ae09f1c(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae0ad78();
  func_0x00010ae0ac30(param_1[2]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae09f68;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae09f68;
  func_0x00010ae0abc0();
  func_0x00010ae0ab78();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_10ae09f68:
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010ae0adb0();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010ae0ab28();
    func_0x00010ae0ad28();
    func_0x00010ae0abb4();
    unaff_x21 = param_1;
  }
  func_0x00010ae0adf0();
  if ((bool)in_ZR) {
    func_0x00010ae0ab28();
    func_0x00010ae0ad38();
    func_0x00010ae0ac6c();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0acb4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        unaff_x21 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)unaff_x21 + (long)iVar3);
    }
    _memcpy(unaff_x21,lVar2,param_3 & 0xffffffff);
    return (long *)((long)unaff_x21 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 10ae09fe0; end: 10ae0a0c3;  */

void FUN_10ae09fe0(long param_1)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x00010ae0ad88();
    iVar1 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010ae0ad0c();
    iVar1 = extraout_w8_00;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae0ace4();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 10ae0a0c4; end: 10ae0a0ef;  */

undefined8 FUN_10ae0a0c4(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae0a0f0(param_1);
  return param_1;
}



/* Entry: 10ae0a0f0; end: 10ae0a11f;  */

long * FUN_10ae0a0f0(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10ae09064();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10ae0a120; end: 10ae0a123;  */

undefined8 FUN_10ae0a120(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae0a0f0(param_1);
  return param_1;
}



/* Entry: 10ae0a124; end: 10ae0a137;  */

void FUN_10ae0a124(void)

{
  FUN_10ae0a0c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0a138; end: 10ae0a143;  */

undefined ** FUN_10ae0a138(void)

{
  return &PTR_DAT_110c77fb0;
}



/* Entry: 10ae0a144; end: 10ae0a18b;  */

void FUN_10ae0a144(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0ae24();
  FUN_10ae0aa48();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10ae090fc(*(undefined8 *)(unaff_x19 + 0x30));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
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



/* Entry: 10ae0a18c; end: 10ae0a22f;  */

long * FUN_10ae0a18c(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010ae0ac98();
  lVar3 = param_1[4];
  for (iVar4 = 0; (int)lVar3 != iVar4; iVar4 = iVar4 + 1) {
    func_0x00010ae0abd0();
    param_4 = param_1;
  }
  plVar2 = param_4;
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    plVar2 = unaff_x19;
    func_0x00010598f43c();
    param_3 = param_4;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x54);
    plVar2 = (long *)0x3;
    func_0x00010ae0ac5c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0acb4();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)plVar2 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)plVar2) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        plVar2 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar2 + (long)iVar4);
    }
    _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 10ae0a230; end: 10ae0a2bb;  */

long FUN_10ae0a230(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010ae0acc0();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10ae09ddc();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10ae09ddc(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x00010ae0ac3c();
  }
  if (*(int *)(unaff_x19 + 0x38) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x38)) * -9 + 0x2c0U >> 6) +
                unaff_x20;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0ace4();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10ae0a2bc; end: 10ae0a33b;  */

void FUN_10ae0a2bc(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae0ac88();
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  FUN_10ae0a33c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x30);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010ae0adc8();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
    }
    else {
      FUN_10ae094a0();
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  func_0x00010ae0aba0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae0ac78();
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



/* Entry: 10ae0a33c; end: 10ae0a34b;  */

void FUN_10ae0a33c(long *param_1,long param_2)

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



/* Entry: 10ae0a34c; end: 10ae0a377;  */

long FUN_10ae0a34c(long param_1)

{
  func_0x00010ae0ac10();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0a378; end: 10ae0a37b;  */

long FUN_10ae0a378(long param_1)

{
  func_0x00010ae0ac10();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0a37c; end: 10ae0a38f;  */

void FUN_10ae0a37c(void)

{
  FUN_10ae0a34c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0a390; end: 10ae0a39b;  */

undefined ** FUN_10ae0a390(void)

{
  return &PTR_DAT_110c78008;
}



/* Entry: 10ae0a39c; end: 10ae0a3cf;  */

void FUN_10ae0a39c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0aca8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 10ae0a3d0; end: 10ae0a493;  */

long * FUN_10ae0a3d0(long *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae0ad78();
  func_0x00010ae0ac30(param_1[2]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae0a41c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae0a41c;
  func_0x00010ae0abc0();
  func_0x00010ae0ab78();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_10ae0a41c:
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010ae0adb0();
    unaff_x21 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010ae0ab28();
    func_0x00010ae0ad28();
    func_0x00010ae0abb4();
    unaff_x21 = param_1;
  }
  func_0x00010ae0adf0();
  if ((bool)in_ZR) {
    func_0x00010ae0ab28();
    func_0x00010ae0ad38();
    func_0x00010ae0ac6c();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0acb4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)unaff_x21 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)unaff_x21) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        unaff_x21 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)unaff_x21 + (long)iVar3);
    }
    _memcpy(unaff_x21,lVar2,param_3 & 0xffffffff);
    return (long *)((long)unaff_x21 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 10ae0a494; end: 10ae0a577;  */

void FUN_10ae0a494(long param_1)

{
  int iVar1;
  int extraout_w8;
  int extraout_w8_00;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010ae0ac48(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  iVar1 = 0;
  if (lVar2 != 0) {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x00010ae0ad88();
    iVar1 = extraout_w8;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010ae0ad0c();
    iVar1 = extraout_w8_00;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae0ace4();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  return;
}



/* Entry: 10ae0a578; end: 10ae0a5a3;  */

undefined8 FUN_10ae0a578(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae0a5a4(param_1);
  return param_1;
}



/* Entry: 10ae0a5a4; end: 10ae0a5d3;  */

long * FUN_10ae0a5a4(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10ae09064();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10ae0a5d4; end: 10ae0a5d7;  */

undefined8 FUN_10ae0a5d4(undefined8 param_1)

{
  func_0x00010ae0ac10();
  FUN_10ae0a5a4(param_1);
  return param_1;
}



/* Entry: 10ae0a5d8; end: 10ae0a5eb;  */

void FUN_10ae0a5d8(void)

{
  FUN_10ae0a578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0a5ec; end: 10ae0a5f7;  */

undefined ** FUN_10ae0a5ec(void)

{
  return &PTR_DAT_110c78060;
}



/* Entry: 10ae0a5f8; end: 10ae0a63b;  */

void FUN_10ae0a5f8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0ae24();
  FUN_10ae0aa48();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10ae090fc(*(undefined8 *)(unaff_x19 + 0x30));
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



/* Entry: 10ae0a63c; end: 10ae0a6c7;  */

long * FUN_10ae0a63c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010ae0ac98();
  lVar2 = param_1[4];
  for (iVar3 = 0; (int)lVar2 != iVar3; iVar3 = iVar3 + 1) {
    func_0x00010ae0abd0();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x54);
    param_4 = (long *)0x2;
    func_0x00010ae0ac5c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0acb4();
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



/* Entry: 10ae0a6c8; end: 10ae0a733;  */

long FUN_10ae0a6c8(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x00010ae0acc0();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_10ae09ddc();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10ae09ddc(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x00010ae0ac3c();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0ace4();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 10ae0a734; end: 10ae0a7a7;  */

void FUN_10ae0a734(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae0ac88();
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  FUN_10ae0a33c();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x30);
    if (puVar1 == (ulong *)0x0) {
      func_0x00010ae0adc8();
      *(ulong **)(unaff_x21 + 0x30) = puVar1;
    }
    else {
      FUN_10ae094a0();
    }
  }
  func_0x00010ae0aba0();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae0ac78();
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



/* Entry: 10ae0a7a8; end: 10ae0a7e7;  */

void FUN_10ae0a7a8(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    __Znwm(0x28);
  }
  else {
    func_0x00010ae0adbc();
  }
  func_0x00010ae0ae10(&DAT_11383d918);
  return;
}



/* Entry: 10ae0a7e8; end: 10ae0a817;  */

long * FUN_10ae0a7e8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10ae0a818; end: 10ae0aa47;  */

void FUN_10ae0a818(long param_1)

{
  if (param_1 == 0) {
    __Znwm(0x28);
  }
  else {
    func_0x00010ae0adbc();
  }
  func_0x00010ae0ae10(&DAT_11383d918);
  return;
}



/* Entry: 10ae0aa48; end: 10ae0aa5b;  */

void FUN_10ae0aa48(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10ae0aa5c; end: 10ae0aacb;  */

undefined8 * FUN_10ae0aa5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x18);
  }
  *puVar1 = &PTR_FUN_110c77bf8;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  FUN_10ae095d4();
  return puVar1;
}



/* Entry: 10ae0aacc; end: 10ae0ab0f;  */

undefined8 * FUN_10ae0aacc(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar3 = param_1;
    func_0x00010b4d80e0(param_1,0x58);
  }
  puVar3[1] = param_1;
  *puVar3 = &PTR_FUN_110c77c98;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar3 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_2 + 0x10;
  func_0x00010ae0ac64();
  puVar3[2] = lVar2;
  lVar2 = param_2 + 0x18;
  func_0x00010ae0ac64();
  puVar3[3] = lVar2;
  lVar2 = param_2 + 0x20;
  func_0x00010ae0ac64();
  puVar3[4] = lVar2;
  lVar2 = param_2 + 0x28;
  func_0x00010ae0ac64();
  puVar3[5] = lVar2;
  lVar2 = param_2 + 0x30;
  func_0x00010ae0ac64();
  puVar3[6] = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x00010ae0ac64();
  puVar3[7] = lVar2;
  *(undefined4 *)((long)puVar3 + 0x54) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  puVar3[9] = *(undefined8 *)(param_2 + 0x48);
  puVar3[8] = uVar4;
  *(undefined4 *)(puVar3 + 10) = uVar1;
  return puVar3;
}



/* Entry: 10ae0ab10; end: 10ae0ae2f;  */

void FUN_10ae0ab10(void)

{
  return;
}



/* Entry: 10ae0ae30; end: 10ae0ae5b;  */

undefined8 FUN_10ae0ae30(undefined8 param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0ae5c(param_1);
  return param_1;
}



/* Entry: 10ae0ae5c; end: 10ae0ae8f;  */

void FUN_10ae0ae5c(void)

{
  long unaff_x19;
  
  func_0x00010ae0d270();
  func_0x000107c30258();
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    if ((*(uint *)(unaff_x19 + 0x24) & 0xfffffffe) == 2) {
      func_0x00010ae0d368();
    }
    *(undefined4 *)(unaff_x19 + 0x24) = 0;
  }
  return;
}



/* Entry: 10ae0ae90; end: 10ae0ae93;  */

undefined8 FUN_10ae0ae90(undefined8 param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0ae5c(param_1);
  return param_1;
}



/* Entry: 10ae0ae94; end: 10ae0aea7;  */

void FUN_10ae0ae94(void)

{
  FUN_10ae0ae30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0aea8; end: 10ae0aed7;  */

void FUN_10ae0aea8(long param_1)

{
  if ((*(uint *)(param_1 + 0x24) & 0xfffffffe) == 2) {
    func_0x00010ae0d368();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10ae0aed8; end: 10ae0aee3;  */

undefined ** FUN_10ae0aed8(void)

{
  return &PTR_DAT_110c785d8;
}



/* Entry: 10ae0aee4; end: 10ae0af17;  */

void FUN_10ae0aee4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d20c();
  FUN_10ae0aea8();
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



/* Entry: 10ae0af18; end: 10ae0afef;  */

long * FUN_10ae0af18(long *param_1,long param_2,long *param_3,long *param_4)

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
  
  func_0x00010ae0d108();
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae0af48;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae0af48:
      param_4 = (long *)&UNK_10f6c39a5;
      func_0x00010ae0d268();
      func_0x00010ae0d164();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  if (*(int *)(unaff_x21 + 0x24) == 3) {
    func_0x00010ae0d2e4(*(undefined8 *)(unaff_x21 + 0x18));
    param_4 = (long *)&UNK_10f6c39c2;
    func_0x00010ae0d268();
  }
  else {
    unaff_x22 = param_3;
    if (*(int *)(unaff_x21 + 0x24) != 2) goto LAB_10ae0afbc;
    unaff_x22 = (long *)(*(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc);
  }
  func_0x00010ae0d2b0();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae0afbc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae0d2f0();
  if ((long)unaff_x22 < 0) {
    unaff_x22 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010ae0d3cc();
  if ((long)(int)unaff_x22 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)unaff_x22);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar3 = (int)unaff_x22;
    unaff_x22 = (long *)(ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar4);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 10ae0aff0; end: 10ae0b077;  */

long FUN_10ae0aff0(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010ae0d194();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10ae0b01c;
LAB_10ae0b008:
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10ae0b008;
LAB_10ae0b01c:
    param_1 = 0;
  }
  if (*(int *)(unaff_x19 + 0x24) == 3) {
    func_0x00010ae0d370();
    func_0x000107c282a0();
  }
  else {
    if (*(int *)(unaff_x19 + 0x24) != 2) goto LAB_10ae0b04c;
    func_0x00010ae0d370();
    func_0x000107c28098();
  }
  func_0x00010ae0d338();
LAB_10ae0b04c:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10ae0b078; end: 10ae0b137;  */

void FUN_10ae0b078(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010ae0d324();
  uVar3 = param_1[1];
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10ae0aea8();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if ((iVar1 == 3) || (iVar1 == 2)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = (ulong)&DAT_11383d918;
      }
      func_0x00010ae0d2fc();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d3d8();
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



/* Entry: 10ae0b138; end: 10ae0b163;  */

undefined8 FUN_10ae0b138(undefined8 param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0b164(param_1);
  return param_1;
}



/* Entry: 10ae0b164; end: 10ae0b197;  */

void FUN_10ae0b164(void)

{
  long unaff_x19;
  
  func_0x00010ae0d270();
  func_0x000107c30258();
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    if (*(int *)(unaff_x19 + 0x24) - 3U < 2) {
      func_0x00010ae0d368();
    }
    *(undefined4 *)(unaff_x19 + 0x24) = 0;
  }
  return;
}



/* Entry: 10ae0b198; end: 10ae0b19b;  */

undefined8 FUN_10ae0b198(undefined8 param_1)

{
  func_0x00010ae0d260();
  FUN_10ae0b164(param_1);
  return param_1;
}



/* Entry: 10ae0b19c; end: 10ae0b1af;  */

void FUN_10ae0b19c(void)

{
  FUN_10ae0b138();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0b1b0; end: 10ae0b1df;  */

void FUN_10ae0b1b0(long param_1)

{
  if (*(int *)(param_1 + 0x24) - 3U < 2) {
    func_0x00010ae0d368();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10ae0b1e0; end: 10ae0b1eb;  */

undefined ** FUN_10ae0b1e0(void)

{
  return &PTR_DAT_110c78618;
}



/* Entry: 10ae0b1ec; end: 10ae0b21f;  */

void FUN_10ae0b1ec(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d20c();
  FUN_10ae0b1b0();
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



/* Entry: 10ae0b220; end: 10ae0b2f7;  */

long * FUN_10ae0b220(long *param_1,long param_2,long *param_3,long *param_4)

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
  
  func_0x00010ae0d108();
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae0b250;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae0b250:
      param_4 = (long *)&UNK_10f6c39e0;
      func_0x00010ae0d268();
      func_0x00010ae0d150();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  if (*(int *)(unaff_x21 + 0x24) == 4) {
    func_0x00010ae0d2e4(*(undefined8 *)(unaff_x21 + 0x18));
    param_4 = (long *)&UNK_10f6c39fe;
    func_0x00010ae0d268();
  }
  else {
    unaff_x22 = param_3;
    if (*(int *)(unaff_x21 + 0x24) != 3) goto LAB_10ae0b2c4;
    unaff_x22 = (long *)(*(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc);
  }
  func_0x00010ae0d2b0();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10ae0b2c4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae0d2f0();
  if ((long)unaff_x22 < 0) {
    unaff_x22 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010ae0d3cc();
  if ((long)(int)unaff_x22 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)unaff_x22);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar3 = (int)unaff_x22;
    unaff_x22 = (long *)(ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar4);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 10ae0b2f8; end: 10ae0b37f;  */

long FUN_10ae0b2f8(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010ae0d194();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10ae0b324;
LAB_10ae0b310:
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10ae0b310;
LAB_10ae0b324:
    param_1 = 0;
  }
  if (*(int *)(unaff_x19 + 0x24) == 4) {
    func_0x00010ae0d370();
    func_0x000107c282a0();
  }
  else {
    if (*(int *)(unaff_x19 + 0x24) != 3) goto LAB_10ae0b354;
    func_0x00010ae0d370();
    func_0x000107c28098();
  }
  func_0x00010ae0d338();
LAB_10ae0b354:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10ae0b380; end: 10ae0b43f;  */

void FUN_10ae0b380(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010ae0d324();
  uVar3 = param_1[1];
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10ae0b1b0();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    if ((iVar1 == 4) || (iVar1 == 3)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = (ulong)&DAT_11383d918;
      }
      func_0x00010ae0d2fc();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d3d8();
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



/* Entry: 10ae0b440; end: 10ae0b467;  */

undefined8 FUN_10ae0b440(undefined8 param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0d418();
  return param_1;
}



/* Entry: 10ae0b468; end: 10ae0b46b;  */

undefined8 FUN_10ae0b468(undefined8 param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0d418();
  return param_1;
}



/* Entry: 10ae0b46c; end: 10ae0b47f;  */

void FUN_10ae0b46c(void)

{
  FUN_10ae0b440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0b480; end: 10ae0b48b;  */

undefined ** FUN_10ae0b480(void)

{
  return &PTR_DAT_110c78658;
}



/* Entry: 10ae0b48c; end: 10ae0b4b7;  */

void FUN_10ae0b48c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d20c();
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



/* Entry: 10ae0b4b8; end: 10ae0b553;  */

long * FUN_10ae0b4b8(long param_1,long *param_2,long *param_3)

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
  func_0x00010ae0d2e4(*(undefined8 *)(param_1 + 0x10));
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae0b51c;
  }
  else if ((int)plVar1 == 0) goto LAB_10ae0b51c;
  func_0x00010ae0d268();
  param_2 = param_3;
  func_0x000107c280a0(param_3,1);
  plVar4 = unaff_x22;
LAB_10ae0b51c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010ae0d2f0();
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



/* Entry: 10ae0b554; end: 10ae0b5ab;  */

void FUN_10ae0b554(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010ae0d194();
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
    func_0x00010ae0d490();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10ae0b5ac; end: 10ae0b5af;  */

void FUN_10ae0b5ac(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae0d1e0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    func_0x00010ae0d37c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d1d0();
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



/* Entry: 10ae0b5b0; end: 10ae0b5f7;  */

void FUN_10ae0b5b0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae0d1e0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    func_0x00010ae0d37c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d1d0();
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



/* Entry: 10ae0b5f8; end: 10ae0b62b;  */

long FUN_10ae0b5f8(long param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0d418();
  func_0x00010ae0d368();
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 10ae0b62c; end: 10ae0b62f;  */

long FUN_10ae0b62c(long param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0d418();
  func_0x00010ae0d368();
  func_0x000107c30258(param_1 + 0x20);
  return param_1;
}



/* Entry: 10ae0b630; end: 10ae0b643;  */

void FUN_10ae0b630(void)

{
  FUN_10ae0b5f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0b644; end: 10ae0b64f;  */

undefined ** FUN_10ae0b644(void)

{
  return &PTR_DAT_110c786a0;
}



/* Entry: 10ae0b650; end: 10ae0b68b;  */

void FUN_10ae0b650(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d20c();
  func_0x00010ae0d428();
  func_0x000107c3025c(unaff_x19 + 0x20);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10ae0b68c; end: 10ae0b783;  */

long * FUN_10ae0b68c(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar5;
  long unaff_x21;
  int iVar6;
  long *unaff_x22;
  int iVar7;
  
  func_0x00010ae0d108();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae0b6d0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae0b6d0;
  param_4 = (long *)&UNK_10f6c3a48;
  func_0x00010ae0d268();
  func_0x00010ae0d164();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae0b6d0:
  uVar3 = *(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    param_1 = unaff_x19;
    func_0x00010ae0d2b0();
    unaff_x20 = param_1;
  }
  plVar5 = param_1;
  if (*(char *)(unaff_x21 + 0x28) == '\x01') {
    func_0x00010ae0d35c();
    plVar5 = (long *)(ulong)*(byte *)(unaff_x21 + 0x28);
    uVar2 = 0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x000107c280a8(plVar5,uVar2);
    unaff_x20 = plVar5;
  }
  uVar3 = *(ulong *)(unaff_x21 + 0x20) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar3 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar3 + 8);
  }
  if (lVar4 != 0) {
    func_0x00010ae0d2b0();
    plVar5 = unaff_x19;
    unaff_x20 = unaff_x19;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010ae0d2f0();
    if ((long)uVar3 < 0) {
      uVar3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010ae0d3cc();
    if (*plVar5 - (long)param_4 < (long)(int)uVar3) {
      while( true ) {
        iVar7 = ((int)*plVar5 - (int)param_4) + 0x10;
        iVar6 = (int)uVar3;
        uVar3 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar7);
        param_4 = plVar5;
        func_0x000107c303e4(plVar5,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  return unaff_x20;
}



/* Entry: 10ae0b784; end: 10ae0b81b;  */

void FUN_10ae0b784(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010ae0d194();
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
  func_0x00010ae0d2c4(*(undefined8 *)(unaff_x19 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010ae0d338();
  }
  func_0x00010ae0d2c4(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x00010ae0d338();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x28) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
    lVar2 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x2c) = iVar1;
  return;
}



/* Entry: 10ae0b81c; end: 10ae0b81f;  */

void FUN_10ae0b81c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae0d1e0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    func_0x00010ae0d37c();
  }
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    func_0x00010ae0d430();
  }
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d1d0();
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



/* Entry: 10ae0b820; end: 10ae0b8c3;  */

void FUN_10ae0b820(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae0d1e0();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    func_0x00010ae0d37c();
  }
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    func_0x00010ae0d430();
  }
  func_0x00010ae0d2b8(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae0d2d0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x000107c30248();
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae0d1d0();
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



/* Entry: 10ae0b8c4; end: 10ae0b8ef;  */

undefined8 FUN_10ae0b8c4(undefined8 param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0d418();
  func_0x00010ae0d368();
  return param_1;
}



/* Entry: 10ae0b8f0; end: 10ae0b8f3;  */

undefined8 FUN_10ae0b8f0(undefined8 param_1)

{
  func_0x00010ae0d260();
  func_0x00010ae0d418();
  func_0x00010ae0d368();
  return param_1;
}



/* Entry: 10ae0b8f4; end: 10ae0b907;  */

void FUN_10ae0b8f4(void)

{
  FUN_10ae0b8c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0b908; end: 10ae0b913;  */

undefined ** FUN_10ae0b908(void)

{
  return &PTR_DAT_110c786e0;
}



/* Entry: 10ae0b914; end: 10ae0b947;  */

void FUN_10ae0b914(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae0d20c();
  func_0x00010ae0d428();
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



/* Entry: 10ae0b948; end: 10ae0ba1b;  */

long * FUN_10ae0b948(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x00010ae0d108();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10ae0b978;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_10ae0b978:
      param_4 = (long *)&UNK_10f6c3a73;
      func_0x00010ae0d268();
      func_0x00010ae0d164();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x00010ae0d2e4(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10ae0b9c4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10ae0b9c4;
  param_4 = (long *)&UNK_10f6c3a98;
  func_0x00010ae0d268();
  func_0x00010ae0d150();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10ae0b9c4:
  plVar2 = param_1;
  if (*(int *)(unaff_x21 + 0x20) != 0) {
    func_0x00010ae0d35c();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x00010ae0d438();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae0d2f0();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010ae0d3cc();
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



/* Entry: 10ae0ba1c; end: 10ae0bb2f;  */

long FUN_10ae0ba1c(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x00010ae0d194();
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
  func_0x00010ae0d2c4(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x000107c282a0();
    func_0x00010ae0d338();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae0d490();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x24) = (int)lVar2;
  return lVar2;
}


