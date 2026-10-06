/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1088f57d4; end: 1088f580f;  */

long FUN_1088f57d4(long param_1)

{
  func_0x000107c348e0();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088b7b00();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f5810; end: 1088f5813;  */

long FUN_1088f5810(long param_1)

{
  func_0x000107c348e0();
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1088b7b00();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f5814; end: 1088f5827;  */

void FUN_1088f5814(void)

{
  FUN_1088f57d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f5828; end: 1088f5833;  */

undefined ** FUN_1088f5828(void)

{
  return &PTR_DAT_110a8d720;
}



/* Entry: 1088f5834; end: 1088f58d3;  */

long * FUN_1088f5834(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  func_0x0001088f86a8(param_1[3]);
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001088f8788();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f859c();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_4 = (long *)0x3;
    func_0x0001088f84e8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f58d4; end: 1088f5953;  */

void FUN_1088f58d4(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar1 = param_1;
  func_0x0001088f8604(*(undefined8 *)(param_1 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x0001088ec220(*(undefined8 *)(param_1 + 0x20));
    func_0x0001088f8560();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x0001088f84f0();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088f8590();
  }
  func_0x0001088f8720();
  return;
}



/* Entry: 1088f5954; end: 1088f5957;  */

void FUN_1088f5954(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long extraout_x8;
  long lVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c348d0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x0001088f8648(*(undefined8 *)(unaff_x20 + 0x18));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x0001088f8630();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088eea60();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088b7f30();
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x0001088f8490();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088f84c4();
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



/* Entry: 1088f5958; end: 1088f5987;  */

void FUN_1088f5958(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001088f857c();
  FUN_1088f4754();
  func_0x0001088f863c();
  func_0x000107c348d0();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  puVar1 = puVar2;
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  func_0x0001088f8648(*(undefined8 *)(unaff_x20 + 0x18));
  uVar3 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar3 = param_2[1];
  }
  if (uVar3 != 0) {
    if (((ulong)puVar2 & 1) != 0) {
      func_0x0001088f8630();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x000107c30248();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x20);
    if (param_1 == (ulong *)0x0) {
      func_0x0001088eea60();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      FUN_1088b7f30();
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  func_0x0001088f8490();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x0001088f84c4();
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



/* Entry: 1088f5988; end: 1088f598b;  */

undefined8 FUN_1088f5988(undefined8 param_1)

{
  func_0x00010066b60c();
  return param_1;
}



/* Entry: 1088f598c; end: 1088f599f;  */

void FUN_1088f598c(void)

{
  func_0x000107c2a3e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f59a0; end: 1088f59ab;  */

undefined ** FUN_1088f59a0(void)

{
  return &PTR_DAT_110a8d768;
}



/* Entry: 1088f59ac; end: 1088f5a13;  */

long * FUN_1088f59ac(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((int)param_1[2] != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8588();
    func_0x0001088f83f4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x0001088f8544();
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



/* Entry: 1088f5a14; end: 1088f5a5f;  */

ulong FUN_1088f5a14(long param_1)

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



/* Entry: 1088f5a60; end: 1088f5a93;  */

long FUN_1088f5a60(long param_1)

{
  func_0x000107c348e0();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f5a94; end: 1088f5a97;  */

long FUN_1088f5a94(long param_1)

{
  func_0x000107c348e0();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f5a98; end: 1088f5aab;  */

void FUN_1088f5a98(void)

{
  FUN_1088f5a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f5aac; end: 1088f5ab7;  */

undefined ** FUN_1088f5aac(void)

{
  return &PTR_DAT_110a8d7b8;
}



/* Entry: 1088f5ab8; end: 1088f5afb;  */

void FUN_1088f5ab8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088f86b4();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f8770();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088f5afc; end: 1088f5bd7;  */

long * FUN_1088f5afc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088f8458();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f859c();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f85fc();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8684();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8654();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f5bd8; end: 1088f5c73;  */

void FUN_1088f5bd8(int param_1)

{
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar1;
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar2;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088f86b4();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088f8778();
    param_1 = param_1 + 1;
  }
  iVar1 = -9;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x0001088f84d4();
    param_1 = extraout_w9 + param_1;
    iVar1 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x0001088f84d4();
    param_1 = extraout_w9_00 + param_1;
    iVar1 = extraout_w8_00;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x0001088f84d4();
    param_1 = extraout_w9_01 + param_1;
    iVar1 = extraout_w8_01;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x38)) * iVar1 + 0x2c0U >> 6) + param_1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f8590();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088f5c74; end: 1088f5d83;  */

void FUN_1088f5c74(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c348d0();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088f875c();
    }
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  func_0x000107c34900();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84c4();
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



/* Entry: 1088f5d84; end: 1088f5daf;  */

undefined8 FUN_1088f5d84(undefined8 param_1)

{
  func_0x000107c348e0();
  FUN_1088f5db0(param_1);
  return param_1;
}



/* Entry: 1088f5db0; end: 1088f5def;  */

undefined8 FUN_1088f5db0(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2cc();
  }
  __ZdlPv();
  func_0x000107c34910(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x000107c348f4();
  }
  return unaff_x19;
}



/* Entry: 1088f5df0; end: 1088f5df3;  */

undefined8 FUN_1088f5df0(undefined8 param_1)

{
  func_0x000107c348e0();
  FUN_1088f5db0(param_1);
  return param_1;
}



/* Entry: 1088f5df4; end: 1088f5e07;  */

void FUN_1088f5df4(void)

{
  FUN_1088f5d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f5e08; end: 1088f5e13;  */

undefined ** FUN_1088f5e08(void)

{
  return &PTR_DAT_110a8d828;
}



/* Entry: 1088f5e14; end: 1088f5e73;  */

void FUN_1088f5e14(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x0001088f86e0();
  if (in_NG == in_OV) {
    func_0x0001088f8744();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x30));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088bec64(*(undefined8 *)(unaff_x19 + 0x38));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
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



/* Entry: 1088f5e74; end: 1088f5f2f;  */

long * FUN_1088f5e74(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    func_0x0001088f8458();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x0001088f83a4();
    unaff_w21 = (uint)*(undefined8 *)(unaff_x20 + 0x40);
    param_2 = param_1;
    func_0x0001088f859c();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x38);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    param_4 = (long *)0x3;
    func_0x0001088f84e8();
  }
  func_0x0001088f85a4();
  while (uVar1 != unaff_w21) {
    func_0x0001088f8364();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x0001088f84e8(4);
    func_0x0001088f85f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f5f30; end: 1088f5fb7;  */

void FUN_1088f5f30(void)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001088f8380();
  while (unaff_x22 != 0) {
    FUN_1088f5fb8(*unaff_x21);
    func_0x0001088f865c();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c2a268(*(undefined8 *)(unaff_x19 + 0x30));
      func_0x0001088f8560();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_1088ec204(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x0001088f8560();
    }
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    func_0x0001088f84f0();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f8590();
  }
  func_0x0001088f8720();
  return;
}



/* Entry: 1088f5fb8; end: 1088f5fd3;  */

long FUN_1088f5fb8(long param_1)

{
  long extraout_x8;
  
  FUN_1088f5bd8();
  FUN_1088f834c();
  return param_1 + extraout_x8;
}



/* Entry: 1088f5fd4; end: 1088f5fd7;  */

void FUN_1088f5fd4(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088f84a4();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  func_0x0001088f8714();
  FUN_1088f607c();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088f85e8();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088bef68();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  func_0x0001088f8490();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088f84c4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f5fd8; end: 1088f607b;  */

void FUN_1088f5fd8(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088f84a4();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  func_0x0001088f8714();
  FUN_1088f607c();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x0001088f85e8();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        FUN_1088bf398();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x38);
      if (param_1 == (ulong *)0x0) {
        func_0x000107c2a378();
        *(ulong **)(unaff_x21 + 0x38) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_1088bef68();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  func_0x0001088f8490();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088f84c4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f607c; end: 1088f608b;  */

void FUN_1088f607c(long *param_1,long param_2)

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



/* Entry: 1088f608c; end: 1088f60bf;  */

long FUN_1088f608c(long param_1)

{
  func_0x000107c348e0();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f60c0; end: 1088f60c3;  */

long FUN_1088f60c0(long param_1)

{
  func_0x000107c348e0();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1088f60c4; end: 1088f60d7;  */

void FUN_1088f60c4(void)

{
  FUN_1088f608c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f60d8; end: 1088f60e3;  */

undefined ** FUN_1088f60d8(void)

{
  return &PTR_DAT_110a8d880;
}



/* Entry: 1088f60e4; end: 1088f611f;  */

void FUN_1088f60e4(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088f86b4();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f8770();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 1088f6120; end: 1088f619f;  */

long * FUN_1088f6120(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088f8458();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x0001088f83a4();
    func_0x0001088f859c();
    func_0x0001088f83f4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f61a0; end: 1088f61f3;  */

void FUN_1088f61a0(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088f86b4();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088f8778();
    param_1 = param_1 + 1;
  }
  param_1 = param_1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f8590();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088f61f4; end: 1088f62d3;  */

void FUN_1088f61f4(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c348d0();
  puVar1 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = *(ulong **)((ulong)puVar1 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x000107c2a26c();
      *(ulong **)(unaff_x21 + 0x18) = puVar1;
    }
    else {
      func_0x0001088f875c();
    }
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x20) = 1;
  }
  func_0x000107c34900();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84c4();
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



/* Entry: 1088f62d4; end: 1088f62e3;  */

undefined8 FUN_1088f62d4(undefined8 param_1)

{
  func_0x00010066b60c();
  func_0x00010066c190(param_1);
  return param_1;
}



/* Entry: 1088f62e4; end: 1088f632f;  */

void FUN_1088f62e4(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088f86b4();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f8770();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x54) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 1088f6330; end: 1088f64b3;  */

long * FUN_1088f6330(long *param_1,undefined8 param_2,long *param_3,long *param_4)

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
  
  func_0x0001088f8438();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    func_0x0001088f8458();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f859c();
    func_0x0001088f83f4();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    func_0x0001088f83a4();
    func_0x0001088f85fc();
    func_0x0001088f83f4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8684();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8654();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    param_1 = unaff_x19;
    func_0x000106af68d0();
    param_3 = param_4;
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x0001088f83a4();
    plVar2 = (long *)0x38;
    func_0x000107c280a8(0x38,param_1);
    func_0x0001088f83e8();
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f874c();
    func_0x0001088f83e8();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x0001088f83a4();
    plVar3 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar2);
    func_0x0001088f83e8();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    func_0x0001088f83a4();
    param_4 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar3);
    func_0x0001088f83f4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f64b4; end: 1088f661f;  */

void FUN_1088f64b4(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0001088f86b4();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x0001088f8778();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    param_1 = param_1 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x20)) * -9 + 0x1a0U >> 6);
  }
  param_1 = param_1 + (uint)*(byte *)(unaff_x19 + 0x24) * 2;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x28)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x30)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x38)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x40)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x48)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    param_1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x50)) * -9 + 0x2c0U >> 6) + param_1;
  }
  if (*(int *)(unaff_x19 + 0x58) != 0) {
    param_1 = param_1 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x58)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f8590();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 1088f6620; end: 1088f664f;  */

undefined1  [16] FUN_1088f6620(long param_1,long param_2)

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
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x5c);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x5c);
  return auVar7;
}



