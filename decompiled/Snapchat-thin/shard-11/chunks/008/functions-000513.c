/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088eb4a0; end: 1088eb4b3;  */

void FUN_1088eb4a0(void)

{
  FUN_1088eb440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088eb4b4; end: 1088eb4bf;  */

undefined ** FUN_1088eb4b4(void)

{
  return &PTR_DAT_110a8b778;
}



/* Entry: 1088eb4c0; end: 1088eb543;  */

void FUN_1088eb4c0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088ef14c();
  func_0x000107c2a320();
  func_0x000107c3025c(unaff_x19 + 0x30);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088eb510(*(undefined8 *)(unaff_x19 + 0x38));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
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



/* Entry: 1088eb544; end: 1088eb61b;  */

long * FUN_1088eb544(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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
  lVar3 = param_1[4];
  while ((int)lVar3 != 0) {
    func_0x0001088eedcc();
    func_0x0001088eeee8();
    func_0x0001088ef140();
  }
  if ((*(byte *)(unaff_x20 + 0x40) & 1) != 0) {
    func_0x0001088eedc0();
    func_0x0001088eeffc();
    func_0x0001088eee50();
    param_4 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_4 = unaff_x19;
    func_0x000107c280a0();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    uVar2 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x14);
    param_4 = (long *)0x4;
    func_0x0001088eef24();
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



/* Entry: 1088eb61c; end: 1088eb6ab;  */

void FUN_1088eb61c(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  iVar1 = (int)unaff_x20;
  func_0x0001088eedf8();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar2 = *unaff_x21;
    FUN_1088ea97c();
    unaff_x20 = lVar2 + unaff_x20;
    iVar1 = (int)unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar3 = *(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar3 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar3 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    func_0x0001088ef090();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x0001088ea998(*(undefined8 *)(unaff_x19 + 0x38));
    func_0x0001088ef090();
  }
  iVar1 = iVar1 + (uint)*(byte *)(unaff_x19 + 0x40) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088eefe0();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x14) = iVar1;
  return;
}



/* Entry: 1088eb6ac; end: 1088eb75b;  */

void FUN_1088eb6ac(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  FUN_1088eaac4(puVar1,unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    puVar1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248(puVar1,uVar2,uVar3);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x38);
    if (puVar1 == (ulong *)0x0) {
      func_0x0001088eac88();
      *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_1088eb75c();
    }
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x40) = 1;
  }
  func_0x0001088eeeac();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 1088eb75c; end: 1088eb81f;  */

void FUN_1088eb75c(void)

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



/* Entry: 1088eb820; end: 1088eb823;  */

undefined8 FUN_1088eb820(undefined8 param_1)

{
  func_0x0001006575e8();
  func_0x000100870890(param_1);
  return param_1;
}



/* Entry: 1088eb824; end: 1088eb837;  */

void FUN_1088eb824(void)

{
  func_0x000107c2a330();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088eb838; end: 1088eb843;  */

undefined ** FUN_1088eb838(void)

{
  return &PTR_DAT_110a8b7c8;
}



/* Entry: 1088eb844; end: 1088eb8bf;  */

long * FUN_1088eb844(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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



/* Entry: 1088eb8c0; end: 1088eb917;  */

void FUN_1088eb8c0(int param_1)

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



/* Entry: 1088eb918; end: 1088eb91b;  */

void FUN_1088eb918(void)

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



/* Entry: 1088eb91c; end: 1088eba93;  */

void FUN_1088eb91c(void)

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
  
  func_0x0001088ef004();
  func_0x000107c34894(&PTR_FUN_110a8b638);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088eee38();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x000107c296d0(unaff_x19 + 0x18);
  lVar2 = unaff_x20 + 0x30;
  func_0x000107c2809c();
  *(long *)(unaff_x19 + 0x30) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088ee94c();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088ee9bc();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088ee9f0();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088eea2c();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a378();
  }
  *(undefined8 *)(unaff_x19 + 0x58) = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x0001088ef178();
  }
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088eea60();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088eea90();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x0001088eeac4();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined4 *)(unaff_x19 + 0xa0) = *(undefined4 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar5;
  return;
}



/* Entry: 1088eba94; end: 1088ebabf;  */

undefined8 FUN_1088eba94(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088ebac0(param_1);
  return param_1;
}



/* Entry: 1088ebac0; end: 1088ebb6f;  */

long * FUN_1088ebac0(void)

