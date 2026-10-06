/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004f05a0; end: 004f05b3;  */

void FUN_004f05a0(void)

{
  FUN_004f0520();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f05b4; end: 004f05bf;  */

undefined ** FUN_004f05b4(void)

{
  return &PTR_DAT_009f5bb8;
}



/* Entry: 004f05c0; end: 004f0663;  */

void FUN_004f05c0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004f2018();
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    func_0x004f0620(*(undefined8 *)(unaff_x19 + 0x30));
  }
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  FUN_004f0348();
  func_0x004f03c8();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 004f0664; end: 004f0843;  */

qword * FUN_004f0664(qword *param_1,qword *param_2,ulong param_3,qword *param_4)

{
  uint uVar1;
  qword *pqVar2;
  qword *pqVar3;
  long lVar4;
  long extraout_x8;
  qword *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x004f1e58();
  pqVar2 = param_1;
  if (param_1[7] != 0) {
    func_0x004f1ddc();
    pqVar2 = (qword *)&MACH_HEADER.cpusubtype;
    func_0x00487cbc();
    func_0x004f1e30();
    param_2 = param_1;
    param_4 = pqVar2;
  }
  pqVar3 = pqVar2;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x004f1ddc();
    pqVar3 = (qword *)&MACH_HEADER.ncmds;
    func_0x00487cbc();
    func_0x004f1e30();
    param_2 = pqVar2;
    param_4 = pqVar3;
  }
  if (*(int *)(unaff_x20 + 0x70) == 3) {
    param_2 = *(qword **)(unaff_x20 + 0x60);
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    pqVar3 = (qword *)((long)&MACH_HEADER.magic + 3);
    func_0x004f1ef8();
    param_4 = pqVar3;
  }
  iVar5 = *(int *)(unaff_x20 + 0x20);
  while (iVar5 != 0) {
    func_0x004f1e3c();
    param_3 = (ulong)*(dword *)((long)param_2 + 0x14);
    pqVar3 = (qword *)&MACH_HEADER.cputype;
    func_0x004f1ef8();
    func_0x004f2048();
  }
  pqVar2 = pqVar3;
  if ((*(byte *)(unaff_x20 + 0x58) & 1) != 0) {
    func_0x004f1ddc();
    pqVar2 = (qword *)segment_command_00000020.segname;
    func_0x00487cbc(0x28,pqVar3);
    func_0x004f1f08();
    param_4 = pqVar2;
  }
  if (*(int *)(unaff_x20 + 0x74) == 7) {
    func_0x004f1ddc();
    pqVar3 = &segment_command_00000020.vmaddr;
    func_0x00487cbc(0x38,pqVar2);
    func_0x004f1e30();
    param_4 = pqVar3;
  }
  else {
    pqVar3 = pqVar2;
    if (*(int *)(unaff_x20 + 0x74) == 6) {
      param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x14);
      pqVar3 = (qword *)((long)&MACH_HEADER.cputype + 2);
      func_0x004f1ef8();
      param_4 = pqVar3;
    }
  }
  if (*(int *)(unaff_x20 + 0x70) == 8) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x14);
    pqVar3 = (qword *)&MACH_HEADER.cpusubtype;
    func_0x004f1ef8();
    param_4 = pqVar3;
  }
  pqVar2 = pqVar3;
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x004f1ddc();
    pqVar2 = &segment_command_00000020.fileoff;
    func_0x00487cbc(0x48,pqVar3);
    func_0x004f1e30();
    param_4 = pqVar2;
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x004f1ddc();
    param_4 = &segment_command_00000020.filesize;
    func_0x00487cbc(0x50,pqVar2);
    func_0x004f1e30();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x14);
    param_4 = (qword *)((long)&MACH_HEADER.cpusubtype + 3);
    func_0x004f1ef8();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return param_4;
  }
  func_0x004f1f34();
  if ((long)param_3 < 0) {
    lVar4 = *(long *)(extraout_x8 + 8);
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  else {
    lVar4 = extraout_x8 + 8;
  }
  if ((long)(int)param_3 <= (long)(*unaff_x19 - (long)param_4)) {
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (qword *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar5 = (int)param_3;
    uVar1 = iVar5 - iVar6;
    param_3 = (ulong)uVar1;
    if (uVar1 == 0 || iVar5 < iVar6) break;
    func_0x0054f690();
    param_4 = unaff_x19;
    func_0x0054ed58();
  }
  func_0x0054f690();
  return (qword *)((long)param_4 + (long)iVar5);
}



/* Entry: 004f0844; end: 004f0977;  */

long FUN_004f0844(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x004f203c();
  func_0x004f1e68();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_004dff90();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
    FUN_004f0d94();
    func_0x004f1de8();
    unaff_x20 = unaff_x20 + lVar1 + extraout_x8 + 1;
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x004f1ea4();
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    func_0x004f1ea4();
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    func_0x004f1ea4();
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    func_0x004f1ea4();
  }
  lVar1 = unaff_x20 + (ulong)*(byte *)(unaff_x19 + 0x58) * 2;
  if (*(int *)(unaff_x19 + 0x70) == 8) {
    lVar2 = *(long *)(unaff_x19 + 0x60);
    FUN_004e2398();
    func_0x004f1de8();
    lVar1 = lVar1 + lVar2 + extraout_x8_00;
  }
  else {
    if (*(int *)(unaff_x19 + 0x70) != 3) goto LAB_004f0910;
    lVar2 = *(long *)(unaff_x19 + 0x60);
    func_0x004e5964();
    lVar1 = lVar1 + lVar2;
  }
  lVar1 = lVar1 + 1;
LAB_004f0910:
  if (*(int *)(unaff_x19 + 0x74) == 7) {
    lVar1 = (ulong)((int)LZCOUNT(*(undefined8 *)(unaff_x19 + 0x68)) * -9 + 0x2c0U >> 6) + lVar1;
  }
  else if (*(int *)(unaff_x19 + 0x74) == 6) {
    FUN_004da464(*(undefined8 *)(unaff_x19 + 0x68));
    func_0x004f2024();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004f1f58();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(unaff_x19 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 004f0978; end: 004f097b;  */

void FUN_004f0978(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x004f1e90();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004f1fc0();
  }
  func_0x004f2004();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      FUN_004f1b4c();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      func_0x004f0b50();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  if (*(ulong *)(unaff_x20 + 0x40) != 0) {
    unaff_x21[8] = *(ulong *)(unaff_x20 + 0x40);
  }
  if (*(ulong *)(unaff_x20 + 0x48) != 0) {
    unaff_x21[9] = *(ulong *)(unaff_x20 + 0x48);
  }
  if (*(ulong *)(unaff_x20 + 0x50) != 0) {
    unaff_x21[10] = *(ulong *)(unaff_x20 + 0x50);
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xb) = 1;
  }
  func_0x004f1f24();
  iVar1 = *(int *)(unaff_x20 + 0x70);
  if (iVar1 == 0) goto LAB_004f0ab8;
  iVar2 = (int)unaff_x21[0xe];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_004f0348();
    }
    *(int *)(unaff_x21 + 0xe) = iVar1;
  }
  if (iVar1 == 8) {
    if (iVar2 == 8) {
      param_1 = (ulong *)unaff_x21[0xc];
      FUN_004e2440();
      goto LAB_004f0ab8;
    }
    param_1 = unaff_x22;
    func_0x004f1be0();
  }
  else {
    if (iVar1 != 3) goto LAB_004f0ab8;
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[0xc];
      FUN_004e14b4();
      goto LAB_004f0ab8;
    }
    param_1 = unaff_x22;
    FUN_004ebfe8();
  }
  unaff_x21[0xc] = (ulong)param_1;
