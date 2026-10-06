/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5cefd4; end: 10b5cefd7;  */

long FUN_10b5cefd4(long param_1)

{
  func_0x00010b5d239c();
  FUN_10b5d1154(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5cefd8; end: 10b5cefeb;  */

void FUN_10b5cefd8(void)

{
  FUN_10b5cefa8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cefec; end: 10b5ceff7;  */

undefined ** FUN_10b5cefec(void)

{
  return &PTR_DAT_110d23168;
}



/* Entry: 10b5ceff8; end: 10b5cf02b;  */

void FUN_10b5ceff8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d247c();
  FUN_10b5d16d8();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5cf02c; end: 10b5cf0b7;  */

long * FUN_10b5cf02c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b5d21d8();
  func_0x00010b5d259c();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b5d20d8();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x00010b5d2254();
    func_0x00010b5d2500();
  }
  if ((*(byte *)(unaff_x20 + 0x28) & 1) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2524();
    func_0x00010b5d217c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5cf0b8; end: 10b5cf113;  */

void FUN_10b5cf0b8(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b5d2604();
  func_0x00010b5d212c();
  while (unaff_x22 != 0) {
    param_1 = (int)*unaff_x21;
    FUN_10b5cf114();
    func_0x00010b5d261c();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b5d2868(*(undefined1 *)(unaff_x19 + 0x28));
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d2748();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x2c) = param_1;
  return;
}



/* Entry: 10b5cf114; end: 10b5cf12f;  */

long FUN_10b5cf114(long param_1)

{
  long extraout_x8;
  
  FUN_10b5cec94();
  func_0x00010b5d20f4();
  return param_1 + extraout_x8;
}



/* Entry: 10b5cf130; end: 10b5cf133;  */

void FUN_10b5cf130(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d2330();
  FUN_10b5cf174();
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5cf134; end: 10b5cf173;  */

void FUN_10b5cf134(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d2330();
  FUN_10b5cf174();
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5cf174; end: 10b5cf183;  */

void FUN_10b5cf174(long *param_1,long param_2)

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



/* Entry: 10b5cf184; end: 10b5cf1bb;  */

long FUN_10b5cf184(long param_1)

{
  func_0x00010b5d239c();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b574ae0();
  }
  __ZdlPv();
  func_0x00010b5d27d8();
  return param_1;
}



/* Entry: 10b5cf1bc; end: 10b5cf1bf;  */

long FUN_10b5cf1bc(long param_1)

{
  func_0x00010b5d239c();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b574ae0();
  }
  __ZdlPv();
  func_0x00010b5d27d8();
  return param_1;
}



/* Entry: 10b5cf1c0; end: 10b5cf1d3;  */

void FUN_10b5cf1c0(void)

{
  FUN_10b5cf184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cf1d4; end: 10b5cf1df;  */

undefined ** FUN_10b5cf1d4(void)

{
  return &PTR_DAT_110d231b0;
}



/* Entry: 10b5cf1e0; end: 10b5cf223;  */

void FUN_10b5cf1e0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d2814();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    FUN_10b574b68(*(undefined8 *)(unaff_x19 + 0x30));
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x38) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5cf224; end: 10b5cf2cf;  */

long * FUN_10b5cf224(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d21d8();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_2 = *(long **)(unaff_x20 + 0x30);
    param_3 = (ulong)*(uint *)((long)param_2 + 0x14);
    func_0x00010b5d2254();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2594();
    func_0x00010b5d23f8();
    param_2 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  while (iVar3 != 0) {
    func_0x00010b5d20d8();
    param_3 = (ulong)*(uint *)(param_2 + 4);
    func_0x00010b5d238c(3);
    func_0x00010b5d2500();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5cf2d0; end: 10b5cf347;  */

void FUN_10b5cf2d0(void)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  
  func_0x00010b5d2604();
  func_0x00010b5d212c();
  while (unaff_x22 != 0) {
    func_0x00010b5d2628();
    func_0x00010b5d261c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x00010b57531c(*(undefined8 *)(unaff_x19 + 0x30));
    func_0x00010b5d2414();
  }
  if (*(int *)(unaff_x19 + 0x38) != 0) {
    unaff_w20 = unaff_w20 + 5;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d2748();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_w20 = (int)lVar1 + unaff_w20;
  }
  *(int *)(unaff_x19 + 0x14) = unaff_w20;
  return;
}



/* Entry: 10b5cf348; end: 10b5cf34b;  */

void FUN_10b5cf348(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5d21b8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5d2554();
  }
  func_0x00010b5d27f0();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x00010b575908();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_10b574cc0();
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  func_0x00010b5d21f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d2238();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5cf34c; end: 10b5cf3c3;  */

void FUN_10b5cf34c(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5d21b8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5d2554();
  }
  func_0x00010b5d27f0();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x00010b575908();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_10b574cc0();
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  func_0x00010b5d21f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d2238();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5cf3c4; end: 10b5cf3ef;  */

long FUN_10b5cf3c4(long param_1)

{
  func_0x00010b5d239c();
  func_0x000108c6ef48(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5cf3f0; end: 10b5cf3f3;  */

long FUN_10b5cf3f0(long param_1)

{
  func_0x00010b5d239c();
  func_0x000108c6ef48(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b5cf3f4; end: 10b5cf407;  */

void FUN_10b5cf3f4(void)

{
  FUN_10b5cf3c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cf408; end: 10b5cf413;  */

undefined ** FUN_10b5cf408(void)

{
  return &PTR_DAT_110d231f0;
}



/* Entry: 10b5cf414; end: 10b5cf44b;  */

void FUN_10b5cf414(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d247c();
  func_0x000108c6f45c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined2 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5cf44c; end: 10b5cf507;  */

long * FUN_10b5cf44c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar3;
  int unaff_w22;
  int iVar4;
  
  func_0x00010b5d21d8();
  func_0x00010b5d259c();
  while (unaff_w22 != unaff_w21) {
    func_0x00010b5d20d8();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x00010b5d2254();
    func_0x00010b5d2500();
  }
  if ((*(byte *)(unaff_x20 + 0x30) & 1) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2444();
    func_0x00010b5d217c();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x31) == '\x01') {
    func_0x00010b5d2164();
    func_0x00010b5d26b8();
    func_0x00010b5d217c();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5d23c4();
    func_0x000107c282e8();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5cf508; end: 10b5cf577;  */

void FUN_10b5cf508(undefined8 param_1)

{
  int iVar1;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00010b5d2604();
  func_0x00010b5d212c();
  iVar1 = (int)param_1;
  while (unaff_x22 != 0) {
    func_0x00010b5d2628();
    func_0x00010b5d261c();
    iVar1 = (int)param_1;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    func_0x00010b5d2318();
    unaff_x20 = extraout_x8 + unaff_x20;
  }
  func_0x00010b5d2784(unaff_x20 + (ulong)*(byte *)(unaff_x19 + 0x30) * 2);
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b5d2748();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x34) = iVar1;
  return;
}



/* Entry: 10b5cf578; end: 10b5cf57b;  */

void FUN_10b5cf578(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d2330();
  func_0x000108c6cd6c();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x30) = 1;
  }
  if (*(char *)(unaff_x20 + 0x31) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x31) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5cf57c; end: 10b5cf5d7;  */

void FUN_10b5cf57c(ulong *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d2330();
  func_0x000108c6cd6c();
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x30) = 1;
  }
  if (*(char *)(unaff_x20 + 0x31) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x31) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5cf5d8; end: 10b5cf5ff;  */

void FUN_10b5cf5d8(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5cf600; end: 10b5cf623;  */

undefined8 FUN_10b5cf600(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cf624; end: 10b5cf627;  */

undefined8 FUN_10b5cf624(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cf628; end: 10b5cf63b;  */

void FUN_10b5cf628(void)

{
  FUN_10b5cf600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cf63c; end: 10b5cf65f;  */

undefined ** FUN_10b5cf63c(void)

{
  return &PTR_DAT_110d23230;
}



/* Entry: 10b5cf660; end: 10b5cf6d7;  */

long * FUN_10b5cf660(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d21d8();
  if (param_1[2] != 0) {
    func_0x00010b5d23c4();
    func_0x000105991a14();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d288c();
    func_0x00010b5d2524();
    func_0x00010b5d2248();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5cf6d8; end: 10b5cf797;  */

ulong FUN_10b5cf6d8(long param_1)

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



/* Entry: 10b5cf798; end: 10b5cf7bb;  */

undefined8 FUN_10b5cf798(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cf7bc; end: 10b5cf7bf;  */

undefined8 FUN_10b5cf7bc(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5cf7c0; end: 10b5cf7d3;  */

void FUN_10b5cf7c0(void)

{
  FUN_10b5cf798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cf7d4; end: 10b5cf7f7;  */

undefined ** FUN_10b5cf7d4(void)

{
  return &PTR_DAT_110d23278;
}



/* Entry: 10b5cf7f8; end: 10b5cf8bb;  */

long * FUN_10b5cf7f8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d21d8();
  if ((int)param_1[2] != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2208();
    func_0x00010b5d2248();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2594();
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d288c();
    func_0x00010b5d27e8();
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d26d0();
    func_0x00010b5d23f8();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b5d23c4();
    func_0x000107c282c4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5cf8bc; end: 10b5cf94b;  */

long FUN_10b5cf8bc(long param_1)

{
  int extraout_w8;
  long lVar1;
  long extraout_x9;
  long lVar2;
  ulong uVar3;
  
  func_0x00010b5d2698(0xfffffff7);
  lVar1 = extraout_x9;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x20)) * extraout_w8 + 0x2c0U >> 6) +
            extraout_x9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5cf94c; end: 10b5cf973;  */

undefined8 FUN_10b5cf94c(undefined8 param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  return param_1;
}



/* Entry: 10b5cf974; end: 10b5cf977;  */

undefined8 FUN_10b5cf974(undefined8 param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  return param_1;
}



/* Entry: 10b5cf978; end: 10b5cf98b;  */

void FUN_10b5cf978(void)

{
  FUN_10b5cf94c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cf98c; end: 10b5cf997;  */

undefined ** FUN_10b5cf98c(void)

{
  return &PTR_DAT_110d232b8;
}



/* Entry: 10b5cf998; end: 10b5cf9cf;  */

void FUN_10b5cf998(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d2378();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined8 *)(unaff_x19 + 0x2d) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5cf9d0; end: 10b5cfadf;  */

long * FUN_10b5cf9d0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x00010b5d21d8();
  if ((int)param_1[3] != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d288c();
    param_1 = (long *)0xd;
    func_0x000107c280a8();
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2594();
    func_0x00010b5d23f8();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d27e8();
    func_0x00010b5d23f8();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b5d23c4();
    func_0x000107c282e8();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010b5d23c4();
    func_0x000107c282c4();
    param_4 = param_1;
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    param_1 = unaff_x19;
    func_0x000107c280a0();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    func_0x00010b5d2164();
    func_0x00010b5d26b0();
    func_0x00010b5d217c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5cfae0; end: 10b5cfb97;  */

void FUN_10b5cfae0(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5d22d4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    func_0x000107c28098();
    lVar3 = param_1 + 1;
  }
  iVar1 = (int)param_1;
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    lVar3 = lVar3 + 5;
  }
  if (*(int *)(unaff_x19 + 0x1c) != 0) {
    lVar3 = lVar3 + 5;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    lVar3 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
  }
  if (*(int *)(unaff_x19 + 0x30) != 0) {
    lVar3 = lVar3 + 5;
  }
  func_0x00010b5d2784(lVar3);
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b5d2748();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x38) = iVar1;
  return;
}



/* Entry: 10b5cfb98; end: 10b5cfb9b;  */

void FUN_10b5cfb98(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d226c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    func_0x00010b5d2654();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x19 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x34) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5cfb9c; end: 10b5cfe37;  */

void FUN_10b5cfb9c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d226c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    func_0x00010b5d2654();
  }
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x20 + 0x18);
  }
  if (*(int *)(unaff_x20 + 0x1c) != 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x20 + 0x1c);
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x19 + 0x20) = *(long *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x19 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x34) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x34) = 1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5cfe38; end: 10b5cfe63;  */

undefined8 FUN_10b5cfe38(undefined8 param_1)

{
  func_0x00010b5d239c();
  FUN_10b5cfe64(param_1);
  return param_1;
}



/* Entry: 10b5cfe64; end: 10b5cfe77;  */

void FUN_10b5cfe64(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cd0f8();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cf184();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cc928();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cd5f8();
    }
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cd844();
    }
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cd004();
    }
    break;
  default:
    goto LAB_10b5cfda8;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cf3c4();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_07;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cf600();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_09;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cf798();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8_08;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5cf94c();
    }
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d2454();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_10b5cfda8;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_10b5ccde8();
    }
  }
  __ZdlPv();
LAB_10b5cfda8:
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5cfe78; end: 10b5cfe8b;  */

void FUN_10b5cfe78(void)

{
  FUN_10b5cfe38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5cfe8c; end: 10b5cfe97;  */

undefined ** FUN_10b5cfe8c(void)

{
  return &PTR_DAT_110d232f8;
}



/* Entry: 10b5cfe98; end: 10b5cfecf;  */

void FUN_10b5cfe98(long param_1)

{
  ulong *puVar1;
  
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  func_0x00010b5cfc3c();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5cfed0; end: 10b5cfffb;  */

long * FUN_10b5cfed0(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b5d21d8();
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x24);
  uVar1 = *(uint *)(param_1 + 0x24) - 1;
  if (uVar1 < 6) {
    func_0x00010b5d2344(*(undefined8 *)(&UNK_10e5d0d90 + (ulong)uVar1 * 8));
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    func_0x00010b5d2164();
    func_0x00010b5d26b0();
    func_0x00010b5d217c();
    param_4 = plVar2;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x24);
  plVar2 = (long *)(ulong)uVar1;
  if (uVar1 == 8) {
    uVar5 = 0x34;
  }
  else {
    if (uVar1 != 9) goto LAB_10b5cff54;
    uVar5 = 0x1c;
  }
  func_0x00010b5d2344(uVar5);
  param_4 = plVar2;
LAB_10b5cff54:
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010b5d2164();
    plVar3 = (long *)0x50;
    func_0x000107c280a8(0x50,plVar2);
    func_0x00010b5d217c();
    param_4 = plVar3;
  }
  if (*(char *)(unaff_x20 + 0x12) == '\x01') {
    func_0x00010b5d2164();
    param_4 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar3);
    func_0x00010b5d217c();
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x24);
  uVar1 = *(uint *)(unaff_x20 + 0x24) - 0xc;
  if (uVar1 < 3) {
    func_0x00010b5d2344(*(undefined8 *)(&UNK_10e5d0dc0 + (ulong)uVar1 * 8));
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
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
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5cfffc; end: 10b5d0107;  */

long FUN_10b5cfffc(long param_1)

{
  int extraout_w8;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5d268c();
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + extraout_w8 + (uint)*(byte *)(param_1 + 0x12))
          & 7) * 2;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5cd5dc();
    lVar1 = lVar2 + lVar1;
    goto code_r0x00010b5d00d8;
  case 2:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5cf2d0();
    break;
  case 3:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    func_0x00010b5ccbb4();
    break;
  case 4:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5cd740();
    break;
  case 5:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    func_0x00010b5cd8cc();
    break;
  case 6:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5cd0c0();
    break;
  default:
    goto LAB_10b5d00dc;
  case 8:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5cf508();
    break;
  case 9:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5cf6d8();
    break;
  case 0xc:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5cf8bc();
    break;
  case 0xd:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5cfae0();
    break;
  case 0xe:
    lVar2 = *(long *)(unaff_x19 + 0x18);
    FUN_10b5ccea4();
  }
  func_0x00010b5d20f4();
  lVar1 = lVar2 + lVar1 + extraout_x8;
code_r0x00010b5d00d8:
  lVar1 = lVar1 + 1;
LAB_10b5d00dc:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d2748();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b5d0108; end: 10b5d03cf;  */

void FUN_10b5d0108(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5d21b8();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b5d2554();
  }
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    *(undefined1 *)(unaff_x21 + 2) = 1;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x11) = 1;
  }
  if (*(char *)(unaff_x20 + 0x12) == '\x01') {
    *(undefined1 *)((long)unaff_x21 + 0x12) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x00010b5cfc3c();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5cd4a8();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      func_0x00010b5d1844();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5cf34c();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      func_0x00010b5d18dc();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5ccc7c();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      func_0x00010b5d1968();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5cd7bc();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      func_0x00010b5d1a20();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5cd82c();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      FUN_10b5d1a84();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        func_0x00010b5ccfe8();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      FUN_10b5d1ae0();
      break;
    default:
      goto LAB_10b5d03b4;
    case 8:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5cf57c();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      FUN_10b5d1b3c();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5cf5d8();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      FUN_10b5d1bb0();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        func_0x00010b5cf740();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      FUN_10b5d1c0c();
      break;
    case 0xd:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        func_0x00010b5cfb9c();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      FUN_10b5d1c74();
      break;
    case 0xe:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        func_0x00010b5ccdcc();
        goto LAB_10b5d03b4;
      }
      func_0x00010b5d24b0();
      FUN_10b5d1ce4();
    }
    unaff_x21[3] = (ulong)param_1;
  }
