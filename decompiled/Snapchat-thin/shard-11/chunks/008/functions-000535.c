/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108920ae4; end: 108920b13;  */

long * FUN_108920ae4(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_108908dd0();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x0001000681a0(plVar1);
  }
  return plVar1;
}



/* Entry: 108920b14; end: 108920b27;  */

void FUN_108920b14(void)

{
  FUN_108920ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108920b28; end: 108920b33;  */

undefined ** FUN_108920b28(void)

{
  return &PTR_DAT_110a971a8;
}



/* Entry: 108920b34; end: 108920b73;  */

void FUN_108920b34(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000108924d80();
  FUN_1086eac18();
  if ((unaff_x19[2] & 1) != 0) {
    FUN_108908e1c(unaff_x19[6]);
  }
  func_0x000108924b44();
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



/* Entry: 108920b74; end: 108920bfb;  */

long * FUN_108920b74(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  lVar2 = param_1[4];
  while ((int)lVar2 != 0) {
    func_0x000108924708();
    func_0x000108924848();
    func_0x000108924bac();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x40);
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
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



/* Entry: 108920bfc; end: 108920c67;  */

void FUN_108920bfc(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x22;
  
  func_0x000108924d8c();
  func_0x00010892489c();
  while (unaff_x22 != 0) {
    func_0x000108924df4();
    func_0x000108924be4();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088f1814(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x000108924b38();
  }
  uVar1 = *(ulong *)(unaff_x19 + 8);
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar1 & 0xfffffffffffffffe;
    uVar1 = (ulong)*(char *)(uVar2 + 0x1f);
    if ((long)uVar1 < 0) {
      uVar1 = *(ulong *)(uVar2 + 0x10);
    }
  }
  func_0x000108924bf0(uVar1);
  return;
}



/* Entry: 108920c68; end: 108920c6b;  */

void FUN_108920c68(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924e94();
  func_0x000107c2a394();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924d5c();
    if (param_1 == (ulong *)0x0) {
      FUN_1088f2a98();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x000108908c94();
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108920c6c; end: 108920c9b;  */

void FUN_108920c6c(ulong *param_1,ulong *param_2)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_108920b34();
  func_0x000108924aec();
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924e94();
  func_0x000107c2a394();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924d5c();
    if (param_1 == (ulong *)0x0) {
      FUN_1088f2a98();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      func_0x000108908c94();
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108920c9c; end: 108920cbf;  */

undefined8 FUN_108920c9c(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 108920cc0; end: 108920cd3;  */

void FUN_108920cc0(void)

{
  FUN_108920c9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108920cd4; end: 108920cf3;  */

undefined ** FUN_108920cd4(void)

{
  return &PTR_DAT_110a97208;
}



/* Entry: 108920cf4; end: 108920d5b;  */

long * FUN_108920cf4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924780();
  if (extraout_w8 == 1) {
    func_0x00010892483c();
    func_0x000108924b84();
    func_0x000108924938();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108924af8();
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



/* Entry: 108920d5c; end: 108920d8b;  */

long FUN_108920d5c(long param_1)

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



/* Entry: 108920d8c; end: 108920dbb;  */

void FUN_108920d8c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x000108920ce0();
  func_0x000108924aec();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 108920dbc; end: 108920ddf;  */

undefined8 FUN_108920dbc(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 108920de0; end: 108920e27;  */

undefined8 * FUN_108920de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110a94e20;
  param_1[1] = param_2;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_10891c3e0(param_1,param_3);
  return param_1;
}



/* Entry: 108920e28; end: 108920e3b;  */

void FUN_108920e28(void)

{
  FUN_108920dbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108920e3c; end: 108920e5b;  */

undefined ** FUN_108920e3c(void)

{
  return &PTR_DAT_110a97258;
}



/* Entry: 108920e5c; end: 108920ec3;  */

long * FUN_108920e5c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924780();
  if (extraout_w8 == 1) {
    func_0x00010892483c();
    func_0x000108924b84();
    func_0x000108924938();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x000108924af8();
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



/* Entry: 108920ec4; end: 108920ef3;  */

long FUN_108920ec4(long param_1)

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



/* Entry: 108920ef4; end: 108920f23;  */

void FUN_108920ef4(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x000108920e48();
  func_0x000108924aec();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
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



/* Entry: 108920f24; end: 108920f7f;  */

void FUN_108920f24(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34a2c();
  func_0x000107c34a44(&PTR_DAT_110a95c80);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c34a60();
    FUN_108904da8();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  *(undefined4 *)(unaff_x19 + 0x20) = *(undefined4 *)(unaff_x20 + 0x20);
  return;
}



/* Entry: 108920f80; end: 108920fab;  */

undefined8 FUN_108920f80(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108920fac(param_1);
  return param_1;
}



/* Entry: 108920fac; end: 108920fdb;  */

void FUN_108920fac(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c30588();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108920fdc; end: 108920fe7;  */

undefined ** FUN_108920fdc(void)

{
  return &PTR_DAT_110a972b0;
}



/* Entry: 108920fe8; end: 10892101f;  */

void FUN_108920fe8(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b51f4e4(unaff_x19[3]);
  }
  func_0x000108924c94();
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



/* Entry: 108921020; end: 10892108f;  */

long * FUN_108921020(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924780();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924848();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010892483c();
    func_0x0001089249f8();
    func_0x000108924938();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
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



/* Entry: 108921090; end: 1089210ef;  */

void FUN_108921090(void)

{
  int iVar1;
  ulong extraout_x8;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    func_0x000108903050();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108924944();
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



/* Entry: 1089210f0; end: 1089210f3;  */

void FUN_1089210f0(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_108904da8();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x000107c3058c();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 1089210f4; end: 10892115b;  */

void FUN_1089210f4(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x19;
  uint unaff_w22;
  
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a960e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000108924e18();
  if ((unaff_w22 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924ca4();
    FUN_108924448();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((unaff_w22 >> 1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924e0c();
    FUN_108912428();
  }
  *(undefined8 *)(unaff_x19 + 0x20) = param_1;
  return;
}



/* Entry: 10892115c; end: 108921187;  */

undefined8 FUN_10892115c(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108921188(param_1);
  return param_1;
}



/* Entry: 108921188; end: 1089211b7;  */

void FUN_108921188(long param_1)

{
  long unaff_x19;
  
  func_0x000107c34a54();
  if (param_1 != 0) {
    FUN_10891e3a4();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_108910968();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089211b8; end: 1089211cb;  */

void FUN_1089211b8(void)

{
  FUN_10892115c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089211cc; end: 1089211d7;  */

undefined ** FUN_1089211cc(void)

{
  return &PTR_DAT_110a972f8;
}



/* Entry: 1089211d8; end: 10892121f;  */

void FUN_1089211d8(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000108924a84();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010891e198(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1089109b8(unaff_x19[4]);
    }
  }
  func_0x000108924b44();
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



/* Entry: 108921220; end: 10892130b;  */

long * FUN_108921220(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    func_0x0001089248b4();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
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



/* Entry: 10892130c; end: 10892130f;  */

void FUN_10892130c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924f18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10891e334();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        FUN_108912428();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_108910ad4();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108921310; end: 10892133f;  */

void FUN_108921310(ulong *param_1,ulong *param_2)

{
  undefined1 uVar1;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  uVar1 = param_2 == param_1;
  if ((bool)uVar1) {
    return;
  }
  func_0x000107c34a38();
  FUN_1089211d8();
  func_0x000108924aec();
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)uVar1) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924f18();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10891e334();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        FUN_108912428();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_108910ad4();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108921340; end: 108921343;  */

undefined1  [16] FUN_108921340(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x28);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x28);
  return auVar7;
}



/* Entry: 108921344; end: 108921367;  */

undefined8 FUN_108921344(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 108921368; end: 10892137b;  */

void FUN_108921368(void)

{
  FUN_108921344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10892137c; end: 1089213eb;  */

undefined ** FUN_10892137c(void)

{
  return &PTR_DAT_110a97348;
}



/* Entry: 1089213ec; end: 10892141b;  */

void FUN_1089213ec(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x000108921388();
  func_0x000108924aec();
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



/* Entry: 10892141c; end: 10892144f;  */

long FUN_10892141c(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a514();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108921450; end: 108921463;  */

void FUN_108921450(void)

{
  FUN_10892141c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108921464; end: 10892146f;  */

undefined ** FUN_108921464(void)

{
  return &PTR_DAT_110a97390;
}



/* Entry: 108921470; end: 108921543;  */

void FUN_108921470(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924dfc();
  }
  func_0x000108924b44();
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



/* Entry: 108921544; end: 108921547;  */

void FUN_108921544(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x000107c2a558();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010890d088();
    }
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108921548; end: 108921573;  */

undefined8 FUN_108921548(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108921574(param_1);
  return param_1;
}



/* Entry: 108921574; end: 1089215a3;  */

void FUN_108921574(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a514();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089215a4; end: 1089215af;  */

undefined ** FUN_1089215a4(void)

{
  return &PTR_DAT_110a973d8;
}



/* Entry: 1089215b0; end: 108921683;  */

void FUN_1089215b0(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924dfc();
  }
  func_0x000108924b44();
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



/* Entry: 108921684; end: 108921687;  */

void FUN_108921684(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x000107c2a558();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010890d088();
    }
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108921688; end: 1089216b7;  */

void FUN_108921688(ulong *param_1,ulong *param_2)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_1089215b0();
  func_0x000108924aec();
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x000107c2a558();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      func_0x00010890d088();
    }
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 1089216b8; end: 108921723;  */

void FUN_1089216b8(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34a2c();
  func_0x000107c34a44(&PTR_FUN_110a958c0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c34a60();
    func_0x000107c2a26c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    FUN_1088db014();
  }
  func_0x000108924f6c();
  return;
}



/* Entry: 108921724; end: 10892174f;  */

undefined8 FUN_108921724(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108921750(param_1);
  return param_1;
}



/* Entry: 108921750; end: 10892177f;  */

void FUN_108921750(long param_1)

{
  long unaff_x19;
  
  func_0x000107c34a54();
  if (param_1 != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_1088b8278();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108921780; end: 108921783;  */

undefined8 FUN_108921780(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108921750(param_1);
  return param_1;
}



/* Entry: 108921784; end: 108921797;  */

void FUN_108921784(void)

{
  FUN_108921724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108921798; end: 1089217a3;  */

undefined ** FUN_108921798(void)

{
  return &PTR_DAT_110a97428;
}



/* Entry: 1089217a4; end: 1089217ef;  */

void FUN_1089217a4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x000108924a84();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x000108924c40();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_1088b8314(*(undefined8 *)(unaff_x19 + 0x20));
    }
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1089217f0; end: 1089218f3;  */

long * FUN_1089217f0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x00010892473c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x000108924ed0();
    func_0x0001089249ac();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010892483c();
    func_0x000108924d20();
    func_0x000108924904();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
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



/* Entry: 1089218f4; end: 1089218f7;  */

void FUN_1089218f4(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        FUN_1088db014();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088b84d0();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089218f8; end: 108921987;  */

void FUN_1089218f8(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        FUN_1088db014();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088b84d0();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 108921988; end: 1089219b7;  */

void FUN_108921988(ulong *param_1,ulong *param_2)

{
  undefined1 uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  uVar1 = param_2 == param_1;
  if ((bool)uVar1) {
    return;
  }
  func_0x000107c34a38();
  FUN_1089217a4();
  func_0x000108924aec();
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  func_0x000108924d68();
  if (!(bool)uVar1) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000108924cd0();
      if (param_1 == (ulong *)0x0) {
        func_0x000108924c68();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x000108924c70();
      if (param_1 == (ulong *)0x0) {
        FUN_1088db014();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088b84d0();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1089219b8; end: 1089219c7;  */

undefined1  [16] FUN_1089219b8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c34a28();
  puVar1 = param_1 + 0x18;
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



/* Entry: 1089219c8; end: 108921a47;  */

void FUN_1089219c8(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108921a24;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10891ad20();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_108921a24;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108921a24;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10891ab28();
    }
  }
  __ZdlPv();
LAB_108921a24:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 108921a48; end: 108921a73;  */

undefined8 FUN_108921a48(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108921a74(param_1);
  return param_1;
}



/* Entry: 108921a74; end: 108921a87;  */

void FUN_108921a74(long param_1)

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
      func_0x000108924aac();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_108921a24;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10891ad20();
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) != 2) goto LAB_108921a24;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000108924aac();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_108921a24;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10891ab28();
    }
  }
  __ZdlPv();
LAB_108921a24:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 108921a88; end: 108921a9b;  */

void FUN_108921a88(void)

{
  FUN_108921a48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108921a9c; end: 108921aa7;  */

undefined ** FUN_108921a9c(void)

{
  return &PTR_DAT_110a97468;
}



/* Entry: 108921aa8; end: 108921adb;  */

void FUN_108921aa8(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1089219c8();
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



/* Entry: 108921adc; end: 108921b63;  */

long * FUN_108921adc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x000108924874();
  if (param_1[2] != 0) {
    func_0x00010892483c();
    func_0x000108924b84();
    func_0x000108924904();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x24);
  if ((*(uint *)(unaff_x20 + 0x24) & 0xfffffffe) == 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x30);
    func_0x000108924a7c();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
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



/* Entry: 108921b64; end: 108921be7;  */

long FUN_108921b64(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  ulong uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000108924bcc(*(undefined8 *)(param_1 + 0x10));
  lVar3 = 0;
  if (extraout_x8 != 0) {
    lVar3 = extraout_x9;
  }
  if (*(int *)(lVar1 + 0x24) == 3) {
    FUN_10891ae38(*(undefined8 *)(param_1 + 0x18));
  }
  else {
    if (*(int *)(lVar1 + 0x24) != 2) goto LAB_108921bb8;
    FUN_10891ac50(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x000108924724();
  func_0x000108924c7c();
  lVar3 = extraout_x8_00 + 1;
LAB_108921bb8:
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



/* Entry: 108921be8; end: 108921beb;  */

void FUN_108921be8(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_108921cc4;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_1089219c8();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_10891aeb4();
      goto LAB_108921cc4;
    }
    func_0x000108924558();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 2) goto LAB_108921cc4;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_10891ace4();
      goto LAB_108921cc4;
    }
    func_0x0001089244fc();
    param_1 = unaff_x22;
  }
  unaff_x21[3] = (ulong)param_1;
LAB_108921cc4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108921bec; end: 108921cdf;  */

void FUN_108921bec(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000108924794();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000108924bb8();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto LAB_108921cc4;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_1089219c8();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_10891aeb4();
      goto LAB_108921cc4;
    }
    func_0x000108924558();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 2) goto LAB_108921cc4;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[3];
      FUN_10891ace4();
      goto LAB_108921cc4;
    }
    func_0x0001089244fc();
    param_1 = unaff_x22;
  }
  unaff_x21[3] = (ulong)param_1;
LAB_108921cc4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108921ce0; end: 108921d13;  */

long FUN_108921ce0(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108921d14; end: 108921d17;  */

long FUN_108921d14(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 108921d18; end: 108921d2b;  */

void FUN_108921d18(void)

{
  FUN_108921ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108921d2c; end: 108921d37;  */

undefined ** FUN_108921d2c(void)

{
  return &PTR_DAT_110a974c8;
}



/* Entry: 108921d38; end: 108921d6b;  */

void FUN_108921d38(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924c40();
  }
  func_0x000108924c94();
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



/* Entry: 108921d6c; end: 108921dd7;  */

long * FUN_108921d6c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924780();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010892473c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010892483c();
    func_0x0001089249f8();
    func_0x000108924938();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
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



/* Entry: 108921dd8; end: 108921e33;  */

void FUN_108921dd8(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924c38();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108924944();
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



/* Entry: 108921e34; end: 108921e37;  */

void FUN_108921e34(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108924ddc();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108921e38; end: 108921e9b;  */

void FUN_108921e38(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108924ddc();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108921e9c; end: 108921ecb;  */

void FUN_108921e9c(ulong *param_1,ulong *param_2)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_108921d38();
  func_0x000108924aec();
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108924ddc();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 108921ecc; end: 108921edb;  */

undefined1  [16] FUN_108921ecc(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000107c34a28();
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



/* Entry: 108921edc; end: 108921f07;  */

undefined8 FUN_108921edc(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108921f08(param_1);
  return param_1;
}



/* Entry: 108921f08; end: 108921f23;  */

void FUN_108921f08(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108921f24; end: 108921f27;  */

undefined8 FUN_108921f24(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108921f08(param_1);
  return param_1;
}



/* Entry: 108921f28; end: 108921f3b;  */

void FUN_108921f28(void)

{
  FUN_108921edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108921f3c; end: 108921f47;  */

undefined ** FUN_108921f3c(void)

{
  return &PTR_DAT_110a97520;
}



/* Entry: 108921f48; end: 108921f83;  */

void FUN_108921f48(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924c40();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 108921f84; end: 10892200f;  */

long * FUN_108921f84(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924780();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010892473c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x00010892483c();
    func_0x0001089249f8();
    func_0x000108924938();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x00010892483c();
    func_0x000108924d20();
    func_0x000108924938();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924af8();
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



/* Entry: 108922010; end: 108922077;  */

void FUN_108922010(int param_1)

{
  ulong extraout_x8;
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000108924c38();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108924944();
  }
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    func_0x000108924944();
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



/* Entry: 108922078; end: 10892207b;  */

void FUN_108922078(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108924ddc();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 10892207c; end: 1089220eb;  */

void FUN_10892207c(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x000108924ddc();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    *(int *)(unaff_x21 + 0x24) = *(int *)(unaff_x20 + 0x24);
  }
  func_0x0001089247f0();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001089248e8();
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



/* Entry: 1089220ec; end: 108922117;  */

long FUN_1089220ec(long param_1)

{
  func_0x000107c34a34();
  FUN_1088f2648(param_1 + 0x10);
  return param_1;
}



/* Entry: 108922118; end: 10892211b;  */

long FUN_108922118(long param_1)

{
  func_0x000107c34a34();
  FUN_1088f2648(param_1 + 0x10);
  return param_1;
}



/* Entry: 10892211c; end: 10892212f;  */

void FUN_10892211c(void)

{
  FUN_1089220ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


