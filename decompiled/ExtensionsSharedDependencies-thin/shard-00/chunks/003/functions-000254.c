/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00510d80; end: 00510d8b;  */

undefined ** FUN_00510d80(void)

{
  return &PTR_DAT_009fd368;
}



/* Entry: 00510d8c; end: 00510ddb;  */

void FUN_00510d8c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_00510ddc(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
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



/* Entry: 00510ddc; end: 00510df3;  */

void FUN_00510ddc(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
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



/* Entry: 00510df4; end: 00510ed7;  */

dword * FUN_00510df4(dword *param_1,dword *param_2,dword *param_3)

{
  dword *pdVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  pdVar2 = param_1;
  if (*(char *)(param_1 + 8) == '\x01') {
    pdVar1 = param_1;
    FUN_0051130c();
    pdVar2 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,pdVar1);
    func_0x00511344();
    param_2 = pdVar2;
  }
  pdVar1 = pdVar2;
  if (param_1[9] != 0) {
    FUN_0051130c();
    pdVar1 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,pdVar2);
    func_0x00511344();
    param_2 = pdVar1;
  }
  if (param_1[10] != 0) {
    FUN_0051130c();
    param_2 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,pdVar1);
    func_0x00511338();
  }
  pdVar2 = param_2;
  if ((param_1[4] & 1) != 0) {
    pdVar2 = &MACH_HEADER.cputype;
    func_0x0054dae0(4,*(long *)(param_1 + 6),*(undefined4 *)(*(long *)(param_1 + 6) + 0x1c),param_2,
                    param_3);
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*(long *)param_3 - (long)pdVar2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*(undefined8 *)param_3 - (int)pdVar2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        lVar3 = (long)pdVar2 + (long)iVar7;
        pdVar2 = param_3;
        func_0x0054ed58(param_3,lVar3);
      }
      func_0x0054f690();
      return (dword *)((long)pdVar2 + (long)iVar6);
    }
    _memcpy(pdVar2,lVar3,uVar4 & 0xffffffff);
    return (dword *)((long)pdVar2 + (long)(int)uVar4);
  }
  return pdVar2;
}



/* Entry: 00510ed8; end: 00510f7f;  */

void FUN_00510ed8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_00510f80();
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 0x20) * 2;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x24)) * -9 + 0x1a0U >> 6);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = iVar1 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 00510f80; end: 00510fab;  */

long FUN_00510f80(long param_1)

