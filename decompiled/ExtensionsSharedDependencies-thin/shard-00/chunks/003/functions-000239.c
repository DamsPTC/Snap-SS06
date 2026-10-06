/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004e9ae0; end: 004e9c3f;  */

dword * FUN_004e9ae0(dword *param_1,long param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x48);
    func_0x004ec690();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  while (iVar3 != 0) {
    func_0x004ec8d4();
    func_0x004ec83c();
    func_0x004ecdf8();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x004ec8d4();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x004ec988(3);
    func_0x004ecdf8();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x54);
    param_4 = &MACH_HEADER.cputype;
    func_0x004ec988();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004e9c40; end: 004e9c53;  */

void FUN_004e9c40(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004eca90();
  func_0x004ecdbc();
  FUN_004e9c40();
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x48);
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x48) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ece3c();
      if (param_1 == (ulong *)0x0) {
        FUN_004ebecc();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004e3a9c();
      }
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e9c54; end: 004e9ca7;  */

long FUN_004e9c54(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_004e35ac();
  }
  __ZdlPv();
  FUN_004eb284(param_1 + 0x30);
  FUN_004e4358(param_1 + 0x18);
  return param_1;
}



/* Entry: 004e9ca8; end: 004e9cbb;  */

void FUN_004e9ca8(void)

{
  FUN_004e9c54();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e9cbc; end: 004e9cc7;  */

undefined ** FUN_004e9cbc(void)

{
  return &PTR_DAT_009f4b10;
}



/* Entry: 004e9cc8; end: 004e9d23;  */

void FUN_004e9cc8(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x004ecc18();
  FUN_004e49a8();
  FUN_004ebeb8(unaff_x19 + 6);
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(unaff_x19[9]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004e0bd0(unaff_x19[10]);
    }
  }
  func_0x004eca84();
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



/* Entry: 004e9d24; end: 004e9def;  */

dword * FUN_004e9d24(dword *param_1,long param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x48);
    func_0x004ec690();
    param_4 = param_1;
  }
  iVar3 = *(int *)(unaff_x20 + 0x20);
  while (iVar3 != 0) {
    func_0x004ec8d4();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x004ec868();
    func_0x004ecdf8();
  }
  iVar3 = *(int *)(unaff_x20 + 0x38);
  while (iVar3 != 0) {
    func_0x004ec8d4();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x004ec988(3);
    func_0x004ecdf8();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x50) + 0x30);
    param_4 = &MACH_HEADER.cputype;
    func_0x004ec988();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004e9df0; end: 004e9e83;  */

/* WARNING: Removing unreachable block (ram,0x004e9e20) */

void FUN_004e9df0(void)

{
  uint uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x004ec66c();
  while (unaff_x22 != 0) {
    FUN_004e145c(*unaff_x21);
    func_0x004ecb7c();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x004ec808();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d2ec0(*(undefined8 *)(unaff_x19 + 0x48));
      func_0x004eca54();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004e1494(*(undefined8 *)(unaff_x19 + 0x50));
      func_0x004eca54();
    }
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
  }
  func_0x004ecb34();
  return;
}



/* Entry: 004e9e84; end: 004e9e87;  */

