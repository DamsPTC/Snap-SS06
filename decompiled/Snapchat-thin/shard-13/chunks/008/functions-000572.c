/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae0dc18; end: 10ae0dcc7;  */

long * FUN_10ae0dc18(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010ae104ec();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010ae104cc();
    func_0x00010ae10798();
    func_0x00010ae10778();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010ae104cc();
    func_0x00010ae107a8();
    func_0x00010ae10778();
  }
  lVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010ae104cc();
    lVar2 = 0x19;
    func_0x000107c280a8(0x19,param_1);
    func_0x00010ae10778();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010ae104cc();
    func_0x000107c280a8(0x21,lVar2);
    func_0x00010ae10778();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10658();
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



/* Entry: 10ae0dcc8; end: 10ae0dd5f;  */

long FUN_10ae0dcc8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x30) = (int)lVar1;
  return lVar1;
}



/* Entry: 10ae0dd60; end: 10ae0dd83;  */

undefined8 FUN_10ae0dd60(undefined8 param_1)

{
  func_0x00010ae105bc();
  return param_1;
}



/* Entry: 10ae0dd84; end: 10ae0dd87;  */

undefined8 FUN_10ae0dd84(undefined8 param_1)

{
  func_0x00010ae105bc();
  return param_1;
}



/* Entry: 10ae0dd88; end: 10ae0dd9b;  */

void FUN_10ae0dd88(void)

{
  FUN_10ae0dd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0dd9c; end: 10ae0ddbb;  */

undefined ** FUN_10ae0dd9c(void)

{
  return &PTR_DAT_110c78ff8;
}



/* Entry: 10ae0ddbc; end: 10ae0de2b;  */

long * FUN_10ae0ddbc(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010ae104ec();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010ae104cc();
    func_0x00010ae10798();
    func_0x00010ae10778();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010ae104cc();
    func_0x00010ae107a8();
    func_0x00010ae10778();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10658();
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



/* Entry: 10ae0de2c; end: 10ae0de73;  */

long FUN_10ae0de2c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10ae0de74; end: 10ae0de9f;  */

long FUN_10ae0de74(long param_1)

{
  func_0x00010ae105bc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0dea0; end: 10ae0dea3;  */

long FUN_10ae0dea0(long param_1)

{
  func_0x00010ae105bc();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ae0dea4; end: 10ae0deb7;  */

void FUN_10ae0dea4(void)

{
  FUN_10ae0de74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0deb8; end: 10ae0dec3;  */

undefined ** FUN_10ae0deb8(void)

{
  return &PTR_DAT_110c79030;
}



/* Entry: 10ae0dec4; end: 10ae0def3;  */

void FUN_10ae0dec4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae10850();
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



/* Entry: 10ae0def4; end: 10ae0dfa3;  */

long * FUN_10ae0def4(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar4 = param_3;
  func_0x00010ae106b8();
  func_0x00010ae106f0(param_1[2]);
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10ae0df4c;
  }
  else if ((int)param_2 == 0) goto LAB_10ae0df4c;
  param_4 = (long *)&UNK_10f6c3bd9;
  func_0x00010ae10670();
  func_0x00010ae10628(param_3,1);
  param_1 = param_3;
  unaff_x20 = param_3;
LAB_10ae0df4c:
  plVar2 = param_1;
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    func_0x00010ae1083c();
    plVar2 = (long *)0x10;
    func_0x000107c280a8(0x10,param_1);
    func_0x00010ae10830();
    unaff_x20 = plVar2;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010ae10658();
  if ((long)plVar4 < 0) {
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010ae108a8();
  if (*plVar2 - (long)param_4 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)plVar4);
}



/* Entry: 10ae0dfa4; end: 10ae0e027;  */

void FUN_10ae0dfa4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long lVar3;
  long extraout_x9;
  
  lVar3 = param_1;
  func_0x00010ae106c4(*(undefined8 *)(param_1 + 0x10));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar3 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    func_0x000107c282a0();
    iVar1 = (int)lVar3 + 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae10868();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  return;
}



/* Entry: 10ae0e028; end: 10ae0e02b;  */

void FUN_10ae0e028(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae10614();
  func_0x00010ae106ac(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10548();
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



/* Entry: 10ae0e02c; end: 10ae0e08b;  */

void FUN_10ae0e02c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010ae10614();
  func_0x00010ae106ac(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10548();
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



/* Entry: 10ae0e08c; end: 10ae0e0ef;  */

void FUN_10ae0e08c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x100000000;
  *(undefined **)(param_1 + 0x28) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0x100000000;
  *(undefined8 *)(param_1 + 0x38) = 0x100000000;
  *(undefined **)(param_1 + 0x48) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x60) = 0x100000000;
  *(undefined8 *)(param_1 + 0x58) = 0x100000000;
  *(undefined **)(param_1 + 0x68) = &DAT_10e5b4a18;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  *(undefined **)(param_1 + 0x78) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x80) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x88) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x90) = &DAT_11383d918;
  *(undefined **)(param_1 + 0x98) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xa0) = &DAT_11383d918;
  *(undefined **)(param_1 + 0xa8) = &DAT_11383d918;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}



/* Entry: 10ae0e0f0; end: 10ae0e237;  */

void FUN_10ae0e0f0(void)

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
  
  func_0x00010ae10720();
  func_0x00010ae10694(&PTR_FUN_110c78d80);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010ae104b0();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x0001098d536c(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x40) = 0x100000000;
  *(undefined8 *)(unaff_x19 + 0x38) = 0x100000000;
  *(undefined **)(unaff_x19 + 0x48) = &DAT_10e5b4a18;
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  FUN_10ae10260((undefined8 *)(unaff_x19 + 0x38),unaff_x20 + 0x38);
  func_0x000105991a48(unaff_x19 + 0x58);
  lVar2 = unaff_x20 + 0x78;
  func_0x00010ae1068c();
  *(long *)(unaff_x19 + 0x78) = lVar2;
  lVar2 = unaff_x20 + 0x80;
  func_0x00010ae1068c();
  *(long *)(unaff_x19 + 0x80) = lVar2;
  lVar2 = unaff_x20 + 0x88;
  func_0x00010ae1068c();
  *(long *)(unaff_x19 + 0x88) = lVar2;
  lVar2 = unaff_x20 + 0x90;
  func_0x00010ae1068c();
  *(long *)(unaff_x19 + 0x90) = lVar2;
  lVar2 = unaff_x20 + 0x98;
  func_0x00010ae1068c();
  *(long *)(unaff_x19 + 0x98) = lVar2;
  lVar2 = unaff_x20 + 0xa0;
  func_0x00010ae1068c();
  *(long *)(unaff_x19 + 0xa0) = lVar2;
  lVar2 = unaff_x20 + 0xa8;
  func_0x00010ae1068c();
  *(long *)(unaff_x19 + 0xa8) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_10ae101f4();
  }
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x000105992a88();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar5;
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
  return;
}