{
  FUN_00511190();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 00510fac; end: 00510faf;  */

void FUN_00510fac(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_0051129c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_0051106c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 00510fb0; end: 0051106b;  */

void FUN_00510fb0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_0051129c(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_0051106c(*(long *)(param_1 + 0x18));
    }
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
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



/* Entry: 0051106c; end: 0051109f;  */

void FUN_0051106c(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
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



/* Entry: 005110a0; end: 005110c7;  */

long FUN_005110a0(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 005110c8; end: 005110cb;  */

long FUN_005110c8(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 005110cc; end: 005110df;  */

void FUN_005110cc(void)

{
  FUN_005110a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005110e0; end: 005110eb;  */

undefined ** FUN_005110e0(void)

{
  return &PTR_DAT_009fd3b8;
}



/* Entry: 005110ec; end: 0051118f;  */

dword * FUN_005110ec(dword *param_1,dword *param_2,dword *param_3)

{
  dword *pdVar1;
  dword *pdVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  pdVar2 = param_1;
  if (param_1[6] != 0) {
    pdVar1 = param_1;
    FUN_0051130c();
    pdVar2 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,pdVar1);
    func_0x00511338();
    param_2 = pdVar2;
  }
  if (*(long *)(param_1 + 4) != 0) {
    FUN_0051130c();
    param_2 = *(dword **)(param_1 + 4);
    uVar3 = 0x10;
    func_0x00487cbc(0x10,pdVar2);
    func_0x00487cf0(param_2,uVar3);
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        lVar4 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x0054ed58(param_3,lVar4);
      }
      func_0x0054f690();
      return (dword *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (dword *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 00511190; end: 0051120b;  */

ulong FUN_00511190(long param_1)

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



/* Entry: 0051120c; end: 0051129b;  */

void FUN_0051120c(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  *(undefined ***)psVar1 = &PTR_FUN_009fd2d8;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 0051129c; end: 0051130b;  */

segment_command * FUN_0051129c(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005510c4(param_1,0x20);
  }
  *(undefined ***)psVar1 = &PTR_FUN_009fd2d8;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  psVar1->vmaddr = 0;
  FUN_0051106c();
  return psVar1;
}



/* Entry: 0051130c; end: 0051134f;  */

ulong * FUN_0051130c(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 00511350; end: 005113a3;  */

void FUN_00511350(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_004d9ba0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 005113a4; end: 005113d7;  */

long FUN_005113a4(long param_1)

{
  func_0x005118c0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00511350(param_1);
  }
  return param_1;
}



/* Entry: 005113d8; end: 005113db;  */

long FUN_005113d8(long param_1)

{
  func_0x005118c0();
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00511350(param_1);
  }
  return param_1;
}



/* Entry: 005113dc; end: 005113ef;  */

void FUN_005113dc(void)

{
  FUN_005113a4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005113f0; end: 005113fb;  */

undefined ** FUN_005113f0(void)

{
  return &PTR_DAT_009fd4d0;
}



/* Entry: 005113fc; end: 005114eb;  */

void FUN_005113fc(long param_1)

{
  ulong *puVar1;
  
  FUN_00511350();
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



/* Entry: 005114ec; end: 005115ab;  */

void FUN_005114ec(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1c) == iVar1) {
      if (iVar1 == 1) {
        FUN_004d9d18(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_00511350(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        func_0x004d3428(uVar2,*(undefined8 *)(param_2 + 0x10));
        *(ulong *)(param_1 + 0x10) = uVar2;
      }
    }
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



/* Entry: 005115ac; end: 005115d7;  */

long FUN_005115ac(long param_1)

{
  func_0x005118c0();
  FUN_005117c8(param_1 + 0x10);
  return param_1;
}



/* Entry: 005115d8; end: 005115db;  */

long FUN_005115d8(long param_1)

{
  func_0x005118c0();
  FUN_005117c8(param_1 + 0x10);
  return param_1;
}



/* Entry: 005115dc; end: 005115ef;  */

void FUN_005115dc(void)

{
  FUN_005115ac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005115f0; end: 005115fb;  */

undefined ** FUN_005115f0(void)

{
  return &PTR_DAT_009fd528;
}



/* Entry: 005115fc; end: 0051163b;  */

void FUN_005115fc(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    FUN_00437de0(param_1 + 0x10);
  }
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



/* Entry: 0051163c; end: 00511767;  */

long * FUN_0051163c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x005118b0();
  lVar2 = param_1[3];
  for (iVar5 = 0; (int)lVar2 != iVar5; iVar5 = iVar5 + 1) {
    func_0x00511880();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar4 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar3 = (ulong)*(char *)(uVar4 + 0x1f);
  if ((long)uVar3 < 0) {
    lVar2 = *(long *)(uVar4 + 8);
    uVar3 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    lVar2 = uVar4 + 8;
  }
  if ((long)(int)uVar3 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4,lVar2,uVar3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar3);
  }
  while( true ) {
    iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar5 = (int)uVar3;
    uVar1 = iVar5 - iVar6;
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar5 < iVar6) break;
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (long *)((long)param_4 + (long)iVar5);
}



/* Entry: 00511768; end: 005117b7;  */

void FUN_00511768(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) != 0) {
    func_0x0054d484(param_1 + 0x10,param_2 + 0x10);
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



/* Entry: 005117b8; end: 005117c7;  */

void FUN_005117b8(undefined8 param_1,segment_command *param_2)

{
  segment_command *psVar1;
  
  if (param_2 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_2;
    func_0x005118d0();
  }
  *(undefined ***)psVar1 = &PTR_FUN_009fd440;
  *(segment_command **)psVar1->segname = param_2;
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 005117c8; end: 005117f7;  */

long * FUN_005117c8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 005117f8; end: 0051187f;  */

void FUN_005117f8(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x005118d0();
  }
  *(undefined ***)psVar1 = &PTR_FUN_009fd440;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 00511880; end: 005118db;  */

void FUN_00511880(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 unaff_x19;
  
  uVar2 = (ulong)*(uint *)(param_2 + 3);
  func_0x00487c24();
  uVar1 = 10;
  func_0x00487cbc(10,unaff_x19);
  func_0x00487cbc(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0054db48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,uVar2);
  return;
}



/* Entry: 005118dc; end: 00511903;  */

long FUN_005118dc(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 00511904; end: 00511907;  */

long FUN_00511904(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 00511908; end: 0051191b;  */

void FUN_00511908(void)

{
  FUN_005118dc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0051191c; end: 005119bf;  */

undefined ** FUN_0051191c(void)

{
  return &PTR_DAT_009fd5f0;
}



/* Entry: 005119c0; end: 00511a03;  */

void FUN_005119c0(dword *param_1)

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
  *(undefined ***)pdVar1 = &PTR_FUN_009fd5b0;
  *(dword **)(pdVar1 + 2) = param_1;
  pdVar1[4] = 0;
  return;
}



/* Entry: 00511a04; end: 00511a0b;  */

void FUN_00511a04(void)

{
  return;
}



/* Entry: 00511a0c; end: 00511b8f;  */

void FUN_00511a0c(long param_1)

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
  
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_005084cc();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_005089bc();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_005090b8();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_0050ab54();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_0050ae98();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_00509270();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_0050a2b4();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004f0520();
    }
    break;
  default:
    goto LAB_00511b24;
  }
  __ZdlPv();
LAB_00511b24:
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 00511b90; end: 00511bbf;  */

long FUN_00511b90(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00511bc0(param_1);
  return param_1;
}



/* Entry: 00511bc0; end: 00511c0f;  */

void FUN_00511bc0(long param_1)

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
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00504c30();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d53c0();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x48) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x48)) {
  case 6:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_03;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_005084cc();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_04;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_005089bc();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_005090b8();
    }
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_0050ab54();
    }
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_0050ae98();
    }
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_05;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_00509270();
    }
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_06;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_0050a2b4();
    }
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0051224c();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_00511b24;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_004f0520();
    }
    break;
  default:
    goto LAB_00511b24;
  }
  __ZdlPv();
LAB_00511b24:
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 00511c10; end: 00511c13;  */

long FUN_00511c10(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00511bc0(param_1);
  return param_1;
}



/* Entry: 00511c14; end: 00511c27;  */

void FUN_00511c14(void)

{
  FUN_00511b90();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00511c28; end: 00511c33;  */

undefined ** FUN_00511c28(void)

{
  return &PTR_DAT_009fd6b0;
}



/* Entry: 00511c34; end: 00511c9b;  */

void FUN_00511c34(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00504d20(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d5460(*(undefined8 *)(param_1 + 0x20));
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  FUN_00511a0c(param_1);
  puVar2 = (ulong *)(param_1 + 8);
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
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 00511c9c; end: 00511eff;  */

segment_command *
FUN_00511c9c(segment_command *param_1,undefined8 param_2,undefined8 param_3,segment_command *param_4
            )

{
  uint uVar1;
  uint uVar2;
  undefined1 in_ZR;
  segment_command *psVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  long extraout_x8;
  ulong uVar7;
  segment_command *unaff_x19;
  long unaff_x20;
  int iVar8;
  int iVar9;
  
  func_0x005122ec();
  if (extraout_x8 != 0) {
    func_0x00512200();
    func_0x00512270();
    func_0x0051221c();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x00512200();
    func_0x00512260();
    func_0x0051221c();
    param_4 = param_1;
  }
  func_0x00512300();
  psVar3 = param_1;
  if ((bool)in_ZR) {
    func_0x00512200();
    psVar3 = (segment_command *)&MACH_HEADER.flags;
    func_0x00487cbc(0x18,param_1);
    func_0x00512234();
    param_4 = psVar3;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    func_0x00512200();
    param_4 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar3);
    func_0x00512234();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_4 = (segment_command *)((long)&MACH_HEADER.cputype + 1);
    func_0x00512258(5,*(long *)(unaff_x20 + 0x18),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x18) + 0x14));
  }
  psVar3 = (segment_command *)(ulong)*(uint *)(unaff_x20 + 0x48);
  uVar2 = *(uint *)(unaff_x20 + 0x48) - 6;
  if (uVar2 < 8) {
    func_0x00512258(psVar3,*(long *)(unaff_x20 + 0x40),
                    *(undefined4 *)
                     (*(long *)(unaff_x20 + 0x40) + *(long *)(&UNK_0080e9c8 + (ulong)uVar2 * 8)));
    param_4 = psVar3;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_4 = (segment_command *)((long)&segment_command_00000020.nsects + 3);
    func_0x00512258(99,*(long *)(unaff_x20 + 0x20),
                    *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x14));
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar7 + 8);
      uVar5 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar4 = uVar7 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)uVar5) {
      while( true ) {
        uVar6 = unaff_x19->cmd;
        iVar9 = (uVar6 - (int)param_4) + 0x10;
        iVar8 = (int)uVar5;
        uVar1 = iVar8 - iVar9;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar8 < iVar9) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (segment_command *)(param_4->segname + (long)iVar8 + -8);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (segment_command *)(param_4->segname + (long)(int)uVar5 + -8);
  }
  return param_4;
}