LAB_004f0ab8:
  iVar1 = *(int *)(unaff_x20 + 0x74);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x74);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x004f03c8();
      }
      *(int *)((long)unaff_x21 + 0x74) = iVar1;
    }
    if (iVar1 == 7) {
      unaff_x21[0xd] = *(ulong *)(unaff_x20 + 0x68);
    }
    else if (iVar1 == 6) {
      if (iVar2 == 6) {
        param_1 = (ulong *)unaff_x21[0xd];
        FUN_004db854();
      }
      else {
        func_0x004f1c18();
        unaff_x21[0xd] = (ulong)unaff_x22;
        param_1 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1ee8();
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



/* Entry: 004f097c; end: 004f0bd3;  */

void FUN_004f097c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x004f1e90();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004f1fc0();
  }
  func_0x004f2004();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = (ulong *)unaff_x21[6];
    if (param_1 == (ulong *)0x0) {
      param_1 = unaff_x22;
      FUN_004f1b4c();
      unaff_x21[6] = (ulong)param_1;
    }
    else {
      func_0x004f0b50();
    }
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  if (*(ulong *)(unaff_x20 + 0x40) != 0) {
    unaff_x21[8] = *(ulong *)(unaff_x20 + 0x40);
  }
  if (*(ulong *)(unaff_x20 + 0x48) != 0) {
    unaff_x21[9] = *(ulong *)(unaff_x20 + 0x48);
  }
  if (*(ulong *)(unaff_x20 + 0x50) != 0) {
    unaff_x21[10] = *(ulong *)(unaff_x20 + 0x50);
  }
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xb) = 1;
  }
  func_0x004f1f24();
  iVar1 = *(int *)(unaff_x20 + 0x70);
  if (iVar1 == 0) goto LAB_004f0ab8;
  iVar2 = (int)unaff_x21[0xe];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      FUN_004f0348();
    }
    *(int *)(unaff_x21 + 0xe) = iVar1;
  }
  if (iVar1 == 8) {
    if (iVar2 == 8) {
      param_1 = (ulong *)unaff_x21[0xc];
      FUN_004e2440();
      goto LAB_004f0ab8;
    }
    param_1 = unaff_x22;
    func_0x004f1be0();
  }
  else {
    if (iVar1 != 3) goto LAB_004f0ab8;
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[0xc];
      FUN_004e14b4();
      goto LAB_004f0ab8;
    }
    param_1 = unaff_x22;
    FUN_004ebfe8();
  }
  unaff_x21[0xc] = (ulong)param_1;