LAB_10b5d03b4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2238();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d03d0; end: 10b5d03fb;  */

void FUN_10b5d03d0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d03fc; end: 10b5d041f;  */

undefined8 FUN_10b5d03fc(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5d0420; end: 10b5d0423;  */

undefined8 FUN_10b5d0420(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5d0424; end: 10b5d0437;  */

void FUN_10b5d0424(void)

{
  FUN_10b5d03fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d0438; end: 10b5d0457;  */

undefined ** FUN_10b5d0438(void)

{
  return &PTR_DAT_110d23338;
}



/* Entry: 10b5d0458; end: 10b5d04d3;  */

long * FUN_10b5d0458(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d21d8();
  if ((int)param_1[2] != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2208();
    func_0x00010b5d2248();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2594();
    func_0x00010b5d23f8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5d04d4; end: 10b5d052f;  */

long FUN_10b5d04d4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
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



/* Entry: 10b5d0530; end: 10b5d0557;  */

undefined8 FUN_10b5d0530(undefined8 param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  return param_1;
}



/* Entry: 10b5d0558; end: 10b5d055b;  */

undefined8 FUN_10b5d0558(undefined8 param_1)

{
  func_0x00010b5d239c();
  func_0x00010b5d25ac();
  return param_1;
}



/* Entry: 10b5d055c; end: 10b5d056f;  */

void FUN_10b5d055c(void)

{
  FUN_10b5d0530();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d0570; end: 10b5d057b;  */

undefined ** FUN_10b5d0570(void)

{
  return &PTR_DAT_110d23370;
}



/* Entry: 10b5d057c; end: 10b5d05a7;  */

void FUN_10b5d057c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b5d2378();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d05a8; end: 10b5d062b;  */

long * FUN_10b5d05a8(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x00010b5d23d0();
  if ((long)plVar1 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10b5d05f4;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)plVar1 == 0) goto LAB_10b5d05f4;
  func_0x00010b5d2430();
  func_0x00010b5d2640();
  param_2 = unaff_x22;
LAB_10b5d05f4:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x00010b5d23b8();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10b5d062c; end: 10b5d0683;  */

void FUN_10b5d062c(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010b5d22d4();
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
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b5d2748();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x18) = iVar1;
  return;
}



/* Entry: 10b5d0684; end: 10b5d0687;  */

void FUN_10b5d0684(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d226c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    func_0x00010b5d2654();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d0688; end: 10b5d06cf;  */

void FUN_10b5d0688(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b5d226c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010b5d250c();
    }
    func_0x00010b5d2654();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2290();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d06d0; end: 10b5d0733;  */

long FUN_10b5d06d0(long param_1)

{
  func_0x00010b5d239c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d03fc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b58ca80();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5d8a40();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5d0530();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5d0734; end: 10b5d0737;  */

long FUN_10b5d0734(long param_1)

{
  func_0x00010b5d239c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b5d03fc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b58ca80();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_10b5d8a40();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_10b5d0530();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10b5d0738; end: 10b5d074b;  */

void FUN_10b5d0738(void)

{
  FUN_10b5d06d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d074c; end: 10b5d0757;  */

undefined ** FUN_10b5d074c(void)

{
  return &PTR_DAT_110d233a8;
}



/* Entry: 10b5d0758; end: 10b5d07d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5d0758(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b5d0444(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b58cad4(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_10b5d8a94(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_10b5d057c(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d07d4; end: 10b5d093f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_10b5d07d4(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d21d8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x00010b5d2254();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x28);
    param_4 = (long *)0x2;
    func_0x00010b5d238c();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x1c);
    param_4 = (long *)0x3;
    func_0x00010b5d238c();
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_4 = (long *)0x4;
    func_0x00010b5d238c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5d0940; end: 10b5d0943;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5d0940(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5d21b8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5d2554();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b5d1d40();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5d03d0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5d2844();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b58849c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b58cc78();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b58aa28();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b5d8c20();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5d1da0();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b5d0688();
      }
    }
  }
  func_0x00010b5d21f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d2238();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d0944; end: 10b5d0a33;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b5d0944(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b5d21b8();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x00010b5d2554();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b5d1d40();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b5d03d0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010b5d2844();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b58849c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_10b58cc78();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b58aa28();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_10b5d8c20();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_10b5d1da0();
        *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b5d0688();
      }
    }
  }
  func_0x00010b5d21f4();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b5d2238();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d0a34; end: 10b5d0b13;  */

void FUN_10b5d0a34(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  func_0x00010b5d2778(*(undefined4 *)(param_1 + 0x24));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b5d0a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5d0a06)[extraout_x8] * 4 + 0x10b5d0a68))();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5d0b14; end: 10b5d0bb7;  */

void FUN_10b5d0b14(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  undefined8 *unaff_x19;
  
  lVar1 = param_3;
  func_0x00010b5d2470();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_DAT_110d22dd8;
  if ((*(ulong *)(lVar1 + 8) & 1) != 0) {
    func_0x00010b5d21e8();
  }
  *(undefined4 *)(unaff_x19 + 4) = 0;
  *(undefined4 *)((long)unaff_x19 + 0x24) = *(undefined4 *)(param_3 + 0x24);
  unaff_x19[2] = *(undefined8 *)(param_3 + 0x10);
  func_0x00010b5d2778();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b5d0b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5d0a0a)[extraout_x8] * 4 + 0x10b5d0b7c))();
    return;
  }
  return;
}



/* Entry: 10b5d0bb8; end: 10b5d0be3;  */

undefined8 FUN_10b5d0bb8(undefined8 param_1)

{
  func_0x00010b5d239c();
  FUN_10b5d0be4(param_1);
  return param_1;
}



/* Entry: 10b5d0be4; end: 10b5d0bf7;  */

void FUN_10b5d0be4(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  func_0x00010b5d2778(*(undefined4 *)(param_1 + 0x24));
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b5d0a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5d0a06)[extraout_x8] * 4 + 0x10b5d0a68))();
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10b5d0bf8; end: 10b5d0c0b;  */

void FUN_10b5d0bf8(void)

{
  FUN_10b5d0bb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d0c0c; end: 10b5d0c1b;  */

undefined8 FUN_10b5d0c0c(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5d0c1c; end: 10b5d0c4f;  */

void FUN_10b5d0c1c(long param_1)

{
  ulong *puVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_10b5d0a34();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
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



/* Entry: 10b5d0c50; end: 10b5d0ce7;  */

long * FUN_10b5d0c50(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b5d21d8();
  plVar2 = (long *)(ulong)*(uint *)(param_1 + 0x24);
  uVar1 = *(uint *)(param_1 + 0x24) - 1;
  if (uVar1 < 4) {
    func_0x00010b5d2344(*(undefined8 *)(&UNK_10e5d0dd8 + (ulong)uVar1 * 8));
    param_4 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x00010b5d2164();
    param_4 = *(long **)(unaff_x20 + 0x10);
    uVar3 = 8000;
    func_0x000107c280a8(8000,plVar2);
    func_0x000107c280ac(param_4,uVar3);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d23b8();
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



/* Entry: 10b5d0ce8; end: 10b5d0d9b;  */

long FUN_10b5d0ce8(long param_1)

{
  bool bVar1;
  bool bVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  long extraout_x9;
  long extraout_x9_00;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010b5d25ec(*(undefined8 *)(param_1 + 0x10));
  bVar1 = true;
  bVar2 = extraout_x8 == 0;
  lVar4 = 0;
  if (!bVar2) {
    lVar4 = extraout_x9 + 2;
  }
  func_0x00010b5d2778(*(undefined4 *)(lVar3 + 0x24));
  if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010b5d0d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e5d0a0e)[extraout_x8_00] * 4 + 0x10b5d0d30))();
    return lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b5d2748();
    lVar3 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar3 = *(long *)(extraout_x9_00 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x20) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b5d0d9c; end: 10b5d0dd3;  */

long FUN_10b5d0d9c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b5d088c();
  func_0x00010b5d20f4();
  return param_1 + extraout_x8;
}



/* Entry: 10b5d0dd4; end: 10b5d0f23;  */

void FUN_10b5d0dd4(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x00010b5d21b8();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010b5d2554();
  }
  if (*(ulong *)(unaff_x20 + 0x10) != 0) {
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_10b5d0a34();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5cee00();
        goto LAB_10b5d0f08;
      }
      func_0x00010b5d24b0();
      FUN_10b5d1df4();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5d0944();
        goto LAB_10b5d0f08;
      }
      func_0x00010b5d24b0();
      func_0x00010b5d1f50();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5cf134();
        goto LAB_10b5d0f08;
      }
      func_0x00010b5d24b0();
      func_0x00010b5d2010();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x00010b5d2218();
        FUN_10b5d0f24();
        goto LAB_10b5d0f08;
      }
      func_0x00010b5d24b0();
      FUN_10b5d207c();
      break;
    default:
      goto LAB_10b5d0f08;
    }
    unaff_x21[3] = (ulong)param_1;
  }
LAB_10b5d0f08:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b5d2238();
    if ((*param_1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d0f24; end: 10b5d0f3f;  */

void FUN_10b5d0f24(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5d0f40; end: 10b5d0f63;  */

undefined8 FUN_10b5d0f40(undefined8 param_1)

{
  func_0x00010b5d239c();
  return param_1;
}



/* Entry: 10b5d0f64; end: 10b5d0f77;  */

void FUN_10b5d0f64(void)

{
  FUN_10b5d0f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5d0f78; end: 10b5d0f97;  */

undefined ** FUN_10b5d0f78(void)

{
  return &PTR_DAT_110d23428;
}



/* Entry: 10b5d0f98; end: 10b5d0ff7;  */

long * FUN_10b5d0f98(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b5d21d8();
  if ((int)param_1[2] != 0) {
    func_0x00010b5d2164();
    func_0x00010b5d2208();
    func_0x00010b5d2248();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x00010b5d23b8();
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



/* Entry: 10b5d0ff8; end: 10b5d10f7;  */

long FUN_10b5d0ff8(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong uVar2;
  
  func_0x00010b5d2560();
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



/* Entry: 10b5d10f8; end: 10b5d1127;  */

long * FUN_10b5d10f8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}