/* Entry: 00511f00; end: 005121a7;  */

void FUN_00511f00(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 extraout_w8;
  ulong *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  
  func_0x0051230c();
  if ((unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong *)(unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar4 = (uVar1 & 3) == 0;
  if (!(bool)uVar4) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x21 + 0x18);
      if (param_1 == 0) {
        param_1 = unaff_x22;
        func_0x004e035c(unaff_x22,*(undefined8 *)(unaff_x20 + 0x18));
        *(ulong *)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_005052ac();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong *)(unaff_x21 + 0x20);
      if (param_1 == 0) {
        FUN_004df474(unaff_x22,*(undefined8 *)(unaff_x20 + 0x20));
        *(ulong *)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004d5818();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  func_0x00512300();
  if ((bool)uVar4) {
    *(undefined1 *)(unaff_x21 + 0x38) = extraout_w8;
  }
  if (*(char *)(unaff_x20 + 0x39) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x39) = 1;
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x48);
  if (iVar2 != 0) {
    iVar3 = *(int *)(unaff_x21 + 0x48);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_00511a0c();
      }
      *(int *)(unaff_x21 + 0x48) = iVar2;
    }
    switch(iVar2) {
    case 6:
      if (iVar3 == iVar2) {
        func_0x0051220c();
        FUN_00507a40();
        goto LAB_00512184;
      }
      func_0x00512240();
      FUN_0050e4dc();
      break;
    case 7:
      if (iVar3 == iVar2) {
        func_0x0051220c();
        FUN_00507a70();
        goto LAB_00512184;
      }
      func_0x00512240();
      FUN_0050e560();
      break;
    case 8:
      if (iVar3 == iVar2) {
        func_0x0051220c();
        FUN_00507b58();
        goto LAB_00512184;
      }
      func_0x00512240();
      FUN_0050e5e4();
      break;
    case 9:
      if (iVar3 == iVar2) {
        func_0x0051220c();
        FUN_00507cd4();
        goto LAB_00512184;
      }
      func_0x00512240();
      func_0x0050e89c();
      break;
    case 10:
      if (iVar3 == iVar2) {
        func_0x0051220c();
        FUN_00507d04();
        goto LAB_00512184;
      }
      func_0x00512240();
      func_0x0050e8cc();
      break;
    case 0xb:
      if (iVar3 == iVar2) {
        func_0x0051220c();
        func_0x00507e14();
        goto LAB_00512184;
      }
      func_0x00512240();
      FUN_0050e9dc();
      break;
    case 0xc:
      if (iVar3 == iVar2) {
        func_0x0051220c();
        func_0x00507be4();
        goto LAB_00512184;
      }
      func_0x00512240();
      FUN_0050e758();
      break;
    case 0xd:
      if (iVar3 == iVar2) {
        func_0x0051220c();
        FUN_004f097c();
        goto LAB_00512184;
      }
      func_0x00512240();
      func_0x004d3468();
      break;
    default:
      goto LAB_00512184;
    }
    *(ulong *)(unaff_x21 + 0x40) = param_1;
  }