/* Entry: 1088f6650; end: 1088f6663;  */

void FUN_1088f6650(void)

{
  func_0x000107c2a3f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f6664; end: 1088f666f;  */

undefined ** FUN_1088f6664(void)

{
  return &PTR_DAT_110a8d908;
}



/* Entry: 1088f6670; end: 1088f66c3;  */

void FUN_1088f6670(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001088f6b64(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001088f6b64(*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 1088f66c4; end: 1088f68d3;  */

long * FUN_1088f66c4(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar5;
  int iVar6;
  
  func_0x0001088f8438();
  if ((int)param_1[10] != 0) {
    func_0x0001088f83a4();
    unaff_w21 = *(int *)(unaff_x20 + 0x50);
    param_2 = param_1;
    func_0x0001088f8588();
    func_0x0001088f8478();
    param_4 = param_1;
  }
  func_0x0001088f85a4();
  while (unaff_w22 != unaff_w21) {
    func_0x0001088f8364();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x2;
    func_0x0001088f84e8();
    func_0x0001088f85f0();
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    func_0x0001088f83a4();
    param_2 = param_1;
    func_0x0001088f85fc();
    func_0x0001088f8478();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    func_0x0001088f83a4();
    param_2 = param_1;
    func_0x0001088f8684();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    func_0x0001088f83a4();
    param_2 = param_1;
    func_0x0001088f8654();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    func_0x0001088f83a4();
    plVar2 = (long *)0x30;
    func_0x000107c280a8();
    func_0x0001088f8478();
    param_2 = param_1;
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    func_0x0001088f83a4();
    plVar3 = (long *)0x38;
    func_0x000107c280a8();
    func_0x0001088f83e8();
    param_2 = plVar2;
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    func_0x0001088f83a4();
    param_2 = plVar3;
    func_0x0001088f874c();
    func_0x0001088f83f4();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    func_0x0001088f83a4();
    plVar2 = (long *)0x48;
    func_0x000107c280a8();
    func_0x0001088f83f4();
    param_2 = plVar3;
    param_4 = plVar2;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x48);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    plVar2 = (long *)0xa;
    func_0x0001088f84e8();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    func_0x0001088f83a4();
    plVar3 = (long *)0x58;
    func_0x000107c280a8();
    func_0x0001088f83f4();
    param_2 = plVar2;
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    func_0x0001088f83a4();
    param_4 = (long *)0x60;
    func_0x000107c280a8();
    func_0x0001088f8478();
    param_2 = plVar3;
  }
  iVar5 = *(int *)(unaff_x20 + 0x38);
  while (iVar5 != 0) {
    func_0x0001088f8364();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    func_0x0001088f84e8(0xd);
    func_0x0001088f85f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1088f68d4; end: 1088f6a77;  */

/* WARNING: Removing unreachable block (ram,0x0001088f6910) */

void FUN_1088f68d4(void)

{
  int iVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  
  func_0x0001088f8380();
  while (unaff_x22 != 0) {
    func_0x0001088f8754();
    func_0x0001088f865c();
  }
  iVar2 = unaff_w20 + *(int *)(unaff_x19 + 0x38);
  func_0x0001088f8528();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(unaff_x19 + 0x48);
    func_0x0001088f6d04();
    func_0x0001088f834c();
    iVar2 = iVar2 + iVar1 + extraout_w8 + 1;
  }
  if (*(int *)(unaff_x19 + 0x50) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x50)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(unaff_x19 + 0x54) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x54)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x58)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x60)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    iVar2 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x68)) * -9 + 0x2c0U >> 6) + iVar2;
  }
  if (*(int *)(unaff_x19 + 0x70) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x70)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(unaff_x19 + 0x74) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x74)) * -9 + 0x1a0U >> 6);
  }
  iVar2 = iVar2 + (uint)*(byte *)(unaff_x19 + 0x78) * 2;
  if (*(int *)(unaff_x19 + 0x7c) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x7c)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(unaff_x19 + 0x80) != 0) {
    iVar2 = iVar2 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x80)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0001088f8590();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(unaff_x19 + 0x14) = iVar2;
  return;
}