LAB_004f0ab8:
  iVar1 = *(int *)(unaff_x20 + 0x74);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x74);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x004f03c8();
      }
      *(int *)((long)unaff_x21 + 0x74) = iVar1;
    }
    if (iVar1 == 7) {
      unaff_x21[0xd] = *(ulong *)(unaff_x20 + 0x68);
    }
    else if (iVar1 == 6) {
      if (iVar2 == 6) {
        param_1 = (ulong *)unaff_x21[0xd];
        FUN_004db854();
      }
      else {
        func_0x004f1c18();
        unaff_x21[0xd] = (ulong)unaff_x22;
        param_1 = unaff_x22;
      }
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1ee8();
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



/* Entry: 004f0bd4; end: 004f0c07;  */

void FUN_004f0bd4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x004f1fd8();
  FUN_004f05c0();
  puVar3 = unaff_x20;
  func_0x004f1e90();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004f1fc0();
  }
  func_0x004f2004();
  if ((unaff_x20[2] & 1) != 0) {
    puVar3 = (ulong *)unaff_x21[6];
    if (puVar3 == (ulong *)0x0) {
      puVar3 = unaff_x22;
      FUN_004f1b4c();
      unaff_x21[6] = (ulong)puVar3;
    }
    else {
      func_0x004f0b50();
    }
  }
  if (unaff_x20[7] != 0) {
    unaff_x21[7] = unaff_x20[7];
  }
  if (unaff_x20[8] != 0) {
    unaff_x21[8] = unaff_x20[8];
  }
  if (unaff_x20[9] != 0) {
    unaff_x21[9] = unaff_x20[9];
  }
  if (unaff_x20[10] != 0) {
    unaff_x21[10] = unaff_x20[10];
  }
  if ((char)unaff_x20[0xb] == '\x01') {
    *(undefined1 *)(unaff_x21 + 0xb) = 1;
  }
  func_0x004f1f24();
  iVar1 = (int)unaff_x20[0xe];
  if (iVar1 == 0) goto LAB_004f0ab8;
  iVar2 = (int)unaff_x21[0xe];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      puVar3 = unaff_x21;
      FUN_004f0348();
    }
    *(int *)(unaff_x21 + 0xe) = iVar1;
  }
  if (iVar1 == 8) {
    if (iVar2 == 8) {
      puVar3 = (ulong *)unaff_x21[0xc];
      FUN_004e2440();
      goto LAB_004f0ab8;
    }
    puVar3 = unaff_x22;
    func_0x004f1be0();
  }
  else {
    if (iVar1 != 3) goto LAB_004f0ab8;
    if (iVar2 == 3) {
      puVar3 = (ulong *)unaff_x21[0xc];
      FUN_004e14b4();
      goto LAB_004f0ab8;
    }
    puVar3 = unaff_x22;
    FUN_004ebfe8();
  }
  unaff_x21[0xc] = (ulong)puVar3;
