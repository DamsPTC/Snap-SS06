/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088edf00; end: 1088edf23;  */

undefined8 FUN_1088edf00(undefined8 param_1)

{
  func_0x000107c34858();
  return param_1;
}



/* Entry: 1088edf24; end: 1088edf37;  */

void FUN_1088edf24(void)

{
  FUN_1088edf00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088edf38; end: 1088edf57;  */

undefined ** FUN_1088edf38(void)

{
  return &PTR_DAT_110a8bc20;
}



/* Entry: 1088edf58; end: 1088edfb7;  */

long * FUN_1088edf58(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if ((int)param_1[2] != 0) {
    func_0x0001088eedc0();
    func_0x0001088eee9c();
    func_0x0001088eeec0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
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



/* Entry: 1088edfb8; end: 1088edfef;  */

long FUN_1088edfb8(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x0001088eefac();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088edff0; end: 1088ee013;  */

undefined8 FUN_1088edff0(undefined8 param_1)

{
  func_0x000107c34858();
  return param_1;
}



/* Entry: 1088ee014; end: 1088ee027;  */

void FUN_1088ee014(void)

{
  FUN_1088edff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ee028; end: 1088ee04b;  */

undefined ** FUN_1088ee028(void)

{
  return &PTR_DAT_110a8bc68;
}



/* Entry: 1088ee04c; end: 1088ee0cf;  */

long * FUN_1088ee04c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if ((int)param_1[2] != 0) {
    func_0x0001088eedc0();
    func_0x0001088eee9c();
    func_0x0001088eeec0();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    func_0x0001088eedc0();
    func_0x0001088eeffc();
    func_0x0001088eee50();
    param_4 = param_1;
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



/* Entry: 1088ee0d0; end: 1088ee10f;  */

long FUN_1088ee0d0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x0001088eefac();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x14) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088ee110; end: 1088ee133;  */

undefined8 FUN_1088ee110(undefined8 param_1)

{
  func_0x000107c34858();
  return param_1;
}



/* Entry: 1088ee134; end: 1088ee147;  */

void FUN_1088ee134(void)

{
  FUN_1088ee110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ee148; end: 1088ee16b;  */

undefined ** FUN_1088ee148(void)

{
  return &PTR_DAT_110a8bca8;
}



/* Entry: 1088ee16c; end: 1088ee1ef;  */

long * FUN_1088ee16c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if ((int)param_1[2] != 0) {
    func_0x0001088eedc0();
    func_0x0001088eee9c();
    func_0x0001088eeec0();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    func_0x0001088eedc0();
    func_0x0001088eeffc();
    func_0x0001088eee50();
    param_4 = param_1;
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



/* Entry: 1088ee1f0; end: 1088ee22f;  */

long FUN_1088ee1f0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x0001088eefac();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x14) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088ee230; end: 1088ee253;  */

undefined8 FUN_1088ee230(undefined8 param_1)

{
  func_0x000107c34858();
  return param_1;
}



/* Entry: 1088ee254; end: 1088ee267;  */

void FUN_1088ee254(void)

{
  FUN_1088ee230();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ee268; end: 1088ee287;  */

undefined ** FUN_1088ee268(void)

{
  return &PTR_DAT_110a8bce8;
}



/* Entry: 1088ee288; end: 1088ee2e7;  */

long * FUN_1088ee288(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if ((int)param_1[2] != 0) {
    func_0x0001088eedc0();
    func_0x0001088eee9c();
    func_0x0001088eeec0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
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



/* Entry: 1088ee2e8; end: 1088ee323;  */

long FUN_1088ee2e8(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x0001088eefac();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088ee324; end: 1088ee337;  */

void FUN_1088ee324(void)

{
  func_0x000107c2a36c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ee338; end: 1088ee397;  */

long * FUN_1088ee338(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if ((int)param_1[2] != 0) {
    func_0x0001088eedc0();
    func_0x0001088eee9c();
    func_0x0001088eeec0();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
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



/* Entry: 1088ee398; end: 1088ee3cf;  */

long FUN_1088ee398(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x0001088eefac();
  lVar1 = extraout_x8;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088ee3d0; end: 1088ee3ff;  */

void FUN_1088ee3d0(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34868();
  func_0x000107c2a338();
  func_0x0001088ef1b4();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
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



/* Entry: 1088ee400; end: 1088ee487;  */

void FUN_1088ee400(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    func_0x0001088eefd0();
  }
  else {
    func_0x0001088eef2c();
  }
  *puVar1 = &PTR_FUN_110a8b048;
  puVar1[1] = param_2;
  func_0x0001088ef044();
  return;
}



/* Entry: 1088ee488; end: 1088ee4b3;  */

long * FUN_1088ee488(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001088ef194();
  }
  return param_1;
}



/* Entry: 1088ee4b4; end: 1088ee8d7;  */

void FUN_1088ee4b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088eefd0();
  }
  else {
    func_0x0001088eef2c();
  }
  *puVar1 = &PTR_FUN_110a8b048;
  puVar1[1] = param_1;
  func_0x0001088ef044();
  return;
}



/* Entry: 1088ee8d8; end: 1088ee9bb;  */

void FUN_1088ee8d8(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c34868();
  if (param_1 == 0) {
    func_0x000107c34878();
  }
  else {
    func_0x00010b4d80e0();
    param_1 = unaff_x20;
  }
  func_0x0001088ef1d8();
  func_0x0001088ef204(&PTR_FUN_110a8b318);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088eee38();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088ef084();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1088ee9bc; end: 1088eeaf3;  */

long FUN_1088ee9bc(long param_1)

{
  int iVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107c34868();
  if (param_1 == 0) {
    func_0x0001088eefd0();
  }
  else {
    func_0x0001088eefd8();
  }
  func_0x000107c34888();
  func_0x00010065ae94();
  func_0x00010065af18(&PTR_DAT_110a8b5e8);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107c3484c();
  }
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
  iVar1 = *(int *)(unaff_x21 + 0x1c);
  *(int *)(unaff_x19 + 0x1c) = iVar1;
  if (iVar1 == 2) {
    func_0x000107c2a388(unaff_x20,*(undefined8 *)(unaff_x21 + 0x10));
  }
  else {
    if (iVar1 != 1) {
      return unaff_x19;
    }
    func_0x00010065af24(unaff_x20,*(undefined8 *)(unaff_x21 + 0x10));
  }
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
  return unaff_x19;
}



/* Entry: 1088eeaf4; end: 1088eebe3;  */

void FUN_1088eeaf4(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c34868();
  if (param_1 == 0) {
    func_0x000107c34870();
  }
  else {
    param_1 = unaff_x20;
    func_0x0001088eeff4();
  }
  func_0x0001088ef1d8();
  func_0x0001088ef204(&PTR_DAT_110a8b598);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088eee38();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(unaff_x21 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x21 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088ef084();
  }
  *(long *)(unaff_x21 + 0x18) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x0001088eeb80();
  }
  *(long *)(unaff_x21 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x21 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 1088eebe4; end: 1088eec3f;  */

undefined8 * FUN_1088eebe4(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000107c3489c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088eefd0();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088eefd8();
  }
  *param_1 = &PTR_FUN_110a8b048;
  param_1[1] = unaff_x21;
  func_0x0001088ef044();
  FUN_1088ede6c();
  return param_1;
}



/* Entry: 1088eec40; end: 1088eec9b;  */

undefined8 * FUN_1088eec40(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000107c3489c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088ef034();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088ef03c();
  }
  *param_1 = &PTR_DAT_110a8b228;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x0001088ede9c();
  return param_1;
}



/* Entry: 1088eec9c; end: 1088eecf7;  */

undefined8 * FUN_1088eec9c(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000107c3489c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088eefd0();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088eefd8();
  }
  *param_1 = &PTR_DAT_110a8b278;
  param_1[1] = unaff_x21;
  func_0x0001088ef044();
  func_0x0001088edeb8();
  return param_1;
}



/* Entry: 1088eecf8; end: 1088eed53;  */

undefined8 * FUN_1088eecf8(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000107c3489c();
  if (param_1 == (undefined8 *)0x0) {
    func_0x0001088ef034();
  }
  else {
    param_1 = unaff_x21;
    func_0x0001088ef03c();
  }
  *param_1 = &PTR_DAT_110a8b1d8;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  func_0x0001088edee4();
  return param_1;
}



/* Entry: 1088eed54; end: 1088ef267;  */

void FUN_1088eed54(void)

{
  return;
}



/* Entry: 1088ef268; end: 1088ef293;  */

undefined8 FUN_1088ef268(undefined8 param_1)

{
  func_0x0001088f0254();
  FUN_1088ef294(param_1);
  return param_1;
}



/* Entry: 1088ef294; end: 1088ef2e3;  */

long FUN_1088ef294(long param_1)

{
  func_0x000107c30258(param_1 + 0x48);
  func_0x000107c30258(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x30);
  func_0x000107c282b4(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 1088ef2e4; end: 1088ef2e7;  */

undefined8 FUN_1088ef2e4(undefined8 param_1)

{
  func_0x0001088f0254();
  FUN_1088ef294(param_1);
  return param_1;
}



/* Entry: 1088ef2e8; end: 1088ef2fb;  */

void FUN_1088ef2e8(void)

{
  FUN_1088ef268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ef2fc; end: 1088ef307;  */

undefined ** FUN_1088ef2fc(void)

{
  return &PTR_DAT_110a8c058;
}



/* Entry: 1088ef308; end: 1088ef37f;  */

void FUN_1088ef308(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c282c0(param_1 + 0x18);
  func_0x000107c282c0(param_1 + 0x30);
  func_0x000107c3025c(param_1 + 0x48);
  func_0x000107c3025c(param_1 + 0x50);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x58));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(param_1 + 0x60));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x68) = 0;
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



/* Entry: 1088ef380; end: 1088ef61b;  */

long * FUN_1088ef380(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  char in_NG;
  char in_OV;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *unaff_x23;
  int iVar11;
  long lVar12;
  
  uVar6 = *(ulong *)(param_1 + 0x48) & 0xfffffffffffffffc;
  lVar7 = (long)*(char *)(uVar6 + 0x17);
  if (lVar7 < 0) {
    lVar7 = *(long *)(uVar6 + 8);
  }
  plVar5 = param_2;
  if (lVar7 != 0) {
    plVar5 = param_3;
    func_0x000107c280a0(param_3,1,uVar6,param_2);
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar7 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar7 < 0) {
    lVar7 = 0;
    if (puVar10[1] == 0) goto LAB_1088ef424;
    puVar3 = (undefined8 *)*puVar10;
    lVar7 = puVar10[1];
  }
  else {
    puVar3 = puVar10;
    if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_1088ef424;
  }
  func_0x000107c303d4(puVar3,lVar7,1,&UNK_10f4ec0b7);
  lVar7 = 2;
  plVar4 = param_3;
  func_0x000107c280a0(param_3,2,puVar10,plVar5);
  plVar5 = plVar4;
LAB_1088ef424:
  for (uVar6 = (ulong)(*(uint *)(param_1 + 0x20) &
                      ((int)*(uint *)(param_1 + 0x20) >> 0x1f ^ 0xffffffffU)); uVar6 != 0;
      uVar6 = uVar6 - 1) {
    func_0x0001088f01b0();
    puVar10 = unaff_x23;
    if (lVar7 < 0) {
      lVar7 = unaff_x23[1];
      puVar10 = (undefined8 *)*unaff_x23;
    }
    func_0x0001088f0280(puVar10);
    lVar12 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (lVar12 < 0) {
      lVar12 = unaff_x23[1];
      in_OV = SBORROW8(lVar12,0x7f);
      in_NG = lVar12 + -0x7f < 0;
      if (lVar12 < 0x80) goto LAB_1088ef470;
LAB_1088ef4a4:
      lVar7 = 3;
      plVar5 = param_3;
      func_0x0001088f025c();
    }
    else {
LAB_1088ef470:
      func_0x0001088f02cc();
      if (in_NG != in_OV) goto LAB_1088ef4a4;
      *(undefined1 *)plVar5 = 0x1a;
      *(char *)((long)plVar5 + 1) = (char)lVar12;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      func_0x0001088f019c();
      plVar5 = (long *)((long)plVar5 + lVar12);
    }
  }
  uVar6 = (ulong)(*(uint *)(param_1 + 0x38) & ((int)*(uint *)(param_1 + 0x38) >> 0x1f ^ 0xffffffffU)
                 );
  do {
    if (uVar6 == 0) {
      uVar2 = *(uint *)(param_1 + 0x10);
      plVar4 = plVar5;
      if ((uVar2 & 1) != 0) {
        plVar4 = (long *)0x5;
        func_0x0001088f0194(5,*(long *)(param_1 + 0x58),
                            *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18),plVar5);
      }
      if (*(char *)(param_1 + 0x68) == '\x01') {
        plVar5 = param_3;
        func_0x000107c28094(param_3,plVar4);
        plVar4 = (long *)0x30;
        func_0x000107c280a8(0x30,plVar5);
        func_0x0001088f0274();
      }
      plVar5 = plVar4;
      if ((uVar2 >> 1 & 1) != 0) {
        plVar5 = (long *)0x7;
        func_0x0001088f0194(7,*(long *)(param_1 + 0x60),
                            *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x18),plVar4);
      }
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        return plVar5;
      }
      uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
      uVar6 = (ulong)*(char *)(uVar8 + 0x1f);
      if ((long)uVar6 < 0) {
        lVar7 = *(long *)(uVar8 + 8);
        uVar6 = *(ulong *)(uVar8 + 0x10);
      }
      else {
        lVar7 = uVar8 + 8;
      }
      if ((long)(int)uVar6 <= *param_3 - (long)plVar5) {
        _memcpy(plVar5,lVar7,uVar6 & 0xffffffff);
        return (long *)((long)plVar5 + (long)(int)uVar6);
      }
      while( true ) {
        iVar11 = ((int)*param_3 - (int)plVar5) + 0x10;
        iVar9 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar9 - iVar11);
        if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)plVar5 + (long)iVar11);
        plVar5 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar5 + (long)iVar9);
    }
    func_0x0001088f01b0();
    puVar10 = unaff_x23;
    if (lVar7 < 0) {
      lVar7 = unaff_x23[1];
      puVar10 = (undefined8 *)*unaff_x23;
    }
    func_0x0001088f0280(puVar10);
    lVar12 = (long)*(char *)((long)unaff_x23 + 0x17);
    if (lVar12 < 0) {
      lVar12 = unaff_x23[1];
      in_OV = SBORROW8(lVar12,0x7f);
      in_NG = lVar12 + -0x7f < 0;
      if (lVar12 < 0x80) goto LAB_1088ef504;
LAB_1088ef538:
      lVar7 = 4;
      plVar5 = param_3;
      func_0x0001088f025c();
    }
    else {
LAB_1088ef504:
      func_0x0001088f02cc();
      if (in_NG != in_OV) goto LAB_1088ef538;
      *(undefined1 *)plVar5 = 0x22;
      *(char *)((long)plVar5 + 1) = (char)lVar12;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      func_0x0001088f019c();
      plVar5 = (long *)((long)plVar5 + lVar12);
    }
    uVar6 = uVar6 - 1;
  } while( true );
}



/* Entry: 1088ef61c; end: 1088ef837;  */

void FUN_1088ef61c(long param_1)

{
  uint uVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar5 = (ulong)uVar1;
  lVar4 = param_1;
  for (uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1) {
    func_0x0001088f0178();
    uVar5 = lVar4 + uVar5;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar3 = uVar5 + uVar1;
  iVar2 = (int)lVar3;
  for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    func_0x0001088f0178();
    lVar3 = lVar4 + lVar3;
    iVar2 = (int)lVar3;
  }
  func_0x0001088f0298(*(undefined8 *)(param_1 + 0x48));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c28098();
    func_0x0001088f0228();
  }
  func_0x0001088f0298(*(undefined8 *)(param_1 + 0x50));
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(lVar4 + 8);
  }
  if (lVar3 != 0) {
    func_0x000107c282a0();
    func_0x0001088f0228();
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x58));
      func_0x0001088f0228();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(param_1 + 0x60));
      func_0x0001088f0228();
    }
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 0x68) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    iVar2 = (int)lVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return;
}



