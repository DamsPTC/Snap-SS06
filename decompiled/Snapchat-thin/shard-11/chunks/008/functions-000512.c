/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088e7b94; end: 1088e7bb3;  */

undefined ** FUN_1088e7b94(void)

{
  return &PTR_DAT_110a8a828;
}



/* Entry: 1088e7bb4; end: 1088e7c13;  */

long * FUN_1088e7bb4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98bc();
  if ((int)param_1[2] != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b60();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088e9a9c();
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



/* Entry: 1088e7c14; end: 1088e7c57;  */

long FUN_1088e7c14(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x0001088e9f30((long)*(int *)(param_1 + 0x10));
  lVar1 = 0;
  if (extraout_w8 != 0) {
    lVar1 = extraout_x9 + 1;
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



/* Entry: 1088e7c58; end: 1088e7c7f;  */

undefined8 FUN_1088e7c58(undefined8 param_1)

{
  func_0x0001088e9a50();
  func_0x0001088e9e84();
  return param_1;
}



/* Entry: 1088e7c80; end: 1088e7c93;  */

void FUN_1088e7c80(void)

{
  FUN_1088e7c58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7c94; end: 1088e7c9f;  */

undefined ** FUN_1088e7c94(void)

{
  return &PTR_DAT_110a8a878;
}



/* Entry: 1088e7ca0; end: 1088e7ccf;  */

void FUN_1088e7ca0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088e9b7c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
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



/* Entry: 1088e7cd0; end: 1088e7d73;  */

long * FUN_1088e7cd0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001088e9a14();
  func_0x0001088e9c68(param_1[2]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1088e7d20;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1088e7d20;
  param_4 = (long *)&UNK_10f4ebfff;
  func_0x0001088e9b90();
  func_0x0001088e9eb4();
  func_0x0001088e9984();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1088e7d20:
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x0001088e9ecc();
    func_0x0001088e9b04();
    func_0x0001088e9f0c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0001088e9a9c();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0001088e9d5c();
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



/* Entry: 1088e7d74; end: 1088e7ddb;  */

void FUN_1088e7d74(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0001088e9ad0();
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
    func_0x0001088e993c();
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



/* Entry: 1088e7ddc; end: 1088e7ddf;  */

void FUN_1088e7ddc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9a30();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088e9c20();
    }
    func_0x0001088e9e7c();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9bf0();
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



/* Entry: 1088e7de0; end: 1088e7e13;  */

long FUN_1088e7de0(long param_1)

{
  func_0x0001088e9a50();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088e7e14; end: 1088e7e27;  */

void FUN_1088e7e14(void)

{
  FUN_1088e7de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e7e28; end: 1088e7e33;  */

undefined ** FUN_1088e7e28(void)

{
  return &PTR_DAT_110a8a8c8;
}



/* Entry: 1088e7e34; end: 1088e7e67;  */

void FUN_1088e7e34(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9c60();
  }
  func_0x0001088e9cfc();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088e7e68; end: 1088e7ef3;  */

long * FUN_1088e7e68(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088e98a8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9794();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9b04();
    func_0x0001088e9d2c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088e9818();
    func_0x0001088e9e6c();
    func_0x0001088e9854();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088e9a9c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088e7ef4; end: 1088e7f73;  */

void FUN_1088e7ef4(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0001088e9c00();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e9c58();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(int *)(unaff_x19 + 0x28) != 0) {
    func_0x0001088e99d0();
    func_0x0001088e9cac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088e7f74; end: 1088e80a7;  */

void FUN_1088e7f74(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e98cc();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088e9dd4();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088e9dc8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088e9c98();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x0001088e995c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e98dc();
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



/* Entry: 1088e80a8; end: 1088e892b;  */

void FUN_1088e80a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98ec();
  }
  *puVar1 = &PTR_DAT_110a890d0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  return;
}



/* Entry: 1088e892c; end: 1088e8baf;  */

void FUN_1088e892c(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9aec();
  }
  else {
    func_0x0001088e9af4();
  }
  func_0x0001088e9f80();
  func_0x0001088e9f74(&PTR_FUN_110a89710);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9848();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x20 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x20 + 0x14) = 0;
  if ((uVar1 & 1) != 0) {
    func_0x0001088e9cdc();
  }
  func_0x0001088e9e00();
  return;
}



/* Entry: 1088e8bb0; end: 1088e8c3f;  */

undefined8 * FUN_1088e8bb0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088e9d24();
  }
  else {
    func_0x0001088e9f00();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_DAT_110a899e0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088e9848();
  }
  func_0x0001088e9cc4();
  param_2 = param_2 + 0x30;
  func_0x0001088e9d74();
  puVar1[6] = param_2;
  if ((*(byte *)(puVar1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x0001088e9c18();
  }
  puVar1[7] = param_2;
  return puVar1;
}



/* Entry: 1088e8c40; end: 1088e8d53;  */

void FUN_1088e8c40(long param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c347e0();
  if (param_1 == 0) {
    func_0x0001088e9d24();
  }
  else {
    func_0x0001088e9f00();
  }
  func_0x0001088e9d68();
  func_0x0001088e9d50(&PTR_DAT_110a89760);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9848();
  }
  func_0x0001088e9f60(*(undefined4 *)(unaff_x19 + 0x10));
  *(undefined8 *)(unaff_x21 + 0x28) = unaff_x20;
  FUN_1088e5ac4(unaff_x21 + 0x18,unaff_x19 + 0x18);
  uVar1 = 0;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    func_0x0001088e9c18(0,*(undefined8 *)(unaff_x19 + 0x30));
  }
  *(undefined8 *)(unaff_x21 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 1088e8d54; end: 1088e8dcf;  */

void FUN_1088e8d54(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e9c44();
  if (param_1 == 0) {
    __Znwm(0x38);
  }
  else {
    func_0x0001088e9ed8();
  }
  func_0x0001088e9dec();
  func_0x0001088e9dbc(&PTR_DAT_110a89a30);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9848();
  }
  func_0x000107c296d0(unaff_x21 + 0x10);
  lVar1 = unaff_x20 + 0x28;
  func_0x0001088e9c50();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  return;
}



/* Entry: 1088e8dd0; end: 1088e8ebb;  */

void FUN_1088e8dd0(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x000107c347e0();
  if (param_1 == 0) {
    func_0x0001088e9bb0();
  }
  else {
    func_0x0001088e9b44();
  }
  func_0x0001088e9d68();
  func_0x0001088e9d50(&PTR_DAT_110a89940);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9848();
  }
  func_0x0001088e9e1c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e9b14();
  }
  func_0x0001088e9ce8();
  return;
}



/* Entry: 1088e8ebc; end: 1088e8f73;  */

undefined8 * FUN_1088e8ebc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x48;
    __Znwm();
  }
  else {
    puVar2 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  puVar2[1] = param_1;
  *puVar2 = &PTR_DAT_110a89b20;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088e9848();
  }
  func_0x0001088e9cc4();
  lVar3 = param_2 + 0x30;
  func_0x0001088e9d74();
  puVar2[6] = lVar3;
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    func_0x0001088e9c18();
  }
  puVar2[7] = lVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    func_0x0001088e9730(param_1,*(undefined8 *)(param_2 + 0x40));
  }
  puVar2[8] = param_1;
  return puVar2;
}