LAB_004f0ab8:
  iVar1 = *(int *)((long)unaff_x20 + 0x74);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x74);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        puVar3 = unaff_x21;
        func_0x004f03c8();
      }
      *(int *)((long)unaff_x21 + 0x74) = iVar1;
    }
    if (iVar1 == 7) {
      unaff_x21[0xd] = unaff_x20[0xd];
    }
    else if (iVar1 == 6) {
      if (iVar2 == 6) {
        puVar3 = (ulong *)unaff_x21[0xd];
        FUN_004db854();
      }
      else {
        func_0x004f1c18();
        unaff_x21[0xd] = (ulong)unaff_x22;
        puVar3 = unaff_x22;
      }
    }
  }
  if ((unaff_x20[1] & 1) != 0) {
    func_0x004f1ee8();
    if ((*puVar3 & 1) == 0) {
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



/* Entry: 004f0c08; end: 004f0c33;  */

undefined8 FUN_004f0c08(undefined8 param_1)

{
  func_0x004f1f1c();
  FUN_004f0c34(param_1);
  return param_1;
}



/* Entry: 004f0c34; end: 004f0c63;  */

long * FUN_004f0c34(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_004f0ea0();
  }
  __ZdlPv();
  plVar1 = (long *)(param_1 + 0x18);
  if (*plVar1 != 0) {
    FUN_0054cf94(plVar1);
  }
  return plVar1;
}



/* Entry: 004f0c64; end: 004f0c67;  */

undefined8 FUN_004f0c64(undefined8 param_1)

{
  func_0x004f1f1c();
  FUN_004f0c34(param_1);
  return param_1;
}



/* Entry: 004f0c68; end: 004f0c7b;  */

void FUN_004f0c68(void)

{
  FUN_004f0c08();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f0c7c; end: 004f0c87;  */

undefined ** FUN_004f0c7c(void)

{
  return &PTR_DAT_009f5c00;
}



/* Entry: 004f0c88; end: 004f0cbb;  */

void FUN_004f0c88(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
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



/* Entry: 004f0cbc; end: 004f0d93;  */

segment_command *
FUN_004f0cbc(segment_command *param_1,long param_2,ulong param_3,segment_command *param_4)

{
  uint uVar1;
  qword qVar2;
  segment_command *psVar3;
  long lVar4;
  undefined4 uVar5;
  long extraout_x8;
  segment_command *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x004f1e58();
  qVar2 = param_1->vmsize;
  while ((int)qVar2 != 0) {
    func_0x004f1e3c();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    func_0x004f1ec8();
    func_0x004f2048();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    param_1 = (segment_command *)((long)&MACH_HEADER.magic + 2);
    func_0x004f1ef8();
    param_4 = param_1;
  }
  psVar3 = param_1;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x004f1ddc();
    psVar3 = (segment_command *)&MACH_HEADER.flags;
    func_0x00487cbc(0x18,param_1);
    func_0x004f1e30();
    param_4 = psVar3;
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x004f1ddc();
    param_4 = &segment_command_00000020;
    func_0x00487cbc(0x20,psVar3);
    func_0x004f1e30();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1f34();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        uVar5 = unaff_x19->cmd;
        iVar7 = (uVar5 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (segment_command *)(param_4->segname + (long)iVar6 + -8);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (segment_command *)(param_4->segname + (long)(int)param_3 + -8);
  }
  return param_4;
}



/* Entry: 004f0d94; end: 004f0e3f;  */

long FUN_004f0d94(void)

{
  long lVar1;
  int iVar2;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x004f203c();
  func_0x004f1e68();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_004dff90();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(byte *)(unaff_x19 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
    FUN_004f0f94();
    func_0x004f1de8();
    unaff_x20 = unaff_x20 + lVar1 + extraout_x8 + 1;
  }
  iVar2 = -9;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x004f1fa8();
    iVar2 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    unaff_x20 = (ulong)((int)LZCOUNT(*(long *)(unaff_x19 + 0x40)) * iVar2 + 0x2c0U >> 6) + unaff_x20
    ;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004f1f58();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 004f0e40; end: 004f0e43;  */

void FUN_004f0e40(ulong *param_1)

{
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004f1e90();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004f1fc0();
  }
  func_0x004f2004();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong **)(unaff_x21 + 0x30);
    if (param_1 == (ulong *)0x0) {
      FUN_004f1c58();
      *(ulong **)(unaff_x21 + 0x30) = unaff_x22;
      param_1 = unaff_x22;
    }
    else {
      FUN_004f0e44();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x21 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    *(long *)(unaff_x21 + 0x40) = *(long *)(unaff_x20 + 0x40);
  }
  func_0x004f1f24();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1ee8();
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



/* Entry: 004f0e44; end: 004f0e9f;  */

void FUN_004f0e44(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004f1fcc();
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
    func_0x00532e08(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1f88();
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



/* Entry: 004f0ea0; end: 004f0ecb;  */

long FUN_004f0ea0(long param_1)

{
  func_0x004f1f1c();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f0ecc; end: 004f0ecf;  */

long FUN_004f0ecc(long param_1)

{
  func_0x004f1f1c();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f0ed0; end: 004f0ee3;  */

void FUN_004f0ed0(void)

{
  FUN_004f0ea0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f0ee4; end: 004f0eef;  */

undefined ** FUN_004f0ee4(void)

{
  return &PTR_DAT_009f5c50;
}



/* Entry: 004f0ef0; end: 004f0f93;  */

long * FUN_004f0ef0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  plVar4 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)plVar4 + 0x17);
  plVar5 = param_3;
  if (lVar2 < 0) {
    lVar2 = plVar4[1];
    if (lVar2 == 0) goto LAB_004f0f5c;
    plVar1 = (long *)*plVar4;
  }
  else {
    plVar1 = plVar4;
    if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_004f0f5c;
  }
  FUN_0054ddb8(plVar1,lVar2,1,"snapchat.messaging.HighlightsSummary.text");
  plVar1 = param_3;
  FUN_00435e9c(param_3,1,plVar4,param_2);
  plVar5 = plVar4;
  param_2 = plVar1;
LAB_004f0f5c:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x004f1f34();
  if ((long)plVar5 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar3 - iVar6);
      if (iVar3 - iVar6 == 0 || iVar3 < iVar6) break;
      func_0x0054f690();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x0054ed58(param_3,lVar2);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 004f0f94; end: 004f0ff7;  */

void FUN_004f0f94(long param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_004f0fcc;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_004f0fcc:
    iVar1 = 0;
    goto LAB_004f0fd0;
  }
  FUN_0048910c();
  iVar1 = (int)uVar2 + 1;
LAB_004f0fd0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004f1f58();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 004f0ff8; end: 004f0ffb;  */

void FUN_004f0ff8(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x004f1fcc();
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
    func_0x00532e08(param_1,uVar1,uVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1f88();
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



/* Entry: 004f0ffc; end: 004f1027;  */

long FUN_004f0ffc(long param_1)

{
  func_0x004f1f1c();
  FUN_004df83c(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f1028; end: 004f102b;  */

long FUN_004f1028(long param_1)

{
  func_0x004f1f1c();
  FUN_004df83c(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f102c; end: 004f103f;  */

void FUN_004f102c(void)

{
  FUN_004f0ffc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f1040; end: 004f104b;  */

undefined ** FUN_004f1040(void)

{
  return &PTR_DAT_009f5c98;
}



/* Entry: 004f104c; end: 004f107f;  */

void FUN_004f104c(long param_1)

{
  ulong *puVar1;
  
  func_0x004dfb64(param_1 + 0x10);
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



/* Entry: 004f1080; end: 004f10f3;  */

long * FUN_004f1080(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004f1e58();
  iVar3 = *(int *)(param_1 + 0x18);
  while (iVar3 != 0) {
    func_0x004f1e3c();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x004f1ec8();
    func_0x004f2048();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1f34();
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



/* Entry: 004f10f4; end: 004f1153;  */

long FUN_004f10f4(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x004f203c();
  func_0x004f1e68();
  for (; unaff_x22 != 0; unaff_x22 = unaff_x22 + -8) {
    lVar1 = *unaff_x21;
    FUN_004df728();
    unaff_x20 = lVar1 + unaff_x20;
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004f1f58();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar1 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x28) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 004f1154; end: 004f123b;  */

void FUN_004f1154(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x004f1fcc();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_004df774();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1f88();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 004f123c; end: 004f126f;  */

long FUN_004f123c(long param_1)

{
  func_0x004f1f1c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x004f118c(param_1);
  }
  return param_1;
}



/* Entry: 004f1270; end: 004f1273;  */

long FUN_004f1270(long param_1)

{
  func_0x004f1f1c();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x004f118c(param_1);
  }
  return param_1;
}



/* Entry: 004f1274; end: 004f1287;  */

void FUN_004f1274(void)

{
  FUN_004f123c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f1288; end: 004f129b;  */

long FUN_004f1288(long param_1)

{
  func_0x004f1f1c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d53c0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f129c; end: 004f13b3;  */

void FUN_004f129c(long param_1)

{
  ulong *puVar1;
  
  func_0x004f118c();
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



/* Entry: 004f13b4; end: 004f13eb;  */

long FUN_004f13b4(long param_1)

{
  long extraout_x8;
  
  func_0x004f1788();
  func_0x004f1de8();
  return param_1 + extraout_x8;
}



/* Entry: 004f13ec; end: 004f15a3;  */

void FUN_004f13ec(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x004f1e90();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004f1fc0();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto LAB_004f14e4;
  iVar2 = *(int *)((long)unaff_x21 + 0x1c);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x004f118c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      func_0x004f1f98();
      FUN_004f15a4();
      goto LAB_004f14e4;
    }
    func_0x004f1d5c();
    param_1 = unaff_x22;
  }
  else if (iVar1 == 2) {
    if (iVar2 == 2) {
      func_0x004f1f98();
      func_0x004f1500();
      goto LAB_004f14e4;
    }
    func_0x004f1cbc();
    param_1 = unaff_x22;
  }
  else {
    if (iVar1 != 1) goto LAB_004f14e4;
    if (iVar2 == 1) {
      func_0x004f1f98();
      FUN_004f097c();
      goto LAB_004f14e4;
    }
    func_0x004d3468();
    param_1 = unaff_x22;
  }
  unaff_x21[2] = (ulong)param_1;
LAB_004f14e4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1ee8();
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



/* Entry: 004f15a4; end: 004f162f;  */

void FUN_004f15a4(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(param_1 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x004d3428();
      *(ulong **)(param_1 + 0x18) = puVar2;
    }
    else {
      FUN_004d9d18();
      puVar2 = puVar3;
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004f1ee8();
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



/* Entry: 004f1630; end: 004f1673;  */

long FUN_004f1630(long param_1)

{
  func_0x004f1f1c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004d53c0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f1674; end: 004f1687;  */

void FUN_004f1674(void)

{
  FUN_004f1630();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f1688; end: 004f1693;  */

undefined ** FUN_004f1688(void)

{
  return &PTR_DAT_009f5d38;
}



/* Entry: 004f1694; end: 004f16e7;  */

void FUN_004f1694(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004f1fe4();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d5460(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x28) = 0;
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



/* Entry: 004f16e8; end: 004f1807;  */

dword * FUN_004f16e8(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004f1e58();
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x004f1ec8();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x14);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x004f1ef8();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    func_0x004f1ddc();
    param_4 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,param_1);
    func_0x004f1f08();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1f34();
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



/* Entry: 004f1808; end: 004f180b;  */

void FUN_004f1808(ulong *param_1)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x004f1e90();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x004f1fc0();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        func_0x004f1f80();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_004df474();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_004d5818();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x28) = 1;
  }
  func_0x004f1f24();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004f1ee8();
  if ((*param_1 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004f180c; end: 004f183f;  */

long FUN_004f180c(long param_1)

{
  func_0x004f1f1c();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 004f1840; end: 004f1853;  */

void FUN_004f1840(void)

{
  FUN_004f180c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f1854; end: 004f185f;  */

undefined ** FUN_004f1854(void)

{
  return &PTR_DAT_009f5d88;
}



/* Entry: 004f1860; end: 004f194b;  */

void FUN_004f1860(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x004f1fe4();
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



/* Entry: 004f194c; end: 004f198f;  */

void FUN_004f194c(long param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = *(ulong **)(param_1 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(param_1 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      func_0x004d3428();
      *(ulong **)(param_1 + 0x18) = puVar2;
    }
    else {
      FUN_004d9d18();
      puVar2 = puVar3;
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x004f1ee8();
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



/* Entry: 004f1990; end: 004f1b4b;  */

void FUN_004f1990(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    func_0x004f1f64();
  }
  else {
    func_0x004f1ed4();
  }
  *puVar1 = &PTR_FUN_009f5900;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_00b69408;
  *(undefined4 *)(puVar1 + 3) = 0;
  return;
}



/* Entry: 004f1b4c; end: 004f1bdf;  */

undefined8 * FUN_004f1b4c(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x004f1fd8();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004f1ff4();
  }
  else {
    param_1 = unaff_x20;
    func_0x004f1ffc();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_009f5a40;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x004f1ebc();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_004eb1e8(param_1 + 3);
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_004f1c58();
  }
  param_1[6] = unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  param_1[8] = *(undefined8 *)(unaff_x19 + 0x40);
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 004f1be0; end: 004f1c57;  */

long FUN_004f1be0(long param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x004f1fd8();
  if (param_1 == 0) {
    func_0x004f1ff4();
  }
  else {
    param_1 = unaff_x20;
    func_0x004f1ffc();
  }
  func_0x004e5060();
  func_0x004e53b0(&PTR_FUN_009f29a8);
  if ((extraout_x8 & 1) != 0) {
    func_0x004e4ff0();
  }
  func_0x004e52e0();
  FUN_004e4380();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x004e5258();
  }
  *(long *)(unaff_x19 + 0x30) = param_1;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    FUN_004de228();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x21;
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  return unaff_x19;
}



/* Entry: 004f1c58; end: 004f1dcf;  */

undefined8 * FUN_004f1c58(undefined8 *param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x004f1fcc();
  if (param_1 == (undefined8 *)0x0) {
    func_0x004f1f64();
  }
  else {
    func_0x004f1ed4();
  }
  param_1[1] = unaff_x19;
  *param_1 = &PTR_FUN_009f5900;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f1ebc();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x00487c6c();
  param_1[2] = lVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 004f1dd0; end: 004f2053;  */

void FUN_004f1dd0(void)

{
  return;
}



/* Entry: 004f2054; end: 004f2163;  */

void FUN_004f2054(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 1:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f3620();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_004f20fc;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_004f2938();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f3620();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_004f20fc;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_004f2bc4();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f3620();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004f20fc;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_004f2e2c();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f3620();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004f20fc;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_004f2fb8();
    }
    break;
  default:
    goto LAB_004f20fc;
  }
  __ZdlPv();
LAB_004f20fc:
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 004f2164; end: 004f222b;  */

undefined8 * FUN_004f2164(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009f5fe8;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x004f34e0();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  uVar2 = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 5) = uVar2;
  if ((uVar1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x004f320c(param_2,*(undefined8 *)(param_3 + 0x18));
    uVar2 = *(undefined4 *)(param_1 + 5);
  }
  param_1[3] = param_2;
  switch(uVar2) {
  case 1:
    func_0x004f3644();
    func_0x004f3244();
    break;
  case 2:
    func_0x004f3644();
    func_0x004f32f4();
    break;
  case 3:
    func_0x004f3644();
    func_0x004f3390();
    break;
  case 4:
    func_0x004f3644();
    func_0x004f33fc();
    break;
  default:
    goto LAB_004f2220;
  }
  param_1[4] = param_2;
LAB_004f2220:
  return param_1;
}



/* Entry: 004f222c; end: 004f2257;  */

undefined8 FUN_004f222c(undefined8 param_1)

{
  func_0x004f3580();
  FUN_004f2258(param_1);
  return param_1;
}



/* Entry: 004f2258; end: 004f2293;  */

void FUN_004f2258(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long unaff_x19;
  
  func_0x004f3638();
  if (param_1 != 0) {
    FUN_004f37ec();
  }
  __ZdlPv();
  if (*(int *)(unaff_x19 + 0x28) == 0) {
    return;
  }
  switch(*(undefined4 *)(unaff_x19 + 0x28)) {
  case 1:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f3620();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto LAB_004f20fc;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_004f2938();
    }
    break;
  case 2:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f3620();
      uVar1 = extraout_x8_02;
    }
    if (uVar1 != 0) goto LAB_004f20fc;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_004f2bc4();
    }
    break;
  case 3:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f3620();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_004f20fc;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_004f2e2c();
    }
    break;
  case 4:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x004f3620();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_004f20fc;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_004f2fb8();
    }
    break;
  default:
    goto LAB_004f20fc;
  }
  __ZdlPv();
LAB_004f20fc:
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 004f2294; end: 004f2297;  */

undefined8 FUN_004f2294(undefined8 param_1)

{
  func_0x004f3580();
  FUN_004f2258(param_1);
  return param_1;
}



/* Entry: 004f2298; end: 004f22ab;  */

void FUN_004f2298(void)

{
  FUN_004f222c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f22ac; end: 004f22c7;  */

undefined8 FUN_004f22ac(undefined8 param_1)

{
  func_0x004f3580();
  FUN_004f2964(param_1);
  return param_1;
}



/* Entry: 004f22c8; end: 004f2447;  */

void FUN_004f22c8(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004f362c();
  if ((extraout_x8 & 1) != 0) {
    FUN_004f3858(*(undefined8 *)(unaff_x19 + 0x18));
  }
  FUN_004f2054();
  puVar1 = (ulong *)(unaff_x19 + 8);
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



/* Entry: 004f2448; end: 004f24d3;  */

long FUN_004f2448(long param_1)

{
  long extraout_x8;
  
  func_0x004f38fc();
  FUN_004f34bc();
  return param_1 + extraout_x8;
}



/* Entry: 004f24d4; end: 004f24d7;  */

void FUN_004f24d4(ulong param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar3;
  
  func_0x004f354c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong *)(unaff_x21 + 0x18);
    if (param_1 == 0) {
      func_0x004f320c();
      *(ulong *)(unaff_x21 + 0x18) = uVar3;
      param_1 = uVar3;
    }
    else {
      FUN_004f39d4();
    }
  }
  func_0x004f3594();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x28);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_004f2054();
      }
      *(int *)(unaff_x21 + 0x28) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        func_0x004f2654();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f3244();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        func_0x004f2718();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f32f4();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        FUN_004f27c4();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f3390();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        FUN_004f2830();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f33fc();
      break;
    default:
      goto LAB_004f2634;
    }
    *(ulong *)(unaff_x21 + 0x20) = param_1;
  }
LAB_004f2634:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f356c();
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



/* Entry: 004f24d8; end: 004f27c3;  */

void FUN_004f24d8(ulong param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar3;
  
  func_0x004f354c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    param_1 = *(ulong *)(unaff_x21 + 0x18);
    if (param_1 == 0) {
      func_0x004f320c();
      *(ulong *)(unaff_x21 + 0x18) = uVar3;
      param_1 = uVar3;
    }
    else {
      FUN_004f39d4();
    }
  }
  func_0x004f3594();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x28);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_004f2054();
      }
      *(int *)(unaff_x21 + 0x28) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        func_0x004f2654();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f3244();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        func_0x004f2718();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f32f4();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        FUN_004f27c4();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f3390();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        FUN_004f2830();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f33fc();
      break;
    default:
      goto LAB_004f2634;
    }
    *(ulong *)(unaff_x21 + 0x20) = param_1;
  }
LAB_004f2634:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f356c();
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



/* Entry: 004f27c4; end: 004f282f;  */

void FUN_004f27c4(long param_1,long param_2)

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



/* Entry: 004f2830; end: 004f28c3;  */

void FUN_004f2830(void)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004f354c();
  uVar2 = *(ulong *)(unaff_x19 + 8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x21 + 0x18) == 0) {
      func_0x004d3428();
      *(ulong *)(unaff_x21 + 0x18) = uVar2;
    }
    else {
      FUN_004d9d18(*(long *)(unaff_x21 + 0x18));
    }
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 0x20) = *(int *)(unaff_x20 + 0x20);
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f356c();
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



/* Entry: 004f28c4; end: 004f28f7;  */

void FUN_004f28c4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x004f3588();
  FUN_004f22c8();
  uVar3 = unaff_x20;
  func_0x004f354c();
  uVar4 = *(ulong *)(unaff_x19 + 8);
  if ((uVar4 & 1) != 0) {
    uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    uVar3 = *(ulong *)(unaff_x21 + 0x18);
    if (uVar3 == 0) {
      func_0x004f320c();
      *(ulong *)(unaff_x21 + 0x18) = uVar4;
      uVar3 = uVar4;
    }
    else {
      FUN_004f39d4();
    }
  }
  func_0x004f3594();
  iVar1 = *(int *)(unaff_x20 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(unaff_x21 + 0x28);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        uVar3 = unaff_x21;
        FUN_004f2054();
      }
      *(int *)(unaff_x21 + 0x28) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        func_0x004f2654();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f3244();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        func_0x004f2718();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f32f4();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        FUN_004f27c4();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f3390();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x004f353c();
        FUN_004f2830();
        goto LAB_004f2634;
      }
      func_0x004f3614();
      func_0x004f33fc();
      break;
    default:
      goto LAB_004f2634;
    }
    *(ulong *)(unaff_x21 + 0x20) = uVar3;
  }
LAB_004f2634:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f356c();
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



/* Entry: 004f28f8; end: 004f2937;  */

void FUN_004f28f8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  func_0x004f3650();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x28) = uVar1;
  return;
}



/* Entry: 004f2938; end: 004f2963;  */

undefined8 FUN_004f2938(undefined8 param_1)

{
  func_0x004f3580();
  FUN_004f2964(param_1);
  return param_1;
}



/* Entry: 004f2964; end: 004f2997;  */

void FUN_004f2964(long param_1)

{
  long unaff_x19;
  
  func_0x004f3638();
  if (param_1 != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_004d9ba0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f2998; end: 004f29ab;  */

void FUN_004f2998(void)

{
  FUN_004f2938();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f29ac; end: 004f29b7;  */

undefined ** FUN_004f29ac(void)

{
  return &PTR_DAT_009f6070;
}



/* Entry: 004f29b8; end: 004f2a0f;  */

void FUN_004f29b8(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004f35f8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_004d9bf4(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
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



/* Entry: 004f2a10; end: 004f2bbf;  */

dword * FUN_004f2a10(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  dword *pdVar2;
  dword *pdVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x004f355c();
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    func_0x004f3608();
    param_1 = (dword *)((long)&MACH_HEADER.magic + 1);
    func_0x004f3534();
    param_4 = param_1;
  }
  pdVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x004f34ec();
    pdVar2 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,param_1);
    func_0x004f35dc();
    param_4 = pdVar2;
  }
  pdVar3 = pdVar2;
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x004f34ec();
    pdVar3 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,pdVar2);
    func_0x004f35dc();
    param_4 = pdVar3;
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    func_0x004f34ec();
    param_4 = (dword *)(ulong)*(byte *)(unaff_x20 + 0x38);
    uVar4 = 0x20;
    func_0x00487cbc(0x20,pdVar3);
    func_0x00487cbc(param_4,uVar4);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x18);
    param_4 = (dword *)((long)&MACH_HEADER.cputype + 1);
    func_0x004f3534();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f35a4();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*(long *)unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*(undefined8 *)unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 004f2bc0; end: 004f2bc3;  */

void FUN_004f2bc0(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x004f354c();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
        func_0x004f35c8();
        *(long *)(unaff_x21 + 0x18) = lVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if (lVar2 == 0) {
        func_0x004f35c8();
        *(long *)(unaff_x21 + 0x20) = lVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    *(long *)(unaff_x21 + 0x28) = *(long *)(unaff_x20 + 0x28);
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x21 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x38) = 1;
  }
  func_0x004f3594();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004f356c();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004f2bc4; end: 004f2bef;  */

undefined8 FUN_004f2bc4(undefined8 param_1)

{
  func_0x004f3580();
  FUN_004f2bf0(param_1);
  return param_1;
}



/* Entry: 004f2bf0; end: 004f2c23;  */

void FUN_004f2bf0(long param_1)

{
  long unaff_x19;
  
  func_0x004f3638();
  if (param_1 != 0) {
    FUN_004d9ba0();
  }
  __ZdlPv();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_0051f6a4();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f2c24; end: 004f2c37;  */

void FUN_004f2c24(void)

{
  FUN_004f2bc4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f2c38; end: 004f2c43;  */

undefined ** FUN_004f2c38(void)

{
  return &PTR_DAT_009f60c0;
}



/* Entry: 004f2c44; end: 004f2c97;  */

void FUN_004f2c44(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x004f35f8();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_0051f744(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 004f2c98; end: 004f2ddb;  */

dword * FUN_004f2c98(dword *param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004f355c();
  uVar1 = param_1[4];
  if ((uVar1 & 1) != 0) {
    func_0x004f3608();
    param_1 = (dword *)((long)&MACH_HEADER.magic + 1);
    func_0x004f3534();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x30);
    param_1 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x004f3534();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x004f34ec();
    param_4 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,param_1);
    func_0x004f35d0();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f35a4();
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



/* Entry: 004f2ddc; end: 004f2ddf;  */

void FUN_004f2ddc(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  func_0x004f354c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
        func_0x004f35c8();
        *(long *)(unaff_x21 + 0x18) = lVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        FUN_004f347c();
        *(ulong *)(unaff_x21 + 0x20) = uVar3;
      }
      else {
        FUN_0051f9b0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x004f3594();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004f356c();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004f2de0; end: 004f2e13;  */

void FUN_004f2de0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x004f3588();
  FUN_004f2c44();
  func_0x004f354c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x21 + 0x18);
      if (lVar2 == 0) {
        func_0x004f35c8();
        *(long *)(unaff_x21 + 0x18) = lVar2;
      }
      else {
        FUN_004d9d18();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x21 + 0x20) == 0) {
        FUN_004f347c();
        *(ulong *)(unaff_x21 + 0x20) = uVar3;
      }
      else {
        FUN_0051f9b0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  func_0x004f3594();
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return;
  }
  func_0x004f356c();
  if ((*(ulong *)(unaff_x19 + 8) & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 004f2e14; end: 004f2e2b;  */

undefined1  [16] FUN_004f2e14(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  func_0x004f3650();
  puVar3 = (undefined1 *)(param_2 + 0x18);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x18); puVar2 != (undefined1 *)(param_1 + 0x2c);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = (undefined1 *)(param_1 + 0x2c);
  return auVar5;
}



/* Entry: 004f2e2c; end: 004f2e57;  */

long FUN_004f2e2c(long param_1)

{
  func_0x004f3580();
  func_0x00532f74(param_1 + 0x10);
  return param_1;
}



/* Entry: 004f2e58; end: 004f2e6b;  */

void FUN_004f2e58(void)

{
  FUN_004f2e2c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f2e6c; end: 004f2e77;  */

undefined ** FUN_004f2e6c(void)

{
  return &PTR_DAT_009f6108;
}



/* Entry: 004f2e78; end: 004f2eab;  */

void FUN_004f2e78(long param_1)

{
  ulong *puVar1;
  
  FUN_00532fa8(param_1 + 0x10);
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



/* Entry: 004f2eac; end: 004f2f4f;  */

long * FUN_004f2eac(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  
  plVar4 = (long *)(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc);
  lVar2 = (long)*(char *)((long)plVar4 + 0x17);
  plVar5 = param_3;
  if (lVar2 < 0) {
    lVar2 = plVar4[1];
    if (lVar2 == 0) goto LAB_004f2f18;
    plVar1 = (long *)*plVar4;
  }
  else {
    plVar1 = plVar4;
    if (*(char *)((long)plVar4 + 0x17) == '\0') goto LAB_004f2f18;
  }
  FUN_0054ddb8(plVar1,lVar2,1,"snapchat.messaging.PhoneNumberDestination.phone_number");
  plVar1 = param_3;
  FUN_00435e9c(param_3,1,plVar4,param_2);
  plVar5 = plVar4;
  param_2 = plVar1;
LAB_004f2f18:
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x004f35a4();
  if ((long)plVar5 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar5 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar5) {
    while( true ) {
      iVar6 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar5;
      plVar5 = (long *)(ulong)(uint)(iVar3 - iVar6);
      if (iVar3 - iVar6 == 0 || iVar3 < iVar6) break;
      func_0x0054f690();
      lVar2 = (long)param_2 + (long)iVar6;
      param_2 = param_3;
      func_0x0054ed58(param_3,lVar2);
    }
    func_0x0054f690();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar5 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar5);
}



/* Entry: 004f2f50; end: 004f2fb3;  */

void FUN_004f2f50(long param_1)

{
  int iVar1;
  ulong uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x9;
  
  uVar2 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffc;
  if (*(char *)(uVar2 + 0x17) < '\0') {
    if (*(long *)(uVar2 + 8) == 0) goto LAB_004f2f88;
  }
  else if (*(char *)(uVar2 + 0x17) == '\0') {
LAB_004f2f88:
    iVar1 = 0;
    goto LAB_004f2f8c;
  }
  FUN_0048910c();
  iVar1 = (int)uVar2 + 1;
LAB_004f2f8c:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x004f35b0();
    lVar3 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* Entry: 004f2fb4; end: 004f2fb7;  */

void FUN_004f2fb4(long param_1,long param_2)

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



/* Entry: 004f2fb8; end: 004f2fe3;  */

undefined8 FUN_004f2fb8(undefined8 param_1)

{
  func_0x004f3580();
  FUN_004f2fe4(param_1);
  return param_1;
}



/* Entry: 004f2fe4; end: 004f3013;  */

void FUN_004f2fe4(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004d9ba0();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004f3014; end: 004f301f;  */

undefined ** FUN_004f3014(void)

{
  return &PTR_DAT_009f6158;
}



/* Entry: 004f3020; end: 004f305b;  */

void FUN_004f3020(void)

{
  ulong extraout_x8;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x004f362c();
  if ((extraout_x8 & 1) != 0) {
    func_0x004f35f8();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
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



/* Entry: 004f305c; end: 004f30df;  */

dword * FUN_004f305c(long param_1,undefined8 param_2,ulong param_3,dword *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  dword *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x004f355c();
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x004f34ec();
    param_4 = &MACH_HEADER.cpusubtype;
    func_0x00487cbc(8,param_1);
    func_0x004f35d0();
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x004f3608();
    param_4 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x004f3534();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x004f35a4();
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