/* Entry: 1088ef838; end: 1088ef863;  */

undefined8 FUN_1088ef838(undefined8 param_1)

{
  func_0x0001088f0254();
  FUN_1088ef864(param_1);
  return param_1;
}



/* Entry: 1088ef864; end: 1088ef88b;  */

/* WARNING: Possible PIC construction at 0x0001088ef878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001088ef87c) */

void FUN_1088ef864(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
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



/* Entry: 1088ef88c; end: 1088ef88f;  */

undefined8 FUN_1088ef88c(undefined8 param_1)

{
  func_0x0001088f0254();
  FUN_1088ef864(param_1);
  return param_1;
}



/* Entry: 1088ef890; end: 1088ef8a3;  */

void FUN_1088ef890(void)

{
  FUN_1088ef838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ef8a4; end: 1088ef8af;  */

undefined ** FUN_1088ef8a4(void)

{
  return &PTR_DAT_110a8c0a8;
}



/* Entry: 1088ef8b0; end: 1088efa13;  */

void FUN_1088ef8b0(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x10);
  func_0x000107c3025c(param_1 + 0x18);
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



/* Entry: 1088efa14; end: 1088efa17;  */

void FUN_1088efa14(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  
  lVar1 = param_2;
  func_0x0001088f028c(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001088f02e0();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x0001088f028c(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001088f02e0();
    }
    func_0x000107c30248(param_1 + 0x18);
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



/* Entry: 1088efa18; end: 1088efaa3;  */

void FUN_1088efa18(long param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  
  lVar1 = param_2;
  func_0x0001088f028c(*(undefined8 *)(param_2 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001088f02e0();
    }
    func_0x000107c30248(param_1 + 0x10);
  }
  func_0x0001088f028c(*(undefined8 *)(param_2 + 0x18));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      func_0x0001088f02e0();
    }
    func_0x000107c30248(param_1 + 0x18);
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



/* Entry: 1088efaa4; end: 1088efacf;  */

undefined8 FUN_1088efaa4(undefined8 param_1)

{
  func_0x0001088f0254();
  FUN_1088efad0(param_1);
  return param_1;
}



/* Entry: 1088efad0; end: 1088efb0f;  */

long FUN_1088efad0(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_1088ef838();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1088b93c4();
  }
  __ZdlPv();
  FUN_1088eff84(param_1 + 0x30);
  func_0x000107c2a318(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 1088efb10; end: 1088efb13;  */

undefined8 FUN_1088efb10(undefined8 param_1)

{
  func_0x0001088f0254();
  FUN_1088efad0(param_1);
  return param_1;
}



/* Entry: 1088efb14; end: 1088efb27;  */

void FUN_1088efb14(void)

{
  FUN_1088efaa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088efb28; end: 1088efb33;  */

undefined ** FUN_1088efb28(void)

{
  return &PTR_DAT_110a8c100;
}



/* Entry: 1088efb34; end: 1088efbab;  */

void FUN_1088efb34(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x000107c2a328(param_1 + 0x18);
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088ef8b0(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088b9464(*(undefined8 *)(param_1 + 0x50));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
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



/* Entry: 1088efbac; end: 1088efcef;  */

long * FUN_1088efbac(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  lVar4 = param_1[4];
  plVar2 = param_1;
  for (iVar8 = 0; (int)lVar4 != iVar8; iVar8 = iVar8 + 1) {
    func_0x0001088f01d0();
    plVar2 = (long *)0x1;
    func_0x0001088f0194();
    param_2 = plVar2;
  }
  plVar7 = plVar2;
  if (param_1[0xb] != 0) {
    func_0x0001088f0248();
    plVar7 = (long *)param_1[0xb];
    uVar3 = 0x10;
    func_0x000107c280a8(0x10,plVar2);
    func_0x000107c280ac(plVar7,uVar3);
    param_2 = plVar7;
  }
  if ((char)param_1[0xc] == '\x01') {
    func_0x0001088f0248();
    param_2 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar7);
    func_0x0001088f0274();
  }
  lVar4 = param_1[7];
  for (iVar8 = 0; (int)lVar4 != iVar8; iVar8 = iVar8 + 1) {
    func_0x0001088f01d0();
    param_2 = (long *)0x4;
    func_0x0001088f0194();
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = (long *)0x62;
    func_0x0001088f0194(0x62,param_1[9],*(undefined4 *)(param_1[9] + 0x20));
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = (long *)0x63;
    func_0x0001088f0194(99,param_1[10],*(undefined4 *)(param_1[10] + 0x14));
  }
  if ((param_1[1] & 1U) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
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
        iVar9 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar8 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        lVar4 = (long)param_2 + (long)iVar9;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar4);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar8);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 1088efcf0; end: 1088efdff;  */

void FUN_1088efcf0(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_w8;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(param_1 + 0x18);
  lVar6 = (long)*(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar7 = lVar6 << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    uVar5 = *puVar1;
    FUN_1088b6b30();
    lVar6 = uVar5 + lVar6;
    puVar1 = puVar1 + 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  lVar6 = lVar6 + *(int *)(param_1 + 0x38);
  iVar4 = (int)lVar6;
  puVar1 = (ulong *)(param_1 + 0x30);
  if ((uVar5 & 1) != 0) {
    puVar1 = (ulong *)(uVar5 + 7);
  }
  for (lVar7 = (long)*(int *)(param_1 + 0x38) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
    uVar5 = *puVar1;
    FUN_1088efe00();
    lVar6 = uVar5 + lVar6;
    iVar4 = (int)lVar6;
    puVar1 = puVar1 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x0001088ef990();
      func_0x0001088f0160();
      iVar4 = iVar4 + iVar3 + extraout_w8 + 2;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x50);
      func_0x0001088efe1c();
      iVar4 = iVar4 + iVar3 + 2;
    }
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar4 = ((int)LZCOUNT(*(long *)(param_1 + 0x58)) * -9 + 0x2c0U >> 6) + iVar4;
  }
  iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0x60) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar6 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar6 < 0) {
      lVar6 = *(long *)(uVar5 + 0x10);
    }
    iVar4 = (int)lVar6 + iVar4;
  }
  *(int *)(param_1 + 0x14) = iVar4;
  return;
}



/* Entry: 1088efe00; end: 1088efe37;  */

long FUN_1088efe00(long param_1)

{
  long extraout_x8;
  
  FUN_1088f58d4();
  func_0x0001088f0160();
  return param_1 + extraout_x8;
}



/* Entry: 1088efe38; end: 1088eff13;  */

void FUN_1088efe38(void)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f02b8();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  func_0x0001088eaad4(unaff_x21 + 0x18,unaff_x20 + 0x18);
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c303c4(unaff_x21 + 0x30,unaff_x20 + 0x30);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x48) == 0) {
        uVar2 = unaff_x22;
        FUN_1088f0090(unaff_x22,*(undefined8 *)(unaff_x20 + 0x48));
        *(ulong *)(unaff_x21 + 0x48) = uVar2;
      }
      else {
        FUN_1088efa18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x50) == 0) {
        FUN_1088f0114(unaff_x22,*(undefined8 *)(unaff_x20 + 0x50));
        *(ulong *)(unaff_x21 + 0x50) = unaff_x22;
      }
      else {
        FUN_1088b981c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x60) = 1;
  }
  func_0x0001088f02a4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088eff14; end: 1088eff2b;  */

