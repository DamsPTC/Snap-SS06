/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004f8c50; end: 004f8c83;  */

void FUN_004f8c50(long param_1)

{
  ulong *puVar1;
  
  FUN_004ddfbc(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004f8c84; end: 004f8cef;  */

long * FUN_004f8c84(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
  
  func_0x004fe194();
  func_0x004fe5d8();
  while (unaff_w22 != unaff_w21) {
    func_0x004fe158();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x004fe2c0();
    func_0x004fe638();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f8cf0; end: 004f8d3f;  */

void FUN_004f8cf0(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004fe134();
  while (unaff_x22 != 0) {
    FUN_004d2ec0(*unaff_x21);
    func_0x004fe6f0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
  }
  func_0x004fe7a0();
  return;
}



/* Entry: 004f8d40; end: 004f8d43;  */

void FUN_004f8d40(ulong *param_1)

{
  long unaff_x20;
  
  func_0x004fe368();
  FUN_004dbabc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f8d44; end: 004f8d77;  */

long FUN_004f8d44(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00523aac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f8d78; end: 004f8d7b;  */

long FUN_004f8d78(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00523aac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f8d7c; end: 004f8d8f;  */

void FUN_004f8d7c(void)

{
  FUN_004f8d44();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f8d90; end: 004f8d9b;  */

undefined ** FUN_004f8d90(void)

{
  return &PTR_DAT_009f7a50;
}



/* Entry: 004f8d9c; end: 004f8dcf;  */

void FUN_004f8d9c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe820();
  }
  func_0x004fe75c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004f8dd0; end: 004f8e3f;  */

long * FUN_004f8dd0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x004fe200();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x004fe1a4();
    func_0x004fe538();
    func_0x004fe280();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f8e40; end: 004f8ea3;  */

void FUN_004f8e40(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004fe818();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x004fe298((int)LZCOUNT(*(int *)(unaff_x19 + 0x20)) * 9);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004f8ea4; end: 004f8ebf;  */

long FUN_004f8ea4(long param_1)

{
  long extraout_x8;
  
  FUN_00523bc4();
  FUN_004fe0f0();
  return param_1 + extraout_x8;
}



/* Entry: 004f8ec0; end: 004f8f27;  */

void FUN_004f8ec0(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == 0) {
      FUN_004fd908();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004fe7e8();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f8f28; end: 004f8f5b;  */

long FUN_004f8f28(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00523aac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f8f5c; end: 004f8f5f;  */

long FUN_004f8f5c(long param_1)

{
  func_0x004fe3d0();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00523aac();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f8f60; end: 004f8f73;  */

void FUN_004f8f60(void)

{
  FUN_004f8f28();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f8f74; end: 004f8f7f;  */

undefined ** FUN_004f8f74(void)

{
  return &PTR_DAT_009f7a98;
}



/* Entry: 004f8f80; end: 004f8fb3;  */

void FUN_004f8f80(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe820();
  }
  func_0x004fe75c();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004f8fb4; end: 004f9023;  */

long * FUN_004f8fb4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x004fe200();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x004fe1a4();
    func_0x004fe538();
    func_0x004fe280();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f9024; end: 004f9087;  */

void FUN_004f9024(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004fe57c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004fe818();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x004fe298((int)LZCOUNT(*(int *)(unaff_x19 + 0x20)) * 9);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004fe918();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004f9088; end: 004f90ef;  */

void FUN_004f9088(void)

{
  ulong *puVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x004fe690();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004fe684();
    if (extraout_x8 == 0) {
      FUN_004fd908();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x004fe7e8();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x004fe2cc();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004fe260();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f90f0; end: 004f9243;  */

void FUN_004f90f0(void)

{
  uint extraout_w8;
  undefined4 extraout_var;
  long unaff_x19;
  
  func_0x004fe488();
  if (extraout_w8 < 7) {
                    /* WARNING: Could not recover jumptable at 0x004f911c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0080ca37)[CONCAT44(extraout_var,extraout_w8)] * 4 + 0x4f9120))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004f9244; end: 004f92f3;  */

void FUN_004f9244(undefined8 param_1)

{
  undefined4 extraout_w8;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x004fe498();
  func_0x004fe900(&PTR_DAT_009f7498);
  if ((extraout_x8 & 1) != 0) {
    func_0x004fe1d0();
  }
  func_0x004fe564();
  switch(extraout_w8) {
  case 1:
    func_0x004fe46c();
    FUN_004f4f08();
    break;
  case 2:
    func_0x004fe46c();
    FUN_004fd93c();
    break;
  case 3:
    func_0x004fe46c();
    FUN_004fd98c();
    break;
  case 4:
    func_0x004fe46c();
    func_0x004fda30();
    break;
  case 5:
    func_0x004fe46c();
    func_0x004fda80();
    break;
  case 6:
    func_0x004fe46c();
    func_0x004fdb10();
    break;
  case 7:
    func_0x004fe46c();
    func_0x004fdb60();
    break;
  default:
    goto LAB_004fe118;
  }
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
LAB_004fe118:
  return;
}



/* Entry: 004f92f4; end: 004f931f;  */

undefined8 FUN_004f92f4(undefined8 param_1)

{
  func_0x004fe3d0();
  FUN_004f9320(param_1);
  return param_1;
}



/* Entry: 004f9320; end: 004f9333;  */

void FUN_004f9320(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x004fe488();
  if ((uint)extraout_x8 < 7) {
                    /* WARNING: Could not recover jumptable at 0x004f911c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0080ca37)[extraout_x8] * 4 + 0x4f9120))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004f9334; end: 004f9347;  */

void FUN_004f9334(void)

{
  FUN_004f92f4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f9348; end: 004f936b;  */

undefined8 FUN_004f9348(undefined8 param_1)

{
  func_0x004fe3d0();
  func_0x004fe658();
  func_0x004fe5c4();
  return param_1;
}



/* Entry: 004f936c; end: 004f9483;  */

long * FUN_004f936c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  uint extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  func_0x004fe8dc();
  if (extraout_w8 < 7) {
    func_0x004fe398(*(undefined8 *)(&UNK_0080d390 + (ulong)extraout_w8 * 8));
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004fe404();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004f9484; end: 004f952b;  */

long FUN_004f9484(long param_1)

{
  long extraout_x8;
  
  func_0x004f9b9c();
  FUN_004fe0f0();
  return param_1 + extraout_x8;
}



/* Entry: 004f952c; end: 004f952f;  */

void FUN_004f952c(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x004fe7b8();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        FUN_004f90f0();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x0068947c();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      FUN_004f4f08();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004fe8e8();
        func_0x004f9530();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      FUN_004fd93c();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f9598();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      FUN_004fd98c();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f965c();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      func_0x004fda30();
      break;
    case 5:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f96c4();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      func_0x004fda80();
      break;
    case 6:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f9788();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      func_0x004fdb10();
      break;
    case 7:
      if (unaff_w24 == iVar1) {
        func_0x004fe1c0();
        func_0x004f97f0();
        goto LAB_004f86d8;
      }
      func_0x004fe460();
      func_0x004fdb60();
      break;
    default:
      goto LAB_004f86d8;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_004f86d8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f9530; end: 004f987f;  */

void FUN_004f9530(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004fe2f4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe650();
  }
  func_0x004fe478();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe668();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f9880; end: 004f98b3;  */

undefined8 FUN_004f9880(undefined8 param_1)

{
  func_0x004fe3d0();
  func_0x004fe658();
  func_0x004fe5c4();
  func_0x004fe84c();
  func_0x004fe85c();
  return param_1;
}



/* Entry: 004f98b4; end: 004f98c7;  */

void FUN_004f98b4(void)

{
  FUN_004f9880();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f98c8; end: 004f98d3;  */

undefined ** FUN_004f98c8(void)

{
  return &PTR_DAT_009f7b28;
}



/* Entry: 004f98d4; end: 004f9a9f;  */

void FUN_004f98d4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe3f0();
  func_0x004fe660();
  func_0x004fe844();
  func_0x004fe854();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004f9aa0; end: 004f9aa3;  */

void FUN_004f9aa0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004fe2f4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe650();
  }
  func_0x004fe478();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe668();
  }
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x00532e08();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f9aa4; end: 004f9acf;  */

undefined8 FUN_004f9aa4(undefined8 param_1)

{
  func_0x004fe3d0();
  func_0x004fe658();
  func_0x004fe5c4();
  return param_1;
}



/* Entry: 004f9ad0; end: 004f9ae3;  */

void FUN_004f9ad0(void)

{
  FUN_004f9aa4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f9ae4; end: 004f9aef;  */

undefined ** FUN_004f9ae4(void)

{
  return &PTR_DAT_009f7b70;
}



/* Entry: 004f9af0; end: 004f9c0f;  */

void FUN_004f9af0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe3f0();
  func_0x004fe660();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004f9c10; end: 004f9c13;  */

void FUN_004f9c10(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004fe2f4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe650();
  }
  func_0x004fe478();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe668();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f9c14; end: 004f9c53;  */

long FUN_004f9c14(long param_1)

{
  func_0x004fe3d0();
  func_0x004fe85c();
  func_0x00532f74(param_1 + 0x30);
  func_0x00532f74(param_1 + 0x38);
  FUN_004fc758(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f9c54; end: 004f9c67;  */

void FUN_004f9c54(void)

{
  FUN_004f9c14();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f9c68; end: 004f9c73;  */

undefined ** FUN_004f9c68(void)

{
  return &PTR_DAT_009f7bc8;
}



/* Entry: 004f9c74; end: 004f9cbf;  */

void FUN_004f9c74(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe76c();
  if (in_NG == in_OV) {
    func_0x004fe828();
  }
  func_0x004fe854();
  FUN_00532fa8(unaff_x19 + 0x30);
  FUN_00532fa8(unaff_x19 + 0x38);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004f9cc0; end: 004f9eb3;  */

segment_command *
FUN_004f9cc0(segment_command *param_1,segment_command *param_2,ulong param_3,
            segment_command *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  segment_command *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004fe194();
  func_0x004fe4f4(param_1->fileoff);
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    func_0x004fe35c();
    param_4 = param_1;
  }
  func_0x004fe4f4(*(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    func_0x004fe350();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    func_0x004fe1a4();
    param_2 = param_1;
    func_0x004fe830();
    func_0x004fe280();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x004fe1a4();
    param_4 = &segment_command_00000020;
    func_0x00487cbc();
    func_0x004fe280();
    param_2 = param_1;
  }
  func_0x004fe4f4(*(undefined8 *)(unaff_x20 + 0x38));
  lVar3 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar3 = *(long *)(param_3 + 8);
  }
  if (lVar3 != 0) {
    param_2 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
    param_4 = unaff_x19;
    FUN_00435e9c();
  }
  iVar4 = *(int *)(unaff_x20 + 0x18);
  while (iVar4 != 0) {
    func_0x004fe158();
    param_3 = (ulong)*(uint *)(param_2->segname + 0xc);
    func_0x004fe3e8(6);
    func_0x004fe638();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_02 + 8);
      param_3 = *(ulong *)(extraout_x8_02 + 0x10);
    }
    else {
      lVar3 = extraout_x8_02 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        uVar2 = unaff_x19->cmd;
        iVar5 = (uVar2 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (segment_command *)(param_4->segname + (long)iVar4 + -8);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (segment_command *)(param_4->segname + (long)(int)param_3 + -8);
  }
  return param_4;
}



/* Entry: 004f9eb4; end: 004f9ec7;  */

void FUN_004f9eb4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004fe368();
  FUN_004f9eb4();
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x19 + 0x28);
    func_0x00532e08();
  }
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x00532e08();
  }
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x19 + 0x38);
    func_0x00532e08();
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x40) = 1;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004f9ec8; end: 004f9f1f;  */

long FUN_004f9ec8(long param_1)

{
  func_0x004fe3d0();
  func_0x004fe5c4();
  func_0x004fe84c();
  func_0x004fe85c();
  func_0x00532f74(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f9f20; end: 004f9f23;  */

long FUN_004f9f20(long param_1)

{
  func_0x004fe3d0();
  func_0x004fe5c4();
  func_0x004fe84c();
  func_0x004fe85c();
  func_0x00532f74(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f9f24; end: 004f9f37;  */

void FUN_004f9f24(void)

{
  FUN_004f9ec8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f9f38; end: 004f9f43;  */

undefined ** FUN_004f9f38(void)

{
  return &PTR_DAT_009f7c10;
}



/* Entry: 004f9f44; end: 004f9fb3;  */

void FUN_004f9f44(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_00532fa8(param_1 + 0x18);
  func_0x004fe844();
  func_0x004fe854();
  FUN_00532fa8(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004f9fb4; end: 004fa1cb;  */

qword * FUN_004f9fb4(qword *param_1,undefined8 param_2,ulong param_3,qword *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  qword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  func_0x004fe4f4(param_1[3]);
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004fe35c();
    param_4 = param_1;
  }
  func_0x004fe4f4(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004fe350();
    param_4 = param_1;
  }
  func_0x004fe4f4(*(undefined8 *)(unaff_x20 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004fe87c();
    param_4 = param_1;
  }
  func_0x004fe4f4(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x004fe888();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_1 = (qword *)((long)&MACH_HEADER.cputype + 1);
    func_0x004fe3e8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_1 = (qword *)((long)&MACH_HEADER.cputype + 2);
    func_0x004fe3e8();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x004fe1a4();
    param_4 = &segment_command_00000020.vmaddr;
    func_0x00487cbc(0x38,param_1);
    func_0x004fe280();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8_03 + 8);
      param_3 = *(ulong *)(extraout_x8_03 + 0x10);
    }
    else {
      lVar2 = extraout_x8_03 + 8;
    }
    if ((long)(*unaff_x19 - (long)param_4) < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (qword *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (qword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004fa1cc; end: 004fa31f;  */

void FUN_004fa1cc(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004fe250();
  puVar3 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar3;
  if (((ulong)puVar3 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar3 & 0xfffffffffffffffe);
  }
  func_0x004fe478();
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)puVar3 & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x00532e08();
  }
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x00532e08();
  }
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x21 + 0x28);
    func_0x00532e08();
  }
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x004d3428();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        func_0x004d3428();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004fe260();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004fa320; end: 004fa34b;  */

undefined8 FUN_004fa320(undefined8 param_1)

{
  func_0x004fe3d0();
  func_0x004fe658();
  func_0x004fe5c4();
  return param_1;
}



/* Entry: 004fa34c; end: 004fa35f;  */

void FUN_004fa34c(void)

{
  FUN_004fa320();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fa360; end: 004fa36b;  */

undefined ** FUN_004fa360(void)

{
  return &PTR_DAT_009f7c60;
}



/* Entry: 004fa36c; end: 004fa48b;  */

void FUN_004fa36c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe3f0();
  func_0x004fe660();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004fa48c; end: 004fa48f;  */

void FUN_004fa48c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004fe2f4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe650();
  }
  func_0x004fe478();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe668();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fa490; end: 004fa4bb;  */

undefined8 FUN_004fa490(undefined8 param_1)

{
  func_0x004fe3d0();
  func_0x004fe658();
  func_0x004fe5c4();
  return param_1;
}



/* Entry: 004fa4bc; end: 004fa4cf;  */

void FUN_004fa4bc(void)

{
  FUN_004fa490();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fa4d0; end: 004fa4db;  */

undefined ** FUN_004fa4d0(void)

{
  return &PTR_DAT_009f7cb0;
}



/* Entry: 004fa4dc; end: 004fa5fb;  */

void FUN_004fa4dc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe3f0();
  func_0x004fe660();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004fa5fc; end: 004fa5ff;  */

void FUN_004fa5fc(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004fe2f4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe650();
  }
  func_0x004fe478();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe668();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fa600; end: 004fa62f;  */

undefined8 FUN_004fa600(undefined8 param_1)

{
  func_0x004fe3d0();
  func_0x004fe658();
  func_0x004fe5c4();
  func_0x004fe84c();
  return param_1;
}



/* Entry: 004fa630; end: 004fa643;  */

void FUN_004fa630(void)

{
  FUN_004fa600();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fa644; end: 004fa64f;  */

undefined ** FUN_004fa644(void)

{
  return &PTR_DAT_009f7d00;
}



/* Entry: 004fa650; end: 004fa7af;  */

void FUN_004fa650(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004fe3f0();
  func_0x004fe660();
  func_0x004fe844();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004fa7b0; end: 004fa7b3;  */

void FUN_004fa7b0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004fe2f4();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe650();
  }
  func_0x004fe478();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    func_0x004fe668();
  }
  func_0x004fe50c(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004fe500();
    }
    param_1 = (ulong *)(unaff_x19 + 0x20);
    func_0x00532e08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe31c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fa7b4; end: 004fa7d7;  */

undefined8 FUN_004fa7b4(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fa7d8; end: 004fa7eb;  */

void FUN_004fa7d8(void)

{
  FUN_004fa7b4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fa7ec; end: 004fa80b;  */

undefined ** FUN_004fa7ec(void)

{
  return &PTR_DAT_009f7d48;
}



/* Entry: 004fa80c; end: 004fa89b;  */

long * FUN_004fa80c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((char)param_1[2] == '\x01') {
    func_0x004fe1a4();
    func_0x004fe524();
    func_0x004fe280();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x004fe1a4();
    func_0x004fe588();
    func_0x004fe280();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe404();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004fa89c; end: 004fa8d3;  */

long FUN_004fa89c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10)) & 3) * 2;
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



/* Entry: 004fa8d4; end: 004fa94f;  */

void FUN_004fa8d4(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x004fe590();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004fe418();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004fa92c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004fad28();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_004fa92c;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004fe418();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004fa92c;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004fac74();
    }
  }
  __ZdlPv();
LAB_004fa92c:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004fa950; end: 004fa983;  */

long FUN_004fa950(long param_1)

{
  func_0x004fe3d0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004fa8d4(param_1);
  }
  return param_1;
}



/* Entry: 004fa984; end: 004fa997;  */

void FUN_004fa984(void)

{
  FUN_004fa950();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fa998; end: 004fa9ab;  */

undefined8 FUN_004fa998(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fa9ac; end: 004faaa7;  */

void FUN_004fa9ac(long param_1)

{
  ulong *puVar1;
  
  FUN_004fa8d4();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004faaa8; end: 004faac3;  */

void FUN_004faaa8(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004f6ffc;
  func_0x004fe7b8();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      FUN_004fa8d4();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x004fe1c0();
      func_0x004fe5cc();
      func_0x004faab8();
      goto LAB_004f6ffc;
    }
    func_0x004fe460();
    FUN_004fdc18();
  }
  else {
    if (iVar1 != 1) goto LAB_004f6ffc;
    if (unaff_w24 == 1) {
      func_0x004fe1c0();
      func_0x004fe5cc();
      FUN_004faaa8();
      goto LAB_004f6ffc;
    }
    func_0x004fe460();
    FUN_004fdbc8();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_004f6ffc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004faac4; end: 004fab0f;  */

void FUN_004faac4(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x004fe590();
  if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004fe418();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_004faddc();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004fab10; end: 004fab43;  */

long FUN_004fab10(long param_1)

{
  func_0x004fe3d0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004faac4(param_1);
  }
  return param_1;
}



/* Entry: 004fab44; end: 004fab57;  */

void FUN_004fab44(void)

{
  FUN_004fab10();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fab58; end: 004fab67;  */

undefined8 FUN_004fab58(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fab68; end: 004fac4f;  */

void FUN_004fab68(long param_1)

{
  ulong *puVar1;
  
  FUN_004faac4();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004fac50; end: 004fac73;  */

void FUN_004fac50(ulong *param_1)

{
  int iVar1;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x004fe220();
  if ((unaff_x22 & 1) != 0) {
    func_0x004fe644();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_004fac50();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_004faac4();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x004fe460();
        FUN_004fdc68();
        unaff_x21[2] = (ulong)param_1;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004fe260();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004fac74; end: 004fac97;  */

undefined8 FUN_004fac74(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fac98; end: 004facab;  */

void FUN_004fac98(void)

{
  FUN_004fac74();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004facac; end: 004fad27;  */

undefined ** FUN_004facac(void)

{
  return &PTR_DAT_009f7e28;
}



/* Entry: 004fad28; end: 004fad4b;  */

undefined8 FUN_004fad28(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fad4c; end: 004fad5f;  */

void FUN_004fad4c(void)

{
  FUN_004fad28();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fad60; end: 004faddb;  */

undefined ** FUN_004fad60(void)

{
  return &PTR_DAT_009f7e80;
}



/* Entry: 004faddc; end: 004fadff;  */

undefined8 FUN_004faddc(undefined8 param_1)

{
  func_0x004fe3d0();
  return param_1;
}



/* Entry: 004fae00; end: 004fae13;  */

void FUN_004fae00(void)

{
  FUN_004faddc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004fae14; end: 004fae33;  */

undefined ** FUN_004fae14(void)

{
  return &PTR_DAT_009f7ed0;
}



/* Entry: 004fae34; end: 004fae9f;  */

long * FUN_004fae34(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004fe194();
  if ((char)param_1[2] == '\x01') {
    func_0x004fe1a4();
    func_0x004fe524();
    func_0x004fe280();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004fe404();
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
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4,lVar2,param_3 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004faea0; end: 004faecf;  */

long FUN_004faea0(long param_1)

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



/* Entry: 004faed0; end: 004fb0eb;  */

void FUN_004faed0(void)

{
  uint extraout_w8;
  undefined4 extraout_var;
  long unaff_x19;
  
  func_0x004fe488();
  if (extraout_w8 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x004faefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_0080ca4c)[CONCAT44(extraout_var,extraout_w8)] * 4 + 0x4faf00))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004fb0ec; end: 004fb11f;  */

long FUN_004fb0ec(long param_1)

{
  func_0x004fe3d0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004faed0(param_1);
  }
  return param_1;
}



/* Entry: 004fb120; end: 004fb133;  */

void FUN_004fb120(void)

{
  FUN_004fb0ec();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}