LAB_00512184:
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



/* Entry: 005121a8; end: 005121af;  */

void FUN_005121a8(undefined8 param_1,qword *param_2)

{
  qword *pqVar1;
  
  if (param_2 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.filesize;
    __Znwm();
  }
  else {
    pqVar1 = param_2;
    func_0x005510c4(param_2,0x50);
  }
  *pqVar1 = (qword)&PTR_FUN_009fd670;
  pqVar1[1] = (qword)param_2;
  *(undefined4 *)(pqVar1 + 9) = 0;
  pqVar1[3] = 0;
  pqVar1[2] = 0;
  pqVar1[5] = 0;
  pqVar1[4] = 0;
  *(undefined8 *)((long)pqVar1 + 0x32) = 0;
  *(undefined8 *)((long)pqVar1 + 0x2a) = 0;
  return;
}



/* Entry: 005121b0; end: 005121ff;  */

void FUN_005121b0(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.filesize;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x50);
  }
  *pqVar1 = (qword)&PTR_FUN_009fd670;
  pqVar1[1] = (qword)param_1;
  *(undefined4 *)(pqVar1 + 9) = 0;
  pqVar1[3] = 0;
  pqVar1[2] = 0;
  pqVar1[5] = 0;
  pqVar1[4] = 0;
  *(undefined8 *)((long)pqVar1 + 0x32) = 0;
  *(undefined8 *)((long)pqVar1 + 0x2a) = 0;
  return;
}



