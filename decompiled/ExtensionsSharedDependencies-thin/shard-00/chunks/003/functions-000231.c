/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004d6b8c; end: 004d6beb;  */

undefined8 * FUN_004d6b8c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_009f0560;
  param_1[1] = unaff_x21;
  puVar1 = param_1;
  func_0x004d6e0c();
  *(undefined2 *)(puVar1 + 3) = 0;
  func_0x004d61f4();
  return param_1;
}



/* Entry: 004d6bec; end: 004d6c53;  */

dword * FUN_004d6bec(long param_1)

{
  dword *pdVar1;
  dword *unaff_x21;
  
  func_0x004d6db8();
  if (param_1 == 0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
  }
  else {
    pdVar1 = unaff_x21;
    func_0x005510c4();
  }
  *(undefined ***)pdVar1 = &PTR_FUN_009f05b0;
  *(dword **)(pdVar1 + 2) = unaff_x21;
  pdVar1[5] = 0;
  *(undefined1 *)(pdVar1 + 4) = 0;
  func_0x004d6374();
  return pdVar1;
}



/* Entry: 004d6c54; end: 004d6e77;  */

void FUN_004d6c54(void)

{
  return;
}



/* Entry: 004d6e78; end: 004d6e9f;  */

long FUN_004d6e78(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 004d6ea0; end: 004d6ee7;  */

undefined8 * FUN_004d6ea0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009f0a78;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x004d6e44(param_1,param_3);
  return param_1;
}



/* Entry: 004d6ee8; end: 004d6eeb;  */

long FUN_004d6ee8(long param_1)

{
  FUN_00487580(param_1 + 8);
  return param_1;
}



/* Entry: 004d6eec; end: 004d6eff;  */

void FUN_004d6eec(void)

{
  FUN_004d6e78();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d6f00; end: 004d6f23;  */

undefined ** FUN_004d6f00(void)

{
  return &PTR_DAT_009f0ab8;
}



/* Entry: 004d6f24; end: 004d6fdf;  */

long * FUN_004d6f24(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = param_1;
  if ((int)param_1[3] != 0) {
    plVar1 = param_1;
    func_0x004d70a4();
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 3);
    uVar2 = 8;
    func_0x00487cbc(8,plVar1);
    func_0x00487cbc(plVar6,uVar2);
    param_2 = plVar6;
  }
  if (param_1[2] != 0) {
    func_0x004d70a4();
    param_2 = (long *)param_1[2];
    uVar2 = 0x10;
    func_0x00487cbc(0x10,plVar6);
    func_0x00487cf0(param_2,uVar2);
  }
  if ((param_1[1] & 1U) != 0) {
    uVar5 = param_1[1] & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar7 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        lVar3 = (long)param_2 + (long)iVar8;
        param_2 = param_3;
        func_0x0054ed58(param_3,lVar3);
      }
      func_0x0054f690();
      return (long *)((long)param_2 + (long)iVar7);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (long *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 004d6fe0; end: 004d7057;  */

ulong FUN_004d6fe0(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + ((int)LZCOUNT(*(int *)(param_1 + 0x18)) * -9 + 0x1a0U >> 6);
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



/* Entry: 004d7058; end: 004d709b;  */

void FUN_004d7058(segment_command *param_1)

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
  *(undefined ***)psVar1 = &PTR_FUN_009f0a78;
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



/* Entry: 004d709c; end: 004d70af;  */

void FUN_004d709c(void)

{
  return;
}



/* Entry: 004d70b0; end: 004d713b;  */

undefined8 * FUN_004d70b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f0b28;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 004d713c; end: 004d716f;  */

long FUN_004d713c(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d7170(param_1);
  return param_1;
}



/* Entry: 004d7170; end: 004d71a7;  */

void FUN_004d7170(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d9ba0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d71a8; end: 004d71ab;  */

long FUN_004d71a8(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d7170(param_1);
  return param_1;
}



/* Entry: 004d71ac; end: 004d71bf;  */

void FUN_004d71ac(void)

{
  FUN_004d713c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d71c0; end: 004d71cb;  */

undefined ** FUN_004d71c0(void)

{
  return &PTR_DAT_009f0b68;
}



/* Entry: 004d71cc; end: 004d7227;  */

void FUN_004d71cc(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x20));
    }
  }
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



/* Entry: 004d7228; end: 004d7347;  */

long * FUN_004d7228(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  plVar3 = param_2;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0054dae0(1,*(long *)(param_1 + 0x18),*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),
                    param_2,param_3);
  }
  plVar4 = plVar3;
  if ((uVar2 >> 1 & 1) != 0) {
    plVar4 = (long *)((long)&MACH_HEADER.magic + 2);
    func_0x0054dae0(2,*(long *)(param_1 + 0x20),*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18),
                    plVar3,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar4 < (long)(int)uVar6) {
      while( true ) {
        iVar9 = ((int)*param_3 - (int)plVar4) + 0x10;
        iVar8 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar8 - iVar9);
        if (iVar8 - iVar9 == 0 || iVar8 < iVar9) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)plVar4 + (long)iVar9);
        plVar4 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (long *)((long)plVar4 + (long)iVar8);
    }
    _memcpy(plVar4,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar4 + (long)(int)uVar6);
  }
  return plVar4;
}