/* Entry: 1088f6a78; end: 1088f6a7b;  */

void FUN_1088f6a78(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088f84a4();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  func_0x0001088f8714();
  func_0x000107c296d4();
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x000107c296d4();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x000107c2a43c();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_1088f6a7c();
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x21 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  func_0x0001088f8490();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84c4();
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



/* Entry: 1088f6a7c; end: 1088f6b0f;  */

void FUN_1088f6a7c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088f84a4();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a440();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x000107c2a3fc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000107c2a440();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000107c2a3fc();
      }
    }
  }
  func_0x0001088f8490();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088f84c4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f6b10; end: 1088f6b3f;  */

void FUN_1088f6b10(long param_1,long param_2)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001088f857c();
  FUN_1088f46b0();
  func_0x0001088f863c();
  func_0x0001088f84a4();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  func_0x0001088f8714();
  func_0x000107c296d4();
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x000107c296d4();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      func_0x000107c2a43c();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_1088f6a7c();
    }
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(int *)(unaff_x20 + 0x54) != 0) {
    *(int *)(unaff_x21 + 0x54) = *(int *)(unaff_x20 + 0x54);
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    *(long *)(unaff_x21 + 0x58) = *(long *)(unaff_x20 + 0x58);
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    *(long *)(unaff_x21 + 0x60) = *(long *)(unaff_x20 + 0x60);
  }
  if (*(long *)(unaff_x20 + 0x68) != 0) {
    *(long *)(unaff_x21 + 0x68) = *(long *)(unaff_x20 + 0x68);
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  if (*(int *)(unaff_x20 + 0x7c) != 0) {
    *(int *)(unaff_x21 + 0x7c) = *(int *)(unaff_x20 + 0x7c);
  }
  if (*(int *)(unaff_x20 + 0x80) != 0) {
    *(int *)(unaff_x21 + 0x80) = *(int *)(unaff_x20 + 0x80);
  }
  func_0x0001088f8490();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84c4();
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



/* Entry: 1088f6b40; end: 1088f6b43;  */

undefined8 FUN_1088f6b40(undefined8 param_1)

{
  func_0x00010066b60c();
  return param_1;
}



/* Entry: 1088f6b44; end: 1088f6b57;  */

void FUN_1088f6b44(void)

{
  func_0x000107c2a400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f6b58; end: 1088f6b7b;  */

undefined ** FUN_1088f6b58(void)

{
  return &PTR_DAT_110a8d950;
}



/* Entry: 1088f6b7c; end: 1088f6bfb;  */

long * FUN_1088f6b7c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((int)param_1[3] != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8588();
    func_0x0001088f8478();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8550();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f6bfc; end: 1088f6c67;  */

ulong FUN_1088f6bfc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x18)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar1;
  return uVar1;
}



/* Entry: 1088f6c68; end: 1088f6c7b;  */

void FUN_1088f6c68(void)

{
  func_0x000107c2a404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f6c7c; end: 1088f6c87;  */

undefined ** FUN_1088f6c7c(void)

{
  return &PTR_DAT_110a8d9a8;
}



/* Entry: 1088f6c88; end: 1088f6d7f;  */

long * FUN_1088f6c88(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x1c);
    param_4 = (long *)0x1;
    func_0x0001088f84e8();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_4 = (long *)0x2;
    func_0x0001088f84e8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f6d80; end: 1088f6d9b;  */

long FUN_1088f6d80(long param_1)

{
  long extraout_x8;
  
  FUN_1088f6bfc();
  FUN_1088f834c();
  return param_1 + extraout_x8;
}



/* Entry: 1088f6d9c; end: 1088f6da3;  */

void FUN_1088f6d9c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001088f84a4();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x0001088f8670();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107c2a440();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x000107c2a3fc();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        func_0x000107c2a440();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000107c2a3fc();
      }
    }
  }
  func_0x0001088f8490();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x0001088f84c4();
  if ((*param_1 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1088f6da4; end: 1088f6db7;  */

void FUN_1088f6da4(void)

{
  func_0x000107c2a408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f6db8; end: 1088f6dc3;  */

undefined ** FUN_1088f6db8(void)

{
  return &PTR_DAT_110a8da08;
}



/* Entry: 1088f6dc4; end: 1088f6e47;  */

long * FUN_1088f6dc4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((char)param_1[3] == '\x01') {
    func_0x0001088f83a4();
    func_0x0001088f8588();
    func_0x0001088f83f4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8550();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f6e48; end: 1088f6e87;  */

long FUN_1088f6e48(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  long lVar2;
  
  func_0x0001088f8794();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x18) * 2;
  if ((extraout_x9 & 1) != 0) {
    lVar2 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 1088f6e88; end: 1088f6e9b;  */

void FUN_1088f6e88(void)

{
  func_0x000107c2a40c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f6e9c; end: 1088f6ea7;  */

undefined ** FUN_1088f6e9c(void)

{
  return &PTR_DAT_110a8da58;
}



/* Entry: 1088f6ea8; end: 1088f6f4b;  */

long * FUN_1088f6ea8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((char)param_1[4] == '\x01') {
    func_0x0001088f83a4();
    func_0x0001088f8588();
    func_0x0001088f83f4();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f8550();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f85fc();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f6f4c; end: 1088f6fb3;  */

long FUN_1088f6f4c(long param_1)

{
  int iVar1;
  int extraout_w8;
  long lVar2;
  long extraout_x9;
  long lVar3;
  ulong uVar4;
  
  iVar1 = -9;
  lVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001088f84d4();
    lVar2 = extraout_x9;
    iVar1 = extraout_w8;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x18)) * iVar1 + 0x2c0U >> 6) + lVar2;
  }
  lVar2 = lVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar4 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar4 + 0x10);
    }
    lVar2 = lVar3 + lVar2;
  }
  *(int *)(param_1 + 0x24) = (int)lVar2;
  return lVar2;
}