{
  long *plVar1;
  long unaff_x19;
  
  func_0x0001088ef19c();
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    FUN_1088ec84c();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    func_0x000107c2a348();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_1088edbcc();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    func_0x000107c2a36c();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    func_0x000107c2a2cc();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_1088b7b00();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    FUN_1088bb524();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    FUN_1088bbc0c();
  }
  __ZdlPv();
  plVar1 = (long *)(unaff_x19 + 0x18);
  if (*plVar1 != 0) {
    func_0x0001000681a0(plVar1);
  }
  return plVar1;
}



/* Entry: 1088ebb70; end: 1088ebb73;  */

undefined8 FUN_1088ebb70(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088ebac0(param_1);
  return param_1;
}



/* Entry: 1088ebb74; end: 1088ebb87;  */

void FUN_1088ebb74(void)

{
  FUN_1088eba94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ebb88; end: 1088ebb93;  */

undefined ** FUN_1088ebb88(void)

{
  return &PTR_DAT_110a8b818;
}



/* Entry: 1088ebb94; end: 1088ebd03;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088ebb94(void)

{
  uint uVar1;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x0001088ef14c();
  FUN_1086ebb04();
  func_0x000107c3025c(unaff_x19 + 0x30);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088ebc78(*(undefined8 *)(unaff_x19 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107c2a334(*(undefined8 *)(unaff_x19 + 0x40));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001088ebcb4(*(undefined8 *)(unaff_x19 + 0x48));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000107c2a338(*(undefined8 *)(unaff_x19 + 0x50));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      FUN_1088bec64(*(undefined8 *)(unaff_x19 + 0x58));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x60));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      FUN_1088b7bb8(*(undefined8 *)(unaff_x19 + 0x68));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      FUN_1088bb594(*(undefined8 *)(unaff_x19 + 0x70));
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    FUN_1088bbcbc(*(undefined8 *)(unaff_x19 + 0x78));
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
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
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1088ebd04; end: 1088ec017;  */

long * FUN_1088ebd04(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long extraout_x8;
  int iVar9;
  int iVar10;
  
  uVar2 = *(uint *)(param_1 + 2);
  plVar3 = param_1;
  plVar7 = param_3;
  if ((uVar2 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[7] + 0x14);
    plVar3 = (long *)0x1;
    func_0x0001088eee70();
    param_2 = plVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[8] + 0x18);
    plVar3 = (long *)0x2;
    func_0x0001088eee70();
    param_2 = plVar3;
  }
  if (param_1[0x10] != 0) {
    func_0x0001088eeecc();
    func_0x0001088ef0a8();
    func_0x0001088eee44();
    param_2 = plVar3;
  }
  plVar4 = plVar3;
  if ((char)param_1[0x11] == '\x01') {
    func_0x0001088eeecc();
    plVar4 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar3);
    func_0x0001088eee50();
    param_2 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)((long)param_1 + 0x89) == '\x01') {
    func_0x0001088eeecc();
    plVar3 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar4);
    func_0x0001088eee50();
    param_2 = plVar3;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[9] + 0x14);
    plVar3 = (long *)0x6;
    func_0x0001088eee70();
    param_2 = plVar3;
  }
  lVar6 = param_1[4];
  for (iVar9 = 0; (int)lVar6 != iVar9; iVar9 = iVar9 + 1) {
    uVar8 = param_1[3];
    puVar1 = (ulong *)(param_1 + 3);
    if ((uVar8 & 1) != 0) {
      puVar1 = (ulong *)(uVar8 + (long)iVar9 * 8 + 7);
    }
    plVar7 = (long *)(ulong)*(uint *)(*puVar1 + 0x18);
    plVar3 = (long *)0x7;
    func_0x0001088eee70();
    param_2 = plVar3;
  }
  plVar4 = plVar3;
  if (*(int *)((long)param_1 + 0x8c) != 0) {
    func_0x0001088eeecc();
    plVar4 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar3);
    func_0x0001088eeec0();
    param_2 = plVar4;
  }
  plVar3 = (long *)(param_1[6] & 0xfffffffffffffffc);
  lVar6 = (long)*(char *)((long)plVar3 + 0x17);
  if (lVar6 < 0) {
    lVar6 = plVar3[1];
    if (lVar6 == 0) goto LAB_1088ebe9c;
    plVar5 = (long *)*plVar3;
  }
  else {
    plVar5 = plVar3;
    if (*(char *)((long)plVar3 + 0x17) == '\0') goto LAB_1088ebe9c;
  }
  func_0x000107c303d4(plVar5,lVar6,1,&UNK_10f4ec07f);
  plVar4 = param_3;
  func_0x000107c280a0(param_3,9,plVar3,param_2);
  plVar7 = plVar3;
  param_2 = plVar4;