/* Entry: 1088e8f74; end: 1088e8fcf;  */

void FUN_1088e8f74(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x000107c347e0();
  if (param_1 == 0) {
    func_0x0001088e9bb0();
  }
  else {
    func_0x0001088e9b44();
  }
  func_0x0001088e9d68();
  func_0x0001088e9d50(&PTR_DAT_110a898f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9848();
  }
  func_0x0001088e9e1c();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088e9b14();
  }
  func_0x0001088e9ce8();
  return;
}



/* Entry: 1088e8fd0; end: 1088e901f;  */

long FUN_1088e8fd0(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a894e0);
  FUN_1088e4728();
  return param_1;
}



/* Entry: 1088e9020; end: 1088e906f;  */

long FUN_1088e9020(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a89670);
  func_0x0001088e4734();
  return param_1;
}



/* Entry: 1088e9070; end: 1088e90bf;  */

long FUN_1088e9070(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a89440);
  func_0x0001088e4740();
  return param_1;
}



/* Entry: 1088e90c0; end: 1088e910f;  */

long FUN_1088e90c0(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a89580);
  func_0x0001088e474c();
  return param_1;
}



/* Entry: 1088e9110; end: 1088e915f;  */

long FUN_1088e9110(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a89260);
  func_0x0001088e4758();
  return param_1;
}