void FUN_1088eff14(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    func_0x0001088f023c();
  }
  *puVar1 = &PTR_FUN_110a8bf78;
  puVar1[1] = param_2;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1088eff2c; end: 1088eff83;  */

long FUN_1088eff2c(long param_1)

{
  func_0x000107c282b4(param_1 + 0x20);
  func_0x000107c282b4(param_1 + 8);
  return param_1;
}



/* Entry: 1088eff84; end: 1088effb3;  */

long * FUN_1088eff84(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 1088effb4; end: 1088f008f;  */

void FUN_1088effb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x0001088f023c();
  }
  *puVar1 = &PTR_FUN_110a8bf78;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[3] = &DAT_11383d918;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



/* Entry: 1088f0090; end: 1088f0113;  */

undefined8 * FUN_1088f0090(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x0001088f023c();
  }
  puVar1[1] = param_1;
  *puVar1 = &PTR_FUN_110a8bf78;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b4d197c(puVar1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  lVar2 = param_2 + 0x10;
  func_0x000107c2809c(lVar2,param_1);
  puVar1[2] = lVar2;
  param_2 = param_2 + 0x18;
  func_0x000107c2809c(param_2,param_1);
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 4) = 0;
  return puVar1;
}



/* Entry: 1088f0114; end: 1088f0157;  */