LAB_1088ebe9c:
  if ((uVar2 >> 3 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[10] + 0x14);
    plVar4 = (long *)0xa;
    func_0x0001088eee70();
    param_2 = plVar4;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[0xb] + 0x14);
    plVar4 = (long *)0xb;
    func_0x0001088eee70();
    param_2 = plVar4;
  }
  plVar3 = plVar4;
  if (param_1[0x12] != 0) {
    func_0x0001088eeecc();
    plVar3 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar4);
    func_0x0001088eee44();
    param_2 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)((long)param_1 + 0x8a) == '\x01') {
    func_0x0001088eeecc();
    plVar4 = (long *)0x68;
    func_0x000107c280a8(0x68,plVar3);
    func_0x0001088eee50();
    param_2 = plVar4;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[0xc] + 0x18);
    plVar4 = (long *)0xe;
    func_0x0001088eee70();
    param_2 = plVar4;
  }
  plVar3 = plVar4;
  if ((int)param_1[0x14] != 0) {
    func_0x0001088eeecc();
    plVar3 = (long *)0x78;
    func_0x000107c280a8(0x78,plVar4);
    func_0x0001088eeec0();
    param_2 = plVar3;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[0xd] + 0x14);
    plVar3 = (long *)0x10;
    func_0x0001088eee70();
    param_2 = plVar3;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[0xe] + 0x14);
    plVar3 = (long *)0x11;
    func_0x0001088eee70();
    param_2 = plVar3;
  }
  if (param_1[0x13] != 0) {
    func_0x0001088eeecc();
    param_2 = (long *)0x90;
    func_0x000107c280a8(0x90,plVar3);
    func_0x0001088eee44();
  }
  if ((uVar2 >> 8 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(param_1[0xf] + 0x14);
    param_2 = (long *)0x13;
    func_0x0001088eee70();
  }
  if ((param_1[1] & 1U) != 0) {
    func_0x0001088eef74();
    if ((long)plVar7 < 0) {
      lVar6 = *(long *)(extraout_x8 + 8);
      plVar7 = *(long **)(extraout_x8 + 0x10);
    }
    else {
      lVar6 = extraout_x8 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)plVar7) {
      while( true ) {
        iVar10 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar9 = (int)plVar7;
        plVar7 = (long *)(ulong)(uint)(iVar9 - iVar10);
        if (iVar9 - iVar10 == 0 || iVar9 < iVar10) break;
        func_0x00010b4d5738();
        lVar6 = (long)param_2 + (long)iVar10;
        param_2 = param_3;
        func_0x000107c303e4(param_3,lVar6);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_2 + (long)iVar9);
    }
    _memcpy(param_2,lVar6,(ulong)plVar7 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)plVar7);
  }
  return param_2;
}



/* Entry: 1088ec018; end: 1088ec203;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088ec018(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x0001088eedf8();
  for (; iVar3 = (int)unaff_x20, unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar4 = *unaff_x21;
    func_0x000107c2a268();
    unaff_x20 = lVar4 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  uVar5 = *(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar5 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar5 + 8);
  }
  if (lVar4 != 0) {
    func_0x000107c282a0();
    func_0x0001088ef090();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088ec940(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x0001088eed54();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088eca44(*(undefined8 *)(unaff_x19 + 0x40));
      func_0x0001088eed54();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1088edd70(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x0001088eed54();
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_1088ee398(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x0001088eed54();
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x0001088ec204(*(undefined8 *)(unaff_x19 + 0x58));
      func_0x0001088ef090();
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x60));
      func_0x0001088ef090();
    }
    if ((uVar1 >> 6 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x68);
      func_0x0001088ec220();
      iVar3 = iVar3 + iVar2 + 2;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x70);
      func_0x0001088ec23c();
      iVar3 = iVar3 + iVar2 + 2;
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    iVar2 = (int)*(undefined8 *)(unaff_x19 + 0x78);
    func_0x0001088ec258();
    iVar3 = iVar3 + iVar2 + 2;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x80)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  iVar3 = iVar3 + (uint)*(byte *)(unaff_x19 + 0x88) * 2 + (uint)*(byte *)(unaff_x19 + 0x89) * 2 +
          (uint)*(byte *)(unaff_x19 + 0x8a) * 2;
  if (*(int *)(unaff_x19 + 0x8c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x8c)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x90)) * -9 + 0x2c0U >> 6) + iVar3;
  }
  if (*(long *)(unaff_x19 + 0x98) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(long *)(unaff_x19 + 0x98)) * -9 + 0x280U >> 6) + 2;
  }
  if (*(int *)(unaff_x19 + 0xa0) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0xa0)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088eefe0();
    lVar4 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(unaff_x19 + 0x14) = iVar3;
  return;
}



/* Entry: 1088ec204; end: 1088ec273;  */