/* Entry: 00512200; end: 00512353;  */

ulong * FUN_00512200(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 00512354; end: 0051237b;  */

long FUN_00512354(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 0051237c; end: 0051237f;  */

long FUN_0051237c(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 00512380; end: 00512393;  */

void FUN_00512380(void)

{
  FUN_00512354();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00512394; end: 005123b3;  */

undefined ** FUN_00512394(void)

{
  return &PTR_DAT_009fd7b8;
}



/* Entry: 005123b4; end: 0051244f;  */

dword * FUN_005123b4(dword *param_1,dword *param_2,dword *param_3)

{
  dword *pdVar1;
  dword *pdVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  pdVar2 = param_1;
  if (*(long *)(param_1 + 4) != 0) {
    pdVar1 = param_1;
    func_0x00512b6c();
    pdVar2 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,pdVar1);
    func_0x00512b78();
    param_2 = pdVar2;
  }
  if (*(long *)(param_1 + 6) != 0) {
    func_0x00512b6c();
    param_2 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,pdVar2);
    func_0x00512b78();
  }
  if ((*(ulong *)(param_1 + 2) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        lVar3 = (long)param_2 + (long)iVar7;
        param_2 = param_3;
        func_0x0054ed58(param_3,lVar3);
      }
      func_0x0054f690();
      return (dword *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (dword *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 00512450; end: 005124b7;  */

ulong FUN_00512450(long param_1)

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
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x20) = (int)uVar1;
  return uVar1;
}



/* Entry: 005124b8; end: 00512597;  */

undefined8 * FUN_005124b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009fd778;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x40);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x004ec4d0(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_00512aec(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004ec4d0(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  if (*(int *)(param_1 + 8) == 3) {
    param_1[7] = *(undefined8 *)(param_3 + 0x38);
  }
  return param_1;
}



/* Entry: 00512598; end: 005125c7;  */

long FUN_00512598(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_005125c8(param_1);
  return param_1;
}



/* Entry: 005125c8; end: 0051262f;  */

void FUN_005125c8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d89d4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00512354();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004d89d4();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 00512630; end: 00512633;  */

long FUN_00512630(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_005125c8(param_1);
  return param_1;
}



/* Entry: 00512634; end: 00512647;  */

void FUN_00512634(void)

{
  FUN_00512598();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00512648; end: 00512653;  */

undefined ** FUN_00512648(void)

{
  return &PTR_DAT_009fd810;
}



/* Entry: 00512654; end: 005126db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00512654(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x004d8a28(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x005123a0(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x004d8a28(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 0;
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



/* Entry: 005126dc; end: 005128bb;  */

dword * FUN_005126dc(dword *param_1,dword *param_2,dword *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  dword *pdVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = param_1[4];
  pdVar3 = param_1;
  if ((uVar2 & 1) != 0) {
    pdVar3 = (dword *)((long)&MACH_HEADER.magic + 1);
    func_0x00512b84(1,*(long *)(param_1 + 6),*(undefined4 *)(*(long *)(param_1 + 6) + 0x18));
    param_2 = pdVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pdVar3 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x00512b84(2,*(long *)(param_1 + 8),*(undefined4 *)(*(long *)(param_1 + 8) + 0x20));
    param_2 = pdVar3;
  }
  if (param_1[0x10] == 3) {
    func_0x00512b6c();
    param_2 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,pdVar3);
    func_0x00512b78();
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = &MACH_HEADER.cputype;
    func_0x00512b84(4,*(long *)(param_1 + 10),*(undefined4 *)(*(long *)(param_1 + 10) + 0x20));
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x00512b84(5,*(long *)(param_1 + 0xc),*(undefined4 *)(*(long *)(param_1 + 0xc) + 0x20));
  }
  if ((*(ulong *)(param_1 + 2) & 1) == 0) {
    return param_2;
  }
  uVar6 = *(ulong *)(param_1 + 2) & 0xfffffffffffffffe;
  uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
  if ((long)uVar5 < 0) {
    lVar4 = *(long *)(uVar6 + 8);
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    lVar4 = uVar6 + 8;
  }
  if ((long)(int)uVar5 <= *(long *)param_3 - (long)param_2) {
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (dword *)((long)param_2 + (long)(int)uVar5);
  }
  while( true ) {
    iVar8 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
    iVar7 = (int)uVar5;
    uVar5 = (ulong)(uint)(iVar7 - iVar8);
    if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
    func_0x0054f690();
    puVar1 = (undefined1 *)((long)param_2 + (long)iVar8);
    param_2 = param_3;
    func_0x0054ed58(param_3,puVar1);
  }
  func_0x0054f690();
  return (dword *)((long)param_2 + (long)iVar7);
}



/* Entry: 005128bc; end: 005128e7;  */

long FUN_005128bc(long param_1)

{
  FUN_00512450();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 005128e8; end: 005128eb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005128e8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar3 = uVar4;
        func_0x004d3428(uVar4,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar3 = uVar4;
        func_0x004ec4d0(uVar4,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x004d8ba4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar3 = uVar4;
        FUN_00512aec(uVar4,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        func_0x00512320();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x004ec4d0(uVar4,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x004d8ba4();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x40) != iVar2) {
      *(int *)(param_1 + 0x40) = iVar2;
    }
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
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



/* Entry: 005128ec; end: 00512a43;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_005128ec(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar3 = uVar4;
        func_0x004d3428(uVar4,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar3 = uVar4;
        func_0x004ec4d0(uVar4,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x004d8ba4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar3 = uVar4;
        FUN_00512aec(uVar4,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        func_0x00512320();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x004ec4d0(uVar4,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x004d8ba4();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x40) != iVar2) {
      *(int *)(param_1 + 0x40) = iVar2;
    }
    if (iVar2 == 3) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    }
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



/* Entry: 00512a44; end: 00512a53;  */

void FUN_00512a44(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if (param_2 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_2;
    func_0x005510c4(param_2,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009fd728;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return;
}



/* Entry: 00512a54; end: 00512aeb;  */

void FUN_00512a54(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009fd728;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  return;
}



/* Entry: 00512aec; end: 00512b5f;  */

char * FUN_00512aec(char *param_1)

{
  char *pcVar1;
  
  if (param_1 == (char *)0x0) {
    pcVar1 = segment_command_00000020.segname;
    __Znwm();
  }
  else {
    pcVar1 = param_1;
    func_0x005510c4(param_1,0x28);
  }
  *(undefined ***)pcVar1 = &PTR_FUN_009fd728;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(undefined4 *)(pcVar1 + 0x20) = 0;
  func_0x00512320();
  return pcVar1;
}



/* Entry: 00512b60; end: 00512b9f;  */

void FUN_00512b60(void)

{
  return;
}



/* Entry: 00512ba0; end: 00512bd3;  */

undefined8 * FUN_00512ba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009fd8a0;
  param_1[2] = 0;
  param_1[1] = 0;
  func_0x00480de4();
  return param_1;
}



/* Entry: 00512bd4; end: 00512cdf;  */

void FUN_00512bd4(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_DAT_009fd8d0);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fd920);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00514348(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00512ce0; end: 00512deb;  */

void FUN_00512ce0(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fd988);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fd9d8);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00514490(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00512dec; end: 00512ef7;  */

void FUN_00512dec(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fda40);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fda90);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_005145f0(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00512ef8; end: 00513003;  */

void FUN_00512ef8(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fdaf8);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fdb48);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_0051471c(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513004; end: 0051310f;  */

void FUN_00513004(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fdbb0);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fdc00);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00514848(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513110; end: 0051321b;  */

void FUN_00513110(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fdc68);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fdcb8);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00514988(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 0051321c; end: 00513327;  */

void FUN_0051321c(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fdd20);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fdd70);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00514acc(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513328; end: 00513433;  */

void FUN_00513328(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fddd8);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fde28);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00514c10(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513434; end: 0051353f;  */

void FUN_00513434(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fde90);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fdee0);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00514d64(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513540; end: 0051364b;  */

void FUN_00513540(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fdf48);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fdf98);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00514ea0(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 0051364c; end: 00513757;  */

void FUN_0051364c(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe000);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe050);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00514fcc(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513758; end: 00513863;  */

void FUN_00513758(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe0b8);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe108);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_005150f8(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513864; end: 0051396f;  */

void FUN_00513864(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe170);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe1c0);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00515224(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513970; end: 00513a7b;  */

void FUN_00513970(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe228);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe278);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00515350(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513a7c; end: 00513b87;  */

void FUN_00513a7c(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe2e0);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe330);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_005154b0(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513b88; end: 00513c93;  */

void FUN_00513b88(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe398);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe3e8);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_005155dc(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513c94; end: 00513d9f;  */

void FUN_00513c94(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe450);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe4a0);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00515718(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513da0; end: 00513eab;  */

void FUN_00513da0(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe508);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe558);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00515854(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513eac; end: 00513fb7;  */

void FUN_00513eac(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe5c0);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe610);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00515980(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 00513fb8; end: 005140c3;  */

void FUN_00513fb8(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe678);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe6c8);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00515abc(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 005140c4; end: 005141cf;  */

void FUN_005140c4(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x00515f30();
  func_0x00515c98();
  func_0x00515dcc();
  if (param_1 == 0) {
    func_0x00515d00();
    func_0x00515c3c();
    func_0x00515cf0();
    func_0x00515ce0();
    func_0x00515e58();
    func_0x00515c58();
    func_0x00515e20();
    func_0x00515e18();
    func_0x00515e28();
  }
  else {
    func_0x00515d10();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x00515e8c();
    func_0x00515ebc();
    func_0x00515ec8(&PTR_FUN_009fe730);
    if (lVar1 != 0) {
      do {
        func_0x00515d78();
      } while (extraout_w10 != 0);
      do {
        func_0x00515d78();
      } while (extraout_w10_00 != 0);
    }
    func_0x00515db4();
    func_0x00515c80(&PTR_DAT_009fe780);
    func_0x00515c20();
    func_0x00515e40();
    func_0x00515e38();
    FUN_00515bfc(&stack0x00000158);
    func_0x00515e48();
  }
  func_0x00515e30();
  return;
}



/* Entry: 005141d0; end: 005141df;  */

bool FUN_005141d0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x20);
  bVar1 = false;
  if (lVar2 != 0) {
    FUN_004083ec(lVar2,0);
    bVar1 = (int)lVar2 - 1U < 2;
  }
  return bVar1;
}



/* Entry: 005141e0; end: 0051421b;  */

void FUN_005141e0(void)

{
  func_0x00515f44();
  return;
}



/* Entry: 0051421c; end: 00514227;  */

void FUN_0051421c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009f1308;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = &DAT_00b69408;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x7f) = 0;
  return;
}