undefined8 * FUN_1088f0114(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x40;
    __Znwm();
  }
  else {
    puVar4 = param_1;
    func_0x00010b4d80e0(param_1,0x40);
  }
  puVar4[1] = param_1;
  *puVar4 = &PTR_FUN_110a81020;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088bad34();
  }
  *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)puVar4 + 0x14) = 0;
  lVar2 = param_2 + 0x18;
  func_0x000107c2809c(lVar2,param_1);
  puVar4[3] = lVar2;
  uVar1 = *(uint *)(puVar4 + 2);
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_1088ba9cc(param_1,*(undefined8 *)(param_2 + 0x20));
  }
  puVar4[4] = puVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = param_1;
    FUN_1088baa5c(param_1,*(undefined8 *)(param_2 + 0x28));
  }
  puVar4[5] = puVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    FUN_1088baab8(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  puVar4[6] = param_1;
  puVar4[7] = *(undefined8 *)(param_2 + 0x38);
  return puVar4;
}



/* Entry: 1088f0158; end: 1088f02eb;  */

void FUN_1088f0158(void)

{
  return;
}



/* Entry: 1088f02ec; end: 1088f041f;  */

void FUN_1088f02ec(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f0fbc();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f1174();
    }
    break;
  default:
    goto LAB_1088f03cc;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f1f20();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f20cc();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f2244();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f23ac();
    }
  }
  __ZdlPv();