/* Entry: 1088e9160; end: 1088e91b7;  */

undefined8 * FUN_1088e9160(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0001088e9b20();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  *param_1 = &PTR_DAT_110a890d0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x0001088e4764();
  return param_1;
}



/* Entry: 1088e91b8; end: 1088e9207;  */

long FUN_1088e91b8(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a892b0);
  func_0x0001088e4784();
  return param_1;
}



/* Entry: 1088e9208; end: 1088e9267;  */

undefined8 * FUN_1088e9208(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x0001088e9b20();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000107c347d8();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088e9b98();
  }
  *param_1 = &PTR_DAT_110a89120;
  param_1[1] = unaff_x21;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x0001088e4790();
  return param_1;
}



/* Entry: 1088e9268; end: 1088e92b7;  */

long FUN_1088e9268(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a89300);
  func_0x0001088e47bc();
  return param_1;
}



/* Entry: 1088e92b8; end: 1088e9307;  */

long FUN_1088e92b8(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a893f0);
  func_0x0001088e47c8();
  return param_1;
}



/* Entry: 1088e9308; end: 1088e93ef;  */

void FUN_1088e9308(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107c347e0();
  if (param_1 == 0) {
    func_0x0001088e9bb0();
  }
  else {
    func_0x0001088e9b44();
  }
  func_0x0001088e9d68();
  func_0x0001088e9d50(&PTR_DAT_110a896c0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9848();
  }
  func_0x0001088e9e1c();
  if ((extraout_x8_00 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088e9b14();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1088e93f0; end: 1088e943f;  */

long FUN_1088e93f0(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a89210);
  FUN_1088e48d8();
  return param_1;
}



/* Entry: 1088e9440; end: 1088e948f;  */

long FUN_1088e9440(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a89170);
  func_0x0001088e48e4();
  return param_1;
}



/* Entry: 1088e9490; end: 1088e950f;  */

void FUN_1088e9490(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107c347e0();
  if (param_1 == 0) {
    func_0x0001088e9aec();
  }
  else {
    func_0x0001088e9af4();
  }
  func_0x0001088e9d68();
  func_0x0001088e9d50(&PTR_DAT_110a89a80);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9848();
  }
  func_0x0001088e9e1c();
  lVar1 = unaff_x19 + 0x18;
  func_0x0001088e9d74();
  *(long *)(unaff_x21 + 0x18) = lVar1;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x0001088e9c18();
  }
  *(long *)(unaff_x21 + 0x20) = lVar1;
  *(undefined8 *)(unaff_x21 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 1088e9510; end: 1088e955f;  */

long FUN_1088e9510(long param_1)

{
  func_0x0001088e9b20();
  if (param_1 == 0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  func_0x0001088e99b4(&PTR_DAT_110a89620);
  FUN_1088e498c();
  return param_1;
}



/* Entry: 1088e9560; end: 1088e960f;  */

void FUN_1088e9560(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088e9c44();
  if (param_1 == 0) {
    func_0x000107c347d8();
  }
  else {
    func_0x0001088e99c4();
  }
  func_0x0001088e9dec();
  func_0x0001088e9dbc(&PTR_DAT_110a89530);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9848();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x0001088e9c50();
  *(long *)(unaff_x21 + 0x10) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x18) = 0;
  return;
}



/* Entry: 1088e9610; end: 1088e9667;  */

undefined8 * FUN_1088e9610(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x0001088e9b20();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088e9a68();
  }
  else {
    func_0x0001088e98f8();
  }
  *param_1 = &PTR_DAT_110a893a0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_1088e4a28();
  return param_1;
}



/* Entry: 1088e9668; end: 1088e9793;  */