/* Entry: 10ae0e238; end: 10ae0e263;  */

undefined8 FUN_10ae0e238(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0e264(param_1);
  return param_1;
}



/* Entry: 10ae0e264; end: 10ae0e2db;  */

long FUN_10ae0e264(long param_1)

{
  func_0x000107c30258(param_1 + 0x78);
  func_0x000107c30258(param_1 + 0x80);
  func_0x000107c30258(param_1 + 0x88);
  func_0x000107c30258(param_1 + 0x90);
  func_0x000107c30258(param_1 + 0x98);
  func_0x000107c30258(param_1 + 0xa0);
  func_0x000107c30258(param_1 + 0xa8);
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_10ae0dbb4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x00010bce8004();
  }
  __ZdlPv();
  func_0x000105991a90(param_1 + 0x58);
  FUN_10ae0fe40(param_1 + 0x38);
  func_0x0001098d53b8(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10ae0e2dc; end: 10ae0e2df;  */

undefined8 FUN_10ae0e2dc(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0e264(param_1);
  return param_1;
}



/* Entry: 10ae0e2e0; end: 10ae0e2f3;  */

void FUN_10ae0e2e0(void)

{
  FUN_10ae0e238();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0e2f4; end: 10ae0e2ff;  */

undefined ** FUN_10ae0e2f4(void)

{
  return &PTR_DAT_110c79068;
}



/* Entry: 10ae0e300; end: 10ae0e3cb;  */

void FUN_10ae0e300(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  func_0x0001098d55f0(param_1 + 0x18);
  if (*(int *)(param_1 + 0x3c) != 1) {
    func_0x000107c30320(param_1 + 0x38,0x1000010000c,0);
  }
  func_0x000105991b74(param_1 + 0x58);
  func_0x000107c3025c(param_1 + 0x78);
  func_0x000107c3025c(param_1 + 0x80);
  func_0x000107c3025c(param_1 + 0x88);
  func_0x000107c3025c(param_1 + 0x90);
  func_0x000107c3025c(param_1 + 0x98);
  func_0x000107c3025c(param_1 + 0xa0);
  func_0x000107c3025c(param_1 + 0xa8);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010ae0dbfc(*(undefined8 *)(param_1 + 0xb0));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bce80d8(*(undefined8 *)(param_1 + 0xb8));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
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



/* Entry: 10ae0e3cc; end: 10ae0e9c3;  */

undefined8 * FUN_10ae0e3cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x8;
  undefined8 *unaff_x22;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint *puStack_80;
  long lStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar3 = param_1;
  puVar8 = param_2;
  func_0x00010ae106f0(param_1[0xf]);
  if ((long)puVar8 < 0) {
    if (unaff_x22[1] != 0) goto LAB_10ae0e41c;
  }
  else if ((int)puVar8 != 0) {
LAB_10ae0e41c:
    func_0x00010ae10670();
    puVar3 = param_3;
    func_0x00010ae10584(param_3,1);
    param_2 = puVar3;
  }
  puVar8 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x19);
  if (*(uint *)(param_1 + 0x19) != 0) {
    puVar3 = param_3;
    func_0x00010598f43c(param_3,puVar8,param_2);
    param_2 = puVar3;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    puVar8 = (undefined8 *)param_1[0x16];
    puVar3 = (undefined8 *)0x3;
    func_0x00010ae1060c(3,puVar8,*(undefined4 *)(puVar8 + 6),param_2);
    param_2 = puVar3;
  }
  puVar4 = puVar3;
  if (param_1[0x18] != 0) {
    func_0x00010ae10590();
    unaff_x22 = (undefined8 *)param_1[0x18];
    puVar4 = (undefined8 *)0x21;
    func_0x000107c280a8();
    param_2 = puVar4 + 1;
    *puVar4 = unaff_x22;
    puVar8 = puVar3;
  }
  puVar3 = puVar4;
  if (param_1[0x1a] != 0) {
    func_0x00010ae10590();
    unaff_x22 = (undefined8 *)param_1[0x1a];
    puVar3 = (undefined8 *)0x29;
    func_0x000107c280a8();
    param_2 = puVar3 + 1;
    *puVar3 = unaff_x22;
    puVar8 = puVar4;
  }
  puVar4 = puVar3;
  if (*(int *)((long)param_1 + 0xcc) != 0) {
    func_0x00010ae10590();
    puVar4 = (undefined8 *)0x30;
    func_0x000107c280a8();
    func_0x00010ae10564();
    puVar8 = puVar3;
    param_2 = puVar4;
  }
  puVar3 = puVar4;
  if (*(int *)(param_1 + 0x1b) != 0) {
    func_0x00010ae10590();
    puVar3 = (undefined8 *)0x38;
    func_0x000107c280a8();
    func_0x00010ae10564();
    puVar8 = puVar4;
    param_2 = puVar3;
  }
  if (*(int *)((long)param_1 + 0xdc) != 0) {
    func_0x00010ae10590();
    param_2 = (undefined8 *)0x40;
    func_0x000107c280a8(0x40);
    func_0x00010ae10564();
    puVar8 = puVar3;
  }
  func_0x00010ae106f0(param_1[0x10]);
  if ((long)puVar8 < 0) {
    puVar8 = (undefined8 *)0x0;
    if (unaff_x22[1] != 0) {
      puVar3 = (undefined8 *)*unaff_x22;
      goto LAB_10ae0e548;
    }
  }
  else {
    puVar3 = unaff_x22;
    if ((int)puVar8 != 0) {
LAB_10ae0e548:
      func_0x00010ae10670(puVar3);
      puVar8 = (undefined8 *)0x9;
      param_2 = param_3;
      func_0x00010ae10584(param_3);
    }
  }
  uVar12 = param_1[0x11] & 0xfffffffffffffffc;
  lVar13 = (long)*(char *)(uVar12 + 0x17);
  if (lVar13 < 0) {
    lVar13 = *(long *)(uVar12 + 8);
  }
  puVar3 = param_2;
  if (lVar13 != 0) {
    puVar8 = (undefined8 *)0xa;
    puVar3 = param_3;
    func_0x000107c280a0(param_3,10,uVar12,param_2);
  }
  func_0x00010ae106f0(param_1[0x12]);
  if ((long)puVar8 < 0) {
    if (unaff_x22[1] != 0) {
      unaff_x22 = (undefined8 *)*unaff_x22;
      goto LAB_10ae0e5b4;
    }
  }
  else if ((int)puVar8 != 0) {
LAB_10ae0e5b4:
    func_0x00010ae10670(unaff_x22);
    puVar3 = param_3;
    func_0x00010ae10584(param_3,0xb);
  }
  puVar9 = (uint *)(param_1 + 3);
  if (*puVar9 != 0) {
    if ((*puVar9 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010564c19c(&lStack_78);
      while (lVar13 = lStack_78, lStack_78 != 0) {
        lVar10 = lStack_78 + 0x10;
        puVar3 = (undefined8 *)0xc;
        func_0x00010ae106d8(0xc,lStack_78 + 8);
        func_0x0001098d4c8c();
        puVar9 = (uint *)(long)*(char *)(lVar13 + 0x27);
        if ((long)puVar9 < 0) {
          lVar10 = *(long *)(lVar13 + 0x10);
          puVar9 = *(uint **)(lVar13 + 0x18);
        }
        func_0x00010ae10518(lVar10);
        func_0x00010ae10790();
      }
    }
    else {
      func_0x0001098d5740(&lStack_78);
      puVar8 = apuStack_70[0];
      for (lVar13 = lStack_78 << 4; lVar13 != 0; lVar13 = lVar13 + -0x10) {
        lVar15 = puVar8[1];
        lVar10 = lVar15 + 8;
        puVar3 = (undefined8 *)0xc;
        func_0x00010ae106d8(0xc,lVar15);
        func_0x0001098d4c8c();
        puVar9 = (uint *)(long)*(char *)(lVar15 + 0x1f);
        if ((long)puVar9 < 0) {
          lVar10 = *(long *)(lVar15 + 8);
          puVar9 = *(uint **)(lVar15 + 0x10);
        }
        func_0x00010ae10518(lVar10);
        puVar8 = puVar8 + 2;
      }
      func_0x0001098d5430(apuStack_70);
    }
  }
  uVar12 = param_1[0x13] & 0xfffffffffffffffc;
  lVar13 = (long)*(char *)(uVar12 + 0x17);
  if (lVar13 < 0) {
    lVar13 = *(long *)(uVar12 + 8);
  }
  puVar8 = puVar3;
  if (lVar13 != 0) {
    puVar9 = (uint *)0xd;
    puVar8 = param_3;
    func_0x000107c280a0(param_3,0xd,uVar12,puVar3);
  }
  puVar5 = (uint *)(param_1 + 7);
  uVar2 = *puVar5;
  uVar16 = (ulong)uVar2;
  if (uVar2 != 0) {
    if ((uVar2 == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010ae10814();
      while (lStack_78 != 0) {
        puVar8 = (undefined8 *)(lStack_78 + 8);
        puVar9 = (uint *)(lStack_78 + 0xc);
        func_0x00010ae1085c(puVar8);
        func_0x00010ae10790();
      }
    }
    else {
      puVar5 = (uint *)(uVar16 << 4);
      __Znam();
      puVar9 = puVar5;
      do {
        *puVar9 = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9 = puVar9 + 4;
      } while (puVar9 != puVar5 + uVar16 * 4);
      puStack_80 = puVar5;
      func_0x00010ae10814();
      while (lStack_78 != 0) {
        *puVar5 = *(uint *)(lStack_78 + 8);
        *(uint **)(puVar5 + 2) = (uint *)(lStack_78 + 8);
        func_0x00010ae10790();
        puVar5 = puVar5 + 4;
      }
      puVar9 = puStack_80 + uVar16 * 4;
      func_0x0001098d57f8();
      uVar14 = uVar16 << 4;
      puVar5 = puStack_80;
      while (uVar16 != 0) {
        puVar8 = *(undefined8 **)(puVar5 + 2);
        puVar9 = (uint *)((long)puVar8 + 4);
        func_0x00010ae1085c();
        puVar5 = puVar5 + 4;
        uVar14 = uVar14 - 0x10;
        uVar16 = uVar14;
      }
      func_0x0001098d5430(&puStack_80);
    }
  }
  func_0x00010ae106f0(param_1[0x14]);
  if ((long)puVar9 < 0) {
    puVar9 = (uint *)0x0;
    if (*(long *)(puVar5 + 2) != 0) {
      puVar6 = *(uint **)puVar5;
      goto LAB_10ae0e7c4;
    }
  }
  else {
    puVar6 = puVar5;
    if ((int)puVar9 != 0) {
LAB_10ae0e7c4:
      func_0x00010ae10670(puVar6);
      puVar9 = (uint *)0xf;
      puVar8 = param_3;
      func_0x00010ae10584(param_3);
    }
  }
  puVar3 = puVar8;
  if ((uVar1 >> 1 & 1) != 0) {
    puVar9 = (uint *)param_1[0x17];
    uVar12 = (ulong)puVar9[7];
    puVar3 = (undefined8 *)0x10;
    func_0x00010ae1060c(0x10,puVar9,uVar12,puVar8);
  }
  func_0x00010ae106f0(param_1[0x15]);
  if ((long)puVar9 < 0) {
    if (*(long *)(puVar5 + 2) == 0) goto LAB_10ae0e83c;
    puVar5 = *(uint **)puVar5;
  }
  else if ((int)puVar9 == 0) goto LAB_10ae0e83c;
  func_0x00010ae10670(puVar5);
  puVar3 = param_3;
  func_0x00010ae10584(param_3,0x11);
LAB_10ae0e83c:
  if (*(int *)(param_1 + 0xb) != 0) {
    if ((*(int *)(param_1 + 0xb) == 1) || ((*(byte *)((long)param_3 + 0x3a) & 1) == 0)) {
      func_0x00010564c19c(&lStack_78);
      while (lVar13 = lStack_78, lStack_78 != 0) {
        lVar10 = lStack_78 + 8;
        lVar15 = lStack_78 + 0x20;
        puVar3 = (undefined8 *)0x12;
        func_0x00010ae106d8(0x12,lVar10);
        func_0x000105990ac4();
        lVar11 = (long)*(char *)(lVar13 + 0x1f);
        if (lVar11 < 0) {
          lVar10 = *(long *)(lVar13 + 8);
          lVar11 = *(long *)(lVar13 + 0x10);
        }
        func_0x00010ae10518(lVar10,lVar11);
        lVar10 = (long)*(char *)(lVar13 + 0x37);
        if (lVar10 < 0) {
          lVar15 = *(long *)(lVar13 + 0x20);
          lVar10 = *(long *)(lVar13 + 0x28);
        }
        func_0x00010ae10518(lVar15,lVar10);
        func_0x00010ae10790();
      }
    }
    else {
      func_0x000105991b98(&lStack_78);
      puVar8 = apuStack_70[0];
      for (lVar13 = lStack_78 << 3; lVar13 != 0; lVar13 = lVar13 + -8) {
        puVar17 = (undefined8 *)*puVar8;
        puVar4 = puVar17 + 3;
        puVar3 = (undefined8 *)0x12;
        func_0x00010ae106d8(0x12,puVar17);
        func_0x000105990ac4();
        lVar10 = (long)*(char *)((long)puVar17 + 0x17);
        puVar7 = puVar17;
        if (lVar10 < 0) {
          lVar10 = puVar17[1];
          puVar7 = (undefined8 *)*puVar17;
        }
        func_0x00010ae10518(puVar7,lVar10);
        lVar10 = (long)*(char *)((long)puVar17 + 0x2f);
        if (lVar10 < 0) {
          puVar4 = (undefined8 *)puVar17[3];
          lVar10 = puVar17[4];
        }
        func_0x00010ae10518(puVar4,lVar10);
        puVar8 = puVar8 + 1;
      }
      func_0x0001098cc180(apuStack_70);
    }
  }
  if ((param_1[1] & 1) != 0) {
    func_0x00010ae10658();
    if ((long)uVar12 < 0) {
      lVar13 = *(long *)(extraout_x8 + 8);
    }
    else {
      lVar13 = extraout_x8 + 8;
    }
    func_0x0001053930c4(param_3,lVar13);
    puVar3 = param_3;
  }
  return puVar3;
}



/* Entry: 10ae0e9c4; end: 10ae0ece3;  */

/* WARNING: Possible PIC construction at 0x00010ae0ea3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae0ea40) */

void FUN_10ae0e9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *unaff_x20;
  int *unaff_x21;
  
  uVar3 = param_4;
  func_0x00010ae106b8();
  func_0x000107c28094(uVar3,param_3);
  uVar4 = 0x72;
  func_0x000107c280a8(0x72,uVar3);
  uVar5 = (ulong)(((int)LZCOUNT((long)*unaff_x21) * -9 + 0x280U >> 6) +
                  ((int)LZCOUNT((long)*unaff_x20) * -9 + 0x280U >> 6) + 2);
  func_0x000107c280a8(uVar5,uVar4);
  func_0x000107c28094(param_4,uVar5);
  iVar1 = *unaff_x21;
  pbVar2 = (byte *)0x8;
  func_0x000107c280a8(8,param_4);
  for (uVar5 = (ulong)iVar1; 0x7f < uVar5; uVar5 = uVar5 >> 7) {
    *pbVar2 = (byte)uVar5 | 0x80;
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = (byte)uVar5;
  return;
}



/* Entry: 10ae0ece4; end: 10ae0ecff;  */

long FUN_10ae0ece4(long param_1)

{
  long extraout_x8;
  
  FUN_10ae0dcc8();
  func_0x00010ae10488();
  return param_1 + extraout_x8;
}



/* Entry: 10ae0ed00; end: 10ae0ed03;  */

void FUN_10ae0ed00(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010ae105c4();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  func_0x0001098d5860(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10ae10260(unaff_x21 + 0x38,unaff_x20 + 0x38);
  puVar2 = (ulong *)(unaff_x21 + 0x58);
  lVar3 = unaff_x20 + 0x58;
  func_0x0001059929d4();
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x78));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x78);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x80));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x80);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x88));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x88);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x90));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x90);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x98));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x98);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0xa0));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0xa0);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0xa8));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0xa8);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10ae101f4();
        *(ulong **)(unaff_x21 + 0xb0) = puVar2;
      }
      else {
        FUN_10ae0db60();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb8);
      if (puVar2 == (ulong *)0x0) {
        func_0x000105992a88();
        *(ulong **)(unaff_x21 + 0xb8) = puVar5;
        puVar2 = puVar5;
      }
      else {
        func_0x00010bce80a4();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    *(long *)(unaff_x21 + 0xc0) = *(long *)(unaff_x20 + 0xc0);
  }
  if (*(int *)(unaff_x20 + 200) != 0) {
    *(int *)(unaff_x21 + 200) = *(int *)(unaff_x20 + 200);
  }
  if (*(int *)(unaff_x20 + 0xcc) != 0) {
    *(int *)(unaff_x21 + 0xcc) = *(int *)(unaff_x20 + 0xcc);
  }
  if (*(long *)(unaff_x20 + 0xd0) != 0) {
    *(long *)(unaff_x21 + 0xd0) = *(long *)(unaff_x20 + 0xd0);
  }
  if (*(int *)(unaff_x20 + 0xd8) != 0) {
    *(int *)(unaff_x21 + 0xd8) = *(int *)(unaff_x20 + 0xd8);
  }
  if (*(int *)(unaff_x20 + 0xdc) != 0) {
    *(int *)(unaff_x21 + 0xdc) = *(int *)(unaff_x20 + 0xdc);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010ae105d4();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10ae0ed04; end: 10ae0ef37;  */

void FUN_10ae0ed04(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar5;
  
  func_0x00010ae105c4();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  func_0x0001098d5860(unaff_x21 + 0x18,unaff_x20 + 0x18);
  FUN_10ae10260(unaff_x21 + 0x38,unaff_x20 + 0x38);
  puVar2 = (ulong *)(unaff_x21 + 0x58);
  lVar3 = unaff_x20 + 0x58;
  func_0x0001059929d4();
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x78));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x78);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x80));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x80);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x88));
  lVar4 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x88);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x90));
  lVar4 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x90);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0x98));
  lVar4 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x98);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0xa0));
  lVar4 = extraout_x8_04;
  if (extraout_x8_04 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0xa0);
    func_0x000107c30248();
  }
  func_0x00010ae106ac(*(undefined8 *)(unaff_x20 + 0xa8));
  lVar4 = extraout_x8_05;
  if (extraout_x8_05 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x00010ae106a0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0xa8);
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb0);
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar5;
        FUN_10ae101f4();
        *(ulong **)(unaff_x21 + 0xb0) = puVar2;
      }
      else {
        FUN_10ae0db60();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0xb8);
      if (puVar2 == (ulong *)0x0) {
        func_0x000105992a88();
        *(ulong **)(unaff_x21 + 0xb8) = puVar5;
        puVar2 = puVar5;
      }
      else {
        func_0x00010bce80a4();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    *(long *)(unaff_x21 + 0xc0) = *(long *)(unaff_x20 + 0xc0);
  }
  if (*(int *)(unaff_x20 + 200) != 0) {
    *(int *)(unaff_x21 + 200) = *(int *)(unaff_x20 + 200);
  }
  if (*(int *)(unaff_x20 + 0xcc) != 0) {
    *(int *)(unaff_x21 + 0xcc) = *(int *)(unaff_x20 + 0xcc);
  }
  if (*(long *)(unaff_x20 + 0xd0) != 0) {
    *(long *)(unaff_x21 + 0xd0) = *(long *)(unaff_x20 + 0xd0);
  }
  if (*(int *)(unaff_x20 + 0xd8) != 0) {
    *(int *)(unaff_x21 + 0xd8) = *(int *)(unaff_x20 + 0xd8);
  }
  if (*(int *)(unaff_x20 + 0xdc) != 0) {
    *(int *)(unaff_x21 + 0xdc) = *(int *)(unaff_x20 + 0xdc);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x00010ae105d4();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10ae0ef38; end: 10ae0eff3;  */

undefined1  [16] FUN_10ae0ef38(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  func_0x00010ae10664();
  func_0x00010ae10524();
  func_0x000107c282e0(param_1 + 0x18,param_2 + 0x18);
  func_0x000107c282e0(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x000107c282e0(unaff_x20 + 0x58,unaff_x19 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x88) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x98) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar5;
  uVar5 = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar5;
  puVar3 = (undefined1 *)(unaff_x19 + 0xb0);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(unaff_x20 + 0xb0); puVar2 != (undefined1 *)(unaff_x20 + 0xe0);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(unaff_x20 + 0xe0);
  return auVar6;
}



/* Entry: 10ae0eff4; end: 10ae0f01f;  */

undefined8 FUN_10ae0eff4(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0f020(param_1);
  return param_1;
}



/* Entry: 10ae0f020; end: 10ae0f03b;  */

void FUN_10ae0f020(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10ae0e238();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0f03c; end: 10ae0f03f;  */

undefined8 FUN_10ae0f03c(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0f020(param_1);
  return param_1;
}



/* Entry: 10ae0f040; end: 10ae0f053;  */

void FUN_10ae0f040(void)

{
  FUN_10ae0eff4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0f054; end: 10ae0f05f;  */

undefined ** FUN_10ae0f054(void)

{
  return &PTR_DAT_110c790a0;
}



/* Entry: 10ae0f060; end: 10ae0f13f;  */

void FUN_10ae0f060(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010ae10740();
  if ((extraout_x8 & 1) != 0) {
    FUN_10ae0e300(unaff_x19[3]);
  }
  func_0x00010ae107f0();
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



/* Entry: 10ae0f140; end: 10ae0f15b;  */

long FUN_10ae0f140(long param_1)

{
  long extraout_x8;
  
  func_0x00010ae0ea60();
  func_0x00010ae10488();
  return param_1 + extraout_x8;
}



/* Entry: 10ae0f15c; end: 10ae0f15f;  */

void FUN_10ae0f15c(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae105c4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010ae108c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010ae108b4();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x00010ae102b4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10ae0ed04();
    }
  }
  func_0x00010ae105e4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010ae105d4();
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



/* Entry: 10ae0f160; end: 10ae0f1bf;  */

void FUN_10ae0f160(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae105c4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010ae108c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010ae108b4();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x00010ae102b4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10ae0ed04();
    }
  }
  func_0x00010ae105e4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010ae105d4();
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



/* Entry: 10ae0f1c0; end: 10ae0f1cf;  */

void FUN_10ae0f1c0(long *param_1,long param_2)

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



/* Entry: 10ae0f1d0; end: 10ae0f1fb;  */

undefined8 FUN_10ae0f1d0(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0f1fc(param_1);
  return param_1;
}



/* Entry: 10ae0f1fc; end: 10ae0f217;  */

void FUN_10ae0f1fc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10ae0de74();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0f218; end: 10ae0f21b;  */

undefined8 FUN_10ae0f218(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0f1fc(param_1);
  return param_1;
}



/* Entry: 10ae0f21c; end: 10ae0f22f;  */

void FUN_10ae0f21c(void)

{
  FUN_10ae0f1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0f230; end: 10ae0f23b;  */

undefined ** FUN_10ae0f230(void)

{
  return &PTR_DAT_110c790e8;
}



/* Entry: 10ae0f23c; end: 10ae0f31f;  */

void FUN_10ae0f23c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010ae10740();
  if ((extraout_x8 & 1) != 0) {
    FUN_10ae0dec4(unaff_x19[3]);
  }
  func_0x00010ae107f0();
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



/* Entry: 10ae0f320; end: 10ae0f33b;  */

long FUN_10ae0f320(long param_1)

{
  long extraout_x8;
  
  FUN_10ae0dfa4();
  func_0x00010ae10488();
  return param_1 + extraout_x8;
}



/* Entry: 10ae0f33c; end: 10ae0f33f;  */

void FUN_10ae0f33c(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae105c4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010ae108c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010ae108b4();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_10ae102f4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10ae0e02c();
    }
  }
  func_0x00010ae105e4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010ae105d4();
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



/* Entry: 10ae0f340; end: 10ae0f39f;  */

void FUN_10ae0f340(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae105c4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010ae108c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010ae108b4();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_10ae102f4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10ae0e02c();
    }
  }
  func_0x00010ae105e4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010ae105d4();
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



/* Entry: 10ae0f3a0; end: 10ae0f3cb;  */

undefined8 FUN_10ae0f3a0(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0f3cc(param_1);
  return param_1;
}



/* Entry: 10ae0f3cc; end: 10ae0f3e7;  */

void FUN_10ae0f3cc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10ae0de74();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0f3e8; end: 10ae0f3eb;  */

undefined8 FUN_10ae0f3e8(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0f3cc(param_1);
  return param_1;
}



/* Entry: 10ae0f3ec; end: 10ae0f3ff;  */

void FUN_10ae0f3ec(void)

{
  FUN_10ae0f3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0f400; end: 10ae0f40b;  */

undefined ** FUN_10ae0f400(void)

{
  return &PTR_DAT_110c79130;
}



/* Entry: 10ae0f40c; end: 10ae0f4ef;  */

void FUN_10ae0f40c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010ae10740();
  if ((extraout_x8 & 1) != 0) {
    FUN_10ae0dec4(unaff_x19[3]);
  }
  func_0x00010ae107f0();
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



/* Entry: 10ae0f4f0; end: 10ae0f4f3;  */

void FUN_10ae0f4f0(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae105c4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010ae108c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010ae108b4();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_10ae102f4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10ae0e02c();
    }
  }
  func_0x00010ae105e4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010ae105d4();
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



/* Entry: 10ae0f4f4; end: 10ae0f553;  */

void FUN_10ae0f4f4(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae105c4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010ae108c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010ae108b4();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_10ae102f4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10ae0e02c();
    }
  }
  func_0x00010ae105e4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010ae105d4();
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



