/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088febbc; end: 1088febbf;  */

void FUN_1088febbc(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  func_0x000107c2a3cc();
  func_0x000108901f88();
  func_0x0001088f930c();
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x48) = puVar1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108902024();
      if (puVar1 == (ulong *)0x0) {
        FUN_1088f830c();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        puVar1 = unaff_x22;
      }
      else {
        FUN_1088f566c();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088febc0; end: 1088fec03;  */

long FUN_1088febc0(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fec04; end: 1088fec17;  */

void FUN_1088fec04(void)

{
  FUN_1088febc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fec18; end: 1088fec23;  */

undefined ** FUN_1088fec18(void)

{
  return &PTR_DAT_110a8f758;
}



/* Entry: 1088fec24; end: 1088fec63;  */

void FUN_1088fec24(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000108901b44();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000108901b24();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x000108901da4();
    }
  }
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 1088fec64; end: 1088fed37;  */

long * FUN_1088fec64(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010890199c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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



/* Entry: 1088fed38; end: 1088fed3b;  */

void FUN_1088fed38(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088fed3c; end: 1088fed7f;  */

long FUN_1088fed3c(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088fed80; end: 1088fed93;  */

void FUN_1088fed80(void)

{
  FUN_1088fed3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fed94; end: 1088fed9f;  */

undefined ** FUN_1088fed94(void)

{
  return &PTR_DAT_110a8f7a0;
}



/* Entry: 1088feda0; end: 1088feddf;  */

void FUN_1088feda0(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000108901b44();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000108901b24();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x000108901da4();
    }
  }
  func_0x000108901bbc();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 1088fede0; end: 1088feeb3;  */

long * FUN_1088fede0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x00010890199c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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



/* Entry: 1088feeb4; end: 1088feeb7;  */

void FUN_1088feeb4(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x000108901838();
  if ((unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  func_0x000108901d50();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108901cdc();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108901d5c();
      if (param_1 == (ulong *)0x0) {
        func_0x000108901b1c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
  }
  func_0x000108901860();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089018f8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088feeb8; end: 1088feeeb;  */

long FUN_1088feeb8(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088feeec; end: 1088feeff;  */

void FUN_1088feeec(void)

{
  FUN_1088feeb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088fef00; end: 1088fef0b;  */

undefined ** FUN_1088fef00(void)

{
  return &PTR_DAT_110a8f7e8;
}



/* Entry: 1088fef0c; end: 1088fefdb;  */

void FUN_1088fef0c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901bbc();
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



/* Entry: 1088fefdc; end: 1088fefdf;  */

void FUN_1088fefdc(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088fefe0; end: 1088ff01f;  */

long FUN_1088fefe0(long param_1)

{
  func_0x000108901ab8();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return param_1;
}



/* Entry: 1088ff020; end: 1088ff033;  */

void FUN_1088ff020(void)

{
  FUN_1088fefe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ff034; end: 1088ff03f;  */

undefined ** FUN_1088ff034(void)

{
  return &PTR_DAT_110a8f830;
}



/* Entry: 1088ff040; end: 1088ff07f;  */

void FUN_1088ff040(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
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



/* Entry: 1088ff080; end: 1088ff1df;  */

long * FUN_1088ff080(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x0001089018c0();
    func_0x000108901bb4();
    func_0x0001089019dc();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0001089018c0();
    func_0x000108901dbc();
    func_0x0001089019d0();
    param_4 = param_1;
  }
  switch(*(undefined4 *)(unaff_x20 + 0x2c)) {
  case 4:
    func_0x0001089018c0();
    func_0x000108901fcc();
    param_4 = (long *)0x20;
    func_0x000107c280a8();
    func_0x0001089019d0();
    goto LAB_1088ff1ac;
  case 5:
    func_0x0001089018c0();
    func_0x000108901fcc();
    param_4 = (long *)0x28;
    break;
  case 6:
    func_0x0001089018c0();
    func_0x000108901fcc();
    param_4 = (long *)0x30;
    break;
  case 7:
    func_0x0001089018c0();
    func_0x000108901fcc();
    param_4 = (long *)0x38;
    break;
  default:
    goto LAB_1088ff1ac;
  }
  func_0x000107c280a8();
  func_0x0001089019dc();
LAB_1088ff1ac:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108901ae0();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  else {
    lVar2 = extraout_x8_00 + 8;
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



/* Entry: 1088ff1e0; end: 1088ff2bb;  */

void FUN_1088ff1e0(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b2c();
    param_1 = param_1 + 1;
  }
  param_1 = param_1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    param_1 = param_1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x2c)) {
  case 4:
    func_0x000108901eac((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * -9 + 0x280U >> 6);
    break;
  case 5:
  case 6:
  case 7:
    param_1 = param_1 + ((int)LZCOUNT(*(undefined4 *)(unaff_x19 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088ff2bc; end: 1088ff2bf;  */

void FUN_1088ff2bc(ulong *param_1)

{
  uint uVar1;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  uVar1 = *(uint *)(unaff_x20 + 0x2c);
  if (uVar1 != 0) {
    if (*(uint *)(unaff_x21 + 0x2c) != uVar1) {
      *(uint *)(unaff_x21 + 0x2c) = uVar1;
    }
    if ((uVar1 & 0xfffffffc) == 4) {
      *(undefined4 *)(unaff_x21 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088ff2c0; end: 1088ff2e3;  */

undefined8 FUN_1088ff2c0(undefined8 param_1)

{
  func_0x000108901ab8();
  return param_1;
}



/* Entry: 1088ff2e4; end: 1088ff2f7;  */

void FUN_1088ff2e4(void)

{
  FUN_1088ff2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ff2f8; end: 1088ff317;  */

undefined ** FUN_1088ff2f8(void)

{
  return &PTR_DAT_110a8f890;
}



/* Entry: 1088ff318; end: 1088ff37f;  */

long * FUN_1088ff318(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  if ((int)param_1[2] != 0) {
    func_0x0001089018c0();
    func_0x000108901cb0();
    func_0x0001089019dc();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108901ae0();
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



/* Entry: 1088ff380; end: 1088ff3c7;  */

ulong FUN_1088ff380(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = (int)LZCOUNT(*(int *)(param_1 + 0x10)) * -9 + 0x1a0U >> 6;
  }
  uVar2 = (ulong)uVar1;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    uVar2 = lVar3 + uVar2;
  }
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return uVar2;
}



/* Entry: 1088ff3c8; end: 1088ff423;  */

void FUN_1088ff3c8(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108901ff0();
  func_0x000108901ec4(&PTR_FUN_110a8e3d8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901f50();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  return;
}



/* Entry: 1088ff424; end: 1088ff44f;  */

undefined8 FUN_1088ff424(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088ff450(param_1);
  return param_1;
}



/* Entry: 1088ff450; end: 1088ff46b;  */

void FUN_1088ff450(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ff46c; end: 1088ff46f;  */

undefined8 FUN_1088ff46c(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088ff450(param_1);
  return param_1;
}



/* Entry: 1088ff470; end: 1088ff483;  */

void FUN_1088ff470(void)

{
  FUN_1088ff424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ff484; end: 1088ff48f;  */

undefined ** FUN_1088ff484(void)

{
  return &PTR_DAT_110a8f8e0;
}



/* Entry: 1088ff490; end: 1088ff4c3;  */

void FUN_1088ff490(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108901b24();
  }
  func_0x000108901ef0();
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



/* Entry: 1088ff4c4; end: 1088ff537;  */

long * FUN_1088ff4c4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108901824();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089017a4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001089018c0();
    func_0x000108901bb4();
    func_0x0001089019d0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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



/* Entry: 1088ff538; end: 1088ff593;  */

void FUN_1088ff538(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b2c();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108901a78();
    func_0x000108901eac();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088ff594; end: 1088ff597;  */

void FUN_1088ff594(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088ff598; end: 1088ff5fb;  */

void FUN_1088ff598(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088ff5fc; end: 1088ff62b;  */

void FUN_1088ff5fc(ulong *param_1,ulong *param_2)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000108901b74();
  FUN_1088ff490();
  func_0x000108901e6c();
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108901bac();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088ff62c; end: 1088ff63b;  */

undefined1  [16] FUN_1088ff62c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000108901930();
  puVar1 = param_1 + 0xc;
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



/* Entry: 1088ff63c; end: 1088ff6e7;  */

void FUN_1088ff63c(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  func_0x000108902004();
  if (extraout_w8 == 3) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088ff6b8;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088ffd5c();
    }
  }
  else if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088ff6b8;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088ffbf4();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_1088ff6b8;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108901ad4();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088ff6b8;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_1088ff978();
    }
  }
  __ZdlPv();
LAB_1088ff6b8:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 1088ff6e8; end: 1088ff71b;  */

long FUN_1088ff6e8(long param_1)

{
  func_0x000108901ab8();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1088ff63c(param_1);
  }
  return param_1;
}



/* Entry: 1088ff71c; end: 1088ff72f;  */

void FUN_1088ff71c(void)

{
  FUN_1088ff6e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ff730; end: 1088ff747;  */

undefined8 FUN_1088ff730(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088ff9a4(param_1);
  return param_1;
}



/* Entry: 1088ff748; end: 1088ff867;  */

void FUN_1088ff748(long param_1)

{
  ulong *puVar1;
  
  FUN_1088ff63c();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 1088ff868; end: 1088ff86b;  */

void FUN_1088ff868(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108901838();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108901bd4();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088fb1bc;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_1088ff63c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x000108901ee0();
      FUN_1088ff91c();
      goto LAB_1088fb1bc;
    }
    func_0x000108901724();
    param_1 = unaff_x22;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x000108901ee0();
      func_0x0001088ff8d8();
      goto LAB_1088fb1bc;
    }
    FUN_1089016c8();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_1088fb1bc;
    if (iVar2 == 1) {
      func_0x000108901ee0();
      FUN_1088ff86c();
      goto LAB_1088fb1bc;
    }
    FUN_10890164c();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088fb1bc:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088ff86c; end: 1088ff91b;  */

void FUN_1088ff86c(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108901b80();
  param_2 = param_2 + 0x10;
  FUN_1088ffb98(param_1 + 0x10);
  func_0x000108901f7c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000108902030();
    }
    func_0x000107c30248(unaff_x19 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 1088ff91c; end: 1088ff977;  */

void FUN_1088ff91c(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108900568();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088f7540();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 1088ff978; end: 1088ff9a3;  */

undefined8 FUN_1088ff978(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088ff9a4(param_1);
  return param_1;
}



/* Entry: 1088ff9a4; end: 1088ff9cb;  */

long FUN_1088ff9a4(long param_1)

{
  func_0x000107c30258(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x14)) {
    func_0x0001004a6984(param_1 + 0x10);
  }
  return param_1 + 0x10;
}



/* Entry: 1088ff9cc; end: 1088ff9df;  */

void FUN_1088ff9cc(void)

{
  FUN_1088ff978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ff9e0; end: 1088ff9eb;  */

undefined ** FUN_1088ff9e0(void)

{
  return &PTR_DAT_110a8f978;
}



/* Entry: 1088ff9ec; end: 1088ffa23;  */

void FUN_1088ff9ec(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x000107c3025c(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 1088ffa24; end: 1088ffb13;  */

byte * FUN_1088ffa24(byte *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  uint *puVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  func_0x0001089018e8();
  uVar5 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar5) {
    func_0x0001089018c0();
    pbVar3 = param_1 + 2;
    *param_1 = 10;
    for (; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
      pbVar3[-1] = (byte)uVar5 | 0x80;
      pbVar3 = pbVar3 + 1;
    }
    pbVar3[-1] = (byte)uVar5;
    puVar6 = *(uint **)(unaff_x20 + 0x18);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x0001089018c0();
      uVar5 = *puVar6;
      pbVar3 = param_1;
      while( true ) {
        param_4 = pbVar3 + 1;
        if (uVar5 < 0x80) break;
        *pbVar3 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        pbVar3 = param_4;
      }
      puVar6 = puVar6 + 1;
      *pbVar3 = (byte)uVar5;
    } while (puVar6 < puVar1);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    param_4 = unaff_x19;
    func_0x000107c280a0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
    if ((long)uVar2 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      uVar2 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)uVar2) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar2;
        uVar5 = iVar7 - iVar8;
        uVar2 = (ulong)uVar5;
        if (uVar5 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return param_4 + iVar7;
    }
    _memcpy(param_4,lVar4,uVar2 & 0xffffffff);
    return param_4 + (int)uVar2;
  }
  return param_4;
}



/* Entry: 1088ffb14; end: 1088ffb93;  */

long FUN_1088ffb14(long param_1)

{
  long extraout_x8;
  ulong uVar1;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x10;
  func_0x00010b4d3e38();
  *(int *)(param_1 + 0x20) = (int)lVar2;
  func_0x000108901a78((long)(int)lVar2);
  lVar4 = 0;
  if (lVar2 != 0) {
    lVar4 = extraout_x8 + 1;
  }
  uVar1 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  lVar4 = lVar4 + lVar2;
  if (lVar3 != 0) {
    func_0x000107c28098(uVar1);
    func_0x000108901b54();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x30) = (int)lVar4;
  return lVar4;
}



/* Entry: 1088ffb94; end: 1088ffb97;  */

void FUN_1088ffb94(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108901b80();
  param_2 = param_2 + 0x10;
  FUN_1088ffb98(param_1 + 0x10);
  func_0x000108901f7c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000108902030();
    }
    func_0x000107c30248(unaff_x19 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 1088ffb98; end: 1088ffbf3;  */

undefined1  [16] FUN_1088ffb98(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long unaff_x20;
  int *unaff_x21;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    func_0x000108901aec();
    func_0x000108901788();
    iVar1 = *unaff_x21;
    *unaff_x21 = iVar1 + iVar3;
    puVar4 = (undefined4 *)(*(long *)(unaff_x21 + 2) + (long)iVar1 * 4);
    puVar2 = *(undefined4 **)(unaff_x20 + 8);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 1088ffbf4; end: 1088ffc1f;  */

long FUN_1088ffbf4(long param_1)

{
  func_0x000108901ab8();
  FUN_1088f7eac(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088ffc20; end: 1088ffc33;  */

void FUN_1088ffc20(void)

{
  FUN_1088ffbf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ffc34; end: 1088ffc3f;  */

undefined ** FUN_1088ffc34(void)

{
  return &PTR_DAT_110a8f9c0;
}



/* Entry: 1088ffc40; end: 1088ffc73;  */

void FUN_1088ffc40(long param_1)

{
  ulong *puVar1;
  
  FUN_1088f80fc(param_1 + 0x10);
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 1088ffc74; end: 1088ffce7;  */

long * FUN_1088ffc74(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001089018e8();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x000108901898();
    param_3 = (ulong)*(uint *)(param_2 + 0x54);
    func_0x0001089018cc();
    func_0x000108901eb8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108901ae0();
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



/* Entry: 1088ffce8; end: 1088ffd57;  */

ulong FUN_1088ffce8(long param_1)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong uVar3;
  long extraout_x9;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar4 = (ulong)*(int *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x10);
  if ((uVar3 & 1) != 0) {
    puVar1 = (ulong *)(uVar3 + 7);
  }
  while ((uVar4 & 0x1fffffffffffffff) != 0) {
    FUN_1088f719c(*puVar1);
    func_0x000108901cb8();
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x000108901f00();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar2 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 1088ffd58; end: 1088ffd5b;  */

void FUN_1088ffd58(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108901b80();
  FUN_1088f71b8(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 1088ffd5c; end: 1088ffd87;  */

undefined8 FUN_1088ffd5c(undefined8 param_1)

{
  func_0x000108901ab8();
  FUN_1088ffd88(param_1);
  return param_1;
}



/* Entry: 1088ffd88; end: 1088ffdb7;  */

void FUN_1088ffd88(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088f72bc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ffdb8; end: 1088ffdc3;  */

undefined ** FUN_1088ffdb8(void)

{
  return &PTR_DAT_110a8fa08;
}



/* Entry: 1088ffdc4; end: 1088ffea3;  */

void FUN_1088ffdc4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108901b10();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088f7334(unaff_x19[3]);
  }
  func_0x000108901bbc();
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



/* Entry: 1088ffea4; end: 108900017;  */

void FUN_1088ffea4(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010890184c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108901c50();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108901c44();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108900568();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088f7540();
    }
  }
  func_0x000108901874();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089018f8();
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



/* Entry: 108900018; end: 108900043;  */

long * FUN_108900018(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000108901f58();
  }
  return param_1;
}



/* Entry: 108900044; end: 1089000af;  */

long FUN_108900044(long param_1)

{
  FUN_108900018(param_1 + 0x20);
  func_0x000107c296d8(param_1 + 8);
  return param_1;
}



/* Entry: 1089000b0; end: 1089000db;  */

long * FUN_1089000b0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000108901f58();
  }
  return param_1;
}



/* Entry: 1089000dc; end: 108900107;  */

long FUN_1089000dc(long param_1)

{
  FUN_108900108(param_1 + 0x20);
  FUN_1089000b0(param_1 + 8);
  return param_1;
}



/* Entry: 108900108; end: 108900133;  */

long * FUN_108900108(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000108901f58();
  }
  return param_1;
}



/* Entry: 108900134; end: 108900553;  */

void FUN_108900134(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901b9c();
  }
  else {
    func_0x000108901ba4();
  }
  *puVar1 = &PTR_FUN_110a8ded8;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 108900554; end: 108900567;  */

void FUN_108900554(ulong *param_1)

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



/* Entry: 108900568; end: 108900597;  */

long FUN_108900568(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108901b74();
  if (param_1 == 0) {
    func_0x000108901e9c();
  }
  else {
    func_0x000108901cd0();
  }
  func_0x000108901e48();
  func_0x000107c348d8();
  func_0x000107c34930(&PTR_FUN_110a8d558);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84b8();
  }
  func_0x000107c34938(unaff_x19 + 0x10);
  FUN_1088f7ed4(unaff_x19 + 0x28);
  lVar1 = unaff_x20 + 0x40;
  func_0x000107c2809c();
  *(long *)(unaff_x19 + 0x40) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x54) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  return unaff_x19;
}



/* Entry: 108900598; end: 10890066f;  */

undefined8 * FUN_108900598(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x000108901c8c();
  if (param_1 == 0) {
    puVar2 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar2 = unaff_x21;
    func_0x00010b4d80e0();
  }
  puVar2[1] = unaff_x21;
  *puVar2 = &PTR_FUN_110a8eab8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001089018b4();
  }
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  func_0x000108900070(puVar2 + 3);
  func_0x000108900090(puVar2 + 6);
  uVar1 = *(uint *)(puVar2 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = unaff_x21;
    FUN_1088f0114();
  }
  puVar2[9] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_108900670();
  }
  puVar2[10] = unaff_x21;
  *(undefined2 *)(puVar2 + 0xb) = *(undefined2 *)(unaff_x19 + 0x58);
  return puVar2;
}



/* Entry: 108900670; end: 1089006ab;  */

long FUN_108900670(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000108901b74();
  if (param_1 == 0) {
    __Znwm(0x118);
  }
  else {
    func_0x00010b4d80e0();
  }
  func_0x000108901e48();
  func_0x00010069445c();
  func_0x0001006946e0(&PTR_FUN_110a8d5f8);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c348cc();
  }
  func_0x0001006946ec();
  func_0x000100694718();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x21;
  func_0x00010069486c((undefined8 *)(unaff_x19 + 0x30),unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x21;
  func_0x00010069487c((undefined8 *)(unaff_x19 + 0x48),unaff_x20 + 0x48);
  lVar2 = unaff_x20 + 0x60;
  func_0x0001002a0e60();
  *(long *)(unaff_x19 + 0x60) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010069488c();
  }
  *(long *)(unaff_x19 + 0x68) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001006948a0();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010069488c();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000100694a30();
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000100694c50();
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a420();
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a424();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010069488c();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a428();
  }
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000100694d40();
  }
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a430();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a37c();
  }
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a380();
  }
  *(undefined8 *)(unaff_x19 + 200) = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a434();
  }
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000107c2a438();
  }
  *(undefined8 *)(unaff_x19 + 0xd8) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x10f) = *(undefined8 *)(unaff_x20 + 0x10f);
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x108) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x19 + 0xe8) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
  return unaff_x19;
}



/* Entry: 1089006ac; end: 10890072b;  */

void FUN_1089006ac(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901ca0();
  }
  else {
    func_0x000108901c00();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_FUN_110a8e6a8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901cc4();
  lVar1 = unaff_x20 + 0x18;
  func_0x000108901f48();
  *(long *)(unaff_x21 + 0x18) = lVar1;
  lVar1 = unaff_x20 + 0x20;
  func_0x000108901f48();
  *(long *)(unaff_x21 + 0x20) = lVar1;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000108901b94();
  }
  *(long *)(unaff_x21 + 0x28) = lVar1;
  return;
}



/* Entry: 10890072c; end: 1089007df;  */

undefined8 * FUN_10890072c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000108901fd8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901e9c();
  }
  else {
    func_0x000108901cd0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_110a8e8d8;
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901c68();
  func_0x000107c296d0();
  puVar2 = param_1 + 6;
  *puVar2 = 0;
  param_1[7] = 0;
  param_1[8] = unaff_x20;
  FUN_1088fe978(puVar2,unaff_x21 + 0x30);
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x000108901b8c();
  }
  param_1[9] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_108900568();
  }
  param_1[10] = unaff_x20;
  return param_1;
}



/* Entry: 1089007e0; end: 108900c27;  */

void FUN_1089007e0(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901c20();
  }
  else {
    func_0x000108901ac8();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_DAT_110a8e478);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901a00();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b94();
  }
  *(long *)(unaff_x21 + 0x20) = param_1;
  return;
}



/* Entry: 108900c28; end: 108900c5f;  */

undefined8 * FUN_108900c28(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  func_0x000108901b74();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901db4();
  }
  else {
    param_2 = 0x38;
    func_0x00010b4d80e0();
    param_1 = unaff_x20;
  }
  func_0x000108901e48();
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110a98b90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001089292bc();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c2a26c(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_1088b9100(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_1089291c0(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  uVar2 = *(undefined4 *)(param_3 + 0x30);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)(param_3 + 0x34);
  *(undefined4 *)(param_1 + 6) = uVar2;
  return param_1;
}



/* Entry: 108900c60; end: 108900def;  */

void FUN_108900c60(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901c20();
  }
  else {
    func_0x000108901ac8();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_DAT_110a8e4c8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901a00();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b94();
  }
  *(long *)(unaff_x21 + 0x20) = param_1;
  return;
}



/* Entry: 108900df0; end: 108900e47;  */

undefined8 * FUN_108900df0(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108901c8c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901b9c();
  }
  else {
    func_0x0001089019f4();
  }
  *param_1 = &PTR_DAT_110a8de38;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  FUN_1088fafa0();
  return param_1;
}



/* Entry: 108900e48; end: 108900ea3;  */

undefined8 * FUN_108900e48(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108901c8c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901b9c();
  }
  else {
    func_0x0001089019f4();
  }
  *param_1 = &PTR_DAT_110a8dde8;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x0001088fafc0();
  return param_1;
}



/* Entry: 108900ea4; end: 108900eff;  */

void FUN_108900ea4(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901bec();
  }
  else {
    func_0x0001089019b8();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_DAT_110a8e518);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901cc4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108901a00();
  }
  func_0x000108901e10();
  return;
}



/* Entry: 108900f00; end: 108900f4f;  */

long FUN_108900f00(long param_1)

{
  func_0x000108901c8c();
  if (param_1 == 0) {
    func_0x000108901b9c();
  }
  else {
    func_0x0001089019f4();
  }
  func_0x000108901c28(&PTR_DAT_110a8df28);
  FUN_1088fb03c();
  return param_1;
}



/* Entry: 108900f50; end: 108900fab;  */

void FUN_108900f50(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901bec();
  }
  else {
    func_0x0001089019b8();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_DAT_110a8e298);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901cc4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000108901a00();
  }
  func_0x000108901e10();
  return;
}



/* Entry: 108900fac; end: 108900ffb;  */

long FUN_108900fac(long param_1)

{
  func_0x000108901c8c();
  if (param_1 == 0) {
    func_0x000108901b9c();
  }
  else {
    func_0x0001089019f4();
  }
  func_0x000108901c28(&PTR_DAT_110a8e108);
  FUN_1088fb0a4();
  return param_1;
}



/* Entry: 108900ffc; end: 10890104b;  */

long FUN_108900ffc(long param_1)

{
  func_0x000108901c8c();
  if (param_1 == 0) {
    func_0x000108901b9c();
  }
  else {
    func_0x0001089019f4();
  }
  func_0x000108901c28(&PTR_DAT_110a8e068);
  func_0x0001088fb0b4();
  return param_1;
}



/* Entry: 10890104c; end: 1089010f7;  */

undefined8 * FUN_10890104c(undefined8 *param_1)

{
  int iVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  func_0x000108901fd8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901bec();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_DAT_110a8e978;
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001089018b4();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(unaff_x21 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 3) {
    func_0x000108901724();
  }
  else if (iVar1 == 2) {
    FUN_1089016c8();
  }
  else {
    if (iVar1 != 1) {
      return param_1;
    }
    FUN_10890164c();
  }
  param_1[2] = unaff_x20;
  return param_1;
}



/* Entry: 1089010f8; end: 108901157;  */

undefined8 * FUN_1089010f8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000108901b74();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901b9c();
  }
  else {
    param_1 = unaff_x20;
    func_0x000108901ba4();
  }
  *param_1 = &PTR_DAT_110a8e0b8;
  param_1[1] = unaff_x20;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1088fb1d8();
  return param_1;
}



/* Entry: 108901158; end: 1089011af;  */

undefined8 * FUN_108901158(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108901c8c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901b9c();
  }
  else {
    func_0x0001089019f4();
  }
  *param_1 = &PTR_DAT_110a8de88;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x0001088fb1ec();
  return param_1;
}



/* Entry: 1089011b0; end: 10890120b;  */

undefined8 * FUN_1089011b0(undefined8 *param_1)

{
  undefined8 unaff_x21;
  
  func_0x000108901c8c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901b9c();
  }
  else {
    func_0x0001089019f4();
  }
  *param_1 = &PTR_DAT_110a8df78;
  param_1[1] = unaff_x21;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  func_0x0001088fb20c();
  return param_1;
}



/* Entry: 10890120c; end: 108901277;  */

void FUN_10890120c(long param_1)

{
  ulong extraout_x8;
  long unaff_x21;
  
  func_0x000108901b80();
  if (param_1 == 0) {
    func_0x000108901db4();
  }
  else {
    func_0x000108901bf4();
  }
  func_0x000108901c5c();
  func_0x000108901c38(&PTR_DAT_110a8e798);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901cc4();
  func_0x000108901e54();
  if ((*(byte *)(unaff_x21 + 0x10) & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108901b94();
  }
  *(long *)(unaff_x21 + 0x30) = param_1;
  return;
}



/* Entry: 108901278; end: 10890132b;  */

undefined8 * FUN_108901278(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000108901fd8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x000108901e9c();
  }
  else {
    func_0x000108901cd0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110a8e9c8;
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x0001089018b4();
  }
  func_0x000108901c68();
  func_0x000107c2a414();
  puVar2 = param_1 + 6;
  func_0x000108900090();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x000108901b8c();
  }
  param_1[9] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_1088f830c();
  }
  param_1[10] = unaff_x20;
  return param_1;
}