void FUN_1088e9668(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107c347e0();
  if (param_1 == 0) {
    func_0x000107c347d8();
  }
  else {
    func_0x0001088e9b98();
  }
  func_0x0001088e9d68();
  func_0x0001088e9d50(&PTR_DAT_110a89490);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088e9848();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x0001088e9d74();
  *(long *)(unaff_x21 + 0x10) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x1c) = 0;
  *(undefined4 *)(unaff_x21 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1088e9794; end: 1088e9fd3;  */

void FUN_1088e9794(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x18);
  uVar3 = (ulong)*(uint *)(plVar2 + 3);
  func_0x0001001a597c();
  uVar1 = 10;
  func_0x0001001a59d0(10,unaff_x19);
  func_0x0001001a59d0(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,uVar3);
  return;
}



/* Entry: 1088e9fd4; end: 1088e9fe7;  */

void FUN_1088e9fd4(void)

{
  func_0x000107c2a2f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088e9fe8; end: 1088e9ff3;  */

undefined ** FUN_1088e9fe8(void)

{
  return &PTR_DAT_110a8ae30;
}



/* Entry: 1088e9ff4; end: 1088ea09f;  */

void FUN_1088e9ff4(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  func_0x000107c3025c(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088ea068(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Entry: 1088ea0a0; end: 1088ea0a3;  */

void FUN_1088ea0a0(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar6;
  
  func_0x000107c34808();
  puVar6 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = *(ulong **)((ulong)puVar6 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  func_0x000107c2a2fc(puVar2,unaff_x20 + 0x18);
  uVar3 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(unaff_x21 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248(puVar2,uVar3,uVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar6;
        func_0x000107c2a26c();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        FUN_1088eabdc();
        *(ulong **)(unaff_x21 + 0x40) = puVar6;
        puVar2 = puVar6;
      }
      else {
        FUN_1088ea194();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  func_0x0001088ead3c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088ead20();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088ea0a4; end: 1088ea193;  */

void FUN_1088ea0a4(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar6;
  
  func_0x000107c34808();
  puVar6 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar6 & 1) != 0) {
    puVar6 = *(ulong **)((ulong)puVar6 & 0xfffffffffffffffe);
  }
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  func_0x000107c2a2fc(puVar2,unaff_x20 + 0x18);
  uVar3 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    uVar4 = *(ulong *)(unaff_x21 + 8);
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248(puVar2,uVar3,uVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar6;
        func_0x000107c2a26c();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        FUN_1088eabdc();
        *(ulong **)(unaff_x21 + 0x40) = puVar6;
        puVar2 = puVar6;
      }
      else {
        FUN_1088ea194();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  func_0x0001088ead3c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088ead20();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088ea194; end: 1088ea23f;  */

void FUN_1088ea194(long param_1,long param_2)

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



/* Entry: 1088ea240; end: 1088ea24f;  */

undefined8 FUN_1088ea240(undefined8 param_1)

{
  func_0x0001006adf74();
  func_0x0001006adfa8(param_1);
  return param_1;
}



/* Entry: 1088ea250; end: 1088ea27b;  */

long FUN_1088ea250(long param_1)

{
  func_0x000107c34820();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088ea27c; end: 1088ea27f;  */

long FUN_1088ea27c(long param_1)

{
  func_0x000107c34820();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088ea280; end: 1088ea293;  */

void FUN_1088ea280(void)

{
  FUN_1088ea250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ea294; end: 1088ea29f;  */

undefined ** FUN_1088ea294(void)

{
  return &PTR_DAT_110a8aed0;
}



/* Entry: 1088ea2a0; end: 1088ea377;  */

long * FUN_1088ea2a0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  
  plVar5 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)plVar5 + 0x17);
  plVar6 = param_3;
  if (lVar3 < 0) {
    lVar3 = plVar5[1];
    if (lVar3 == 0) goto LAB_1088ea30c;
    plVar1 = (long *)*plVar5;
  }
  else {
    plVar1 = plVar5;
    if (*(char *)((long)plVar5 + 0x17) == '\0') goto LAB_1088ea30c;
  }
  func_0x000107c303d4(plVar1,lVar3,1,&UNK_10f4ec03b);
  plVar1 = param_3;
  func_0x000107c280a0(param_3,1,plVar5,param_2);
  plVar6 = plVar5;
  param_2 = plVar1;
LAB_1088ea30c:
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar5 = param_3;
    func_0x000107c28094(param_3,param_2);
    param_2 = (long *)(ulong)*(uint *)(param_1 + 0x18);
    uVar2 = 0x10;
    func_0x000107c280a8(0x10,plVar5);
    func_0x000107c280b8(param_2,uVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x0001088ead90();
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
      iVar4 = (int)plVar6;
      plVar6 = (long *)(ulong)(uint)(iVar4 - iVar7);
      if (iVar4 - iVar7 == 0 || iVar4 < iVar7) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar7;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar4);
  }
  _memcpy(param_2,lVar3,(ulong)plVar6 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar6);
}



/* Entry: 1088ea378; end: 1088ea3ff;  */

void FUN_1088ea378(long param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_1088ea3b0;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_1088ea3b0:
    iVar1 = 0;
    goto LAB_1088ea3b4;
  }
  func_0x000107c282a0();
  iVar1 = (int)uVar2 + 1;
LAB_1088ea3b4:
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088ead84();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 1088ea400; end: 1088ea403;  */

void FUN_1088ea400(long param_1,long param_2)

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



/* Entry: 1088ea404; end: 1088ea447;  */

long FUN_1088ea404(long param_1)

{
  func_0x000107c34820();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088b77e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ea448; end: 1088ea44b;  */

long FUN_1088ea448(long param_1)

{
  func_0x000107c34820();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088b77e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ea44c; end: 1088ea45f;  */

void FUN_1088ea44c(void)

{
  FUN_1088ea404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ea460; end: 1088ea46b;  */

undefined ** FUN_1088ea460(void)

{
  return &PTR_DAT_110a8af28;
}



/* Entry: 1088ea46c; end: 1088ea4bf;  */

void FUN_1088ea46c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088b7880(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
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



/* Entry: 1088ea4c0; end: 1088ea5b7;  */

long * FUN_1088ea4c0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000107c34804();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000107c347f8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    param_4 = (long *)0x2;
    func_0x000107c347fc();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088ead90();
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



/* Entry: 1088ea5b8; end: 1088ea5d3;  */

long FUN_1088ea5b8(long param_1)

{
  long extraout_x8;
  
  FUN_1088b7940();
  FUN_1088eacbc();
  return param_1 + extraout_x8;
}



/* Entry: 1088ea5d4; end: 1088ea66f;  */

void FUN_1088ea5d4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x000107c34808();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x000107c2a26c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_1088eac54();
        *(ulong **)(unaff_x21 + 0x20) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x0001088b77b4();
      }
    }
  }
  func_0x0001088ead3c();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088ead20();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088ea670; end: 1088ea673;  */

undefined8 FUN_1088ea670(undefined8 param_1)

{
  func_0x0001006adf74();
  func_0x00010087082c(param_1);
  return param_1;
}



/* Entry: 1088ea674; end: 1088ea687;  */

void FUN_1088ea674(void)

{
  func_0x000107c2a314();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ea688; end: 1088ea97b;  */

long * FUN_1088ea688(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x000107c34804();
  lVar5 = param_1[4];
  for (iVar6 = 0; (int)lVar5 != iVar6; iVar6 = iVar6 + 1) {
    func_0x0001088eacd4();
    func_0x000107c347f8();
    param_4 = param_1;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x60) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x000107c3483c();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    func_0x000107c347e4();
    plVar2 = (long *)0x18;
    func_0x000107c280a8(0x18,param_1);
    func_0x0001088ead30();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    func_0x000107c347e4();
    plVar3 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar2);
    func_0x000107c34810();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(char *)(unaff_x20 + 0x81) == '\x01') {
    func_0x000107c347e4();
    plVar2 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x0001088ead30();
    param_4 = plVar2;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
    plVar2 = (long *)0x6;
    func_0x000107c347fc();
    param_4 = plVar2;
  }
  iVar7 = *(int *)(unaff_x20 + 0x38);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    func_0x0001088eacd4();
    plVar2 = (long *)0x7;
    func_0x000107c347fc();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    func_0x000107c347e4();
    plVar3 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar2);
    func_0x000107c34810();
    param_4 = plVar3;
  }
  iVar7 = *(int *)(unaff_x20 + 0x50);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    func_0x0001088eacd4();
    plVar3 = (long *)0x9;
    func_0x000107c347fc();
    param_4 = plVar3;
  }
  if ((*(byte *)(unaff_x20 + 0x82) & 1) != 0) {
    func_0x000107c347e4();
    param_4 = (long *)0x318;
    func_0x000107c280a8(0x318,plVar3);
    func_0x0001088ead30();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088ead90();
    if ((long)uVar4 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      uVar4 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)uVar4;
        uVar1 = iVar6 - iVar7;
        uVar4 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 1088ea97c; end: 1088ea9b3;  */

long FUN_1088ea97c(long param_1)

{
  long extraout_x8;
  
  FUN_1088ec018();
  FUN_1088eacbc();
  return param_1 + extraout_x8;
}



/* Entry: 1088ea9b4; end: 1088eaac3;  */

void FUN_1088ea9b4(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x000107c34808();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  FUN_1088eaac4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x0001088eaad4(puVar1,unaff_x20 + 0x30);
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    puVar1 = (ulong *)(unaff_x21 + 0x48);
    func_0x000107c303c4(puVar1,unaff_x20 + 0x48);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x60) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x21 + 0x60);
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x68);
    if (puVar1 == (ulong *)0x0) {
      func_0x0001088eac88();
      *(ulong **)(unaff_x21 + 0x68) = puVar5;
      puVar1 = puVar5;
    }
    else {
      FUN_1088eb75c();
    }
  }
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    *(long *)(unaff_x21 + 0x70) = *(long *)(unaff_x20 + 0x70);
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(char *)(unaff_x20 + 0x80) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x80) = 1;
  }
  if (*(char *)(unaff_x20 + 0x81) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x81) = 1;
  }
  if (*(char *)(unaff_x20 + 0x82) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x82) = 1;
  }
  func_0x0001088ead3c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088ead20();
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