/* Entry: 10ae0f554; end: 10ae0f5db;  */

void FUN_10ae0f554(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x60) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10ae0f5b0;
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_10ae0dbb4();
    }
  }
  else {
    if (*(int *)(param_1 + 0x60) != 1) goto LAB_10ae0f5b0;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 != 0) goto LAB_10ae0f5b0;
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_10ae0dd60();
    }
  }
  __ZdlPv();
LAB_10ae0f5b0:
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 10ae0f5dc; end: 10ae0f607;  */

undefined8 FUN_10ae0f5dc(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0f608(param_1);
  return param_1;
}



/* Entry: 10ae0f608; end: 10ae0f647;  */

long FUN_10ae0f608(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10ae0d4d4();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_10ae0f554(param_1);
  }
  FUN_10ae0fee0(param_1 + 0x30);
  FUN_10ae0ff0c(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10ae0f648; end: 10ae0f64b;  */

undefined8 FUN_10ae0f648(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0f608(param_1);
  return param_1;
}



/* Entry: 10ae0f64c; end: 10ae0f65f;  */

void FUN_10ae0f64c(void)

{
  FUN_10ae0f5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0f660; end: 10ae0f66b;  */

undefined ** FUN_10ae0f660(void)

{
  return &PTR_DAT_110c79178;
}



/* Entry: 10ae0f66c; end: 10ae0f6c3;  */

void FUN_10ae0f66c(ulong *param_1)

{
  ulong extraout_x8;
  
  func_0x00010ae101cc(param_1 + 3);
  func_0x00010ae101e0(param_1 + 6);
  if ((param_1[2] & 1) != 0) {
    func_0x00010ae0d51c(param_1[9]);
  }
  param_1[10] = 0;
  FUN_10ae0f554(param_1);
  func_0x00010ae107f0();
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



/* Entry: 10ae0f6c4; end: 10ae0f7ef;  */

long * FUN_10ae0f6c4(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010ae104ec();
  uVar1 = *(uint *)(param_1 + 0x60);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 1) {
    lVar4 = 0x20;
  }
  else {
    if (uVar1 != 2) goto LAB_10ae0f70c;
    lVar4 = 0x30;
  }
  param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x58) + lVar4);
  func_0x00010ae1060c();
  param_4 = plVar2;
LAB_10ae0f70c:
  plVar3 = (long *)(ulong)*(uint *)(unaff_x20 + 0x50);
  if (*(uint *)(unaff_x20 + 0x50) != 0) {
    plVar2 = unaff_x19;
    func_0x000107c282ac();
    param_3 = param_4;
    param_4 = plVar2;
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    func_0x00010ae104cc();
    param_4 = (long *)0x20;
    func_0x000107c280a8();
    func_0x00010ae10564();
    plVar3 = plVar2;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    plVar3 = *(long **)(unaff_x20 + 0x48);
    param_3 = (long *)(ulong)*(uint *)(plVar3 + 3);
    param_4 = (long *)0x5;
    func_0x00010ae1060c();
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  while (iVar5 != 0) {
    func_0x00010ae10460();
    param_3 = (long *)(ulong)*(uint *)(plVar3 + 5);
    func_0x00010ae1060c(6);
    func_0x00010ae10784();
  }
  iVar5 = *(int *)(unaff_x20 + 0x38);
  while (iVar5 != 0) {
    func_0x00010ae10460();
    param_3 = (long *)(ulong)*(uint *)(plVar3 + 6);
    func_0x00010ae1060c(7);
    func_0x00010ae10784();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10658();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (long *)(ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,(ulong)param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10ae0f7f0; end: 10ae0f917;  */

long FUN_10ae0f7f0(long param_1)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long extraout_x8_02;
  ulong uVar6;
  long extraout_x9;
  long extraout_x9_00;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x20);
  puVar1 = (ulong *)(param_1 + 0x18);
  if ((uVar6 & 1) != 0) {
    puVar1 = (ulong *)(uVar6 + 7);
  }
  while (((long)iVar2 & 0x1fffffffffffffffU) != 0) {
    FUN_10ae0f918(*puVar1);
    func_0x00010ae10754();
    puVar1 = puVar1 + 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38);
  lVar5 = (long)iVar2 + (long)iVar3;
  puVar1 = (ulong *)(param_1 + 0x30);
  if ((uVar6 & 1) != 0) {
    puVar1 = (ulong *)(uVar6 + 7);
  }
  while (((long)iVar3 & 0x1fffffffffffffffU) != 0) {
    func_0x00010ae0f934(*puVar1);
    func_0x00010ae10754();
    puVar1 = puVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    FUN_10ae0d5c0();
    func_0x00010ae10488();
    lVar5 = lVar5 + lVar4 + extraout_x8 + 1;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x00010ae10888(0xfffffff7);
    lVar5 = extraout_x9 + lVar5;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    func_0x00010ae106fc();
    lVar5 = lVar5 + extraout_x8_00 + 1;
  }
  if (*(int *)(param_1 + 0x60) == 2) {
    lVar4 = *(long *)(param_1 + 0x58);
    FUN_10ae0ece4();
    lVar5 = lVar5 + lVar4;
  }
  else {
    if (*(int *)(param_1 + 0x60) != 1) goto LAB_10ae0f8ec;
    lVar4 = *(long *)(param_1 + 0x58);
    FUN_10ae0de2c();
    func_0x00010ae10488();
    lVar5 = lVar5 + lVar4 + extraout_x8_01;
  }
  lVar5 = lVar5 + 1;
LAB_10ae0f8ec:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010ae10868();
    lVar4 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar4 = *(long *)(extraout_x9_00 + 0x10);
    }
    lVar5 = lVar4 + lVar5;
  }
  *(int *)(param_1 + 0x14) = (int)lVar5;
  return lVar5;
}