LAB_1088f03cc:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1088f0420; end: 1088f050b;  */

void FUN_1088f0420(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  lVar2 = param_3;
  func_0x0001088f2d98();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110a8c518;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x0001088f2cb0();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x19 + 2) = uVar1;
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0;
  uVar3 = *(undefined4 *)(param_3 + 0x38);
  *(undefined4 *)(unaff_x19 + 7) = uVar3;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a26c();
    uVar3 = *(undefined4 *)(unaff_x19 + 7);
  }
  unaff_x19[3] = unaff_x20;
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  *(undefined1 *)(unaff_x19 + 5) = *(undefined1 *)(param_3 + 0x28);
  unaff_x19[4] = uVar4;
  switch(uVar3) {
  case 1:
    func_0x0001088f2e64();
    FUN_1088f2804();
    break;
  case 2:
    func_0x0001088f2e64();
    func_0x0001088f2884();
    break;
  default:
    goto LAB_1088f2c54;
  case 4:
    func_0x0001088f2e64();
    func_0x0001088f28e4();
    break;
  case 5:
    func_0x0001088f2e64();
    func_0x0001088f295c();
    break;
  case 6:
    func_0x0001088f2e64();
    func_0x0001088f29bc();
    break;
  case 9:
    func_0x0001088f2e64();
    func_0x0001088f2a1c();
  }
  unaff_x19[6] = unaff_x20;