/* Entry: 1088eaac4; end: 1088eab03;  */

void FUN_1088eaac4(long *param_1,long param_2)

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



/* Entry: 1088eab04; end: 1088eabdb;  */

void FUN_1088eab04(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088eadb4();
  }
  else {
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_110a8ad00;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 1088eabdc; end: 1088eac53;  */

undefined8 * FUN_1088eabdc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107c3482c();
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  puVar1[1] = unaff_x20;
  *puVar1 = &PTR_FUN_110a8acb0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088eada8();
  }
  lVar2 = unaff_x19 + 0x10;
  func_0x000107c2809c();
  puVar1[2] = lVar2;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(unaff_x19 + 0x18);
  return puVar1;
}



/* Entry: 1088eac54; end: 1088eacbb;  */

undefined8 * FUN_1088eac54(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c3482c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088eadb4();
  }
  else {
    func_0x0001088ead9c();
  }
  *param_1 = &PTR_FUN_110a80908;
  param_1[1] = unaff_x20;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x0001088b77b4();
  return param_1;
}



/* Entry: 1088eacbc; end: 1088eadbb;  */

void FUN_1088eacbc(void)

{
  return;
}



/* Entry: 1088eadbc; end: 1088eade7;  */

undefined8 FUN_1088eadbc(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088eade8(param_1);
  return param_1;
}