/* Entry: 10ae0f918; end: 10ae0f94f;  */

long FUN_10ae0f918(long param_1)

{
  long extraout_x8;
  
  FUN_10ae0d77c();
  func_0x00010ae10488();
  return param_1 + extraout_x8;
}



/* Entry: 10ae0f950; end: 10ae0f953;  */

void FUN_10ae0f950(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar5;
  
  func_0x00010ae105c4();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  FUN_10ae0faa8(unaff_x21 + 3,unaff_x20 + 0x18);
  puVar4 = unaff_x21 + 6;
  func_0x00010ae0fab8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar4 = (ulong *)unaff_x21[9];
    if (puVar4 == (ulong *)0x0) {
      puVar4 = puVar5;
      FUN_10ae10368();
      unaff_x21[9] = (ulong)puVar4;
    }
    else {
      func_0x00010ae0d4a8();
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 10) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)((long)unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x60);
  if (iVar2 == 0) goto LAB_10ae0fa8c;
  iVar3 = (int)unaff_x21[0xc];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      puVar4 = unaff_x21;
      FUN_10ae0f554();
    }
    *(int *)(unaff_x21 + 0xc) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      puVar4 = (ulong *)unaff_x21[0xb];
      FUN_10ae0db60();
      goto LAB_10ae0fa8c;
    }
    FUN_10ae101f4();
    puVar4 = puVar5;
  }
  else {
    if (iVar2 != 1) goto LAB_10ae0fa8c;
    if (iVar3 == 1) {
      puVar4 = (ulong *)unaff_x21[0xb];
      func_0x00010ae0dd2c();
      goto LAB_10ae0fa8c;
    }
    FUN_10ae103d4();
    puVar4 = puVar5;
  }
  unaff_x21[0xb] = (ulong)puVar4;