LAB_1088f2c54:
  return;
}



/* Entry: 1088f050c; end: 1088f0537;  */

undefined8 FUN_1088f050c(undefined8 param_1)

{
  func_0x0001088f2d58();
  FUN_1088f0538(param_1);
  return param_1;
}



/* Entry: 1088f0538; end: 1088f0577;  */

void FUN_1088f0538(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f0fbc();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f1174();
    }
    break;
  default:
    goto LAB_1088f03cc;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f1f20();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f20cc();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f2244();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088f2e7c();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088f03cc;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1088f23ac();
    }
  }
  __ZdlPv();
LAB_1088f03cc:
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1088f0578; end: 1088f057b;  */

undefined8 FUN_1088f0578(undefined8 param_1)

{
  func_0x0001088f2d58();
  FUN_1088f0538(param_1);
  return param_1;
}



/* Entry: 1088f057c; end: 1088f058f;  */

void FUN_1088f057c(void)

{
  FUN_1088f050c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f0590; end: 1088f05b3;  */

long FUN_1088f0590(long param_1)

{
  func_0x0001088f2d58();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10875d8b0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088f05b4; end: 1088f05ff;  */

void FUN_1088f05b4(ulong *param_1)

{
  ulong extraout_x8;
  
  if ((param_1[2] & 1) != 0) {
    FUN_1088bf358(param_1[3]);
  }
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  FUN_1088f02ec(param_1);
  func_0x0001088f2e24();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1088f0600; end: 1088f0727;  */

long * FUN_1088f0600(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0001088f2c88();
  uVar1 = *(uint *)(param_1 + 0x38);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 1) {
    lVar5 = 0x30;
  }
  else {
    if (uVar1 != 2) goto LAB_1088f0644;
    lVar5 = 0x28;
  }
  param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + lVar5);
  func_0x0001088f2d28();
  param_4 = plVar2;
LAB_1088f0644:
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = (long *)0x3;
    func_0x0001088f2d28();
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x38);
  if (*(uint *)(unaff_x20 + 0x38) - 4 < 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    func_0x0001088f2d28();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088f2ca4();
    plVar3 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar2);
    func_0x0001088f2cfc();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    func_0x0001088f2ca4();
    param_4 = (long *)(ulong)*(byte *)(unaff_x20 + 0x28);
    uVar4 = 0x40;
    func_0x000107c280a8(0x40,plVar3);
    func_0x000107c280a8(param_4,uVar4);
  }
  if (*(int *)(unaff_x20 + 0x38) == 9) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (long *)0x9;
    func_0x0001088f2d28();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2d80();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088f0728; end: 1088f0817;  */