long FUN_1088ec204(long param_1)

{
  long extraout_x8;
  
  func_0x0001088bee2c();
  func_0x0001088eed78();
  return param_1 + extraout_x8;
}



/* Entry: 1088ec274; end: 1088ec277;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088ec274(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  func_0x0001088ef164();
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248(param_1,uVar2,uVar3);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088ee94c();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088ec4e0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088ee9bc();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        func_0x0001088ec554();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088ee9f0();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        func_0x0001088ec63c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088eea2c();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        func_0x000107c2a33c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ef104();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088eea60();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        FUN_1088b7f30();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088eea90();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        FUN_1088bb6ac();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x78);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088eeac4();
      *(ulong **)(unaff_x21 + 0x78) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_1088bc084();
    }
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  if (*(char *)(unaff_x20 + 0x89) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x89) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8a) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x8a) = 1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
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



/* Entry: 1088ec278; end: 1088ec4df;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088ec278(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  func_0x0001088ef164();
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248(param_1,uVar2,uVar3);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088ee94c();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088ec4e0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088ee9bc();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        func_0x0001088ec554();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088ee9f0();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        func_0x0001088ec63c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088eea2c();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        func_0x000107c2a33c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ef104();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088eea60();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        FUN_1088b7f30();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088eea90();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        FUN_1088bb6ac();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x78);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088eeac4();
      *(ulong **)(unaff_x21 + 0x78) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_1088bc084();
    }
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  if (*(char *)(unaff_x20 + 0x89) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x89) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8a) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x8a) = 1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
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



/* Entry: 1088ec4e0; end: 1088ec553;  */

void FUN_1088ec4e0(void)

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
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 1088ec554; end: 1088ec7cb;  */

void FUN_1088ec554(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088ec620;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000107c2a340();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x0001088ecb68();
      goto LAB_1088ec620;
    }
    FUN_1088eeaf4();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_1088ec620;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_1088ecaec();
      goto LAB_1088ec620;
    }
    func_0x000107c2a384();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088ec620:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return;
}



/* Entry: 1088ec7cc; end: 1088ec83f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1088ec7cc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34868();
  FUN_1088ebb94();
  func_0x0001088ef1b4();
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  func_0x0001088ef164();
  uVar2 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar4 = (long)*(char *)(uVar2 + 0x17);
  if (lVar4 < 0) {
    lVar4 = *(long *)(uVar2 + 8);
  }
  if (lVar4 != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x30);
    func_0x000107c30248(param_1,uVar2,uVar3);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088ee94c();
        *(ulong **)(unaff_x21 + 0x38) = param_1;
      }
      else {
        FUN_1088ec4e0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x40);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088ee9bc();
        *(ulong **)(unaff_x21 + 0x40) = param_1;
      }
      else {
        func_0x0001088ec554();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088ee9f0();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        func_0x0001088ec63c();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x50);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088eea2c();
        *(ulong **)(unaff_x21 + 0x50) = param_1;
      }
      else {
        func_0x000107c2a33c();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x58);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x58) = param_1;
      }
      else {
        FUN_1088bef68();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ef104();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088eea60();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        FUN_1088b7f30();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001088eea90();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        FUN_1088bb6ac();
      }
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x78);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088eeac4();
      *(ulong **)(unaff_x21 + 0x78) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_1088bc084();
    }
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x88) = 1;
  }
  if (*(char *)(unaff_x20 + 0x89) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x89) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8a) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x8a) = 1;
  }
  if (*(int *)(unaff_x20 + 0x8c) != 0) {
    *(int *)(unaff_x21 + 0x8c) = *(int *)(unaff_x20 + 0x8c);
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(long *)(unaff_x20 + 0x98) != 0) {
    *(long *)(unaff_x21 + 0x98) = *(long *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0xa0) != 0) {
    *(int *)(unaff_x21 + 0xa0) = *(int *)(unaff_x20 + 0xa0);
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



/* Entry: 1088ec840; end: 1088ec84b;  */