void FUN_004e9e84(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  puVar1 = (ulong *)(unaff_x21 + 0x18);
  FUN_004e18a8();
  func_0x004ecdbc();
  func_0x004e5994();
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      puVar1 = *(ulong **)(unaff_x21 + 0x48);
      if (puVar1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x48) = puVar1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ece3c();
      if (puVar1 == (ulong *)0x0) {
        FUN_004e4d20();
        *(ulong **)(unaff_x21 + 0x50) = unaff_x22;
        puVar1 = unaff_x22;
      }
      else {
        FUN_004e1b10();
      }
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004e9e88; end: 004e9ecb;  */

long FUN_004e9e88(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e9ecc; end: 004e9edf;  */

void FUN_004e9ecc(void)

{
  FUN_004e9e88();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e9ee0; end: 004e9eeb;  */

undefined ** FUN_004e9ee0(void)

{
  return &PTR_DAT_009f4b58;
}



/* Entry: 004e9eec; end: 004e9f2b;  */

void FUN_004e9eec(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x004eca2c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x004ec9fc();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x004ecc24();
    }
  }
  func_0x004eca84();
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



/* Entry: 004e9f2c; end: 004e9fff;  */

long * FUN_004e9f2c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x004ec83c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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



/* Entry: 004ea000; end: 004ea003;  */

void FUN_004ea000(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x004ecba0();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ecc0c();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004ea004; end: 004ea047;  */

long FUN_004ea004(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004ea048; end: 004ea05b;  */

void FUN_004ea048(void)

{
  FUN_004ea004();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ea05c; end: 004ea067;  */

undefined ** FUN_004ea05c(void)

{
  return &PTR_DAT_009f4ba0;
}



/* Entry: 004ea068; end: 004ea0a7;  */

void FUN_004ea068(void)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x004eca2c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x004ec9fc();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x004ecc24();
    }
  }
  func_0x004eca84();
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



/* Entry: 004ea0a8; end: 004ea17b;  */

long * FUN_004ea0a8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x004ec83c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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



/* Entry: 004ea17c; end: 004ea17f;  */

void FUN_004ea17c(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004ecc00();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x004ecba0();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x004ecc0c();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004ec7b8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004ea180; end: 004ea1b3;  */

long FUN_004ea180(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004ea1b4; end: 004ea1c7;  */

void FUN_004ea1b4(void)

{
  FUN_004ea180();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ea1c8; end: 004ea1d3;  */

undefined ** FUN_004ea1c8(void)

{
  return &PTR_DAT_009f4be8;
}



/* Entry: 004ea1d4; end: 004ea2a3;  */

void FUN_004ea1d4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004eca84();
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



/* Entry: 004ea2a4; end: 004ea2a7;  */

void FUN_004ea2a4(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
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



/* Entry: 004ea2a8; end: 004ea2e7;  */

long FUN_004ea2a8(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return param_1;
}



/* Entry: 004ea2e8; end: 004ea2fb;  */

void FUN_004ea2e8(void)

{
  FUN_004ea2a8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ea2fc; end: 004ea307;  */

undefined ** FUN_004ea2fc(void)

{
  return &PTR_DAT_009f4c30;
}



/* Entry: 004ea308; end: 004ea347;  */

void FUN_004ea308(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x2c) = 0;
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



/* Entry: 004ea348; end: 004ea4a7;  */

segment_command *
FUN_004ea348(segment_command *param_1,undefined8 param_2,ulong param_3,segment_command *param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  segment_command *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    func_0x004ec774();
    func_0x004eca68();
    func_0x004ec898();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x24) != 0) {
    func_0x004ec774();
    func_0x004ecc3c();
    func_0x004ec88c();
    param_4 = param_1;
  }
  switch(*(undefined4 *)(unaff_x20 + 0x2c)) {
  case 4:
    func_0x004ec774();
    func_0x004ecdd4();
    param_4 = &segment_command_00000020;
    func_0x00487cbc();
    func_0x004ec88c();
    goto LAB_004ea474;
  case 5:
    func_0x004ec774();
    func_0x004ecdd4();
    param_4 = (segment_command *)segment_command_00000020.segname;
    break;
  case 6:
    func_0x004ec774();
    func_0x004ecdd4();
    param_4 = (segment_command *)(segment_command_00000020.segname + 8);
    break;
  case 7:
    func_0x004ec774();
    func_0x004ecdd4();
    param_4 = (segment_command *)&segment_command_00000020.vmaddr;
    break;
  default:
    goto LAB_004ea474;
  }
  func_0x00487cbc();
  func_0x004ec898();
LAB_004ea474:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004ec9c4();
  if ((long)param_3 < 0) {
    lVar2 = *(long *)(extraout_x8_00 + 8);
    param_3 = *(ulong *)(extraout_x8_00 + 0x10);
  }
  else {
    lVar2 = extraout_x8_00 + 8;
  }
  if ((long)(int)param_3 <= (long)(*(qword *)unaff_x19 - (long)param_4)) {
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (segment_command *)((long)param_4->segname + (long)(int)param_3 + -8);
  }
  while( true ) {
    uVar3 = unaff_x19->cmd;
    iVar5 = (uVar3 - (int)param_4) + 0x10;
    iVar4 = (int)param_3;
    uVar1 = iVar4 - iVar5;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar4 < iVar5) break;
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (segment_command *)((long)param_4->segname + (long)iVar4 + -8);
}



/* Entry: 004ea4a8; end: 004ea583;  */

void FUN_004ea4a8(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004eca04();
    param_1 = param_1 + 1;
  }
  param_1 = param_1 + (uint)*(byte *)(unaff_x19 + 0x20) * 2;
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    param_1 = param_1 + ((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x24)) * -9 + 0x280U >> 6) + 1;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x2c)) {
  case 4:
    func_0x004eccf4((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x28)) * -9 + 0x280U >> 6);
    break;
  case 5:
  case 6:
  case 7:
    param_1 = param_1 + ((int)LZCOUNT(*(undefined4 *)(unaff_x19 + 0x28)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004ea584; end: 004ea587;  */

void FUN_004ea584(ulong *param_1)

{
  uint uVar1;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
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
    func_0x004ec7b8();
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



/* Entry: 004ea588; end: 004ea5ab;  */

undefined8 FUN_004ea588(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004ea5ac; end: 004ea5bf;  */

void FUN_004ea5ac(void)

{
  FUN_004ea588();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ea5c0; end: 004ea5df;  */

undefined ** FUN_004ea5c0(void)

{
  return &PTR_DAT_009f4c90;
}



/* Entry: 004ea5e0; end: 004ea647;  */

long * FUN_004ea5e0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  if ((int)param_1[2] != 0) {
    func_0x004ec774();
    func_0x004ecb68();
    func_0x004ec898();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004ec9c4();
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



/* Entry: 004ea648; end: 004ea68f;  */

ulong FUN_004ea648(long param_1)

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



/* Entry: 004ea690; end: 004ea6c3;  */

long FUN_004ea690(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004ea6c4; end: 004ea6c7;  */

long FUN_004ea6c4(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004ea6c8; end: 004ea6db;  */

void FUN_004ea6c8(void)

{
  FUN_004ea690();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ea6dc; end: 004ea6e7;  */

undefined ** FUN_004ea6dc(void)

{
  return &PTR_DAT_009f4ce0;
}



/* Entry: 004ea6e8; end: 004ea71b;  */

void FUN_004ea6e8(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004ecd28();
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



/* Entry: 004ea71c; end: 004ea78f;  */

long * FUN_004ea71c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x004ec774();
    func_0x004eca68();
    func_0x004ec88c();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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



/* Entry: 004ea790; end: 004ea7eb;  */

void FUN_004ea790(int param_1)

{
  ulong extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004eca04();
    param_1 = param_1 + 1;
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    func_0x004ec94c();
    func_0x004eccf4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = (int)lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x14) = param_1;
  return;
}



/* Entry: 004ea7ec; end: 004ea84f;  */

void FUN_004ea7ec(ulong *param_1)

{
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == 0) {
      func_0x004d3428();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      func_0x004eca70();
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
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



/* Entry: 004ea850; end: 004ea8fb;  */

void FUN_004ea850(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  func_0x004ece30();
  if (extraout_w8 == 3) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004ea8cc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004eaf50();
    }
  }
  else if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004ea8cc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004eade8();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_004ea8cc;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_004ea8cc;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      FUN_004eab8c();
    }
  }
  __ZdlPv();
LAB_004ea8cc:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004ea8fc; end: 004ea92f;  */

long FUN_004ea8fc(long param_1)

{
  func_0x004ec990();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004ea850(param_1);
  }
  return param_1;
}



/* Entry: 004ea930; end: 004ea943;  */

void FUN_004ea930(void)

{
  FUN_004ea8fc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ea944; end: 004ea95b;  */

long FUN_004ea944(long param_1)

{
  func_0x004ec990();
  func_0x00532f74(param_1 + 0x28);
  FUN_004eb4cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 004ea95c; end: 004eaa7b;  */

void FUN_004ea95c(long param_1)

{
  ulong *puVar1;
  
  FUN_004ea850();
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



/* Entry: 004eaa7c; end: 004eaa7f;  */

void FUN_004eaa7c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004e66a4;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_004ea850();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x004ecd18();
      FUN_004eab30();
      goto LAB_004e66a4;
    }
    func_0x004ec5d8();
    param_1 = unaff_x22;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x004ecd18();
      func_0x004eaaec();
      goto LAB_004e66a4;
    }
    FUN_004ec57c();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_004e66a4;
    if (iVar2 == 1) {
      func_0x004ecd18();
      FUN_004eaa80();
      goto LAB_004e66a4;
    }
    FUN_004ec500();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_004e66a4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec7b8();
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



/* Entry: 004eaa80; end: 004eab2f;  */

void FUN_004eaa80(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004eca78();
  param_2 = param_2 + 0x10;
  FUN_004ead8c(param_1 + 0x10);
  func_0x004ecdb0(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004ece48();
    }
    func_0x00532e08(unaff_x19 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 004eab30; end: 004eab8b;  */

void FUN_004eab30(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_004ebecc();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_004e3a9c();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
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



/* Entry: 004eab8c; end: 004eabbf;  */

long FUN_004eab8c(long param_1)

{
  func_0x004ec990();
  func_0x00532f74(param_1 + 0x28);
  FUN_004eb4cc(param_1 + 0x10);
  return param_1;
}



/* Entry: 004eabc0; end: 004eabd3;  */

void FUN_004eabc0(void)

{
  FUN_004eab8c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004eabd4; end: 004eabdf;  */

undefined ** FUN_004eabd4(void)

{
  return &PTR_DAT_009f4d78;
}



/* Entry: 004eabe0; end: 004eac17;  */

void FUN_004eabe0(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00532fa8(param_1 + 0x28);
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



/* Entry: 004eac18; end: 004ead07;  */

byte * FUN_004eac18(byte *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

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
  
  func_0x004ec7a8();
  uVar5 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar5) {
    func_0x004ec774();
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
      func_0x004ec774();
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
    FUN_00435e9c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return param_4 + iVar7;
    }
    _memcpy(param_4,lVar4,uVar2 & 0xffffffff);
    return param_4 + (int)uVar2;
  }
  return param_4;
}



/* Entry: 004ead08; end: 004ead87;  */

long FUN_004ead08(long param_1)

{
  long extraout_x8;
  ulong uVar1;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long lVar3;
  long lVar4;
  
  lVar2 = param_1 + 0x10;
  func_0x0054de60();
  *(int *)(param_1 + 0x20) = (int)lVar2;
  func_0x004ec94c((long)(int)lVar2);
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
    func_0x00487c3c(uVar1);
    func_0x004eca54();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x30) = (int)lVar4;
  return lVar4;
}



/* Entry: 004ead88; end: 004ead8b;  */

void FUN_004ead88(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004eca78();
  param_2 = param_2 + 0x10;
  FUN_004ead8c(param_1 + 0x10);
  func_0x004ecdb0(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x004ece48();
    }
    func_0x00532e08(unaff_x19 + 0x28);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 004ead8c; end: 004eade7;  */

undefined1  [16] FUN_004ead8c(undefined8 param_1,int *param_2)

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
    func_0x004ec9d0();
    func_0x004ec63c();
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



/* Entry: 004eade8; end: 004eae13;  */

long FUN_004eade8(long param_1)

{
  func_0x004ec990();
  FUN_004e43e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 004eae14; end: 004eae27;  */

void FUN_004eae14(void)

{
  FUN_004eade8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004eae28; end: 004eae33;  */

undefined ** FUN_004eae28(void)

{
  return &PTR_DAT_009f4dc0;
}



/* Entry: 004eae34; end: 004eae67;  */

void FUN_004eae34(long param_1)

{
  ulong *puVar1;
  
  func_0x004e49bc(param_1 + 0x10);
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



/* Entry: 004eae68; end: 004eaedb;  */

long * FUN_004eae68(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x004ec758();
    param_3 = (ulong)*(uint *)(param_2 + 0x54);
    func_0x004ec78c();
    func_0x004ecd00();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
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



/* Entry: 004eaedc; end: 004eaf4b;  */

ulong FUN_004eaedc(long param_1)

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
    FUN_004e3744(*puVar1);
    func_0x004ecb7c();
    puVar1 = puVar1 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    uVar4 = lVar2 + uVar4;
  }
  *(int *)(param_1 + 0x28) = (int)uVar4;
  return uVar4;
}



/* Entry: 004eaf4c; end: 004eaf4f;  */

void FUN_004eaf4c(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x004eca78();
  FUN_004e3760(param_1 + 0x10,param_2 + 0x10);
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
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



/* Entry: 004eaf50; end: 004eaf83;  */

long FUN_004eaf50(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e380c();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004eaf84; end: 004eaf97;  */

void FUN_004eaf84(void)

{
  FUN_004eaf50();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004eaf98; end: 004eafa3;  */

undefined ** FUN_004eaf98(void)

{
  return &PTR_DAT_009f4e08;
}



/* Entry: 004eafa4; end: 004eb083;  */

void FUN_004eafa4(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    FUN_004e3884(unaff_x19[3]);
  }
  func_0x004eca84();
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



/* Entry: 004eb084; end: 004eb1e7;  */

void FUN_004eb084(ulong *param_1)

{
  ulong *extraout_x8;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec700();
  if (((ulong)param_1 & 1) != 0) {
    func_0x004ecb10();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecb04();
    if (extraout_x8 == (ulong *)0x0) {
      FUN_004ebecc();
      *(ulong **)(unaff_x21 + 0x18) = param_1;
    }
    else {
      param_1 = extraout_x8;
      FUN_004e3a9c();
    }
  }
  func_0x004ec728();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec7b8();
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



/* Entry: 004eb1e8; end: 004eb227;  */

void FUN_004eb1e8(void)

{
  func_0x004ece1c();
  FUN_004e5980();
  return;
}



/* Entry: 004eb228; end: 004eb257;  */

long * FUN_004eb228(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 004eb258; end: 004eb283;  */

long FUN_004eb258(long param_1)

{
  FUN_004eb284(param_1 + 0x20);
  FUN_004eb228(param_1 + 8);
  return param_1;
}



/* Entry: 004eb284; end: 004eb2b3;  */

long * FUN_004eb284(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 004eb2b4; end: 004eb307;  */

int * FUN_004eb2b4(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_004eb308(param_1,0,iVar1);
    *param_1 = iVar1;
    func_0x004eb4a0(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 004eb308; end: 004eb30b;  */

void FUN_004eb308(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar2 = *(int *)(param_1 + 4);
  plVar12 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    if ((int)param_3 < 2) goto LAB_004eb364;
  }
  else {
    plVar12 = (long *)plVar12[-1];
    if ((int)param_3 < 2) {
LAB_004eb364:
      uVar13 = 2;
      goto LAB_004eb37c;
    }
    if (0x3ffffffb < iVar2) {
      uVar13 = 0x7fffffff;
      goto LAB_004eb37c;
    }
  }
  uVar1 = iVar2 * 2 + 2;
  if ((int)uVar1 <= (int)param_3) {
    uVar1 = param_3;
  }
  uVar13 = (ulong)uVar1;
LAB_004eb37c:
  plVar8 = (long *)(uVar13 * 4 + 8);
  if (plVar12 == (long *)0x0) {
    uVar13 = param_2;
    FUN_0048b180();
    uVar13 = uVar13 - 8 >> 2;
    if (0x7ffffffe < uVar13) {
      uVar13 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar6 = aplStack_58;
    aplStack_58[0] = plVar8;
    func_0x0048b1cc(pplVar6,&uStack_48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar6 != (long **)0x0) {
      plVar12 = (long *)(long)*(char *)((long)pplVar6 + 0x17);
      pplVar9 = pplVar6;
      if ((long)plVar12 < 0) {
        pplVar9 = (long **)*pplVar6;
        plVar12 = pplVar6[1];
      }
      FUN_00776714(aplStack_58,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-ac22eb7a7f3d/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                   ,0x10a,pplVar9,plVar12);
      func_0x0048b1e8(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar6 = aplStack_58;
      FUN_005558a0();
      plVar12 = pplVar6[1] + -1;
      if (*plVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar12);
        return;
      }
      uVar13 = (long)*(int *)((long)pplVar6 + 4) * 4 + 8;
      ppuVar4 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar12);
      if (ppuVar4[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar5 = ppuVar4[2];
      uVar10 = 0x3b - LZCOUNT(uVar13);
      bVar3 = puVar5[0x50];
      if (uVar10 < bVar3) {
        lVar11 = *(long *)(puVar5 + 0x58);
        *plVar12 = *(long *)(lVar11 + uVar10 * 8);
        *(long **)(lVar11 + uVar10 * 8) = plVar12;
      }
      else {
        if (bVar3 == 0) {
          lVar11 = 0;
        }
        else {
          _memmove(plVar12,*(undefined8 *)(puVar5 + 0x58),(ulong)bVar3 << 3);
          lVar11 = (ulong)(byte)puVar5[0x50] << 3;
        }
        uVar10 = uVar13 >> 3;
        if (0 < (long)((uVar13 & 0xfffffffffffffff8) - lVar11)) {
          _bzero((long)plVar12 + lVar11);
        }
        *(long **)(puVar5 + 0x58) = plVar12;
        if (0x3f < uVar10) {
          uVar10 = 0x40;
        }
        puVar5[0x50] = (char)uVar10;
      }
      return;
    }
    plVar7 = plVar12;
    func_0x0048b21c(plVar12,plVar8,1);
    plVar8 = plVar7;
  }
  *plVar8 = (long)plVar12;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar8 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 2);
    }
    FUN_004eb478(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar13;
  *(long **)(param_1 + 8) = plVar8 + 1;
  return;
}



/* Entry: 004eb30c; end: 004eb477;  */

void FUN_004eb30c(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  
  iVar2 = *(int *)(param_1 + 4);
  plVar12 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    if ((int)param_3 < 2) goto LAB_004eb364;
  }
  else {
    plVar12 = (long *)plVar12[-1];
    if ((int)param_3 < 2) {
LAB_004eb364:
      uVar13 = 2;
      goto LAB_004eb37c;
    }
    if (0x3ffffffb < iVar2) {
      uVar13 = 0x7fffffff;
      goto LAB_004eb37c;
    }
  }
  uVar1 = iVar2 * 2 + 2;
  if ((int)uVar1 <= (int)param_3) {
    uVar1 = param_3;
  }
  uVar13 = (ulong)uVar1;
LAB_004eb37c:
  plVar8 = (long *)(uVar13 * 4 + 8);
  if (plVar12 == (long *)0x0) {
    uVar13 = param_2;
    FUN_0048b180();
    uVar13 = uVar13 - 8 >> 2;
    if (0x7ffffffe < uVar13) {
      uVar13 = 0x7fffffff;
    }
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    pplVar6 = aplStack_58;
    aplStack_58[0] = plVar8;
    func_0x0048b1cc(pplVar6,&uStack_48,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (pplVar6 != (long **)0x0) {
      plVar12 = (long *)(long)*(char *)((long)pplVar6 + 0x17);
      pplVar9 = pplVar6;
      if ((long)plVar12 < 0) {
        pplVar9 = (long **)*pplVar6;
        plVar12 = pplVar6[1];
      }
      FUN_00776714(aplStack_58,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-ac22eb7a7f3d/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                   ,0x10a,pplVar9,plVar12);
      func_0x0048b1e8(aplStack_58,"Requested size is too large to fit into size_t.");
      pplVar6 = aplStack_58;
      FUN_005558a0();
      plVar12 = pplVar6[1] + -1;
      if (*plVar12 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar12);
        return;
      }
      uVar13 = (long)*(int *)((long)pplVar6 + 4) * 4 + 8;
      ppuVar4 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar12);
      if (ppuVar4[1] != (undefined *)*extraout_x8) {
        return;
      }
      puVar5 = ppuVar4[2];
      uVar10 = 0x3b - LZCOUNT(uVar13);
      bVar3 = puVar5[0x50];
      if (uVar10 < bVar3) {
        lVar11 = *(long *)(puVar5 + 0x58);
        *plVar12 = *(long *)(lVar11 + uVar10 * 8);
        *(long **)(lVar11 + uVar10 * 8) = plVar12;
      }
      else {
        if (bVar3 == 0) {
          lVar11 = 0;
        }
        else {
          _memmove(plVar12,*(undefined8 *)(puVar5 + 0x58),(ulong)bVar3 << 3);
          lVar11 = (ulong)(byte)puVar5[0x50] << 3;
        }
        uVar10 = uVar13 >> 3;
        if (0 < (long)((uVar13 & 0xfffffffffffffff8) - lVar11)) {
          _bzero((long)plVar12 + lVar11);
        }
        *(long **)(puVar5 + 0x58) = plVar12;
        if (0x3f < uVar10) {
          uVar10 = 0x40;
        }
        puVar5[0x50] = (char)uVar10;
      }
      return;
    }
    plVar7 = plVar12;
    func_0x0048b21c(plVar12,plVar8,1);
    plVar8 = plVar7;
  }
  *plVar8 = (long)plVar12;
  if (0 < *(int *)(param_1 + 4)) {
    if (0 < (int)param_2) {
      _memcpy(plVar8 + 1,*(undefined8 *)(param_1 + 8),(param_2 & 0xffffffff) << 2);
    }
    FUN_004eb478(param_1);
  }
  *(int *)(param_1 + 4) = (int)uVar13;
  *(long **)(param_1 + 8) = plVar8 + 1;
  return;
}



/* Entry: 004eb478; end: 004eb4cb;  */

void FUN_004eb478(long param_1)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  
  plVar4 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar4);
    return;
  }
  uVar5 = (long)*(int *)(param_1 + 4) * 4 + 8;
  ppuVar2 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar4);
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar6 = 0x3b - LZCOUNT(uVar5);
    bVar1 = puVar3[0x50];
    if (uVar6 < bVar1) {
      lVar7 = *(long *)(puVar3 + 0x58);
      *plVar4 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar4;
    }
    else {
      if (bVar1 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar4,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar7 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar6 = uVar5 >> 3;
      if (0 < (long)((uVar5 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar4 + lVar7);
      }
      *(long **)(puVar3 + 0x58) = plVar4;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar3[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 004eb4cc; end: 004eb4ff;  */

long FUN_004eb4cc(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    FUN_004eb500(param_1);
  }
  return param_1;
}



/* Entry: 004eb500; end: 004eb513;  */

void FUN_004eb500(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004eb514; end: 004ebeb7;  */

void FUN_004eb514(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x004eca0c();
  }
  else {
    func_0x004ec8a4();
  }
  *puVar1 = &PTR_DAT_009f3328;
  puVar1[1] = param_1;
  func_0x004ece10();
  return;
}



/* Entry: 004ebeb8; end: 004ebecb;  */

void FUN_004ebeb8(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 004ebecc; end: 004ebefb;  */

long FUN_004ebecc(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004ecb40();
  if (param_1 == 0) {
    func_0x004ecc34();
  }
  else {
    func_0x004ecb94();
  }
  func_0x004eccd4();
  func_0x004e5060();
  func_0x004e53b0(&PTR_FUN_009f2a98);
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4ff0();
  }
  func_0x004e5354(unaff_x19 + 0x10);
  FUN_004e4410(unaff_x19 + 0x28);
  lVar1 = unaff_x20 + 0x40;
  func_0x00487c6c();
  *(long *)(unaff_x19 + 0x40) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x54) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  return unaff_x19;
}



/* Entry: 004ebefc; end: 004ebfd3;  */

dword * FUN_004ebefc(long param_1)

{
  uint uVar1;
  dword *pdVar2;
  dword *pdVar3;
  long unaff_x19;
  dword *unaff_x21;
  
  func_0x004ecb4c();
  if (param_1 == 0) {
    pdVar2 = &segment_command_00000020.nsects;
    __Znwm();
  }
  else {
    pdVar2 = unaff_x21;
    func_0x005510c4();
  }
  *(dword **)(pdVar2 + 2) = unaff_x21;
  *(undefined ***)pdVar2 = &PTR_FUN_009f3f58;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ec780();
  }
  pdVar2[4] = *(undefined4 *)(unaff_x19 + 0x10);
  pdVar2[5] = 0;
  FUN_004eb1e8(pdVar2 + 6);
  func_0x004eb208(pdVar2 + 0xc);
  uVar1 = pdVar2[4];
  if ((uVar1 & 1) == 0) {
    pdVar3 = (dword *)0x0;
  }
  else {
    pdVar3 = unaff_x21;
    FUN_004df474();
  }
  *(dword **)(pdVar2 + 0x12) = pdVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = (dword *)0x0;
  }
  else {
    FUN_004ebfe8();
  }
  *(dword **)(pdVar2 + 0x14) = unaff_x21;
  *(undefined2 *)(pdVar2 + 0x16) = *(undefined2 *)(unaff_x19 + 0x58);
  return pdVar2;
}



/* Entry: 004ebfd4; end: 004ebfe7;  */

void FUN_004ebfd4(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (0 < (int)param_1[1]) {
    uVar1 = (uint)param_1[1];
    puVar2 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)(*param_1 + 7);
    }
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar3 = (ulong)uVar1;
    do {
      (**(code **)(*(long *)*puVar2 + 0x18))();
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}



/* Entry: 004ebfe8; end: 004ec023;  */

long FUN_004ebfe8(long param_1)

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
  
  func_0x004ecb40();
  if (param_1 == 0) {
    __Znwm(0x118);
  }
  else {
    func_0x005510c4();
  }
  func_0x004eccd4();
  func_0x004e5060();
  func_0x004e53b0(&PTR_FUN_009f2b38);
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4ff0();
  }
  func_0x004e52e0();
  FUN_004e42e8();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x21;
  func_0x004e18b8((undefined8 *)(unaff_x19 + 0x30),unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x21;
  func_0x004e18c8((undefined8 *)(unaff_x19 + 0x48),unaff_x20 + 0x48);
  lVar2 = unaff_x20 + 0x60;
  func_0x00487c6c();
  *(long *)(unaff_x19 + 0x60) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    func_0x004e5258();
  }
  *(long *)(unaff_x19 + 0x68) = lVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e49d0();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x004e5258();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4a08();
  }
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de228();
  }
  *(undefined8 *)(unaff_x19 + 0x88) = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4acc();
  }
  *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4b04();
  }
  *(undefined8 *)(unaff_x19 + 0x98) = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x004e5258();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4b60();
  }
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  if ((uVar1 >> 9 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4bc4();
  }
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar3;
  if ((uVar1 >> 10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4c2c();
  }
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar3;
  if ((uVar1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de294();
  }
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  if ((uVar1 >> 0xc & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x004de2c8();
  }
  *(undefined8 *)(unaff_x19 + 200) = uVar3;
  if ((uVar1 >> 0xd & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    FUN_004e4cc0();
  }
  *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
  if ((uVar1 >> 0xe & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_004e4d20();
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



/* Entry: 004ec024; end: 004ec12f;  */

void FUN_004ec024(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004eca78();
  if (param_1 == 0) {
    func_0x004ecab4();
  }
  else {
    func_0x004ec8c8();
  }
  func_0x004ecaf8();
  func_0x004ecaec(&PTR_FUN_009f3be8);
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec780();
  }
  func_0x004ecb70();
  lVar1 = unaff_x20 + 0x18;
  func_0x004ecd8c();
  *(long *)(unaff_x21 + 0x18) = lVar1;
  lVar1 = unaff_x20 + 0x20;
  func_0x004ecd8c();
  *(long *)(unaff_x21 + 0x20) = lVar1;
  if ((*(byte *)(unaff_x21 + 0x10) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    func_0x004eca60();
  }
  *(long *)(unaff_x21 + 0x28) = lVar1;
  return;
}



/* Entry: 004ec130; end: 004ec1e3;  */

undefined8 * FUN_004ec130(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x004ecdec();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004ecc34();
  }
  else {
    func_0x004ecb94();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_009f3eb8;
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x004ec780();
  }
  func_0x004ecb1c();
  FUN_004e42e8();
  puVar2 = param_1 + 6;
  func_0x004eb208();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    func_0x004ecae4();
  }
  param_1[9] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    FUN_004e4d20();
  }
  param_1[10] = unaff_x20;
  return param_1;
}



/* Entry: 004ec1e4; end: 004ec23f;  */

void FUN_004ec1e4(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x004eca78();
  if (param_1 == 0) {
    func_0x004eca4c();
  }
  else {
    func_0x004ec7f0();
  }
  func_0x004ecaf8();
  func_0x004ecaec(&PTR_DAT_009f3968);
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec780();
  }
  func_0x004ecb70();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec8bc();
  }
  func_0x004ecca4();
  return;
}



/* Entry: 004ec240; end: 004ec27b;  */

qword * FUN_004ec240(long param_1,qword param_2,long param_3)

{
  uint uVar1;
  qword qVar2;
  qword *unaff_x20;
  
  func_0x004ecb40();
  if (param_1 == 0) {
    unaff_x20 = &segment_command_00000020.fileoff;
    __Znwm();
  }
  else {
    param_2 = 0x48;
    func_0x005510c4();
  }
  func_0x004eccd4();
  unaff_x20[1] = param_2;
  *unaff_x20 = (qword)&PTR_FUN_009fd778;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(unaff_x20 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(unaff_x20 + 2) = uVar1;
  *(dword *)((long)unaff_x20 + 0x14) = 0;
  *(undefined4 *)(unaff_x20 + 8) = *(undefined4 *)(param_3 + 0x40);
  if ((uVar1 & 1) == 0) {
    qVar2 = 0;
  }
  else {
    qVar2 = param_2;
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  unaff_x20[3] = qVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    qVar2 = 0;
  }
  else {
    qVar2 = param_2;
    func_0x004ec4d0(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  unaff_x20[4] = qVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    qVar2 = 0;
  }
  else {
    qVar2 = param_2;
    FUN_00512aec(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  unaff_x20[5] = qVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004ec4d0(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  unaff_x20[6] = param_2;
  if (*(int *)(unaff_x20 + 8) == 3) {
    unaff_x20[7] = *(undefined8 *)(param_3 + 0x38);
  }
  return unaff_x20;
}



/* Entry: 004ec27c; end: 004ec2cb;  */

long FUN_004ec27c(long param_1)

{
  func_0x004ecb4c();
  if (param_1 == 0) {
    func_0x004eca0c();
  }
  else {
    func_0x004ec874();
  }
  func_0x004eca14(&PTR_DAT_009f3558);
  FUN_004e7e8c();
  return param_1;
}



/* Entry: 004ec2cc; end: 004ec383;  */

void FUN_004ec2cc(long param_1)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  func_0x004eca78();
  if (param_1 == 0) {
    func_0x004eca4c();
  }
  else {
    func_0x004ec7f0();
  }
  func_0x004ecaf8();
  func_0x004ecaec(&PTR_DAT_009f3698);
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec780();
  }
  func_0x004ecb70();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x004ec8bc();
  }
  func_0x004ecca4();
  return;
}



/* Entry: 004ec384; end: 004ec3d3;  */

long FUN_004ec384(long param_1)

{
  func_0x004ecb4c();
  if (param_1 == 0) {
    func_0x004eca0c();
  }
  else {
    func_0x004ec874();
  }
  func_0x004eca14(&PTR_FUN_009f3418);
  FUN_004e74a8();
  return param_1;
}



/* Entry: 004ec3d4; end: 004ec49b;  */

qword * FUN_004ec3d4(long param_1)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  undefined8 uVar4;
  long unaff_x19;
  qword *unaff_x21;
  
  func_0x004ecb4c();
  if (param_1 == 0) {
    pqVar2 = &segment_command_00000020.vmsize;
    __Znwm();
  }
  else {
    pqVar2 = unaff_x21;
    func_0x005510c4();
  }
  pqVar2[1] = (qword)unaff_x21;
  *pqVar2 = (qword)&PTR_FUN_009f3ff8;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ec780();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(pqVar2 + 2) = uVar1;
  *(undefined4 *)((long)pqVar2 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    pqVar3 = unaff_x21;
    FUN_004ec49c();
  }
  pqVar2[3] = (qword)pqVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    pqVar3 = (qword *)0x0;
  }
  else {
    pqVar3 = unaff_x21;
    func_0x004d3428();
  }
  pqVar2[4] = (qword)pqVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x21 = (qword *)0x0;
  }
  else {
    FUN_004df474();
  }
  pqVar2[5] = (qword)unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined2 *)(pqVar2 + 7) = *(undefined2 *)(unaff_x19 + 0x38);
  pqVar2[6] = uVar4;
  return pqVar2;
}



/* Entry: 004ec49c; end: 004ec4ff;  */

undefined8 * FUN_004ec49c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x004ecb40();
  if (param_1 == 0) {
    func_0x004ecd94();
  }
  else {
    func_0x004ecd9c();
    param_1 = unaff_x20;
  }
  func_0x004eccd4();
  lVar2 = param_3;
  func_0x004eca78();
  puVar1 = (undefined8 *)(param_1 + 8);
  *puVar1 = param_2;
  *unaff_x19 = &PTR_FUN_009f3f08;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x004ec780();
  }
  func_0x004ecb1c();
  FUN_004eb1e8();
  uVar3 = *(undefined4 *)(param_3 + 0x48);
  *(undefined4 *)(unaff_x19 + 9) = uVar3;
  if ((*(byte *)(unaff_x19 + 2) & 1) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    func_0x004ecae4();
    uVar3 = *(undefined4 *)(unaff_x19 + 9);
  }
  unaff_x19[6] = puVar1;
  unaff_x19[7] = *(undefined8 *)(param_3 + 0x38);
  switch(uVar3) {
  case 3:
    func_0x004ecbac();
    func_0x004ec024();
    break;
  case 4:
    func_0x004ecbac();
    FUN_004ec130();
    break;
  case 5:
    func_0x004ecbac();
    FUN_004ec1e4();
    break;
  case 6:
    func_0x004ecbac();
    func_0x004ec0a4();
    break;
  case 7:
    func_0x004ecbac();
    FUN_004ec240();
    break;
  default:
    goto LAB_004e7814;
  case 9:
    func_0x004ecbac();
    FUN_004ec27c();
    break;
  case 0xb:
    func_0x004ecbac();
    func_0x004ec2cc();
    break;
  case 0xc:
    func_0x004ecbac();
    func_0x004ec328();
    break;
  case 0xd:
    func_0x004ecbac();
    FUN_004ec384();
  }
  unaff_x19[8] = puVar1;
LAB_004e7814:
  return unaff_x19;
}



/* Entry: 004ec500; end: 004ec57b;  */

void FUN_004ec500(long param_1)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004eca78();
  if (param_1 == 0) {
    func_0x004ecb58();
  }
  else {
    func_0x004ec918();
  }
  func_0x004ecaf8();
  func_0x004ecaec(&PTR_FUN_009f3508);
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec780();
  }
  FUN_004eb2b4(unaff_x21 + 0x10);
  *(undefined4 *)(unaff_x21 + 0x20) = 0;
  lVar1 = unaff_x20 + 0x28;
  func_0x004ecd8c();
  *(long *)(unaff_x21 + 0x28) = lVar1;
  *(undefined4 *)(unaff_x21 + 0x30) = 0;
  return;
}


