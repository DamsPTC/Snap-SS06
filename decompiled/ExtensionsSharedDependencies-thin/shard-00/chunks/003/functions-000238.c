/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004e7e8c; end: 004e7e97;  */

void FUN_004e7e8c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 004e7e98; end: 004e7eef;  */

void FUN_004e7e98(ulong *param_1)

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



/* Entry: 004e7ef0; end: 004e7f6f;  */

void FUN_004e7ef0(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x30) == 4) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004e7f4c;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_004f0520();
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) != 3) goto LAB_004e7f4c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004e7f4c;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_004e8374();
    }
  }
  __ZdlPv();
LAB_004e7f4c:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 004e7f70; end: 004e7f9b;  */

undefined8 FUN_004e7f70(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e7f9c(param_1);
  return param_1;
}



/* Entry: 004e7f9c; end: 004e7fdb;  */

void FUN_004e7f9c(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) == 4) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004e7f4c;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_004f0520();
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) != 3) goto LAB_004e7f4c;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004e7f4c;
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_004e8374();
    }
  }
  __ZdlPv();
LAB_004e7f4c:
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 004e7fdc; end: 004e7fdf;  */

undefined8 FUN_004e7fdc(undefined8 param_1)

{
  func_0x004ec990();
  FUN_004e7f9c(param_1);
  return param_1;
}



/* Entry: 004e7fe0; end: 004e7ff3;  */

void FUN_004e7fe0(void)

{
  FUN_004e7f70();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e7ff4; end: 004e8003;  */

long FUN_004e7ff4(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e7820();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d53c0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e8004; end: 004e8043;  */

void FUN_004e8004(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  unaff_x19[4] = 0;
  FUN_004e7ef0();
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



/* Entry: 004e8044; end: 004e80cf;  */

long * FUN_004e8044(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x004ec774();
    func_0x004ec930();
    func_0x004ec880();
    param_4 = param_1;
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x30);
  if (*(uint *)(unaff_x20 + 0x30) - 3 < 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    func_0x004ec988();
    param_4 = plVar2;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004ec9c4();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
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



/* Entry: 004e80d0; end: 004e8177;  */

void FUN_004e80d0(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004eca04();
  }
  if (*(int *)(unaff_x19 + 0x30) == 4) {
    FUN_004d3274(*(undefined8 *)(unaff_x19 + 0x28));
  }
  else if (*(int *)(unaff_x19 + 0x30) == 3) {
    func_0x004e855c(*(undefined8 *)(unaff_x19 + 0x28));
    func_0x004ec6a0();
    func_0x004ecde0();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
  }
  func_0x004ecb34();
  return;
}



/* Entry: 004e8178; end: 004e8373;  */

void FUN_004e8178(ulong *param_1)

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
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004ecba0();
    if (param_1 == (ulong *)0x0) {
      func_0x004ec9f4();
      unaff_x21[3] = (ulong)param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x20) != 0) {
    unaff_x21[4] = *(ulong *)(unaff_x20 + 0x20);
  }
  func_0x004ec82c();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 == 0) goto LAB_004e8274;
  iVar2 = (int)unaff_x21[6];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_004e7ef0();
    }
    *(int *)(unaff_x21 + 6) = iVar1;
  }
  if (iVar1 == 4) {
    if (iVar2 == 4) {
      param_1 = (ulong *)unaff_x21[5];
      FUN_004f097c();
      goto LAB_004e8274;
    }
    func_0x004d3468();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 3) goto LAB_004e8274;
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[5];
      func_0x004e8290();
      goto LAB_004e8274;
    }
    FUN_004ec3d4();
    param_1 = unaff_x22;
  }
  unaff_x21[5] = (ulong)param_1;
LAB_004e8274:
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



/* Entry: 004e8374; end: 004e83c7;  */