/* Entry: 1088f6fb4; end: 1088f7003;  */

void FUN_1088f6fb4(void)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c348d8();
  func_0x000107c34930(&PTR_FUN_110a8d5a8);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088f84b8();
  }
  FUN_1088f7e8c(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 1088f7004; end: 1088f702f;  */

long FUN_1088f7004(long param_1)

{
  func_0x000107c348e0();
  FUN_1088f7eac(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088f7030; end: 1088f7033;  */

long FUN_1088f7030(long param_1)

{
  func_0x000107c348e0();
  FUN_1088f7eac(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088f7034; end: 1088f7047;  */

void FUN_1088f7034(void)

{
  FUN_1088f7004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f7048; end: 1088f7053;  */

undefined ** FUN_1088f7048(void)

{
  return &PTR_DAT_110a8daa0;
}



/* Entry: 1088f7054; end: 1088f710b;  */

long * FUN_1088f7054(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((int)param_1[5] != 0) {
    func_0x0001088f83a4();
    param_2 = param_1;
    func_0x0001088f8588();
    func_0x0001088f83f4();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x0001088f8364();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x54);
    param_1 = (long *)0x2;
    func_0x0001088f84e8();
    func_0x0001088f85f0();
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x0001088f83a4();
    func_0x0001088f85fc();
    func_0x0001088f8478();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f710c; end: 1088f719b;  */

long FUN_1088f710c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001088f83d0();
  while (unaff_x22 != 0) {
    FUN_1088f719c(*unaff_x21);
    func_0x0001088f865c();
    unaff_x21 = unaff_x21 + 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x0001088f868c();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    unaff_x20 = unaff_x20 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x2c)) * -9 + 0x280U >> 6)
                + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x0001088f8590();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(param_1 + 0x30) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1088f719c; end: 1088f71b7;  */

long FUN_1088f719c(long param_1)

{
  long extraout_x8;
  
  func_0x0001088f747c();
  FUN_1088f834c();
  return param_1 + extraout_x8;
}



/* Entry: 1088f71b8; end: 1088f71cb;  */

void FUN_1088f71b8(ulong *param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001088f872c();
  FUN_1088f71b8();
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(unaff_x19 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088f86c0();
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



/* Entry: 1088f71cc; end: 1088f7223;  */

void FUN_1088f71cc(ulong *param_1,ulong *param_2)

{
  long unaff_x19;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001088f857c();
  FUN_1088f47b0();
  func_0x0001088f863c();
  func_0x0001088f872c();
  FUN_1088f71b8();
  if ((int)param_2[5] != 0) {
    *(int *)(unaff_x19 + 0x28) = (int)param_2[5];
  }
  if (*(int *)((long)param_2 + 0x2c) != 0) {
    *(int *)(unaff_x19 + 0x2c) = *(int *)((long)param_2 + 0x2c);
  }
  if ((param_2[1] & 1) != 0) {
    func_0x0001088f86c0();
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



/* Entry: 1088f7224; end: 1088f72bb;  */

void FUN_1088f7224(void)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
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
  return;
}



/* Entry: 1088f72bc; end: 1088f72e7;  */

undefined8 FUN_1088f72bc(undefined8 param_1)

{
  func_0x000107c348e0();
  FUN_1088f72e8(param_1);
  return param_1;
}



/* Entry: 1088f72e8; end: 1088f730f;  */

long * FUN_1088f72e8(long param_1)

{
  long *unaff_x19;
  
  func_0x000107c30258(param_1 + 0x40);
  func_0x000107c34940(param_1 + 0x10);
  FUN_1088f7ef4();
  if (*unaff_x19 != 0) {
    func_0x0001000681a0(unaff_x19);
  }
  return unaff_x19;
}



/* Entry: 1088f7310; end: 1088f7313;  */

undefined8 FUN_1088f7310(undefined8 param_1)

{
  func_0x000107c348e0();
  FUN_1088f72e8(param_1);
  return param_1;
}



/* Entry: 1088f7314; end: 1088f7327;  */

void FUN_1088f7314(void)

{
  FUN_1088f72bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f7328; end: 1088f7333;  */

undefined ** FUN_1088f7328(void)

{
  return &PTR_DAT_110a8daf0;
}



/* Entry: 1088f7334; end: 1088f737b;  */

void FUN_1088f7334(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088f872c();
  FUN_1086ebb04();
  FUN_10878e8dc(unaff_x19 + 0x28);
  func_0x000107c3025c(unaff_x19 + 0x40);
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
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



/* Entry: 1088f737c; end: 1088f753b;  */

long * FUN_1088f737c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((int)param_1[10] != 0) {
    func_0x0001088f83a4();
    param_2 = param_1;
    func_0x0001088f8588();
    func_0x0001088f83f4();
    param_4 = param_1;
  }
  func_0x0001088f86a8(*(undefined8 *)(unaff_x20 + 0x40));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001088f85c8();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x18);
  while (iVar3 != 0) {
    func_0x0001088f8364();
    param_3 = (ulong)*(uint *)(param_2 + 3);
    param_1 = (long *)0x3;
    func_0x0001088f84e8();
    func_0x0001088f85f0();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x0001088f83a4();
    param_2 = param_1;
    func_0x0001088f8684();
    func_0x0001088f83e8();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x30);
  while (iVar3 != 0) {
    func_0x0001088f8364();
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x0001088f84e8(5);
    func_0x0001088f85f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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



/* Entry: 1088f753c; end: 1088f753f;  */

void FUN_1088f753c(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  
  func_0x0001088f872c();
  func_0x000107c296d4();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = param_2 + 0x28;
  FUN_1088f75c4();
  func_0x0001088f8648(*(undefined8 *)(param_2 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088f8630();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088f86c0();
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



/* Entry: 1088f7540; end: 1088f75c3;  */

void FUN_1088f7540(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  
  func_0x0001088f872c();
  func_0x000107c296d4();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = param_2 + 0x28;
  FUN_1088f75c4();
  func_0x0001088f8648(*(undefined8 *)(param_2 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088f8630();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088f86c0();
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



/* Entry: 1088f75c4; end: 1088f75d3;  */

void FUN_1088f75c4(long *param_1,long param_2)

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



/* Entry: 1088f75d4; end: 1088f7647;  */

void FUN_1088f75d4(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x0001088f857c();
  FUN_1088f7334();
  func_0x0001088f863c();
  func_0x0001088f872c();
  func_0x000107c296d4();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = param_2 + 0x28;
  FUN_1088f75c4();
  func_0x0001088f8648(*(undefined8 *)(param_2 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0001088f8630();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x000107c30248();
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    *(long *)(unaff_x19 + 0x48) = *(long *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(unaff_x19 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0001088f86c0();
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



/* Entry: 1088f7648; end: 1088f7697;  */

long FUN_1088f7648(long param_1)

{
  func_0x000107c348e0();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088f7698; end: 1088f769b;  */

long FUN_1088f7698(long param_1)

{
  func_0x000107c348e0();
  func_0x000107c30258(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x000107c2a2e0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c303ac();
  }
  return param_1;
}



/* Entry: 1088f769c; end: 1088f76af;  */

void FUN_1088f769c(void)

{
  FUN_1088f7648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088f76b0; end: 1088f76bb;  */

undefined ** FUN_1088f76b0(void)

{
  return &PTR_DAT_110a8db30;
}



/* Entry: 1088f76bc; end: 1088f770b;  */

void FUN_1088f76bc(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001088f86e0();
  if (in_NG == in_OV) {
    func_0x0001088f8744();
  }
  func_0x000107c3025c(unaff_x19 + 0x30);
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_1088bf358(*(undefined8 *)(unaff_x19 + 0x38));
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



/* Entry: 1088f770c; end: 1088f78cb;  */

long * FUN_1088f770c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001088f8438();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x38);
    func_0x0001088f8458();
    param_4 = param_1;
  }
  func_0x0001088f86a8(*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_3 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001088f85c8();
    param_4 = param_1;
  }
  func_0x0001088f85a4();
  while (unaff_w22 != unaff_w21) {
    func_0x0001088f8364();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x0001088f84e8(3);
    func_0x0001088f85f0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001088f8544();
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