/* Entry: 004d7348; end: 004d734b;  */

void FUN_004d7348(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x004d3428(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x004d3428(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d734c; end: 004d741b;  */

void FUN_004d734c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x004d3428(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x004d3428(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d741c; end: 004d7423;  */

void FUN_004d741c(undefined8 param_1,char *param_2)

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
  *(undefined ***)pcVar1 = &PTR_FUN_009f0b28;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  return;
}



/* Entry: 004d7424; end: 004d746f;  */

void FUN_004d7424(char *param_1)

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
  *(undefined ***)pcVar1 = &PTR_FUN_009f0b28;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x18) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(qword *)(pcVar1 + 0x10) = 0;
  return;
}



/* Entry: 004d7470; end: 004d747b;  */

void FUN_004d7470(void)

{
  return;
}



/* Entry: 004d747c; end: 004d74f3;  */

undefined8 * FUN_004d747c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f0bd0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 004d74f4; end: 004d7523;  */

long FUN_004d74f4(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d7524(param_1);
  return param_1;
}



/* Entry: 004d7524; end: 004d753f;  */

void FUN_004d7524(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d7540; end: 004d7543;  */

long FUN_004d7540(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d7524(param_1);
  return param_1;
}



/* Entry: 004d7544; end: 004d7557;  */

void FUN_004d7544(void)

{
  FUN_004d74f4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d7558; end: 004d7563;  */

undefined ** FUN_004d7558(void)

{
  return &PTR_DAT_009f0c10;
}



/* Entry: 004d7564; end: 004d7677;  */

void FUN_004d7564(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_004d9bf4(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 004d7678; end: 004d767b;  */

void FUN_004d7678(long param_1,long param_2)

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
      func_0x004d3428(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_004d9d18(*(long *)(param_1 + 0x18));
    }
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



/* Entry: 004d767c; end: 004d770f;  */

void FUN_004d767c(long param_1,long param_2)

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
      func_0x004d3428(uVar2,*(undefined8 *)(param_2 + 0x18));
      *(ulong *)(param_1 + 0x18) = uVar2;
    }
    else {
      FUN_004d9d18(*(long *)(param_1 + 0x18));
    }
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



/* Entry: 004d7710; end: 004d7717;  */

void FUN_004d7710(undefined8 param_1,segment_command *param_2)

{
  segment_command *psVar1;
  
  if (param_2 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_2;
    func_0x005510c4(param_2,0x20);
  }
  *(undefined ***)psVar1 = &PTR_FUN_009f0bd0;
  *(segment_command **)psVar1->segname = param_2;
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



/* Entry: 004d7718; end: 004d775b;  */

void FUN_004d7718(segment_command *param_1)

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
  *(undefined ***)psVar1 = &PTR_FUN_009f0bd0;
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



/* Entry: 004d775c; end: 004d7763;  */

void FUN_004d775c(void)

{
  return;
}



/* Entry: 004d7764; end: 004d77cf;  */

void FUN_004d7764(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    func_0x00532f74(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_004d9ba0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 004d77d0; end: 004d7873;  */

undefined8 * FUN_004d77d0(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_009f0c90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)((long)param_1 + 0x24) = iVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 0x10);
  if (iVar1 == 3) {
    param_3 = param_3 + 0x18;
    func_0x00487c6c(param_3,param_2);
  }
  else {
    if (iVar1 == 2) {
      param_1[3] = *(undefined8 *)(param_3 + 0x18);
      return param_1;
    }
    if (iVar1 != 1) {
      return param_1;
    }
    func_0x004d3428(param_2,*(undefined8 *)(param_3 + 0x18));
    param_3 = param_2;
  }
  param_1[3] = param_3;
  return param_1;
}



/* Entry: 004d7874; end: 004d78a3;  */

long FUN_004d7874(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d78a4(param_1);
  return param_1;
}



/* Entry: 004d78a4; end: 004d78b7;  */

void FUN_004d78a4(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 3) {
    func_0x00532f74(param_1 + 0x18);
  }
  else if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_004d9ba0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 004d78b8; end: 004d78cb;  */

void FUN_004d78b8(void)

{
  FUN_004d7874();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d78cc; end: 004d78d7;  */

undefined ** FUN_004d78cc(void)

{
  return &PTR_DAT_009f0cd0;
}



/* Entry: 004d78d8; end: 004d7913;  */

void FUN_004d78d8(long param_1)

{
  ulong *puVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_004d7764();
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



/* Entry: 004d7914; end: 004d7a3b;  */

long * FUN_004d7914(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  
  iVar9 = *(int *)(param_1 + 0x24);
  plVar8 = param_3;
  if (iVar9 == 3) {
    puVar10 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
    lVar5 = (long)*(char *)((long)puVar10 + 0x17);
    puVar2 = puVar10;
    if (lVar5 < 0) {
      lVar5 = puVar10[1];
      puVar2 = (undefined8 *)*puVar10;
    }
    FUN_0054ddb8(puVar2,lVar5,1,"snapchat.messaging.LegacyMessageId.string_message_id");
    FUN_00435e9c(param_3,3,puVar10,param_2);
  }
  else if (iVar9 == 2) {
    func_0x0043645c(param_3,*(undefined8 *)(param_1 + 0x18),param_2);
  }
  else {
    plVar8 = param_2;
    if (iVar9 == 1) {
      plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
      func_0x0054dae0(1,*(long *)(param_1 + 0x18),*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),
                      param_2,param_3);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    plVar3 = param_3;
    func_0x00487c24(param_3,plVar8);
    plVar8 = (long *)(ulong)*(byte *)(param_1 + 0x10);
    uVar4 = 0x20;
    func_0x00487cbc(0x20,plVar3);
    func_0x00487cbc(plVar8,uVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar6 = (ulong)*(char *)(uVar7 + 0x1f);
    if ((long)uVar6 < 0) {
      lVar5 = *(long *)(uVar7 + 8);
      uVar6 = *(ulong *)(uVar7 + 0x10);
    }
    else {
      lVar5 = uVar7 + 8;
    }
    if (*param_3 - (long)plVar8 < (long)(int)uVar6) {
      while( true ) {
        iVar11 = ((int)*param_3 - (int)plVar8) + 0x10;
        iVar9 = (int)uVar6;
        uVar6 = (ulong)(uint)(iVar9 - iVar11);
        if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)plVar8 + (long)iVar11);
        plVar8 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (long *)((long)plVar8 + (long)iVar9);
    }
    _memcpy(plVar8,lVar5,uVar6 & 0xffffffff);
    return (long *)((long)plVar8 + (long)(int)uVar6);
  }
  return plVar8;
}



/* Entry: 004d7a3c; end: 004d7adf;  */

long FUN_004d7a3c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (ulong)*(byte *)(param_1 + 0x10) * 2;
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 3) {
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
    FUN_0048910c();
  }
  else {
    if (iVar1 == 2) {
      lVar4 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar4;
      goto LAB_004d7ab0;
    }
    if (iVar1 != 1) goto LAB_004d7ab0;
    uVar2 = *(ulong *)(param_1 + 0x18);
    FUN_004d2ec0();
  }
  lVar4 = uVar2 + lVar4 + 1;
LAB_004d7ab0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x20) = (int)lVar4;
  return lVar4;
}



/* Entry: 004d7ae0; end: 004d7ae3;  */

void FUN_004d7ae0(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_004d7764(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        *(undefined **)(param_1 + 0x18) = &DAT_00b69408;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x24) != 3) {
        puVar2 = &DAT_00b69408;
      }
      func_0x00532e08(param_1 + 0x18,puVar2,uVar5);
    }
    else if (iVar3 == 2) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    else if (iVar3 == 1) {
      if (iVar4 == 1) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x24) != 1) {
          ppuVar1 = &PTR_PTR_00b0b978;
        }
        FUN_004d9d18(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      }
      else {
        func_0x004d3428(uVar5,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar5;
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



/* Entry: 004d7ae4; end: 004d7c1b;  */

void FUN_004d7ae4(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 8);
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        FUN_004d7764(param_1);
      }
      *(int *)(param_1 + 0x24) = iVar3;
    }
    if (iVar3 == 3) {
      if (iVar4 != 3) {
        *(undefined **)(param_1 + 0x18) = &DAT_00b69408;
      }
      puVar2 = (undefined *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(param_2 + 0x24) != 3) {
        puVar2 = &DAT_00b69408;
      }
      func_0x00532e08(param_1 + 0x18,puVar2,uVar5);
    }
    else if (iVar3 == 2) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    }
    else if (iVar3 == 1) {
      if (iVar4 == 1) {
        ppuVar1 = *(undefined ***)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x24) != 1) {
          ppuVar1 = &PTR_PTR_00b0b978;
        }
        FUN_004d9d18(*(undefined8 *)(param_1 + 0x18),ppuVar1);
      }
      else {
        func_0x004d3428(uVar5,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar5;
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



/* Entry: 004d7c1c; end: 004d7c23;  */

void FUN_004d7c1c(undefined8 param_1,char *param_2)

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
  *(undefined ***)pcVar1 = &PTR_DAT_009f0c90;
  *(char **)(pcVar1 + 8) = param_2;
  *(qword *)(pcVar1 + 0x20) = 0;
  pcVar1[0x10] = 0;
  return;
}



/* Entry: 004d7c24; end: 004d7c6b;  */

void FUN_004d7c24(char *param_1)

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
  *(undefined ***)pcVar1 = &PTR_DAT_009f0c90;
  *(char **)(pcVar1 + 8) = param_1;
  *(qword *)(pcVar1 + 0x20) = 0;
  pcVar1[0x10] = 0;
  return;
}



/* Entry: 004d7c6c; end: 004d7c7f;  */

void FUN_004d7c6c(void)

{
  return;
}



/* Entry: 004d7c80; end: 004d7d53;  */

undefined8 * FUN_004d7c80(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f0d40;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar2 = param_3 + 0x18;
  func_0x00487c6c(lVar2,param_2);
  param_1[3] = lVar2;
  lVar2 = param_3 + 0x20;
  func_0x00487c6c(lVar2,param_2);
  param_1[4] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x004907a4(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    FUN_0048bcf4(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004907a4(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar3;
  return param_1;
}



/* Entry: 004d7d54; end: 004d7d87;  */

long FUN_004d7d54(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d7d88(param_1);
  return param_1;
}



/* Entry: 004d7d88; end: 004d7ddf;  */

void FUN_004d7d88(long param_1)

{
  func_0x00532f74(param_1 + 0x18);
  func_0x00532f74(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00653080();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00652d54();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00653080();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d7de0; end: 004d7de3;  */

long FUN_004d7de0(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d7d88(param_1);
  return param_1;
}



/* Entry: 004d7de4; end: 004d7df7;  */

void FUN_004d7de4(void)

{
  FUN_004d7d54();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d7df8; end: 004d7e03;  */

undefined ** FUN_004d7df8(void)

{
  return &PTR_DAT_009f0d80;
}



/* Entry: 004d7e04; end: 004d7e8b;  */

void FUN_004d7e04(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_00532fa8(param_1 + 0x18);
  FUN_00532fa8(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00653134(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00652e04(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00653134(*(undefined8 *)(param_1 + 0x38));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
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



/* Entry: 004d7e8c; end: 004d81c7;  */

qword * FUN_004d7e8c(qword *param_1,qword *param_2,qword *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  qword *pqVar7;
  qword *pqVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  
  pqVar7 = param_1;
  if (param_1[8] != 0) {
    pqVar8 = param_1;
    FUN_004d83e8();
    pqVar7 = (qword *)param_1[8];
    uVar3 = 8;
    func_0x00487cbc(8,pqVar8);
    func_0x00487cf0(pqVar7,uVar3);
    param_2 = pqVar7;
  }
  puVar10 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar10[1];
    if (lVar4 != 0) {
      puVar10 = (undefined8 *)*puVar10;
      goto LAB_004d7efc;
    }
  }
  else if (*(char *)((long)puVar10 + 0x17) != '\0') {
LAB_004d7efc:
    FUN_0054ddb8(puVar10,lVar4,1,"snapchat.messaging.PublicGroupMetadata.topic_id");
    pqVar7 = param_3;
    func_0x004d8418(param_3,2);
    param_2 = pqVar7;
  }
  puVar10 = (undefined8 *)(param_1[4] & 0xfffffffffffffffc);
  lVar4 = (long)*(char *)((long)puVar10 + 0x17);
  if (lVar4 < 0) {
    lVar4 = puVar10[1];
    if (lVar4 == 0) goto LAB_004d7f64;
    puVar10 = (undefined8 *)*puVar10;
  }
  else if (*(char *)((long)puVar10 + 0x17) == '\0') goto LAB_004d7f64;
  FUN_0054ddb8(puVar10,lVar4,1,"snapchat.messaging.PublicGroupMetadata.thumbnail_url");
  pqVar7 = param_3;
  func_0x004d8418(param_3,4);
  param_2 = pqVar7;
LAB_004d7f64:
  pqVar8 = pqVar7;
  if (*(char *)(param_1 + 9) == '\x01') {
    FUN_004d83e8();
    pqVar8 = (qword *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,pqVar7);
    func_0x004d83f4();
    param_2 = pqVar8;
  }
  pqVar7 = pqVar8;
  if (*(char *)((long)param_1 + 0x49) == '\x01') {
    FUN_004d83e8();
    pqVar7 = (qword *)(segment_command_00000020.segname + 8);
    func_0x00487cbc(0x30,pqVar8);
    func_0x004d83f4();
    param_2 = pqVar7;
  }
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    pqVar7 = (qword *)((long)&MACH_HEADER.cputype + 3);
    func_0x004d8400(7,param_1[5],*(undefined4 *)(param_1[5] + 0x14));
    param_2 = pqVar7;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    pqVar7 = (qword *)&MACH_HEADER.cpusubtype;
    func_0x004d8400(8,param_1[6],*(undefined4 *)(param_1[6] + 0x18));
    param_2 = pqVar7;
  }
  pqVar8 = pqVar7;
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    FUN_004d83e8();
    pqVar8 = (qword *)(ulong)*(uint *)((long)param_1 + 0x4c);
    uVar3 = 0x48;
    func_0x00487cbc(0x48,pqVar7);
    func_0x00487ce8(pqVar8,uVar3);
    param_2 = pqVar8;
  }
  if (*(char *)((long)param_1 + 0x4a) == '\x01') {
    FUN_004d83e8();
    param_2 = &segment_command_00000020.filesize;
    func_0x00487cbc(0x50,pqVar8);
    func_0x004d83f4();
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = (qword *)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x004d8400(0xb,param_1[7],*(undefined4 *)(param_1[7] + 0x14));
  }
  if ((param_1[1] & 1) != 0) {
    uVar6 = param_1[1] & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if ((long)(*param_3 - (long)param_2) < (long)(int)uVar5) {
      while( true ) {
        iVar11 = ((int)*param_3 - (int)param_2) + 0x10;
        iVar9 = (int)uVar5;
        uVar5 = (ulong)(uint)(iVar9 - iVar11);
        if (iVar9 - iVar11 == 0 || iVar9 < iVar11) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar11);
        param_2 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (qword *)((long)param_2 + (long)iVar9);
    }
    _memcpy(param_2,lVar4,uVar5 & 0xffffffff);
    return (qword *)((long)param_2 + (long)(int)uVar5);
  }
  return param_2;
}



/* Entry: 004d81c8; end: 004d81cb;  */

void FUN_004d81c8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x004907a4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x00653114();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        FUN_0048bcf4(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x00652de8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x004907a4(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00653114();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d81cc; end: 004d837b;  */

void FUN_004d81cc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_1 + 8);
  uVar2 = uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = *(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar3 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar3 + 8);
  }
  if (lVar5 != 0) {
    if ((uVar4 & 1) != 0) {
      uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x18,uVar3,uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    func_0x00532e08(param_1 + 0x20,uVar4,uVar3);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar4 = uVar2;
        func_0x004907a4(uVar2,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar4;
      }
      else {
        func_0x00653114();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar4 = uVar2;
        FUN_0048bcf4(uVar2,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar4;
      }
      else {
        func_0x00652de8();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x004907a4(uVar2,*(undefined8 *)(param_2 + 0x38));
        *(ulong *)(param_1 + 0x38) = uVar2;
      }
      else {
        func_0x00653114();
      }
    }
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 1;
  }
  if (*(int *)(param_2 + 0x4c) != 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_2 + 0x4c);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004d837c; end: 004d8383;  */

void FUN_004d837c(undefined8 param_1,qword *param_2)

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
  *pqVar1 = (qword)&PTR_FUN_009f0d40;
  pqVar1[1] = (qword)param_2;
  pqVar1[2] = 0;
  pqVar1[3] = (qword)&DAT_00b69408;
  pqVar1[4] = (qword)&DAT_00b69408;
  pqVar1[6] = 0;
  pqVar1[5] = 0;
  pqVar1[8] = 0;
  pqVar1[7] = 0;
  pqVar1[9] = 0;
  return;
}



/* Entry: 004d8384; end: 004d83e7;  */

void FUN_004d8384(qword *param_1)

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
  *pqVar1 = (qword)&PTR_FUN_009f0d40;
  pqVar1[1] = (qword)param_1;
  pqVar1[2] = 0;
  pqVar1[3] = (qword)&DAT_00b69408;
  pqVar1[4] = (qword)&DAT_00b69408;
  pqVar1[6] = 0;
  pqVar1[5] = 0;
  pqVar1[8] = 0;
  pqVar1[7] = 0;
  pqVar1[9] = 0;
  return;
}



/* Entry: 004d83e8; end: 004d842f;  */

ulong * FUN_004d83e8(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong *unaff_x21;
  
  if (unaff_x21 < (ulong *)*unaff_x19) {
    return unaff_x21;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_0054ec3c();
    unaff_x21 = (ulong *)((long)puVar2 + (long)((int)unaff_x21 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= unaff_x21);
  return unaff_x21;
}



/* Entry: 004d8430; end: 004d8487;  */

void FUN_004d8430(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) == 1) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_004d87a0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 004d8488; end: 004d84ef;  */

undefined8 * FUN_004d8488(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_009f0e90;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004d8d8c();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)((long)param_1 + 0x1c) = iVar1;
  if (iVar1 == 1) {
    FUN_004d8cc4(param_2,*(undefined8 *)(param_3 + 0x10));
    param_1[2] = param_2;
  }
  return param_1;
}



/* Entry: 004d84f0; end: 004d851b;  */

undefined8 FUN_004d84f0(undefined8 param_1)

{
  func_0x004d8d84();
  FUN_004d851c(param_1);
  return param_1;
}



/* Entry: 004d851c; end: 004d852f;  */

void FUN_004d851c(long param_1)

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
        FUN_004d87a0();
      }
      __ZdlPv();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



/* Entry: 004d8530; end: 004d8543;  */

void FUN_004d8530(void)

{
  FUN_004d84f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d8544; end: 004d8553;  */

undefined8 FUN_004d8544(undefined8 param_1)

{
  func_0x004d8d84();
  return param_1;
}



/* Entry: 004d8554; end: 004d8657;  */

void FUN_004d8554(long param_1)

{
  ulong *puVar1;
  
  FUN_004d8430();
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



/* Entry: 004d8658; end: 004d8683;  */

long FUN_004d8658(long param_1)

{
  FUN_004d88f0();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}



/* Entry: 004d8684; end: 004d8687;  */

void FUN_004d8684(long param_1,long param_2)

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
        FUN_004d8748(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_004d8430(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_004d8cc4(uVar2,*(undefined8 *)(param_2 + 0x10));
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



/* Entry: 004d8688; end: 004d8747;  */

void FUN_004d8688(long param_1,long param_2)

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
        FUN_004d8748(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_004d8430(param_1);
      }
      *(int *)(param_1 + 0x1c) = iVar1;
      if (iVar1 == 1) {
        FUN_004d8cc4(uVar2,*(undefined8 *)(param_2 + 0x10));
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



/* Entry: 004d8748; end: 004d879f;  */

void FUN_004d8748(long param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *(undefined1 *)(param_1 + 0x22) = 1;
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



/* Entry: 004d87a0; end: 004d87c3;  */

undefined8 FUN_004d87a0(undefined8 param_1)

{
  func_0x004d8d84();
  return param_1;
}



/* Entry: 004d87c4; end: 004d87d7;  */

void FUN_004d87c4(void)

{
  FUN_004d87a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d87d8; end: 004d87fb;  */

undefined ** FUN_004d87d8(void)

{
  return &PTR_DAT_009f0f20;
}



/* Entry: 004d87fc; end: 004d88ef;  */

dword * FUN_004d87fc(dword *param_1,undefined8 param_2,undefined8 param_3,dword *param_4)

{
  uint uVar1;
  dword *pdVar2;
  dword *pdVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  dword *unaff_x19;
  long unaff_x20;
  int iVar7;
  int iVar8;
  
  func_0x004d8d74();
  pdVar2 = param_1;
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x004d8d38();
    pdVar2 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,param_1);
    func_0x004d8d58();
    param_4 = pdVar2;
  }
  pdVar3 = pdVar2;
  if (*(char *)(unaff_x20 + 0x21) == '\x01') {
    func_0x004d8d38();
    pdVar3 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,pdVar2);
    func_0x004d8d58();
    param_4 = pdVar3;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    pdVar3 = unaff_x19;
    FUN_00435f80();
    param_4 = pdVar3;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    pdVar3 = unaff_x19;
    FUN_004383e0();
    param_4 = pdVar3;
  }
  if (*(char *)(unaff_x20 + 0x22) == '\x01') {
    func_0x004d8d38();
    param_4 = (dword *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,pdVar3);
    func_0x004d8d58();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
    uVar5 = (ulong)*(char *)(uVar6 + 0x1f);
    if ((long)uVar5 < 0) {
      lVar4 = *(long *)(uVar6 + 8);
      uVar5 = *(ulong *)(uVar6 + 0x10);
    }
    else {
      lVar4 = uVar6 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)uVar5) {
      while( true ) {
        iVar8 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)uVar5;
        uVar1 = iVar7 - iVar8;
        uVar5 = (ulong)uVar1;
        if (uVar1 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar4,uVar5 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)uVar5);
  }
  return param_4;
}



/* Entry: 004d88f0; end: 004d896f;  */

long FUN_004d88f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar2;
  }
  lVar1 = uVar2 + (ulong)*(byte *)(param_1 + 0x20) * 2 + (ulong)*(byte *)(param_1 + 0x21) * 2 +
          (ulong)*(byte *)(param_1 + 0x22) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar2 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar2 + 0x10);
    }
    lVar1 = lVar3 + lVar1;
  }
  *(int *)(param_1 + 0x24) = (int)lVar1;
  return lVar1;
}



/* Entry: 004d8970; end: 004d89d3;  */

undefined8 * FUN_004d8970(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f0df0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004d8d8c();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = *(uint *)(param_3 + 0x24);
  *(uint *)((long)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  if ((uVar1 & 0xfffffffe) == 2) {
    param_1[3] = *(undefined8 *)(param_3 + 0x18);
  }
  return param_1;
}



/* Entry: 004d89d4; end: 004d8a03;  */

long FUN_004d89d4(long param_1)

{
  func_0x004d8d84();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 004d8a04; end: 004d8a07;  */

long FUN_004d8a04(long param_1)

{
  func_0x004d8d84();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return param_1;
}



/* Entry: 004d8a08; end: 004d8a1b;  */

void FUN_004d8a08(void)

{
  FUN_004d89d4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d8a1c; end: 004d8a3f;  */

undefined ** FUN_004d8a1c(void)

{
  return &PTR_DAT_009f0f78;
}



/* Entry: 004d8a40; end: 004d8b2b;  */

long * FUN_004d8a40(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  func_0x004d8d74();
  plVar6 = param_1;
  if ((int)param_1[2] != 0) {
    func_0x004d8d38();
    plVar6 = (long *)(ulong)*(uint *)(unaff_x20 + 0x10);
    uVar2 = 8;
    func_0x00487cbc(8,param_1);
    func_0x00487ce8(plVar6,uVar2);
    param_4 = plVar6;
  }
  if (*(int *)(unaff_x20 + 0x24) == 3) {
    func_0x004d8d38();
    if (*(int *)(unaff_x20 + 0x24) == 3) {
      param_4 = *(long **)(unaff_x20 + 0x18);
    }
    else {
      param_4 = (long *)0x0;
    }
    uVar2 = 0x18;
  }
  else {
    if (*(int *)(unaff_x20 + 0x24) != 2) goto LAB_004d8af4;
    func_0x004d8d38();
    if (*(int *)(unaff_x20 + 0x24) == 2) {
      param_4 = *(long **)(unaff_x20 + 0x18);
    }
    else {
      param_4 = (long *)0x0;
    }
    uVar2 = 0x10;
  }
  func_0x00487cbc(uVar2,plVar6);
  func_0x00487cf0(param_4,uVar2);
LAB_004d8af4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  uVar5 = *(ulong *)(unaff_x20 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
      iVar7 = (int)uVar4;
      uVar1 = iVar7 - iVar8;
      uVar4 = (ulong)uVar1;
      if (uVar1 == 0 || iVar7 < iVar8) break;
      func_0x0054f690();
      param_4 = unaff_x19;
      func_0x0054ed58();
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar7);
  }
  _memcpy(param_4,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_4 + (long)(int)uVar4);
}



/* Entry: 004d8b2c; end: 004d8c03;  */

long FUN_004d8b2c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(uint *)(param_1 + 0x24) & 0xfffffffe) == 2) {
    lVar1 = (ulong)((int)LZCOUNT(*(undefined8 *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + lVar1;
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



/* Entry: 004d8c04; end: 004d8cc3;  */

void FUN_004d8c04(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x004d8db0();
  }
  else {
    func_0x004d8da4();
  }
  *puVar1 = &PTR_FUN_009f0df0;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



/* Entry: 004d8cc4; end: 004d8d37;  */

undefined8 * FUN_004d8cc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x004d8db0();
  }
  else {
    func_0x005510c4(param_1,0x28);
  }
  *puVar1 = &PTR_FUN_009f0e40;
  puVar1[1] = param_1;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)((long)puVar1 + 0x1f) = 0;
  FUN_004d8748();
  return puVar1;
}



/* Entry: 004d8d38; end: 004d8db7;  */

ulong * FUN_004d8d38(void)

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



/* Entry: 004d8db8; end: 004d8e4b;  */

undefined8 * FUN_004d8db8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f1018;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00487c6c(lVar1,param_2);
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00487c6c(lVar1,param_2);
  param_1[4] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004d927c(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 004d8e4c; end: 004d8e7b;  */

long FUN_004d8e4c(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d8e7c(param_1);
  return param_1;
}



/* Entry: 004d8e7c; end: 004d8eb3;  */

void FUN_004d8e7c(long param_1)

{
  func_0x00532f74(param_1 + 0x18);
  func_0x00532f74(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0051dda4();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d8eb4; end: 004d8eb7;  */

long FUN_004d8eb4(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_004d8e7c(param_1);
  return param_1;
}



/* Entry: 004d8eb8; end: 004d8ecb;  */

void FUN_004d8eb8(void)

{
  FUN_004d8e4c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004d8ecc; end: 004d8ed7;  */

undefined ** FUN_004d8ecc(void)

{
  return &PTR_DAT_009f1058;
}



/* Entry: 004d8ed8; end: 004d8f2f;  */

void FUN_004d8ed8(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x18);
  FUN_00532fa8(param_1 + 0x20);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0051ddf8(*(undefined8 *)(param_1 + 0x28));
  }
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 004d8f30; end: 004d9043;  */

long * FUN_004d8f30(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  plVar2 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    plVar2 = (long *)((long)&MACH_HEADER.magic + 1);
    func_0x0054dae0(1,*(long *)(param_1 + 0x28),*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x24),
                    param_2,param_3);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_004d8f98;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_004d8f98:
    FUN_0054ddb8(puVar7,lVar3,1,"snapchat.messaging.SnapStoryId.legacy_story_id");
    plVar2 = param_3;
    func_0x004d92d4(param_3,2);
  }
  puVar7 = (undefined8 *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 == 0) goto LAB_004d9000;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_004d9000;
  FUN_0054ddb8(puVar7,lVar3,1,"snapchat.messaging.SnapStoryId.poster_owner_id");
  plVar2 = param_3;
  func_0x004d92d4(param_3,3);
LAB_004d9000:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return plVar2;
  }
  uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)plVar2 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)plVar2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x0054f690();
      puVar1 = (undefined1 *)((long)plVar2 + (long)iVar8);
      plVar2 = param_3;
      func_0x0054ed58(param_3,puVar1);
    }
    func_0x0054f690();
    return (long *)((long)plVar2 + (long)iVar6);
  }
  _memcpy(plVar2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)plVar2 + (long)(int)uVar4);
}



/* Entry: 004d9044; end: 004d90eb;  */

long FUN_004d9044(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_004d907c;
  }
  else if (*(char *)(uVar1 + 0x17) == '\0') {
LAB_004d907c:
    lVar3 = 0;
    goto LAB_004d9080;
  }
  FUN_0048910c();
  lVar3 = uVar1 + 1;
LAB_004d9080:
  uVar1 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    FUN_0048910c();
    lVar3 = lVar3 + uVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    FUN_004d90ec();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar1 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar1 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 004d90ec; end: 004d9117;  */

long FUN_004d90ec(long param_1)

{
  FUN_0051df38();
  return param_1 + (ulong)((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6);
}