long FUN_004e8374(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004e7820();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d53c0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e83c8; end: 004e83db;  */

void FUN_004e83c8(void)

{
  FUN_004e8374();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e83dc; end: 004e83e7;  */

undefined ** FUN_004e83dc(void)

{
  return &PTR_DAT_009f4670;
}



/* Entry: 004e83e8; end: 004e8457;  */

void FUN_004e83e8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004e78c0(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004ecc24();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004d5460(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
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



/* Entry: 004e8458; end: 004e8603;  */

dword * FUN_004e8458(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004ec7a8();
  if (*(long *)(param_1 + 0xc) != 0) {
    func_0x004ec774();
    func_0x004ecb68();
    func_0x004ec880();
    param_4 = param_1;
  }
  func_0x004ece04();
  if ((bool)in_ZR) {
    func_0x004ec774();
    func_0x004eca68();
    func_0x004ec898();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    func_0x004ec774();
    func_0x004ecc3c();
    func_0x004ec898();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x14);
    param_4 = &MACH_HEADER.cputype;
    func_0x004ec988();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x004ec988();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (dword *)((long)&segment_command_00000020.nsects + 3);
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
    if ((long)(int)param_3 <= *(long *)unaff_x19 - (long)param_4) {
      _memcpy(param_4,lVar2,param_3 & 0xffffffff);
      return (dword *)((long)param_4 + (long)(int)param_3);
    }
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
  return param_4;
}



/* Entry: 004e8604; end: 004e861f;  */

long FUN_004e8604(long param_1)

{
  long extraout_x8;
  
  FUN_004e7a00();
  func_0x004ec6a0();
  return param_1 + extraout_x8;
}



/* Entry: 004e8620; end: 004e8623;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004e8620(ulong *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar2 = (uVar1 & 7) == 0;
  if (!(bool)uVar2) {
    if ((uVar1 & 1) != 0) {
      func_0x004ecba0();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_004ec49c();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004e7b2c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004ecc0c();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_004df474();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004d5818();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x004ece04();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x38) = extraout_w8;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x39) = 1;
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



/* Entry: 004e8624; end: 004e8667;  */

long FUN_004e8624(long param_1)

{
  func_0x004ec990();
  func_0x00532f74(param_1 + 0x18);
  func_0x00532f74(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e8668; end: 004e867b;  */

void FUN_004e8668(void)

{
  FUN_004e8624();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e867c; end: 004e8687;  */

undefined ** FUN_004e867c(void)

{
  return &PTR_DAT_009f46c0;
}



/* Entry: 004e8688; end: 004e86cf;  */

void FUN_004e8688(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x004ecc18();
  FUN_00532fa8();
  FUN_00532fa8(unaff_x19 + 4);
  if ((unaff_x19[2] & 1) != 0) {
    FUN_004d9bf4(unaff_x19[5]);
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



/* Entry: 004e86d0; end: 004e87bf;  */

long * FUN_004e86d0(long param_1,long param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long unaff_x22;
  int iVar5;
  
  plVar3 = param_3;
  func_0x004ec9d0();
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    plVar3 = (long *)(ulong)*(uint *)(param_2 + 0x18);
    unaff_x20 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x004ec988();
  }
  func_0x004ecdc8(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_004e872c;
  }
  else if ((int)param_2 != 0) {
LAB_004e872c:
    func_0x004ecce0();
    param_2 = 2;
    unaff_x20 = param_3;
    func_0x004ecbb8();
  }
  func_0x004ecdc8(*(undefined8 *)(unaff_x21 + 0x20));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_004e8788;
  }
  else if ((int)param_2 == 0) goto LAB_004e8788;
  func_0x004ecce0();
  unaff_x20 = param_3;
  func_0x004ecbb8(param_3,3);
LAB_004e8788:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x004ec9c4();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)unaff_x20 < (long)(int)plVar3) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)unaff_x20) + 0x10;
      iVar4 = (int)plVar3;
      plVar3 = (long *)(ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)unaff_x20 + (long)iVar5);
      unaff_x20 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (long *)((long)unaff_x20 + (long)iVar4);
  }
  _memcpy(unaff_x20,lVar2,(ulong)plVar3 & 0xffffffff);
  return (long *)((long)unaff_x20 + (long)(int)plVar3);
}



/* Entry: 004e87c0; end: 004e8857;  */

void FUN_004e87c0(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  cVar1 = *(char *)(uVar2 + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_004e87fc;
  }
  else if (cVar1 == '\0') goto LAB_004e87fc;
  FUN_0048910c();
LAB_004e87fc:
  uVar2 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    FUN_0048910c();
    func_0x004eca54();
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_004d2ec0(*(undefined8 *)(param_1 + 0x28));
    func_0x004eca54();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004ecd58();
  }
  func_0x004ecb34();
  return;
}