void FUN_1088f0728(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c2a268(*(undefined8 *)(param_1 + 0x18));
  }
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
    func_0x0001088f0818(*(undefined8 *)(param_1 + 0x30));
    break;
  case 2:
    func_0x0001088f0830(*(undefined8 *)(param_1 + 0x30));
    break;
  default:
    goto LAB_1088f07f0;
  case 4:
    func_0x0001088f0848(*(undefined8 *)(param_1 + 0x30));
    break;
  case 5:
    func_0x0001088f0860(*(undefined8 *)(param_1 + 0x30));
    break;
  case 6:
    func_0x0001088f0878(*(undefined8 *)(param_1 + 0x30));
    break;
  case 9:
    func_0x0001088f0890(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x0001088f2dac();
LAB_1088f07f0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088f2d8c();
  }
  func_0x0001088f2dc4();
  return;
}



/* Entry: 1088f0818; end: 1088f08a7;  */

void FUN_1088f0818(void)

{
  func_0x0001088f10e8();
  FUN_1088f2b8c();
  return;
}



/* Entry: 1088f08a8; end: 1088f08ab;  */

void FUN_1088f08a8(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x20) != 0) {
    unaff_x21[4] = *(ulong *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 5) = 1;
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x38);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[7];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_1088f02ec();
      }
      *(int *)(unaff_x21 + 7) = iVar2;
    }
    switch(iVar2) {
    case 1:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0a9c();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      FUN_1088f2804();
      break;
    case 2:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0b04();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f2884();
      break;
    default:
      goto LAB_1088f0a80;
    case 4:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0b3c();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f28e4();
      break;
    case 5:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0ba0();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f295c();
      break;
    case 6:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0c04();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f29bc();
      break;
    case 9:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0c68();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f2a1c();
    }
    unaff_x21[6] = (ulong)param_1;
  }
LAB_1088f0a80:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f08ac; end: 1088f0a9b;  */

void FUN_1088f08ac(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x20) != 0) {
    unaff_x21[4] = *(ulong *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 5) = 1;
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x38);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[7];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_1088f02ec();
      }
      *(int *)(unaff_x21 + 7) = iVar2;
    }
    switch(iVar2) {
    case 1:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0a9c();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      FUN_1088f2804();
      break;
    case 2:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0b04();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f2884();
      break;
    default:
      goto LAB_1088f0a80;
    case 4:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0b3c();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f28e4();
      break;
    case 5:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0ba0();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f295c();
      break;
    case 6:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0c04();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f29bc();
      break;
    case 9:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0c68();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f2a1c();
    }
    unaff_x21[6] = (ulong)param_1;
  }
