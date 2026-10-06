/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004d4794; end: 004d493b;  */

void FUN_004d4794(void)

{
  uint uVar1;
  ulong uVar2;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004d52e4();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x18) == 0) {
        uVar2 = unaff_x22;
        func_0x004d3428(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = uVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        uVar2 = unaff_x22;
        func_0x004d50e0(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = uVar2;
      }
      else {
        func_0x004d4890();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x28) == 0) {
        FUN_004d5124(unaff_x22,*(undefined8 *)(unaff_x20 + 0x28));
        *(ulong *)(unaff_x21 + 0x28) = unaff_x22;
      }
      else {
        FUN_004d493c();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d493c; end: 004d4963;  */

void FUN_004d493c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 004d4964; end: 004d49b7;  */

void FUN_004d4964(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_004d4c68();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 004d49b8; end: 004d4a27;  */

undefined8 * FUN_004d49b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_009f0280;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004d5260();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 0x10);
  if (iVar1 == 2) {
    FUN_004d5194(param_2,*(undefined8 *)(param_3 + 0x18));
    param_1[3] = param_2;
  }
  return param_1;
}



/* Entry: 004d4a28; end: 004d4a53;  */

undefined8 FUN_004d4a28(undefined8 param_1)

{
  func_0x004d528c();
  FUN_004d4a54(param_1);
  return param_1;
}



/* Entry: 004d4a54; end: 004d4a67;  */

void FUN_004d4a54(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_004d4c68();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 004d4a68; end: 004d4a7b;  */

void FUN_004d4a68(void)

{
  FUN_004d4a28();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d4a7c; end: 004d4a8b;  */

undefined8 FUN_004d4a7c(undefined8 param_1)

{
  func_0x004d528c();
  FUN_004d4c94(param_1);
  return param_1;
}



/* Entry: 004d4a8c; end: 004d4b1b;  */

dword * FUN_004d4a8c(long param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004d5250();
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x004d523c();
    param_4 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,param_1);
    func_0x004d5278();
  }
  if (*(int *)(unaff_x20 + 0x24) == 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x28);
    param_4 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x004d52b4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d52d8();
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



/* Entry: 004d4b1c; end: 004d4b7f;  */

long FUN_004d4b1c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  if (*(int *)(param_1 + 0x24) == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_004d4b80();
    lVar3 = lVar1 + lVar3 + 1;
  }
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



/* Entry: 004d4b80; end: 004d4b97;  */

void FUN_004d4b80(void)

{
  func_0x004d4de8();
  func_0x004d5220();
  return;
}



/* Entry: 004d4b98; end: 004d4b9b;  */

void FUN_004d4b98(void)

{
  int iVar1;
  ulong *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x004d52e4();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x10) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    if (*(int *)(unaff_x21 + 0x24) == iVar1) {
      if (iVar1 == 2) {
        FUN_004d4b9c(*(undefined8 *)(unaff_x21 + 0x18),*(undefined8 *)(unaff_x20 + 0x18));
      }
    }
    else {
      if (*(int *)(unaff_x21 + 0x24) != 0) {
        FUN_004d4964();
      }
      *(int *)(unaff_x21 + 0x24) = iVar1;
      if (iVar1 == 2) {
        FUN_004d5194(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    if ((*unaff_x19 & 1) == 0) {
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



/* Entry: 004d4b9c; end: 004d4c67;  */

void FUN_004d4b9c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x20,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 004d4c68; end: 004d4c93;  */

undefined8 FUN_004d4c68(undefined8 param_1)

{
  func_0x004d528c();
  FUN_004d4c94(param_1);
  return param_1;
}



/* Entry: 004d4c94; end: 004d4cc3;  */

/* WARNING: Possible PIC construction at 0x004d4ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004d4cac) */

void FUN_004d4c94(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(uVar1);
  return;
}



/* Entry: 004d4cc4; end: 004d4cd7;  */

void FUN_004d4cc4(void)

{
  FUN_004d4c68();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d4cd8; end: 004d4ce3;  */

undefined ** FUN_004d4cd8(void)

{
  return &PTR_DAT_009f03b8;
}



/* Entry: 004d4ce4; end: 004d4e93;  */

void FUN_004d4ce4(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
  FUN_00532fa8(param_1 + 0x18);
  FUN_00532fa8(param_1 + 0x20);
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



/* Entry: 004d4e94; end: 004d4e97;  */

void FUN_004d4e94(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x10,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar1,uVar2);
  }
  uVar1 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar1 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar1 + 8);
  }
  if (lVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x20,uVar1,uVar2);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 004d4e98; end: 004d4ebb;  */

undefined8 FUN_004d4e98(undefined8 param_1)

{
  func_0x004d528c();
  return param_1;
}



/* Entry: 004d4ebc; end: 004d4ebf;  */

undefined8 FUN_004d4ebc(undefined8 param_1)

{
  func_0x004d528c();
  return param_1;
}



/* Entry: 004d4ec0; end: 004d4ed3;  */

void FUN_004d4ec0(void)

{
  FUN_004d4e98();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d4ed4; end: 004d4edf;  */

undefined ** FUN_004d4ed4(void)

{
  return &PTR_DAT_009f0400;
}



/* Entry: 004d4ee0; end: 004d4f4b;  */

dword * FUN_004d4ee0(long param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004d5250();
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x004d523c();
    param_4 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,param_1);
    func_0x004d5278();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004d52d8();
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



/* Entry: 004d4f4c; end: 004d4fbb;  */

ulong FUN_004d4f4c(long param_1)

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



/* Entry: 004d4fbc; end: 004d5123;  */

void FUN_004d4fbc(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x004d52cc();
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009f01e0;
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined **)(pcVar1 + 0x10) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x18) = &DAT_00b69408;
  *(undefined **)(pcVar1 + 0x20) = &DAT_00b69408;
  *(dword *)(pcVar1 + 0x28) = 0;
  return;
}



/* Entry: 004d5124; end: 004d5193;  */

dword * FUN_004d5124(dword *param_1)

{
  dword *pdVar1;
  
  if (param_1 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = param_1;
    func_0x005510c4(param_1,0x18);
  }
  *(undefined ***)pdVar1 = &PTR_FUN_009f0230;
  *(dword **)(pdVar1 + 2) = param_1;
  *(undefined8 *)(pdVar1 + 4) = 0;
  FUN_004d493c();
  return pdVar1;
}



/* Entry: 004d5194; end: 004d5213;  */

char * FUN_004d5194(char *param_1,long param_2)

{
  char *pcVar1;
  qword qVar2;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname + 8;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x004d52cc();
  }
  *(char **)(pcVar1 + 8) = param_1;
  *(undefined ***)pcVar1 = &PTR_FUN_009f01e0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004d5260();
  }
  qVar2 = param_2 + 0x10;
  func_0x004d52c4();
  *(qword *)(pcVar1 + 0x10) = qVar2;
  qVar2 = param_2 + 0x18;
  func_0x004d52c4();
  *(qword *)(pcVar1 + 0x18) = qVar2;
  qVar2 = param_2 + 0x20;
  func_0x004d52c4();
  *(qword *)(pcVar1 + 0x20) = qVar2;
  *(dword *)(pcVar1 + 0x28) = 0;
  return pcVar1;
}



/* Entry: 004d5214; end: 004d5303;  */

void FUN_004d5214(void)

{
  return;
}



/* Entry: 004d5304; end: 004d53bf;  */

undefined8 * FUN_004d5304(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f06f0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004d6d14();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x00487c6c(lVar2,param_2);
  param_1[3] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_004d6904(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_004d6994(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_004d69f4(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  param_1[7] = *(undefined8 *)(param_3 + 0x38);
  return param_1;
}



/* Entry: 004d53c0; end: 004d53eb;  */

undefined8 FUN_004d53c0(undefined8 param_1)

{
  func_0x004d6d20();
  FUN_004d53ec(param_1);
  return param_1;
}



/* Entry: 004d53ec; end: 004d543b;  */

void FUN_004d53ec(long param_1)

{
  func_0x00532f74(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d5b70();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d60f8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d6494();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d543c; end: 004d543f;  */

undefined8 FUN_004d543c(undefined8 param_1)

{
  func_0x004d6d20();
  FUN_004d53ec(param_1);
  return param_1;
}



/* Entry: 004d5440; end: 004d5453;  */

void FUN_004d5440(void)

{
  FUN_004d53c0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d5454; end: 004d545f;  */

undefined ** FUN_004d5454(void)

{
  return &PTR_DAT_009f0730;
}



/* Entry: 004d5460; end: 004d551f;  */

void FUN_004d5460(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_00532fa8(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004d54d8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d5520(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004d5538(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
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



/* Entry: 004d5520; end: 004d5537;  */

void FUN_004d5520(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
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



/* Entry: 004d5538; end: 004d55ab;  */

void FUN_004d5538(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004d6278(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x004d63dc(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x38) = 0;
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



/* Entry: 004d55ac; end: 004d56e7;  */

dword * FUN_004d55ac(long param_1,dword *param_2,dword *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  dword *pdVar3;
  dword *pdVar4;
  long lVar5;
  dword *pdVar6;
  long extraout_x8;
  int iVar7;
  dword *pdVar8;
  int iVar9;
  
  pdVar6 = param_3;
  pdVar3 = param_2;
  if (*(int *)(param_1 + 0x38) != 0) {
    pdVar3 = param_3;
    func_0x00487c24(param_3,param_2);
    func_0x004d6d40();
    func_0x004d6d48();
  }
  pdVar8 = (dword *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar5 = (long)*(char *)((long)pdVar8 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(pdVar8 + 2);
    if (lVar5 == 0) goto LAB_004d5640;
    pdVar4 = *(dword **)pdVar8;
  }
  else {
    pdVar4 = pdVar8;
    if (*(char *)((long)pdVar8 + 0x17) == '\0') goto LAB_004d5640;
  }
  FUN_0054ddb8(pdVar4,lVar5,1,"snapchat.messaging.FailureReason.failure_description");
  pdVar4 = param_3;
  FUN_00435e9c(param_3,2,pdVar8,pdVar3);
  pdVar6 = pdVar8;
  pdVar3 = pdVar4;
LAB_004d5640:
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    pdVar6 = (dword *)(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x14);
    pdVar3 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x004d6d38();
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pdVar6 = (dword *)(ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x1c);
    pdVar3 = &MACH_HEADER.cputype;
    func_0x004d6d38();
  }
  pdVar8 = pdVar3;
  if (*(int *)(param_1 + 0x3c) != 0) {
    pdVar8 = param_3;
    FUN_004d56e8();
    pdVar6 = pdVar3;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    pdVar6 = (dword *)(ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x14);
    pdVar8 = (dword *)((long)&MACH_HEADER.cputype + 2);
    func_0x004d6d38();
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004d6d8c();
    if ((long)pdVar6 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      pdVar6 = *(dword **)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*(long *)param_3 - (long)pdVar8 < (long)(int)pdVar6) {
      while( true ) {
        iVar9 = ((int)*(undefined8 *)param_3 - (int)pdVar8) + 0x10;
        iVar7 = (int)pdVar6;
        pdVar6 = (dword *)(ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)pdVar8 + (long)iVar9);
        pdVar8 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (dword *)((long)pdVar8 + (long)iVar7);
    }
    _memcpy(pdVar8,lVar5,(ulong)pdVar6 & 0xffffffff);
    return (dword *)((long)pdVar8 + (long)(int)pdVar6);
  }
  return pdVar8;
}



/* Entry: 004d56e8; end: 004d571f;  */

void FUN_004d56e8(undefined8 param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  char *pcVar2;
  
  func_0x00487c24(param_1,param_3);
  pcVar2 = segment_command_00000020.segname;
  func_0x00487cbc(0x28,param_1);
  for (uVar1 = (ulong)param_2; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *pcVar2 = (byte)uVar1 | 0x80;
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = (byte)uVar1;
  return;
}



/* Entry: 004d5720; end: 004d5813;  */

long FUN_004d5720(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_004d575c;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_004d575c:
    lVar4 = 0;
    goto LAB_004d5760;
  }
  FUN_0048910c();
  lVar4 = uVar2 + 1;
LAB_004d5760:
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d5ce0(*(undefined8 *)(param_1 + 0x20));
      FUN_004d6c54();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d61c4(*(undefined8 *)(param_1 + 0x28));
      FUN_004d6c54();
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x004d6608(*(undefined8 *)(param_1 + 0x30));
      FUN_004d6c54();
    }
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x38)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x3c)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004d6e38();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 004d5814; end: 004d5817;  */

void FUN_004d5814(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004d6d70();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x00532e08(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_004d6904();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d5934();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_004d6994();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_004d59e4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_004d69f4();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_004d5a10();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x004d6e18();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004d6d60();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d5818; end: 004d5933;  */

void FUN_004d5818(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004d6d70();
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x00532e08(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_004d6904();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d5934();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_004d6994();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_004d59e4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_004d69f4();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_004d5a10();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x004d6e18();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004d6d60();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d5934; end: 004d59e3;  */

void FUN_004d5934(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004d6d70();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x004d6ab8();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_004d5d74();
      puVar2 = puVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x24) = 1;
  }
  if (*(char *)(unaff_x20 + 0x25) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x25) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d6d60();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 004d59e4; end: 004d5a0f;  */

void FUN_004d59e4(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 004d5a10; end: 004d5afb;  */

void FUN_004d5a10(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x004d6d70();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x004d3428();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_004d6b8c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x004d61f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_004d6bec();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x004d6374();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x004d6e18();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004d6d60();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d5afc; end: 004d5b33;  */

void FUN_004d5afc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_004d5460();
  func_0x004d6d70(param_1,param_2);
  puVar4 = *(ulong **)(unaff_x19 + 8);
  puVar2 = puVar4;
  if (((ulong)puVar4 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = *(ulong **)((ulong)puVar4 & 0xfffffffffffffffe);
    }
    param_1 = (ulong *)(unaff_x21 + 0x18);
    func_0x00532e08(param_1,uVar3,puVar4);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_004d6904();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_004d5934();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_004d6994();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        FUN_004d59e4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        FUN_004d69f4();
        *(ulong **)(unaff_x21 + 0x30) = puVar2;
        param_1 = puVar2;
      }
      else {
        FUN_004d5a10();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x004d6e18();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004d6d60();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d5b34; end: 004d5b6f;  */

undefined1  [16] FUN_004d5b34(long param_1,long param_2)

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
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  puVar4 = (undefined1 *)(param_2 + 0x20);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x20); puVar3 != (undefined1 *)(param_1 + 0x40);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x40);
  return auVar7;
}



/* Entry: 004d5b70; end: 004d5b9b;  */

undefined8 FUN_004d5b70(undefined8 param_1)

{
  func_0x004d6d20();
  FUN_004d5b9c(param_1);
  return param_1;
}



/* Entry: 004d5b9c; end: 004d5bb7;  */

void FUN_004d5b9c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d5e60();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d5bb8; end: 004d5bbb;  */

undefined8 FUN_004d5bb8(undefined8 param_1)

{
  func_0x004d6d20();
  FUN_004d5b9c(param_1);
  return param_1;
}



/* Entry: 004d5bbc; end: 004d5bcf;  */

void FUN_004d5bbc(void)

{
  FUN_004d5b70();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d5bd0; end: 004d5bdb;  */

undefined ** FUN_004d5bd0(void)

{
  return &PTR_DAT_009f0778;
}



/* Entry: 004d5bdc; end: 004d5c0b;  */

void FUN_004d5bdc(long param_1)

{
  ulong *puVar1;
  
  FUN_004d5e0c();
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



/* Entry: 004d5c0c; end: 004d5cdf;  */

dword * FUN_004d5c0c(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  dword *pdVar2;
  long lVar3;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004d6cd0();
  if (*(char *)(param_1 + 9) == '\x01') {
    func_0x004d6c9c();
    func_0x004d6d40();
    func_0x004d6cb4();
    param_4 = param_1;
  }
  pdVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x004d6c9c();
    pdVar2 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,param_1);
    func_0x004d6d48();
    param_4 = pdVar2;
  }
  if (*(char *)(unaff_x20 + 0x25) == '\x01') {
    func_0x004d6c9c();
    param_4 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,pdVar2);
    func_0x004d6cb4();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_4 = &MACH_HEADER.cputype;
    func_0x004d6d38();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d6d8c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar3 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        uVar1 = iVar4 - iVar5;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004d5ce0; end: 004d5d6f;  */

void FUN_004d5ce0(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x004d5f2c();
    func_0x004d6c78();
    iVar1 = iVar1 + extraout_w8 + 1;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x24) * 2 + (uint)*(byte *)(param_1 + 0x25) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004d6e38();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 004d5d70; end: 004d5d73;  */

void FUN_004d5d70(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004d6d70();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x004d6ab8();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      FUN_004d5d74();
      puVar2 = puVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x24) = 1;
  }
  if (*(char *)(unaff_x20 + 0x25) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x25) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d6d60();
    if ((*puVar2 & 1) == 0) {
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



/* Entry: 004d5d74; end: 004d5e0b;  */

void FUN_004d5d74(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x004d6d70();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_004d5f8c();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_004d5e0c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_004d6b30();
        unaff_x21[2] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d6d60();
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



/* Entry: 004d5e0c; end: 004d5e5f;  */

void FUN_004d5e0c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_004d5fb8();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 004d5e60; end: 004d5e8b;  */

undefined8 FUN_004d5e60(undefined8 param_1)

{
  func_0x004d6d20();
  FUN_004d5e8c(param_1);
  return param_1;
}



/* Entry: 004d5e8c; end: 004d5e9f;  */

void FUN_004d5e8c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_004d5fb8();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 004d5ea0; end: 004d5eb3;  */

void FUN_004d5ea0(void)

{
  FUN_004d5e60();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d5eb4; end: 004d5ec3;  */

undefined8 FUN_004d5eb4(undefined8 param_1)

{
  func_0x004d6d20();
  return param_1;
}



/* Entry: 004d5ec4; end: 004d5f8b;  */

long * FUN_004d5ec4(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004d6cd0();
  if (*(int *)(param_1 + 0x1c) == 1) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x1c);
    param_4 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x004d6d38();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004d6d8c();
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



/* Entry: 004d5f8c; end: 004d5fb7;  */

void FUN_004d5f8c(ulong *param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *puVar2;
  
  func_0x004d6d70();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)((long)unaff_x21 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        param_1 = (ulong *)unaff_x21[2];
        FUN_004d5f8c();
      }
    }
    else {
      if (*(int *)((long)unaff_x21 + 0x1c) != 0) {
        param_1 = unaff_x21;
        FUN_004d5e0c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_004d6b30();
        unaff_x21[2] = (ulong)puVar2;
        param_1 = puVar2;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d6d60();
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



/* Entry: 004d5fb8; end: 004d5fdb;  */

undefined8 FUN_004d5fb8(undefined8 param_1)

{
  func_0x004d6d20();
  return param_1;
}



/* Entry: 004d5fdc; end: 004d5fef;  */

void FUN_004d5fdc(void)

{
  FUN_004d5fb8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d5ff0; end: 004d6013;  */

undefined ** FUN_004d5ff0(void)

{
  return &PTR_DAT_009f0808;
}



/* Entry: 004d6014; end: 004d6093;  */

long * FUN_004d6014(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004d6cd0();
  if ((int)param_1[3] != 0) {
    func_0x004d6c9c();
    func_0x004d6d40();
    func_0x004d6d48();
    param_4 = param_1;
  }
  plVar2 = param_4;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    plVar2 = unaff_x19;
    func_0x0043645c();
    param_3 = param_4;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d6d8c();
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
        func_0x0054f690();
        plVar2 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)plVar2 + (long)iVar4);
    }
    _memcpy(plVar2,lVar3,(ulong)param_3 & 0xffffffff);
    return (long *)((long)plVar2 + (long)(int)param_3);
  }
  return plVar2;
}



/* Entry: 004d6094; end: 004d60f7;  */

ulong FUN_004d6094(long param_1)

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



/* Entry: 004d60f8; end: 004d611b;  */

undefined8 FUN_004d60f8(undefined8 param_1)

{
  func_0x004d6d20();
  return param_1;
}



/* Entry: 004d611c; end: 004d611f;  */

undefined8 FUN_004d611c(undefined8 param_1)

{
  func_0x004d6d20();
  return param_1;
}



/* Entry: 004d6120; end: 004d6133;  */

void FUN_004d6120(void)

{
  FUN_004d60f8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d6134; end: 004d613f;  */

undefined ** FUN_004d6134(void)

{
  return &PTR_DAT_009f0850;
}



/* Entry: 004d6140; end: 004d61c3;  */

long * FUN_004d6140(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004d6cd0();
  if (param_1[2] != 0) {
    func_0x004d6c9c();
    func_0x004d6d40();
    func_0x004d6d54();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x004d6c9c();
    func_0x004d6da8();
    func_0x004d6cb4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d6d8c();
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



/* Entry: 004d61c4; end: 004d622f;  */

long FUN_004d61c4(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x004d6de0();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 004d6230; end: 004d6253;  */

undefined8 FUN_004d6230(undefined8 param_1)

{
  func_0x004d6d20();
  return param_1;
}



/* Entry: 004d6254; end: 004d6257;  */

undefined8 FUN_004d6254(undefined8 param_1)

{
  func_0x004d6d20();
  return param_1;
}



/* Entry: 004d6258; end: 004d626b;  */

void FUN_004d6258(void)

{
  FUN_004d6230();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d626c; end: 004d628f;  */

undefined ** FUN_004d626c(void)

{
  return &PTR_DAT_009f0890;
}



/* Entry: 004d6290; end: 004d633b;  */

dword * FUN_004d6290(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004d6cd0();
  if (*(long *)(param_1 + 4) != 0) {
    func_0x004d6c9c();
    func_0x004d6d40();
    func_0x004d6d54();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    func_0x004d6c9c();
    func_0x004d6da8();
    func_0x004d6cb4();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x19) == '\x01') {
    func_0x004d6c9c();
    param_4 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,param_1);
    func_0x004d6cb4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d6d8c();
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



/* Entry: 004d633c; end: 004d6393;  */

long FUN_004d633c(long param_1)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  long lVar2;
  
  func_0x004d6de0();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x19) * 2;
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



/* Entry: 004d6394; end: 004d63b7;  */

undefined8 FUN_004d6394(undefined8 param_1)

{
  func_0x004d6d20();
  return param_1;
}



/* Entry: 004d63b8; end: 004d63bb;  */

undefined8 FUN_004d63b8(undefined8 param_1)

{
  func_0x004d6d20();
  return param_1;
}



/* Entry: 004d63bc; end: 004d63cf;  */

void FUN_004d63bc(void)

{
  FUN_004d6394();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d63d0; end: 004d63ef;  */

undefined ** FUN_004d63d0(void)

{
  return &PTR_DAT_009f08f0;
}



/* Entry: 004d63f0; end: 004d645b;  */

long * FUN_004d63f0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004d6cd0();
  if ((char)param_1[2] == '\x01') {
    func_0x004d6c9c();
    func_0x004d6d40();
    func_0x004d6cb4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004d6d8c();
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



/* Entry: 004d645c; end: 004d6493;  */

long FUN_004d645c(long param_1)

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



/* Entry: 004d6494; end: 004d64bf;  */

undefined8 FUN_004d6494(undefined8 param_1)

{
  func_0x004d6d20();
  FUN_004d64c0(param_1);
  return param_1;
}



/* Entry: 004d64c0; end: 004d6507;  */

void FUN_004d64c0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d6230();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_004d6394();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d6508; end: 004d650b;  */

undefined8 FUN_004d6508(undefined8 param_1)

{
  func_0x004d6d20();
  FUN_004d64c0(param_1);
  return param_1;
}



/* Entry: 004d650c; end: 004d651f;  */

void FUN_004d650c(void)

{
  FUN_004d6494();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d6520; end: 004d652b;  */

undefined ** FUN_004d6520(void)

{
  return &PTR_DAT_009f0958;
}



/* Entry: 004d652c; end: 004d66bf;  */

segment_command *
FUN_004d652c(segment_command *param_1,undefined8 param_2,ulong param_3,segment_command *param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  long extraout_x8;
  segment_command *unaff_x19;
  long unaff_x20;
  int iVar4;
  int iVar5;
  
  func_0x004d6cd0();
  if ((char)param_1->maxprot == '\x01') {
    func_0x004d6c9c();
    func_0x004d6d40();
    func_0x004d6cb4();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    param_1 = (segment_command *)((long)&MACH_HEADER.magic + 2);
    func_0x004d6d38();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x1c);
    param_1 = (segment_command *)((long)&MACH_HEADER.magic + 3);
    func_0x004d6d38();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x004d6c9c();
    param_4 = &segment_command_00000020;
    func_0x00487cbc(0x20,param_1);
    func_0x004d6d54();
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x14);
    param_4 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
    func_0x004d6d38();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004d6d8c();
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



/* Entry: 004d66c0; end: 004d6703;  */

void FUN_004d66c0(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong *puVar2;
  
  func_0x004d6d70();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        func_0x004d3428();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar2;
        FUN_004d6b8c();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x004d61f4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x28);
      if (param_1 == (ulong *)0x0) {
        FUN_004d6bec();
        *(ulong **)(unaff_x21 + 0x28) = puVar2;
        param_1 = puVar2;
      }
      else {
        func_0x004d6374();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x004d6e18();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x004d6d60();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d6704; end: 004d6903;  */

void FUN_004d6704(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x004d6d28();
  }
  else {
    func_0x004d6ce0();
  }
  *puVar1 = &PTR_FUN_009f04c0;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 004d6904; end: 004d6993;  */

char * FUN_004d6904(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  long unaff_x19;
  char *unaff_x21;
  
  func_0x004d6db8();
  if (param_1 == 0) {
    pcVar3 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar3 = unaff_x21;
    func_0x005510c4();
  }
  *(char **)(pcVar3 + 8) = unaff_x21;
  *(undefined ***)pcVar3 = &PTR_FUN_009f06a0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004d6d14();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(pcVar3 + 0x10) = uVar1;
  *(undefined4 *)(pcVar3 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    unaff_x21 = (char *)0x0;
  }
  else {
    func_0x004d6ab8();
  }
  *(char **)(pcVar3 + 0x18) = unaff_x21;
  uVar2 = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined2 *)(pcVar3 + 0x24) = *(undefined2 *)(unaff_x19 + 0x24);
  *(undefined4 *)(pcVar3 + 0x20) = uVar2;
  return pcVar3;
}



/* Entry: 004d6994; end: 004d69f3;  */

undefined8 * FUN_004d6994(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  
  func_0x004d6db8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004d6d28();
  }
  else {
    param_1 = unaff_x21;
    func_0x004d6d30();
  }
  *param_1 = &PTR_FUN_009f0510;
  param_1[1] = unaff_x21;
  puVar1 = param_1;
  func_0x004d6e0c();
  *(undefined1 *)(puVar1 + 3) = 0;
  FUN_004d59e4();
  return param_1;
}



/* Entry: 004d69f4; end: 004d6b2f;  */

undefined8 * FUN_004d69f4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  func_0x004d6db8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004d6dd8();
  }
  else {
    param_1 = unaff_x21;
    func_0x005510c4();
  }
  param_1[1] = unaff_x21;
  *param_1 = &PTR_FUN_009f0650;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004d6d14();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x21;
    func_0x004d3428();
  }
  param_1[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x21;
    FUN_004d6b8c();
  }
  param_1[4] = puVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    unaff_x21 = (undefined8 *)0x0;
  }
  else {
    FUN_004d6bec();
  }
  param_1[5] = unaff_x21;
  uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(unaff_x19 + 0x38);
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 004d6b30; end: 004d6b8b;  */

undefined8 * FUN_004d6b30(undefined8 *param_1)

{
  undefined8 *unaff_x21;
  
  func_0x004d6db8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004d6d28();
  }
  else {
    param_1 = unaff_x21;
    func_0x004d6d30();
  }
  *param_1 = &PTR_FUN_009f04c0;
  param_1[1] = unaff_x21;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_004d5f8c();
  return param_1;
}