/* Entry: 004e8858; end: 004e885b;  */

void FUN_004e8858(ulong *param_1,long param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004ec9d0();
  uVar1 = param_1[1];
  func_0x004ecdb0(*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004ece48();
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x00532e08();
  }
  func_0x004ecdb0(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x004ece48();
    }
    param_1 = (ulong *)(unaff_x21 + 0x20);
    func_0x00532e08();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x28);
    if (param_1 == (ulong *)0x0) {
      func_0x004ec9f4();
      *(ulong **)(unaff_x21 + 0x28) = param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  func_0x004ec714();
  if ((extraout_x8_01 & 1) != 0) {
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



/* Entry: 004e885c; end: 004e88af;  */

long FUN_004e885c(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d89d4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d89d4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e88b0; end: 004e88c3;  */

void FUN_004e88b0(void)

{
  FUN_004e885c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e88c4; end: 004e88cf;  */

undefined ** FUN_004e88c4(void)

{
  return &PTR_DAT_009f4710;
}



/* Entry: 004e88d0; end: 004e8933;  */

void FUN_004e88d0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004ec9fc();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004d8a28(param_1[4]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x004d8a28(param_1[5]);
    }
  }
  func_0x004eca84();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    *(undefined1 *)*param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x17) = 0;
  return;
}



/* Entry: 004e8934; end: 004e8a4b;  */

long * FUN_004e8934(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x20);
    func_0x004ec868();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x20);
    param_4 = (long *)((long)&MACH_HEADER.magic + 3);
    func_0x004ec988();
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
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 004e8a4c; end: 004e8a67;  */

long FUN_004e8a4c(long param_1)

{
  long extraout_x8;
  
  FUN_004d8b2c();
  func_0x004ec6a0();
  return param_1 + extraout_x8;
}



/* Entry: 004e8a68; end: 004e8a6b;  */