LAB_1088f0a80:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f0a9c; end: 1088f0b3b;  */

void FUN_1088f0a9c(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001088f2d98();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_10875d8a0(puVar1,param_2 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x19 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x19 + 0x28);
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2ea8();
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



/* Entry: 1088f0b3c; end: 1088f0ccb;  */

void FUN_1088f0b3c(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  func_0x0001088f2df4();
  FUN_1088f20b8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x0001088f2e00();
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  func_0x0001088f2c74();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f0ccc; end: 1088f0d5f;  */

void FUN_1088f0ccc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001088f2e0c();
  FUN_1088f05b4();
  FUN_1088f2f00();
  func_0x0001088f2c60();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088f2db8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[3];
    if (param_1 == (ulong *)0x0) {
      func_0x0001088f2da4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x20) != 0) {
    unaff_x21[4] = *(ulong *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 5) = 1;
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x38);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[7];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_1088f02ec();
      }
      *(int *)(unaff_x21 + 7) = iVar2;
    }
    switch(iVar2) {
    case 1:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0a9c();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      FUN_1088f2804();
      break;
    case 2:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0b04();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f2884();
      break;
    default:
      goto LAB_1088f0a80;
    case 4:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0b3c();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f28e4();
      break;
    case 5:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0ba0();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f295c();
      break;
    case 6:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0c04();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f29bc();
      break;
    case 9:
      if (iVar3 == iVar2) {
        func_0x0001088f2d30();
        func_0x0001088f0c68();
        goto LAB_1088f0a80;
      }
      func_0x0001088f2e18();
      func_0x0001088f2a1c();
    }
    unaff_x21[6] = (ulong)param_1;
  }
LAB_1088f0a80:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2cc8();
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



/* Entry: 1088f0d60; end: 1088f0db3;  */

void FUN_1088f0d60(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x19;
  
  func_0x0001088f2d98();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110a8c568;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x0001088f2cb0();
  }
  FUN_1088f257c(unaff_x19 + 2);
  *(undefined4 *)(unaff_x19 + 5) = 0;
  return;
}



/* Entry: 1088f0db4; end: 1088f0ddf;  */

long FUN_1088f0db4(long param_1)

{
  func_0x0001088f2d58();
  FUN_1088f259c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088f0de0; end: 1088f0de3;  */

long FUN_1088f0de0(long param_1)

{
  func_0x0001088f2d58();
  FUN_1088f259c(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088f0de4; end: 1088f0df7;  */

void FUN_1088f0de4(void)

{
  FUN_1088f0db4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f0df8; end: 1088f0e03;  */

undefined ** FUN_1088f0df8(void)

{
  return &PTR_DAT_110a8c600;
}



/* Entry: 1088f0e04; end: 1088f0e37;  */

void FUN_1088f0e04(long param_1)

{
  ulong *puVar1;
  
  FUN_1088f27dc(param_1 + 0x10);
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



/* Entry: 1088f0e38; end: 1088f0eab;  */

long * FUN_1088f0e38(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f2c88();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x0001088f2ba8();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001088f2c98();
    func_0x0001088f2de8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2d80();
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



/* Entry: 1088f0eac; end: 1088f0f0b;  */

long FUN_1088f0eac(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001088f2be8();
  while (unaff_x22 != 0) {
    FUN_1088f0f0c(*unaff_x21);
    func_0x0001088f2e30();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088f2d8c();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1088f0f0c; end: 1088f0f23;  */

void FUN_1088f0f0c(void)

{
  func_0x0001089069c0();
  FUN_1088f2b8c();
  return;
}



/* Entry: 1088f0f24; end: 1088f0f27;  */

void FUN_1088f0f24(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001088f2d98();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1088f0f60();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2ea8();
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



/* Entry: 1088f0f28; end: 1088f0f5f;  */

void FUN_1088f0f28(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0001088f2d98();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1088f0f60();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2ea8();
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



/* Entry: 1088f0f60; end: 1088f0f6f;  */

void FUN_1088f0f60(long *param_1,long param_2)

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



/* Entry: 1088f0f70; end: 1088f0f9f;  */

void FUN_1088f0f70(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001088f2e0c();
  FUN_1088f0e04();
  FUN_1088f2f00();
  func_0x0001088f2d98();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_1088f0f60();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f2ea8();
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



/* Entry: 1088f0fa0; end: 1088f0fbb;  */

undefined1  [16] FUN_1088f0fa0(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 1088f0fbc; end: 1088f0fef;  */

long FUN_1088f0fbc(long param_1)

{
  func_0x0001088f2d58();
  func_0x000107c30258(param_1 + 0x28);
  FUN_10875d8b0(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088f0ff0; end: 1088f1003;  */

void FUN_1088f0ff0(void)

{
  FUN_1088f0fbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


