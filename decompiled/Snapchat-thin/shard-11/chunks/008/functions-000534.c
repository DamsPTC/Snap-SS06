/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10891f5a8; end: 10891f5d7;  */

void FUN_10891f5a8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong extraout_x8;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_10891f3d0();
  func_0x000108924aec();
  puVar5 = (ulong *)param_1[1];
  puVar3 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar3 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  uVar4 = param_2[3] & 0xfffffffffffffffc;
  lVar6 = (long)*(char *)(uVar4 + 0x17);
  if (lVar6 < 0) {
    lVar6 = *(long *)(uVar4 + 8);
  }
  puVar2 = param_1;
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
    }
    puVar2 = param_1 + 3;
    func_0x000107c30248(puVar2,uVar4,puVar5);
  }
  uVar1 = (uint)param_2[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000108924c70();
      if (puVar2 == (ulong *)0x0) {
        func_0x000108924d18();
        param_1[4] = (ulong)puVar2;
      }
      else {
        func_0x00010890d088();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = (ulong *)param_1[5];
      if (puVar2 == (ulong *)0x0) {
        puVar2 = puVar3;
        FUN_108915788();
        param_1[5] = (ulong)puVar2;
      }
      else {
        FUN_1089136f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000108924d5c();
      if (puVar2 == (ulong *)0x0) {
        FUN_108915a40();
        param_1[6] = (ulong)puVar3;
        puVar2 = puVar3;
      }
      else {
        FUN_108927928();
      }
    }
  }
  func_0x000108924828();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001089248e8();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10891f5d8; end: 10891f5ff;  */

undefined1  [16] FUN_10891f5d8(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x0001089249c8();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x20);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x20); puVar2 != (undefined1 *)(param_1 + 0x38);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x38);
  return auVar6;
}



/* Entry: 10891f600; end: 10891f623;  */