undefined1  [16] FUN_1088ec840(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  puVar1 = param_1 + 0x6c;
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



/* Entry: 1088ec84c; end: 1088ec87f;  */

long FUN_1088ec84c(long param_1)

{
  func_0x000107c34858();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ec880; end: 1088ec883;  */

long FUN_1088ec880(long param_1)

{
  func_0x000107c34858();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ec884; end: 1088ec897;  */

void FUN_1088ec884(void)

{
  FUN_1088ec84c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ec898; end: 1088ec8a3;  */

undefined ** FUN_1088ec898(void)

{
  return &PTR_DAT_110a8b860;
}



/* Entry: 1088ec8a4; end: 1088ec93f;  */

long * FUN_1088ec8a4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088eeed8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088eedc0();
    func_0x0001088eeffc();
    func_0x0001088eee44();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088eedc0();
    func_0x0001088ef0a8();
    func_0x0001088eee44();
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



/* Entry: 1088ec940; end: 1088ec9bb;  */

void FUN_1088ec940(int param_1)

{
  int iVar1;
  int extraout_w8;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  int extraout_w9;
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
  iVar1 = -9;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088ef1e4();
    param_1 = extraout_w9 + param_1;
    iVar1 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x28)) * iVar1 + 0x2c0U >> 6) + param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088eefe0();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088ec9bc; end: 1088ec9c3;  */

void FUN_1088ec9bc(void)

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
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 1088ec9c4; end: 1088ec9d7;  */

void FUN_1088ec9c4(void)

{
  func_0x000107c2a348();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ec9d8; end: 1088ec9df;  */

undefined8 FUN_1088ec9d8(undefined8 param_1)

{
  func_0x0001006575e8();
  func_0x00010065b654(param_1);
  return param_1;
}



/* Entry: 1088ec9e0; end: 1088ecaaf;  */

long * FUN_1088ec9e0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088eede8();
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x1c);
  if (*(uint *)(param_1 + 0x1c) - 1 < 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x14);
    func_0x0001088eef24();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088eef74();
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



/* Entry: 1088ecab0; end: 1088ecae7;  */

long FUN_1088ecab0(long param_1)

{
  long extraout_x8;
  
  func_0x0001088ed0cc();
  func_0x0001088eed78();
  return param_1 + extraout_x8;
}



/* Entry: 1088ecae8; end: 1088ecaeb;  */

void FUN_1088ecae8(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088ec620;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000107c2a340();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x0001088ecb68();
      goto LAB_1088ec620;
    }
    FUN_1088eeaf4();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_1088ec620;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_1088ecaec();
      goto LAB_1088ec620;
    }
    func_0x000107c2a384();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088ec620:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return;
}



/* Entry: 1088ecaec; end: 1088ecc03;  */

void FUN_1088ecaec(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  func_0x000107c2a354(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x000107c2a358();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x000107c2a38c();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_1088ed174();
    }
  }
  func_0x0001088eeeac();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 1088ecc04; end: 1088ecc33;  */

void FUN_1088ecc04(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34868();
  func_0x000107c2a334();
  func_0x0001088ef1b4();
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_1088ec620;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000107c2a340();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x0001088ecb68();
      goto LAB_1088ec620;
    }
    FUN_1088eeaf4();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_1088ec620;
    if (iVar2 == 1) {
      param_1 = (ulong *)unaff_x21[2];
      FUN_1088ecaec();
      goto LAB_1088ec620;
    }
    func_0x000107c2a384();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_1088ec620:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return;
}



/* Entry: 1088ecc34; end: 1088ecc57;  */

undefined8 FUN_1088ecc34(undefined8 param_1)

{
  func_0x000107c34858();
  return param_1;
}



/* Entry: 1088ecc58; end: 1088ecc5b;  */

undefined8 FUN_1088ecc58(undefined8 param_1)

{
  func_0x000107c34858();
  return param_1;
}



/* Entry: 1088ecc5c; end: 1088ecc6f;  */

void FUN_1088ecc5c(void)