void FUN_004e8a68(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004ecba0();
      if (param_1 == (ulong *)0x0) {
        func_0x004ec9f4();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004ecc0c();
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x004ec4d0();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x004d8ba4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        func_0x004ec4d0();
        *(ulong **)(unaff_x21 + 0x28) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x004d8ba4();
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



/* Entry: 004e8a6c; end: 004e8a8f;  */

undefined8 FUN_004e8a6c(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e8a90; end: 004e8aa3;  */

void FUN_004e8a90(void)

{
  FUN_004e8a6c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e8aa4; end: 004e8b1f;  */

undefined ** FUN_004e8aa4(void)

{
  return &PTR_DAT_009f4758;
}



/* Entry: 004e8b20; end: 004e8b53;  */

long FUN_004e8b20(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e8b54; end: 004e8b67;  */

void FUN_004e8b54(void)

{
  FUN_004e8b20();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e8b68; end: 004e8b73;  */

undefined ** FUN_004e8b68(void)

{
  return &PTR_DAT_009f47a0;
}



/* Entry: 004e8b74; end: 004e8ba7;  */

void FUN_004e8b74(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x004ec9e8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec9fc();
  }
  func_0x004ecbf0();
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



/* Entry: 004e8ba8; end: 004e8c13;  */

long * FUN_004e8ba8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x004ec774();
    func_0x004ec930();
    func_0x004ec880();
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



/* Entry: 004e8c14; end: 004e8c6b;  */

void FUN_004e8c14(int param_1)

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
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x004ec8f0();
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



/* Entry: 004e8c6c; end: 004e8c6f;  */

void FUN_004e8c6c(ulong *param_1)

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
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    *(long *)(unaff_x21 + 0x20) = *(long *)(unaff_x20 + 0x20);
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



/* Entry: 004e8c70; end: 004e8c93;  */

undefined8 FUN_004e8c70(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e8c94; end: 004e8ca7;  */

void FUN_004e8c94(void)

{
  FUN_004e8c70();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e8ca8; end: 004e8d23;  */

undefined ** FUN_004e8ca8(void)

{
  return &PTR_DAT_009f47e8;
}



/* Entry: 004e8d24; end: 004e8d47;  */

undefined8 FUN_004e8d24(undefined8 param_1)

{
  func_0x004ec990();
  return param_1;
}



/* Entry: 004e8d48; end: 004e8d5b;  */

void FUN_004e8d48(void)

{
  FUN_004e8d24();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e8d5c; end: 004e8d7b;  */

undefined ** FUN_004e8d5c(void)

{
  return &PTR_DAT_009f4838;
}



/* Entry: 004e8d7c; end: 004e8de3;  */

long * FUN_004e8d7c(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    func_0x004ec88c();
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



/* Entry: 004e8de4; end: 004e8e2b;  */

long FUN_004e8de4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
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



/* Entry: 004e8e2c; end: 004e8e63;  */

long FUN_004e8e2c(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  func_0x004ecc44();
  return param_1;
}



/* Entry: 004e8e64; end: 004e8e77;  */

void FUN_004e8e64(void)

{
  FUN_004e8e2c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e8e78; end: 004e8e83;  */

undefined ** FUN_004e8e78(void)

{
  return &PTR_DAT_009f4888;
}



/* Entry: 004e8e84; end: 004e8ebb;  */

void FUN_004e8e84(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x004ecad8();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x004ecd7c();
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



/* Entry: 004e8ebc; end: 004e8f33;  */

long * FUN_004e8ebc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec690();
    param_4 = param_1;
  }
  func_0x004ecbc4();
  while (unaff_w22 != unaff_w21) {
    func_0x004ec758();
    func_0x004ec83c();
    func_0x004ecd00();
  }
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



/* Entry: 004e8f34; end: 004e8f8f;  */

void FUN_004e8f34(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x004ec66c();
  while (unaff_x22 != 0) {
    func_0x004ecccc();
    func_0x004ecb7c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x004ecd84();
    func_0x004eca54();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
  }
  func_0x004ecb34();
  return;
}



/* Entry: 004e8f90; end: 004e8f93;  */

void FUN_004e8f90(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004eca90();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x004ec9f4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 004e8f94; end: 004e8fcb;  */

long FUN_004e8f94(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  func_0x004ecc44();
  return param_1;
}



/* Entry: 004e8fcc; end: 004e8fdf;  */

void FUN_004e8fcc(void)

{
  FUN_004e8f94();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e8fe0; end: 004e8feb;  */

undefined ** FUN_004e8fe0(void)

{
  return &PTR_DAT_009f48e0;
}



/* Entry: 004e8fec; end: 004e9023;  */

void FUN_004e8fec(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x004ecad8();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x004ecd7c();
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



/* Entry: 004e9024; end: 004e909b;  */

long * FUN_004e9024(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x004ec6d8();
  if ((extraout_x8 & 1) != 0) {
    func_0x004ec690();
    param_4 = param_1;
  }
  func_0x004ecbc4();
  while (unaff_w22 != unaff_w21) {
    func_0x004ec758();
    func_0x004ec83c();
    func_0x004ecd00();
  }
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



/* Entry: 004e909c; end: 004e90f7;  */

void FUN_004e909c(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x004ec66c();
  while (unaff_x22 != 0) {
    func_0x004ecccc();
    func_0x004ecb7c();
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x004ecd84();
    func_0x004eca54();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
  }
  func_0x004ecb34();
  return;
}



/* Entry: 004e90f8; end: 004e90fb;  */

void FUN_004e90f8(ulong *param_1)

{
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  func_0x004eca90();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      func_0x004ec9f4();
      *(ulong **)(unaff_x21 + 0x30) = param_1;
    }
    else {
      FUN_004d9d18();
    }
  }
  func_0x004ec714();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 004e90fc; end: 004e912f;  */

long FUN_004e90fc(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e9130; end: 004e9143;  */

void FUN_004e9130(void)

{
  FUN_004e90fc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e9144; end: 004e914f;  */

undefined ** FUN_004e9144(void)

{
  return &PTR_DAT_009f4938;
}



/* Entry: 004e9150; end: 004e921f;  */

void FUN_004e9150(void)

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



/* Entry: 004e9220; end: 004e9223;  */

void FUN_004e9220(ulong *param_1)

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



/* Entry: 004e9224; end: 004e9267;  */

long FUN_004e9224(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d84f0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e9268; end: 004e927b;  */

void FUN_004e9268(void)

{
  FUN_004e9224();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e927c; end: 004e9287;  */

undefined ** FUN_004e927c(void)

{
  return &PTR_DAT_009f4980;
}



/* Entry: 004e9288; end: 004e92d3;  */

void FUN_004e9288(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
  uint unaff_w20;
  
  func_0x004eca2c();
  if (!(bool)in_ZR) {
    if ((unaff_w20 & 1) != 0) {
      func_0x004ec9fc();
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      FUN_004d8554(*(undefined8 *)(unaff_x19 + 0x20));
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



/* Entry: 004e92d4; end: 004e941f;  */

segment_command *
FUN_004e92d4(segment_command *param_1,undefined8 param_2,ulong param_3,segment_command *param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long extraout_x8;
  segment_command *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004ec7a8();
  uVar1 = *(uint *)(param_1->segname + 8);
  if ((uVar1 & 1) != 0) {
    func_0x004ec658();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    func_0x004ec83c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x004ec774();
    func_0x004ecc3c();
    func_0x004ec88c();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x004ec774();
    param_4 = &segment_command_00000020;
    func_0x00487cbc(0x20,param_1);
    func_0x004ec88c();
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
      return (segment_command *)(param_4->segname + (long)iVar4 + -8);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (segment_command *)(param_4->segname + (long)(int)param_3 + -8);
  }
  return param_4;
}



/* Entry: 004e9420; end: 004e9423;  */

void FUN_004e9420(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x004ec6ec();
  if (((ulong)unaff_x22 & 1) != 0) {
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
        FUN_004e49d0();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004d8688();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
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



/* Entry: 004e9424; end: 004e9467;  */

long FUN_004e9424(long param_1)

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



/* Entry: 004e9468; end: 004e947b;  */

void FUN_004e9468(void)

{
  FUN_004e9424();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e947c; end: 004e9487;  */

undefined ** FUN_004e947c(void)

{
  return &PTR_DAT_009f49d8;
}



/* Entry: 004e9488; end: 004e94cf;  */

void FUN_004e9488(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  ulong *puVar1;
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
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 004e94d0; end: 004e95ef;  */

long * FUN_004e94d0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x004ec774();
    func_0x004eca68();
    func_0x004ec88c();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (long *)((long)&MACH_HEADER.magic + 3);
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



/* Entry: 004e95f0; end: 004e95f3;  */

void FUN_004e95f0(ulong *param_1)

{
  undefined1 in_ZR;
  ulong extraout_x8;
  long unaff_x20;
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
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
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



/* Entry: 004e95f4; end: 004e9627;  */

long FUN_004e95f4(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004e9628; end: 004e963b;  */

void FUN_004e9628(void)

{
  FUN_004e95f4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e963c; end: 004e9647;  */

undefined ** FUN_004e963c(void)

{
  return &PTR_DAT_009f4a28;
}



/* Entry: 004e9648; end: 004e9717;  */

void FUN_004e9648(void)

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



/* Entry: 004e9718; end: 004e971b;  */

void FUN_004e9718(ulong *param_1)

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



/* Entry: 004e971c; end: 004e977b;  */

void FUN_004e971c(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x004ece30();
  if (extraout_w8 == 2) {
    func_0x00532f74(unaff_x19 + 0x10);
  }
  else if (extraout_w8 == 1) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004ec9b8();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        FUN_004d9ba0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 004e977c; end: 004e97af;  */

long FUN_004e977c(long param_1)

{
  func_0x004ec990();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004e971c(param_1);
  }
  return param_1;
}



/* Entry: 004e97b0; end: 004e97b3;  */

long FUN_004e97b0(long param_1)

{
  func_0x004ec990();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_004e971c(param_1);
  }
  return param_1;
}



/* Entry: 004e97b4; end: 004e97c7;  */

void FUN_004e97b4(void)

{
  FUN_004e977c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e97c8; end: 004e97d3;  */

undefined ** FUN_004e97c8(void)

{
  return &PTR_DAT_009f4a78;
}



/* Entry: 004e97d4; end: 004e9803;  */

void FUN_004e97d4(long param_1)

{
  ulong *puVar1;
  
  FUN_004e971c();
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



/* Entry: 004e9804; end: 004e98b3;  */

long * FUN_004e9804(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  int iVar5;
  
  plVar3 = param_3;
  func_0x004ec9d0();
  if (*(int *)(param_1 + 0x1c) == 2) {
    func_0x004ecdc8(*(undefined8 *)(unaff_x21 + 0x10));
    func_0x004ecce0();
    unaff_x20 = param_3;
    func_0x004ecbb8(param_3,2);
  }
  else if (*(int *)(param_1 + 0x1c) == 1) {
    plVar3 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x10) + 0x18);
    unaff_x20 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x004ec988();
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x004ec9c4();
  if ((long)plVar3 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar3 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if ((long)(int)plVar3 <= *param_3 - (long)unaff_x20) {
    _memcpy(unaff_x20,lVar2,(ulong)plVar3 & 0xffffffff);
    return (long *)((long)unaff_x20 + (long)(int)plVar3);
  }
  while( true ) {
    iVar5 = ((int)*param_3 - (int)unaff_x20) + 0x10;
    iVar4 = (int)plVar3;
    plVar3 = (long *)(ulong)(uint)(iVar4 - iVar5);
    if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
    func_0x0054f690();
    puVar1 = (undefined1 *)((long)unaff_x20 + (long)iVar5);
    unaff_x20 = param_3;
    func_0x0054ed58(param_3,puVar1);
  }
  func_0x0054f690();
  return (long *)((long)unaff_x20 + (long)iVar4);
}



/* Entry: 004e98b4; end: 004e991f;  */

void FUN_004e98b4(void)

{
  uint uVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  
  func_0x004ece30();
  if (extraout_w8 == 2) {
    uVar1 = (uint)*(undefined8 *)(unaff_x19 + 0x10) & 0xfffffffc;
    FUN_0048910c();
  }
  else {
    if (extraout_w8 != 1) {
      iVar2 = 0;
      goto LAB_004e98f8;
    }
    uVar1 = (uint)*(undefined8 *)(unaff_x19 + 0x10);
    FUN_004d2ec0();
  }
  iVar2 = uVar1 + 1;
LAB_004e98f8:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004ecd58();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar2 = (int)lVar3 + iVar2;
  }
  *(int *)(unaff_x19 + 0x18) = iVar2;
  return;
}



/* Entry: 004e9920; end: 004e99ff;  */

void FUN_004e9920(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  
  func_0x004ec6ec();
  if ((unaff_x22 & 1) != 0) {
    func_0x004eca9c();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_004e971c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    if (iVar1 == 2) {
      if (iVar2 != 2) {
        unaff_x21[2] = (ulong)&DAT_00b69408;
      }
      param_1 = unaff_x21 + 2;
      func_0x00532e08();
    }
    else if (iVar1 == 1) {
      if (iVar2 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_004d9d18();
      }
      else {
        func_0x004ec9f4();
        unaff_x21[2] = (ulong)param_1;
      }
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



/* Entry: 004e9a00; end: 004e9a5b;  */

long FUN_004e9a00(long param_1)

{
  func_0x004ec990();
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_004e380c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_0054cf94();
  }
  func_0x004ecc44();
  return param_1;
}



/* Entry: 004e9a5c; end: 004e9a6f;  */

void FUN_004e9a5c(void)

{
  FUN_004e9a00();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004e9a70; end: 004e9a7b;  */

undefined ** FUN_004e9a70(void)

{
  return &PTR_DAT_009f4ac8;
}



/* Entry: 004e9a7c; end: 004e9adf;  */

void FUN_004e9a7c(void)

{
  uint uVar1;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x004ecad8();
  if (0 < (int)unaff_x19[7]) {
    FUN_00437de0(unaff_x19 + 6);
  }
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(unaff_x19[9]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004e3884(unaff_x19[10]);
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