LAB_10ae0fa8c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae105d4();
    if ((*puVar4 & 1) == 0) {
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



/* Entry: 10ae0f954; end: 10ae0faa7;  */

void FUN_10ae0f954(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar5;
  
  func_0x00010ae105c4();
  puVar5 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  FUN_10ae0faa8(unaff_x21 + 3,unaff_x20 + 0x18);
  puVar4 = unaff_x21 + 6;
  func_0x00010ae0fab8();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar4 = (ulong *)unaff_x21[9];
    if (puVar4 == (ulong *)0x0) {
      puVar4 = puVar5;
      FUN_10ae10368();
      unaff_x21[9] = (ulong)puVar4;
    }
    else {
      func_0x00010ae0d4a8();
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 10) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)((long)unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x60);
  if (iVar2 == 0) goto LAB_10ae0fa8c;
  iVar3 = (int)unaff_x21[0xc];
  if (iVar3 != iVar2) {
    if (iVar3 != 0) {
      puVar4 = unaff_x21;
      FUN_10ae0f554();
    }
    *(int *)(unaff_x21 + 0xc) = iVar2;
  }
  if (iVar2 == 2) {
    if (iVar3 == 2) {
      puVar4 = (ulong *)unaff_x21[0xb];
      FUN_10ae0db60();
      goto LAB_10ae0fa8c;
    }
    FUN_10ae101f4();
    puVar4 = puVar5;
  }
  else {
    if (iVar2 != 1) goto LAB_10ae0fa8c;
    if (iVar3 == 1) {
      puVar4 = (ulong *)unaff_x21[0xb];
      func_0x00010ae0dd2c();
      goto LAB_10ae0fa8c;
    }
    FUN_10ae103d4();
    puVar4 = puVar5;
  }
  unaff_x21[0xb] = (ulong)puVar4;
LAB_10ae0fa8c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae105d4();
    if ((*puVar4 & 1) == 0) {
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



/* Entry: 10ae0faa8; end: 10ae0fac7;  */

void FUN_10ae0faa8(long *param_1,long param_2)

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



/* Entry: 10ae0fac8; end: 10ae0faf3;  */

undefined8 FUN_10ae0fac8(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0faf4(param_1);
  return param_1;
}



/* Entry: 10ae0faf4; end: 10ae0fb0f;  */

void FUN_10ae0faf4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10ae0e238();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0fb10; end: 10ae0fb13;  */

undefined8 FUN_10ae0fb10(undefined8 param_1)

{
  func_0x00010ae105bc();
  FUN_10ae0faf4(param_1);
  return param_1;
}



/* Entry: 10ae0fb14; end: 10ae0fb27;  */

void FUN_10ae0fb14(void)

{
  FUN_10ae0fac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0fb28; end: 10ae0fb33;  */

undefined ** FUN_10ae0fb28(void)

{
  return &PTR_DAT_110c791c0;
}



/* Entry: 10ae0fb34; end: 10ae0fc13;  */

void FUN_10ae0fb34(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x00010ae10740();
  if ((extraout_x8 & 1) != 0) {
    FUN_10ae0e300(unaff_x19[3]);
  }
  func_0x00010ae107f0();
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



/* Entry: 10ae0fc14; end: 10ae0fc17;  */

void FUN_10ae0fc14(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae105c4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010ae108c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010ae108b4();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x00010ae102b4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10ae0ed04();
    }
  }
  func_0x00010ae105e4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010ae105d4();
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



/* Entry: 10ae0fc18; end: 10ae0fc77;  */

void FUN_10ae0fc18(void)

{
  ulong *puVar1;
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010ae105c4();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x00010ae108c0();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x00010ae108b4();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x00010ae102b4();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      puVar1 = extraout_x8;
      FUN_10ae0ed04();
    }
  }
  func_0x00010ae105e4();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010ae105d4();
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



/* Entry: 10ae0fc78; end: 10ae0fc9f;  */

undefined8 FUN_10ae0fc78(undefined8 param_1)

{
  func_0x00010ae105bc();
  func_0x00010ae10760();
  return param_1;
}



/* Entry: 10ae0fca0; end: 10ae0fca3;  */

undefined8 FUN_10ae0fca0(undefined8 param_1)

{
  func_0x00010ae105bc();
  func_0x00010ae10760();
  return param_1;
}



/* Entry: 10ae0fca4; end: 10ae0fcb7;  */

void FUN_10ae0fca4(void)

{
  FUN_10ae0fc78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae0fcb8; end: 10ae0fcc3;  */

undefined ** FUN_10ae0fcb8(void)

{
  return &PTR_DAT_110c79208;
}



/* Entry: 10ae0fcc4; end: 10ae0fcef;  */

void FUN_10ae0fcc4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010ae1064c();
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



/* Entry: 10ae0fcf0; end: 10ae0fd57;  */

long * FUN_10ae0fcf0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x00010ae104ec();
  func_0x00010ae10710();
  while (unaff_w22 != unaff_w21) {
    func_0x00010ae10460();
    func_0x00010ae104fc();
    func_0x00010ae10784();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10658();
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



/* Entry: 10ae0fd58; end: 10ae0fda3;  */

void FUN_10ae0fd58(void)

{
  long unaff_x19;
  long unaff_x22;
  
  FUN_10ae1043c();
  while (unaff_x22 != 0) {
    func_0x00010ae107b8();
    func_0x00010ae10754();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae10868();
  }
  func_0x00010ae1089c();
  return;
}



/* Entry: 10ae0fda4; end: 10ae0fda7;  */

void FUN_10ae0fda4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae104d8();
  FUN_10ae0f1c0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10548();
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



/* Entry: 10ae0fda8; end: 10ae0fdd7;  */

void FUN_10ae0fda8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x00010ae104d8();
  FUN_10ae0f1c0();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010ae10548();
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



/* Entry: 10ae0fdd8; end: 10ae0fe3f;  */

void FUN_10ae0fdd8(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x00010ae10820();
  }
  else {
    func_0x00010ae10828(param_2);
  }
  func_0x00010ae10680(&PTR_FUN_110c78b00);
  func_0x00010ae10874();
  return;
}



/* Entry: 10ae0fe40; end: 10ae0fe7f;  */

long FUN_10ae0fe40(long param_1)

{
  if (*(int *)(param_1 + 4) != 1) {
    func_0x000107c30320(param_1,0x10000c,0);
  }
  return param_1;
}



/* Entry: 10ae0fe80; end: 10ae0feb3;  */

long FUN_10ae0fe80(long param_1)

{
  func_0x000105991a90(param_1 + 0x48);
  FUN_10ae0fe40(param_1 + 0x28);
  func_0x0001098d53b8(param_1 + 8);
  return param_1;
}



/* Entry: 10ae0feb4; end: 10ae0fedf;  */

long * FUN_10ae0feb4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010ae10848();
  }
  return param_1;
}



/* Entry: 10ae0fee0; end: 10ae0ff0b;  */

long * FUN_10ae0fee0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010ae10848();
  }
  return param_1;
}