{
  FUN_1088ecc34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ecc70; end: 1088ecc8f;  */

undefined ** FUN_1088ecc70(void)

{
  return &PTR_DAT_110a8b8f8;
}



/* Entry: 1088ecc90; end: 1088ecce3;  */

long * FUN_1088ecc90(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if (param_1[2] != 0) {
    func_0x0001088ef078();
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



/* Entry: 1088ecce4; end: 1088ecd2f;  */

long FUN_1088ecce4(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x0001088ef210();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088ecd30; end: 1088ecd53;  */

undefined8 FUN_1088ecd30(undefined8 param_1)

{
  func_0x000107c34858();
  return param_1;
}



/* Entry: 1088ecd54; end: 1088ecd57;  */

undefined8 FUN_1088ecd54(undefined8 param_1)

{
  func_0x000107c34858();
  return param_1;
}



/* Entry: 1088ecd58; end: 1088ecd6b;  */

void FUN_1088ecd58(void)

{
  FUN_1088ecd30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ecd6c; end: 1088ecd8f;  */

undefined ** FUN_1088ecd6c(void)

{
  return &PTR_DAT_110a8b960;
}



/* Entry: 1088ecd90; end: 1088ece7f;  */

long * FUN_1088ecd90(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088eede8();
  if (param_1[2] != 0) {
    func_0x0001088ef078();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x0001088eedc0();
    func_0x0001088eeffc();
    func_0x0001088eee50();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    func_0x0001088eedc0();
    func_0x0001088ef0a8();
    func_0x0001088eee50();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(char *)(unaff_x20 + 0x1a) == '\x01') {
    func_0x0001088eedc0();
    plVar2 = (long *)0x20;
    func_0x000107c280a8(0x20,param_1);
    func_0x0001088eee50();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x1b) == '\x01') {
    func_0x0001088eedc0();
    param_4 = (long *)0x28;
    func_0x000107c280a8(0x28,plVar2);
    func_0x0001088eee50();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088eef74();
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



/* Entry: 1088ece80; end: 1088ecf2f;  */

long FUN_1088ece80(long param_1)

{
  undefined4 uVar1;
  uint7 uVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x9;
  long lVar4;
  byte bVar5;
  
  func_0x0001088ef210();
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  bVar5 = (byte)((uint)uVar1 >> 0x10);
  uVar2 = CONCAT52((uint5)(((uint6)(byte)((char)((uint)uVar1 >> 0x18) * '\x02') << 0x20) >> 0x10),
                   (ushort)bVar5 + (ushort)bVar5) & 0xffffffffff00ff;
  lVar3 = extraout_x8 +
          (ulong)((uint)(byte)((char)uVar1 * '\x02') +
                  (uint)(byte)((char)((uint)uVar1 >> 8) * '\x02') +
                 (uint)(ushort)uVar2 + (uint)(byte)(uVar2 >> 0x20));
  if ((extraout_x9 & 1) != 0) {
    lVar4 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar3;
  return lVar3;
}



/* Entry: 1088ecf30; end: 1088ecf43;  */

void FUN_1088ecf30(void)

{
  func_0x000107c2a350();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ecf44; end: 1088ecf4f;  */

undefined ** FUN_1088ecf44(void)

{
  return &PTR_DAT_110a8b9c8;
}



/* Entry: 1088ecf50; end: 1088ed00b;  */

void FUN_1088ecf50(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    func_0x0001053936e4(param_1 + 0x18);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    func_0x0001053936e4(param_1 + 0x30);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001088ecfb8(*(undefined8 *)(param_1 + 0x48));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 1088ed00c; end: 1088ed16f;  */

long * FUN_1088ed00c(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x48);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x2;
    func_0x0001088eef24();
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  while (iVar3 != 0) {
    func_0x0001088eedcc();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001088eef24(3);
    func_0x0001088ef140();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x0001088eedcc();
    param_3 = (ulong)*(uint *)(param_2 + 0x1c);
    func_0x0001088eef24(4);
    func_0x0001088ef140();
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



/* Entry: 1088ed170; end: 1088ed173;  */

void FUN_1088ed170(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  func_0x000107c2a354(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x000107c2a358();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x000107c2a38c();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_1088ed174();
    }
  }
  func_0x0001088eeeac();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 1088ed174; end: 1088ed207;  */

void FUN_1088ed174(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a390();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x000107c2a360();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000107c2a390();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000107c2a360();
      }
    }
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



/* Entry: 1088ed208; end: 1088ed233;  */

undefined8 FUN_1088ed208(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088ed234(param_1);
  return param_1;
}



/* Entry: 1088ed234; end: 1088ed267;  */

void FUN_1088ed234(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088ed644();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ed268; end: 1088ed27b;  */

void FUN_1088ed268(void)

{
  FUN_1088ed208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ed27c; end: 1088ed287;  */

undefined ** FUN_1088ed27c(void)

{
  return &PTR_DAT_110a8ba20;
}



/* Entry: 1088ed288; end: 1088ed31b;  */

void FUN_1088ed288(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088ef0b8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088ed2dc(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 1088ed31c; end: 1088ed443;  */

long * FUN_1088ed31c(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
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
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_4 = (long *)0x2;
    func_0x0001088eef24();
  }
  plVar2 = param_4;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    plVar2 = unaff_x19;
    func_0x00010599ccb0();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088eef74();
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



/* Entry: 1088ed444; end: 1088ed447;  */

void FUN_1088ed444(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088ef104();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088eeb80();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088ed448();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
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



/* Entry: 1088ed448; end: 1088ed48f;  */

void FUN_1088ed448(long param_1,long param_2)

{
  FUN_1088ed784(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 1088ed490; end: 1088ed4c3;  */

long FUN_1088ed490(long param_1)

{
  func_0x000107c34858();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ed4c4; end: 1088ed4c7;  */

long FUN_1088ed4c4(long param_1)

{
  func_0x000107c34858();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088ed4c8; end: 1088ed4db;  */

void FUN_1088ed4c8(void)

{
  FUN_1088ed490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ed4dc; end: 1088ed4e7;  */

undefined ** FUN_1088ed4dc(void)

{
  return &PTR_DAT_110a8ba70;
}



/* Entry: 1088ed4e8; end: 1088ed5db;  */

void FUN_1088ed4e8(void)

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



/* Entry: 1088ed5dc; end: 1088ed643;  */

void FUN_1088ed5dc(void)

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



/* Entry: 1088ed644; end: 1088ed66f;  */

long FUN_1088ed644(long param_1)

{
  func_0x000107c34858();
  FUN_1088ee488(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088ed670; end: 1088ed673;  */

long FUN_1088ed670(long param_1)

{
  func_0x000107c34858();
  FUN_1088ee488(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088ed674; end: 1088ed687;  */

void FUN_1088ed674(void)

{
  FUN_1088ed644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ed688; end: 1088ed693;  */

undefined ** FUN_1088ed688(void)

{
  return &PTR_DAT_110a8bad0;
}



/* Entry: 1088ed694; end: 1088ed783;  */

long * FUN_1088ed694(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x0001088eedcc();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088eef24(3);
    func_0x0001088ef140();
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



/* Entry: 1088ed784; end: 1088ed79b;  */

void FUN_1088ed784(long param_1,long param_2)

{
  FUN_1088ed784(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 1088ed79c; end: 1088ed7af;  */

void FUN_1088ed79c(void)

{
  func_0x000107c2a364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ed7b0; end: 1088ed7d3;  */

undefined ** FUN_1088ed7b0(void)

{
  return &PTR_DAT_110a8bb20;
}



/* Entry: 1088ed7d4; end: 1088ed85b;  */

long * FUN_1088ed7d4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  if (param_1[2] != 0) {
    func_0x0001088ef078();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0001088ef188();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088eedc0();
    func_0x0001088ef0a8();
    func_0x0001088eee44();
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



/* Entry: 1088ed85c; end: 1088ed8df;  */

ulong FUN_1088ed85c(long param_1)

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
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x28) = (int)uVar1;
  return uVar1;
}



/* Entry: 1088ed8e0; end: 1088ed8f3;  */

void FUN_1088ed8e0(void)

{
  func_0x000107c2a368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088ed8f4; end: 1088ed8ff;  */

undefined ** FUN_1088ed8f4(void)

{
  return &PTR_DAT_110a8bb80;
}



/* Entry: 1088ed900; end: 1088ed9f3;  */

long * FUN_1088ed900(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088eede8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    func_0x0001088eeee8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
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



/* Entry: 1088ed9f4; end: 1088eda0f;  */

long FUN_1088ed9f4(long param_1)

{
  long extraout_x8;
  
  FUN_1088ed85c();
  func_0x0001088eed78();
  return param_1 + extraout_x8;
}



/* Entry: 1088eda10; end: 1088eda13;  */

void FUN_1088eda10(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088eee5c();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a390();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x000107c2a360();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000107c2a390();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000107c2a360();
      }
    }
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



/* Entry: 1088eda14; end: 1088edaf7;  */

void FUN_1088eda14(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  switch(*(undefined4 *)(param_1 + 0x50)) {
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088ef114();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_1088edabc;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_1088ee110();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088ef114();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_1088edabc;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_1088ee230();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088ef114();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_1088edabc;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_1088edff0();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001088ef114();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_1088edabc;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_1088edf00();
    }
    break;
  default:
    goto LAB_1088edabc;
  }
  __ZdlPv();
LAB_1088edabc:
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1088edaf8; end: 1088edbcb;  */

void FUN_1088edaf8(void)

{
  undefined4 uVar1;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  
  func_0x000107c348b0();
  func_0x000107c34894(&PTR_FUN_110a8b2c8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088eee38();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x000107c296d0(unaff_x19 + 0x18);
  uVar1 = *(undefined4 *)(unaff_x21 + 0x50);
  *(undefined4 *)(unaff_x19 + 0x50) = uVar1;
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x000107c2a26c();
    uVar1 = *(undefined4 *)(unaff_x19 + 0x50);
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x21 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x21 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  switch(uVar1) {
  case 10:
    func_0x000107c34898();
    FUN_1088eebe4();
    break;
  case 0xb:
    func_0x000107c34898();
    FUN_1088eec40();
    break;
  case 0xc:
    func_0x000107c34898();
    FUN_1088eec9c();
    break;
  case 0xd:
    func_0x000107c34898();
    FUN_1088eecf8();
    break;
  default:
    goto code_r0x00010065b140;
  }
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x20;
code_r0x00010065b140:
  return;
}



/* Entry: 1088edbcc; end: 1088edbf7;  */

undefined8 FUN_1088edbcc(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088edbf8(param_1);
  return param_1;
}



/* Entry: 1088edbf8; end: 1088edc37;  */

long * FUN_1088edbf8(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1088eda14(param_1);
  }
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    func_0x0001000681a0(plVar1);
  }
  return plVar1;
}



/* Entry: 1088edc38; end: 1088edc3b;  */

undefined8 FUN_1088edc38(undefined8 param_1)

{
  func_0x000107c34858();
  FUN_1088edbf8(param_1);
  return param_1;
}



/* Entry: 1088edc3c; end: 1088edc4f;  */

void FUN_1088edc3c(void)

{
  FUN_1088edbcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088edc50; end: 1088edc6b;  */

undefined8 FUN_1088edc50(undefined8 param_1)

{
  func_0x000107c34858();
  return param_1;
}



/* Entry: 1088edc6c; end: 1088edd6f;  */

long * FUN_1088edc6c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x0001088eede8();
  if (param_1[7] != 0) {
    func_0x0001088eedc0();
    param_2 = param_1;
    func_0x0001088eeffc();
    func_0x0001088eee44();
    param_4 = param_1;
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  while (iVar4 != 0) {
    func_0x0001088eedcc();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    func_0x0001088eef24(3);
    func_0x0001088ef140();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_4 = (long *)0x4;
    func_0x0001088eef24();
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x50);
  uVar1 = *(uint *)(unaff_x20 + 0x50) - 10;
  if (uVar1 < 4) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) +
                              *(long *)(&UNK_10df6e320 + (ulong)uVar1 * 8));
    func_0x0001088eef24();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x0001088eedc0();
    param_4 = (long *)0x70;
    func_0x000107c280a8(0x70,plVar2);
    func_0x0001088eee44();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088eef74();
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



/* Entry: 1088edd70; end: 1088ede6b;  */

void FUN_1088edd70(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001088eedf8();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    func_0x000107c2a268(*unaff_x21);
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x0001088ef090();
  }
  switch(*(undefined4 *)(unaff_x19 + 0x50)) {
  case 10:
    FUN_1088ee1f0(*(undefined8 *)(unaff_x19 + 0x48));
    break;
  case 0xb:
    FUN_1088ee2e8(*(undefined8 *)(unaff_x19 + 0x48));
    break;
  case 0xc:
    FUN_1088ee0d0(*(undefined8 *)(unaff_x19 + 0x48));
    break;
  case 0xd:
    FUN_1088edfb8(*(undefined8 *)(unaff_x19 + 0x48));
    break;
  default:
    goto LAB_1088ede44;
  }
  func_0x0001088eed54();
LAB_1088ede44:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088eefe0();
  }
  func_0x0001088ef1c0();
  return;
}



/* Entry: 1088ede6c; end: 1088edeff;  */

void FUN_1088ede6c(ulong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x0001088eee5c();
  if ((unaff_x22 & 1) != 0) {
    func_0x0001088ef0c8();
  }
  func_0x0001088ef164();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      func_0x0001088ef104();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      FUN_1088bf398();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  if (*(ulong *)(unaff_x20 + 0x40) != 0) {
    unaff_x21[8] = *(ulong *)(unaff_x20 + 0x40);
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x50);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[10];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_1088eda14();
      }
      *(int *)(unaff_x21 + 10) = iVar2;
    }
    switch(iVar2) {
    case 10:
      if (iVar3 == iVar2) {
        func_0x0001088ef018();
        func_0x0001088ede70();
        goto LAB_1088ec7b0;
      }
      func_0x0001088ef1f8();
      FUN_1088eebe4();
      break;
    case 0xb:
      if (iVar3 == iVar2) {
        func_0x0001088ef018();
        func_0x0001088ede9c();
        goto LAB_1088ec7b0;
      }
      func_0x0001088ef1f8();
      FUN_1088eec40();
      break;
    case 0xc:
      if (iVar3 == iVar2) {
        func_0x0001088ef018();
        func_0x0001088edeb8();
        goto LAB_1088ec7b0;
      }
      func_0x0001088ef1f8();
      FUN_1088eec9c();
      break;
    case 0xd:
      if (iVar3 == iVar2) {
        func_0x0001088ef018();
        func_0x0001088edee4();
        goto LAB_1088ec7b0;
      }
      func_0x0001088ef1f8();
      FUN_1088eecf8();
      break;
    default:
      goto LAB_1088ec7b0;
    }
    unaff_x21[9] = (ulong)param_1;
  }
LAB_1088ec7b0:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
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
  return;
}