undefined8 FUN_10891f600(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f624; end: 10891f637;  */

void FUN_10891f624(void)

{
  FUN_10891f600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f638; end: 10891f6ab;  */

undefined ** FUN_10891f638(void)

{
  return &PTR_DAT_110a96cd0;
}



/* Entry: 10891f6ac; end: 10891f6cf;  */

undefined8 FUN_10891f6ac(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f6d0; end: 10891f6e3;  */

void FUN_10891f6d0(void)

{
  FUN_10891f6ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f6e4; end: 10891f757;  */

undefined ** FUN_10891f6e4(void)

{
  return &PTR_DAT_110a96d20;
}



/* Entry: 10891f758; end: 10891f77b;  */

undefined8 FUN_10891f758(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f77c; end: 10891f78f;  */

void FUN_10891f77c(void)

{
  FUN_10891f758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f790; end: 10891f803;  */

undefined ** FUN_10891f790(void)

{
  return &PTR_DAT_110a96d68;
}



/* Entry: 10891f804; end: 10891f827;  */

undefined8 FUN_10891f804(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f828; end: 10891f83b;  */

void FUN_10891f828(void)

{
  FUN_10891f804();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f83c; end: 10891f8ab;  */

undefined ** FUN_10891f83c(void)

{
  return &PTR_DAT_110a96db0;
}



/* Entry: 10891f8ac; end: 10891f8db;  */

void FUN_10891f8ac(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891f848();
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



/* Entry: 10891f8dc; end: 10891f8ff;  */

undefined8 FUN_10891f8dc(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f900; end: 10891f913;  */

void FUN_10891f900(void)

{
  FUN_10891f8dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f914; end: 10891f983;  */

undefined ** FUN_10891f914(void)

{
  return &PTR_DAT_110a96e00;
}



/* Entry: 10891f984; end: 10891f9b3;  */

void FUN_10891f984(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891f920();
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



/* Entry: 10891f9b4; end: 10891f9d7;  */

undefined8 FUN_10891f9b4(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891f9d8; end: 10891f9eb;  */

void FUN_10891f9d8(void)

{
  FUN_10891f9b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891f9ec; end: 10891fa5b;  */

undefined ** FUN_10891f9ec(void)

{
  return &PTR_DAT_110a96e40;
}



/* Entry: 10891fa5c; end: 10891fa8b;  */

void FUN_10891fa5c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891f9f8();
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



/* Entry: 10891fa8c; end: 10891faaf;  */

undefined8 FUN_10891fa8c(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891fab0; end: 10891fac3;  */

void FUN_10891fab0(void)

{
  FUN_10891fa8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891fac4; end: 10891fb33;  */

undefined ** FUN_10891fac4(void)

{
  return &PTR_DAT_110a96e88;
}



/* Entry: 10891fb34; end: 10891fb63;  */

void FUN_10891fb34(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891fad0();
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



/* Entry: 10891fb64; end: 10891fb87;  */

undefined8 FUN_10891fb64(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891fb88; end: 10891fb9b;  */

void FUN_10891fb88(void)

{
  FUN_10891fb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891fb9c; end: 10891fc0b;  */

undefined ** FUN_10891fb9c(void)

{
  return &PTR_DAT_110a96ec8;
}



/* Entry: 10891fc0c; end: 10891fc3b;  */

void FUN_10891fc0c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891fba8();
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



/* Entry: 10891fc3c; end: 10891fc5f;  */

undefined8 FUN_10891fc3c(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891fc60; end: 10891fc73;  */

void FUN_10891fc60(void)

{
  FUN_10891fc3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891fc74; end: 10891fc93;  */

undefined ** FUN_10891fc74(void)

{
  return &PTR_DAT_110a96f10;
}



/* Entry: 10891fc94; end: 10891fcfb;  */

long * FUN_10891fc94(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  if ((int)param_1[2] != 0) {
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



/* Entry: 10891fcfc; end: 10891fd2b;  */

long FUN_10891fcfc(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x000108924d28();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10891fd2c; end: 10891fd5b;  */

void FUN_10891fd2c(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891fc80();
  func_0x000108924aec();
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



/* Entry: 10891fd5c; end: 10891fd7f;  */

undefined8 FUN_10891fd5c(undefined8 param_1)

{
  func_0x000107c34a34();
  return param_1;
}



/* Entry: 10891fd80; end: 10891fdc3;  */

undefined8 * FUN_10891fd80(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110a95230;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010891c258(param_1,param_3);
  return param_1;
}



/* Entry: 10891fdc4; end: 10891fdd7;  */

void FUN_10891fdc4(void)

{
  FUN_10891fd5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891fdd8; end: 10891fdf7;  */

undefined ** FUN_10891fdd8(void)

{
  return &PTR_DAT_110a96f50;
}



/* Entry: 10891fdf8; end: 10891fe5f;  */

long * FUN_10891fdf8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x000108924874();
  if ((int)param_1[2] != 0) {
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



/* Entry: 10891fe60; end: 10891fe8f;  */

long FUN_10891fe60(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x000108924d28();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10891fe90; end: 10891febf;  */

void FUN_10891fe90(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  func_0x00010891fde4();
  func_0x000108924aec();
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



/* Entry: 10891fec0; end: 10891feeb;  */

undefined8 FUN_10891fec0(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891feec(param_1);
  return param_1;
}



/* Entry: 10891feec; end: 10891ff07;  */

void FUN_10891feec(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088b8278();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891ff08; end: 10891ff0b;  */

undefined8 FUN_10891ff08(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_10891feec(param_1);
  return param_1;
}



/* Entry: 10891ff0c; end: 10891ff1f;  */

void FUN_10891ff0c(void)

{
  FUN_10891fec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10891ff20; end: 10891ff2b;  */

undefined ** FUN_10891ff20(void)

{
  return &PTR_DAT_110a96f90;
}



/* Entry: 10891ff2c; end: 108920007;  */

void FUN_10891ff2c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088b8314(unaff_x19[3]);
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



/* Entry: 108920008; end: 10892000b;  */

void FUN_108920008(ulong *param_1)

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
      FUN_1088db014();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088b84d0();
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



/* Entry: 10892000c; end: 108920067;  */

void FUN_10892000c(ulong *param_1)

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
      FUN_1088db014();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088b84d0();
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



/* Entry: 108920068; end: 108920097;  */

void FUN_108920068(ulong *param_1,ulong *param_2)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_10891ff2c();
  func_0x000108924aec();
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_1088db014();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088b84d0();
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



/* Entry: 108920098; end: 1089200cb;  */

long FUN_108920098(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10891fec0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1089200cc; end: 1089200df;  */

void FUN_1089200cc(void)

{
  FUN_108920098();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089200e0; end: 1089200eb;  */

undefined ** FUN_1089200e0(void)

{
  return &PTR_DAT_110a96fd0;
}



/* Entry: 1089200ec; end: 108920123;  */

void FUN_1089200ec(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    FUN_10891ff2c(unaff_x19[3]);
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



/* Entry: 108920124; end: 108920193;  */

long * FUN_108920124(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    func_0x000108924a3c();
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



/* Entry: 108920194; end: 108920203;  */

void FUN_108920194(void)

{
  int iVar1;
  int extraout_w8;
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
    FUN_108920204();
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x000108924e88();
    func_0x000108924b14();
    iVar1 = iVar1 + extraout_w8 + 1;
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



/* Entry: 108920204; end: 10892021f;  */

long FUN_108920204(long param_1)

{
  long extraout_x8;
  
  func_0x00010891ffb4();
  func_0x000108924724();
  return param_1 + extraout_x8;
}



/* Entry: 108920220; end: 108920223;  */

void FUN_108920220(ulong *param_1)

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
      func_0x00010892449c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_10892000c();
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



/* Entry: 108920224; end: 10892027f;  */

void FUN_108920224(undefined8 param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c34a2c();
  func_0x000107c34a44(&PTR_DAT_110a95b40);
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
    func_0x00010892449c();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = param_1;
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  return;
}



/* Entry: 108920280; end: 1089202ab;  */

undefined8 FUN_108920280(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_1089202ac(param_1);
  return param_1;
}



/* Entry: 1089202ac; end: 1089202db;  */

void FUN_1089202ac(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10891fec0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089202dc; end: 1089202e7;  */

undefined ** FUN_1089202dc(void)

{
  return &PTR_DAT_110a97018;
}



/* Entry: 1089202e8; end: 108920327;  */

void FUN_1089202e8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    FUN_10891ff2c(*(undefined8 *)(unaff_x19 + 0x18));
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



/* Entry: 108920328; end: 10892039f;  */

long * FUN_108920328(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010892483c();
    func_0x000108924b9c();
    func_0x000108924904();
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



/* Entry: 1089203a0; end: 10892040b;  */

void FUN_1089203a0(void)

{
  int iVar1;
  int extraout_w8;
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
    FUN_108920204();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x000108924e88();
    func_0x000108924b14();
    iVar1 = extraout_w8 + iVar1;
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



/* Entry: 10892040c; end: 10892040f;  */

void FUN_10892040c(ulong *param_1)

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
      func_0x00010892449c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_10892000c();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
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



/* Entry: 108920410; end: 10892043f;  */

void FUN_108920410(ulong *param_1,ulong *param_2)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_1089202e8();
  func_0x000108924aec();
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      func_0x00010892449c();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_10892000c();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
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



/* Entry: 108920440; end: 108920443;  */

undefined1  [16] FUN_108920440(long param_1,long param_2)

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



/* Entry: 108920444; end: 10892046f;  */

undefined8 FUN_108920444(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108920470(param_1);
  return param_1;
}



/* Entry: 108920470; end: 10892049f;  */

void FUN_108920470(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1088b8278();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089204a0; end: 1089204ab;  */

undefined ** FUN_1089204a0(void)

{
  return &PTR_DAT_110a97060;
}



/* Entry: 1089204ac; end: 108920587;  */

void FUN_1089204ac(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x000108924b2c();
  if ((extraout_x8 & 1) != 0) {
    FUN_1088b8314(unaff_x19[3]);
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



/* Entry: 108920588; end: 10892058b;  */

void FUN_108920588(ulong *param_1)

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
      FUN_1088db014();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088b84d0();
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



/* Entry: 10892058c; end: 1089205bb;  */

void FUN_10892058c(ulong *param_1,ulong *param_2)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_1089204ac();
  func_0x000108924aec();
  func_0x000108924804();
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108924c14();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000108924c08();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_1088db014();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_1088b84d0();
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



/* Entry: 1089205bc; end: 1089205e7;  */

long FUN_1089205bc(long param_1)

{
  func_0x000107c34a34();
  func_0x000107c30258(param_1 + 0x10);
  return param_1;
}



/* Entry: 1089205e8; end: 1089205fb;  */

void FUN_1089205e8(void)

{
  FUN_1089205bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089205fc; end: 108920607;  */

undefined ** FUN_1089205fc(void)

{
  return &PTR_DAT_110a970b0;
}



/* Entry: 108920608; end: 1089206f7;  */

void FUN_108920608(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108924c2c();
  func_0x000107c3025c();
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



/* Entry: 1089206f8; end: 1089206fb;  */

void FUN_1089206f8(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108924b20();
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924a6c();
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



/* Entry: 1089206fc; end: 108920743;  */

void FUN_1089206fc(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a95cd0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  func_0x000107c2a398(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 108920744; end: 10892076f;  */

long FUN_108920744(long param_1)

{
  func_0x000107c34a34();
  func_0x000107c29ae0(param_1 + 0x10);
  return param_1;
}



/* Entry: 108920770; end: 108920783;  */

void FUN_108920770(void)

{
  FUN_108920744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108920784; end: 10892078f;  */

undefined ** FUN_108920784(void)

{
  return &PTR_DAT_110a97100;
}



/* Entry: 108920790; end: 1089207bf;  */

void FUN_108920790(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000108924c2c();
  FUN_1086eac18();
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



/* Entry: 1089207c0; end: 108920827;  */

long * FUN_1089207c0(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  
  func_0x000108924874();
  func_0x000108924e5c();
  while (unaff_w22 != unaff_w21) {
    func_0x000108924708();
    func_0x000108924848();
    func_0x000108924bac();
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



/* Entry: 108920828; end: 108920883;  */

long FUN_108920828(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x000108924d8c();
  func_0x00010892489c();
  while (unaff_x22 != 0) {
    func_0x000108924df4();
    func_0x000108924be4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(unaff_x19 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar2 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 108920884; end: 108920887;  */

void FUN_108920884(ulong *param_1)

{
  long unaff_x20;
  
  func_0x000108924a28();
  func_0x000107c2a394();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924a6c();
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



/* Entry: 108920888; end: 1089208b7;  */

void FUN_108920888(ulong *param_1,ulong *param_2)

{
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x000107c34a38();
  FUN_108920790();
  func_0x000108924aec();
  func_0x000108924a28();
  func_0x000107c2a394();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000108924a6c();
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



/* Entry: 1089208b8; end: 1089208f3;  */

long FUN_1089208b8(long param_1)

{
  func_0x000107c34a34();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_108908dd0();
  }
  __ZdlPv();
  func_0x000107c29ae0(param_1 + 0x18);
  return param_1;
}



/* Entry: 1089208f4; end: 108920907;  */

void FUN_1089208f4(void)

{
  FUN_1089208b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108920908; end: 108920913;  */

undefined ** FUN_108920908(void)

{
  return &PTR_DAT_110a97150;
}



/* Entry: 108920914; end: 108920953;  */

void FUN_108920914(void)

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



/* Entry: 108920954; end: 1089209db;  */

long * FUN_108920954(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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



/* Entry: 1089209dc; end: 108920a47;  */

void FUN_1089209dc(void)

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



/* Entry: 108920a48; end: 108920a4b;  */

void FUN_108920a48(ulong *param_1)

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



/* Entry: 108920a4c; end: 108920ab7;  */

void FUN_108920a4c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000108924924();
  func_0x000107c34a44(&PTR_DAT_110a95e10);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108924858();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x000107c2a398(unaff_x19 + 0x18);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_1088f2a98();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 108920ab8; end: 108920ae3;  */

undefined8 FUN_108920ab8(undefined8 param_1)

{
  func_0x000107c34a34();
  FUN_108920ae4(param_1);
  return param_1;
}


