/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0050af08; end: 0050af13;  */

undefined ** FUN_0050af08(void)

{
  return &PTR_DAT_009fc2c8;
}



/* Entry: 0050af14; end: 0050af53;  */

void FUN_0050af14(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0050f588();
  FUN_004dfb50();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_004f3d2c(unaff_x19[6]);
  }
  func_0x0050f2b8();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 0050af54; end: 0050afdb;  */

long * FUN_0050af54(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  lVar2 = param_1[4];
  while ((int)lVar2 != 0) {
    func_0x0050ee34();
    func_0x0050ef60();
    func_0x0050f2f0();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x40);
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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



/* Entry: 0050afdc; end: 0050b047;  */

void FUN_0050afdc(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x22;
  
  func_0x0050f504();
  func_0x0050efdc();
  while (unaff_x22 != 0) {
    func_0x0050f564();
    func_0x0050f330();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x004df808(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x0050f264();
  }
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar1 & 0xfffffffffffffffe;
    uVar1 = (ulong)*(char *)(uVar2 + 0x1f);
    if ((long)uVar1 < 0) {
      uVar1 = *(ulong *)(uVar2 + 0x10);
    }
  }
  func_0x0050f354(uVar1);
  return;
}



/* Entry: 0050b048; end: 0050b04b;  */

void FUN_0050b048(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f5fc();
  FUN_004df824();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f4c8();
    if (param_1 == (ulong *)0x0) {
      FUN_004dfb94();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x004f3ba4();
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f018();
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



/* Entry: 0050b04c; end: 0050b06f;  */

undefined8 FUN_0050b04c(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 0050b070; end: 0050b083;  */

void FUN_0050b070(void)

{
  FUN_0050b04c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050b084; end: 0050b0a3;  */

undefined ** FUN_0050b084(void)

{
  return &PTR_DAT_009fc328;
}



/* Entry: 0050b0a4; end: 0050b10b;  */

long * FUN_0050b0a4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050eec8();
  if (extraout_w8 == 1) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f074();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0050f1f4();
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



/* Entry: 0050b10c; end: 0050b13b;  */

long FUN_0050b10c(long param_1)

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



/* Entry: 0050b13c; end: 0050b15f;  */

undefined8 FUN_0050b13c(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 0050b160; end: 0050b173;  */

void FUN_0050b160(void)

{
  FUN_0050b13c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050b174; end: 0050b193;  */

undefined ** FUN_0050b174(void)

{
  return &PTR_DAT_009fc378;
}



/* Entry: 0050b194; end: 0050b1fb;  */

long * FUN_0050b194(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050eec8();
  if (extraout_w8 == 1) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f074();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0050f1f4();
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



/* Entry: 0050b1fc; end: 0050b22b;  */

long FUN_0050b1fc(long param_1)

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



/* Entry: 0050b22c; end: 0050b25f;  */

long FUN_0050b22c(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0051b208();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050b260; end: 0050b273;  */

void FUN_0050b260(void)

{
  FUN_0050b22c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050b274; end: 0050b27f;  */

undefined ** FUN_0050b274(void)

{
  return &PTR_DAT_009fc3d0;
}



/* Entry: 0050b280; end: 0050b2b7;  */

void FUN_0050b280(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    FUN_0051b2a4(unaff_x19[3]);
  }
  func_0x0050f400();
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



/* Entry: 0050b2b8; end: 0050b327;  */

long * FUN_0050b2b8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050eec8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef60();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0050ef54();
    func_0x0050f110();
    func_0x0050f074();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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



/* Entry: 0050b328; end: 0050b387;  */

void FUN_0050b328(void)

{
  int iVar1;
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x004ede10();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0050f080();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 0050b388; end: 0050b38b;  */

void FUN_0050b388(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x004ef708();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_0051b640();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
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



/* Entry: 0050b38c; end: 0050b3cf;  */

long FUN_0050b38c(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00508c94();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004fbe9c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050b3d0; end: 0050b3e3;  */

void FUN_0050b3d0(void)

{
  FUN_0050b38c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050b3e4; end: 0050b3ef;  */

undefined ** FUN_0050b3e4(void)

{
  return &PTR_DAT_009fc418;
}



/* Entry: 0050b3f0; end: 0050b437;  */

void FUN_0050b3f0(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x0050f19c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00508acc(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_004fbeec(unaff_x19[4]);
    }
  }
  func_0x0050f2b8();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 0050b438; end: 0050b523;  */

long * FUN_0050b438(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    func_0x0050eff4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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



/* Entry: 0050b524; end: 0050b527;  */

void FUN_0050b524(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f4e0();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0050f424();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f67c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_00508c64();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        FUN_004fe0b4();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004fbffc();
      }
    }
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0050b528; end: 0050b54b;  */

undefined8 FUN_0050b528(undefined8 param_1)

{
  func_0x0050f184();
  return param_1;
}



/* Entry: 0050b54c; end: 0050b55f;  */

void FUN_0050b54c(void)

{
  FUN_0050b528();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050b560; end: 0050b5d3;  */

undefined ** FUN_0050b560(void)

{
  return &PTR_DAT_009fc468;
}



/* Entry: 0050b5d4; end: 0050b607;  */

long FUN_0050b5d4(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004f92f4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050b608; end: 0050b61b;  */

void FUN_0050b608(void)

{
  FUN_0050b5d4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050b61c; end: 0050b627;  */

undefined ** FUN_0050b61c(void)

{
  return &PTR_DAT_009fc4b0;
}



/* Entry: 0050b628; end: 0050b6fb;  */

void FUN_0050b628(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f574();
  }
  func_0x0050f2b8();
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



/* Entry: 0050b6fc; end: 0050b6ff;  */

void FUN_0050b6fc(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_004fd4b4();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_004f8528();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
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



/* Entry: 0050b700; end: 0050b733;  */

long FUN_0050b700(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004f92f4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050b734; end: 0050b747;  */

void FUN_0050b734(void)

{
  FUN_0050b700();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050b748; end: 0050b753;  */

undefined ** FUN_0050b748(void)

{
  return &PTR_DAT_009fc4f8;
}



/* Entry: 0050b754; end: 0050b827;  */

void FUN_0050b754(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f574();
  }
  func_0x0050f2b8();
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



/* Entry: 0050b828; end: 0050b82b;  */

void FUN_0050b828(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_004fd4b4();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_004f8528();
    }
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
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



/* Entry: 0050b82c; end: 0050b86f;  */

long FUN_0050b82c(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d4028();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050b870; end: 0050b873;  */

long FUN_0050b870(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d4028();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050b874; end: 0050b887;  */

void FUN_0050b874(void)

{
  FUN_0050b82c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050b888; end: 0050b893;  */

undefined ** FUN_0050b888(void)

{
  return &PTR_DAT_009fc548;
}



/* Entry: 0050b894; end: 0050b8df;  */

void FUN_0050b894(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x0050f19c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x0050f38c();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_004d40c0(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 0050b8e0; end: 0050b9e3;  */

long * FUN_0050b8e0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050ef9c();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x0050ee84();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x0050f620();
    func_0x0050f0d4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0050ef54();
    func_0x0050f48c();
    func_0x0050f028();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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



/* Entry: 0050b9e4; end: 0050ba73;  */

void FUN_0050b9e4(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f4e0();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x0050f424();
      if (param_1 == (ulong *)0x0) {
        func_0x0050f3c0();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0050f3d0();
      if (param_1 == (ulong *)0x0) {
        FUN_0050eba0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004d4278();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x0050ef40();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0050f018();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 0050ba74; end: 0050baf3;  */

void FUN_0050ba74(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_0050bad0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_00506710();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_0050bad0;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_0050bad0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_00506518();
    }
  }
  __ZdlPv();
LAB_0050bad0:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 0050baf4; end: 0050bb1f;  */

undefined8 FUN_0050baf4(undefined8 param_1)

{
  func_0x0050f184();
  FUN_0050bb20(param_1);
  return param_1;
}



/* Entry: 0050bb20; end: 0050bb33;  */

void FUN_0050bb20(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_0050bad0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_00506710();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_0050bad0;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0050f1c4();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_0050bad0;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_00506518();
    }
  }
  __ZdlPv();
LAB_0050bad0:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 0050bb34; end: 0050bb47;  */

void FUN_0050bb34(void)

{
  FUN_0050baf4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050bb48; end: 0050bb53;  */

undefined ** FUN_0050bb48(void)

{
  return &PTR_DAT_009fc588;
}



/* Entry: 0050bb54; end: 0050bb87;  */

void FUN_0050bb54(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_0050ba74();
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



/* Entry: 0050bb88; end: 0050bc0f;  */

long * FUN_0050bb88(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0050ef9c();
  if (param_1[2] != 0) {
    func_0x0050ef54();
    func_0x0050f2c4();
    func_0x0050f028();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x24);
  if ((*(uint *)(unaff_x20 + 0x24) & 0xfffffffe) == 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x30);
    func_0x0050f17c();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 0050bc10; end: 0050bc93;  */

long FUN_0050bc10(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  ulong uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x0050f318(*(undefined8 *)(param_1 + 0x10));
  lVar3 = 0;
  if (extraout_x8 != 0) {
    lVar3 = extraout_x9;
  }
  if (*(int *)(lVar1 + 0x24) == 3) {
    FUN_00506828(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    if (*(int *)(lVar1 + 0x24) != 2) goto LAB_0050bc64;
    FUN_00506640(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x0050ee6c();
  func_0x0050f3dc();
  lVar3 = extraout_x8_00 + 1;
LAB_0050bc64:
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



/* Entry: 0050bc94; end: 0050bc97;  */

void FUN_0050bc94(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_0050bd70;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_0050ba74();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_005068a4();
      goto LAB_0050bd70;
    }
    func_0x0050ec94();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 2) goto LAB_0050bd70;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_005066d4();
      goto LAB_0050bd70;
    }
    func_0x0050ec34();
    param_1 = unaff_x22;
  }
  unaff_x21[3] = (ulong)param_1;
LAB_0050bd70:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f018();
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



/* Entry: 0050bc98; end: 0050bd8b;  */

void FUN_0050bc98(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_0050bd70;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_0050ba74();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_005068a4();
      goto LAB_0050bd70;
    }
    func_0x0050ec94();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 2) goto LAB_0050bd70;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_005066d4();
      goto LAB_0050bd70;
    }
    func_0x0050ec34();
    param_1 = unaff_x22;
  }
  unaff_x21[3] = (ulong)param_1;
LAB_0050bd70:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f018();
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



/* Entry: 0050bd8c; end: 0050bdbf;  */

long FUN_0050bd8c(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050bdc0; end: 0050bdc3;  */

long FUN_0050bdc0(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0050bdc4; end: 0050bdd7;  */

void FUN_0050bdc4(void)

{
  FUN_0050bd8c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050bdd8; end: 0050bde3;  */

undefined ** FUN_0050bdd8(void)

{
  return &PTR_DAT_009fc5e8;
}



/* Entry: 0050bde4; end: 0050be17;  */

void FUN_0050bde4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f38c();
  }
  func_0x0050f400();
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



/* Entry: 0050be18; end: 0050be83;  */

long * FUN_0050be18(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050eec8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ee84();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0050ef54();
    func_0x0050f110();
    func_0x0050f074();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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



/* Entry: 0050be84; end: 0050bedf;  */

void FUN_0050be84(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f384();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0050f080();
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



/* Entry: 0050bee0; end: 0050bf43;  */

void FUN_0050bee0(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0050f54c();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
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



/* Entry: 0050bf44; end: 0050bf6f;  */

undefined8 FUN_0050bf44(undefined8 param_1)

{
  func_0x0050f184();
  FUN_0050bf70(param_1);
  return param_1;
}



/* Entry: 0050bf70; end: 0050bf8b;  */

void FUN_0050bf70(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050bf8c; end: 0050bf8f;  */

undefined8 FUN_0050bf8c(undefined8 param_1)

{
  func_0x0050f184();
  FUN_0050bf70(param_1);
  return param_1;
}



/* Entry: 0050bf90; end: 0050bfa3;  */

void FUN_0050bf90(void)

{
  FUN_0050bf44();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050bfa4; end: 0050bfaf;  */

undefined ** FUN_0050bfa4(void)

{
  return &PTR_DAT_009fc640;
}



/* Entry: 0050bfb0; end: 0050bfeb;  */

void FUN_0050bfb0(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050f38c();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
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



/* Entry: 0050bfec; end: 0050c077;  */

long * FUN_0050bfec(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0050eec8();
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ee84();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0050ef54();
    func_0x0050f110();
    func_0x0050f074();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x0050ef54();
    func_0x0050f48c();
    func_0x0050f074();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
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



/* Entry: 0050c078; end: 0050c0df;  */

void FUN_0050c078(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x0050f258();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0050f384();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x0050f080();
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x0050f080();
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



/* Entry: 0050c0e0; end: 0050c0e3;  */

void FUN_0050c0e0(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0050f54c();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
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



/* Entry: 0050c0e4; end: 0050c153;  */

void FUN_0050c0e4(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0050ef2c();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0050f36c();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0050f360();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x0050f54c();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x0050ef18();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0050f018();
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



/* Entry: 0050c154; end: 0050c17f;  */

long FUN_0050c154(long param_1)

{
  func_0x0050f184();
  FUN_004dfa80(param_1 + 0x10);
  return param_1;
}



/* Entry: 0050c180; end: 0050c183;  */

long FUN_0050c180(long param_1)

{
  func_0x0050f184();
  FUN_004dfa80(param_1 + 0x10);
  return param_1;
}



/* Entry: 0050c184; end: 0050c197;  */

void FUN_0050c184(void)

{
  FUN_0050c154();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050c198; end: 0050c1b7;  */

undefined ** FUN_0050c198(void)

{
  return &PTR_DAT_009fc698;
}



/* Entry: 0050c1b8; end: 0050c26b;  */

byte * FUN_0050c1b8(byte *param_1,undefined8 param_2,ulong param_3,byte *param_4)

{
  ulong *puVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  func_0x0050ef9c();
  uVar2 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar2) {
    func_0x0050ef54();
    func_0x0050f5a4();
    while (0x7f < uVar2) {
      func_0x0050f410();
    }
    param_4[-1] = (byte)uVar2;
    puVar6 = *(ulong **)(unaff_x20 + 0x18);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x0050ef54();
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
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return param_4 + iVar7;
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return param_4 + (int)param_3;
  }
  return param_4;
}



/* Entry: 0050c26c; end: 0050c2cb;  */

void FUN_0050c26c(long param_1)

{
  int iVar1;
  int extraout_w8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x0050f378();
  func_0x0054dec8();
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  func_0x0050f5e4((long)(int)param_1);
  func_0x0050f208();
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = extraout_w8 + 1;
  }
  iVar1 = iVar1 + (int)param_1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x24) = iVar1;
  return;
}



/* Entry: 0050c2cc; end: 0050c2cf;  */

void FUN_0050c2cc(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0050f120();
  FUN_004df784();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f164();
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



/* Entry: 0050c2d0; end: 0050c34f;  */

void FUN_0050c2d0(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0050f120();
  FUN_004df784();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f164();
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



/* Entry: 0050c350; end: 0050c54b;  */

void FUN_0050c350(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0050f430();
  func_0x0050f3ac(&PTR_FUN_009fb1f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x0050ef80();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x0050f3c8(unaff_x19 + 0x18);
  func_0x0050f3c8(unaff_x19 + 0x30);
  func_0x0050f3c8(unaff_x19 + 0x48);
  func_0x0050f3c8(unaff_x19 + 0x60);
  func_0x0050f3c8(unaff_x19 + 0x78);
  func_0x0050f3c8(unaff_x19 + 0x90);
  func_0x0050f3c8(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = unaff_x21;
  FUN_0050cc98((undefined8 *)(unaff_x19 + 0xc0),unaff_x20 + 0xc0);
  FUN_004dfac8(unaff_x19 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = unaff_x21;
  func_0x0050ccac((undefined8 *)(unaff_x19 + 0xf0),unaff_x20 + 0xf0);
  *(undefined4 *)(unaff_x19 + 0x150) = *(undefined4 *)(unaff_x20 + 0x150);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x0050ecf0();
  }
  *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    func_0x0050ed50();
  }
  *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = unaff_x21;
    FUN_005018b4();
  }
  *(undefined8 *)(unaff_x19 + 0x118) = uVar2;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x138) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x130) = uVar4;
  if (*(int *)(unaff_x19 + 0x150) == 0xd) {
    *(undefined4 *)(unaff_x19 + 0x148) = *(undefined4 *)(unaff_x20 + 0x148);
  }
  else if (*(int *)(unaff_x19 + 0x150) == 0xc) {
    func_0x0050eda4();
    *(undefined8 *)(unaff_x19 + 0x148) = unaff_x21;
  }
  return;
}



/* Entry: 0050c54c; end: 0050c577;  */

undefined8 FUN_0050c54c(undefined8 param_1)

{
  func_0x0050f184();
  FUN_0050c578(param_1);
  return param_1;
}



/* Entry: 0050c578; end: 0050c5d7;  */

long FUN_0050c578(long param_1)

{
  if (*(long *)(param_1 + 0x108) != 0) {
    FUN_0050bf44();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_0050c154();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x118) != 0) {
    FUN_00510d1c();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x150) != 0) {
    func_0x0050c300(param_1);
  }
  FUN_0050d1ec(param_1 + 0xf0);
  FUN_004dfae8(param_1 + 0xd8);
  FUN_0050d218(param_1 + 0xc0);
  FUN_004ddab4(param_1 + 0xa8);
  FUN_004ddab4(param_1 + 0x90);
  FUN_004ddab4(param_1 + 0x78);
  FUN_004ddab4(param_1 + 0x60);
  FUN_004ddab4(param_1 + 0x48);
  FUN_004ddab4(param_1 + 0x30);
  FUN_004ddab4(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 0050c5d8; end: 0050c5db;  */

undefined8 FUN_0050c5d8(undefined8 param_1)

{
  func_0x0050f184();
  FUN_0050c578(param_1);
  return param_1;
}



/* Entry: 0050c5dc; end: 0050c5ef;  */

void FUN_0050c5dc(void)

{
  FUN_0050c54c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050c5f0; end: 0050c5fb;  */

undefined ** FUN_0050c5f0(void)

{
  return &PTR_DAT_009fc6f8;
}



/* Entry: 0050c5fc; end: 0050cc97;  */

section * FUN_0050c5fc(section *param_1,section *param_2,ulong param_3,section *param_4)

{
  uint uVar1;
  section *psVar2;
  section *psVar3;
  section *psVar4;
  long lVar5;
  long extraout_x8;
  section *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0050ef9c();
  lVar5._0_4_ = param_1[3].offset;
  lVar5._4_4_ = param_1[3].align;
  if (lVar5 != 0) {
    func_0x0050ef54();
    param_2 = param_1;
    func_0x0050f2c4();
    func_0x0050f028();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x128) != 0) {
    func_0x0050ef54();
    param_2 = param_1;
    func_0x0050f2dc();
    func_0x0050f028();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x140) == '\x01') {
    func_0x0050ef54();
    param_2 = param_1;
    func_0x0050f48c();
    func_0x0050f074();
    param_4 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)param_2->segname + 8);
    param_1 = (section *)&MACH_HEADER.cputype;
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  iVar6 = *(int *)(unaff_x20 + 0x38);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)param_2->segname + 8);
    param_1 = (section *)((long)&MACH_HEADER.cputype + 1);
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  iVar6 = *(int *)(unaff_x20 + 0x50);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)param_2->segname + 8);
    param_1 = (section *)((long)&MACH_HEADER.cputype + 2);
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  iVar6 = *(int *)(unaff_x20 + 0x68);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)param_2->segname + 8);
    param_1 = (section *)((long)&MACH_HEADER.cputype + 3);
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  iVar6 = *(int *)(unaff_x20 + 0x80);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)param_2->segname + 8);
    param_1 = (section *)&MACH_HEADER.cpusubtype;
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  iVar6 = *(int *)(unaff_x20 + 0x98);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)param_2->segname + 8);
    param_1 = (section *)((long)&MACH_HEADER.cpusubtype + 1);
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  iVar6 = *(int *)(unaff_x20 + 0xb0);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)param_2->segname + 8);
    param_1 = (section *)((long)&MACH_HEADER.cpusubtype + 2);
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  psVar4 = param_1;
  if (*(long *)(unaff_x20 + 0x130) != 0) {
    func_0x0050ef54();
    psVar4 = (section *)&segment_command_00000020.maxprot;
    func_0x00487cbc();
    func_0x0050f028();
    param_2 = param_1;
    param_4 = psVar4;
  }
  if (*(int *)(unaff_x20 + 0x150) == 0xd) {
    func_0x0050ef54();
    psVar2 = &section_00000068;
    func_0x00487cbc();
    func_0x0050f140();
    param_4 = psVar2;
  }
  else {
    psVar2 = psVar4;
    psVar4 = param_2;
    if (*(int *)(unaff_x20 + 0x150) == 0xc) {
      psVar4 = *(section **)(unaff_x20 + 0x148);
      param_3 = (ulong)(uint)psVar4->addr;
      psVar2 = (section *)&MACH_HEADER.filetype;
      func_0x0050f17c();
      param_4 = psVar2;
    }
  }
  iVar6 = *(int *)(unaff_x20 + 200);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)psVar4->segname + 4);
    psVar2 = (section *)((long)&MACH_HEADER.filetype + 2);
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  psVar3 = psVar2;
  if (*(long *)(unaff_x20 + 0x138) != 0) {
    func_0x0050ef54();
    psVar3 = (section *)section_00000068.segname;
    func_0x00487cbc();
    func_0x0050f028();
    psVar4 = psVar2;
    param_4 = psVar3;
  }
  iVar6 = *(int *)(unaff_x20 + 0xe0);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)psVar4->segname + 4);
    psVar3 = (section *)&MACH_HEADER.ncmds;
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  psVar2 = psVar3;
  if (*(int *)(unaff_x20 + 0x144) != 0) {
    func_0x0050ef54();
    psVar2 = (section *)&section_00000068.addr;
    func_0x00487cbc();
    func_0x0050f140();
    psVar4 = psVar3;
    param_4 = psVar2;
  }
  iVar6 = *(int *)(unaff_x20 + 0xf8);
  while (iVar6 != 0) {
    func_0x0050ee34();
    param_3 = (ulong)*(dword *)((long)psVar4->segname + 4);
    psVar2 = (section *)((long)&MACH_HEADER.ncmds + 2);
    func_0x0050f17c();
    func_0x0050f2f0();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x108) + 0x14);
    psVar2 = (section *)((long)&MACH_HEADER.ncmds + 3);
    func_0x0050f17c();
    param_4 = psVar2;
  }
  if (*(char *)(unaff_x20 + 0x141) == '\x01') {
    func_0x0050ef54();
    param_4 = (section *)&section_00000068.reloff;
    func_0x00487cbc(0xa0,psVar2);
    func_0x0050f074();
    psVar2 = param_4;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x110) + 0x24);
    psVar2 = (section *)((long)&MACH_HEADER.sizeofcmds + 1);
    func_0x0050f17c();
    param_4 = psVar2;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x118) + 0x14);
    psVar2 = (section *)((long)&MACH_HEADER.sizeofcmds + 2);
    func_0x0050f17c();
    param_4 = psVar2;
  }
  if (*(char *)(unaff_x20 + 0x142) == '\x01') {
    func_0x0050ef54();
    param_4 = &section_000000b8;
    func_0x00487cbc(0xb8,psVar2);
    func_0x0050f074();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f1f4();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if ((long)(int)param_3 <= (long)(*(qword *)unaff_x19->sectname - (long)param_4)) {
      _memcpy(param_4,lVar5,param_3 & 0xffffffff);
      return (section *)((long)param_4->sectname + (long)(int)param_3);
    }
    while( true ) {
      iVar7 = ((int)*(qword *)unaff_x19->sectname - (int)param_4) + 0x10;
      iVar6 = (int)param_3;
      uVar1 = iVar6 - iVar7;
      param_3 = (ulong)uVar1;
      if (uVar1 == 0 || iVar6 < iVar7) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (section *)((long)param_4->sectname + (long)iVar6);
  }
  return param_4;
}



/* Entry: 0050cc98; end: 0050ccbb;  */

void FUN_0050cc98(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0050eedc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0050f2fc();
  }
  func_0x0050f5fc();
  FUN_004dbabc();
  FUN_004dbabc(unaff_x21 + 6,unaff_x20 + 0x30);
  FUN_004dbabc(unaff_x21 + 9,unaff_x20 + 0x48);
  FUN_004dbabc(unaff_x21 + 0xc,unaff_x20 + 0x60);
  FUN_004dbabc(unaff_x21 + 0xf,unaff_x20 + 0x78);
  FUN_004dbabc(unaff_x21 + 0x12,unaff_x20 + 0x90);
  FUN_004dbabc(unaff_x21 + 0x15,unaff_x20 + 0xa8);
  FUN_0050cc98(unaff_x21 + 0x18,unaff_x20 + 0xc0);
  FUN_004df824(unaff_x21 + 0x1b,unaff_x20 + 0xd8);
  puVar4 = unaff_x21 + 0x1e;
  func_0x0050ccac();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x21];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x0050ecf0();
        unaff_x21[0x21] = (ulong)puVar4;
      }
      else {
        FUN_0050c0e4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x22];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        func_0x0050ed50();
        unaff_x21[0x22] = (ulong)puVar4;
      }
      else {
        func_0x0050c2d0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar4 = (ulong *)unaff_x21[0x23];
      if (puVar4 == (ulong *)0x0) {
        puVar4 = unaff_x22;
        FUN_005018b4();
        unaff_x21[0x23] = (ulong)puVar4;
      }
      else {
        FUN_00510fb0();
      }
    }
  }
  if (*(ulong *)(unaff_x20 + 0x120) != 0) {
    unaff_x21[0x24] = *(ulong *)(unaff_x20 + 0x120);
  }
  if (*(ulong *)(unaff_x20 + 0x128) != 0) {
    unaff_x21[0x25] = *(ulong *)(unaff_x20 + 0x128);
  }
  if (*(ulong *)(unaff_x20 + 0x130) != 0) {
    unaff_x21[0x26] = *(ulong *)(unaff_x20 + 0x130);
  }
  if (*(ulong *)(unaff_x20 + 0x138) != 0) {
    unaff_x21[0x27] = *(ulong *)(unaff_x20 + 0x138);
  }
  if (*(char *)(unaff_x20 + 0x140) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  if (*(char *)(unaff_x20 + 0x141) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x141) = 1;
  }
  if (*(char *)(unaff_x20 + 0x142) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x142) = 1;
  }
  if (*(int *)(unaff_x20 + 0x144) != 0) {
    *(int *)((long)unaff_x21 + 0x144) = *(int *)(unaff_x20 + 0x144);
  }
  func_0x0050f0ec();
  iVar2 = *(int *)(unaff_x20 + 0x150);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[0x2a];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        puVar4 = unaff_x21;
        func_0x0050c300();
      }
      *(int *)(unaff_x21 + 0x2a) = iVar2;
    }
    if (iVar2 == 0xd) {
      *(undefined4 *)(unaff_x21 + 0x29) = *(undefined4 *)(unaff_x20 + 0x148);
    }
    else if (iVar2 == 0xc) {
      if (iVar3 == 0xc) {
        puVar4 = (ulong *)unaff_x21[0x29];
        FUN_0050bc98();
      }
      else {
        func_0x0050eda4();
        unaff_x21[0x29] = (ulong)unaff_x22;
        puVar4 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0050f018();
    if ((*puVar4 & 1) == 0) {
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



/* Entry: 0050ccbc; end: 0050ccf7;  */

long FUN_0050ccbc(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  FUN_00437b14(param_1 + 0x18);
  return param_1;
}



/* Entry: 0050ccf8; end: 0050ccfb;  */

long FUN_0050ccf8(long param_1)

{
  func_0x0050f184();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  FUN_00437b14(param_1 + 0x18);
  return param_1;
}



/* Entry: 0050ccfc; end: 0050cd0f;  */

void FUN_0050ccfc(void)

{
  FUN_0050ccbc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0050cd10; end: 0050cd1b;  */

undefined ** FUN_0050cd10(void)

{
  return &PTR_DAT_009fc740;
}



/* Entry: 0050cd1c; end: 0050cd5b;  */

void FUN_0050cd1c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x0050f588();
  FUN_0048cfec();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_004d9bf4(unaff_x19[6]);
  }
  func_0x0050f2b8();
  if ((extraout_x8 & 1) == 0) {
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



/* Entry: 0050cd5c; end: 0050ce87;  */

long * FUN_0050cd5c(long *param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  ulong extraout_x8;
  ulong uVar3;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
  func_0x0050eec8();
  if ((extraout_x8 & 1) != 0) {
    param_3 = (ulong *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    func_0x0050eff4();
    param_4 = param_1;
  }
  lVar8 = 8;
  for (uVar7 = (ulong)(*(uint *)(unaff_x20 + 0x20) &
                      ((int)*(uint *)(unaff_x20 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
      uVar7 = uVar7 - 1) {
    uVar3 = *(ulong *)(unaff_x20 + 0x18);
    param_3 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar3 & 1) != 0) {
      param_3 = (ulong *)(uVar3 + lVar8 + -1);
    }
    param_3 = (ulong *)*param_3;
    puVar4 = (ulong *)(long)*(char *)((long)param_3 + 0x17);
    if ((((long)puVar4 < 0) && (puVar4 = (ulong *)param_3[1], 0x7f < (long)puVar4)) ||
       ((*unaff_x19 - (long)param_4) + 0xe < (long)puVar4)) {
      param_4 = unaff_x19;
      func_0x0054f030();
    }
    else {
      *(undefined1 *)param_4 = 0x12;
      *(char *)((long)param_4 + 1) = (char)puVar4;
      puVar1 = (ulong *)*param_3;
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        puVar1 = param_3;
      }
      param_3 = puVar4;
      _memcpy((undefined1 *)((long)param_4 + 2),puVar1);
      param_4 = (long *)((undefined1 *)((long)param_4 + 2) + (long)puVar4);
    }
    lVar8 = lVar8 + 8;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0050f1f4();
  if ((long)param_3 < 0) {
    lVar8 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong **)(extraout_x8_00 + 0x10);
  }
  else {
    lVar8 = extraout_x8_00 + 8;
  }
  if ((long)(int)param_3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar8,(ulong)param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar5 = (int)param_3;
    uVar2 = iVar5 - iVar6;
    param_3 = (ulong *)(ulong)uVar2;
    if (uVar2 == 0 || iVar5 < iVar6) break;
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (long *)((long)param_4 + (long)iVar5);
}



/* Entry: 0050ce88; end: 0050cf83;  */

void FUN_0050ce88(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = 8;
  for (uVar3 = (ulong)(*(uint *)(param_1 + 0x20) &
                      ((int)*(uint *)(param_1 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
      uVar3 = uVar3 - 1) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    puVar1 = (ulong *)(param_1 + 0x18);
    if ((uVar2 & 1) != 0) {
      puVar1 = (ulong *)(uVar2 + lVar4 + -1);
    }
    func_0x00487c3c(*puVar1);
    lVar4 = lVar4 + 8;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_004d2ec0(*(undefined8 *)(param_1 + 0x30));
    func_0x0050f264();
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar2 = uVar3 & 0xfffffffffffffffe;
    uVar3 = (ulong)*(char *)(uVar2 + 0x1f);
    if ((long)uVar3 < 0) {
      uVar3 = *(ulong *)(uVar2 + 0x10);
    }
  }
  func_0x0050f354(uVar3);
  return;
}



/* Entry: 0050cf84; end: 0050d193;  */

void FUN_0050cf84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x0050f18c();
  }
  else {
    func_0x0050efc4();
  }
  *puVar1 = &PTR_FUN_009f9f80;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}