/* Entry: 10ae0ff0c; end: 10ae0ff37;  */

long * FUN_10ae0ff0c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010ae10848();
  }
  return param_1;
}



/* Entry: 10ae0ff38; end: 10ae101b7;  */

long FUN_10ae0ff38(long param_1)

{
  FUN_10ae0fee0(param_1 + 0x20);
  FUN_10ae0ff0c(param_1 + 8);
  return param_1;
}



/* Entry: 10ae101b8; end: 10ae101f3;  */

void FUN_10ae101b8(ulong *param_1)

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



/* Entry: 10ae101f4; end: 10ae1025f;  */

undefined8 * FUN_10ae101f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae10820();
  }
  else {
    func_0x00010ae10828();
  }
  *puVar1 = &PTR_FUN_110c78bf0;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_10ae0db60();
  return puVar1;
}



/* Entry: 10ae10260; end: 10ae102f3;  */

void FUN_10ae10260(undefined8 param_1)

{
  undefined4 uVar1;
  long lStack_58;
  long alStack_40 [4];
  
  func_0x00010ae10770();
  while (lStack_58 != 0) {
    uVar1 = *(undefined4 *)(lStack_58 + 0xc);
    FUN_10a714638(alStack_40,param_1,lStack_58 + 8);
    *(undefined4 *)(alStack_40[0] + 0xc) = uVar1;
    func_0x00010ae10768();
  }
  return;
}



/* Entry: 10ae102f4; end: 10ae10367;  */

undefined8 * FUN_10ae102f4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010ae10664();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae106d0();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b4d80e0();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110c78c90;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010ae104b0();
  }
  lVar1 = unaff_x19 + 0x10;
  func_0x000107c2809c();
  param_1[2] = lVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(unaff_x19 + 0x18);
  return param_1;
}



/* Entry: 10ae10368; end: 10ae103d3;  */

undefined8 * FUN_10ae10368(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010ae106d0();
  }
  else {
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110c78b50;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  func_0x00010ae0d4a8();
  return puVar1;
}