/* Entry: 1088eade8; end: 1088eae03;  */

void FUN_1088eade8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088eae04; end: 1088eae07;  */

undefined8 FUN_1088eae04(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088eade8(param_1);
  return param_1;
}



/* Entry: 1088eae08; end: 1088eae1b;  */

void FUN_1088eae08(void)

{
  FUN_1088eadbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088eae1c; end: 1088eae27;  */

undefined ** FUN_1088eae1c(void)

{
  return &PTR_DAT_110a8b6c8;
}



/* Entry: 1088eae28; end: 1088eae5b;  */

void FUN_1088eae28(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001088ef09c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088ef0b8();
  }
  func_0x0001088ef130();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1088eae5c; end: 1088eaed7;  */

long * FUN_1088eae5c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if (param_1[4] != 0) {
    func_0x0001088eedc0();
    func_0x0001088ef120();
    func_0x0001088eee44();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x2;
    func_0x0001088eef24();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088eef74();
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



/* Entry: 1088eaed8; end: 1088eaf2f;  */

void FUN_1088eaed8(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088ef09c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088ef0b0();
    param_1 = param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088eef44();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088eefe0();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088eaf30; end: 1088eaf33;  */

void FUN_1088eaf30(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088eee7c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088ef1cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088ef1a8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088ef10c();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x0001088eef60();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088eee8c();
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



/* Entry: 1088eaf34; end: 1088eb027;  */

void FUN_1088eaf34(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088eee7c();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x0001088ef1cc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088ef1a8();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088ef10c();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  func_0x0001088eef60();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088eee8c();
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



/* Entry: 1088eb028; end: 1088eb053;  */

undefined8 FUN_1088eb028(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088eb054(param_1);
  return param_1;
}



/* Entry: 1088eb054; end: 1088eb08b;  */

void FUN_1088eb054(void)

{
  long unaff_x19;
  
  func_0x0001088ef14c();
  func_0x000107c30258();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_1088eadbc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088eb08c; end: 1088eb08f;  */

undefined8 FUN_1088eb08c(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088eb054(param_1);
  return param_1;
}



/* Entry: 1088eb090; end: 1088eb0a3;  */

void FUN_1088eb090(void)

{
  FUN_1088eb028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088eb0a4; end: 1088eb0af;  */

undefined ** FUN_1088eb0a4(void)

{
  return &PTR_DAT_110a8b728;
}



/* Entry: 1088eb0b0; end: 1088eb10b;  */

void FUN_1088eb0b0(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x0001088ef14c();
  func_0x000107c3025c();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088eae28(*(undefined8 *)(unaff_x19 + 0x28));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1088eb10c; end: 1088eb2f3;  */

long * FUN_1088eb10c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088eede8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001088eeed8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x0001088eedc0();
    func_0x0001088eeffc();
    func_0x0001088eee44();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x0001088eedc0();
    func_0x0001088ef0a8();
    func_0x0001088eee50();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_1 = (long *)0x4;
    func_0x0001088eef24(4,*(long *)(unaff_x20 + 0x28),
                        *(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x14));
    param_4 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    func_0x0001088eedc0();
    param_4 = (long *)0x30;
    func_0x000107c280a8(0x30,param_1);
    func_0x0001088eeec0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088eef74();
    if ((long)uVar2 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar5 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)uVar2;
        uVar1 = iVar4 - iVar5;
        uVar2 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,uVar2 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar2);
  }
  return param_4;
}



/* Entry: 1088eb2f4; end: 1088eb2f7;  */

void FUN_1088eb2f4(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088eee7c();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ef104();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_1088ee8d8();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_1088eaf34();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x0001088eeeac();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088eee8c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088eb2f8; end: 1088eb3e7;  */

void FUN_1088eb2f8(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001088eee7c();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ef104();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_1088ee8d8();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_1088eaf34();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x0001088eeeac();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088eee8c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088eb3e8; end: 1088eb417;  */

void FUN_1088eb3e8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34868();
  FUN_1088eb0b0();
  func_0x0001088ef1b4();
  func_0x0001088eee7c();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ef104();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_1088ee8d8();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_1088eaf34();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x0001088eeeac();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088eee8c();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088eb418; end: 1088eb43f;  */

undefined1  [16] FUN_1088eb418(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x0001088ef054();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x20);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x20); puVar2 != (undefined1 *)(param_1 + 0x40);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x40);
  return auVar6;
}



/* Entry: 1088eb440; end: 1088eb46b;  */

undefined8 FUN_1088eb440(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088eb46c(param_1);
  return param_1;
}



/* Entry: 1088eb46c; end: 1088eb49b;  */

long FUN_1088eb46c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001088ef19c();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x000107c2a330();
  }
  __ZdlPv();
  func_0x0001006b3990(unaff_x19 + 0x18);
  if (extraout_x8 != 0) {
    func_0x0001006b39c4();
  }
  return unaff_x19;
}



/* Entry: 1088eb49c; end: 1088eb49f;  */

undefined8 FUN_1088eb49c(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088eb46c(param_1);
  return param_1;
}


