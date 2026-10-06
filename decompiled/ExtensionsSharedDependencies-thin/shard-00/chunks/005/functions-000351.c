/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006f916c; end: 006f9197;  */

void FUN_006f916c(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x006fd9dc();
  *(undefined8 *)(CONCAT44(uVar2,iVar1) + 0x238) = 0;
  func_0x006fde58();
  if (iVar1 != 0) {
    func_0x006fe470();
  }
  return;
}



/* Entry: 006f9198; end: 006f9213;  */

undefined8 *
FUN_006f9198(long param_1,dword *param_2,dword *param_3,dword *param_4,dword *param_5,long param_6,
            long param_7,char *param_8)

{
  char *pcVar1;
  dword *pdVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  dword *pdVar9;
  dword *pdVar10;
  char *pcVar11;
  ulong uVar12;
  dword *unaff_x20;
  char *pcVar13;
  undefined8 unaff_x30;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  dword *in_stack_00000060;
  char *in_stack_00000068;
  dword *in_stack_00000070;
  undefined8 in_stack_00000078;
  char *in_stack_00000080;
  undefined8 auStack_360 [10];
  undefined1 auStack_310 [320];
  undefined1 auStack_1d0 [40];
  dword *pdStack_1a8;
  undefined8 auStack_1a0 [8];
  undefined8 *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  
  if (param_7 != 0xc) {
    func_0x006fd918();
LAB_006f91d8:
    func_0x006fd5dc();
    return (undefined8 *)0x0;
  }
  uVar12 = *(ulong *)(param_6 + 4);
  if ((uVar12 == 0xffffffffffffffff) ||
     (uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8,
     uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10,
     uVar12 = uVar12 >> 0x20 | uVar12 << 0x20, uVar12 < *(ulong *)(param_1 + 0x238))) {
    func_0x006fd918();
    goto LAB_006f91d8;
  }
  *(ulong *)(param_1 + 0x238) = uVar12 + 1;
  pdVar9 = &MACH_HEADER.filetype;
  func_0x006fdcd0(unaff_x30);
  pdVar2 = in_stack_00000070;
  func_0x006fd588();
  pcVar7 = in_stack_00000080;
  pcVar13 = (char *)(ulong)*(byte *)(param_1 + 0x250);
  pcVar1 = (char *)((long)pdVar2 + (long)pcVar13);
  uVar3 = pcVar1 == (char *)0x0;
  pdVar10 = pdVar9;
  if (CARRY8((ulong)pdVar2,(ulong)pcVar13)) {
    func_0x006fd918();
    pcVar7 = section_00000068.sectname + 0xd;
    pdVar9 = param_4;
    pcVar11 = param_8;
LAB_006f8f34:
    func_0x006fd5dc();
    puVar5 = (undefined8 *)0x0;
    param_3 = unaff_x20;
  }
  else {
    uVar3 = param_5 == (dword *)pcVar1;
    if (param_5 < pcVar1) {
      func_0x006fd918();
      pcVar7 = (char *)((long)&segment_command_00000020.flags + 3);
      pdVar9 = param_4;
      pcVar11 = param_8;
      goto LAB_006f8f34;
    }
    if (pdVar9 == (dword *)0x0) {
      func_0x006fd918();
      pcVar7 = section_00000068.sectname + 7;
      pdVar9 = param_4;
      pcVar11 = param_8;
      goto LAB_006f8f34;
    }
    pcVar11 = param_8;
    pdStack_1a8 = param_4;
    func_0x006fe314(auStack_1a0);
    puVar5 = &uStack_150;
    _memcpy(puVar5,param_1 + 0x100,0x130);
    func_0x006fe4fc();
    FUN_006f0ce0();
    if (pcVar7 == (char *)0x0) {
LAB_006f8f08:
      param_5 = in_stack_00000060;
      if (*(long *)(param_1 + 0x230) == 0) {
        func_0x006fe4fc();
        func_0x006f0ed8();
        iVar4 = (int)puVar5;
        pdVar9 = param_2;
        pcVar8 = in_stack_00000068;
      }
      else {
        func_0x006fe4fc();
        func_0x006f11f8();
        iVar4 = (int)puVar5;
        pdVar9 = param_2;
        pcVar8 = in_stack_00000068;
      }
      pcVar7 = param_8;
      in_stack_00000068 = pcVar8;
      if (iVar4 != 0) {
        if (pdVar2 != (dword *)0x0) {
          pdVar9 = param_3;
          param_5 = pdVar2;
          if (*(long *)(param_1 + 0x230) == 0) {
            func_0x006fe4fc();
            func_0x006f0ed8();
            iVar4 = (int)puVar5;
          }
          else {
            func_0x006fe4fc();
            func_0x006f11f8();
            iVar4 = (int)puVar5;
          }
          pcVar7 = pcVar8;
          if (iVar4 == 0) goto LAB_006f8f3c;
        }
        func_0x006f1500(auStack_1a0,(long)param_3 + (long)pdVar2,pcVar13);
        *(char **)pdStack_1a8 = pcVar1;
        puVar5 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        pcVar7 = pcVar13;
      }
    }
    else {
      puVar5 = auStack_1a0;
      FUN_006f0de0(puVar5,in_stack_00000078,pcVar7);
      if ((int)puVar5 != 0) goto LAB_006f8f08;
    }
  }
LAB_006f8f3c:
  func_0x006fd508();
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x006fdcd0(0x6f8fc4);
  puVar6 = auStack_360;
  puStack_160 = &stack0x00000050;
  func_0x006fd588();
  if (pdVar9 == (dword *)0x0) {
    func_0x006fd918();
    pcVar11 = pcVar1;
    pdVar10 = param_3;
  }
  else {
    uVar3 = (ulong *)pcVar11 == (ulong *)(ulong)*(byte *)(puVar5 + 0x4a);
    if ((bool)uVar3) {
      func_0x006fe314(auStack_360);
      _memcpy(auStack_310,puVar5 + 0x20,0x130);
      FUN_006f0ce0(auStack_360,puVar5 + 1,pcVar7);
      FUN_006f0de0(auStack_360,uStack_150,uStack_148);
      if ((int)puVar6 == 0) goto LAB_006f90c0;
      if (puVar5[0x46] == 0) {
        func_0x006fe604();
        func_0x006f106c();
        iVar4 = (int)puVar6;
      }
      else {
        func_0x006fe604();
        func_0x006f1334();
        iVar4 = (int)puVar6;
      }
      if (iVar4 == 0) goto LAB_006f90c0;
      func_0x006f1500(auStack_360,auStack_1d0,pcVar11);
      iVar4 = (int)auStack_1d0;
      func_0x006fdbc4();
      FUN_00701f80();
      param_3 = pdVar10;
      if (iVar4 == 0) {
        puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        goto LAB_006f90c0;
      }
    }
    func_0x006fd918();
    pdVar9 = (dword *)0x0;
    pdVar10 = param_3;
  }
  param_5 = (dword *)0x0;
  FUN_006de8e4();
  puVar6 = (undefined8 *)0x0;
LAB_006f90c0:
  func_0x006fd508();
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x006fd8fc();
  if ((((ulong)pdVar9 & 0x1ffffffffffffff7) == 0x10) ||
     (((ulong)pdVar9 & 0x1fffffffffffffff) == 0x20)) {
    pdVar9 = &MACH_HEADER.ncmds;
    if (param_5 != (dword *)0x0) {
      pdVar9 = param_5;
    }
    if (pdVar9 < (dword *)0x11) {
      func_0x006ea37c(pdVar10,pdVar10 + 0x3e);
      *(code **)(pdVar10 + 0x8a) = FUN_006e3180;
      *(dword **)pcVar11 = pdVar9;
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    func_0x006fd918();
  }
  else {
    func_0x006fd918();
  }
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006f9214; end: 006f9247;  */

void FUN_006f9214(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x006fd9dc();
  *(undefined8 *)(CONCAT44(uVar2,iVar1) + 0x238) = 0;
  *(undefined1 *)(CONCAT44(uVar2,iVar1) + 0x248) = 1;
  func_0x006fde58();
  if (iVar1 != 0) {
    func_0x006fe470();
  }
  return;
}



/* Entry: 006f9248; end: 006f92e3;  */

undefined8 *
FUN_006f9248(long param_1,dword *param_2,dword *param_3,dword *param_4,dword *param_5,long param_6,
            long param_7,char *param_8)

{
  char *pcVar1;
  dword *pdVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  dword *pdVar9;
  dword *pdVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  dword *unaff_x20;
  char *pcVar14;
  undefined8 unaff_x30;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  dword *in_stack_00000060;
  char *in_stack_00000068;
  dword *in_stack_00000070;
  undefined8 in_stack_00000078;
  char *in_stack_00000080;
  undefined8 auStack_360 [10];
  undefined1 auStack_310 [320];
  undefined1 auStack_1d0 [40];
  dword *pdStack_1a8;
  undefined8 auStack_1a0 [8];
  undefined8 *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  
  if (param_7 != 0xc) {
    func_0x006fd918();
LAB_006f92b4:
    func_0x006fd5dc();
    return (undefined8 *)0x0;
  }
  uVar12 = (*(ulong *)(param_6 + 4) & 0xff00ff00ff00ff00) >> 8 |
           (*(ulong *)(param_6 + 4) & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
  if (*(char *)(param_1 + 0x248) == '\0') {
    uVar13 = *(ulong *)(param_1 + 0x240);
  }
  else {
    *(ulong *)(param_1 + 0x240) = uVar12;
    *(undefined1 *)(param_1 + 0x248) = 0;
    uVar13 = uVar12;
  }
  uVar13 = uVar13 ^ uVar12;
  if ((uVar13 == 0xffffffffffffffff) || (uVar13 < *(ulong *)(param_1 + 0x238))) {
    func_0x006fd918();
    goto LAB_006f92b4;
  }
  *(ulong *)(param_1 + 0x238) = uVar13 + 1;
  pdVar9 = &MACH_HEADER.filetype;
  func_0x006fdcd0(unaff_x30);
  pdVar2 = in_stack_00000070;
  func_0x006fd588();
  pcVar7 = in_stack_00000080;
  pcVar14 = (char *)(ulong)*(byte *)(param_1 + 0x250);
  pcVar1 = (char *)((long)pdVar2 + (long)pcVar14);
  uVar3 = pcVar1 == (char *)0x0;
  pdVar10 = pdVar9;
  if (CARRY8((ulong)pdVar2,(ulong)pcVar14)) {
    func_0x006fd918();
    pcVar7 = section_00000068.sectname + 0xd;
    pdVar9 = param_4;
    pcVar11 = param_8;
LAB_006f8f34:
    func_0x006fd5dc();
    puVar5 = (undefined8 *)0x0;
    param_3 = unaff_x20;
  }
  else {
    uVar3 = param_5 == (dword *)pcVar1;
    if (param_5 < pcVar1) {
      func_0x006fd918();
      pcVar7 = (char *)((long)&segment_command_00000020.flags + 3);
      pdVar9 = param_4;
      pcVar11 = param_8;
      goto LAB_006f8f34;
    }
    if (pdVar9 == (dword *)0x0) {
      func_0x006fd918();
      pcVar7 = section_00000068.sectname + 7;
      pdVar9 = param_4;
      pcVar11 = param_8;
      goto LAB_006f8f34;
    }
    pcVar11 = param_8;
    pdStack_1a8 = param_4;
    func_0x006fe314(auStack_1a0);
    puVar5 = &uStack_150;
    _memcpy(puVar5,param_1 + 0x100,0x130);
    func_0x006fe4fc();
    FUN_006f0ce0();
    if (pcVar7 == (char *)0x0) {
LAB_006f8f08:
      param_5 = in_stack_00000060;
      if (*(long *)(param_1 + 0x230) == 0) {
        func_0x006fe4fc();
        func_0x006f0ed8();
        iVar4 = (int)puVar5;
        pdVar9 = param_2;
        pcVar8 = in_stack_00000068;
      }
      else {
        func_0x006fe4fc();
        func_0x006f11f8();
        iVar4 = (int)puVar5;
        pdVar9 = param_2;
        pcVar8 = in_stack_00000068;
      }
      pcVar7 = param_8;
      in_stack_00000068 = pcVar8;
      if (iVar4 != 0) {
        if (pdVar2 != (dword *)0x0) {
          pdVar9 = param_3;
          param_5 = pdVar2;
          if (*(long *)(param_1 + 0x230) == 0) {
            func_0x006fe4fc();
            func_0x006f0ed8();
            iVar4 = (int)puVar5;
          }
          else {
            func_0x006fe4fc();
            func_0x006f11f8();
            iVar4 = (int)puVar5;
          }
          pcVar7 = pcVar8;
          if (iVar4 == 0) goto LAB_006f8f3c;
        }
        func_0x006f1500(auStack_1a0,(long)param_3 + (long)pdVar2,pcVar14);
        *(char **)pdStack_1a8 = pcVar1;
        puVar5 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        pcVar7 = pcVar14;
      }
    }
    else {
      puVar5 = auStack_1a0;
      FUN_006f0de0(puVar5,in_stack_00000078,pcVar7);
      if ((int)puVar5 != 0) goto LAB_006f8f08;
    }
  }
LAB_006f8f3c:
  func_0x006fd508();
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x006fdcd0(0x6f8fc4);
  puVar6 = auStack_360;
  puStack_160 = &stack0x00000050;
  func_0x006fd588();
  if (pdVar9 == (dword *)0x0) {
    func_0x006fd918();
    pcVar11 = pcVar1;
    pdVar10 = param_3;
  }
  else {
    uVar3 = (ulong *)pcVar11 == (ulong *)(ulong)*(byte *)(puVar5 + 0x4a);
    if ((bool)uVar3) {
      func_0x006fe314(auStack_360);
      _memcpy(auStack_310,puVar5 + 0x20,0x130);
      FUN_006f0ce0(auStack_360,puVar5 + 1,pcVar7);
      FUN_006f0de0(auStack_360,uStack_150,uStack_148);
      if ((int)puVar6 == 0) goto LAB_006f90c0;
      if (puVar5[0x46] == 0) {
        func_0x006fe604();
        func_0x006f106c();
        iVar4 = (int)puVar6;
      }
      else {
        func_0x006fe604();
        func_0x006f1334();
        iVar4 = (int)puVar6;
      }
      if (iVar4 == 0) goto LAB_006f90c0;
      func_0x006f1500(auStack_360,auStack_1d0,pcVar11);
      iVar4 = (int)auStack_1d0;
      func_0x006fdbc4();
      FUN_00701f80();
      param_3 = pdVar10;
      if (iVar4 == 0) {
        puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        goto LAB_006f90c0;
      }
    }
    func_0x006fd918();
    pdVar9 = (dword *)0x0;
    pdVar10 = param_3;
  }
  param_5 = (dword *)0x0;
  FUN_006de8e4();
  puVar6 = (undefined8 *)0x0;
LAB_006f90c0:
  func_0x006fd508();
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x006fd8fc();
  if ((((ulong)pdVar9 & 0x1ffffffffffffff7) == 0x10) ||
     (((ulong)pdVar9 & 0x1fffffffffffffff) == 0x20)) {
    pdVar9 = &MACH_HEADER.ncmds;
    if (param_5 != (dword *)0x0) {
      pdVar9 = param_5;
    }
    if (pdVar9 < (dword *)0x11) {
      func_0x006ea37c(pdVar10,pdVar10 + 0x3e);
      *(code **)(pdVar10 + 0x8a) = FUN_006e3180;
      *(dword **)pcVar11 = pdVar9;
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    func_0x006fd918();
  }
  else {
    func_0x006fd918();
  }
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006f92e4; end: 006f932f;  */

void FUN_006f92e4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0x1032547698badcfe;
  *puVar1 = 0xefcdab8967452301;
  return;
}



/* Entry: 006f9330; end: 006f9387;  */

void FUN_006f9330(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  func_0x006f0108(FUN_006efa64,puVar1,puVar1 + 6,puVar1 + 0x16,puVar1[5],puVar1[4],0);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  func_0x006feac0();
  param_2[3] = puVar1[3];
  return;
}



/* Entry: 006f9388; end: 006f9543;  */

void FUN_006f9388(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0x1032547698badcfe;
  *puVar1 = 0xefcdab8967452301;
  return;
}



/* Entry: 006f9544; end: 006f957f;  */

undefined8 FUN_006f9544(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_006f01a8(lVar1);
  func_0x006fdbc4(lVar1 + 0x5c);
  func_0x006fe460();
  func_0x006febf8();
  FUN_006efff4();
  return 1;
}



/* Entry: 006f9580; end: 006f95b3;  */

undefined8 FUN_006f9580(long param_1,long param_2)

{
  uint uVar1;
  uint *unaff_x19;
  uint *unaff_x20;
  
  FUN_006f01d0(param_2,*(undefined8 *)(param_1 + 8));
  func_0x006fd8fc(param_2 + 0x10);
  func_0x006febf8();
  func_0x006f0108();
  uVar1 = (*unaff_x19 & 0xff00ff00) >> 8 | (*unaff_x19 & 0xff00ff) << 8;
  *unaff_x20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (unaff_x19[1] & 0xff00ff00) >> 8 | (unaff_x19[1] & 0xff00ff) << 8;
  unaff_x20[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (unaff_x19[2] & 0xff00ff00) >> 8 | (unaff_x19[2] & 0xff00ff) << 8;
  unaff_x20[2] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (unaff_x19[3] & 0xff00ff00) >> 8 | (unaff_x19[3] & 0xff00ff) << 8;
  unaff_x20[3] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (unaff_x19[4] & 0xff00ff00) >> 8 | (unaff_x19[4] & 0xff00ff) << 8;
  unaff_x20[4] = uVar1 >> 0x10 | uVar1 << 0x10;
  return 1;
}



/* Entry: 006f95b4; end: 006f964f;  */

undefined8 FUN_006f95b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined1 auStack_c0 [144];
  
  func_0x006fe480();
  lVar1 = param_1;
  FUN_006ec074();
  if ((int)lVar1 == 0) {
    FUN_006f9938(*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x138),auStack_c0,
                 unaff_x21 + 0x90);
    func_0x006fdf98();
    func_0x006ed0a8();
    if (unaff_x22 != 0) {
      func_0x006fdbf0();
      func_0x006ed098();
    }
    if (unaff_x19 != 0) {
      func_0x006febb8();
      func_0x006fe3f0();
      func_0x006fdcc4();
      func_0x006ed098();
    }
    uVar2 = 1;
  }
  else {
    func_0x006fd880();
    func_0x006fd5dc();
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 006f9650; end: 006f97d3;  */

undefined8 FUN_006f9650(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong unaff_x19;
  long unaff_x21;
  long lVar2;
  long unaff_x22;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  if (param_4 == 0) {
    return 1;
  }
  func_0x006fe480();
  func_0x006fd840();
  uVar4 = unaff_x19 - 1;
  lVar2 = unaff_x21;
  for (uVar5 = uVar4; uVar5 != 0; uVar5 = uVar5 - 1) {
    lVar2 = lVar2 + 0x90;
    FUN_006ed098(param_1,lVar2);
  }
  lVar3 = unaff_x21 + uVar4 * 0x90;
  lVar2 = param_1;
  FUN_006ed7cc(param_1,lVar3);
  if (lVar2 == 0) {
    func_0x006fd880();
    func_0x006fd5dc();
    uVar1 = 0;
  }
  else {
    FUN_006f9938(*(undefined4 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x138),auStack_a8,lVar3);
    lVar2 = unaff_x21 + unaff_x19 * 0x90 + -0x120;
    lVar3 = unaff_x22 + unaff_x19 * 0xd8 + -0x48;
    for (; uVar4 < unaff_x19; uVar4 = uVar4 - 1) {
      if (uVar4 == 0) {
        func_0x006fd840(auStack_f0,auStack_a8);
      }
      else {
        FUN_006ed098(param_1,auStack_f0,auStack_a8,lVar2);
        FUN_006ed098(param_1,auStack_a8,auStack_a8,lVar3);
      }
      func_0x006ed0a8(param_1,auStack_138,auStack_f0);
      func_0x006fe3f0();
      func_0x006fe3f0();
      func_0x006fe3f0();
      lVar2 = lVar2 + -0x90;
      lVar3 = lVar3 + -0xd8;
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 006f97d4; end: 006f980b;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 * FUN_006f97d4(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  code *pcVar17;
  undefined8 extraout_x8;
  long extraout_x8_00;
  dword *pdVar18;
  uint uVar19;
  int unaff_w19;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong auStack_160 [5];
  long lStack_138;
  undefined8 *puStack_130;
  uint uStack_124;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 auStack_c8 [5];
  undefined1 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_38;
  long *plVar12;
  
  func_0x006fd8fc();
  puVar13 = (undefined8 *)(long)*(int *)(param_1 + 0x40);
  FUN_006e5ae8();
  func_0x006fdeb4();
  FUN_006ed208();
  func_0x006fdeb4();
  puVar15 = (undefined8 *)(long)unaff_w19;
  puVar14 = (undefined8 *)*puVar13;
  puVar8 = puVar13;
  func_0x006fd5fc();
  puVar9 = puVar15;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar15 ||
      puVar15 != (undefined8 *)(long)*(int *)(puVar8 + 4)) {
LAB_006e5c40:
    puVar15 = param_4;
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar15 << 1);
    uVar5 = param_4 == puVar14;
    uStack_38 = extraout_x8;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_c8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    puVar14 = auStack_c8;
    puVar9 = unaff_x22;
    FUN_006e8214();
    param_4 = puVar15;
    if ((int)param_3 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_38);
    if ((bool)uVar5) {
      return param_3;
    }
  }
  ___stack_chk_fail();
  puVar16 = auStack_160;
  pcStack_d8 = FUN_006e5c48;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  lStack_118 = extraout_x8_00;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar14 ||
      puVar14 != (undefined8 *)(long)*(int *)(puVar9 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    puVar15 = (undefined8 *)puVar9[3];
    puVar14 = (undefined8 *)((long)puVar14 << 3);
    func_0x006e3440(auStack_160);
    uVar5 = auStack_160[0] - 2 == 0;
    uVar22 = auStack_160[0] - 2;
    if (auStack_160[0] < 2) {
      auStack_160[0] = auStack_160[0] | 0xfffffffffffffffe;
      pdVar18 = &MACH_HEADER.magic;
      do {
        pdVar18 = (dword *)((long)pdVar18 + 1);
        uVar5 = pdVar18 == (dword *)puVar13;
        uVar22 = auStack_160[0];
        if (puVar13 <= pdVar18) break;
        uVar10 = auStack_160[(long)pdVar18];
        auStack_160[(long)pdVar18] = uVar10 - 1;
      } while (uVar10 == 0);
    }
    auStack_160[0] = uVar22;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_118);
    param_3 = unaff_x22;
    puVar9 = puVar16;
    unaff_x23 = auStack_160;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar17 = FUN_006e5d10;
  func_0x006fec68();
  ppuStack_a0 = &puStack_e0;
  pcStack_98 = pcVar17;
  if ((*(int *)(puVar9 + 1) < 1) || ((*(byte *)*puVar9 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar9 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar15 + 2) == 0) {
    func_0x006feb2c();
    puVar8 = param_3;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(puVar14 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar9 != 0) {
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined4 *)(param_3 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar14 = param_3;
        FUN_006e35dc(param_3,1);
        if ((int)puVar14 != 0) {
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined8 *)*param_3 = 1;
          *(undefined4 *)(param_3 + 1) = 1;
          puVar14 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar14;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar9,unaff_x23);
        unaff_x24 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          param_3 = (undefined8 *)0x0;
          uVar22 = 0;
          uVar19 = 0;
          lVar20 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      puStack_130 = puVar9;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar20 = (long)(int)uVar2;
      uVar19 = 3;
      if (iVar7 != 1) {
        uVar19 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar19;
      }
      uVar19 = 5;
      if (iVar7 < 5) {
        uVar19 = uVar3;
      }
      uStack_124 = 6;
      if (iVar7 < 0xf) {
        uStack_124 = uVar19;
      }
      uVar3 = 1 << (ulong)uStack_124;
      auStack_160[1] = (ulong)uVar3;
      uVar22 = (ulong)uStack_124;
      auStack_160[0] = lVar20 << 1;
      uVar19 = (uint)auStack_160[0];
      if ((int)(uint)auStack_160[0] <= (int)uVar3) {
        uVar19 = uVar3;
      }
      uVar19 = (uVar19 + (uVar2 << uVar22)) * 8;
      uVar10 = (ulong)(int)(uVar19 + 0x40);
      FUN_00701e90();
      if (uVar10 == 0) {
        param_3 = (undefined8 *)0x0;
        uVar22 = 0;
        lVar20 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar10 & 0xffffffffffffffc0) + 0x40;
      auStack_160[2] = uVar10;
      auStack_160[3] = (ulong)uVar19;
      auStack_160[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      lStack_120 = lVar1 + (long)(int)(uVar2 << uVar22) * 8 + lVar20 * 8;
      lStack_118 = auStack_160[4] << 0x20;
      puVar11 = &stack0xfffffffffffffef8;
      lStack_138 = lVar1;
      FUN_006e60ec(puVar11,unaff_x24,unaff_x23);
      if ((int)puVar11 == 0) {
        param_3 = (undefined8 *)0x0;
        uVar19 = (uint)auStack_160[3];
        lVar20 = lStack_138;
        uVar22 = auStack_160[2];
        goto LAB_006e60b0;
      }
      plVar12 = &lStack_120;
      func_0x006fe0c0(plVar12,puVar15);
      iVar6 = (int)plVar12;
      func_0x006e5778();
      lVar1 = lStack_138;
      uVar22 = auStack_160[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        param_3 = (undefined8 *)0x0;
        lVar20 = lStack_138;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar20 * 8,lVar20,&lStack_120);
        uVar10 = auStack_160[1];
        if (1 < uStack_124) {
          puVar11 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar11,&lStack_120,&lStack_120);
          if ((int)puVar11 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_138 + auStack_160[0] * 8,lVar20,&stack0xfffffffffffffef8);
          auStack_160[0] = lVar20 << 3;
          for (uVar21 = 3; uVar21 < uVar10; uVar21 = uVar21 + 1) {
            puVar11 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(auStack_160[0],puVar11,&lStack_120,&stack0xfffffffffffffef8);
            if ((int)puVar11 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar20 = lStack_138;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_124 != 0) {
          iVar7 = iVar6 / (int)uStack_124;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_124; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(puVar14,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&stack0xfffffffffffffef8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(param_3,&stack0xfffffffffffffef8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_124;
          for (iVar7 = 0; uStack_124 + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar11 = &stack0xfffffffffffffef8;
            func_0x006fdaf8(puVar11,&stack0xfffffffffffffef8,&stack0xfffffffffffffef8);
            if ((int)puVar11 == 0) goto LAB_006e60a4;
            func_0x006e5334(puVar14,iVar6 + iVar7);
          }
          iVar7 = (int)&lStack_120;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar11 = &stack0xfffffffffffffef8;
          func_0x006fdaf8(puVar11,&stack0xfffffffffffffef8,&lStack_120);
          iVar6 = iVar4;
          iVar7 = (int)puVar11;
        }
LAB_006e60a4:
        param_3 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar19 = (uint)auStack_160[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar22 == 0) && (lVar20 != 0)) {
        FUN_00701f08(lVar20,(long)(int)uVar19);
      }
      func_0x00701ed0(uVar22);
      return param_3;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006f980c; end: 006f9823;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 *
FUN_006f980c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  code *pcVar16;
  uint uVar17;
  uint uVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar19;
  dword *pdVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  uint uVar25;
  undefined8 *unaff_x24;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 *unaff_x29;
  code *unaff_x30;
  undefined8 *in_stack_00000050;
  undefined1 auStack_4f0 [12];
  uint uStack_4e4;
  undefined8 *puStack_4e0;
  undefined8 auStack_4d8 [9];
  undefined8 auStack_490 [146];
  
  puVar12 = (undefined8 *)(long)*(int *)(param_1 + 0x40);
  puVar15 = *(undefined8 **)(param_1 + 0x138);
  func_0x006fdcd0();
  puVar11 = &stack0x00000050;
  puVar3 = auStack_4f0;
  in_stack_00000050 = unaff_x29;
  func_0x006fd588();
  bVar1 = puVar12 < (undefined8 *)((long)&MACH_HEADER.cpusubtype + 2);
  bVar4 = bVar1 && puVar12 == (undefined8 *)(long)*(int *)(puVar15 + 4);
  if (bVar1 && puVar12 == (undefined8 *)(long)*(int *)(puVar15 + 4)) {
    unaff_x24 = (undefined8 *)(ulong)((int)param_5 * 0x40 - 0x41);
    puVar24 = param_2;
    unaff_x22 = param_5;
    puVar13 = param_4;
    unaff_x19 = puVar15;
    unaff_x20 = puVar12;
    unaff_x21 = param_2;
    unaff_x23 = param_4;
    if (param_5 != (undefined8 *)0x0) {
LAB_006e5904:
      lVar8 = param_4[(long)unaff_x22 + -1];
      if (lVar8 == 0) goto code_r0x006e590c;
      func_0x006e3dfc();
      uVar26 = (int)lVar8 + (int)unaff_x24;
      uVar22 = uVar26 + 1;
      func_0x006e5744();
      uVar17 = uVar22;
      if (4 < uVar22) {
        uVar17 = 5;
      }
      puVar10 = (undefined8 *)((long)puVar12 << 3);
      puVar24 = auStack_490;
      puStack_4e0 = puVar10;
      func_0x006e3440();
      if (1 < uVar22) {
        puVar24 = auStack_4d8;
        param_3 = auStack_490;
        puVar10 = auStack_490;
        uStack_4e4 = uVar26;
        func_0x006fd8a0();
        uVar19 = 0;
        while( true ) {
          uVar22 = (int)uVar19 + 1;
          uVar26 = uStack_4e4;
          if (uVar22 >> (ulong)(uVar17 - 1 & 0x1f) != 0) break;
          puVar24 = auStack_490 + (ulong)uVar22 * 9;
          param_3 = auStack_490 + uVar19 * 9;
          puVar10 = auStack_4d8;
          func_0x006fd8a0();
          uVar19 = (ulong)uVar22;
        }
      }
      unaff_x24 = (undefined8 *)(ulong)uVar26;
      bVar1 = false;
      do {
        uVar22 = (uint)unaff_x24;
        puVar12 = unaff_x24;
        while( true ) {
          uVar22 = uVar22 - 1;
          puVar15 = (undefined8 *)((ulong)puVar12 >> 6);
          uVar5 = unaff_x22 == puVar15;
          uVar26 = (uint)puVar12;
          if ((puVar15 < unaff_x22) &&
             (((ulong)param_4[(long)puVar15] >> ((ulong)puVar12 & 0x3f) & 1) != 0)) break;
          if (bVar1) {
            func_0x006fe0cc();
            puVar10 = param_2;
            func_0x006fd8a0();
          }
          if (uVar26 == 0) goto LAB_006e5acc;
          puVar12 = (undefined8 *)(ulong)(uVar26 - 1);
        }
        uVar25 = 0;
        uVar18 = 1;
        for (uVar21 = 1; uVar21 < uVar17 && uVar21 <= uVar26; uVar21 = uVar21 + 1) {
          if (((undefined8 *)(ulong)(uVar22 >> 6) < unaff_x22) &&
             (((ulong)param_4[(long)(ulong)(uVar22 >> 6)] >> ((ulong)uVar22 & 0x3f) & 1) != 0)) {
            uVar18 = uVar18 << (ulong)(uVar21 - uVar25 & 0x1f) | 1;
            uVar25 = uVar21;
          }
          uVar22 = uVar22 - 1;
        }
        if (bVar1) {
          for (iVar7 = uVar25 + 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            func_0x006fe0cc();
            func_0x006fd8a0();
          }
          puVar10 = auStack_490 + (ulong)(uVar18 >> 1) * 9;
          func_0x006fe0cc();
          func_0x006fd8a0();
        }
        else {
          param_3 = auStack_490 + (ulong)(uVar18 >> 1) * 9;
          puVar24 = param_2;
          puVar10 = puStack_4e0;
          func_0x006e3440();
        }
        unaff_x24 = (undefined8 *)(ulong)(uVar26 + ~uVar25);
        bVar1 = true;
        uVar5 = uVar26 == uVar25;
      } while (!(bool)uVar5);
LAB_006e5acc:
      func_0x006fd508();
      if ((bool)uVar5) {
        return puVar24;
      }
      goto LAB_006e5ae4;
    }
LAB_006e5918:
    puVar10 = (undefined8 *)*puVar15;
    func_0x006fd508();
    if (!bVar4) goto LAB_006e5ae4;
    func_0x006fdc54();
    puVar13 = puVar12;
    param_5 = puVar15;
    func_0x006fdca0();
    puVar3 = (undefined1 *)register0x00000008;
    puVar11 = in_stack_00000050;
  }
  else {
    _abort();
    puVar24 = param_2;
    puVar10 = puVar12;
    puVar13 = param_4;
LAB_006e5ae4:
    unaff_x30 = FUN_006e5ae8;
    ___stack_chk_fail();
  }
  *(undefined8 **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 **)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined8 **)(puVar3 + -0x10) = puVar11;
  *(code **)(puVar3 + -8) = unaff_x30;
  func_0x006fd5fc();
  *(undefined8 *)(puVar3 + -0x48) = extraout_x8;
  puVar12 = puVar24;
  puVar11 = puVar10;
  puVar15 = param_5;
  if (((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < param_3 ||
       param_3 != (undefined8 *)(long)*(int *)(param_5 + 4)) ||
     (uVar5 = puVar13 == (undefined8 *)((long)param_3 * 2), unaff_x19 = param_3, unaff_x23 = puVar13
     , (undefined8 *)((long)param_3 * 2) <= puVar13 && !(bool)uVar5)) {
LAB_006e5b94:
    _abort();
  }
  else {
    unaff_x24 = (undefined8 *)((long)param_3 << 1);
    func_0x006fe440(puVar3 + -0xd8);
    func_0x006e3440(puVar3 + -0xd8,puVar10,(long)puVar13 << 3);
    puVar11 = (undefined8 *)(puVar3 + -0xd8);
    puVar13 = unaff_x24;
    FUN_006e8214();
    unaff_x20 = param_5;
    unaff_x21 = puVar24;
    unaff_x22 = puVar10;
    if ((int)puVar12 == 0) goto LAB_006e5b94;
    func_0x006fdf34();
    func_0x006fd534(*(undefined8 *)(puVar3 + -0x48));
    if ((bool)uVar5) {
      return puVar12;
    }
  }
  ___stack_chk_fail();
  *(undefined8 **)(puVar3 + -0x110) = unaff_x22;
  *(undefined8 **)(puVar3 + -0x108) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x100) = unaff_x20;
  *(undefined8 **)(puVar3 + -0xf8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0x10;
  *(code **)(puVar3 + -0xe8) = FUN_006e5b9c;
  puVar14 = puVar15;
  func_0x006fd5fc();
  *(undefined8 *)(puVar3 + -0x118) = extraout_x8_00;
  puVar24 = puVar12;
  puVar10 = puVar13;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar13 ||
      puVar13 != (undefined8 *)(long)*(int *)(puVar14 + 4)) {
LAB_006e5c40:
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar13 << 1);
    uVar5 = param_3 == puVar11;
    if ((bool)uVar5) {
      FUN_006e82e4(puVar3 + -0x1a8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    puVar11 = (undefined8 *)(puVar3 + -0x1a8);
    param_3 = puVar13;
    puVar10 = unaff_x22;
    FUN_006e8214();
    unaff_x19 = puVar13;
    unaff_x21 = puVar12;
    if ((int)puVar24 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(*(undefined8 *)(puVar3 + -0x118));
    if ((bool)uVar5) {
      return puVar24;
    }
  }
  ___stack_chk_fail();
  puVar12 = (undefined8 *)(puVar3 + -0x240);
  *(undefined8 **)(puVar3 + -0x1f0) = unaff_x24;
  *(undefined8 **)(puVar3 + -0x1e8) = unaff_x23;
  *(undefined8 **)(puVar3 + -0x1e0) = unaff_x22;
  *(undefined8 **)(puVar3 + -0x1d8) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x1d0) = puVar15;
  *(undefined8 **)(puVar3 + -0x1c8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x1c0) = puVar3 + -0xf0;
  *(code **)(puVar3 + -0x1b8) = FUN_006e5c48;
  func_0x006fd5fc();
  *(undefined8 *)(puVar3 + -0x1f8) = extraout_x8_01;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar11 ||
      puVar11 != (undefined8 *)(long)*(int *)(puVar10 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    param_3 = (undefined8 *)puVar10[3];
    puVar11 = (undefined8 *)((long)puVar11 << 3);
    func_0x006e3440(puVar3 + -0x240);
    uVar19 = *(ulong *)(puVar3 + -0x240);
    uVar5 = uVar19 - 2 == 0;
    if (uVar19 < 2) {
      *(ulong *)(puVar3 + -0x240) = uVar19 | 0xfffffffffffffffe;
      pdVar20 = &MACH_HEADER.magic;
      do {
        pdVar20 = (dword *)((long)pdVar20 + 1);
        uVar5 = pdVar20 == (dword *)puVar15;
        if (puVar15 <= pdVar20) break;
        lVar8 = *(long *)(puVar3 + (long)pdVar20 * 8 + -0x240);
        *(long *)(puVar3 + (long)pdVar20 * 8 + -0x240) = lVar8 + -1;
      } while (lVar8 == 0);
    }
    else {
      *(ulong *)(puVar3 + -0x240) = uVar19 - 2;
    }
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(*(undefined8 *)(puVar3 + -0x1f8));
    puVar24 = unaff_x22;
    puVar10 = puVar12;
    unaff_x23 = (undefined8 *)(puVar3 + -0x240);
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar16 = FUN_006e5d10;
  func_0x006fec68();
  *(undefined1 **)(puVar3 + -0x180) = puVar3 + -0x1c0;
  *(code **)(puVar3 + -0x178) = pcVar16;
  if ((*(int *)(puVar10 + 1) < 1) || ((*(byte *)*puVar10 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar10 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_3 + 2) == 0) {
    func_0x006feb2c();
    puVar12 = puVar24;
    func_0x006fd9d0();
    iVar7 = (int)puVar12;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(puVar11 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar10 != 0) {
          *(undefined4 *)(puVar24 + 2) = 0;
          *(undefined4 *)(puVar24 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        *(undefined8 *)(puVar3 + -400) = *(undefined8 *)(puVar3 + -400);
        *(undefined8 *)(puVar3 + -0x188) = *(undefined8 *)(puVar3 + -0x188);
        *(undefined8 *)(puVar3 + -0x180) = *(undefined8 *)(puVar3 + -0x180);
        *(undefined8 *)(puVar3 + -0x178) = *(undefined8 *)(puVar3 + -0x178);
        puVar11 = puVar24;
        FUN_006e35dc(puVar24,1);
        if ((int)puVar11 != 0) {
          *(undefined4 *)(puVar24 + 2) = 0;
          *(undefined8 *)*puVar24 = 1;
          *(undefined4 *)(puVar24 + 1) = 1;
          puVar11 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar11;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar10,unaff_x23);
        unaff_x24 = puVar10;
        if (puVar10 == (undefined8 *)0x0) {
          puVar24 = (undefined8 *)0x0;
          lVar8 = 0;
          uVar22 = 0;
          lVar27 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar10 = (undefined8 *)0x0;
      }
      *(undefined8 **)(puVar3 + -0x210) = puVar10;
      uVar26 = *(uint *)(unaff_x24 + 4);
      lVar27 = (long)(int)uVar26;
      uVar22 = 3;
      if (iVar7 != 1) {
        uVar22 = 1;
      }
      uVar17 = 4;
      if (iVar7 < 2) {
        uVar17 = uVar22;
      }
      uVar22 = 5;
      if (iVar7 < 5) {
        uVar22 = uVar17;
      }
      uVar17 = 6;
      if (iVar7 < 0xf) {
        uVar17 = uVar22;
      }
      uVar21 = 1 << (ulong)uVar17;
      *(uint *)(puVar3 + -0x204) = uVar17;
      uVar22 = (uint)(lVar27 << 1);
      *(long *)(puVar3 + -0x240) = lVar27 << 1;
      *(ulong *)(puVar3 + -0x238) = (ulong)uVar21;
      if ((int)uVar22 <= (int)uVar21) {
        uVar22 = uVar21;
      }
      uVar22 = (uVar22 + (uVar26 << (ulong)uVar17)) * 8;
      uVar19 = (ulong)(int)(uVar22 + 0x40);
      FUN_00701e90();
      if (uVar19 == 0) {
        puVar24 = (undefined8 *)0x0;
        lVar8 = 0;
        lVar27 = 0;
        goto LAB_006e60b0;
      }
      *(ulong *)(puVar3 + -0x230) = uVar19;
      *(ulong *)(puVar3 + -0x228) = (ulong)uVar22;
      *(ulong *)(puVar3 + -0x220) = (ulong)uVar26;
      lVar8 = (uVar19 & 0xffffffffffffffc0) + 0x40;
      func_0x006fd9c0(lVar8);
      *(long *)(puVar3 + -0x218) = lVar8;
      lVar8 = lVar8 + (long)(int)(uVar26 << (ulong)uVar17) * 8;
      *(long *)(puVar3 + -0x1e8) = lVar8;
      *(long *)(puVar3 + -0x200) = lVar8 + lVar27 * 8;
      *(undefined4 *)(puVar3 + -0x1f8) = 0;
      *(int *)(puVar3 + -500) = (int)*(undefined8 *)(puVar3 + -0x220);
      *(undefined4 *)(puVar3 + -0x1e0) = 0;
      *(int *)(puVar3 + -0x1dc) = (int)*(undefined8 *)(puVar3 + -0x220);
      *(undefined8 *)(puVar3 + -0x1f0) = 0x200000000;
      *(undefined8 *)(puVar3 + -0x1d8) = 0x200000000;
      puVar9 = puVar3 + -0x1e8;
      FUN_006e60ec(puVar9,unaff_x24,unaff_x23);
      if ((int)puVar9 == 0) {
        puVar24 = (undefined8 *)0x0;
        lVar27 = *(long *)(puVar3 + -0x218);
        lVar8 = *(long *)(puVar3 + -0x230);
        uVar22 = (uint)*(undefined8 *)(puVar3 + -0x228);
        goto LAB_006e60b0;
      }
      puVar9 = puVar3 + -0x200;
      func_0x006fe0c0(puVar9,param_3);
      iVar6 = (int)puVar9;
      func_0x006e5778();
      lVar8 = *(long *)(puVar3 + -0x230);
      if (iVar6 == 0) {
LAB_006e5fcc:
        puVar24 = (undefined8 *)0x0;
        lVar27 = *(long *)(puVar3 + -0x218);
      }
      else {
        lVar23 = *(long *)(puVar3 + -0x218);
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar23 + lVar27 * 8,lVar27,puVar3 + -0x200);
        uVar19 = *(ulong *)(puVar3 + -0x238);
        if (1 < *(uint *)(puVar3 + -0x204)) {
          puVar9 = puVar3 + -0x1e8;
          func_0x006fdaf8(puVar9,puVar3 + -0x200,puVar3 + -0x200);
          if ((int)puVar9 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(*(long *)(puVar3 + -0x218) + *(long *)(puVar3 + -0x240) * 8,lVar27,
                          puVar3 + -0x1e8);
          lVar27 = lVar27 << 3;
          *(long *)(puVar3 + -0x240) = lVar27;
          for (uVar28 = 3; uVar28 < uVar19; uVar28 = uVar28 + 1) {
            puVar9 = puVar3 + -0x1e8;
            func_0x006fdaf8(lVar27,puVar9,puVar3 + -0x200,puVar3 + -0x1e8);
            if ((int)puVar9 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
            lVar27 = *(long *)(puVar3 + -0x240);
          }
        }
        iVar2 = iVar7 * 0x40 + -1;
        iVar7 = *(int *)(puVar3 + -0x204);
        iVar6 = 0;
        if (iVar7 != 0) {
          iVar6 = iVar2 / iVar7;
        }
        lVar27 = *(long *)(puVar3 + -0x218);
        for (iVar7 = iVar2 - iVar6 * iVar7; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(puVar11,iVar2);
          iVar2 = iVar2 + -1;
        }
        iVar7 = (int)(puVar3 + -0x1e8);
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar2 < 0) {
            func_0x006fe0c0(puVar24,puVar3 + -0x1e8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar6 = *(int *)(puVar3 + -0x204);
          for (iVar7 = 0; *(int *)(puVar3 + -0x204) + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar9 = puVar3 + -0x1e8;
            func_0x006fdaf8(puVar9,puVar3 + -0x1e8,puVar3 + -0x1e8);
            if ((int)puVar9 == 0) goto LAB_006e60a4;
            func_0x006e5334(puVar11,iVar2 + iVar7);
          }
          iVar7 = (int)(puVar3 + -0x200);
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar9 = puVar3 + -0x1e8;
          func_0x006fdaf8(puVar9,puVar3 + -0x1e8,puVar3 + -0x200);
          iVar2 = iVar2 - iVar6;
          iVar7 = (int)puVar9;
        }
LAB_006e60a4:
        puVar24 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar22 = (uint)*(undefined8 *)(puVar3 + -0x228);
LAB_006e60b0:
      FUN_006e5880();
      if ((lVar8 == 0) && (lVar27 != 0)) {
        FUN_00701f08(lVar27,(long)(int)uVar22);
      }
      func_0x00701ed0(lVar8);
      return puVar24;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
code_r0x006e590c:
  unaff_x22 = (undefined8 *)((long)unaff_x22 + -1);
  unaff_x24 = (undefined8 *)(ulong)((int)unaff_x24 - 0x40);
  puVar24 = (undefined8 *)0x0;
  if (unaff_x22 == (undefined8 *)0x0) goto LAB_006e5918;
  goto LAB_006e5904;
}



/* Entry: 006f9824; end: 006f9937;  */

ulong FUN_006f9824(ulong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_108 [144];
  undefined1 auStack_78 [72];
  
  func_0x006fd94c();
  if ((*(int *)(param_1 + 0xe4) != 0) && (*(int *)(unaff_x19 + 0x40) == *(int *)(unaff_x19 + 0x18)))
  {
    func_0x006fdab0();
    iVar1 = (int)param_1;
    FUN_006ec074();
    if (iVar1 == 0) {
      func_0x006fdd44();
      func_0x006fe8a8(auStack_78);
      func_0x006fdd44();
      iVar1 = *(int *)(unaff_x19 + 0x40);
      FUN_006ed0fc(iVar1,*(undefined8 *)(unaff_x19 + 0x138),auStack_108);
      func_0x006fe2dc();
      if (iVar1 != 0) {
        return 1;
      }
      func_0x006fe3e4();
      FUN_006e42c0();
      if (iVar1 != 0) {
        iVar1 = (int)auStack_78;
        FUN_006e3678();
        func_0x006fdd44();
        func_0x006fe2dc();
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
    return 0;
  }
  func_0x006fd7d4();
  func_0x006fd9b0();
  FUN_006ec074();
  if ((int)param_1 == 0) {
    func_0x006fe3e4();
    FUN_006ec8f8();
    if ((int)param_1 != 0) {
      puVar2 = auStack_78;
      func_0x006ee728(puVar2,unaff_x19,(long)*(int *)(unaff_x20 + 0x18) << 3);
      param_1 = (ulong)((int)puVar2 == 0);
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 006f9938; end: 006f9953;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 * FUN_006f9938(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar12;
  ulong *puVar13;
  long extraout_x8;
  uint uVar14;
  ulong unaff_x20;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong auStack_90 [5];
  long lStack_68;
  undefined8 *puStack_60;
  uint uStack_54;
  long lStack_50;
  long lStack_48;
  long *plVar11;
  
  uVar12 = (ulong)param_1;
  puVar13 = auStack_90;
  func_0x006fd5fc();
  lStack_48 = extraout_x8;
  if (uVar12 < 10 && uVar12 == (long)*(int *)(param_2 + 4)) {
    func_0x006fdbac();
    param_4 = param_2[3];
    uVar12 = uVar12 << 3;
    func_0x006e3440(auStack_90);
    uVar5 = auStack_90[0] - 2 == 0;
    uVar17 = auStack_90[0] - 2;
    if (auStack_90[0] < 2) {
      auStack_90[0] = auStack_90[0] | 0xfffffffffffffffe;
      uVar9 = 1;
      do {
        uVar5 = uVar9 == unaff_x20;
        uVar17 = auStack_90[0];
        if (unaff_x20 <= uVar9) break;
        uVar16 = auStack_90[uVar9];
        auStack_90[uVar9] = uVar16 - 1;
        uVar9 = uVar9 + 1;
      } while (uVar16 == 0);
    }
    auStack_90[0] = uVar17;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_48);
    param_3 = unaff_x22;
    param_2 = puVar13;
    unaff_x23 = auStack_90;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  else {
    _abort();
  }
  ___stack_chk_fail();
  func_0x006fec68();
  if ((*(int *)(param_2 + 1) < 1) || ((*(byte *)*param_2 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_2 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(param_4 + 0x10) == 0) {
    func_0x006feb2c();
    puVar8 = param_3;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(uVar12 + 8);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)param_2 != 0) {
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined4 *)(param_3 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar8 = param_3;
        FUN_006e35dc(param_3,1);
        if ((int)puVar8 != 0) {
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined8 *)*param_3 = 1;
          *(undefined4 *)(param_3 + 1) = 1;
          puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar8;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(param_2,unaff_x23);
        unaff_x24 = param_2;
        if (param_2 == (undefined8 *)0x0) {
          param_3 = (undefined8 *)0x0;
          uVar17 = 0;
          uVar14 = 0;
          lVar15 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        param_2 = (undefined8 *)0x0;
      }
      puStack_60 = param_2;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar15 = (long)(int)uVar2;
      uVar14 = 3;
      if (iVar7 != 1) {
        uVar14 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar14;
      }
      uVar14 = 5;
      if (iVar7 < 5) {
        uVar14 = uVar3;
      }
      uStack_54 = 6;
      if (iVar7 < 0xf) {
        uStack_54 = uVar14;
      }
      uVar3 = 1 << (ulong)uStack_54;
      auStack_90[1] = (ulong)uVar3;
      uVar17 = (ulong)uStack_54;
      auStack_90[0] = lVar15 << 1;
      uVar14 = (uint)auStack_90[0];
      if ((int)(uint)auStack_90[0] <= (int)uVar3) {
        uVar14 = uVar3;
      }
      uVar14 = (uVar14 + (uVar2 << uVar17)) * 8;
      uVar9 = (ulong)(int)(uVar14 + 0x40);
      FUN_00701e90();
      if (uVar9 == 0) {
        param_3 = (undefined8 *)0x0;
        uVar17 = 0;
        lVar15 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar9 & 0xffffffffffffffc0) + 0x40;
      auStack_90[2] = uVar9;
      auStack_90[3] = (ulong)uVar14;
      auStack_90[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      lStack_50 = lVar1 + (long)(int)(uVar2 << uVar17) * 8 + lVar15 * 8;
      lStack_48 = auStack_90[4] << 0x20;
      puVar10 = &stack0xffffffffffffffc8;
      lStack_68 = lVar1;
      FUN_006e60ec(puVar10,unaff_x24,unaff_x23);
      if ((int)puVar10 == 0) {
        param_3 = (undefined8 *)0x0;
        uVar14 = (uint)auStack_90[3];
        lVar15 = lStack_68;
        uVar17 = auStack_90[2];
        goto LAB_006e60b0;
      }
      plVar11 = &lStack_50;
      func_0x006fe0c0(plVar11,param_4);
      iVar6 = (int)plVar11;
      func_0x006e5778();
      lVar1 = lStack_68;
      uVar17 = auStack_90[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        param_3 = (undefined8 *)0x0;
        lVar15 = lStack_68;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar15 * 8,lVar15,&lStack_50);
        uVar9 = auStack_90[1];
        if (1 < uStack_54) {
          puVar10 = &stack0xffffffffffffffc8;
          func_0x006fdaf8(puVar10,&lStack_50,&lStack_50);
          if ((int)puVar10 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_68 + auStack_90[0] * 8,lVar15,&stack0xffffffffffffffc8);
          auStack_90[0] = lVar15 << 3;
          for (uVar16 = 3; uVar16 < uVar9; uVar16 = uVar16 + 1) {
            puVar10 = &stack0xffffffffffffffc8;
            func_0x006fdaf8(auStack_90[0],puVar10,&lStack_50,&stack0xffffffffffffffc8);
            if ((int)puVar10 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar15 = lStack_68;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_54 != 0) {
          iVar7 = iVar6 / (int)uStack_54;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_54; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(uVar12,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&stack0xffffffffffffffc8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(param_3,&stack0xffffffffffffffc8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_54;
          for (iVar7 = 0; uStack_54 + iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar10 = &stack0xffffffffffffffc8;
            func_0x006fdaf8(puVar10,&stack0xffffffffffffffc8,&stack0xffffffffffffffc8);
            if ((int)puVar10 == 0) goto LAB_006e60a4;
            func_0x006e5334(uVar12,iVar6 + iVar7);
          }
          iVar7 = (int)&lStack_50;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          puVar10 = &stack0xffffffffffffffc8;
          func_0x006fdaf8(puVar10,&stack0xffffffffffffffc8,&lStack_50);
          iVar6 = iVar4;
          iVar7 = (int)puVar10;
        }
LAB_006e60a4:
        param_3 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar14 = (uint)auStack_90[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar17 == 0) && (lVar15 != 0)) {
        FUN_00701f08(lVar15,(long)(int)uVar14);
      }
      func_0x00701ed0(uVar17);
      return param_3;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006f9954; end: 006f9c4f;  */

void FUN_006f9954(int param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong *puVar16;
  byte bVar17;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  ulong extraout_x9;
  long unaff_x19;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong unaff_x28;
  ulong auStack_14d0 [15];
  ulong auStack_1458 [4];
  undefined8 uStack_1438;
  ulong *puStack_1430;
  undefined8 *puStack_1428;
  undefined8 ***pppuStack_1420;
  undefined8 uStack_1418;
  undefined1 auStack_1410 [152];
  undefined1 auStack_1378 [32];
  undefined8 uStack_1358;
  ulong *puStack_1350;
  undefined8 *puStack_1348;
  undefined8 ***pppuStack_1340;
  code *pcStack_1338;
  undefined *puStack_1330;
  undefined *puStack_1328;
  undefined *puStack_1318;
  undefined8 *puStack_1310;
  undefined *puStack_1308;
  long lStack_1300;
  long lStack_12f8;
  undefined1 auStack_12f0 [32];
  undefined auStack_12d0 [32];
  undefined auStack_12b0 [32];
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined1 auStack_1230 [1648];
  undefined1 *puStack_bc0;
  undefined8 ***pppuStack_bb8;
  ulong auStack_bb0 [4];
  undefined1 auStack_b90 [32];
  undefined8 ***pppuStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  ulong uStack_ae0;
  ulong uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined1 *puStack_ac0;
  ulong *puStack_ab8;
  undefined8 *puStack_ab0;
  undefined1 *puStack_aa8;
  ulong *puStack_aa0;
  undefined *puStack_a98;
  undefined8 ***pppuStack_a90;
  undefined8 uStack_a88;
  undefined1 *puStack_a80;
  undefined1 *puStack_a78;
  undefined8 uStack_a70;
  undefined *puStack_a68;
  ulong auStack_a60 [4];
  undefined1 auStack_a40 [32];
  undefined1 auStack_a20 [32];
  undefined1 auStack_a00 [32];
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined1 auStack_980 [1656];
  undefined auStack_308 [32];
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined1 ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined8 uStack_2a8;
  undefined1 **ppuStack_290;
  undefined8 uStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined8 uStack_1a8;
  undefined1 *puStack_190;
  code *pcStack_188;
  char acStack_180 [32];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 auStack_140 [120];
  undefined1 auStack_c8 [32];
  char acStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  pcVar12 = acStack_180;
  func_0x006fe490();
  func_0x006fd5fc();
  uStack_48 = extraout_x8;
  FUN_006ec074();
  if (param_1 == 0) {
    uStack_160 = unaff_x20[0x12] & 0xffffffffffffff;
    uStack_158 = *(ulong *)((long)unaff_x20 + 0x97) & 0xffffffffffffff;
    uStack_150 = *(ulong *)((long)unaff_x20 + 0x9e) & 0xffffffffffffff;
    uStack_148 = *(ulong *)((long)unaff_x20 + 0xa4) >> 8;
    func_0x006fe61c();
    func_0x006fa508();
    func_0x006fd694();
    func_0x006fe61c();
    func_0x006fddd4();
    func_0x006fd694();
    func_0x006fdb14();
    func_0x006fd694();
    func_0x006fe61c();
    func_0x006fddd4();
    func_0x006fd694();
    func_0x006fdb14();
    func_0x006fd65c();
    func_0x006fdb20();
    func_0x006fd65c();
    func_0x006fdb20();
    func_0x006fd65c();
    func_0x006fddd4(auStack_140,auStack_88);
    func_0x006fd694();
    func_0x006fdb14();
    func_0x006fd65c();
    lVar19 = 5;
    while( true ) {
      if (lVar19 == 0) break;
      func_0x006fa508();
      func_0x006fd65c();
      lVar19 = lVar19 + -1;
    }
    func_0x006fddd4(auStack_140,auStack_88);
    func_0x006fd65c();
    func_0x006fdb20();
    func_0x006fd7bc();
    for (lVar19 = 0xb; func_0x006febec(), lVar19 != 0; lVar19 = lVar19 + -1) {
      func_0x006fa508();
      func_0x006fd7bc();
    }
    func_0x006fa6d0();
    func_0x006fd65c();
    func_0x006fdb20();
    func_0x006fd7bc();
    for (lVar19 = 0x17; func_0x006febec(), lVar19 != 0; lVar19 = lVar19 + -1) {
      func_0x006fa508();
      func_0x006fd7bc();
    }
    func_0x006fa6d0();
    func_0x006fd7bc();
    func_0x006febec();
    func_0x006fa508();
    func_0x006fd88c(auStack_c8);
    for (lVar19 = 0x2f; lVar19 != 0; lVar19 = lVar19 + -1) {
      func_0x006fa508(auStack_140,auStack_c8);
      func_0x006fd88c(auStack_c8);
    }
    func_0x006fa6d0(auStack_140,acStack_a8,auStack_c8);
    func_0x006fd7bc();
    func_0x006febec();
    func_0x006fa508();
    func_0x006fd88c(auStack_c8);
    for (lVar19 = 0x17; lVar19 != 0; lVar19 = lVar19 + -1) {
      func_0x006fa508(auStack_140,auStack_c8);
      func_0x006fd88c(auStack_c8);
    }
    func_0x006fa6d0(auStack_140,auStack_88,auStack_c8);
    func_0x006fd65c();
    lVar19 = 6;
    while( true ) {
      if (lVar19 == 0) break;
      func_0x006fa508();
      func_0x006fd65c();
      lVar19 = lVar19 + -1;
    }
    func_0x006fddd4(auStack_140,auStack_88);
    func_0x006fd694();
    func_0x006fdb14();
    func_0x006fd694();
    func_0x006fdb04();
    func_0x006fd694();
    lVar19 = 0x61;
    while( true ) {
      if (lVar19 == 0) break;
      func_0x006fa508();
      func_0x006fd694();
      lVar19 = lVar19 + -1;
    }
    pcVar11 = acStack_a8;
    func_0x006fa6d0(auStack_140,auStack_68);
    func_0x006fd88c(acStack_180);
    func_0x006fa508(auStack_140,acStack_180);
    func_0x006fd88c(&uStack_160);
    if (unaff_x21 != 0) {
      func_0x006fe9cc(*unaff_x20 & 0xffffffffffffff);
      func_0x006fe9c0(*(ulong *)((long)unaff_x20 + 0xe) & 0xffffffffffffff);
      func_0x006fdb04();
      func_0x006fd65c();
      func_0x006fa7c8();
    }
    if (unaff_x19 != 0) {
      func_0x006fe9cc(unaff_x20[9] & 0xffffffffffffff);
      func_0x006fe9c0(*(ulong *)((long)unaff_x20 + 0x56) & 0xffffffffffffff);
      func_0x006fe61c();
      func_0x006fa6d0();
      func_0x006fd88c(&uStack_160);
      func_0x006fdb04();
      func_0x006fd65c();
      func_0x006fdc6c();
      pcVar11 = pcVar12;
    }
    uVar4 = 1;
  }
  else {
    func_0x006fd880();
    pcVar11 = section_00000068.sectname + 0xf;
    func_0x006fd5dc();
    uVar4 = 0;
  }
  func_0x006fd534(uStack_48,uVar4);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_006f9c50;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x006fd59c();
  func_0x006fe9cc(*(ulong *)(pcVar11 + 0x48) & 0xffffffffffffff);
  func_0x006fe9c0(*(ulong *)(pcVar11 + 0x56) & 0xffffffffffffff);
  func_0x006febd8();
  func_0x006febc4();
  uStack_228 = *param_4 & 0xffffffffffffff;
  uStack_220 = *(ulong *)((long)param_4 + 7) & 0xffffffffffffff;
  uStack_218 = *(ulong *)((long)param_4 + 0xe) & 0xffffffffffffff;
  uStack_210 = *(ulong *)((long)param_4 + 0x14) >> 8;
  uStack_248 = param_4[9] & 0xffffffffffffff;
  uStack_240 = *(ulong *)((long)param_4 + 0x4f) & 0xffffffffffffff;
  uStack_238 = *(ulong *)((long)param_4 + 0x56) & 0xffffffffffffff;
  uStack_230 = *(ulong *)((long)param_4 + 0x5c) >> 8;
  uStack_268 = param_4[0x12] & 0xffffffffffffff;
  uStack_260 = *(ulong *)((long)param_4 + 0x97) & 0xffffffffffffff;
  uStack_258 = *(ulong *)((long)param_4 + 0x9e) & 0xffffffffffffff;
  uStack_250 = *(ulong *)((long)param_4 + 0xa4) >> 8;
  puStack_278 = &uStack_268;
  puStack_280 = &uStack_248;
  puVar13 = auStack_208;
  func_0x006fe15c(auStack_1c8,auStack_1e8,puVar13,auStack_1c8,auStack_1e8,auStack_208,param_7,
                  &uStack_228);
  func_0x006fdad4();
  func_0x006fa7c8(unaff_x19 + 0x48,auStack_1e8);
  func_0x006fa7c8(unaff_x19 + 0x90,auStack_208);
  func_0x006fd534(uStack_1a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_288 = 0x6f9d6c;
  ppuStack_290 = &puStack_190;
  func_0x006fd59c();
  uStack_2e8 = *(ulong *)(puVar13 + 0x48) & 0xffffffffffffff;
  uStack_2e0 = *(ulong *)(puVar13 + 0x4f) & 0xffffffffffffff;
  uStack_2d8 = *(ulong *)(puVar13 + 0x56) & 0xffffffffffffff;
  uStack_2d0 = *(ulong *)(puVar13 + 0x5c) >> 8;
  func_0x006febd8();
  func_0x006febc4();
  puVar14 = auStack_308;
  puVar10 = &uStack_2c8;
  puVar6 = &uStack_2e8;
  FUN_006facb0(&uStack_2c8,&uStack_2e8);
  func_0x006fdad4();
  func_0x006fa7c8(unaff_x19 + 0x48,&uStack_2e8);
  puVar7 = auStack_308;
  func_0x006fa7c8(unaff_x19 + 0x90);
  func_0x006fd534(uStack_2a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcVar5 = FUN_006f9e0c;
  func_0x006fdcd0();
  puVar16 = puVar10;
  pppuStack_2c0 = &ppuStack_290;
  pcStack_2b8 = pcVar5;
  func_0x006fd588();
  FUN_006fb03c(auStack_980,puVar14);
  uVar4 = 0;
  uStack_9d8 = 0;
  uStack_9e0 = 0;
  uStack_9c8 = 0;
  uStack_9d0 = 0;
  uStack_9b8 = 0;
  uStack_9c0 = 0;
  uStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_998 = 0;
  uStack_9a0 = 0;
  uStack_988 = 0;
  uStack_990 = 0;
  uVar21 = 0xdc;
  while (uVar3 = uVar21 == 0xdd, uVar21 < 0xdd) {
    if ((int)uVar4 != 0) {
      func_0x006fe380();
      FUN_006facb0();
    }
    uVar20 = (uint)uVar21;
    if (uVar20 == (uVar20 / 5) * 5) {
      if (uVar21 != 0xdc) {
        func_0x006fd6b0(uVar21 + 4);
      }
      uVar21 = uVar21 - 1;
      if (uVar21 < 0xe0) {
        bVar17 = *(byte *)((long)puVar10 + (uVar21 >> 3)) >> (ulong)(uVar20 - 1 & 7) & 1;
      }
      else {
        bVar17 = 0;
      }
      func_0x006fd9f0(bVar17);
      func_0x006fd9f0();
      func_0x006fe5b0();
      func_0x006feaec();
      FUN_006ef290();
      puVar16 = auStack_a60;
      FUN_006fb108(uStack_a70,0x11,auStack_980);
      FUN_006fb174(auStack_a00,auStack_a40);
      puVar14 = puStack_a68;
      func_0x006fb008(auStack_a40,auStack_a00);
      if ((int)uVar4 == 0) {
        func_0x006fe360(&uStack_9e0,auStack_a60);
      }
      else {
        puStack_a80 = auStack_a40;
        puStack_a78 = auStack_a20;
        func_0x006fe380();
        func_0x006fe15c();
      }
      uVar4 = 1;
      unaff_x28 = uVar21;
    }
    else {
      uVar21 = uVar21 - 1;
    }
  }
  func_0x006fdc6c();
  func_0x006fa7c8(puVar7 + 0x48,&uStack_9c0);
  puVar8 = &uStack_9a0;
  func_0x006fa7c8(puVar7 + 0x90,puVar8);
  func_0x006fd508();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    uStack_ac8 = 5;
    uStack_a88 = 0x6f9fc4;
    lVar19 = 0;
    bVar2 = false;
    puVar15 = puVar14;
    uStack_ae0 = unaff_x28;
    uStack_ad8 = uVar21;
    uStack_ad0 = uVar4;
    puStack_ac0 = auStack_a20;
    puStack_ab8 = auStack_a60;
    puStack_ab0 = &uStack_9e0;
    puStack_aa8 = auStack_a40;
    puStack_aa0 = puVar10;
    puStack_a98 = puVar7;
    pppuStack_a90 = &pppuStack_2c0;
    func_0x006fd588();
    uStack_b48 = 0;
    uStack_b50 = 0;
    uStack_b38 = 0;
    uStack_b40 = 0;
    uStack_b28 = 0;
    uStack_b30 = 0;
    uStack_b18 = 0;
    uStack_b20 = 0;
    uStack_b08 = 0;
    uStack_b10 = 0;
    uStack_af8 = 0;
    uStack_b00 = 0;
    while( true ) {
      uVar21 = lVar19 + 0x1b;
      uVar3 = uVar21 == 0x1c;
      if (0x1b < uVar21) break;
      if (bVar2) {
        func_0x006fd95c();
        FUN_006facb0();
      }
      func_0x006fd6b0(lVar19 + 0xdf);
      uVar20 = (extraout_w8 & 1) << 3 |
               ((byte)puVar14[lVar19 + 0xa7U >> 3] >> (ulong)((uint)(lVar19 + 0xa7U) & 7) & 1) << 2;
      func_0x006fd6b0(lVar19 + 0x6f,uVar20);
      uVar20 = uVar20 & 0xfffffffc | uVar20 & 1 | (extraout_w8_00 & 1) << 1;
      func_0x006fd6b0(lVar19 + 0x37,uVar20);
      FUN_006fb108(uVar20 & 0xfffffffe | extraout_w8_01 & 1,0x10,&UNK_008378a8,auStack_bb0);
      if (bVar2) {
        puStack_bc0 = auStack_b90;
        pppuStack_bb8 = &pppuStack_b70;
        func_0x006fd95c();
        func_0x006fe370();
      }
      else {
        func_0x006fe360(&uStack_b50,auStack_bb0);
      }
      uVar20 = (int)lVar19 + 0x1bU & 7;
      puVar16 = auStack_bb0;
      puVar15 = &UNK_008372a8;
      FUN_006fb108(((byte)puVar14[lVar19 + 0xc3U >> 3] >> (ulong)uVar20 & 1) << 3 |
                   ((byte)puVar14[lVar19 + 0x8bU >> 3] >> (ulong)uVar20 & 1) << 2 |
                   ((byte)puVar14[lVar19 + 0x53U >> 3] >> (ulong)uVar20 & 1) << 1 |
                   (byte)puVar14[uVar21 >> 3] >> (ulong)uVar20 & 1,0x10);
      bVar2 = true;
      puStack_bc0 = auStack_b90;
      pppuStack_bb8 = &pppuStack_b70;
      func_0x006fd95c();
      func_0x006fe370();
      lVar19 = lVar19 + -1;
    }
    func_0x006fdc6c();
    func_0x006fa7c8(puVar8 + 9,&uStack_b30);
    puVar9 = &uStack_b10;
    func_0x006fa7c8(puVar8 + 0x12);
    func_0x006fd508();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    uVar4 = 0x6fa17c;
    func_0x006fdcd0();
    pppuStack_b70 = &pppuStack_a90;
    uStack_b68 = uVar4;
    func_0x006fd588();
    FUN_006fb03c(auStack_1230,puVar16);
    bVar2 = false;
    uStack_1288 = 0;
    uStack_1290 = 0;
    uStack_1278 = 0;
    uStack_1280 = 0;
    uStack_1268 = 0;
    uStack_1270 = 0;
    uStack_1258 = 0;
    uStack_1260 = 0;
    uStack_1248 = 0;
    uStack_1250 = 0;
    uStack_1238 = 0;
    uStack_1240 = 0;
    puStack_1308 = auStack_12d0;
    puStack_1318 = auStack_12b0;
    uVar21 = 0xdc;
    while (uVar3 = uVar21 == 0xdd, uVar21 < 0xdd) {
      if (bVar2) {
        func_0x006fd6c4();
        FUN_006facb0();
      }
      uVar18 = uVar21 >> 3;
      uVar20 = (uint)uVar21;
      if (uVar21 < 0x1c) {
        func_0x006fdf6c(((byte)puVar15[uVar21 + 0xc4 >> 3] >> (ulong)((uint)(uVar21 + 0xc4) & 7) & 1
                        ) << 3);
        func_0x006fdf6c(extraout_w8_02 & 0xfffffff8 | extraout_w8_02 & 3 | (extraout_w9 & 1) << 2);
        func_0x006fdf6c(extraout_w8_03 & 0xfffffffc | extraout_w8_03 & 1 | (extraout_w9_00 & 1) << 1
                       );
        lVar19 = (ulong)(extraout_w8_04 & 0xfffffffe | extraout_w9_01 & 1) * 0x60;
        puStack_1330 = &UNK_008378c8 + lVar19;
        puStack_1328 = &UNK_008378e8 + lVar19;
        func_0x006fd6c4();
        func_0x006fe370();
        uVar1 = uVar20 & 7;
        lVar19 = (ulong)(((byte)puVar15[uVar21 + 0xa8 >> 3] >> (ulong)uVar1 & 1) << 3 |
                         ((byte)puVar15[uVar21 + 0x70 >> 3] >> (ulong)uVar1 & 1) << 2 |
                         ((byte)puVar15[uVar21 + 0x38 >> 3] >> (ulong)uVar1 & 1) << 1 |
                        (byte)puVar15[uVar18] >> (ulong)uVar1 & 1) * 0x60;
        puStack_1330 = &UNK_008372c8 + lVar19;
        puStack_1328 = &UNK_008372e8 + lVar19;
        func_0x006fd6c4();
        func_0x006fe370();
      }
      if (uVar20 == (uVar20 / 5) * 5) {
        puStack_1310 = puVar9;
        if (uVar21 != 0xdc) {
          func_0x006fd6b0(uVar21 + 4);
        }
        uVar21 = uVar21 - 1;
        if (uVar21 < 0xe0) {
          bVar17 = *(byte *)((long)puVar6 + (uVar21 >> 3)) >> (ulong)(uVar20 - 1 & 7) & 1;
        }
        else {
          bVar17 = 0;
        }
        func_0x006fd9f0(bVar17);
        func_0x006fd9f0();
        func_0x006fe5b0();
        FUN_006ef290(&lStack_12f8,&lStack_1300,
                     extraout_x9 |
                     (*(byte *)((long)puVar6 + uVar18) >> (ulong)(uVar20 & 7) & 1) << 1 |
                     extraout_x8_00);
        func_0x006fe360(auStack_12f0,auStack_1230 + lStack_1300 * 0x60);
        if (lStack_12f8 != 0) {
          FUN_006fb174(puStack_1308,puStack_1308);
        }
        if (bVar2) {
          puStack_1330 = puStack_1308;
          puStack_1328 = puStack_1318;
          func_0x006fd6c4();
          func_0x006fe15c();
        }
        else {
          func_0x006fe360(&uStack_1290,auStack_12f0);
        }
        bVar2 = true;
        puVar9 = puStack_1310;
      }
      else {
        uVar21 = uVar21 - 1;
      }
    }
    func_0x006fdc6c();
    func_0x006fa7c8(puVar9 + 9,&uStack_1270);
    func_0x006fa7c8(puVar9 + 0x12,&uStack_1250);
    func_0x006fd508();
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      pcStack_1338 = FUN_006fa41c;
      puStack_1350 = puVar6;
      puStack_1348 = puVar9;
      pppuStack_1340 = &pppuStack_b70;
      func_0x006fd59c();
      func_0x006fe9cc(*puVar16 & 0xffffffffffffff);
      func_0x006fe9c0(*(ulong *)((long)puVar16 + 0xe) & 0xffffffffffffff);
      func_0x006fddd4(auStack_1410,auStack_1378);
      func_0x006fa5a4(auStack_1378,auStack_1410);
      func_0x006fdad4();
      func_0x006fd534(uStack_1358);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      puVar10 = auStack_14d0;
      uStack_1418 = 0x6fa48c;
      puStack_1430 = puVar6;
      puStack_1428 = puVar9;
      pppuStack_1420 = &pppuStack_1340;
      func_0x006fd59c();
      func_0x006fa508(auStack_14d0,auStack_1458);
      puVar6 = auStack_1458;
      func_0x006fa5a4();
      func_0x006fdad4();
      func_0x006fd534(uStack_1438);
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        *puVar6 = *puVar10 & 0xffffffffffffff;
        puVar6[1] = *(ulong *)((long)puVar10 + 7) & 0xffffffffffffff;
        puVar6[2] = *(ulong *)((long)puVar10 + 0xe) & 0xffffffffffffff;
        puVar6[3] = *(ulong *)((long)puVar10 + 0x14) >> 8;
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 006f9c50; end: 006f9e0b;  */

void FUN_006f9c50(undefined8 param_1,undefined8 param_2,long param_3,ulong *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  code *pcVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  byte bVar14;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  ulong extraout_x8;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  ulong extraout_x9;
  long unaff_x19;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  ulong unaff_x28;
  ulong auStack_1350 [15];
  ulong auStack_12d8 [4];
  undefined8 uStack_12b8;
  ulong *puStack_12b0;
  undefined8 *puStack_12a8;
  undefined8 ***pppuStack_12a0;
  undefined8 uStack_1298;
  undefined1 auStack_1290 [152];
  undefined1 auStack_11f8 [32];
  undefined8 uStack_11d8;
  ulong *puStack_11d0;
  undefined8 *puStack_11c8;
  undefined8 ***pppuStack_11c0;
  code *pcStack_11b8;
  undefined *puStack_11b0;
  undefined *puStack_11a8;
  undefined *puStack_1198;
  undefined8 *puStack_1190;
  undefined *puStack_1188;
  long lStack_1180;
  long lStack_1178;
  undefined1 auStack_1170 [32];
  undefined auStack_1150 [32];
  undefined auStack_1130 [32];
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined1 auStack_10b0 [1648];
  undefined1 *puStack_a40;
  undefined8 ***pppuStack_a38;
  ulong auStack_a30 [4];
  undefined1 auStack_a10 [32];
  undefined8 ***pppuStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  ulong uStack_960;
  ulong uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined1 *puStack_940;
  ulong *puStack_938;
  undefined8 *puStack_930;
  undefined1 *puStack_928;
  ulong *puStack_920;
  undefined *puStack_918;
  undefined1 ***pppuStack_910;
  undefined8 uStack_908;
  undefined1 *puStack_900;
  undefined1 *puStack_8f8;
  undefined8 uStack_8f0;
  undefined *puStack_8e8;
  ulong auStack_8e0 [4];
  undefined1 auStack_8c0 [32];
  undefined1 auStack_8a0 [32];
  undefined1 auStack_880 [32];
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined1 auStack_800 [1656];
  undefined auStack_188 [32];
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x006fd59c();
  func_0x006fe9cc(*(ulong *)(param_3 + 0x48) & 0xffffffffffffff);
  func_0x006fe9c0(*(ulong *)(param_3 + 0x56) & 0xffffffffffffff);
  func_0x006febd8();
  func_0x006febc4();
  uStack_a8 = *param_4 & 0xffffffffffffff;
  uStack_a0 = *(ulong *)((long)param_4 + 7) & 0xffffffffffffff;
  uStack_98 = *(ulong *)((long)param_4 + 0xe) & 0xffffffffffffff;
  uStack_90 = *(ulong *)((long)param_4 + 0x14) >> 8;
  uStack_c8 = param_4[9] & 0xffffffffffffff;
  uStack_c0 = *(ulong *)((long)param_4 + 0x4f) & 0xffffffffffffff;
  uStack_b8 = *(ulong *)((long)param_4 + 0x56) & 0xffffffffffffff;
  uStack_b0 = *(ulong *)((long)param_4 + 0x5c) >> 8;
  uStack_e8 = param_4[0x12] & 0xffffffffffffff;
  uStack_e0 = *(ulong *)((long)param_4 + 0x97) & 0xffffffffffffff;
  uStack_d8 = *(ulong *)((long)param_4 + 0x9e) & 0xffffffffffffff;
  uStack_d0 = *(ulong *)((long)param_4 + 0xa4) >> 8;
  puStack_f8 = &uStack_e8;
  puStack_100 = &uStack_c8;
  puVar10 = auStack_88;
  func_0x006fe15c(auStack_48,auStack_68,puVar10,auStack_48,auStack_68,auStack_88,param_7,&uStack_a8)
  ;
  func_0x006fdad4();
  func_0x006fa7c8(unaff_x19 + 0x48,auStack_68);
  func_0x006fa7c8(unaff_x19 + 0x90,auStack_88);
  func_0x006fd534(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_108 = 0x6f9d6c;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x006fd59c();
  uStack_168 = *(ulong *)(puVar10 + 0x48) & 0xffffffffffffff;
  uStack_160 = *(ulong *)(puVar10 + 0x4f) & 0xffffffffffffff;
  uStack_158 = *(ulong *)(puVar10 + 0x56) & 0xffffffffffffff;
  uStack_150 = *(ulong *)(puVar10 + 0x5c) >> 8;
  func_0x006febd8();
  func_0x006febc4();
  puVar11 = auStack_188;
  puVar9 = &uStack_148;
  puVar5 = &uStack_168;
  FUN_006facb0(&uStack_148,&uStack_168);
  func_0x006fdad4();
  func_0x006fa7c8(unaff_x19 + 0x48,&uStack_168);
  puVar6 = auStack_188;
  func_0x006fa7c8(unaff_x19 + 0x90);
  func_0x006fd534(uStack_128);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcVar4 = FUN_006f9e0c;
  func_0x006fdcd0();
  puVar13 = puVar9;
  ppuStack_140 = &puStack_110;
  pcStack_138 = pcVar4;
  func_0x006fd588();
  FUN_006fb03c(auStack_800,puVar11);
  uVar17 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  uStack_808 = 0;
  uStack_810 = 0;
  uVar19 = 0xdc;
  while (uVar3 = uVar19 == 0xdd, uVar19 < 0xdd) {
    if ((int)uVar17 != 0) {
      func_0x006fe380();
      FUN_006facb0();
    }
    uVar18 = (uint)uVar19;
    if (uVar18 == (uVar18 / 5) * 5) {
      if (uVar19 != 0xdc) {
        func_0x006fd6b0(uVar19 + 4);
      }
      uVar19 = uVar19 - 1;
      if (uVar19 < 0xe0) {
        bVar14 = *(byte *)((long)puVar9 + (uVar19 >> 3)) >> (ulong)(uVar18 - 1 & 7) & 1;
      }
      else {
        bVar14 = 0;
      }
      func_0x006fd9f0(bVar14);
      func_0x006fd9f0();
      func_0x006fe5b0();
      func_0x006feaec();
      FUN_006ef290();
      puVar13 = auStack_8e0;
      FUN_006fb108(uStack_8f0,0x11,auStack_800);
      FUN_006fb174(auStack_880,auStack_8c0);
      puVar11 = puStack_8e8;
      func_0x006fb008(auStack_8c0,auStack_880);
      if ((int)uVar17 == 0) {
        func_0x006fe360(&uStack_860,auStack_8e0);
      }
      else {
        puStack_900 = auStack_8c0;
        puStack_8f8 = auStack_8a0;
        func_0x006fe380();
        func_0x006fe15c();
      }
      uVar17 = 1;
      unaff_x28 = uVar19;
    }
    else {
      uVar19 = uVar19 - 1;
    }
  }
  func_0x006fdc6c();
  func_0x006fa7c8(puVar6 + 0x48,&uStack_840);
  puVar7 = &uStack_820;
  func_0x006fa7c8(puVar6 + 0x90,puVar7);
  func_0x006fd508();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    uStack_948 = 5;
    uStack_908 = 0x6f9fc4;
    lVar16 = 0;
    bVar2 = false;
    puVar12 = puVar11;
    uStack_960 = unaff_x28;
    uStack_958 = uVar19;
    uStack_950 = uVar17;
    puStack_940 = auStack_8a0;
    puStack_938 = auStack_8e0;
    puStack_930 = &uStack_860;
    puStack_928 = auStack_8c0;
    puStack_920 = puVar9;
    puStack_918 = puVar6;
    pppuStack_910 = &ppuStack_140;
    func_0x006fd588();
    uStack_9c8 = 0;
    uStack_9d0 = 0;
    uStack_9b8 = 0;
    uStack_9c0 = 0;
    uStack_9a8 = 0;
    uStack_9b0 = 0;
    uStack_998 = 0;
    uStack_9a0 = 0;
    uStack_988 = 0;
    uStack_990 = 0;
    uStack_978 = 0;
    uStack_980 = 0;
    while( true ) {
      uVar19 = lVar16 + 0x1b;
      uVar3 = uVar19 == 0x1c;
      if (0x1b < uVar19) break;
      if (bVar2) {
        func_0x006fd95c();
        FUN_006facb0();
      }
      func_0x006fd6b0(lVar16 + 0xdf);
      uVar18 = (extraout_w8 & 1) << 3 |
               ((byte)puVar11[lVar16 + 0xa7U >> 3] >> (ulong)((uint)(lVar16 + 0xa7U) & 7) & 1) << 2;
      func_0x006fd6b0(lVar16 + 0x6f,uVar18);
      uVar18 = uVar18 & 0xfffffffc | uVar18 & 1 | (extraout_w8_00 & 1) << 1;
      func_0x006fd6b0(lVar16 + 0x37,uVar18);
      FUN_006fb108(uVar18 & 0xfffffffe | extraout_w8_01 & 1,0x10,&UNK_008378a8,auStack_a30);
      if (bVar2) {
        puStack_a40 = auStack_a10;
        pppuStack_a38 = &pppuStack_9f0;
        func_0x006fd95c();
        func_0x006fe370();
      }
      else {
        func_0x006fe360(&uStack_9d0,auStack_a30);
      }
      uVar18 = (int)lVar16 + 0x1bU & 7;
      puVar13 = auStack_a30;
      puVar12 = &UNK_008372a8;
      FUN_006fb108(((byte)puVar11[lVar16 + 0xc3U >> 3] >> (ulong)uVar18 & 1) << 3 |
                   ((byte)puVar11[lVar16 + 0x8bU >> 3] >> (ulong)uVar18 & 1) << 2 |
                   ((byte)puVar11[lVar16 + 0x53U >> 3] >> (ulong)uVar18 & 1) << 1 |
                   (byte)puVar11[uVar19 >> 3] >> (ulong)uVar18 & 1,0x10);
      bVar2 = true;
      puStack_a40 = auStack_a10;
      pppuStack_a38 = &pppuStack_9f0;
      func_0x006fd95c();
      func_0x006fe370();
      lVar16 = lVar16 + -1;
    }
    func_0x006fdc6c();
    func_0x006fa7c8(puVar7 + 9,&uStack_9b0);
    puVar8 = &uStack_990;
    func_0x006fa7c8(puVar7 + 0x12);
    func_0x006fd508();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    uVar17 = 0x6fa17c;
    func_0x006fdcd0();
    pppuStack_9f0 = &pppuStack_910;
    uStack_9e8 = uVar17;
    func_0x006fd588();
    FUN_006fb03c(auStack_10b0,puVar13);
    bVar2 = false;
    uStack_1108 = 0;
    uStack_1110 = 0;
    uStack_10f8 = 0;
    uStack_1100 = 0;
    uStack_10e8 = 0;
    uStack_10f0 = 0;
    uStack_10d8 = 0;
    uStack_10e0 = 0;
    uStack_10c8 = 0;
    uStack_10d0 = 0;
    uStack_10b8 = 0;
    uStack_10c0 = 0;
    puStack_1188 = auStack_1150;
    puStack_1198 = auStack_1130;
    uVar19 = 0xdc;
    while (uVar3 = uVar19 == 0xdd, uVar19 < 0xdd) {
      if (bVar2) {
        func_0x006fd6c4();
        FUN_006facb0();
      }
      uVar15 = uVar19 >> 3;
      uVar18 = (uint)uVar19;
      if (uVar19 < 0x1c) {
        func_0x006fdf6c(((byte)puVar12[uVar19 + 0xc4 >> 3] >> (ulong)((uint)(uVar19 + 0xc4) & 7) & 1
                        ) << 3);
        func_0x006fdf6c(extraout_w8_02 & 0xfffffff8 | extraout_w8_02 & 3 | (extraout_w9 & 1) << 2);
        func_0x006fdf6c(extraout_w8_03 & 0xfffffffc | extraout_w8_03 & 1 | (extraout_w9_00 & 1) << 1
                       );
        lVar16 = (ulong)(extraout_w8_04 & 0xfffffffe | extraout_w9_01 & 1) * 0x60;
        puStack_11b0 = &UNK_008378c8 + lVar16;
        puStack_11a8 = &UNK_008378e8 + lVar16;
        func_0x006fd6c4();
        func_0x006fe370();
        uVar1 = uVar18 & 7;
        lVar16 = (ulong)(((byte)puVar12[uVar19 + 0xa8 >> 3] >> (ulong)uVar1 & 1) << 3 |
                         ((byte)puVar12[uVar19 + 0x70 >> 3] >> (ulong)uVar1 & 1) << 2 |
                         ((byte)puVar12[uVar19 + 0x38 >> 3] >> (ulong)uVar1 & 1) << 1 |
                        (byte)puVar12[uVar15] >> (ulong)uVar1 & 1) * 0x60;
        puStack_11b0 = &UNK_008372c8 + lVar16;
        puStack_11a8 = &UNK_008372e8 + lVar16;
        func_0x006fd6c4();
        func_0x006fe370();
      }
      if (uVar18 == (uVar18 / 5) * 5) {
        puStack_1190 = puVar8;
        if (uVar19 != 0xdc) {
          func_0x006fd6b0(uVar19 + 4);
        }
        uVar19 = uVar19 - 1;
        if (uVar19 < 0xe0) {
          bVar14 = *(byte *)((long)puVar5 + (uVar19 >> 3)) >> (ulong)(uVar18 - 1 & 7) & 1;
        }
        else {
          bVar14 = 0;
        }
        func_0x006fd9f0(bVar14);
        func_0x006fd9f0();
        func_0x006fe5b0();
        FUN_006ef290(&lStack_1178,&lStack_1180,
                     extraout_x9 |
                     (*(byte *)((long)puVar5 + uVar15) >> (ulong)(uVar18 & 7) & 1) << 1 |
                     extraout_x8);
        func_0x006fe360(auStack_1170,auStack_10b0 + lStack_1180 * 0x60);
        if (lStack_1178 != 0) {
          FUN_006fb174(puStack_1188,puStack_1188);
        }
        if (bVar2) {
          puStack_11b0 = puStack_1188;
          puStack_11a8 = puStack_1198;
          func_0x006fd6c4();
          func_0x006fe15c();
        }
        else {
          func_0x006fe360(&uStack_1110,auStack_1170);
        }
        bVar2 = true;
        puVar8 = puStack_1190;
      }
      else {
        uVar19 = uVar19 - 1;
      }
    }
    func_0x006fdc6c();
    func_0x006fa7c8(puVar8 + 9,&uStack_10f0);
    func_0x006fa7c8(puVar8 + 0x12,&uStack_10d0);
    func_0x006fd508();
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      pcStack_11b8 = FUN_006fa41c;
      puStack_11d0 = puVar5;
      puStack_11c8 = puVar8;
      pppuStack_11c0 = &pppuStack_9f0;
      func_0x006fd59c();
      func_0x006fe9cc(*puVar13 & 0xffffffffffffff);
      func_0x006fe9c0(*(ulong *)((long)puVar13 + 0xe) & 0xffffffffffffff);
      func_0x006fddd4(auStack_1290,auStack_11f8);
      func_0x006fa5a4(auStack_11f8,auStack_1290);
      func_0x006fdad4();
      func_0x006fd534(uStack_11d8);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      puVar9 = auStack_1350;
      uStack_1298 = 0x6fa48c;
      puStack_12b0 = puVar5;
      puStack_12a8 = puVar8;
      pppuStack_12a0 = &pppuStack_11c0;
      func_0x006fd59c();
      func_0x006fa508(auStack_1350,auStack_12d8);
      puVar5 = auStack_12d8;
      func_0x006fa5a4();
      func_0x006fdad4();
      func_0x006fd534(uStack_12b8);
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        *puVar5 = *puVar9 & 0xffffffffffffff;
        puVar5[1] = *(ulong *)((long)puVar9 + 7) & 0xffffffffffffff;
        puVar5[2] = *(ulong *)((long)puVar9 + 0xe) & 0xffffffffffffff;
        puVar5[3] = *(ulong *)((long)puVar9 + 0x14) >> 8;
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 006f9e0c; end: 006fa41b;  */

void FUN_006f9e0c(undefined8 param_1,long param_2,undefined *param_3,ulong *param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  byte bVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  ulong extraout_x8;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  ulong extraout_x9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong unaff_x28;
  undefined8 in_stack_00000050;
  ulong auStack_11c0 [15];
  ulong auStack_1148 [4];
  undefined8 uStack_1128;
  long lStack_1120;
  undefined8 *puStack_1118;
  undefined8 ***pppuStack_1110;
  undefined8 uStack_1108;
  undefined1 auStack_1100 [152];
  undefined1 auStack_1068 [32];
  undefined8 uStack_1048;
  long lStack_1040;
  undefined8 *puStack_1038;
  undefined8 ***pppuStack_1030;
  code *pcStack_1028;
  undefined *puStack_1020;
  undefined *puStack_1018;
  undefined *puStack_1008;
  undefined8 *puStack_1000;
  undefined *puStack_ff8;
  long lStack_ff0;
  long lStack_fe8;
  undefined1 auStack_fe0 [32];
  undefined auStack_fc0 [32];
  undefined auStack_fa0 [32];
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined1 auStack_f20 [1648];
  undefined1 *puStack_8b0;
  undefined8 ***pppuStack_8a8;
  ulong auStack_8a0 [4];
  undefined1 auStack_880 [32];
  undefined8 **ppuStack_860;
  undefined8 uStack_858;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined1 *puStack_7b0;
  ulong *puStack_7a8;
  undefined8 *puStack_7a0;
  undefined1 *puStack_798;
  ulong *puStack_790;
  long lStack_788;
  undefined8 *puStack_780;
  undefined8 uStack_778;
  undefined1 *puStack_770;
  undefined1 *puStack_768;
  undefined8 uStack_760;
  undefined *puStack_758;
  ulong auStack_750 [4];
  undefined1 auStack_730 [32];
  undefined1 auStack_710 [32];
  undefined1 auStack_6f0 [32];
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined1 auStack_670 [1648];
  
  func_0x006fdcd0();
  puVar7 = param_4;
  func_0x006fd588();
  FUN_006fb03c(auStack_670,param_3);
  uVar12 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  uStack_6b8 = 0;
  uStack_6c0 = 0;
  uStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_698 = 0;
  uStack_6a0 = 0;
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_678 = 0;
  uStack_680 = 0;
  uVar14 = 0xdc;
  while (uVar3 = uVar14 == 0xdd, uVar14 < 0xdd) {
    if ((int)uVar12 != 0) {
      func_0x006fe380();
      FUN_006facb0();
    }
    uVar13 = (uint)uVar14;
    if (uVar13 == (uVar13 / 5) * 5) {
      if (uVar14 != 0xdc) {
        func_0x006fd6b0(uVar14 + 4);
      }
      uVar14 = uVar14 - 1;
      if (uVar14 < 0xe0) {
        bVar9 = *(byte *)((long)param_4 + (uVar14 >> 3)) >> (ulong)(uVar13 - 1 & 7) & 1;
      }
      else {
        bVar9 = 0;
      }
      func_0x006fd9f0(bVar9);
      func_0x006fd9f0();
      func_0x006fe5b0();
      func_0x006feaec();
      FUN_006ef290();
      puVar7 = auStack_750;
      FUN_006fb108(uStack_760,0x11,auStack_670);
      FUN_006fb174(auStack_6f0,auStack_730);
      param_3 = puStack_758;
      func_0x006fb008(auStack_730,auStack_6f0);
      if ((int)uVar12 == 0) {
        func_0x006fe360(&uStack_6d0,auStack_750);
      }
      else {
        puStack_770 = auStack_730;
        puStack_768 = auStack_710;
        func_0x006fe380();
        func_0x006fe15c();
      }
      uVar12 = 1;
      unaff_x28 = uVar14;
    }
    else {
      uVar14 = uVar14 - 1;
    }
  }
  func_0x006fdc6c();
  func_0x006fa7c8(param_2 + 0x48,&uStack_6b0);
  puVar5 = &uStack_690;
  func_0x006fa7c8(param_2 + 0x90,puVar5);
  func_0x006fd508();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    uStack_7b8 = 5;
    uStack_778 = 0x6f9fc4;
    lVar11 = 0;
    bVar2 = false;
    puVar8 = param_3;
    uStack_7d0 = unaff_x28;
    uStack_7c8 = uVar14;
    uStack_7c0 = uVar12;
    puStack_7b0 = auStack_710;
    puStack_7a8 = auStack_750;
    puStack_7a0 = &uStack_6d0;
    puStack_798 = auStack_730;
    puStack_790 = param_4;
    lStack_788 = param_2;
    puStack_780 = &stack0x00000050;
    func_0x006fd588();
    uStack_838 = 0;
    uStack_840 = 0;
    uStack_828 = 0;
    uStack_830 = 0;
    uStack_818 = 0;
    uStack_820 = 0;
    uStack_808 = 0;
    uStack_810 = 0;
    uStack_7f8 = 0;
    uStack_800 = 0;
    uStack_7e8 = 0;
    uStack_7f0 = 0;
    while( true ) {
      uVar14 = lVar11 + 0x1b;
      uVar3 = uVar14 == 0x1c;
      if (0x1b < uVar14) break;
      if (bVar2) {
        func_0x006fd95c();
        FUN_006facb0();
      }
      func_0x006fd6b0(lVar11 + 0xdf);
      uVar13 = (extraout_w8 & 1) << 3 |
               ((byte)param_3[lVar11 + 0xa7U >> 3] >> (ulong)((uint)(lVar11 + 0xa7U) & 7) & 1) << 2;
      func_0x006fd6b0(lVar11 + 0x6f,uVar13);
      uVar13 = uVar13 & 0xfffffffc | uVar13 & 1 | (extraout_w8_00 & 1) << 1;
      func_0x006fd6b0(lVar11 + 0x37,uVar13);
      FUN_006fb108(uVar13 & 0xfffffffe | extraout_w8_01 & 1,0x10,&UNK_008378a8,auStack_8a0);
      if (bVar2) {
        puStack_8b0 = auStack_880;
        pppuStack_8a8 = &ppuStack_860;
        func_0x006fd95c();
        func_0x006fe370();
      }
      else {
        func_0x006fe360(&uStack_840,auStack_8a0);
      }
      uVar13 = (int)lVar11 + 0x1bU & 7;
      puVar7 = auStack_8a0;
      puVar8 = &UNK_008372a8;
      FUN_006fb108(((byte)param_3[lVar11 + 0xc3U >> 3] >> (ulong)uVar13 & 1) << 3 |
                   ((byte)param_3[lVar11 + 0x8bU >> 3] >> (ulong)uVar13 & 1) << 2 |
                   ((byte)param_3[lVar11 + 0x53U >> 3] >> (ulong)uVar13 & 1) << 1 |
                   (byte)param_3[uVar14 >> 3] >> (ulong)uVar13 & 1,0x10);
      bVar2 = true;
      puStack_8b0 = auStack_880;
      pppuStack_8a8 = &ppuStack_860;
      func_0x006fd95c();
      func_0x006fe370();
      lVar11 = lVar11 + -1;
    }
    func_0x006fdc6c();
    func_0x006fa7c8(puVar5 + 9,&uStack_820);
    puVar6 = &uStack_800;
    func_0x006fa7c8(puVar5 + 0x12);
    func_0x006fd508();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    uVar12 = 0x6fa17c;
    func_0x006fdcd0();
    ppuStack_860 = &puStack_780;
    uStack_858 = uVar12;
    func_0x006fd588();
    FUN_006fb03c(auStack_f20,puVar7);
    bVar2 = false;
    uStack_f78 = 0;
    uStack_f80 = 0;
    uStack_f68 = 0;
    uStack_f70 = 0;
    uStack_f58 = 0;
    uStack_f60 = 0;
    uStack_f48 = 0;
    uStack_f50 = 0;
    uStack_f38 = 0;
    uStack_f40 = 0;
    uStack_f28 = 0;
    uStack_f30 = 0;
    puStack_ff8 = auStack_fc0;
    puStack_1008 = auStack_fa0;
    uVar14 = 0xdc;
    while (uVar3 = uVar14 == 0xdd, uVar14 < 0xdd) {
      if (bVar2) {
        func_0x006fd6c4();
        FUN_006facb0();
      }
      uVar10 = uVar14 >> 3;
      uVar13 = (uint)uVar14;
      if (uVar14 < 0x1c) {
        func_0x006fdf6c(((byte)puVar8[uVar14 + 0xc4 >> 3] >> (ulong)((uint)(uVar14 + 0xc4) & 7) & 1)
                        << 3);
        func_0x006fdf6c(extraout_w8_02 & 0xfffffff8 | extraout_w8_02 & 3 | (extraout_w9 & 1) << 2);
        func_0x006fdf6c(extraout_w8_03 & 0xfffffffc | extraout_w8_03 & 1 | (extraout_w9_00 & 1) << 1
                       );
        lVar11 = (ulong)(extraout_w8_04 & 0xfffffffe | extraout_w9_01 & 1) * 0x60;
        puStack_1020 = &UNK_008378c8 + lVar11;
        puStack_1018 = &UNK_008378e8 + lVar11;
        func_0x006fd6c4();
        func_0x006fe370();
        uVar1 = uVar13 & 7;
        lVar11 = (ulong)(((byte)puVar8[uVar14 + 0xa8 >> 3] >> (ulong)uVar1 & 1) << 3 |
                         ((byte)puVar8[uVar14 + 0x70 >> 3] >> (ulong)uVar1 & 1) << 2 |
                         ((byte)puVar8[uVar14 + 0x38 >> 3] >> (ulong)uVar1 & 1) << 1 |
                        (byte)puVar8[uVar10] >> (ulong)uVar1 & 1) * 0x60;
        puStack_1020 = &UNK_008372c8 + lVar11;
        puStack_1018 = &UNK_008372e8 + lVar11;
        func_0x006fd6c4();
        func_0x006fe370();
      }
      if (uVar13 == (uVar13 / 5) * 5) {
        puStack_1000 = puVar6;
        if (uVar14 != 0xdc) {
          func_0x006fd6b0(uVar14 + 4);
        }
        uVar14 = uVar14 - 1;
        if (uVar14 < 0xe0) {
          bVar9 = *(byte *)(param_5 + (uVar14 >> 3)) >> (ulong)(uVar13 - 1 & 7) & 1;
        }
        else {
          bVar9 = 0;
        }
        func_0x006fd9f0(bVar9);
        func_0x006fd9f0();
        func_0x006fe5b0();
        FUN_006ef290(&lStack_fe8,&lStack_ff0,
                     extraout_x9 | (*(byte *)(param_5 + uVar10) >> (ulong)(uVar13 & 7) & 1) << 1 |
                     extraout_x8);
        func_0x006fe360(auStack_fe0,auStack_f20 + lStack_ff0 * 0x60);
        if (lStack_fe8 != 0) {
          FUN_006fb174(puStack_ff8,puStack_ff8);
        }
        if (bVar2) {
          puStack_1020 = puStack_ff8;
          puStack_1018 = puStack_1008;
          func_0x006fd6c4();
          func_0x006fe15c();
        }
        else {
          func_0x006fe360(&uStack_f80,auStack_fe0);
        }
        bVar2 = true;
        puVar6 = puStack_1000;
      }
      else {
        uVar14 = uVar14 - 1;
      }
    }
    func_0x006fdc6c();
    func_0x006fa7c8(puVar6 + 9,&uStack_f60);
    func_0x006fa7c8(puVar6 + 0x12,&uStack_f40);
    func_0x006fd508();
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      pcStack_1028 = FUN_006fa41c;
      lStack_1040 = param_5;
      puStack_1038 = puVar6;
      pppuStack_1030 = &ppuStack_860;
      func_0x006fd59c();
      func_0x006fe9cc(*puVar7 & 0xffffffffffffff);
      func_0x006fe9c0(*(ulong *)((long)puVar7 + 0xe) & 0xffffffffffffff);
      func_0x006fddd4(auStack_1100,auStack_1068);
      func_0x006fa5a4(auStack_1068,auStack_1100);
      func_0x006fdad4();
      func_0x006fd534(uStack_1048);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      puVar7 = auStack_11c0;
      uStack_1108 = 0x6fa48c;
      lStack_1120 = param_5;
      puStack_1118 = puVar6;
      pppuStack_1110 = &pppuStack_1030;
      func_0x006fd59c();
      func_0x006fa508(auStack_11c0,auStack_1148);
      puVar4 = auStack_1148;
      func_0x006fa5a4();
      func_0x006fdad4();
      func_0x006fd534(uStack_1128);
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        *puVar4 = *puVar7 & 0xffffffffffffff;
        puVar4[1] = *(ulong *)((long)puVar7 + 7) & 0xffffffffffffff;
        puVar4[2] = *(ulong *)((long)puVar7 + 0xe) & 0xffffffffffffff;
        puVar4[3] = *(ulong *)((long)puVar7 + 0x14) >> 8;
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 006fa41c; end: 006fa4d3;  */

void FUN_006fa41c(void)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong auStack_1a0 [15];
  ulong auStack_128 [4];
  undefined8 uStack_108;
  undefined1 auStack_e0 [152];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  func_0x006fd59c();
  func_0x006fe9cc(*in_x3 & 0xffffffffffffff);
  func_0x006fe9c0(*(ulong *)((long)in_x3 + 0xe) & 0xffffffffffffff);
  func_0x006fddd4(auStack_e0,auStack_48);
  func_0x006fa5a4(auStack_48,auStack_e0);
  func_0x006fdad4();
  func_0x006fd534(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = auStack_1a0;
  func_0x006fd59c();
  func_0x006fa508(auStack_1a0,auStack_128);
  puVar1 = auStack_128;
  func_0x006fa5a4();
  func_0x006fdad4();
  func_0x006fd534(uStack_108);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *puVar1 = *puVar2 & 0xffffffffffffff;
  puVar1[1] = *(ulong *)((long)puVar2 + 7) & 0xffffffffffffff;
  puVar1[2] = *(ulong *)((long)puVar2 + 0xe) & 0xffffffffffffff;
  puVar1[3] = *(ulong *)((long)puVar2 + 0x14) >> 8;
  return;
}



/* Entry: 006fa4d4; end: 006fa87f;  */

void FUN_006fa4d4(ulong *param_1,ulong *param_2)

{
  *param_1 = *param_2 & 0xffffffffffffff;
  param_1[1] = *(ulong *)((long)param_2 + 7) & 0xffffffffffffff;
  param_1[2] = *(ulong *)((long)param_2 + 0xe) & 0xffffffffffffff;
  param_1[3] = *(ulong *)((long)param_2 + 0x14) >> 8;
  return;
}



/* Entry: 006fa880; end: 006fabd3;  */

void FUN_006fa880(long *param_1,ulong *param_2,ulong *param_3,ulong *param_4,long *param_5,
                 ulong *param_6,int param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  int iVar23;
  ulong uVar24;
  undefined8 in_stack_00000060;
  ulong *in_stack_00000068;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  ulong *puStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_170 [32];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined1 auStack_70 [32];
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x006fdcd0();
  iVar23 = param_7;
  func_0x006fd588();
  if (iVar23 == 0) {
    func_0x006fa508(&lStack_180,in_stack_00000068);
    func_0x006fdb38(&uStack_50);
    func_0x006fa6d0(&lStack_180,&uStack_50,in_stack_00000068);
    func_0x006fdb38(&lStack_90);
    func_0x006fa6d0(&lStack_1f0,&lStack_90,param_5);
    func_0x006fd88c(&lStack_90);
    func_0x006fa6d0(&lStack_1f0,&uStack_50,param_4);
    func_0x006fd88c(&uStack_50);
  }
  else {
    lStack_88 = param_5[1];
    lStack_90 = *param_5;
    lStack_78 = param_5[3];
    uStack_80 = param_5[2];
    uStack_48 = param_4[1];
    uStack_50 = *param_4;
    uStack_38 = param_4[3];
    uStack_40 = param_4[2];
  }
  func_0x006fa508(&lStack_180,param_6);
  func_0x006fdb38(&uStack_30);
  func_0x006fa6d0(&lStack_180,&uStack_30,param_6);
  func_0x006fdb38(auStack_70);
  func_0x006fa6d0(&lStack_180,auStack_70,in_stack_00000060);
  FUN_006fabd4(&lStack_180,&lStack_90);
  func_0x006fdb38(auStack_70);
  func_0x006fa6d0(&lStack_180,&uStack_30,param_8);
  puVar22 = &uStack_50;
  FUN_006fabd4(&lStack_180);
  func_0x006fdb38(&uStack_30);
  uVar18 = (uint)&uStack_30;
  func_0x006fac4c();
  uVar19 = (uint)auStack_70;
  func_0x006fac4c();
  puVar20 = param_6;
  func_0x006fac4c();
  puVar21 = in_stack_00000068;
  func_0x006fac4c();
  uVar17 = ((ulong)(uVar19 & uVar18 & ((uint)puVar20 ^ 0xffffffff)) & ((ulong)puVar21 ^ 1)) == 0;
  if ((bool)uVar17) {
    if (param_7 == 0) {
      func_0x006fa6d0(&lStack_180,param_6,in_stack_00000068);
      func_0x006fdb38(&uStack_b0);
    }
    else {
      uStack_a8 = param_6[1];
      uStack_b0 = *param_6;
      uStack_98 = param_6[3];
      uStack_a0 = param_6[2];
    }
    func_0x006fe1c8();
    func_0x006fdb38(&uStack_110);
    uStack_a8 = uStack_28;
    uStack_b0 = uStack_30;
    uStack_98 = uStack_18;
    uStack_a0 = uStack_20;
    func_0x006fa508(&lStack_180,&uStack_30);
    func_0x006fdb38(&uStack_30);
    func_0x006fe1c8();
    func_0x006fdb38(&uStack_b0);
    func_0x006fa6d0(&lStack_180,&uStack_50,&uStack_30);
    func_0x006fdb38(&uStack_50);
    func_0x006fa6d0(&lStack_180,&lStack_90,&uStack_b0);
    func_0x006fa508(&lStack_1f0,auStack_70);
    func_0x006fe980();
    uVar7 = uStack_38;
    uVar6 = uStack_40;
    uVar1 = uStack_48;
    uVar24 = uStack_50;
    uStack_b0 = uStack_50 << 1;
    uStack_a8 = uStack_48 << 1;
    uStack_a0 = uStack_40 << 1;
    uStack_98 = uStack_38 << 1;
    func_0x006fe980();
    func_0x006fd88c(&lStack_d0);
    uStack_50 = (uVar24 - lStack_d0) + 0x400000000000004;
    uStack_48 = (uVar1 - lStack_c8) + 0x3fffbfffffffffc;
    uStack_40 = (uVar6 - lStack_c0) + 0x3fffffffffffffc;
    uStack_38 = (uVar7 - lStack_b8) + 0x3fffffffffffffc;
    func_0x006fa6d0(&lStack_1f0,auStack_70,&uStack_50);
    FUN_006faf30(&lStack_1f0,&lStack_180);
    func_0x006fd88c(&uStack_f0);
    func_0x006fe898(&lStack_d0,param_8);
    func_0x006fe8ec(&lStack_d0,param_4);
    func_0x006fe898(&uStack_f0,in_stack_00000060);
    func_0x006fe8ec(&uStack_f0,param_5);
    func_0x006fe898(&uStack_110,in_stack_00000068);
    puVar21 = &uStack_110;
    func_0x006fe8ec();
    param_1[1] = lStack_c8;
    *param_1 = lStack_d0;
    param_1[3] = lStack_b8;
    param_1[2] = lStack_c0;
    param_2[1] = uStack_e8;
    *param_2 = uStack_f0;
    param_2[3] = uStack_d8;
    param_2[2] = uStack_e0;
    param_3[1] = uStack_108;
    *param_3 = uStack_110;
    param_3[3] = uStack_f8;
    param_3[2] = uStack_100;
    func_0x006fd508();
    puVar22 = param_6;
    if (!(bool)uVar17) goto LAB_006fabd0;
  }
  else {
    func_0x006fd508();
    if (!(bool)uVar17) {
LAB_006fabd0:
      ___stack_chk_fail();
      uVar24 = *puVar21;
      uVar1 = *puVar22;
      uVar6 = puVar22[1];
      uVar7 = uVar24 - uVar1;
      *puVar21 = uVar7 + 0x100;
      puVar21[1] = (puVar21[1] - (ulong)(uVar24 < uVar1)) + 1 + (ulong)(0xfffffffffffffeff < uVar7);
      uVar1 = puVar21[2] - uVar6;
      uVar24 = puVar21[3] - (ulong)(puVar21[2] < uVar6);
      if (0x10000000000ff < uVar1) {
        uVar24 = uVar24 + 1;
      }
      puVar21[2] = uVar1 + 0xfffeffffffffff00;
      puVar21[3] = uVar24;
      uVar1 = puVar22[3];
      uVar6 = puVar21[4] - puVar22[2];
      uVar24 = puVar21[5] - (ulong)(puVar21[4] < puVar22[2]);
      if (0xff < uVar6) {
        uVar24 = uVar24 + 1;
      }
      puVar21[4] = uVar6 - 0x100;
      puVar21[5] = uVar24;
      uVar6 = puVar21[6] - uVar1;
      uVar24 = puVar21[7] - (ulong)(puVar21[6] < uVar1);
      if (0xff < uVar6) {
        uVar24 = uVar24 + 1;
      }
      puVar21[6] = uVar6 - 0x100;
      puVar21[7] = uVar24;
      return;
    }
    func_0x006fdca0();
    func_0x006fdcd0();
    puStack_1c8 = param_6;
    puStack_1c0 = param_3;
    func_0x006fea3c();
    plStack_1d0 = param_1;
    puStack_1b8 = param_2;
    func_0x006fd588();
    uVar24 = *param_4;
    uVar6 = param_4[1];
    uVar1 = param_4[2];
    uVar7 = param_4[3];
    func_0x006fa508(&uStack_80,param_6);
    func_0x006fe174(&uStack_110);
    func_0x006fa508(&uStack_80,param_5);
    func_0x006fe174(&lStack_130);
    func_0x006fa6d0(&uStack_80,param_8,&lStack_130);
    func_0x006fe174(&lStack_150);
    lStack_190 = (uVar24 - uStack_110) + 0x400000000000004;
    lStack_188 = (uVar6 - uStack_108) + 0x3fffbfffffffffc;
    lStack_180 = (uVar1 - uStack_100) + 0x3fffffffffffffc;
    lStack_178 = (uVar7 - uStack_f8) + 0x3fffffffffffffc;
    lStack_1b0 = (uStack_110 + uVar24) * 3;
    lStack_1a8 = (uStack_108 + uVar6) * 3;
    lStack_1a0 = (uStack_100 + uVar1) * 3;
    lStack_198 = (uStack_f8 + uVar7) * 3;
    func_0x006fa6d0(&uStack_80,&lStack_190,&lStack_1b0);
    func_0x006fe174(auStack_170);
    func_0x006fa508(&uStack_80,auStack_170);
    lStack_1e8 = lStack_138;
    lStack_1f0 = lStack_140;
    lStack_1d8 = lStack_148;
    lStack_1e0 = lStack_150;
    lStack_190 = lStack_150 << 3;
    lStack_188 = lStack_148 << 3;
    lStack_180 = lStack_140 << 3;
    lStack_178 = lStack_138 << 3;
    FUN_006fabd4(&uStack_80,&lStack_190);
    plVar16 = plStack_1d0;
    func_0x006fa5a4(plStack_1d0,&uStack_80);
    lStack_190 = *puStack_1c8 + *param_5;
    lStack_188 = puStack_1c8[1] + param_5[1];
    lStack_180 = puStack_1c8[2] + param_5[2];
    lStack_178 = puStack_1c8[3] + param_5[3];
    uStack_110 = lStack_130 + uStack_110;
    uStack_108 = lStack_128 + uStack_108;
    uStack_100 = lStack_120 + uStack_100;
    uStack_f8 = lStack_118 + uStack_f8;
    func_0x006fa508(&uStack_80,&lStack_190);
    FUN_006fabd4(&uStack_80,&uStack_110);
    func_0x006fa5a4(puStack_1c0,&uStack_80);
    lStack_150 = (lStack_1e0 * 4 - *plVar16) + 0x400000000000004;
    lStack_148 = (lStack_1d8 * 4 - plVar16[1]) + 0x3fffbfffffffffc;
    lStack_140 = (lStack_1f0 * 4 - plVar16[2]) + 0x3fffffffffffffc;
    lStack_138 = (lStack_1e8 * 4 - plVar16[3]) + 0x3fffffffffffffc;
    func_0x006fa6d0(&uStack_80,auStack_170,&lStack_150);
    func_0x006fa508(&uStack_f0,&lStack_130);
    func_0x006fe3c0(uStack_f0);
    func_0x006fe3c0(uStack_e0);
    func_0x006fe3c0(lStack_d0);
    func_0x006fe3c0(lStack_c0);
    uStack_a8 = uStack_b0 >> 0x3d | uStack_a8 << 3;
    uStack_b0 = uStack_b0 << 3;
    func_0x006fe3c0(uStack_a0);
    func_0x006fe3c0(lStack_90);
    FUN_006faf30(&uStack_80,&uStack_f0);
    puVar20 = &uStack_80;
    puVar21 = puStack_1b8;
    func_0x006fa5a4();
    func_0x006fd508();
    if (!(bool)uVar17) {
      ___stack_chk_fail();
      uVar24 = *puVar21;
      uVar8 = puVar21[1];
      puVar21[1] = uVar8 + 0x100000000000000;
      uVar1 = puVar21[2];
      uVar9 = puVar21[3];
      puVar21[3] = uVar9 + 0xffffffffffffff;
      uVar6 = puVar21[4];
      uVar10 = puVar21[5];
      puVar21[5] = uVar10 + 0xffffffffffffff;
      uVar7 = puVar21[6];
      uVar11 = puVar21[7];
      puVar21[7] = uVar11 + 0x100000000000000;
      uVar2 = puVar21[8];
      uVar12 = puVar21[9];
      puVar21[9] = uVar12 + 0xfffeffffffffff;
      uVar3 = puVar21[10];
      uVar13 = puVar21[0xb];
      puVar21[0xb] = uVar13 + 0xffffffffffffff;
      uVar4 = puVar21[0xc];
      uVar14 = puVar21[0xd];
      puVar21[0xd] = uVar14 + 0xffffffffffffff;
      uVar5 = *puVar20;
      uVar15 = puVar20[1];
      *puVar21 = uVar24 - uVar5;
      puVar21[1] = (uVar8 + 0x100000000000000) - (uVar15 + (uVar24 < uVar5));
      uVar24 = puVar20[2];
      uVar5 = puVar20[3];
      puVar21[2] = uVar1 - uVar24;
      puVar21[3] = (uVar9 + 0xffffffffffffff) - (uVar5 + (uVar1 < uVar24));
      uVar24 = puVar20[4];
      uVar1 = puVar20[5];
      puVar21[4] = uVar6 - uVar24;
      puVar21[5] = (uVar10 + 0xffffffffffffff) - (uVar1 + (uVar6 < uVar24));
      uVar24 = puVar20[6];
      uVar1 = puVar20[7];
      puVar21[6] = uVar7 - uVar24;
      puVar21[7] = (uVar11 + 0x100000000000000) - (uVar1 + (uVar7 < uVar24));
      uVar24 = puVar20[8];
      uVar1 = puVar20[9];
      puVar21[8] = uVar2 - uVar24;
      puVar21[9] = (uVar12 + 0xfffeffffffffff) - (uVar1 + (uVar2 < uVar24));
      uVar24 = puVar20[10];
      uVar1 = puVar20[0xb];
      puVar21[10] = uVar3 - uVar24;
      puVar21[0xb] = (uVar13 + 0xffffffffffffff) - (uVar1 + (uVar3 < uVar24));
      uVar24 = puVar20[0xc];
      uVar1 = puVar20[0xd];
      puVar21[0xc] = uVar4 - uVar24;
      puVar21[0xd] = (uVar14 + 0xffffffffffffff) - (uVar1 + (uVar4 < uVar24));
      return;
    }
  }
  return;
}



/* Entry: 006fabd4; end: 006facaf;  */

void FUN_006fabd4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar4 - uVar1;
  *param_1 = uVar3 + 0x100;
  param_1[1] = (param_1[1] - (ulong)(uVar4 < uVar1)) + 1 + (ulong)(0xfffffffffffffeff < uVar3);
  uVar1 = param_1[2] - uVar2;
  uVar4 = param_1[3] - (ulong)(param_1[2] < uVar2);
  if (0x10000000000ff < uVar1) {
    uVar4 = uVar4 + 1;
  }
  param_1[2] = uVar1 + 0xfffeffffffffff00;
  param_1[3] = uVar4;
  uVar1 = param_2[3];
  uVar2 = param_1[4] - param_2[2];
  uVar4 = param_1[5] - (ulong)(param_1[4] < param_2[2]);
  if (0xff < uVar2) {
    uVar4 = uVar4 + 1;
  }
  param_1[4] = uVar2 - 0x100;
  param_1[5] = uVar4;
  uVar2 = param_1[6] - uVar1;
  uVar4 = param_1[7] - (ulong)(param_1[6] < uVar1);
  if (0xff < uVar2) {
    uVar4 = uVar4 + 1;
  }
  param_1[6] = uVar2 - 0x100;
  param_1[7] = uVar4;
  return;
}



/* Entry: 006facb0; end: 006faf2f;  */

void FUN_006facb0(long *param_1,ulong *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                 long *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 in_ZR;
  ulong *puVar21;
  long *plVar22;
  long *unaff_x23;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 auStack_170 [32];
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  ulong auStack_80 [16];
  
  func_0x006fdcd0();
  plVar22 = param_6;
  func_0x006fea3c();
  func_0x006fd588();
  lVar1 = *param_4;
  lVar11 = param_4[1];
  lVar2 = param_4[2];
  lVar12 = param_4[3];
  func_0x006fa508(auStack_80,plVar22);
  func_0x006fe174(&lStack_110);
  func_0x006fa508(auStack_80);
  func_0x006fe174(&lStack_130);
  func_0x006fa6d0(auStack_80);
  func_0x006fe174(&lStack_150);
  lStack_190 = (lVar1 - lStack_110) + 0x400000000000004;
  lStack_188 = (lVar11 - lStack_108) + 0x3fffbfffffffffc;
  lStack_180 = (lVar2 - lStack_100) + 0x3fffffffffffffc;
  lStack_178 = (lVar12 - lStack_f8) + 0x3fffffffffffffc;
  lStack_1b0 = (lStack_110 + lVar1) * 3;
  lStack_1a8 = (lStack_108 + lVar11) * 3;
  lStack_1a0 = (lStack_100 + lVar2) * 3;
  lStack_198 = (lStack_f8 + lVar12) * 3;
  func_0x006fa6d0(auStack_80,&lStack_190,&lStack_1b0);
  func_0x006fe174(auStack_170);
  func_0x006fa508(auStack_80,auStack_170);
  lStack_190 = lStack_150 << 3;
  lStack_188 = lStack_148 << 3;
  lStack_180 = lStack_140 << 3;
  lStack_178 = lStack_138 << 3;
  FUN_006fabd4(auStack_80,&lStack_190);
  func_0x006fa5a4(param_1,auStack_80);
  lStack_190 = *param_6 + *unaff_x23;
  lStack_188 = param_6[1] + unaff_x23[1];
  lStack_180 = param_6[2] + unaff_x23[2];
  lStack_178 = param_6[3] + unaff_x23[3];
  lStack_110 = lStack_130 + lStack_110;
  lStack_108 = lStack_128 + lStack_108;
  lStack_100 = lStack_120 + lStack_100;
  lStack_f8 = lStack_118 + lStack_f8;
  func_0x006fa508(auStack_80,&lStack_190);
  FUN_006fabd4(auStack_80,&lStack_110);
  func_0x006fa5a4(param_3,auStack_80);
  lStack_150 = (lStack_150 * 4 - *param_1) + 0x400000000000004;
  lStack_148 = (lStack_148 * 4 - param_1[1]) + 0x3fffbfffffffffc;
  lStack_140 = (lStack_140 * 4 - param_1[2]) + 0x3fffffffffffffc;
  lStack_138 = (lStack_138 * 4 - param_1[3]) + 0x3fffffffffffffc;
  func_0x006fa6d0(auStack_80,auStack_170,&lStack_150);
  func_0x006fa508(auStack_f0,&lStack_130);
  func_0x006fe3c0(auStack_f0[0]);
  func_0x006fe3c0(uStack_e0);
  func_0x006fe3c0(uStack_d0);
  func_0x006fe3c0(uStack_c0);
  uStack_a8 = uStack_b0 >> 0x3d | uStack_a8 << 3;
  uStack_b0 = uStack_b0 << 3;
  func_0x006fe3c0(uStack_a0);
  func_0x006fe3c0(uStack_90);
  FUN_006faf30(auStack_80,auStack_f0);
  puVar21 = auStack_80;
  func_0x006fa5a4();
  func_0x006fd508();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *param_2;
  uVar13 = param_2[1];
  param_2[1] = uVar13 + 0x100000000000000;
  uVar4 = param_2[2];
  uVar14 = param_2[3];
  param_2[3] = uVar14 + 0xffffffffffffff;
  uVar5 = param_2[4];
  uVar15 = param_2[5];
  param_2[5] = uVar15 + 0xffffffffffffff;
  uVar6 = param_2[6];
  uVar16 = param_2[7];
  param_2[7] = uVar16 + 0x100000000000000;
  uVar7 = param_2[8];
  uVar17 = param_2[9];
  param_2[9] = uVar17 + 0xfffeffffffffff;
  uVar8 = param_2[10];
  uVar18 = param_2[0xb];
  param_2[0xb] = uVar18 + 0xffffffffffffff;
  uVar9 = param_2[0xc];
  uVar19 = param_2[0xd];
  param_2[0xd] = uVar19 + 0xffffffffffffff;
  uVar10 = *puVar21;
  uVar20 = puVar21[1];
  *param_2 = uVar3 - uVar10;
  param_2[1] = (uVar13 + 0x100000000000000) - (uVar20 + (uVar3 < uVar10));
  uVar3 = puVar21[2];
  uVar10 = puVar21[3];
  param_2[2] = uVar4 - uVar3;
  param_2[3] = (uVar14 + 0xffffffffffffff) - (uVar10 + (uVar4 < uVar3));
  uVar3 = puVar21[4];
  uVar4 = puVar21[5];
  param_2[4] = uVar5 - uVar3;
  param_2[5] = (uVar15 + 0xffffffffffffff) - (uVar4 + (uVar5 < uVar3));
  uVar3 = puVar21[6];
  uVar4 = puVar21[7];
  param_2[6] = uVar6 - uVar3;
  param_2[7] = (uVar16 + 0x100000000000000) - (uVar4 + (uVar6 < uVar3));
  uVar3 = puVar21[8];
  uVar4 = puVar21[9];
  param_2[8] = uVar7 - uVar3;
  param_2[9] = (uVar17 + 0xfffeffffffffff) - (uVar4 + (uVar7 < uVar3));
  uVar3 = puVar21[10];
  uVar4 = puVar21[0xb];
  param_2[10] = uVar8 - uVar3;
  param_2[0xb] = (uVar18 + 0xffffffffffffff) - (uVar4 + (uVar8 < uVar3));
  uVar3 = puVar21[0xc];
  uVar4 = puVar21[0xd];
  param_2[0xc] = uVar9 - uVar3;
  param_2[0xd] = (uVar19 + 0xffffffffffffff) - (uVar4 + (uVar9 < uVar3));
  return;
}



/* Entry: 006faf30; end: 006fb03b;  */

void FUN_006faf30(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar1 = *param_1;
  uVar9 = param_1[1];
  param_1[1] = uVar9 + 0x100000000000000;
  uVar2 = param_1[2];
  uVar10 = param_1[3];
  param_1[3] = uVar10 + 0xffffffffffffff;
  uVar3 = param_1[4];
  uVar11 = param_1[5];
  param_1[5] = uVar11 + 0xffffffffffffff;
  uVar4 = param_1[6];
  uVar12 = param_1[7];
  param_1[7] = uVar12 + 0x100000000000000;
  uVar5 = param_1[8];
  uVar13 = param_1[9];
  param_1[9] = uVar13 + 0xfffeffffffffff;
  uVar6 = param_1[10];
  uVar14 = param_1[0xb];
  param_1[0xb] = uVar14 + 0xffffffffffffff;
  uVar7 = param_1[0xc];
  uVar15 = param_1[0xd];
  param_1[0xd] = uVar15 + 0xffffffffffffff;
  uVar8 = *param_2;
  uVar16 = param_2[1];
  *param_1 = uVar1 - uVar8;
  param_1[1] = (uVar9 + 0x100000000000000) - (uVar16 + (uVar1 < uVar8));
  uVar1 = param_2[2];
  uVar8 = param_2[3];
  param_1[2] = uVar2 - uVar1;
  param_1[3] = (uVar10 + 0xffffffffffffff) - (uVar8 + (uVar2 < uVar1));
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar3 - uVar1;
  param_1[5] = (uVar11 + 0xffffffffffffff) - (uVar2 + (uVar3 < uVar1));
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar4 - uVar1;
  param_1[7] = (uVar12 + 0x100000000000000) - (uVar2 + (uVar4 < uVar1));
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  param_1[8] = uVar5 - uVar1;
  param_1[9] = (uVar13 + 0xfffeffffffffff) - (uVar2 + (uVar5 < uVar1));
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  param_1[10] = uVar6 - uVar1;
  param_1[0xb] = (uVar14 + 0xffffffffffffff) - (uVar2 + (uVar6 < uVar1));
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  param_1[0xc] = uVar7 - uVar1;
  param_1[0xd] = (uVar15 + 0xffffffffffffff) - (uVar2 + (uVar7 < uVar1));
  return;
}



/* Entry: 006fb03c; end: 006fb107;  */

void FUN_006fb03c(undefined8 *param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 in_x6;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  
  func_0x006fda04();
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_006fa4d4(param_1 + 0xc);
  FUN_006fa4d4(unaff_x19 + 0x80,unaff_x20 + 0x48);
  FUN_006fa4d4(unaff_x19 + 0xa0,unaff_x20 + 0x90);
  uVar5 = 2;
  bVar2 = false;
  for (lVar4 = 0; lVar4 != 0x5a0; lVar4 = lVar4 + 0x60) {
    lVar1 = unaff_x19 + lVar4;
    if (bVar2) {
      func_0x006fe15c(lVar1 + 0xc0,lVar1 + 0xe0,lVar1 + 0x100,unaff_x19 + 0x60,unaff_x19 + 0x80,
                      unaff_x19 + 0xa0,in_x6,lVar1 + 0x60,lVar1 + 0x80,lVar1 + 0xa0);
    }
    else {
      lVar3 = unaff_x19 + (uVar5 >> 1) * 0x60;
      FUN_006facb0(lVar1 + 0xc0,lVar1 + 0xe0,lVar1 + 0x100,lVar3,lVar3 + 0x20,lVar3 + 0x40);
    }
    uVar5 = uVar5 + 1;
    bVar2 = (bool)(bVar2 ^ 1);
  }
  return;
}



/* Entry: 006fb108; end: 006fb173;  */

void FUN_006fb108(ulong param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  param_4[9] = 0;
  param_4[8] = 0;
  param_4[0xb] = 0;
  param_4[10] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  for (uVar2 = 0; uVar2 != param_2; uVar2 = uVar2 + 1) {
    uVar1 = (uint)((uVar2 ^ param_1) >> 4) | (uint)(uVar2 ^ param_1);
    for (lVar3 = 0; lVar3 != 0x60; lVar3 = lVar3 + 8) {
      uVar4 = *(ulong *)(param_3 + lVar3);
      if (((uVar1 | uVar1 >> 2) & 3) != 0) {
        uVar4 = 0;
      }
      *(ulong *)((long)param_4 + lVar3) = *(ulong *)((long)param_4 + lVar3) | uVar4;
    }
    param_3 = param_3 + 0x60;
  }
  return;
}



/* Entry: 006fb174; end: 006fb1cf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_006fb174(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  long lVar57;
  undefined1 in_ZR;
  bool bVar58;
  bool bVar59;
  char cVar60;
  undefined1 uVar61;
  bool bVar62;
  int iVar63;
  int iVar64;
  undefined8 uVar65;
  code *pcVar66;
  ulong *puVar67;
  undefined8 *puVar68;
  ulong *puVar69;
  char *pcVar70;
  undefined8 *puVar71;
  undefined1 *puVar72;
  undefined1 *puVar73;
  undefined1 *puVar74;
  ulong *puVar75;
  ulong uVar76;
  ulong *puVar77;
  ulong uVar78;
  ulong uVar79;
  ulong uVar80;
  ulong uVar81;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint uVar82;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar83;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  uint uVar84;
  uint extraout_w9;
  uint extraout_w9_00;
  long lVar85;
  ulong uVar86;
  ulong uVar87;
  ulong uVar88;
  ulong uVar89;
  ulong uVar90;
  ulong uVar91;
  ulong uVar92;
  ulong uVar93;
  undefined8 *unaff_x20;
  ulong uVar94;
  long unaff_x21;
  long lVar95;
  ulong uVar96;
  ulong uVar97;
  ulong *puVar98;
  ulong uVar99;
  uint uVar100;
  ulong uVar101;
  ulong unaff_x24;
  ulong uVar102;
  ulong uVar103;
  ulong uVar104;
  ulong uVar105;
  ulong unaff_x28;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  long lVar110;
  undefined8 auStack_12e0 [2];
  undefined8 uStack_12d0;
  ulong uStack_1290;
  ulong uStack_1288;
  ulong uStack_1280;
  ulong uStack_1278;
  ulong uStack_1250;
  ulong uStack_1248;
  ulong uStack_1240;
  ulong uStack_1238;
  undefined8 uStack_1228;
  ulong *puStack_1220;
  ulong *puStack_1218;
  undefined1 *puStack_1210;
  ulong *puStack_1208;
  undefined1 *******pppppppuStack_1200;
  code *pcStack_11f8;
  ulong *puStack_11f0;
  ulong *puStack_11e8;
  ulong *puStack_11d8;
  ulong auStack_11d0 [4];
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  ulong auStack_1170 [5];
  char acStack_1141 [257];
  undefined1 auStack_1040 [32];
  ulong auStack_1020 [4];
  ulong auStack_1000 [4];
  ulong auStack_fe0 [4];
  ulong auStack_fc0 [4];
  ulong auStack_fa0 [4];
  undefined1 auStack_f80 [32];
  undefined1 auStack_f60 [32];
  undefined1 auStack_f40 [624];
  undefined1 *puStack_cd0;
  undefined1 *puStack_cc8;
  undefined8 *puStack_cc0;
  undefined1 *puStack_cb8;
  undefined1 *puStack_cb0;
  undefined1 *puStack_ca8;
  undefined1 *puStack_ca0;
  undefined1 *puStack_c98;
  undefined1 auStack_c90 [16];
  undefined1 ******ppppppuStack_c80;
  undefined8 uStack_c78;
  undefined1 auStack_c70 [32];
  undefined1 auStack_c50 [32];
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  ulong auStack_bf0 [6];
  ulong uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  ulong uStack_ba8;
  ulong uStack_ba0;
  undefined8 *puStack_b98;
  ulong uStack_b90;
  ulong *puStack_b88;
  undefined8 *puStack_b80;
  undefined1 *puStack_b78;
  undefined1 *****pppppuStack_b70;
  undefined8 uStack_b68;
  ulong *puStack_b60;
  undefined8 *puStack_b58;
  undefined1 *puStack_b48;
  ulong *puStack_b40;
  undefined8 *puStack_b38;
  long lStack_b30;
  long lStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  ulong uStack_af0;
  ulong uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  ulong uStack_ac0;
  ulong uStack_ab8;
  ulong uStack_ab0;
  ulong uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  ulong auStack_a38 [4];
  ulong auStack_a18 [8];
  ulong uStack_9d8;
  ulong uStack_9d0;
  ulong uStack_9c8;
  ulong uStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong auStack_418 [4];
  undefined8 auStack_3f8 [4];
  undefined8 auStack_3d8 [3];
  ulong uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 ****ppppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined1 ***pppuStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_258;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined1 auStack_230 [32];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 auStack_1f0 [4];
  undefined1 auStack_1d0 [32];
  char acStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  iVar63 = (int)&uStack_a0;
  func_0x006fd5e8();
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  FUN_006fabd4();
  func_0x006fe0e4();
  func_0x006fa5a4();
  func_0x006fd534(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_006fb1d0;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x006fe490();
  func_0x006fd5fc();
  uStack_e8 = extraout_x8;
  FUN_006ec074();
  if (iVar63 == 0) {
    uStack_210 = unaff_x20[0x12];
    uStack_208 = unaff_x20[0x13];
    uStack_200 = unaff_x20[0x14];
    uStack_1f8 = unaff_x20[0x15];
    FUN_006fc3e0(&uStack_110,&uStack_210);
    func_0x006fe214(&uStack_110,&uStack_110);
    FUN_006fc3e0(auStack_130,&uStack_110);
    func_0x006fe214(auStack_130,auStack_130);
    FUN_006fc3e0(auStack_150,auStack_130);
    iVar63 = 2;
    while( true ) {
      if (iVar63 == 0) break;
      FUN_006fc3e0();
      iVar63 = iVar63 + -1;
    }
    FUN_006fbf84(auStack_150,auStack_150,auStack_130);
    FUN_006fc3e0(auStack_170,auStack_150);
    iVar63 = 5;
    while( true ) {
      if (iVar63 == 0) break;
      FUN_006fc3e0();
      iVar63 = iVar63 + -1;
    }
    FUN_006fbf84(auStack_170,auStack_170,auStack_150);
    FUN_006fc3e0(auStack_190,auStack_170);
    iVar63 = 2;
    while( true ) {
      if (iVar63 == 0) break;
      FUN_006fc3e0();
      iVar63 = iVar63 + -1;
    }
    FUN_006fbf84(auStack_190,auStack_190,auStack_130);
    FUN_006fc3e0(acStack_1b0,auStack_190);
    iVar63 = 0xe;
    while( true ) {
      if (iVar63 == 0) break;
      FUN_006fc3e0();
      iVar63 = iVar63 + -1;
    }
    func_0x006fe8c0(acStack_1b0,acStack_1b0);
    FUN_006fc3e0(auStack_1d0,acStack_1b0);
    FUN_006fc3e0(auStack_1d0,auStack_1d0);
    FUN_006fbf84(auStack_1d0,auStack_1d0,&uStack_110);
    FUN_006fc3e0(auStack_1f0,auStack_1d0);
    for (iVar63 = 0x1f; func_0x006fe628(), iVar63 != 0; iVar63 = iVar63 + -1) {
      FUN_006fc3e0();
    }
    func_0x006fe214();
    for (iVar63 = 0x80; func_0x006fe628(), iVar63 != 0; iVar63 = iVar63 + -1) {
      FUN_006fc3e0();
    }
    FUN_006fbf84();
    for (iVar63 = 0x20; func_0x006fe628(), iVar63 != 0; iVar63 = iVar63 + -1) {
      FUN_006fc3e0();
    }
    FUN_006fbf84();
    for (iVar63 = 0x1e; func_0x006fe628(), iVar63 != 0; iVar63 = iVar63 + -1) {
      FUN_006fc3e0();
    }
    pcVar70 = acStack_1b0;
    FUN_006fbf84();
    func_0x006fe628();
    FUN_006fc3e0();
    param_2 = auStack_1f0;
    FUN_006fc3e0(auStack_230);
    if (unaff_x21 != 0) {
      uStack_110 = *unaff_x20;
      uStack_108 = unaff_x20[1];
      uStack_100 = unaff_x20[2];
      uStack_f8 = unaff_x20[3];
      func_0x006fe31c();
      param_2 = &uStack_110;
      FUN_006fc2e4();
    }
    if (param_1 != 0) {
      uStack_110 = unaff_x20[9];
      uStack_108 = unaff_x20[10];
      uStack_100 = unaff_x20[0xb];
      uStack_f8 = unaff_x20[0xc];
      FUN_006fc3e0(auStack_230,auStack_230);
      func_0x006fe214(&uStack_110,&uStack_110);
      func_0x006fe31c();
      param_2 = &uStack_110;
      func_0x006fde74();
    }
    uVar65 = 1;
  }
  else {
    func_0x006fd880();
    pcVar70 = section_00000068.sectname + 0xf;
    func_0x006fd5dc();
    uVar65 = 0;
  }
  func_0x006fd534(uStack_e8,uVar65);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_006fb444;
  ppuStack_240 = &puStack_b0;
  func_0x006fd5e8();
  uStack_278 = *(undefined8 *)(pcVar70 + 8);
  uStack_280 = *(undefined8 *)pcVar70;
  uStack_268 = *(undefined8 *)(pcVar70 + 0x18);
  uStack_270 = *(undefined8 *)(pcVar70 + 0x10);
  uStack_298 = *(undefined8 *)(pcVar70 + 0x50);
  uStack_2a0 = *(undefined8 *)(pcVar70 + 0x48);
  uStack_288 = *(undefined8 *)(pcVar70 + 0x60);
  uStack_290 = *(undefined8 *)(pcVar70 + 0x58);
  uStack_2c0 = *(undefined8 *)(pcVar70 + 0x90);
  uStack_2b8 = *(undefined8 *)(pcVar70 + 0x98);
  uStack_2b0 = *(undefined8 *)(pcVar70 + 0xa0);
  uStack_2a8 = *(undefined8 *)(pcVar70 + 0xa8);
  uStack_2e0 = *param_4;
  uStack_2d8 = param_4[1];
  uStack_2d0 = param_4[2];
  uStack_2c8 = param_4[3];
  uStack_300 = param_4[9];
  uStack_2f8 = param_4[10];
  uStack_2f0 = param_4[0xb];
  uStack_2e8 = param_4[0xc];
  uStack_320 = param_4[0x12];
  uStack_318 = param_4[0x13];
  uStack_310 = param_4[0x14];
  uStack_308 = param_4[0x15];
  puStack_328 = &uStack_320;
  puStack_330 = &uStack_300;
  puVar71 = &uStack_2c0;
  func_0x006fe164(&uStack_280,&uStack_2a0,puVar71,&uStack_280,&uStack_2a0,&uStack_2c0);
  func_0x006fde74();
  FUN_006fc2e4(param_2 + 9,&uStack_2a0);
  puVar68 = &uStack_2c0;
  FUN_006fc2e4(param_2 + 0x12,puVar68);
  func_0x006fd534(uStack_258);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar67 = &uStack_3c0;
  puVar75 = &uStack_3c0;
  uStack_338 = 0x6fb4f8;
  pppuStack_340 = &ppuStack_240;
  func_0x006fd5e8();
  uStack_380 = *puVar71;
  uStack_378 = puVar71[1];
  ppppuStack_370 = (undefined1 ****)puVar71[2];
  pcStack_368 = (code *)puVar71[3];
  uStack_3a0 = puVar71[9];
  uStack_398 = puVar71[10];
  uStack_390 = puVar71[0xb];
  uStack_388 = puVar71[0xc];
  uStack_3c0 = puVar71[0x12];
  uStack_3b8 = puVar71[0x13];
  uStack_3b0 = puVar71[0x14];
  uStack_3a8 = puVar71[0x15];
  func_0x006fe61c();
  puVar71 = &uStack_380;
  FUN_006fcba0();
  func_0x006fde74();
  FUN_006fc2e4(puVar68 + 9,&uStack_3a0);
  FUN_006fc2e4(puVar68 + 0x12);
  func_0x006fd534(uStack_358);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcVar66 = FUN_006fb580;
  func_0x006fdcd0();
  puStack_b48 = (undefined1 *)puVar75;
  ppppuStack_370 = &pppuStack_340;
  pcStack_368 = pcVar66;
  func_0x006fd5fc();
  auStack_3d8[0] = extraout_x8_00;
  _bzero(auStack_a38,0x660);
  uStack_9d8 = *puVar67;
  uStack_9d0 = puVar67[1];
  uStack_9c8 = puVar67[2];
  uStack_9c0 = puVar67[3];
  uStack_9b8 = puVar67[9];
  uStack_9b0 = puVar67[10];
  uStack_9a8 = puVar67[0xb];
  uStack_9a0 = puVar67[0xc];
  uStack_998 = puVar67[0x12];
  uStack_990 = puVar67[0x13];
  uStack_988 = puVar67[0x14];
  uStack_980 = puVar67[0x15];
  lVar95 = -0x5a0;
  uVar97 = 2;
  do {
    if ((uVar97 & 1) == 0) {
      puVar75 = auStack_a38 + (uVar97 >> 1) * 0xc;
      puVar72 = (undefined1 *)((long)&uStack_398 + lVar95);
      puVar67 = auStack_a18 + (uVar97 >> 1) * 0xc;
      FUN_006fcba0((long)auStack_3d8 + lVar95,(long)&uStack_3b8 + lVar95);
    }
    else {
      puStack_b60 = (ulong *)((long)auStack_418 + lVar95);
      puStack_b58 = (undefined8 *)((long)auStack_3f8 + lVar95);
      puVar72 = (undefined1 *)((long)&uStack_398 + lVar95);
      puVar75 = &uStack_9d8;
      puVar67 = &uStack_9b8;
      func_0x006fe164((long)auStack_3d8 + lVar95,(long)&uStack_3b8 + lVar95);
    }
    uVar97 = uVar97 + 1;
    lVar95 = lVar95 + 0x60;
  } while (lVar95 != 0);
  uStack_a58 = 0;
  uStack_a60 = 0;
  uStack_a48 = 0;
  uStack_a50 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  uStack_a68 = 0;
  uStack_a70 = 0;
  puStack_b38 = &uStack_ae0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puStack_b40 = auStack_a18 + 1;
  uVar65 = 1;
  for (uVar103 = 0xff; puVar74 = puStack_b48, uVar61 = uVar103 == 0x100, uVar103 < 0x100;
      uVar103 = uVar103 - 1) {
    if ((int)uVar65 == 0) {
      func_0x006fe140();
      FUN_006fcba0();
    }
    uVar100 = (uint)uVar103;
    if (uVar100 == (uVar100 / 5) * 5) {
      if (uVar103 < 0xfc) {
        func_0x006fd6b0(uVar100 + 4);
        uVar82 = (extraout_w8 & 1) << 5;
        uVar84 = uVar100 + 3;
LAB_006fb6d4:
        uVar82 = uVar82 | (*(byte *)((long)puVar71 + (ulong)(uVar84 >> 3)) >> (ulong)(uVar84 & 7) &
                          1) << 4;
LAB_006fb6f0:
        func_0x006fec2c(uVar82);
        uVar97 = extraout_x8_01 | (extraout_w9 & 1) << 3;
LAB_006fb700:
        uVar83 = uVar97 | (*(byte *)((long)puVar71 + (ulong)(uVar100 + 1 >> 3)) >>
                           (ulong)(uVar100 + 1 & 7) & 1) << 2;
      }
      else {
        if (uVar103 == 0xfc) {
          uVar82 = 0;
          uVar84 = 0xff;
          goto LAB_006fb6d4;
        }
        if (uVar103 < 0xfe) {
          uVar82 = 0;
          goto LAB_006fb6f0;
        }
        uVar97 = 0;
        uVar83 = 0;
        if (uVar103 != 0xff) goto LAB_006fb700;
      }
      if (uVar100 - 1 < 0x100) {
        func_0x006fec2c();
        uVar97 = (ulong)(extraout_w9_00 & 1);
        uVar83 = extraout_x8_02;
      }
      else {
        uVar97 = 0;
      }
      puVar72 = (undefined1 *)
                (uVar83 | (*(byte *)((long)puVar71 + (uVar103 >> 3)) >> (ulong)(uVar100 & 7) & 1) <<
                          1 | uVar97);
      FUN_006ef290(&lStack_b28,&lStack_b30);
      unaff_x24 = 0;
      auVar106 = ZEXT216(0);
      lVar85 = 0x660;
      auVar109 = ZEXT216(0);
      auVar107 = ZEXT216(0);
      auVar108 = ZEXT216(0);
      lVar95 = lStack_b30;
      puVar98 = puStack_b40;
      uVar83 = 0;
      uVar88 = 0;
      uVar90 = 0;
      do {
        bVar62 = lVar95 == 0;
        uVar97 = *puVar98;
        uVar86 = puVar98[-1];
        if (!bVar62) {
          uVar97 = uVar88;
          uVar86 = unaff_x24;
        }
        unaff_x24 = uVar86;
        uVar86 = puVar98[1];
        if (!bVar62) {
          uVar86 = uVar83;
        }
        lVar57 = -(ulong)((long)((ulong)CONCAT14(bVar62,(uint)bVar62) << 0x3f) < 0);
        lVar110 = -(ulong)((long)((ulong)bVar62 << 0x3f) < 0);
        auVar53._8_8_ = lVar110;
        auVar53._0_8_ = lVar57;
        auVar106 = auVar106 ^ (auVar106 ^ *(undefined1 (*) [16])(puVar98 + -5)) & auVar53;
        auVar54._8_8_ = lVar110;
        auVar54._0_8_ = lVar57;
        auVar109 = auVar109 ^ (auVar109 ^ *(undefined1 (*) [16])(puVar98 + -3)) & auVar54;
        unaff_x28 = puVar98[2];
        if (!bVar62) {
          unaff_x28 = uVar90;
        }
        auVar55._8_8_ = lVar110;
        auVar55._0_8_ = lVar57;
        auVar107 = auVar107 ^ (auVar107 ^ *(undefined1 (*) [16])(puVar98 + 3)) & auVar55;
        auVar56._8_8_ = lVar110;
        auVar56._0_8_ = lVar57;
        auVar108 = auVar108 ^ (auVar108 ^ *(undefined1 (*) [16])(puVar98 + 5)) & auVar56;
        lVar85 = lVar85 + -0x60;
        puVar98 = puVar98 + 0xc;
        lVar95 = lVar95 + -1;
        uVar83 = uVar86;
        uVar88 = uVar97;
        uVar90 = unaff_x28;
      } while (lVar85 != 0);
      uStack_b18 = auVar106._8_8_;
      uStack_b20 = auVar106._0_8_;
      uStack_b08 = auVar109._8_8_;
      uStack_b10 = auVar109._0_8_;
      uStack_ad8 = auVar107._8_8_;
      uStack_ae0 = auVar107._0_8_;
      uStack_ac8 = auVar108._8_8_;
      uStack_ad0 = auVar108._0_8_;
      uStack_b00 = unaff_x24;
      uStack_af8 = uVar97;
      uStack_af0 = uVar86;
      uStack_ae8 = unaff_x28;
      func_0x006fcd58(&uStack_ac0,&uStack_b00);
      uStack_ae8 = unaff_x28;
      uStack_af0 = uVar86;
      uStack_af8 = uVar97;
      uStack_b00 = unaff_x24;
      if (lStack_b28 != 0) {
        uStack_ae8 = uStack_aa8;
        uStack_af0 = uStack_ab0;
        uStack_af8 = uStack_ab8;
        uStack_b00 = uStack_ac0;
      }
      if ((int)uVar65 == 0) {
        puStack_b58 = puStack_b38;
        puStack_b60 = &uStack_b00;
        func_0x006fe140();
        func_0x006fe164();
      }
      else {
        func_0x006fcb80(&uStack_aa0,&uStack_b20);
        func_0x006fe428(&uStack_a80);
        func_0x006fcb80(&uStack_a60,puStack_b38);
      }
      uVar65 = 0;
    }
  }
  func_0x006fde74();
  FUN_006fc2e4(puVar74 + 0x48,&uStack_a80);
  puVar68 = &uStack_a60;
  FUN_006fc2e4(puVar74 + 0x90);
  func_0x006fd534(auStack_3d8[0]);
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uStack_bb0 = 5;
  puStack_b78 = puVar74;
  uStack_b68 = 0x6fb8e0;
  bVar62 = false;
  puVar73 = puVar72;
  puStack_cc0 = puVar68;
  uStack_bc0 = unaff_x28;
  uStack_bb8 = uVar65;
  uStack_ba8 = uVar103;
  uStack_ba0 = unaff_x24;
  puStack_b98 = &uStack_aa0;
  uStack_b90 = uVar97;
  puStack_b88 = &uStack_b00;
  puStack_b80 = puVar71;
  pppppuStack_b70 = &ppppuStack_370;
  func_0x006fd588();
  puStack_c98 = puVar73 + 0x1c;
  puStack_ca0 = puVar73 + 0x14;
  puStack_ca8 = puVar73 + 0xc;
  auStack_bf0[1] = 0;
  auStack_bf0[0] = 0;
  auStack_bf0[3] = 0;
  auStack_bf0[2] = 0;
  puStack_cb0 = puVar73 + 4;
  puStack_cb8 = puVar73 + 0x18;
  uStack_c08 = 0;
  uStack_c10 = 0;
  uStack_bf8 = 0;
  uStack_c00 = 0;
  uStack_c28 = 0;
  uStack_c30 = 0;
  uStack_c18 = 0;
  uStack_c20 = 0;
  puVar74 = puVar73;
  for (uVar97 = 0x1f; puVar71 = puStack_cc0, uVar61 = uVar97 == 0x20, uVar97 < 0x20;
      uVar97 = uVar97 - 1) {
    if (bVar62) {
      func_0x006fd994();
      FUN_006fcba0();
    }
    uVar103 = uVar97 >> 3;
    uVar100 = (uint)uVar97 & 7;
    uVar84 = ((byte)puStack_c98[uVar103] >> (ulong)uVar100 & 1) << 3;
    func_0x006fea80(puStack_ca0,uVar84);
    uVar84 = uVar84 & 0xfffffff8 | uVar84 & 3 | (extraout_w8_00 & 1) << 2;
    func_0x006fea80(puStack_ca8,uVar84);
    uVar84 = uVar84 & 0xfffffffc | uVar84 & 1 | (extraout_w8_01 & 1) << 1;
    func_0x006fea80(puStack_cb0,uVar84);
    FUN_006fcdd8(uVar84 & 0xfffffffe | extraout_w8_02 & 1,&UNK_00838268,auStack_c90);
    if (bVar62) {
      puStack_cd0 = auStack_c70;
      puStack_cc8 = auStack_c50;
      func_0x006fd994();
      func_0x006fe378();
    }
    else {
      func_0x006fcb80(&uStack_c30,auStack_c90);
      func_0x006fe428(&uStack_c10);
      func_0x006fcb80(auStack_bf0,auStack_c50);
    }
    func_0x006fea80(puStack_cb8);
    puVar74 = auStack_c90;
    FUN_006fcdd8((extraout_w8_03 & 1) << 3 |
                 ((byte)puVar73[uVar103 + 0x10] >> (ulong)uVar100 & 1) << 2 |
                 ((byte)puVar73[uVar103 + 8] >> (ulong)uVar100 & 1) << 1 |
                 (byte)puVar72[uVar103] >> (ulong)uVar100 & 1,&UNK_00837ea8);
    bVar62 = true;
    puStack_cd0 = auStack_c70;
    puStack_cc8 = auStack_c50;
    func_0x006fd994();
    func_0x006fe378();
  }
  func_0x006fde74();
  FUN_006fc2e4(puVar71 + 9,&uStack_c10);
  puVar98 = puVar71 + 0x12;
  puVar69 = auStack_bf0;
  FUN_006fc2e4();
  func_0x006fd508();
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uVar65 = 0x6fbaa0;
  func_0x006fdcd0();
  puStack_11d8 = puVar69;
  ppppppuStack_c80 = &pppppuStack_b70;
  uStack_c78 = uVar65;
  func_0x006fd588();
  auStack_fe0[0] = *puVar75;
  auStack_fe0[1] = puVar75[1];
  auStack_fe0[2] = puVar75[2];
  auStack_fe0[3] = puVar75[3];
  auStack_fc0[0] = puVar75[9];
  auStack_fc0[1] = puVar75[10];
  auStack_fc0[2] = puVar75[0xb];
  auStack_fc0[3] = puVar75[0xc];
  auStack_fa0[0] = puVar75[0x12];
  auStack_fa0[1] = puVar75[0x13];
  auStack_fa0[2] = puVar75[0x14];
  auStack_fa0[3] = puVar75[0x15];
  FUN_006fcba0(auStack_1040,auStack_1020,auStack_1000,auStack_fe0,auStack_fc0,auStack_fa0);
  for (lVar95 = 0; lVar95 != 0x2a0; lVar95 = lVar95 + 0x60) {
    puStack_11f0 = auStack_1020;
    puStack_11e8 = auStack_1000;
    func_0x006fe164(auStack_f80 + lVar95,auStack_f60 + lVar95,auStack_f40 + lVar95,
                    (long)auStack_fe0 + lVar95,(long)auStack_fc0 + lVar95,(long)auStack_fa0 + lVar95
                   );
  }
  uVar97 = 0x100;
  puVar75 = puVar67;
  func_0x006ef2c4(puVar98,acStack_1141,puVar67,0x100);
  auStack_1170[1] = 0;
  auStack_1170[0] = 0;
  auStack_1170[3] = 0;
  auStack_1170[2] = 0;
  uStack_1188 = 0;
  uStack_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  uStack_1198 = 0;
  uStack_11a0 = 0;
  bVar62 = true;
  do {
    if (!bVar62) {
      func_0x006fd6e0();
      FUN_006fcba0();
    }
    uVar100 = (uint)uVar97;
    uVar61 = uVar100 == 0x1f;
    if (uVar100 < 0x20) {
      puVar67 = (ulong *)(puVar74 + (uVar100 >> 3));
      uVar84 = uVar100 & 7;
      puVar98 = (ulong *)(ulong)uVar84;
      uVar82 = (*(byte *)((long)puVar67 + 0x1c) >> (long)puVar98 & 1) << 3 |
               (*(byte *)((long)puVar67 + 0x14) >> (ulong)uVar84 & 1) << 2 |
               (*(byte *)((long)puVar67 + 0xc) >> (long)puVar98 & 1) << 1 |
               *(byte *)((long)puVar67 + 4) >> (ulong)uVar84 & 1;
      if (uVar82 != 0) {
        puStack_11f0 = (ulong *)(&UNK_00838248 + (ulong)uVar82 * 0x40);
        puStack_11e8 = (ulong *)&UNK_00838628;
        func_0x006fd6e0();
        func_0x006fe378();
        bVar62 = false;
      }
      uVar84 = ((byte)((byte)puVar67[3] >> (ulong)uVar84) & 1) << 3 |
               ((byte)((byte)puVar67[2] >> (ulong)uVar84) & 1) << 2 |
               ((byte)((byte)puVar67[1] >> (long)puVar98) & 1) << 1 |
               (byte)((byte)*puVar67 >> (ulong)uVar84) & 1;
      if (uVar84 != 0) {
        puStack_11f0 = (ulong *)(&UNK_00837e88 + (ulong)uVar84 * 0x40);
        puStack_11e8 = (ulong *)&UNK_00838628;
        func_0x006fd6e0();
        func_0x006fe378();
        bVar62 = false;
      }
    }
    cVar60 = acStack_1141[uVar97];
    if (cVar60 != '\0') {
      uVar61 = cVar60 == '\0';
      uVar82 = (uint)cVar60;
      uVar84 = -uVar82;
      if (-1 < cVar60) {
        uVar84 = uVar82;
      }
      uVar97 = (ulong)(uVar84 >> 1);
      puVar67 = auStack_fe0 + uVar97 * 0xc;
      puVar98 = auStack_fc0 + uVar97 * 0xc;
      if ((int)uVar82 < 0) {
        func_0x006fcd58(auStack_11d0,puVar98);
        puVar98 = auStack_11d0;
        if (!bVar62) goto LAB_006fbcc0;
LAB_006fbc88:
        func_0x006fe428(&uStack_11b0);
        func_0x006fcb80(&uStack_1190,puVar98);
        func_0x006fcb80(auStack_1170,auStack_fa0 + uVar97 * 0xc);
      }
      else {
        if (bVar62) goto LAB_006fbc88;
LAB_006fbcc0:
        puStack_11e8 = auStack_fa0 + uVar97 * 0xc;
        puStack_11f0 = puVar98;
        func_0x006fd6e0();
        FUN_006fc724();
      }
      bVar62 = false;
    }
    puVar69 = puStack_11d8;
    uVar97 = (ulong)(uVar100 - 1);
  } while (-1 < (int)(uVar100 - 1));
  func_0x006fde74();
  FUN_006fc2e4(puVar69 + 9,&uStack_1190);
  iVar63 = (int)puVar69 + 0x90;
  puVar77 = auStack_1170;
  FUN_006fc2e4();
  func_0x006fd508();
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  iVar64 = (int)auStack_12e0;
  puStack_1208 = puVar69;
  pcStack_11f8 = FUN_006fbd20;
  puStack_1220 = puVar98;
  puStack_1218 = puVar67;
  puStack_1210 = puVar74;
  pppppppuStack_1200 = &ppppppuStack_c80;
  func_0x006fd9b0();
  func_0x006fd5fc();
  uStack_1228 = extraout_x8_03;
  FUN_006ec074();
  if (iVar63 == 0) {
    uStack_1250 = puVar67[0x12];
    uStack_1248 = puVar67[0x13];
    uStack_1240 = puVar67[0x14];
    uStack_1238 = puVar67[0x15];
    FUN_006fbf84(&uStack_1250,&uStack_1250,&uStack_1250);
    func_0x006fe078(*puVar69,puVar69[2]);
    uVar97 = *puVar67;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uVar97;
    uVar88 = SUB168(auVar106 * ZEXT816(0xffffffff00000001),8);
    uVar90 = uVar97 - (uVar97 << 0x20);
    auVar107._8_8_ = 0;
    auVar107._0_8_ = uVar97;
    lVar95 = SUB168(auVar107 * ZEXT816(0xffffffff),8);
    uVar86 = (uVar97 << 0x20) - uVar97;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar97;
    uVar103 = SUB168(auVar108 * ZEXT816(0xffffffffffffffff),8);
    uVar83 = uVar103 + uVar86 + (ulong)CARRY8(-uVar97,uVar97);
    if (CARRY8(uVar103,uVar86) || CARRY8(uVar103 + uVar86,(ulong)CARRY8(-uVar97,uVar97))) {
      lVar95 = lVar95 + 1;
    }
    uVar97 = uVar83 + puVar67[1];
    auVar109._8_8_ = 0;
    auVar109._0_8_ = uVar97;
    uVar86 = SUB168(auVar109 * ZEXT816(0xffffffffffffffff),8);
    uVar87 = uVar97 - (uVar97 << 0x20);
    uVar80 = (uVar97 << 0x20) - uVar97;
    uVar103 = uVar86 + uVar80;
    uVar76 = lVar95 + (ulong)CARRY8(uVar83,puVar67[1]) + (ulong)CARRY8(-uVar97,uVar97);
    uVar78 = uVar90 + CARRY8(uVar76,uVar103);
    uVar79 = (ulong)CARRY8(uVar90,(ulong)CARRY8(uVar76,uVar103));
    uVar83 = uVar87 + uVar88;
    uVar88 = (ulong)CARRY8(uVar87,uVar88);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar97;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar97;
    uVar97 = SUB168(auVar2 * ZEXT816(0xffffffff),8);
    bVar62 = CARRY8(uVar78,uVar97) || CARRY8(uVar78 + uVar97,(ulong)CARRY8(uVar86,uVar80));
    uVar97 = uVar78 + uVar97 + (ulong)CARRY8(uVar86,uVar80);
    uVar90 = uVar83 + uVar79 + (ulong)bVar62;
    if (CARRY8(uVar83,uVar79) || CARRY8(uVar83 + uVar79,(ulong)bVar62)) {
      uVar88 = uVar88 + 1;
    }
    bVar62 = CARRY8(uVar76 + uVar103,puVar67[2]);
    uVar103 = uVar76 + uVar103 + puVar67[2];
    uVar83 = uVar90 + CARRY8(uVar97,(ulong)bVar62);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar103;
    uVar86 = SUB168(auVar3 * ZEXT816(0xffffffffffffffff),8);
    uVar88 = uVar88 + SUB168(auVar1 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar90,(ulong)CARRY8(uVar97,(ulong)bVar62));
    uVar87 = uVar103 - (uVar103 << 0x20);
    uVar90 = (uVar103 << 0x20) - uVar103;
    bVar58 = CARRY8(uVar97 + bVar62,uVar86 + uVar90) ||
             CARRY8(uVar97 + bVar62 + uVar86 + uVar90,(ulong)CARRY8(-uVar103,uVar103));
    uVar76 = uVar83 + bVar58;
    uVar78 = (ulong)CARRY8(uVar83,(ulong)bVar58);
    uVar83 = uVar87 + uVar88;
    uVar88 = (ulong)CARRY8(uVar87,uVar88);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar103;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar103;
    uVar87 = SUB168(auVar5 * ZEXT816(0xffffffff),8);
    uVar97 = uVar97 + bVar62 + (ulong)CARRY8(-uVar103,uVar103) + uVar86 + uVar90;
    bVar62 = CARRY8(uVar76,uVar87) || CARRY8(uVar76 + uVar87,(ulong)CARRY8(uVar86,uVar90));
    uVar103 = uVar76 + uVar87 + (ulong)CARRY8(uVar86,uVar90);
    uVar90 = uVar83 + uVar78 + (ulong)bVar62;
    if (CARRY8(uVar83,uVar78) || CARRY8(uVar83 + uVar78,(ulong)bVar62)) {
      uVar88 = uVar88 + 1;
    }
    bVar62 = CARRY8(uVar97,puVar67[3]);
    uVar97 = uVar97 + puVar67[3];
    uVar76 = uVar90 + CARRY8(uVar103,(ulong)bVar62);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar97;
    uVar86 = SUB168(auVar6 * ZEXT816(0xffffffff00000001),8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar97;
    puVar77 = SUB168(auVar7 * ZEXT816(0xffffffff),8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar97;
    uVar87 = SUB168(auVar8 * ZEXT816(0xffffffffffffffff),8);
    uVar90 = uVar88 + SUB168(auVar4 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar90,(ulong)CARRY8(uVar103,(ulong)bVar62));
    puVar75 = (ulong *)(uVar97 - (uVar97 << 0x20));
    uVar88 = (uVar97 << 0x20) - uVar97;
    uVar83 = uVar87 + uVar88;
    if (CARRY8(uVar87,uVar88)) {
      puVar77 = (ulong *)((long)puVar77 + 1);
    }
    uVar88 = uVar103 + bVar62 + (ulong)CARRY8(-uVar97,uVar97) + uVar83;
    bVar62 = CARRY8(uVar103 + bVar62,uVar83) ||
             CARRY8(uVar103 + bVar62 + uVar83,(ulong)CARRY8(-uVar97,uVar97));
    bVar58 = CARRY8(uVar76,(ulong)puVar77) || CARRY8(uVar76 + (long)puVar77,(ulong)bVar62);
    uVar97 = (long)puVar77 + bVar62 + uVar76;
    uVar103 = (long)puVar75 + bVar58 + uVar90;
    if (CARRY8((ulong)puVar75,uVar90) || CARRY8((long)puVar75 + uVar90,(ulong)bVar58)) {
      uVar86 = uVar86 + 1;
    }
    uVar83 = (ulong)(byte)-((0xfffffffffffffffe < uVar88) + -1);
    uVar87 = uVar97 - uVar83;
    uVar83 = (ulong)(byte)-((-1 - (uVar97 < uVar83)) + (0xfffffffe < uVar87));
    uVar90 = (ulong)(uVar103 < uVar83);
    uVar76 = uVar86 - uVar90;
    iVar63 = -(uint)(uVar86 < uVar90);
    uVar61 = (char)((char)iVar63 + -1 + (0xffffffff00000000 < uVar76)) == '\0';
    uStack_1278 = uVar76 + 0xffffffff;
    uStack_1280 = uVar103 - uVar83;
    uStack_1288 = uVar87 - 0xffffffff;
    uStack_1290 = uVar88 + 1;
    if (!(bool)uVar61) {
      uStack_1278 = uVar86;
      uStack_1280 = uVar103;
      uStack_1288 = uVar97;
      uStack_1290 = uVar88;
    }
    func_0x006fe338();
    if (iVar63 == 0) {
LAB_006fbf78:
      puVar67 = (ulong *)((long)&MACH_HEADER.magic + 1);
      goto LAB_006fbd4c;
    }
    puVar75 = (ulong *)(long)*(int *)(puVar74 + 0x40);
    puVar77 = (ulong *)(puVar74 + 0xe8);
    func_0x006fe7b8();
    if (iVar63 != 0) {
      puVar75 = *(ulong **)(puVar74 + 0x10);
      FUN_006e3678();
      func_0x006fe078(auStack_12e0[0],uStack_12d0);
      func_0x006fe338();
      puVar77 = puVar69;
      if (iVar64 == 0) goto LAB_006fbf78;
    }
  }
  puVar67 = (ulong *)0x0;
LAB_006fbd4c:
  func_0x006fd534(uStack_1228);
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uVar103 = *puVar77;
  uVar90 = puVar77[1];
  uVar83 = puVar75[2];
  uVar86 = puVar75[3];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar86;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar103;
  uVar97 = SUB168(auVar9 * auVar37,8);
  uVar89 = uVar86 * uVar103;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar83;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar103;
  uVar91 = SUB168(auVar10 * auVar38,8);
  uVar92 = uVar83 * uVar103;
  uVar88 = *puVar75;
  uVar87 = puVar75[1];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar87;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar103;
  uVar76 = SUB168(auVar11 * auVar39,8);
  uVar78 = uVar87 * uVar103;
  uVar79 = uVar88 * uVar103;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar88;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar103;
  uVar80 = SUB168(auVar12 * auVar40,8);
  bVar62 = CARRY8(uVar76,uVar92) || CARRY8(uVar76 + uVar92,(ulong)CARRY8(uVar80,uVar78));
  uVar92 = uVar76 + uVar92 + (ulong)CARRY8(uVar80,uVar78);
  uVar76 = uVar91 + uVar89 + (ulong)bVar62;
  if (CARRY8(uVar91,uVar89) || CARRY8(uVar91 + uVar89,(ulong)bVar62)) {
    uVar97 = uVar97 + 1;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar79;
  uVar81 = SUB168(auVar13 * ZEXT816(0xffffffff00000001),8);
  uVar91 = uVar79 - (uVar79 << 0x20);
  uVar94 = (uVar79 << 0x20) - uVar79;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar79;
  uVar96 = SUB168(auVar14 * ZEXT816(0xffffffffffffffff),8);
  bVar62 = CARRY8(-(uVar88 * uVar103),uVar79);
  bVar58 = CARRY8(uVar80 + uVar78,uVar96 + uVar94) ||
           CARRY8(uVar80 + uVar78 + uVar96 + uVar94,(ulong)bVar62);
  uVar93 = uVar92 + bVar58;
  uVar89 = (ulong)CARRY8(uVar92,(ulong)bVar58);
  uVar103 = uVar76 + uVar91;
  uVar91 = (ulong)CARRY8(uVar76,uVar91);
  uVar76 = uVar81 + uVar97;
  uVar92 = (ulong)CARRY8(uVar81,uVar97);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar86;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar90;
  uVar97 = SUB168(auVar15 * auVar41,8);
  uVar81 = uVar86 * uVar90;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar83;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar90;
  uVar99 = SUB168(auVar16 * auVar42,8);
  uVar101 = uVar83 * uVar90;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar87;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar90;
  uVar102 = SUB168(auVar17 * auVar43,8);
  uVar104 = uVar87 * uVar90;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar88;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar90;
  uVar105 = SUB168(auVar18 * auVar44,8);
  bVar58 = CARRY8(uVar102,uVar101) || CARRY8(uVar102 + uVar101,(ulong)CARRY8(uVar105,uVar104));
  uVar102 = uVar102 + uVar101 + (ulong)CARRY8(uVar105,uVar104);
  uVar101 = uVar99 + uVar81 + (ulong)bVar58;
  if (CARRY8(uVar99,uVar81) || CARRY8(uVar99 + uVar81,(ulong)bVar58)) {
    uVar97 = uVar97 + 1;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar79;
  uVar79 = SUB168(auVar19 * ZEXT816(0xffffffff),8);
  uVar78 = uVar80 + uVar78 + (ulong)bVar62 + uVar96 + uVar94;
  bVar62 = CARRY8(uVar93,uVar79) || CARRY8(uVar93 + uVar79,(ulong)CARRY8(uVar96,uVar94));
  uVar81 = uVar93 + uVar79 + (ulong)CARRY8(uVar96,uVar94);
  bVar58 = CARRY8(uVar103,uVar89) || CARRY8(uVar103 + uVar89,(ulong)bVar62);
  uVar89 = uVar103 + uVar89 + (ulong)bVar62;
  bVar59 = CARRY8(uVar76,uVar91) || CARRY8(uVar76 + uVar91,(ulong)bVar58);
  uVar79 = uVar76 + uVar91 + (ulong)bVar58;
  uVar90 = uVar88 * uVar90;
  uVar103 = uVar78 + uVar90;
  lVar95 = uVar105 + uVar104 + (ulong)CARRY8(uVar78,uVar90);
  uVar76 = lVar95 + uVar81;
  bVar62 = CARRY8(uVar105 + uVar104,uVar81) ||
           CARRY8(uVar105 + uVar104 + uVar81,(ulong)CARRY8(uVar78,uVar90));
  uVar80 = uVar102 + bVar62;
  uVar91 = (ulong)CARRY8(uVar102,(ulong)bVar62);
  uVar90 = uVar79 + uVar101;
  uVar94 = uVar103 - (uVar103 << 0x20);
  uVar96 = (uVar103 << 0x20) - uVar103;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar103;
  uVar99 = SUB168(auVar20 * ZEXT816(0xffffffffffffffff),8);
  uVar78 = uVar90 + uVar91 + (ulong)CARRY8(uVar80,uVar89);
  uVar79 = uVar97 + uVar92 + (ulong)bVar59 + (ulong)CARRY8(uVar79,uVar101) +
           (ulong)(CARRY8(uVar90,uVar91) || CARRY8(uVar90 + uVar91,(ulong)CARRY8(uVar80,uVar89)));
  uVar65 = nzcv;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar103;
  uVar93 = SUB168(auVar21 * ZEXT816(0xffffffff00000001),8);
  bVar62 = CARRY8(uVar76,uVar99 + uVar96) ||
           CARRY8(uVar76 + uVar99 + uVar96,(ulong)CARRY8(-uVar103,uVar103));
  uVar91 = uVar80 + uVar89 + (ulong)bVar62;
  uVar89 = (ulong)CARRY8(uVar80 + uVar89,(ulong)bVar62);
  uVar90 = uVar78 + uVar94;
  uVar80 = (ulong)CARRY8(uVar78,uVar94);
  uVar76 = uVar79 + uVar93;
  uVar78 = (ulong)CARRY8(uVar79,uVar93);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar103;
  uVar79 = SUB168(auVar22 * ZEXT816(0xffffffff),8);
  bVar62 = CARRY8(uVar91,uVar79) || CARRY8(uVar91 + uVar79,(ulong)CARRY8(uVar99,uVar96));
  uVar79 = uVar91 + uVar79 + (ulong)CARRY8(uVar99,uVar96);
  bVar58 = CARRY8(uVar90,uVar89) || CARRY8(uVar90 + uVar89,(ulong)bVar62);
  uVar89 = uVar90 + uVar89 + (ulong)bVar62;
  bVar62 = CARRY8(uVar76 + uVar80,(ulong)bVar58);
  uVar90 = uVar76 + uVar80 + (ulong)bVar58;
  if (CARRY8(uVar76,uVar80) || bVar62) {
    uVar78 = uVar78 + 1;
  }
  uVar103 = lVar95 + uVar81 + (ulong)CARRY8(-uVar103,uVar103) + uVar99 + uVar96;
  nzcv = uVar65;
  uVar81 = uVar78 + (CARRY8(uVar97,uVar92) || CARRY8(uVar97 + uVar92,(ulong)bVar59)) +
           (ulong)(CARRY8(uVar76,uVar80) || bVar62);
  uVar76 = puVar77[2];
  uVar78 = puVar77[3];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar86;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar76;
  uVar97 = SUB168(auVar23 * auVar45,8);
  uVar80 = uVar86 * uVar76;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar83;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar76;
  uVar92 = SUB168(auVar24 * auVar46,8);
  uVar91 = uVar83 * uVar76;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar87;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar76;
  uVar93 = SUB168(auVar25 * auVar47,8);
  uVar101 = uVar87 * uVar76;
  uVar94 = uVar88 * uVar76;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar88;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar76;
  uVar76 = SUB168(auVar26 * auVar48,8);
  bVar62 = CARRY8(uVar93,uVar91) || CARRY8(uVar93 + uVar91,(ulong)CARRY8(uVar76,uVar101));
  uVar93 = uVar93 + uVar91 + (ulong)CARRY8(uVar76,uVar101);
  uVar91 = uVar92 + uVar80 + (ulong)bVar62;
  if (CARRY8(uVar92,uVar80) || CARRY8(uVar92 + uVar80,(ulong)bVar62)) {
    uVar97 = uVar97 + 1;
  }
  uVar80 = uVar103 + uVar94;
  lVar95 = uVar76 + uVar101 + (ulong)CARRY8(uVar103,uVar94);
  uVar92 = lVar95 + uVar79;
  bVar62 = CARRY8(uVar76 + uVar101,uVar79) ||
           CARRY8(uVar76 + uVar101 + uVar79,(ulong)CARRY8(uVar103,uVar94));
  bVar58 = CARRY8(uVar93,uVar89) || CARRY8(uVar93 + uVar89,(ulong)bVar62);
  uVar93 = uVar93 + uVar89 + (ulong)bVar62;
  bVar62 = CARRY8(uVar91,uVar90) || CARRY8(uVar91 + uVar90,(ulong)bVar58);
  uVar89 = uVar91 + uVar90 + (ulong)bVar58;
  uVar91 = uVar97 + bVar62;
  uVar103 = uVar91 + uVar81;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar80;
  uVar101 = SUB168(auVar27 * ZEXT816(0xffffffff00000001),8);
  uVar94 = uVar80 - (uVar80 << 0x20);
  uVar96 = (uVar80 << 0x20) - uVar80;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar80;
  uVar76 = SUB168(auVar28 * ZEXT816(0xffffffff),8);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar80;
  uVar99 = SUB168(auVar29 * ZEXT816(0xffffffffffffffff),8);
  uVar90 = uVar99 + uVar96;
  if (CARRY8(uVar99,uVar96)) {
    uVar76 = uVar76 + 1;
  }
  bVar58 = CARRY8(uVar92,uVar90) || CARRY8(uVar92 + uVar90,(ulong)CARRY8(-uVar80,uVar80));
  bVar59 = CARRY8(uVar93,uVar76) || CARRY8(uVar93 + uVar76,(ulong)bVar58);
  uVar92 = uVar93 + uVar76 + (ulong)bVar58;
  bVar58 = CARRY8(uVar89,uVar94) || CARRY8(uVar89 + uVar94,(ulong)bVar59);
  uVar76 = uVar89 + uVar94 + (ulong)bVar59;
  uVar90 = lVar95 + uVar79 + (ulong)CARRY8(-uVar80,uVar80) + uVar90;
  uVar91 = (ulong)(CARRY8(uVar101,uVar103) || CARRY8(uVar101 + uVar103,(ulong)bVar58)) +
           (ulong)CARRY8(uVar97,(ulong)bVar62) + (ulong)CARRY8(uVar91,uVar81);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar86;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar78;
  uVar97 = SUB168(auVar30 * auVar49,8);
  uVar86 = uVar86 * uVar78;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar83;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar78;
  uVar79 = SUB168(auVar31 * auVar50,8);
  uVar83 = uVar83 * uVar78;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar87;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar78;
  uVar80 = SUB168(auVar32 * auVar51,8);
  uVar87 = uVar87 * uVar78;
  uVar89 = uVar88 * uVar78;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar88;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar78;
  uVar88 = SUB168(auVar33 * auVar52,8);
  bVar62 = CARRY8(uVar80,uVar83) || CARRY8(uVar80 + uVar83,(ulong)CARRY8(uVar88,uVar87));
  uVar83 = uVar80 + uVar83 + (ulong)CARRY8(uVar88,uVar87);
  if (CARRY8(uVar79,uVar86) || CARRY8(uVar79 + uVar86,(ulong)bVar62)) {
    uVar97 = uVar97 + 1;
  }
  uVar78 = uVar90 + uVar89;
  lVar95 = uVar88 + uVar87 + (ulong)CARRY8(uVar90,uVar89);
  uVar80 = lVar95 + uVar92;
  bVar59 = CARRY8(uVar88 + uVar87,uVar92) ||
           CARRY8(uVar88 + uVar87 + uVar92,(ulong)CARRY8(uVar90,uVar89));
  uVar90 = uVar83 + uVar76 + (ulong)bVar59;
  uVar88 = uVar79 + uVar86 + (ulong)bVar62 + uVar101 + uVar103 + (ulong)bVar58 +
           (ulong)(CARRY8(uVar83,uVar76) || CARRY8(uVar83 + uVar76,(ulong)bVar59));
  uVar65 = nzcv;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar78;
  uVar89 = SUB168(auVar34 * ZEXT816(0xffffffffffffffff),8);
  uVar83 = uVar78 - (uVar78 << 0x20);
  uVar86 = (uVar78 << 0x20) - uVar78;
  bVar62 = CARRY8(uVar80,uVar89 + uVar86) ||
           CARRY8(uVar80 + uVar89 + uVar86,(ulong)CARRY8(-uVar78,uVar78));
  uVar87 = uVar90 + bVar62;
  uVar90 = (ulong)CARRY8(uVar90,(ulong)bVar62);
  uVar103 = uVar88 + uVar83;
  uVar79 = (ulong)CARRY8(uVar88,uVar83);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar78;
  uVar83 = SUB168(auVar35 * ZEXT816(0xffffffff00000001),8);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar78;
  uVar88 = SUB168(auVar36 * ZEXT816(0xffffffff),8);
  bVar62 = CARRY8(uVar87,uVar88) || CARRY8(uVar87 + uVar88,(ulong)CARRY8(uVar89,uVar86));
  uVar76 = uVar87 + uVar88 + (ulong)CARRY8(uVar89,uVar86);
  bVar58 = CARRY8(uVar103,uVar90) || CARRY8(uVar103 + uVar90,(ulong)bVar62);
  uVar87 = uVar103 + uVar90 + (ulong)bVar62;
  cVar60 = CARRY8(uVar83,uVar79) || CARRY8(uVar83 + uVar79,(ulong)bVar58);
  uVar79 = uVar83 + uVar79 + (ulong)bVar58;
  nzcv = uVar65;
  uVar103 = (ulong)(byte)cVar60;
  uVar83 = (ulong)(byte)cVar60;
  uVar88 = uVar97 + uVar83 + uVar91;
  uVar90 = uVar79 + uVar88;
  if (CARRY8(uVar79,uVar88)) {
    cVar60 = cVar60 + '\x01';
  }
  uVar78 = lVar95 + uVar92 + (ulong)CARRY8(-uVar78,uVar78) + uVar89 + uVar86;
  uVar88 = (ulong)(byte)-((0xfffffffffffffffe < uVar78) + -1);
  uVar79 = uVar76 - uVar88;
  uVar88 = (ulong)(byte)-((-1 - (uVar76 < uVar88)) + (0xfffffffe < uVar79));
  uVar86 = (ulong)(uVar87 < uVar88);
  uVar80 = uVar90 - uVar86;
  bVar62 = (byte)(cVar60 + CARRY8(uVar97,uVar103) + CARRY8(uVar97 + uVar83,uVar91)) <
           (byte)-((-1 - (uVar90 < uVar86)) + (0xffffffff00000000 < uVar80));
  uVar97 = uVar87 - uVar88;
  uVar103 = uVar79 - 0xffffffff;
  uVar83 = uVar78 + 1;
  if (bVar62) {
    uVar97 = uVar87;
    uVar103 = uVar76;
    uVar83 = uVar78;
  }
  *puVar67 = uVar83;
  puVar67[1] = uVar103;
  uVar103 = uVar80 + 0xffffffff;
  if (bVar62) {
    uVar103 = uVar90;
  }
  puVar67[2] = uVar97;
  puVar67[3] = uVar103;
  return;
}



/* Entry: 006fb1d0; end: 006fb443;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_006fb1d0(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  long lVar57;
  undefined1 in_ZR;
  bool bVar58;
  bool bVar59;
  char cVar60;
  undefined1 uVar61;
  bool bVar62;
  int iVar63;
  undefined8 uVar64;
  code *pcVar65;
  ulong *puVar66;
  undefined8 *puVar67;
  ulong *puVar68;
  char *pcVar69;
  undefined8 *puVar70;
  undefined1 *puVar71;
  undefined1 *puVar72;
  undefined1 *puVar73;
  ulong *puVar74;
  ulong uVar75;
  ulong *puVar76;
  ulong uVar77;
  ulong uVar78;
  ulong uVar79;
  ulong uVar80;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint uVar81;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar82;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  uint uVar83;
  uint extraout_w9;
  uint extraout_w9_00;
  long lVar84;
  ulong uVar85;
  ulong uVar86;
  ulong uVar87;
  ulong uVar88;
  ulong uVar89;
  ulong uVar90;
  ulong uVar91;
  ulong uVar92;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar93;
  long unaff_x21;
  long lVar94;
  ulong uVar95;
  int iVar96;
  ulong uVar97;
  ulong *puVar98;
  ulong uVar99;
  uint uVar100;
  ulong uVar101;
  ulong unaff_x24;
  ulong uVar102;
  ulong uVar103;
  ulong uVar104;
  ulong uVar105;
  ulong unaff_x28;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  long lVar110;
  undefined8 auStack_1240 [2];
  undefined8 uStack_1230;
  ulong uStack_11f0;
  ulong uStack_11e8;
  ulong uStack_11e0;
  ulong uStack_11d8;
  ulong uStack_11b0;
  ulong uStack_11a8;
  ulong uStack_11a0;
  ulong uStack_1198;
  undefined8 uStack_1188;
  ulong *puStack_1180;
  ulong *puStack_1178;
  undefined1 *puStack_1170;
  ulong *puStack_1168;
  undefined1 ******ppppppuStack_1160;
  code *pcStack_1158;
  ulong *puStack_1150;
  ulong *puStack_1148;
  ulong *puStack_1138;
  ulong auStack_1130 [4];
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  ulong auStack_10d0 [5];
  char acStack_10a1 [257];
  undefined1 auStack_fa0 [32];
  ulong auStack_f80 [4];
  ulong auStack_f60 [4];
  ulong auStack_f40 [4];
  ulong auStack_f20 [4];
  ulong auStack_f00 [4];
  undefined1 auStack_ee0 [32];
  undefined1 auStack_ec0 [32];
  undefined1 auStack_ea0 [624];
  undefined1 *puStack_c30;
  undefined1 *puStack_c28;
  undefined8 *puStack_c20;
  undefined1 *puStack_c18;
  undefined1 *puStack_c10;
  undefined1 *puStack_c08;
  undefined1 *puStack_c00;
  undefined1 *puStack_bf8;
  undefined1 auStack_bf0 [16];
  undefined1 *****pppppuStack_be0;
  undefined8 uStack_bd8;
  undefined1 auStack_bd0 [32];
  undefined1 auStack_bb0 [32];
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  ulong auStack_b50 [6];
  ulong uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  ulong uStack_b08;
  ulong uStack_b00;
  undefined8 *puStack_af8;
  ulong uStack_af0;
  ulong *puStack_ae8;
  undefined8 *puStack_ae0;
  undefined1 *puStack_ad8;
  undefined1 ****ppppuStack_ad0;
  undefined8 uStack_ac8;
  ulong *puStack_ac0;
  undefined8 *puStack_ab8;
  undefined1 *puStack_aa8;
  ulong *puStack_aa0;
  undefined8 *puStack_a98;
  long lStack_a90;
  long lStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  ulong uStack_a60;
  ulong uStack_a58;
  ulong uStack_a50;
  ulong uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  ulong auStack_998 [4];
  ulong auStack_978 [8];
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  ulong auStack_378 [4];
  undefined8 auStack_358 [4];
  undefined8 auStack_338 [3];
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined1 **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined1 auStack_190 [32];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 auStack_150 [4];
  undefined1 auStack_130 [32];
  char acStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x006fe490();
  func_0x006fd5fc();
  uStack_48 = extraout_x8;
  FUN_006ec074();
  if (param_1 == 0) {
    uStack_170 = unaff_x20[0x12];
    uStack_168 = unaff_x20[0x13];
    uStack_160 = unaff_x20[0x14];
    uStack_158 = unaff_x20[0x15];
    FUN_006fc3e0(&uStack_70,&uStack_170);
    func_0x006fe214(&uStack_70,&uStack_70);
    FUN_006fc3e0(auStack_90,&uStack_70);
    func_0x006fe214(auStack_90,auStack_90);
    FUN_006fc3e0(auStack_b0,auStack_90);
    iVar96 = 2;
    while( true ) {
      if (iVar96 == 0) break;
      FUN_006fc3e0();
      iVar96 = iVar96 + -1;
    }
    FUN_006fbf84(auStack_b0,auStack_b0,auStack_90);
    FUN_006fc3e0(auStack_d0,auStack_b0);
    iVar96 = 5;
    while( true ) {
      if (iVar96 == 0) break;
      FUN_006fc3e0();
      iVar96 = iVar96 + -1;
    }
    FUN_006fbf84(auStack_d0,auStack_d0,auStack_b0);
    FUN_006fc3e0(auStack_f0,auStack_d0);
    iVar96 = 2;
    while( true ) {
      if (iVar96 == 0) break;
      FUN_006fc3e0();
      iVar96 = iVar96 + -1;
    }
    FUN_006fbf84(auStack_f0,auStack_f0,auStack_90);
    FUN_006fc3e0(acStack_110,auStack_f0);
    iVar96 = 0xe;
    while( true ) {
      if (iVar96 == 0) break;
      FUN_006fc3e0();
      iVar96 = iVar96 + -1;
    }
    func_0x006fe8c0(acStack_110,acStack_110);
    FUN_006fc3e0(auStack_130,acStack_110);
    FUN_006fc3e0(auStack_130,auStack_130);
    FUN_006fbf84(auStack_130,auStack_130,&uStack_70);
    FUN_006fc3e0(auStack_150,auStack_130);
    for (iVar96 = 0x1f; func_0x006fe628(), iVar96 != 0; iVar96 = iVar96 + -1) {
      FUN_006fc3e0();
    }
    func_0x006fe214();
    for (iVar96 = 0x80; func_0x006fe628(), iVar96 != 0; iVar96 = iVar96 + -1) {
      FUN_006fc3e0();
    }
    FUN_006fbf84();
    for (iVar96 = 0x20; func_0x006fe628(), iVar96 != 0; iVar96 = iVar96 + -1) {
      FUN_006fc3e0();
    }
    FUN_006fbf84();
    for (iVar96 = 0x1e; func_0x006fe628(), iVar96 != 0; iVar96 = iVar96 + -1) {
      FUN_006fc3e0();
    }
    pcVar69 = acStack_110;
    FUN_006fbf84();
    func_0x006fe628();
    FUN_006fc3e0();
    param_2 = auStack_150;
    FUN_006fc3e0(auStack_190);
    if (unaff_x21 != 0) {
      uStack_70 = *unaff_x20;
      uStack_68 = unaff_x20[1];
      uStack_60 = unaff_x20[2];
      uStack_58 = unaff_x20[3];
      func_0x006fe31c();
      param_2 = &uStack_70;
      FUN_006fc2e4();
    }
    if (unaff_x19 != 0) {
      uStack_70 = unaff_x20[9];
      uStack_68 = unaff_x20[10];
      uStack_60 = unaff_x20[0xb];
      uStack_58 = unaff_x20[0xc];
      FUN_006fc3e0(auStack_190,auStack_190);
      func_0x006fe214(&uStack_70,&uStack_70);
      func_0x006fe31c();
      param_2 = &uStack_70;
      func_0x006fde74();
    }
    uVar64 = 1;
  }
  else {
    func_0x006fd880();
    pcVar69 = section_00000068.sectname + 0xf;
    func_0x006fd5dc();
    uVar64 = 0;
  }
  func_0x006fd534(uStack_48,uVar64);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_006fb444;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x006fd5e8();
  uStack_1d8 = *(undefined8 *)(pcVar69 + 8);
  uStack_1e0 = *(undefined8 *)pcVar69;
  uStack_1c8 = *(undefined8 *)(pcVar69 + 0x18);
  uStack_1d0 = *(undefined8 *)(pcVar69 + 0x10);
  uStack_1f8 = *(undefined8 *)(pcVar69 + 0x50);
  uStack_200 = *(undefined8 *)(pcVar69 + 0x48);
  uStack_1e8 = *(undefined8 *)(pcVar69 + 0x60);
  uStack_1f0 = *(undefined8 *)(pcVar69 + 0x58);
  uStack_220 = *(undefined8 *)(pcVar69 + 0x90);
  uStack_218 = *(undefined8 *)(pcVar69 + 0x98);
  uStack_210 = *(undefined8 *)(pcVar69 + 0xa0);
  uStack_208 = *(undefined8 *)(pcVar69 + 0xa8);
  uStack_240 = *param_4;
  uStack_238 = param_4[1];
  uStack_230 = param_4[2];
  uStack_228 = param_4[3];
  uStack_260 = param_4[9];
  uStack_258 = param_4[10];
  uStack_250 = param_4[0xb];
  uStack_248 = param_4[0xc];
  uStack_280 = param_4[0x12];
  uStack_278 = param_4[0x13];
  uStack_270 = param_4[0x14];
  uStack_268 = param_4[0x15];
  puStack_288 = &uStack_280;
  puStack_290 = &uStack_260;
  puVar70 = &uStack_220;
  func_0x006fe164(&uStack_1e0,&uStack_200,puVar70,&uStack_1e0,&uStack_200,&uStack_220);
  func_0x006fde74();
  FUN_006fc2e4(param_2 + 9,&uStack_200);
  puVar67 = &uStack_220;
  FUN_006fc2e4(param_2 + 0x12,puVar67);
  func_0x006fd534(uStack_1b8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar66 = &uStack_320;
  puVar74 = &uStack_320;
  uStack_298 = 0x6fb4f8;
  ppuStack_2a0 = &puStack_1a0;
  func_0x006fd5e8();
  uStack_2e0 = *puVar70;
  uStack_2d8 = puVar70[1];
  pppuStack_2d0 = (undefined1 ***)puVar70[2];
  pcStack_2c8 = (code *)puVar70[3];
  uStack_300 = puVar70[9];
  uStack_2f8 = puVar70[10];
  uStack_2f0 = puVar70[0xb];
  uStack_2e8 = puVar70[0xc];
  uStack_320 = puVar70[0x12];
  uStack_318 = puVar70[0x13];
  uStack_310 = puVar70[0x14];
  uStack_308 = puVar70[0x15];
  func_0x006fe61c();
  puVar70 = &uStack_2e0;
  FUN_006fcba0();
  func_0x006fde74();
  FUN_006fc2e4(puVar67 + 9,&uStack_300);
  FUN_006fc2e4(puVar67 + 0x12);
  func_0x006fd534(uStack_2b8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcVar65 = FUN_006fb580;
  func_0x006fdcd0();
  puStack_aa8 = (undefined1 *)puVar74;
  pppuStack_2d0 = &ppuStack_2a0;
  pcStack_2c8 = pcVar65;
  func_0x006fd5fc();
  auStack_338[0] = extraout_x8_00;
  _bzero(auStack_998,0x660);
  uStack_938 = *puVar66;
  uStack_930 = puVar66[1];
  uStack_928 = puVar66[2];
  uStack_920 = puVar66[3];
  uStack_918 = puVar66[9];
  uStack_910 = puVar66[10];
  uStack_908 = puVar66[0xb];
  uStack_900 = puVar66[0xc];
  uStack_8f8 = puVar66[0x12];
  uStack_8f0 = puVar66[0x13];
  uStack_8e8 = puVar66[0x14];
  uStack_8e0 = puVar66[0x15];
  lVar94 = -0x5a0;
  uVar97 = 2;
  do {
    if ((uVar97 & 1) == 0) {
      puVar74 = auStack_998 + (uVar97 >> 1) * 0xc;
      puVar71 = (undefined1 *)((long)&uStack_2f8 + lVar94);
      puVar66 = auStack_978 + (uVar97 >> 1) * 0xc;
      FUN_006fcba0((long)auStack_338 + lVar94,(long)&uStack_318 + lVar94);
    }
    else {
      puStack_ac0 = (ulong *)((long)auStack_378 + lVar94);
      puStack_ab8 = (undefined8 *)((long)auStack_358 + lVar94);
      puVar71 = (undefined1 *)((long)&uStack_2f8 + lVar94);
      puVar74 = &uStack_938;
      puVar66 = &uStack_918;
      func_0x006fe164((long)auStack_338 + lVar94,(long)&uStack_318 + lVar94);
    }
    uVar97 = uVar97 + 1;
    lVar94 = lVar94 + 0x60;
  } while (lVar94 != 0);
  uStack_9b8 = 0;
  uStack_9c0 = 0;
  uStack_9a8 = 0;
  uStack_9b0 = 0;
  uStack_9d8 = 0;
  uStack_9e0 = 0;
  uStack_9c8 = 0;
  uStack_9d0 = 0;
  puStack_a98 = &uStack_a40;
  uStack_9f8 = 0;
  uStack_a00 = 0;
  uStack_9e8 = 0;
  uStack_9f0 = 0;
  puStack_aa0 = auStack_978 + 1;
  uVar64 = 1;
  for (uVar103 = 0xff; puVar73 = puStack_aa8, uVar61 = uVar103 == 0x100, uVar103 < 0x100;
      uVar103 = uVar103 - 1) {
    if ((int)uVar64 == 0) {
      func_0x006fe140();
      FUN_006fcba0();
    }
    uVar100 = (uint)uVar103;
    if (uVar100 == (uVar100 / 5) * 5) {
      if (uVar103 < 0xfc) {
        func_0x006fd6b0(uVar100 + 4);
        uVar81 = (extraout_w8 & 1) << 5;
        uVar83 = uVar100 + 3;
LAB_006fb6d4:
        uVar81 = uVar81 | (*(byte *)((long)puVar70 + (ulong)(uVar83 >> 3)) >> (ulong)(uVar83 & 7) &
                          1) << 4;
LAB_006fb6f0:
        func_0x006fec2c(uVar81);
        uVar97 = extraout_x8_01 | (extraout_w9 & 1) << 3;
LAB_006fb700:
        uVar82 = uVar97 | (*(byte *)((long)puVar70 + (ulong)(uVar100 + 1 >> 3)) >>
                           (ulong)(uVar100 + 1 & 7) & 1) << 2;
      }
      else {
        if (uVar103 == 0xfc) {
          uVar81 = 0;
          uVar83 = 0xff;
          goto LAB_006fb6d4;
        }
        if (uVar103 < 0xfe) {
          uVar81 = 0;
          goto LAB_006fb6f0;
        }
        uVar97 = 0;
        uVar82 = 0;
        if (uVar103 != 0xff) goto LAB_006fb700;
      }
      if (uVar100 - 1 < 0x100) {
        func_0x006fec2c();
        uVar97 = (ulong)(extraout_w9_00 & 1);
        uVar82 = extraout_x8_02;
      }
      else {
        uVar97 = 0;
      }
      puVar71 = (undefined1 *)
                (uVar82 | (*(byte *)((long)puVar70 + (uVar103 >> 3)) >> (ulong)(uVar100 & 7) & 1) <<
                          1 | uVar97);
      FUN_006ef290(&lStack_a88,&lStack_a90);
      unaff_x24 = 0;
      auVar106 = ZEXT216(0);
      lVar84 = 0x660;
      auVar109 = ZEXT216(0);
      auVar107 = ZEXT216(0);
      auVar108 = ZEXT216(0);
      lVar94 = lStack_a90;
      puVar98 = puStack_aa0;
      uVar82 = 0;
      uVar87 = 0;
      uVar89 = 0;
      do {
        bVar62 = lVar94 == 0;
        uVar97 = *puVar98;
        uVar85 = puVar98[-1];
        if (!bVar62) {
          uVar97 = uVar87;
          uVar85 = unaff_x24;
        }
        unaff_x24 = uVar85;
        uVar85 = puVar98[1];
        if (!bVar62) {
          uVar85 = uVar82;
        }
        lVar57 = -(ulong)((long)((ulong)CONCAT14(bVar62,(uint)bVar62) << 0x3f) < 0);
        lVar110 = -(ulong)((long)((ulong)bVar62 << 0x3f) < 0);
        auVar53._8_8_ = lVar110;
        auVar53._0_8_ = lVar57;
        auVar106 = auVar106 ^ (auVar106 ^ *(undefined1 (*) [16])(puVar98 + -5)) & auVar53;
        auVar54._8_8_ = lVar110;
        auVar54._0_8_ = lVar57;
        auVar109 = auVar109 ^ (auVar109 ^ *(undefined1 (*) [16])(puVar98 + -3)) & auVar54;
        unaff_x28 = puVar98[2];
        if (!bVar62) {
          unaff_x28 = uVar89;
        }
        auVar55._8_8_ = lVar110;
        auVar55._0_8_ = lVar57;
        auVar107 = auVar107 ^ (auVar107 ^ *(undefined1 (*) [16])(puVar98 + 3)) & auVar55;
        auVar56._8_8_ = lVar110;
        auVar56._0_8_ = lVar57;
        auVar108 = auVar108 ^ (auVar108 ^ *(undefined1 (*) [16])(puVar98 + 5)) & auVar56;
        lVar84 = lVar84 + -0x60;
        puVar98 = puVar98 + 0xc;
        lVar94 = lVar94 + -1;
        uVar82 = uVar85;
        uVar87 = uVar97;
        uVar89 = unaff_x28;
      } while (lVar84 != 0);
      uStack_a78 = auVar106._8_8_;
      uStack_a80 = auVar106._0_8_;
      uStack_a68 = auVar109._8_8_;
      uStack_a70 = auVar109._0_8_;
      uStack_a38 = auVar107._8_8_;
      uStack_a40 = auVar107._0_8_;
      uStack_a28 = auVar108._8_8_;
      uStack_a30 = auVar108._0_8_;
      uStack_a60 = unaff_x24;
      uStack_a58 = uVar97;
      uStack_a50 = uVar85;
      uStack_a48 = unaff_x28;
      func_0x006fcd58(&uStack_a20,&uStack_a60);
      uStack_a48 = unaff_x28;
      uStack_a50 = uVar85;
      uStack_a58 = uVar97;
      uStack_a60 = unaff_x24;
      if (lStack_a88 != 0) {
        uStack_a48 = uStack_a08;
        uStack_a50 = uStack_a10;
        uStack_a58 = uStack_a18;
        uStack_a60 = uStack_a20;
      }
      if ((int)uVar64 == 0) {
        puStack_ab8 = puStack_a98;
        puStack_ac0 = &uStack_a60;
        func_0x006fe140();
        func_0x006fe164();
      }
      else {
        func_0x006fcb80(&uStack_a00,&uStack_a80);
        func_0x006fe428(&uStack_9e0);
        func_0x006fcb80(&uStack_9c0,puStack_a98);
      }
      uVar64 = 0;
    }
  }
  func_0x006fde74();
  FUN_006fc2e4(puVar73 + 0x48,&uStack_9e0);
  puVar67 = &uStack_9c0;
  FUN_006fc2e4(puVar73 + 0x90);
  func_0x006fd534(auStack_338[0]);
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uStack_b10 = 5;
  puStack_ad8 = puVar73;
  uStack_ac8 = 0x6fb8e0;
  bVar62 = false;
  puVar72 = puVar71;
  puStack_c20 = puVar67;
  uStack_b20 = unaff_x28;
  uStack_b18 = uVar64;
  uStack_b08 = uVar103;
  uStack_b00 = unaff_x24;
  puStack_af8 = &uStack_a00;
  uStack_af0 = uVar97;
  puStack_ae8 = &uStack_a60;
  puStack_ae0 = puVar70;
  ppppuStack_ad0 = &pppuStack_2d0;
  func_0x006fd588();
  puStack_bf8 = puVar72 + 0x1c;
  puStack_c00 = puVar72 + 0x14;
  puStack_c08 = puVar72 + 0xc;
  auStack_b50[1] = 0;
  auStack_b50[0] = 0;
  auStack_b50[3] = 0;
  auStack_b50[2] = 0;
  puStack_c10 = puVar72 + 4;
  puStack_c18 = puVar72 + 0x18;
  uStack_b68 = 0;
  uStack_b70 = 0;
  uStack_b58 = 0;
  uStack_b60 = 0;
  uStack_b88 = 0;
  uStack_b90 = 0;
  uStack_b78 = 0;
  uStack_b80 = 0;
  puVar73 = puVar72;
  for (uVar97 = 0x1f; puVar70 = puStack_c20, uVar61 = uVar97 == 0x20, uVar97 < 0x20;
      uVar97 = uVar97 - 1) {
    if (bVar62) {
      func_0x006fd994();
      FUN_006fcba0();
    }
    uVar103 = uVar97 >> 3;
    uVar100 = (uint)uVar97 & 7;
    uVar83 = ((byte)puStack_bf8[uVar103] >> (ulong)uVar100 & 1) << 3;
    func_0x006fea80(puStack_c00,uVar83);
    uVar83 = uVar83 & 0xfffffff8 | uVar83 & 3 | (extraout_w8_00 & 1) << 2;
    func_0x006fea80(puStack_c08,uVar83);
    uVar83 = uVar83 & 0xfffffffc | uVar83 & 1 | (extraout_w8_01 & 1) << 1;
    func_0x006fea80(puStack_c10,uVar83);
    FUN_006fcdd8(uVar83 & 0xfffffffe | extraout_w8_02 & 1,&UNK_00838268,auStack_bf0);
    if (bVar62) {
      puStack_c30 = auStack_bd0;
      puStack_c28 = auStack_bb0;
      func_0x006fd994();
      func_0x006fe378();
    }
    else {
      func_0x006fcb80(&uStack_b90,auStack_bf0);
      func_0x006fe428(&uStack_b70);
      func_0x006fcb80(auStack_b50,auStack_bb0);
    }
    func_0x006fea80(puStack_c18);
    puVar73 = auStack_bf0;
    FUN_006fcdd8((extraout_w8_03 & 1) << 3 |
                 ((byte)puVar72[uVar103 + 0x10] >> (ulong)uVar100 & 1) << 2 |
                 ((byte)puVar72[uVar103 + 8] >> (ulong)uVar100 & 1) << 1 |
                 (byte)puVar71[uVar103] >> (ulong)uVar100 & 1,&UNK_00837ea8);
    bVar62 = true;
    puStack_c30 = auStack_bd0;
    puStack_c28 = auStack_bb0;
    func_0x006fd994();
    func_0x006fe378();
  }
  func_0x006fde74();
  FUN_006fc2e4(puVar70 + 9,&uStack_b70);
  puVar98 = puVar70 + 0x12;
  puVar68 = auStack_b50;
  FUN_006fc2e4();
  func_0x006fd508();
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uVar64 = 0x6fbaa0;
  func_0x006fdcd0();
  puStack_1138 = puVar68;
  pppppuStack_be0 = &ppppuStack_ad0;
  uStack_bd8 = uVar64;
  func_0x006fd588();
  auStack_f40[0] = *puVar74;
  auStack_f40[1] = puVar74[1];
  auStack_f40[2] = puVar74[2];
  auStack_f40[3] = puVar74[3];
  auStack_f20[0] = puVar74[9];
  auStack_f20[1] = puVar74[10];
  auStack_f20[2] = puVar74[0xb];
  auStack_f20[3] = puVar74[0xc];
  auStack_f00[0] = puVar74[0x12];
  auStack_f00[1] = puVar74[0x13];
  auStack_f00[2] = puVar74[0x14];
  auStack_f00[3] = puVar74[0x15];
  FUN_006fcba0(auStack_fa0,auStack_f80,auStack_f60,auStack_f40,auStack_f20,auStack_f00);
  for (lVar94 = 0; lVar94 != 0x2a0; lVar94 = lVar94 + 0x60) {
    puStack_1150 = auStack_f80;
    puStack_1148 = auStack_f60;
    func_0x006fe164(auStack_ee0 + lVar94,auStack_ec0 + lVar94,auStack_ea0 + lVar94,
                    (long)auStack_f40 + lVar94,(long)auStack_f20 + lVar94,(long)auStack_f00 + lVar94
                   );
  }
  uVar97 = 0x100;
  puVar74 = puVar66;
  func_0x006ef2c4(puVar98,acStack_10a1,puVar66,0x100);
  auStack_10d0[1] = 0;
  auStack_10d0[0] = 0;
  auStack_10d0[3] = 0;
  auStack_10d0[2] = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  uStack_10d8 = 0;
  uStack_10e0 = 0;
  uStack_1108 = 0;
  uStack_1110 = 0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  bVar62 = true;
  do {
    if (!bVar62) {
      func_0x006fd6e0();
      FUN_006fcba0();
    }
    uVar100 = (uint)uVar97;
    uVar61 = uVar100 == 0x1f;
    if (uVar100 < 0x20) {
      puVar66 = (ulong *)(puVar73 + (uVar100 >> 3));
      uVar83 = uVar100 & 7;
      puVar98 = (ulong *)(ulong)uVar83;
      uVar81 = (*(byte *)((long)puVar66 + 0x1c) >> (long)puVar98 & 1) << 3 |
               (*(byte *)((long)puVar66 + 0x14) >> (ulong)uVar83 & 1) << 2 |
               (*(byte *)((long)puVar66 + 0xc) >> (long)puVar98 & 1) << 1 |
               *(byte *)((long)puVar66 + 4) >> (ulong)uVar83 & 1;
      if (uVar81 != 0) {
        puStack_1150 = (ulong *)(&UNK_00838248 + (ulong)uVar81 * 0x40);
        puStack_1148 = (ulong *)&UNK_00838628;
        func_0x006fd6e0();
        func_0x006fe378();
        bVar62 = false;
      }
      uVar83 = ((byte)((byte)puVar66[3] >> (ulong)uVar83) & 1) << 3 |
               ((byte)((byte)puVar66[2] >> (ulong)uVar83) & 1) << 2 |
               ((byte)((byte)puVar66[1] >> (long)puVar98) & 1) << 1 |
               (byte)((byte)*puVar66 >> (ulong)uVar83) & 1;
      if (uVar83 != 0) {
        puStack_1150 = (ulong *)(&UNK_00837e88 + (ulong)uVar83 * 0x40);
        puStack_1148 = (ulong *)&UNK_00838628;
        func_0x006fd6e0();
        func_0x006fe378();
        bVar62 = false;
      }
    }
    cVar60 = acStack_10a1[uVar97];
    if (cVar60 != '\0') {
      uVar61 = cVar60 == '\0';
      uVar81 = (uint)cVar60;
      uVar83 = -uVar81;
      if (-1 < cVar60) {
        uVar83 = uVar81;
      }
      uVar97 = (ulong)(uVar83 >> 1);
      puVar66 = auStack_f40 + uVar97 * 0xc;
      puVar98 = auStack_f20 + uVar97 * 0xc;
      if ((int)uVar81 < 0) {
        func_0x006fcd58(auStack_1130,puVar98);
        puVar98 = auStack_1130;
        if (!bVar62) goto LAB_006fbcc0;
LAB_006fbc88:
        func_0x006fe428(&uStack_1110);
        func_0x006fcb80(&uStack_10f0,puVar98);
        func_0x006fcb80(auStack_10d0,auStack_f00 + uVar97 * 0xc);
      }
      else {
        if (bVar62) goto LAB_006fbc88;
LAB_006fbcc0:
        puStack_1148 = auStack_f00 + uVar97 * 0xc;
        puStack_1150 = puVar98;
        func_0x006fd6e0();
        FUN_006fc724();
      }
      bVar62 = false;
    }
    puVar68 = puStack_1138;
    uVar97 = (ulong)(uVar100 - 1);
  } while (-1 < (int)(uVar100 - 1));
  func_0x006fde74();
  FUN_006fc2e4(puVar68 + 9,&uStack_10f0);
  iVar96 = (int)puVar68 + 0x90;
  puVar76 = auStack_10d0;
  FUN_006fc2e4();
  func_0x006fd508();
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  iVar63 = (int)auStack_1240;
  puStack_1168 = puVar68;
  pcStack_1158 = FUN_006fbd20;
  puStack_1180 = puVar98;
  puStack_1178 = puVar66;
  puStack_1170 = puVar73;
  ppppppuStack_1160 = &pppppuStack_be0;
  func_0x006fd9b0();
  func_0x006fd5fc();
  uStack_1188 = extraout_x8_03;
  FUN_006ec074();
  if (iVar96 == 0) {
    uStack_11b0 = puVar66[0x12];
    uStack_11a8 = puVar66[0x13];
    uStack_11a0 = puVar66[0x14];
    uStack_1198 = puVar66[0x15];
    FUN_006fbf84(&uStack_11b0,&uStack_11b0,&uStack_11b0);
    func_0x006fe078(*puVar68,puVar68[2]);
    uVar97 = *puVar66;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uVar97;
    uVar87 = SUB168(auVar106 * ZEXT816(0xffffffff00000001),8);
    uVar89 = uVar97 - (uVar97 << 0x20);
    auVar107._8_8_ = 0;
    auVar107._0_8_ = uVar97;
    lVar94 = SUB168(auVar107 * ZEXT816(0xffffffff),8);
    uVar85 = (uVar97 << 0x20) - uVar97;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar97;
    uVar103 = SUB168(auVar108 * ZEXT816(0xffffffffffffffff),8);
    uVar82 = uVar103 + uVar85 + (ulong)CARRY8(-uVar97,uVar97);
    if (CARRY8(uVar103,uVar85) || CARRY8(uVar103 + uVar85,(ulong)CARRY8(-uVar97,uVar97))) {
      lVar94 = lVar94 + 1;
    }
    uVar97 = uVar82 + puVar66[1];
    auVar109._8_8_ = 0;
    auVar109._0_8_ = uVar97;
    uVar85 = SUB168(auVar109 * ZEXT816(0xffffffffffffffff),8);
    uVar86 = uVar97 - (uVar97 << 0x20);
    uVar79 = (uVar97 << 0x20) - uVar97;
    uVar103 = uVar85 + uVar79;
    uVar75 = lVar94 + (ulong)CARRY8(uVar82,puVar66[1]) + (ulong)CARRY8(-uVar97,uVar97);
    uVar77 = uVar89 + CARRY8(uVar75,uVar103);
    uVar78 = (ulong)CARRY8(uVar89,(ulong)CARRY8(uVar75,uVar103));
    uVar82 = uVar86 + uVar87;
    uVar87 = (ulong)CARRY8(uVar86,uVar87);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar97;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar97;
    uVar97 = SUB168(auVar2 * ZEXT816(0xffffffff),8);
    bVar62 = CARRY8(uVar77,uVar97) || CARRY8(uVar77 + uVar97,(ulong)CARRY8(uVar85,uVar79));
    uVar97 = uVar77 + uVar97 + (ulong)CARRY8(uVar85,uVar79);
    uVar89 = uVar82 + uVar78 + (ulong)bVar62;
    if (CARRY8(uVar82,uVar78) || CARRY8(uVar82 + uVar78,(ulong)bVar62)) {
      uVar87 = uVar87 + 1;
    }
    bVar62 = CARRY8(uVar75 + uVar103,puVar66[2]);
    uVar103 = uVar75 + uVar103 + puVar66[2];
    uVar82 = uVar89 + CARRY8(uVar97,(ulong)bVar62);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar103;
    uVar85 = SUB168(auVar3 * ZEXT816(0xffffffffffffffff),8);
    uVar87 = uVar87 + SUB168(auVar1 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar89,(ulong)CARRY8(uVar97,(ulong)bVar62));
    uVar86 = uVar103 - (uVar103 << 0x20);
    uVar89 = (uVar103 << 0x20) - uVar103;
    bVar58 = CARRY8(uVar97 + bVar62,uVar85 + uVar89) ||
             CARRY8(uVar97 + bVar62 + uVar85 + uVar89,(ulong)CARRY8(-uVar103,uVar103));
    uVar75 = uVar82 + bVar58;
    uVar77 = (ulong)CARRY8(uVar82,(ulong)bVar58);
    uVar82 = uVar86 + uVar87;
    uVar87 = (ulong)CARRY8(uVar86,uVar87);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar103;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar103;
    uVar86 = SUB168(auVar5 * ZEXT816(0xffffffff),8);
    uVar97 = uVar97 + bVar62 + (ulong)CARRY8(-uVar103,uVar103) + uVar85 + uVar89;
    bVar62 = CARRY8(uVar75,uVar86) || CARRY8(uVar75 + uVar86,(ulong)CARRY8(uVar85,uVar89));
    uVar103 = uVar75 + uVar86 + (ulong)CARRY8(uVar85,uVar89);
    uVar89 = uVar82 + uVar77 + (ulong)bVar62;
    if (CARRY8(uVar82,uVar77) || CARRY8(uVar82 + uVar77,(ulong)bVar62)) {
      uVar87 = uVar87 + 1;
    }
    bVar62 = CARRY8(uVar97,puVar66[3]);
    uVar97 = uVar97 + puVar66[3];
    uVar75 = uVar89 + CARRY8(uVar103,(ulong)bVar62);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar97;
    uVar85 = SUB168(auVar6 * ZEXT816(0xffffffff00000001),8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar97;
    puVar76 = SUB168(auVar7 * ZEXT816(0xffffffff),8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar97;
    uVar86 = SUB168(auVar8 * ZEXT816(0xffffffffffffffff),8);
    uVar89 = uVar87 + SUB168(auVar4 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar89,(ulong)CARRY8(uVar103,(ulong)bVar62));
    puVar74 = (ulong *)(uVar97 - (uVar97 << 0x20));
    uVar87 = (uVar97 << 0x20) - uVar97;
    uVar82 = uVar86 + uVar87;
    if (CARRY8(uVar86,uVar87)) {
      puVar76 = (ulong *)((long)puVar76 + 1);
    }
    uVar87 = uVar103 + bVar62 + (ulong)CARRY8(-uVar97,uVar97) + uVar82;
    bVar62 = CARRY8(uVar103 + bVar62,uVar82) ||
             CARRY8(uVar103 + bVar62 + uVar82,(ulong)CARRY8(-uVar97,uVar97));
    bVar58 = CARRY8(uVar75,(ulong)puVar76) || CARRY8(uVar75 + (long)puVar76,(ulong)bVar62);
    uVar97 = (long)puVar76 + bVar62 + uVar75;
    uVar103 = (long)puVar74 + bVar58 + uVar89;
    if (CARRY8((ulong)puVar74,uVar89) || CARRY8((long)puVar74 + uVar89,(ulong)bVar58)) {
      uVar85 = uVar85 + 1;
    }
    uVar82 = (ulong)(byte)-((0xfffffffffffffffe < uVar87) + -1);
    uVar86 = uVar97 - uVar82;
    uVar82 = (ulong)(byte)-((-1 - (uVar97 < uVar82)) + (0xfffffffe < uVar86));
    uVar89 = (ulong)(uVar103 < uVar82);
    uVar75 = uVar85 - uVar89;
    iVar96 = -(uint)(uVar85 < uVar89);
    uVar61 = (char)((char)iVar96 + -1 + (0xffffffff00000000 < uVar75)) == '\0';
    uStack_11d8 = uVar75 + 0xffffffff;
    uStack_11e0 = uVar103 - uVar82;
    uStack_11e8 = uVar86 - 0xffffffff;
    uStack_11f0 = uVar87 + 1;
    if (!(bool)uVar61) {
      uStack_11d8 = uVar85;
      uStack_11e0 = uVar103;
      uStack_11e8 = uVar97;
      uStack_11f0 = uVar87;
    }
    func_0x006fe338();
    if (iVar96 == 0) {
LAB_006fbf78:
      puVar66 = (ulong *)((long)&MACH_HEADER.magic + 1);
      goto LAB_006fbd4c;
    }
    puVar74 = (ulong *)(long)*(int *)(puVar73 + 0x40);
    puVar76 = (ulong *)(puVar73 + 0xe8);
    func_0x006fe7b8();
    if (iVar96 != 0) {
      puVar74 = *(ulong **)(puVar73 + 0x10);
      FUN_006e3678();
      func_0x006fe078(auStack_1240[0],uStack_1230);
      func_0x006fe338();
      puVar76 = puVar68;
      if (iVar63 == 0) goto LAB_006fbf78;
    }
  }
  puVar66 = (ulong *)0x0;
LAB_006fbd4c:
  func_0x006fd534(uStack_1188);
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uVar103 = *puVar76;
  uVar89 = puVar76[1];
  uVar82 = puVar74[2];
  uVar85 = puVar74[3];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar85;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar103;
  uVar97 = SUB168(auVar9 * auVar37,8);
  uVar88 = uVar85 * uVar103;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar82;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar103;
  uVar90 = SUB168(auVar10 * auVar38,8);
  uVar91 = uVar82 * uVar103;
  uVar87 = *puVar74;
  uVar86 = puVar74[1];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar86;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar103;
  uVar75 = SUB168(auVar11 * auVar39,8);
  uVar77 = uVar86 * uVar103;
  uVar78 = uVar87 * uVar103;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar87;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar103;
  uVar79 = SUB168(auVar12 * auVar40,8);
  bVar62 = CARRY8(uVar75,uVar91) || CARRY8(uVar75 + uVar91,(ulong)CARRY8(uVar79,uVar77));
  uVar91 = uVar75 + uVar91 + (ulong)CARRY8(uVar79,uVar77);
  uVar75 = uVar90 + uVar88 + (ulong)bVar62;
  if (CARRY8(uVar90,uVar88) || CARRY8(uVar90 + uVar88,(ulong)bVar62)) {
    uVar97 = uVar97 + 1;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar78;
  uVar80 = SUB168(auVar13 * ZEXT816(0xffffffff00000001),8);
  uVar90 = uVar78 - (uVar78 << 0x20);
  uVar93 = (uVar78 << 0x20) - uVar78;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar78;
  uVar95 = SUB168(auVar14 * ZEXT816(0xffffffffffffffff),8);
  bVar62 = CARRY8(-(uVar87 * uVar103),uVar78);
  bVar58 = CARRY8(uVar79 + uVar77,uVar95 + uVar93) ||
           CARRY8(uVar79 + uVar77 + uVar95 + uVar93,(ulong)bVar62);
  uVar92 = uVar91 + bVar58;
  uVar88 = (ulong)CARRY8(uVar91,(ulong)bVar58);
  uVar103 = uVar75 + uVar90;
  uVar90 = (ulong)CARRY8(uVar75,uVar90);
  uVar75 = uVar80 + uVar97;
  uVar91 = (ulong)CARRY8(uVar80,uVar97);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar85;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar89;
  uVar97 = SUB168(auVar15 * auVar41,8);
  uVar80 = uVar85 * uVar89;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar82;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar89;
  uVar99 = SUB168(auVar16 * auVar42,8);
  uVar101 = uVar82 * uVar89;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar86;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar89;
  uVar102 = SUB168(auVar17 * auVar43,8);
  uVar104 = uVar86 * uVar89;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar87;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar89;
  uVar105 = SUB168(auVar18 * auVar44,8);
  bVar58 = CARRY8(uVar102,uVar101) || CARRY8(uVar102 + uVar101,(ulong)CARRY8(uVar105,uVar104));
  uVar102 = uVar102 + uVar101 + (ulong)CARRY8(uVar105,uVar104);
  uVar101 = uVar99 + uVar80 + (ulong)bVar58;
  if (CARRY8(uVar99,uVar80) || CARRY8(uVar99 + uVar80,(ulong)bVar58)) {
    uVar97 = uVar97 + 1;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar78;
  uVar78 = SUB168(auVar19 * ZEXT816(0xffffffff),8);
  uVar77 = uVar79 + uVar77 + (ulong)bVar62 + uVar95 + uVar93;
  bVar62 = CARRY8(uVar92,uVar78) || CARRY8(uVar92 + uVar78,(ulong)CARRY8(uVar95,uVar93));
  uVar80 = uVar92 + uVar78 + (ulong)CARRY8(uVar95,uVar93);
  bVar58 = CARRY8(uVar103,uVar88) || CARRY8(uVar103 + uVar88,(ulong)bVar62);
  uVar88 = uVar103 + uVar88 + (ulong)bVar62;
  bVar59 = CARRY8(uVar75,uVar90) || CARRY8(uVar75 + uVar90,(ulong)bVar58);
  uVar78 = uVar75 + uVar90 + (ulong)bVar58;
  uVar89 = uVar87 * uVar89;
  uVar103 = uVar77 + uVar89;
  lVar94 = uVar105 + uVar104 + (ulong)CARRY8(uVar77,uVar89);
  uVar75 = lVar94 + uVar80;
  bVar62 = CARRY8(uVar105 + uVar104,uVar80) ||
           CARRY8(uVar105 + uVar104 + uVar80,(ulong)CARRY8(uVar77,uVar89));
  uVar79 = uVar102 + bVar62;
  uVar90 = (ulong)CARRY8(uVar102,(ulong)bVar62);
  uVar89 = uVar78 + uVar101;
  uVar93 = uVar103 - (uVar103 << 0x20);
  uVar95 = (uVar103 << 0x20) - uVar103;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar103;
  uVar99 = SUB168(auVar20 * ZEXT816(0xffffffffffffffff),8);
  uVar77 = uVar89 + uVar90 + (ulong)CARRY8(uVar79,uVar88);
  uVar78 = uVar97 + uVar91 + (ulong)bVar59 + (ulong)CARRY8(uVar78,uVar101) +
           (ulong)(CARRY8(uVar89,uVar90) || CARRY8(uVar89 + uVar90,(ulong)CARRY8(uVar79,uVar88)));
  uVar64 = nzcv;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar103;
  uVar92 = SUB168(auVar21 * ZEXT816(0xffffffff00000001),8);
  bVar62 = CARRY8(uVar75,uVar99 + uVar95) ||
           CARRY8(uVar75 + uVar99 + uVar95,(ulong)CARRY8(-uVar103,uVar103));
  uVar90 = uVar79 + uVar88 + (ulong)bVar62;
  uVar88 = (ulong)CARRY8(uVar79 + uVar88,(ulong)bVar62);
  uVar89 = uVar77 + uVar93;
  uVar79 = (ulong)CARRY8(uVar77,uVar93);
  uVar75 = uVar78 + uVar92;
  uVar77 = (ulong)CARRY8(uVar78,uVar92);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar103;
  uVar78 = SUB168(auVar22 * ZEXT816(0xffffffff),8);
  bVar62 = CARRY8(uVar90,uVar78) || CARRY8(uVar90 + uVar78,(ulong)CARRY8(uVar99,uVar95));
  uVar78 = uVar90 + uVar78 + (ulong)CARRY8(uVar99,uVar95);
  bVar58 = CARRY8(uVar89,uVar88) || CARRY8(uVar89 + uVar88,(ulong)bVar62);
  uVar88 = uVar89 + uVar88 + (ulong)bVar62;
  bVar62 = CARRY8(uVar75 + uVar79,(ulong)bVar58);
  uVar89 = uVar75 + uVar79 + (ulong)bVar58;
  if (CARRY8(uVar75,uVar79) || bVar62) {
    uVar77 = uVar77 + 1;
  }
  uVar103 = lVar94 + uVar80 + (ulong)CARRY8(-uVar103,uVar103) + uVar99 + uVar95;
  nzcv = uVar64;
  uVar80 = uVar77 + (CARRY8(uVar97,uVar91) || CARRY8(uVar97 + uVar91,(ulong)bVar59)) +
           (ulong)(CARRY8(uVar75,uVar79) || bVar62);
  uVar75 = puVar76[2];
  uVar77 = puVar76[3];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar85;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar75;
  uVar97 = SUB168(auVar23 * auVar45,8);
  uVar79 = uVar85 * uVar75;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar82;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar75;
  uVar91 = SUB168(auVar24 * auVar46,8);
  uVar90 = uVar82 * uVar75;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar86;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar75;
  uVar92 = SUB168(auVar25 * auVar47,8);
  uVar101 = uVar86 * uVar75;
  uVar93 = uVar87 * uVar75;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar87;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar75;
  uVar75 = SUB168(auVar26 * auVar48,8);
  bVar62 = CARRY8(uVar92,uVar90) || CARRY8(uVar92 + uVar90,(ulong)CARRY8(uVar75,uVar101));
  uVar92 = uVar92 + uVar90 + (ulong)CARRY8(uVar75,uVar101);
  uVar90 = uVar91 + uVar79 + (ulong)bVar62;
  if (CARRY8(uVar91,uVar79) || CARRY8(uVar91 + uVar79,(ulong)bVar62)) {
    uVar97 = uVar97 + 1;
  }
  uVar79 = uVar103 + uVar93;
  lVar94 = uVar75 + uVar101 + (ulong)CARRY8(uVar103,uVar93);
  uVar91 = lVar94 + uVar78;
  bVar62 = CARRY8(uVar75 + uVar101,uVar78) ||
           CARRY8(uVar75 + uVar101 + uVar78,(ulong)CARRY8(uVar103,uVar93));
  bVar58 = CARRY8(uVar92,uVar88) || CARRY8(uVar92 + uVar88,(ulong)bVar62);
  uVar92 = uVar92 + uVar88 + (ulong)bVar62;
  bVar62 = CARRY8(uVar90,uVar89) || CARRY8(uVar90 + uVar89,(ulong)bVar58);
  uVar88 = uVar90 + uVar89 + (ulong)bVar58;
  uVar90 = uVar97 + bVar62;
  uVar103 = uVar90 + uVar80;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar79;
  uVar101 = SUB168(auVar27 * ZEXT816(0xffffffff00000001),8);
  uVar93 = uVar79 - (uVar79 << 0x20);
  uVar95 = (uVar79 << 0x20) - uVar79;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar79;
  uVar75 = SUB168(auVar28 * ZEXT816(0xffffffff),8);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar79;
  uVar99 = SUB168(auVar29 * ZEXT816(0xffffffffffffffff),8);
  uVar89 = uVar99 + uVar95;
  if (CARRY8(uVar99,uVar95)) {
    uVar75 = uVar75 + 1;
  }
  bVar58 = CARRY8(uVar91,uVar89) || CARRY8(uVar91 + uVar89,(ulong)CARRY8(-uVar79,uVar79));
  bVar59 = CARRY8(uVar92,uVar75) || CARRY8(uVar92 + uVar75,(ulong)bVar58);
  uVar91 = uVar92 + uVar75 + (ulong)bVar58;
  bVar58 = CARRY8(uVar88,uVar93) || CARRY8(uVar88 + uVar93,(ulong)bVar59);
  uVar75 = uVar88 + uVar93 + (ulong)bVar59;
  uVar89 = lVar94 + uVar78 + (ulong)CARRY8(-uVar79,uVar79) + uVar89;
  uVar90 = (ulong)(CARRY8(uVar101,uVar103) || CARRY8(uVar101 + uVar103,(ulong)bVar58)) +
           (ulong)CARRY8(uVar97,(ulong)bVar62) + (ulong)CARRY8(uVar90,uVar80);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar85;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar77;
  uVar97 = SUB168(auVar30 * auVar49,8);
  uVar85 = uVar85 * uVar77;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar82;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar77;
  uVar78 = SUB168(auVar31 * auVar50,8);
  uVar82 = uVar82 * uVar77;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar86;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar77;
  uVar79 = SUB168(auVar32 * auVar51,8);
  uVar86 = uVar86 * uVar77;
  uVar88 = uVar87 * uVar77;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar87;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar77;
  uVar87 = SUB168(auVar33 * auVar52,8);
  bVar62 = CARRY8(uVar79,uVar82) || CARRY8(uVar79 + uVar82,(ulong)CARRY8(uVar87,uVar86));
  uVar82 = uVar79 + uVar82 + (ulong)CARRY8(uVar87,uVar86);
  if (CARRY8(uVar78,uVar85) || CARRY8(uVar78 + uVar85,(ulong)bVar62)) {
    uVar97 = uVar97 + 1;
  }
  uVar77 = uVar89 + uVar88;
  lVar94 = uVar87 + uVar86 + (ulong)CARRY8(uVar89,uVar88);
  uVar79 = lVar94 + uVar91;
  bVar59 = CARRY8(uVar87 + uVar86,uVar91) ||
           CARRY8(uVar87 + uVar86 + uVar91,(ulong)CARRY8(uVar89,uVar88));
  uVar89 = uVar82 + uVar75 + (ulong)bVar59;
  uVar87 = uVar78 + uVar85 + (ulong)bVar62 + uVar101 + uVar103 + (ulong)bVar58 +
           (ulong)(CARRY8(uVar82,uVar75) || CARRY8(uVar82 + uVar75,(ulong)bVar59));
  uVar64 = nzcv;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar77;
  uVar88 = SUB168(auVar34 * ZEXT816(0xffffffffffffffff),8);
  uVar82 = uVar77 - (uVar77 << 0x20);
  uVar85 = (uVar77 << 0x20) - uVar77;
  bVar62 = CARRY8(uVar79,uVar88 + uVar85) ||
           CARRY8(uVar79 + uVar88 + uVar85,(ulong)CARRY8(-uVar77,uVar77));
  uVar86 = uVar89 + bVar62;
  uVar89 = (ulong)CARRY8(uVar89,(ulong)bVar62);
  uVar103 = uVar87 + uVar82;
  uVar78 = (ulong)CARRY8(uVar87,uVar82);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar77;
  uVar82 = SUB168(auVar35 * ZEXT816(0xffffffff00000001),8);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar77;
  uVar87 = SUB168(auVar36 * ZEXT816(0xffffffff),8);
  bVar62 = CARRY8(uVar86,uVar87) || CARRY8(uVar86 + uVar87,(ulong)CARRY8(uVar88,uVar85));
  uVar75 = uVar86 + uVar87 + (ulong)CARRY8(uVar88,uVar85);
  bVar58 = CARRY8(uVar103,uVar89) || CARRY8(uVar103 + uVar89,(ulong)bVar62);
  uVar86 = uVar103 + uVar89 + (ulong)bVar62;
  cVar60 = CARRY8(uVar82,uVar78) || CARRY8(uVar82 + uVar78,(ulong)bVar58);
  uVar78 = uVar82 + uVar78 + (ulong)bVar58;
  nzcv = uVar64;
  uVar103 = (ulong)(byte)cVar60;
  uVar82 = (ulong)(byte)cVar60;
  uVar87 = uVar97 + uVar82 + uVar90;
  uVar89 = uVar78 + uVar87;
  if (CARRY8(uVar78,uVar87)) {
    cVar60 = cVar60 + '\x01';
  }
  uVar77 = lVar94 + uVar91 + (ulong)CARRY8(-uVar77,uVar77) + uVar88 + uVar85;
  uVar87 = (ulong)(byte)-((0xfffffffffffffffe < uVar77) + -1);
  uVar78 = uVar75 - uVar87;
  uVar87 = (ulong)(byte)-((-1 - (uVar75 < uVar87)) + (0xfffffffe < uVar78));
  uVar85 = (ulong)(uVar86 < uVar87);
  uVar79 = uVar89 - uVar85;
  bVar62 = (byte)(cVar60 + CARRY8(uVar97,uVar103) + CARRY8(uVar97 + uVar82,uVar90)) <
           (byte)-((-1 - (uVar89 < uVar85)) + (0xffffffff00000000 < uVar79));
  uVar97 = uVar86 - uVar87;
  uVar103 = uVar78 - 0xffffffff;
  uVar82 = uVar77 + 1;
  if (bVar62) {
    uVar97 = uVar86;
    uVar103 = uVar75;
    uVar82 = uVar77;
  }
  *puVar66 = uVar82;
  puVar66[1] = uVar103;
  uVar103 = uVar79 + 0xffffffff;
  if (bVar62) {
    uVar103 = uVar89;
  }
  puVar66[2] = uVar97;
  puVar66[3] = uVar103;
  return;
}



/* Entry: 006fb444; end: 006fb57f;  */

void FUN_006fb444(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  long lVar57;
  undefined1 in_ZR;
  bool bVar58;
  bool bVar59;
  char cVar60;
  undefined1 uVar61;
  bool bVar62;
  int iVar63;
  int iVar64;
  code *pcVar65;
  ulong *puVar66;
  undefined8 *puVar67;
  ulong *puVar68;
  undefined8 *puVar69;
  undefined1 *puVar70;
  undefined1 *puVar71;
  undefined1 *puVar72;
  ulong *puVar73;
  ulong uVar74;
  ulong *puVar75;
  ulong uVar76;
  ulong uVar77;
  ulong uVar78;
  ulong uVar79;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint uVar80;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar81;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  uint uVar82;
  uint extraout_w9;
  uint extraout_w9_00;
  long lVar83;
  ulong uVar84;
  ulong uVar85;
  ulong uVar86;
  ulong uVar87;
  ulong uVar88;
  ulong uVar89;
  ulong uVar90;
  ulong uVar91;
  ulong uVar92;
  long lVar93;
  ulong uVar94;
  ulong uVar95;
  ulong *puVar96;
  ulong uVar97;
  uint uVar98;
  ulong uVar99;
  ulong unaff_x24;
  ulong uVar100;
  ulong uVar101;
  ulong uVar102;
  ulong uVar103;
  undefined8 uVar104;
  ulong unaff_x28;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  long lVar109;
  undefined8 auStack_10b0 [2];
  undefined8 uStack_10a0;
  ulong uStack_1060;
  ulong uStack_1058;
  ulong uStack_1050;
  ulong uStack_1048;
  ulong uStack_1020;
  ulong uStack_1018;
  ulong uStack_1010;
  ulong uStack_1008;
  undefined8 uStack_ff8;
  ulong *puStack_ff0;
  ulong *puStack_fe8;
  undefined1 *puStack_fe0;
  ulong *puStack_fd8;
  undefined1 *****pppppuStack_fd0;
  code *pcStack_fc8;
  ulong *puStack_fc0;
  ulong *puStack_fb8;
  ulong *puStack_fa8;
  ulong auStack_fa0 [4];
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  ulong auStack_f40 [5];
  char acStack_f11 [257];
  undefined1 auStack_e10 [32];
  ulong auStack_df0 [4];
  ulong auStack_dd0 [4];
  ulong auStack_db0 [4];
  ulong auStack_d90 [4];
  ulong auStack_d70 [4];
  undefined1 auStack_d50 [32];
  undefined1 auStack_d30 [32];
  undefined1 auStack_d10 [624];
  undefined1 *puStack_aa0;
  undefined1 *puStack_a98;
  undefined8 *puStack_a90;
  undefined1 *puStack_a88;
  undefined1 *puStack_a80;
  undefined1 *puStack_a78;
  undefined1 *puStack_a70;
  undefined1 *puStack_a68;
  undefined1 auStack_a60 [16];
  undefined1 ****ppppuStack_a50;
  undefined8 uStack_a48;
  undefined1 auStack_a40 [32];
  undefined1 auStack_a20 [32];
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  ulong auStack_9c0 [6];
  ulong uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  undefined8 *puStack_968;
  ulong uStack_960;
  ulong *puStack_958;
  undefined8 *puStack_950;
  undefined1 *puStack_948;
  undefined1 ***pppuStack_940;
  undefined8 uStack_938;
  ulong *puStack_930;
  undefined8 *puStack_928;
  undefined1 *puStack_918;
  ulong *puStack_910;
  undefined8 *puStack_908;
  long lStack_900;
  long lStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  ulong auStack_808 [4];
  ulong auStack_7e8 [8];
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong auStack_1e8 [4];
  undefined8 auStack_1c8 [4];
  undefined8 auStack_1a8 [3];
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined8 uStack_128;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  func_0x006fd5e8();
  uStack_50 = *param_3;
  uStack_48 = param_3[1];
  uStack_40 = param_3[2];
  uStack_38 = param_3[3];
  uStack_70 = param_3[9];
  uStack_68 = param_3[10];
  uStack_60 = param_3[0xb];
  uStack_58 = param_3[0xc];
  uStack_90 = param_3[0x12];
  uStack_88 = param_3[0x13];
  uStack_80 = param_3[0x14];
  uStack_78 = param_3[0x15];
  uStack_b0 = *param_4;
  uStack_a8 = param_4[1];
  uStack_a0 = param_4[2];
  uStack_98 = param_4[3];
  uStack_d0 = param_4[9];
  uStack_c8 = param_4[10];
  uStack_c0 = param_4[0xb];
  uStack_b8 = param_4[0xc];
  uStack_f0 = param_4[0x12];
  uStack_e8 = param_4[0x13];
  uStack_e0 = param_4[0x14];
  uStack_d8 = param_4[0x15];
  puStack_f8 = &uStack_f0;
  puStack_100 = &uStack_d0;
  puVar69 = &uStack_90;
  func_0x006fe164(&uStack_50,&uStack_70,puVar69,&uStack_50,&uStack_70,&uStack_90);
  func_0x006fde74();
  FUN_006fc2e4(param_2 + 0x48,&uStack_70);
  puVar67 = &uStack_90;
  FUN_006fc2e4(param_2 + 0x90,puVar67);
  func_0x006fd534(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar66 = &uStack_190;
  puVar73 = &uStack_190;
  uStack_108 = 0x6fb4f8;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x006fd5e8();
  uStack_150 = *puVar69;
  uStack_148 = puVar69[1];
  ppuStack_140 = (undefined1 **)puVar69[2];
  pcStack_138 = (code *)puVar69[3];
  uStack_170 = puVar69[9];
  uStack_168 = puVar69[10];
  uStack_160 = puVar69[0xb];
  uStack_158 = puVar69[0xc];
  uStack_190 = puVar69[0x12];
  uStack_188 = puVar69[0x13];
  uStack_180 = puVar69[0x14];
  uStack_178 = puVar69[0x15];
  func_0x006fe61c();
  puVar69 = &uStack_150;
  FUN_006fcba0();
  func_0x006fde74();
  FUN_006fc2e4(puVar67 + 9,&uStack_170);
  FUN_006fc2e4(puVar67 + 0x12);
  func_0x006fd534(uStack_128);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcVar65 = FUN_006fb580;
  func_0x006fdcd0();
  puStack_918 = (undefined1 *)puVar73;
  ppuStack_140 = &puStack_110;
  pcStack_138 = pcVar65;
  func_0x006fd5fc();
  auStack_1a8[0] = extraout_x8;
  _bzero(auStack_808,0x660);
  uStack_7a8 = *puVar66;
  uStack_7a0 = puVar66[1];
  uStack_798 = puVar66[2];
  uStack_790 = puVar66[3];
  uStack_788 = puVar66[9];
  uStack_780 = puVar66[10];
  uStack_778 = puVar66[0xb];
  uStack_770 = puVar66[0xc];
  uStack_768 = puVar66[0x12];
  uStack_760 = puVar66[0x13];
  uStack_758 = puVar66[0x14];
  uStack_750 = puVar66[0x15];
  lVar93 = -0x5a0;
  uVar95 = 2;
  do {
    if ((uVar95 & 1) == 0) {
      puVar73 = auStack_808 + (uVar95 >> 1) * 0xc;
      puVar70 = (undefined1 *)((long)&uStack_168 + lVar93);
      puVar66 = auStack_7e8 + (uVar95 >> 1) * 0xc;
      FUN_006fcba0((long)auStack_1a8 + lVar93,(long)&uStack_188 + lVar93);
    }
    else {
      puStack_930 = (ulong *)((long)auStack_1e8 + lVar93);
      puStack_928 = (undefined8 *)((long)auStack_1c8 + lVar93);
      puVar70 = (undefined1 *)((long)&uStack_168 + lVar93);
      puVar73 = &uStack_7a8;
      puVar66 = &uStack_788;
      func_0x006fe164((long)auStack_1a8 + lVar93,(long)&uStack_188 + lVar93);
    }
    uVar95 = uVar95 + 1;
    lVar93 = lVar93 + 0x60;
  } while (lVar93 != 0);
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  uStack_840 = 0;
  puStack_908 = &uStack_8b0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  puStack_910 = auStack_7e8 + 1;
  uVar104 = 1;
  for (uVar101 = 0xff; puVar72 = puStack_918, uVar61 = uVar101 == 0x100, uVar101 < 0x100;
      uVar101 = uVar101 - 1) {
    if ((int)uVar104 == 0) {
      func_0x006fe140();
      FUN_006fcba0();
    }
    uVar98 = (uint)uVar101;
    if (uVar98 == (uVar98 / 5) * 5) {
      if (uVar101 < 0xfc) {
        func_0x006fd6b0(uVar98 + 4);
        uVar80 = (extraout_w8 & 1) << 5;
        uVar82 = uVar98 + 3;
LAB_006fb6d4:
        uVar80 = uVar80 | (*(byte *)((long)puVar69 + (ulong)(uVar82 >> 3)) >> (ulong)(uVar82 & 7) &
                          1) << 4;
LAB_006fb6f0:
        func_0x006fec2c(uVar80);
        uVar95 = extraout_x8_00 | (extraout_w9 & 1) << 3;
LAB_006fb700:
        uVar81 = uVar95 | (*(byte *)((long)puVar69 + (ulong)(uVar98 + 1 >> 3)) >>
                           (ulong)(uVar98 + 1 & 7) & 1) << 2;
      }
      else {
        if (uVar101 == 0xfc) {
          uVar80 = 0;
          uVar82 = 0xff;
          goto LAB_006fb6d4;
        }
        if (uVar101 < 0xfe) {
          uVar80 = 0;
          goto LAB_006fb6f0;
        }
        uVar95 = 0;
        uVar81 = 0;
        if (uVar101 != 0xff) goto LAB_006fb700;
      }
      if (uVar98 - 1 < 0x100) {
        func_0x006fec2c();
        uVar95 = (ulong)(extraout_w9_00 & 1);
        uVar81 = extraout_x8_01;
      }
      else {
        uVar95 = 0;
      }
      puVar70 = (undefined1 *)
                (uVar81 | (*(byte *)((long)puVar69 + (uVar101 >> 3)) >> (ulong)(uVar98 & 7) & 1) <<
                          1 | uVar95);
      FUN_006ef290(&lStack_8f8,&lStack_900);
      unaff_x24 = 0;
      auVar105 = ZEXT216(0);
      lVar83 = 0x660;
      auVar108 = ZEXT216(0);
      auVar106 = ZEXT216(0);
      auVar107 = ZEXT216(0);
      lVar93 = lStack_900;
      puVar96 = puStack_910;
      uVar81 = 0;
      uVar86 = 0;
      uVar88 = 0;
      do {
        bVar62 = lVar93 == 0;
        uVar95 = *puVar96;
        uVar84 = puVar96[-1];
        if (!bVar62) {
          uVar95 = uVar86;
          uVar84 = unaff_x24;
        }
        unaff_x24 = uVar84;
        uVar84 = puVar96[1];
        if (!bVar62) {
          uVar84 = uVar81;
        }
        lVar57 = -(ulong)((long)((ulong)CONCAT14(bVar62,(uint)bVar62) << 0x3f) < 0);
        lVar109 = -(ulong)((long)((ulong)bVar62 << 0x3f) < 0);
        auVar53._8_8_ = lVar109;
        auVar53._0_8_ = lVar57;
        auVar105 = auVar105 ^ (auVar105 ^ *(undefined1 (*) [16])(puVar96 + -5)) & auVar53;
        auVar54._8_8_ = lVar109;
        auVar54._0_8_ = lVar57;
        auVar108 = auVar108 ^ (auVar108 ^ *(undefined1 (*) [16])(puVar96 + -3)) & auVar54;
        unaff_x28 = puVar96[2];
        if (!bVar62) {
          unaff_x28 = uVar88;
        }
        auVar55._8_8_ = lVar109;
        auVar55._0_8_ = lVar57;
        auVar106 = auVar106 ^ (auVar106 ^ *(undefined1 (*) [16])(puVar96 + 3)) & auVar55;
        auVar56._8_8_ = lVar109;
        auVar56._0_8_ = lVar57;
        auVar107 = auVar107 ^ (auVar107 ^ *(undefined1 (*) [16])(puVar96 + 5)) & auVar56;
        lVar83 = lVar83 + -0x60;
        puVar96 = puVar96 + 0xc;
        lVar93 = lVar93 + -1;
        uVar81 = uVar84;
        uVar86 = uVar95;
        uVar88 = unaff_x28;
      } while (lVar83 != 0);
      uStack_8e8 = auVar105._8_8_;
      uStack_8f0 = auVar105._0_8_;
      uStack_8d8 = auVar108._8_8_;
      uStack_8e0 = auVar108._0_8_;
      uStack_8a8 = auVar106._8_8_;
      uStack_8b0 = auVar106._0_8_;
      uStack_898 = auVar107._8_8_;
      uStack_8a0 = auVar107._0_8_;
      uStack_8d0 = unaff_x24;
      uStack_8c8 = uVar95;
      uStack_8c0 = uVar84;
      uStack_8b8 = unaff_x28;
      func_0x006fcd58(&uStack_890,&uStack_8d0);
      uStack_8b8 = unaff_x28;
      uStack_8c0 = uVar84;
      uStack_8c8 = uVar95;
      uStack_8d0 = unaff_x24;
      if (lStack_8f8 != 0) {
        uStack_8b8 = uStack_878;
        uStack_8c0 = uStack_880;
        uStack_8c8 = uStack_888;
        uStack_8d0 = uStack_890;
      }
      if ((int)uVar104 == 0) {
        puStack_928 = puStack_908;
        puStack_930 = &uStack_8d0;
        func_0x006fe140();
        func_0x006fe164();
      }
      else {
        func_0x006fcb80(&uStack_870,&uStack_8f0);
        func_0x006fe428(&uStack_850);
        func_0x006fcb80(&uStack_830,puStack_908);
      }
      uVar104 = 0;
    }
  }
  func_0x006fde74();
  FUN_006fc2e4(puVar72 + 0x48,&uStack_850);
  puVar67 = &uStack_830;
  FUN_006fc2e4(puVar72 + 0x90);
  func_0x006fd534(auStack_1a8[0]);
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uStack_980 = 5;
  puStack_948 = puVar72;
  uStack_938 = 0x6fb8e0;
  bVar62 = false;
  puVar71 = puVar70;
  puStack_a90 = puVar67;
  uStack_990 = unaff_x28;
  uStack_988 = uVar104;
  uStack_978 = uVar101;
  uStack_970 = unaff_x24;
  puStack_968 = &uStack_870;
  uStack_960 = uVar95;
  puStack_958 = &uStack_8d0;
  puStack_950 = puVar69;
  pppuStack_940 = &ppuStack_140;
  func_0x006fd588();
  puStack_a68 = puVar71 + 0x1c;
  puStack_a70 = puVar71 + 0x14;
  puStack_a78 = puVar71 + 0xc;
  auStack_9c0[1] = 0;
  auStack_9c0[0] = 0;
  auStack_9c0[3] = 0;
  auStack_9c0[2] = 0;
  puStack_a80 = puVar71 + 4;
  puStack_a88 = puVar71 + 0x18;
  uStack_9d8 = 0;
  uStack_9e0 = 0;
  uStack_9c8 = 0;
  uStack_9d0 = 0;
  uStack_9f8 = 0;
  uStack_a00 = 0;
  uStack_9e8 = 0;
  uStack_9f0 = 0;
  puVar72 = puVar71;
  for (uVar95 = 0x1f; puVar69 = puStack_a90, uVar61 = uVar95 == 0x20, uVar95 < 0x20;
      uVar95 = uVar95 - 1) {
    if (bVar62) {
      func_0x006fd994();
      FUN_006fcba0();
    }
    uVar101 = uVar95 >> 3;
    uVar98 = (uint)uVar95 & 7;
    uVar82 = ((byte)puStack_a68[uVar101] >> (ulong)uVar98 & 1) << 3;
    func_0x006fea80(puStack_a70,uVar82);
    uVar82 = uVar82 & 0xfffffff8 | uVar82 & 3 | (extraout_w8_00 & 1) << 2;
    func_0x006fea80(puStack_a78,uVar82);
    uVar82 = uVar82 & 0xfffffffc | uVar82 & 1 | (extraout_w8_01 & 1) << 1;
    func_0x006fea80(puStack_a80,uVar82);
    FUN_006fcdd8(uVar82 & 0xfffffffe | extraout_w8_02 & 1,&UNK_00838268,auStack_a60);
    if (bVar62) {
      puStack_aa0 = auStack_a40;
      puStack_a98 = auStack_a20;
      func_0x006fd994();
      func_0x006fe378();
    }
    else {
      func_0x006fcb80(&uStack_a00,auStack_a60);
      func_0x006fe428(&uStack_9e0);
      func_0x006fcb80(auStack_9c0,auStack_a20);
    }
    func_0x006fea80(puStack_a88);
    puVar72 = auStack_a60;
    FUN_006fcdd8((extraout_w8_03 & 1) << 3 |
                 ((byte)puVar71[uVar101 + 0x10] >> (ulong)uVar98 & 1) << 2 |
                 ((byte)puVar71[uVar101 + 8] >> (ulong)uVar98 & 1) << 1 |
                 (byte)puVar70[uVar101] >> (ulong)uVar98 & 1,&UNK_00837ea8);
    bVar62 = true;
    puStack_aa0 = auStack_a40;
    puStack_a98 = auStack_a20;
    func_0x006fd994();
    func_0x006fe378();
  }
  func_0x006fde74();
  FUN_006fc2e4(puVar69 + 9,&uStack_9e0);
  puVar96 = puVar69 + 0x12;
  puVar68 = auStack_9c0;
  FUN_006fc2e4();
  func_0x006fd508();
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uVar104 = 0x6fbaa0;
  func_0x006fdcd0();
  puStack_fa8 = puVar68;
  ppppuStack_a50 = &pppuStack_940;
  uStack_a48 = uVar104;
  func_0x006fd588();
  auStack_db0[0] = *puVar73;
  auStack_db0[1] = puVar73[1];
  auStack_db0[2] = puVar73[2];
  auStack_db0[3] = puVar73[3];
  auStack_d90[0] = puVar73[9];
  auStack_d90[1] = puVar73[10];
  auStack_d90[2] = puVar73[0xb];
  auStack_d90[3] = puVar73[0xc];
  auStack_d70[0] = puVar73[0x12];
  auStack_d70[1] = puVar73[0x13];
  auStack_d70[2] = puVar73[0x14];
  auStack_d70[3] = puVar73[0x15];
  FUN_006fcba0(auStack_e10,auStack_df0,auStack_dd0,auStack_db0,auStack_d90,auStack_d70);
  for (lVar93 = 0; lVar93 != 0x2a0; lVar93 = lVar93 + 0x60) {
    puStack_fc0 = auStack_df0;
    puStack_fb8 = auStack_dd0;
    func_0x006fe164(auStack_d50 + lVar93,auStack_d30 + lVar93,auStack_d10 + lVar93,
                    (long)auStack_db0 + lVar93,(long)auStack_d90 + lVar93,(long)auStack_d70 + lVar93
                   );
  }
  uVar95 = 0x100;
  puVar73 = puVar66;
  func_0x006ef2c4(puVar96,acStack_f11,puVar66,0x100);
  auStack_f40[1] = 0;
  auStack_f40[0] = 0;
  auStack_f40[3] = 0;
  auStack_f40[2] = 0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  uStack_f68 = 0;
  uStack_f70 = 0;
  bVar62 = true;
  do {
    if (!bVar62) {
      func_0x006fd6e0();
      FUN_006fcba0();
    }
    uVar98 = (uint)uVar95;
    uVar61 = uVar98 == 0x1f;
    if (uVar98 < 0x20) {
      puVar66 = (ulong *)(puVar72 + (uVar98 >> 3));
      uVar82 = uVar98 & 7;
      puVar96 = (ulong *)(ulong)uVar82;
      uVar80 = (*(byte *)((long)puVar66 + 0x1c) >> (long)puVar96 & 1) << 3 |
               (*(byte *)((long)puVar66 + 0x14) >> (ulong)uVar82 & 1) << 2 |
               (*(byte *)((long)puVar66 + 0xc) >> (long)puVar96 & 1) << 1 |
               *(byte *)((long)puVar66 + 4) >> (ulong)uVar82 & 1;
      if (uVar80 != 0) {
        puStack_fc0 = (ulong *)(&UNK_00838248 + (ulong)uVar80 * 0x40);
        puStack_fb8 = (ulong *)&UNK_00838628;
        func_0x006fd6e0();
        func_0x006fe378();
        bVar62 = false;
      }
      uVar82 = ((byte)((byte)puVar66[3] >> (ulong)uVar82) & 1) << 3 |
               ((byte)((byte)puVar66[2] >> (ulong)uVar82) & 1) << 2 |
               ((byte)((byte)puVar66[1] >> (long)puVar96) & 1) << 1 |
               (byte)((byte)*puVar66 >> (ulong)uVar82) & 1;
      if (uVar82 != 0) {
        puStack_fc0 = (ulong *)(&UNK_00837e88 + (ulong)uVar82 * 0x40);
        puStack_fb8 = (ulong *)&UNK_00838628;
        func_0x006fd6e0();
        func_0x006fe378();
        bVar62 = false;
      }
    }
    cVar60 = acStack_f11[uVar95];
    if (cVar60 != '\0') {
      uVar61 = cVar60 == '\0';
      uVar80 = (uint)cVar60;
      uVar82 = -uVar80;
      if (-1 < cVar60) {
        uVar82 = uVar80;
      }
      uVar95 = (ulong)(uVar82 >> 1);
      puVar66 = auStack_db0 + uVar95 * 0xc;
      puVar96 = auStack_d90 + uVar95 * 0xc;
      if ((int)uVar80 < 0) {
        func_0x006fcd58(auStack_fa0,puVar96);
        puVar96 = auStack_fa0;
        if (!bVar62) goto LAB_006fbcc0;
LAB_006fbc88:
        func_0x006fe428(&uStack_f80);
        func_0x006fcb80(&uStack_f60,puVar96);
        func_0x006fcb80(auStack_f40,auStack_d70 + uVar95 * 0xc);
      }
      else {
        if (bVar62) goto LAB_006fbc88;
LAB_006fbcc0:
        puStack_fb8 = auStack_d70 + uVar95 * 0xc;
        puStack_fc0 = puVar96;
        func_0x006fd6e0();
        FUN_006fc724();
      }
      bVar62 = false;
    }
    puVar68 = puStack_fa8;
    uVar95 = (ulong)(uVar98 - 1);
  } while (-1 < (int)(uVar98 - 1));
  func_0x006fde74();
  FUN_006fc2e4(puVar68 + 9,&uStack_f60);
  iVar63 = (int)puVar68 + 0x90;
  puVar75 = auStack_f40;
  FUN_006fc2e4();
  func_0x006fd508();
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  iVar64 = (int)auStack_10b0;
  puStack_fd8 = puVar68;
  pcStack_fc8 = FUN_006fbd20;
  puStack_ff0 = puVar96;
  puStack_fe8 = puVar66;
  puStack_fe0 = puVar72;
  pppppuStack_fd0 = &ppppuStack_a50;
  func_0x006fd9b0();
  func_0x006fd5fc();
  uStack_ff8 = extraout_x8_02;
  FUN_006ec074();
  if (iVar63 == 0) {
    uStack_1020 = puVar66[0x12];
    uStack_1018 = puVar66[0x13];
    uStack_1010 = puVar66[0x14];
    uStack_1008 = puVar66[0x15];
    FUN_006fbf84(&uStack_1020,&uStack_1020,&uStack_1020);
    func_0x006fe078(*puVar68,puVar68[2]);
    uVar95 = *puVar66;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = uVar95;
    uVar86 = SUB168(auVar105 * ZEXT816(0xffffffff00000001),8);
    uVar88 = uVar95 - (uVar95 << 0x20);
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uVar95;
    lVar93 = SUB168(auVar106 * ZEXT816(0xffffffff),8);
    uVar84 = (uVar95 << 0x20) - uVar95;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = uVar95;
    uVar101 = SUB168(auVar107 * ZEXT816(0xffffffffffffffff),8);
    uVar81 = uVar101 + uVar84 + (ulong)CARRY8(-uVar95,uVar95);
    if (CARRY8(uVar101,uVar84) || CARRY8(uVar101 + uVar84,(ulong)CARRY8(-uVar95,uVar95))) {
      lVar93 = lVar93 + 1;
    }
    uVar95 = uVar81 + puVar66[1];
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar95;
    uVar84 = SUB168(auVar108 * ZEXT816(0xffffffffffffffff),8);
    uVar85 = uVar95 - (uVar95 << 0x20);
    uVar78 = (uVar95 << 0x20) - uVar95;
    uVar101 = uVar84 + uVar78;
    uVar74 = lVar93 + (ulong)CARRY8(uVar81,puVar66[1]) + (ulong)CARRY8(-uVar95,uVar95);
    uVar76 = uVar88 + CARRY8(uVar74,uVar101);
    uVar77 = (ulong)CARRY8(uVar88,(ulong)CARRY8(uVar74,uVar101));
    uVar81 = uVar85 + uVar86;
    uVar86 = (ulong)CARRY8(uVar85,uVar86);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar95;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar95;
    uVar95 = SUB168(auVar2 * ZEXT816(0xffffffff),8);
    bVar62 = CARRY8(uVar76,uVar95) || CARRY8(uVar76 + uVar95,(ulong)CARRY8(uVar84,uVar78));
    uVar95 = uVar76 + uVar95 + (ulong)CARRY8(uVar84,uVar78);
    uVar88 = uVar81 + uVar77 + (ulong)bVar62;
    if (CARRY8(uVar81,uVar77) || CARRY8(uVar81 + uVar77,(ulong)bVar62)) {
      uVar86 = uVar86 + 1;
    }
    bVar62 = CARRY8(uVar74 + uVar101,puVar66[2]);
    uVar101 = uVar74 + uVar101 + puVar66[2];
    uVar81 = uVar88 + CARRY8(uVar95,(ulong)bVar62);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar101;
    uVar84 = SUB168(auVar3 * ZEXT816(0xffffffffffffffff),8);
    uVar86 = uVar86 + SUB168(auVar1 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar88,(ulong)CARRY8(uVar95,(ulong)bVar62));
    uVar85 = uVar101 - (uVar101 << 0x20);
    uVar88 = (uVar101 << 0x20) - uVar101;
    bVar58 = CARRY8(uVar95 + bVar62,uVar84 + uVar88) ||
             CARRY8(uVar95 + bVar62 + uVar84 + uVar88,(ulong)CARRY8(-uVar101,uVar101));
    uVar74 = uVar81 + bVar58;
    uVar76 = (ulong)CARRY8(uVar81,(ulong)bVar58);
    uVar81 = uVar85 + uVar86;
    uVar86 = (ulong)CARRY8(uVar85,uVar86);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar101;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar101;
    uVar85 = SUB168(auVar5 * ZEXT816(0xffffffff),8);
    uVar95 = uVar95 + bVar62 + (ulong)CARRY8(-uVar101,uVar101) + uVar84 + uVar88;
    bVar62 = CARRY8(uVar74,uVar85) || CARRY8(uVar74 + uVar85,(ulong)CARRY8(uVar84,uVar88));
    uVar101 = uVar74 + uVar85 + (ulong)CARRY8(uVar84,uVar88);
    uVar88 = uVar81 + uVar76 + (ulong)bVar62;
    if (CARRY8(uVar81,uVar76) || CARRY8(uVar81 + uVar76,(ulong)bVar62)) {
      uVar86 = uVar86 + 1;
    }
    bVar62 = CARRY8(uVar95,puVar66[3]);
    uVar95 = uVar95 + puVar66[3];
    uVar74 = uVar88 + CARRY8(uVar101,(ulong)bVar62);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar95;
    uVar84 = SUB168(auVar6 * ZEXT816(0xffffffff00000001),8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar95;
    puVar75 = SUB168(auVar7 * ZEXT816(0xffffffff),8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar95;
    uVar85 = SUB168(auVar8 * ZEXT816(0xffffffffffffffff),8);
    uVar88 = uVar86 + SUB168(auVar4 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar88,(ulong)CARRY8(uVar101,(ulong)bVar62));
    puVar73 = (ulong *)(uVar95 - (uVar95 << 0x20));
    uVar86 = (uVar95 << 0x20) - uVar95;
    uVar81 = uVar85 + uVar86;
    if (CARRY8(uVar85,uVar86)) {
      puVar75 = (ulong *)((long)puVar75 + 1);
    }
    uVar86 = uVar101 + bVar62 + (ulong)CARRY8(-uVar95,uVar95) + uVar81;
    bVar62 = CARRY8(uVar101 + bVar62,uVar81) ||
             CARRY8(uVar101 + bVar62 + uVar81,(ulong)CARRY8(-uVar95,uVar95));
    bVar58 = CARRY8(uVar74,(ulong)puVar75) || CARRY8(uVar74 + (long)puVar75,(ulong)bVar62);
    uVar95 = (long)puVar75 + bVar62 + uVar74;
    uVar101 = (long)puVar73 + bVar58 + uVar88;
    if (CARRY8((ulong)puVar73,uVar88) || CARRY8((long)puVar73 + uVar88,(ulong)bVar58)) {
      uVar84 = uVar84 + 1;
    }
    uVar81 = (ulong)(byte)-((0xfffffffffffffffe < uVar86) + -1);
    uVar85 = uVar95 - uVar81;
    uVar81 = (ulong)(byte)-((-1 - (uVar95 < uVar81)) + (0xfffffffe < uVar85));
    uVar88 = (ulong)(uVar101 < uVar81);
    uVar74 = uVar84 - uVar88;
    iVar63 = -(uint)(uVar84 < uVar88);
    uVar61 = (char)((char)iVar63 + -1 + (0xffffffff00000000 < uVar74)) == '\0';
    uStack_1048 = uVar74 + 0xffffffff;
    uStack_1050 = uVar101 - uVar81;
    uStack_1058 = uVar85 - 0xffffffff;
    uStack_1060 = uVar86 + 1;
    if (!(bool)uVar61) {
      uStack_1048 = uVar84;
      uStack_1050 = uVar101;
      uStack_1058 = uVar95;
      uStack_1060 = uVar86;
    }
    func_0x006fe338();
    if (iVar63 == 0) {
LAB_006fbf78:
      puVar66 = (ulong *)((long)&MACH_HEADER.magic + 1);
      goto LAB_006fbd4c;
    }
    puVar73 = (ulong *)(long)*(int *)(puVar72 + 0x40);
    puVar75 = (ulong *)(puVar72 + 0xe8);
    func_0x006fe7b8();
    if (iVar63 != 0) {
      puVar73 = *(ulong **)(puVar72 + 0x10);
      FUN_006e3678();
      func_0x006fe078(auStack_10b0[0],uStack_10a0);
      func_0x006fe338();
      puVar75 = puVar68;
      if (iVar64 == 0) goto LAB_006fbf78;
    }
  }
  puVar66 = (ulong *)0x0;
LAB_006fbd4c:
  func_0x006fd534(uStack_ff8);
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uVar101 = *puVar75;
  uVar88 = puVar75[1];
  uVar81 = puVar73[2];
  uVar84 = puVar73[3];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar84;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar101;
  uVar95 = SUB168(auVar9 * auVar37,8);
  uVar87 = uVar84 * uVar101;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar81;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar101;
  uVar89 = SUB168(auVar10 * auVar38,8);
  uVar90 = uVar81 * uVar101;
  uVar86 = *puVar73;
  uVar85 = puVar73[1];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar85;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar101;
  uVar74 = SUB168(auVar11 * auVar39,8);
  uVar76 = uVar85 * uVar101;
  uVar77 = uVar86 * uVar101;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar86;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar101;
  uVar78 = SUB168(auVar12 * auVar40,8);
  bVar62 = CARRY8(uVar74,uVar90) || CARRY8(uVar74 + uVar90,(ulong)CARRY8(uVar78,uVar76));
  uVar90 = uVar74 + uVar90 + (ulong)CARRY8(uVar78,uVar76);
  uVar74 = uVar89 + uVar87 + (ulong)bVar62;
  if (CARRY8(uVar89,uVar87) || CARRY8(uVar89 + uVar87,(ulong)bVar62)) {
    uVar95 = uVar95 + 1;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar77;
  uVar79 = SUB168(auVar13 * ZEXT816(0xffffffff00000001),8);
  uVar89 = uVar77 - (uVar77 << 0x20);
  uVar92 = (uVar77 << 0x20) - uVar77;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar77;
  uVar94 = SUB168(auVar14 * ZEXT816(0xffffffffffffffff),8);
  bVar62 = CARRY8(-(uVar86 * uVar101),uVar77);
  bVar58 = CARRY8(uVar78 + uVar76,uVar94 + uVar92) ||
           CARRY8(uVar78 + uVar76 + uVar94 + uVar92,(ulong)bVar62);
  uVar91 = uVar90 + bVar58;
  uVar87 = (ulong)CARRY8(uVar90,(ulong)bVar58);
  uVar101 = uVar74 + uVar89;
  uVar89 = (ulong)CARRY8(uVar74,uVar89);
  uVar74 = uVar79 + uVar95;
  uVar90 = (ulong)CARRY8(uVar79,uVar95);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar84;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar88;
  uVar95 = SUB168(auVar15 * auVar41,8);
  uVar79 = uVar84 * uVar88;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar81;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar88;
  uVar97 = SUB168(auVar16 * auVar42,8);
  uVar99 = uVar81 * uVar88;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar85;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar88;
  uVar100 = SUB168(auVar17 * auVar43,8);
  uVar102 = uVar85 * uVar88;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar86;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar88;
  uVar103 = SUB168(auVar18 * auVar44,8);
  bVar58 = CARRY8(uVar100,uVar99) || CARRY8(uVar100 + uVar99,(ulong)CARRY8(uVar103,uVar102));
  uVar100 = uVar100 + uVar99 + (ulong)CARRY8(uVar103,uVar102);
  uVar99 = uVar97 + uVar79 + (ulong)bVar58;
  if (CARRY8(uVar97,uVar79) || CARRY8(uVar97 + uVar79,(ulong)bVar58)) {
    uVar95 = uVar95 + 1;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar77;
  uVar77 = SUB168(auVar19 * ZEXT816(0xffffffff),8);
  uVar76 = uVar78 + uVar76 + (ulong)bVar62 + uVar94 + uVar92;
  bVar62 = CARRY8(uVar91,uVar77) || CARRY8(uVar91 + uVar77,(ulong)CARRY8(uVar94,uVar92));
  uVar79 = uVar91 + uVar77 + (ulong)CARRY8(uVar94,uVar92);
  bVar58 = CARRY8(uVar101,uVar87) || CARRY8(uVar101 + uVar87,(ulong)bVar62);
  uVar87 = uVar101 + uVar87 + (ulong)bVar62;
  bVar59 = CARRY8(uVar74,uVar89) || CARRY8(uVar74 + uVar89,(ulong)bVar58);
  uVar77 = uVar74 + uVar89 + (ulong)bVar58;
  uVar88 = uVar86 * uVar88;
  uVar101 = uVar76 + uVar88;
  lVar93 = uVar103 + uVar102 + (ulong)CARRY8(uVar76,uVar88);
  uVar74 = lVar93 + uVar79;
  bVar62 = CARRY8(uVar103 + uVar102,uVar79) ||
           CARRY8(uVar103 + uVar102 + uVar79,(ulong)CARRY8(uVar76,uVar88));
  uVar78 = uVar100 + bVar62;
  uVar89 = (ulong)CARRY8(uVar100,(ulong)bVar62);
  uVar88 = uVar77 + uVar99;
  uVar92 = uVar101 - (uVar101 << 0x20);
  uVar94 = (uVar101 << 0x20) - uVar101;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar101;
  uVar97 = SUB168(auVar20 * ZEXT816(0xffffffffffffffff),8);
  uVar76 = uVar88 + uVar89 + (ulong)CARRY8(uVar78,uVar87);
  uVar77 = uVar95 + uVar90 + (ulong)bVar59 + (ulong)CARRY8(uVar77,uVar99) +
           (ulong)(CARRY8(uVar88,uVar89) || CARRY8(uVar88 + uVar89,(ulong)CARRY8(uVar78,uVar87)));
  uVar104 = nzcv;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar101;
  uVar91 = SUB168(auVar21 * ZEXT816(0xffffffff00000001),8);
  bVar62 = CARRY8(uVar74,uVar97 + uVar94) ||
           CARRY8(uVar74 + uVar97 + uVar94,(ulong)CARRY8(-uVar101,uVar101));
  uVar89 = uVar78 + uVar87 + (ulong)bVar62;
  uVar87 = (ulong)CARRY8(uVar78 + uVar87,(ulong)bVar62);
  uVar88 = uVar76 + uVar92;
  uVar78 = (ulong)CARRY8(uVar76,uVar92);
  uVar74 = uVar77 + uVar91;
  uVar76 = (ulong)CARRY8(uVar77,uVar91);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar101;
  uVar77 = SUB168(auVar22 * ZEXT816(0xffffffff),8);
  bVar62 = CARRY8(uVar89,uVar77) || CARRY8(uVar89 + uVar77,(ulong)CARRY8(uVar97,uVar94));
  uVar77 = uVar89 + uVar77 + (ulong)CARRY8(uVar97,uVar94);
  bVar58 = CARRY8(uVar88,uVar87) || CARRY8(uVar88 + uVar87,(ulong)bVar62);
  uVar87 = uVar88 + uVar87 + (ulong)bVar62;
  bVar62 = CARRY8(uVar74 + uVar78,(ulong)bVar58);
  uVar88 = uVar74 + uVar78 + (ulong)bVar58;
  if (CARRY8(uVar74,uVar78) || bVar62) {
    uVar76 = uVar76 + 1;
  }
  uVar101 = lVar93 + uVar79 + (ulong)CARRY8(-uVar101,uVar101) + uVar97 + uVar94;
  nzcv = uVar104;
  uVar79 = uVar76 + (CARRY8(uVar95,uVar90) || CARRY8(uVar95 + uVar90,(ulong)bVar59)) +
           (ulong)(CARRY8(uVar74,uVar78) || bVar62);
  uVar74 = puVar75[2];
  uVar76 = puVar75[3];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar84;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar74;
  uVar95 = SUB168(auVar23 * auVar45,8);
  uVar78 = uVar84 * uVar74;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar81;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar74;
  uVar90 = SUB168(auVar24 * auVar46,8);
  uVar89 = uVar81 * uVar74;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar85;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar74;
  uVar91 = SUB168(auVar25 * auVar47,8);
  uVar99 = uVar85 * uVar74;
  uVar92 = uVar86 * uVar74;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar86;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar74;
  uVar74 = SUB168(auVar26 * auVar48,8);
  bVar62 = CARRY8(uVar91,uVar89) || CARRY8(uVar91 + uVar89,(ulong)CARRY8(uVar74,uVar99));
  uVar91 = uVar91 + uVar89 + (ulong)CARRY8(uVar74,uVar99);
  uVar89 = uVar90 + uVar78 + (ulong)bVar62;
  if (CARRY8(uVar90,uVar78) || CARRY8(uVar90 + uVar78,(ulong)bVar62)) {
    uVar95 = uVar95 + 1;
  }
  uVar78 = uVar101 + uVar92;
  lVar93 = uVar74 + uVar99 + (ulong)CARRY8(uVar101,uVar92);
  uVar90 = lVar93 + uVar77;
  bVar62 = CARRY8(uVar74 + uVar99,uVar77) ||
           CARRY8(uVar74 + uVar99 + uVar77,(ulong)CARRY8(uVar101,uVar92));
  bVar58 = CARRY8(uVar91,uVar87) || CARRY8(uVar91 + uVar87,(ulong)bVar62);
  uVar91 = uVar91 + uVar87 + (ulong)bVar62;
  bVar62 = CARRY8(uVar89,uVar88) || CARRY8(uVar89 + uVar88,(ulong)bVar58);
  uVar87 = uVar89 + uVar88 + (ulong)bVar58;
  uVar89 = uVar95 + bVar62;
  uVar101 = uVar89 + uVar79;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar78;
  uVar99 = SUB168(auVar27 * ZEXT816(0xffffffff00000001),8);
  uVar92 = uVar78 - (uVar78 << 0x20);
  uVar94 = (uVar78 << 0x20) - uVar78;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar78;
  uVar74 = SUB168(auVar28 * ZEXT816(0xffffffff),8);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar78;
  uVar97 = SUB168(auVar29 * ZEXT816(0xffffffffffffffff),8);
  uVar88 = uVar97 + uVar94;
  if (CARRY8(uVar97,uVar94)) {
    uVar74 = uVar74 + 1;
  }
  bVar58 = CARRY8(uVar90,uVar88) || CARRY8(uVar90 + uVar88,(ulong)CARRY8(-uVar78,uVar78));
  bVar59 = CARRY8(uVar91,uVar74) || CARRY8(uVar91 + uVar74,(ulong)bVar58);
  uVar90 = uVar91 + uVar74 + (ulong)bVar58;
  bVar58 = CARRY8(uVar87,uVar92) || CARRY8(uVar87 + uVar92,(ulong)bVar59);
  uVar74 = uVar87 + uVar92 + (ulong)bVar59;
  uVar88 = lVar93 + uVar77 + (ulong)CARRY8(-uVar78,uVar78) + uVar88;
  uVar89 = (ulong)(CARRY8(uVar99,uVar101) || CARRY8(uVar99 + uVar101,(ulong)bVar58)) +
           (ulong)CARRY8(uVar95,(ulong)bVar62) + (ulong)CARRY8(uVar89,uVar79);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar84;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar76;
  uVar95 = SUB168(auVar30 * auVar49,8);
  uVar84 = uVar84 * uVar76;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar81;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar76;
  uVar77 = SUB168(auVar31 * auVar50,8);
  uVar81 = uVar81 * uVar76;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar85;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar76;
  uVar78 = SUB168(auVar32 * auVar51,8);
  uVar85 = uVar85 * uVar76;
  uVar87 = uVar86 * uVar76;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar86;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar76;
  uVar86 = SUB168(auVar33 * auVar52,8);
  bVar62 = CARRY8(uVar78,uVar81) || CARRY8(uVar78 + uVar81,(ulong)CARRY8(uVar86,uVar85));
  uVar81 = uVar78 + uVar81 + (ulong)CARRY8(uVar86,uVar85);
  if (CARRY8(uVar77,uVar84) || CARRY8(uVar77 + uVar84,(ulong)bVar62)) {
    uVar95 = uVar95 + 1;
  }
  uVar76 = uVar88 + uVar87;
  lVar93 = uVar86 + uVar85 + (ulong)CARRY8(uVar88,uVar87);
  uVar78 = lVar93 + uVar90;
  bVar59 = CARRY8(uVar86 + uVar85,uVar90) ||
           CARRY8(uVar86 + uVar85 + uVar90,(ulong)CARRY8(uVar88,uVar87));
  uVar88 = uVar81 + uVar74 + (ulong)bVar59;
  uVar86 = uVar77 + uVar84 + (ulong)bVar62 + uVar99 + uVar101 + (ulong)bVar58 +
           (ulong)(CARRY8(uVar81,uVar74) || CARRY8(uVar81 + uVar74,(ulong)bVar59));
  uVar104 = nzcv;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar76;
  uVar87 = SUB168(auVar34 * ZEXT816(0xffffffffffffffff),8);
  uVar81 = uVar76 - (uVar76 << 0x20);
  uVar84 = (uVar76 << 0x20) - uVar76;
  bVar62 = CARRY8(uVar78,uVar87 + uVar84) ||
           CARRY8(uVar78 + uVar87 + uVar84,(ulong)CARRY8(-uVar76,uVar76));
  uVar85 = uVar88 + bVar62;
  uVar88 = (ulong)CARRY8(uVar88,(ulong)bVar62);
  uVar101 = uVar86 + uVar81;
  uVar77 = (ulong)CARRY8(uVar86,uVar81);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar76;
  uVar81 = SUB168(auVar35 * ZEXT816(0xffffffff00000001),8);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar76;
  uVar86 = SUB168(auVar36 * ZEXT816(0xffffffff),8);
  bVar62 = CARRY8(uVar85,uVar86) || CARRY8(uVar85 + uVar86,(ulong)CARRY8(uVar87,uVar84));
  uVar74 = uVar85 + uVar86 + (ulong)CARRY8(uVar87,uVar84);
  bVar58 = CARRY8(uVar101,uVar88) || CARRY8(uVar101 + uVar88,(ulong)bVar62);
  uVar85 = uVar101 + uVar88 + (ulong)bVar62;
  cVar60 = CARRY8(uVar81,uVar77) || CARRY8(uVar81 + uVar77,(ulong)bVar58);
  uVar77 = uVar81 + uVar77 + (ulong)bVar58;
  nzcv = uVar104;
  uVar101 = (ulong)(byte)cVar60;
  uVar81 = (ulong)(byte)cVar60;
  uVar86 = uVar95 + uVar81 + uVar89;
  uVar88 = uVar77 + uVar86;
  if (CARRY8(uVar77,uVar86)) {
    cVar60 = cVar60 + '\x01';
  }
  uVar76 = lVar93 + uVar90 + (ulong)CARRY8(-uVar76,uVar76) + uVar87 + uVar84;
  uVar86 = (ulong)(byte)-((0xfffffffffffffffe < uVar76) + -1);
  uVar77 = uVar74 - uVar86;
  uVar86 = (ulong)(byte)-((-1 - (uVar74 < uVar86)) + (0xfffffffe < uVar77));
  uVar84 = (ulong)(uVar85 < uVar86);
  uVar78 = uVar88 - uVar84;
  bVar62 = (byte)(cVar60 + CARRY8(uVar95,uVar101) + CARRY8(uVar95 + uVar81,uVar89)) <
           (byte)-((-1 - (uVar88 < uVar84)) + (0xffffffff00000000 < uVar78));
  uVar95 = uVar85 - uVar86;
  uVar101 = uVar77 - 0xffffffff;
  uVar81 = uVar76 + 1;
  if (bVar62) {
    uVar95 = uVar85;
    uVar101 = uVar74;
    uVar81 = uVar76;
  }
  *puVar66 = uVar81;
  puVar66[1] = uVar101;
  uVar101 = uVar78 + 0xffffffff;
  if (bVar62) {
    uVar101 = uVar88;
  }
  puVar66[2] = uVar95;
  puVar66[3] = uVar101;
  return;
}



/* Entry: 006fb580; end: 006fbd1f;  */

void FUN_006fb580(undefined8 param_1,long param_2,ulong *param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  long lVar57;
  bool bVar58;
  bool bVar59;
  char cVar60;
  undefined1 uVar61;
  bool bVar62;
  int iVar63;
  int iVar64;
  ulong *puVar65;
  undefined8 *puVar66;
  ulong *puVar67;
  undefined1 *puVar68;
  undefined1 *puVar69;
  undefined1 *puVar70;
  ulong *puVar71;
  ulong uVar72;
  ulong *puVar73;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  ulong uVar77;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint uVar78;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar79;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  uint uVar80;
  uint extraout_w9;
  uint extraout_w9_00;
  long lVar81;
  ulong uVar82;
  ulong uVar83;
  ulong uVar84;
  ulong uVar85;
  ulong uVar86;
  ulong uVar87;
  ulong uVar88;
  ulong uVar89;
  ulong uVar90;
  long lVar91;
  ulong uVar92;
  ulong uVar93;
  ulong *puVar94;
  ulong uVar95;
  uint uVar96;
  ulong uVar97;
  ulong unaff_x24;
  ulong uVar98;
  ulong uVar99;
  ulong uVar100;
  ulong uVar101;
  undefined8 uVar102;
  ulong unaff_x28;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  long lVar107;
  undefined8 in_stack_00000050;
  undefined8 auStack_f20 [2];
  undefined8 uStack_f10;
  ulong uStack_ed0;
  ulong uStack_ec8;
  ulong uStack_ec0;
  ulong uStack_eb8;
  ulong uStack_e90;
  ulong uStack_e88;
  ulong uStack_e80;
  ulong uStack_e78;
  undefined8 uStack_e68;
  ulong *puStack_e60;
  ulong *puStack_e58;
  undefined1 *puStack_e50;
  ulong *puStack_e48;
  undefined8 ***pppuStack_e40;
  code *pcStack_e38;
  ulong *puStack_e30;
  ulong *puStack_e28;
  ulong *puStack_e18;
  ulong auStack_e10 [4];
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  ulong auStack_db0 [5];
  char acStack_d81 [257];
  undefined1 auStack_c80 [32];
  ulong auStack_c60 [4];
  ulong auStack_c40 [4];
  ulong auStack_c20 [4];
  ulong auStack_c00 [4];
  ulong auStack_be0 [4];
  undefined1 auStack_bc0 [32];
  undefined1 auStack_ba0 [32];
  undefined1 auStack_b80 [624];
  undefined1 *puStack_910;
  undefined1 *puStack_908;
  undefined8 *puStack_900;
  undefined1 *puStack_8f8;
  undefined1 *puStack_8f0;
  undefined1 *puStack_8e8;
  undefined1 *puStack_8e0;
  undefined1 *puStack_8d8;
  undefined1 auStack_8d0 [16];
  undefined8 **ppuStack_8c0;
  undefined8 uStack_8b8;
  undefined1 auStack_8b0 [32];
  undefined1 auStack_890 [32];
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  ulong auStack_830 [6];
  ulong uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  undefined8 *puStack_7d8;
  ulong uStack_7d0;
  ulong *puStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  undefined8 *puStack_7b0;
  undefined8 uStack_7a8;
  ulong *puStack_7a0;
  undefined8 *puStack_798;
  long lStack_788;
  ulong *puStack_780;
  undefined8 *puStack_778;
  long lStack_770;
  long lStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  ulong auStack_678 [4];
  ulong auStack_658 [8];
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong auStack_58 [4];
  undefined8 auStack_38 [4];
  undefined8 auStack_18 [3];
  
  func_0x006fdcd0();
  lStack_788 = param_2;
  func_0x006fd5fc();
  auStack_18[0] = extraout_x8;
  _bzero(auStack_678,0x660);
  uStack_618 = *param_3;
  uStack_610 = param_3[1];
  uStack_608 = param_3[2];
  uStack_600 = param_3[3];
  uStack_5f8 = param_3[9];
  uStack_5f0 = param_3[10];
  uStack_5e8 = param_3[0xb];
  uStack_5e0 = param_3[0xc];
  uStack_5d8 = param_3[0x12];
  uStack_5d0 = param_3[0x13];
  uStack_5c8 = param_3[0x14];
  uStack_5c0 = param_3[0x15];
  lVar91 = -0x5a0;
  uVar93 = 2;
  do {
    if ((uVar93 & 1) == 0) {
      puVar71 = auStack_678 + (uVar93 >> 1) * 0xc;
      puVar68 = &stack0x00000028 + lVar91;
      puVar65 = auStack_658 + (uVar93 >> 1) * 0xc;
      FUN_006fcba0((long)auStack_18 + lVar91,&stack0x00000008 + lVar91);
    }
    else {
      puStack_7a0 = (ulong *)((long)auStack_58 + lVar91);
      puStack_798 = (undefined8 *)((long)auStack_38 + lVar91);
      puVar68 = &stack0x00000028 + lVar91;
      puVar71 = &uStack_618;
      puVar65 = &uStack_5f8;
      func_0x006fe164((long)auStack_18 + lVar91,&stack0x00000008 + lVar91);
    }
    uVar93 = uVar93 + 1;
    lVar91 = lVar91 + 0x60;
  } while (lVar91 != 0);
  uStack_698 = 0;
  uStack_6a0 = 0;
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_6b8 = 0;
  uStack_6c0 = 0;
  uStack_6a8 = 0;
  uStack_6b0 = 0;
  puStack_778 = &uStack_720;
  uStack_6d8 = 0;
  uStack_6e0 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  puStack_780 = auStack_658 + 1;
  uVar102 = 1;
  for (uVar99 = 0xff; lVar91 = lStack_788, uVar61 = uVar99 == 0x100, uVar99 < 0x100;
      uVar99 = uVar99 - 1) {
    if ((int)uVar102 == 0) {
      func_0x006fe140();
      FUN_006fcba0();
    }
    uVar96 = (uint)uVar99;
    if (uVar96 == (uVar96 / 5) * 5) {
      if (uVar99 < 0xfc) {
        func_0x006fd6b0(uVar96 + 4);
        uVar78 = (extraout_w8 & 1) << 5;
        uVar80 = uVar96 + 3;
LAB_006fb6d4:
        uVar78 = uVar78 | (*(byte *)(param_4 + (ulong)(uVar80 >> 3)) >> (ulong)(uVar80 & 7) & 1) <<
                          4;
LAB_006fb6f0:
        func_0x006fec2c(uVar78);
        uVar93 = extraout_x8_00 | (extraout_w9 & 1) << 3;
LAB_006fb700:
        uVar79 = uVar93 | (*(byte *)(param_4 + (ulong)(uVar96 + 1 >> 3)) >> (ulong)(uVar96 + 1 & 7)
                          & 1) << 2;
      }
      else {
        if (uVar99 == 0xfc) {
          uVar78 = 0;
          uVar80 = 0xff;
          goto LAB_006fb6d4;
        }
        if (uVar99 < 0xfe) {
          uVar78 = 0;
          goto LAB_006fb6f0;
        }
        uVar93 = 0;
        uVar79 = 0;
        if (uVar99 != 0xff) goto LAB_006fb700;
      }
      if (uVar96 - 1 < 0x100) {
        func_0x006fec2c();
        uVar93 = (ulong)(extraout_w9_00 & 1);
        uVar79 = extraout_x8_01;
      }
      else {
        uVar93 = 0;
      }
      puVar68 = (undefined1 *)
                (uVar79 | (*(byte *)(param_4 + (uVar99 >> 3)) >> (ulong)(uVar96 & 7) & 1) << 1 |
                uVar93);
      FUN_006ef290(&lStack_768,&lStack_770);
      unaff_x24 = 0;
      auVar103 = ZEXT216(0);
      lVar81 = 0x660;
      auVar106 = ZEXT216(0);
      auVar104 = ZEXT216(0);
      auVar105 = ZEXT216(0);
      lVar91 = lStack_770;
      puVar94 = puStack_780;
      uVar79 = 0;
      uVar84 = 0;
      uVar86 = 0;
      do {
        bVar62 = lVar91 == 0;
        uVar93 = *puVar94;
        uVar82 = puVar94[-1];
        if (!bVar62) {
          uVar93 = uVar84;
          uVar82 = unaff_x24;
        }
        unaff_x24 = uVar82;
        uVar82 = puVar94[1];
        if (!bVar62) {
          uVar82 = uVar79;
        }
        lVar57 = -(ulong)((long)((ulong)CONCAT14(bVar62,(uint)bVar62) << 0x3f) < 0);
        lVar107 = -(ulong)((long)((ulong)bVar62 << 0x3f) < 0);
        auVar53._8_8_ = lVar107;
        auVar53._0_8_ = lVar57;
        auVar103 = auVar103 ^ (auVar103 ^ *(undefined1 (*) [16])(puVar94 + -5)) & auVar53;
        auVar54._8_8_ = lVar107;
        auVar54._0_8_ = lVar57;
        auVar106 = auVar106 ^ (auVar106 ^ *(undefined1 (*) [16])(puVar94 + -3)) & auVar54;
        unaff_x28 = puVar94[2];
        if (!bVar62) {
          unaff_x28 = uVar86;
        }
        auVar55._8_8_ = lVar107;
        auVar55._0_8_ = lVar57;
        auVar104 = auVar104 ^ (auVar104 ^ *(undefined1 (*) [16])(puVar94 + 3)) & auVar55;
        auVar56._8_8_ = lVar107;
        auVar56._0_8_ = lVar57;
        auVar105 = auVar105 ^ (auVar105 ^ *(undefined1 (*) [16])(puVar94 + 5)) & auVar56;
        lVar81 = lVar81 + -0x60;
        puVar94 = puVar94 + 0xc;
        lVar91 = lVar91 + -1;
        uVar79 = uVar82;
        uVar84 = uVar93;
        uVar86 = unaff_x28;
      } while (lVar81 != 0);
      uStack_758 = auVar103._8_8_;
      uStack_760 = auVar103._0_8_;
      uStack_748 = auVar106._8_8_;
      uStack_750 = auVar106._0_8_;
      uStack_718 = auVar104._8_8_;
      uStack_720 = auVar104._0_8_;
      uStack_708 = auVar105._8_8_;
      uStack_710 = auVar105._0_8_;
      uStack_740 = unaff_x24;
      uStack_738 = uVar93;
      uStack_730 = uVar82;
      uStack_728 = unaff_x28;
      func_0x006fcd58(&uStack_700,&uStack_740);
      uStack_728 = unaff_x28;
      uStack_730 = uVar82;
      uStack_738 = uVar93;
      uStack_740 = unaff_x24;
      if (lStack_768 != 0) {
        uStack_728 = uStack_6e8;
        uStack_730 = uStack_6f0;
        uStack_738 = uStack_6f8;
        uStack_740 = uStack_700;
      }
      if ((int)uVar102 == 0) {
        puStack_798 = puStack_778;
        puStack_7a0 = &uStack_740;
        func_0x006fe140();
        func_0x006fe164();
      }
      else {
        func_0x006fcb80(&uStack_6e0,&uStack_760);
        func_0x006fe428(&uStack_6c0);
        func_0x006fcb80(&uStack_6a0,puStack_778);
      }
      uVar102 = 0;
    }
  }
  func_0x006fde74();
  FUN_006fc2e4(lVar91 + 0x48,&uStack_6c0);
  puVar66 = &uStack_6a0;
  FUN_006fc2e4(lVar91 + 0x90);
  func_0x006fd534(auStack_18[0]);
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uStack_7f0 = 5;
  lStack_7b8 = lVar91;
  uStack_7a8 = 0x6fb8e0;
  bVar62 = false;
  puVar69 = puVar68;
  puStack_900 = puVar66;
  uStack_800 = unaff_x28;
  uStack_7f8 = uVar102;
  uStack_7e8 = uVar99;
  uStack_7e0 = unaff_x24;
  puStack_7d8 = &uStack_6e0;
  uStack_7d0 = uVar93;
  puStack_7c8 = &uStack_740;
  lStack_7c0 = param_4;
  puStack_7b0 = &stack0x00000050;
  func_0x006fd588();
  puStack_8d8 = puVar69 + 0x1c;
  puStack_8e0 = puVar69 + 0x14;
  puStack_8e8 = puVar69 + 0xc;
  auStack_830[1] = 0;
  auStack_830[0] = 0;
  auStack_830[3] = 0;
  auStack_830[2] = 0;
  puStack_8f0 = puVar69 + 4;
  puStack_8f8 = puVar69 + 0x18;
  uStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  puVar70 = puVar69;
  for (uVar93 = 0x1f; puVar66 = puStack_900, uVar61 = uVar93 == 0x20, uVar93 < 0x20;
      uVar93 = uVar93 - 1) {
    if (bVar62) {
      func_0x006fd994();
      FUN_006fcba0();
    }
    uVar99 = uVar93 >> 3;
    uVar96 = (uint)uVar93 & 7;
    uVar80 = ((byte)puStack_8d8[uVar99] >> (ulong)uVar96 & 1) << 3;
    func_0x006fea80(puStack_8e0,uVar80);
    uVar80 = uVar80 & 0xfffffff8 | uVar80 & 3 | (extraout_w8_00 & 1) << 2;
    func_0x006fea80(puStack_8e8,uVar80);
    uVar80 = uVar80 & 0xfffffffc | uVar80 & 1 | (extraout_w8_01 & 1) << 1;
    func_0x006fea80(puStack_8f0,uVar80);
    FUN_006fcdd8(uVar80 & 0xfffffffe | extraout_w8_02 & 1,&UNK_00838268,auStack_8d0);
    if (bVar62) {
      puStack_910 = auStack_8b0;
      puStack_908 = auStack_890;
      func_0x006fd994();
      func_0x006fe378();
    }
    else {
      func_0x006fcb80(&uStack_870,auStack_8d0);
      func_0x006fe428(&uStack_850);
      func_0x006fcb80(auStack_830,auStack_890);
    }
    func_0x006fea80(puStack_8f8);
    puVar70 = auStack_8d0;
    FUN_006fcdd8((extraout_w8_03 & 1) << 3 |
                 ((byte)puVar69[uVar99 + 0x10] >> (ulong)uVar96 & 1) << 2 |
                 ((byte)puVar69[uVar99 + 8] >> (ulong)uVar96 & 1) << 1 |
                 (byte)puVar68[uVar99] >> (ulong)uVar96 & 1,&UNK_00837ea8);
    bVar62 = true;
    puStack_910 = auStack_8b0;
    puStack_908 = auStack_890;
    func_0x006fd994();
    func_0x006fe378();
  }
  func_0x006fde74();
  FUN_006fc2e4(puVar66 + 9,&uStack_850);
  puVar94 = puVar66 + 0x12;
  puVar67 = auStack_830;
  FUN_006fc2e4();
  func_0x006fd508();
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uVar102 = 0x6fbaa0;
  func_0x006fdcd0();
  puStack_e18 = puVar67;
  ppuStack_8c0 = &puStack_7b0;
  uStack_8b8 = uVar102;
  func_0x006fd588();
  auStack_c20[0] = *puVar71;
  auStack_c20[1] = puVar71[1];
  auStack_c20[2] = puVar71[2];
  auStack_c20[3] = puVar71[3];
  auStack_c00[0] = puVar71[9];
  auStack_c00[1] = puVar71[10];
  auStack_c00[2] = puVar71[0xb];
  auStack_c00[3] = puVar71[0xc];
  auStack_be0[0] = puVar71[0x12];
  auStack_be0[1] = puVar71[0x13];
  auStack_be0[2] = puVar71[0x14];
  auStack_be0[3] = puVar71[0x15];
  FUN_006fcba0(auStack_c80,auStack_c60,auStack_c40,auStack_c20,auStack_c00,auStack_be0);
  for (lVar91 = 0; lVar91 != 0x2a0; lVar91 = lVar91 + 0x60) {
    puStack_e30 = auStack_c60;
    puStack_e28 = auStack_c40;
    func_0x006fe164(auStack_bc0 + lVar91,auStack_ba0 + lVar91,auStack_b80 + lVar91,
                    (long)auStack_c20 + lVar91,(long)auStack_c00 + lVar91,(long)auStack_be0 + lVar91
                   );
  }
  uVar93 = 0x100;
  puVar71 = puVar65;
  func_0x006ef2c4(puVar94,acStack_d81,puVar65,0x100);
  auStack_db0[1] = 0;
  auStack_db0[0] = 0;
  auStack_db0[3] = 0;
  auStack_db0[2] = 0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  uStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  uStack_de0 = 0;
  bVar62 = true;
  do {
    if (!bVar62) {
      func_0x006fd6e0();
      FUN_006fcba0();
    }
    uVar96 = (uint)uVar93;
    uVar61 = uVar96 == 0x1f;
    if (uVar96 < 0x20) {
      puVar65 = (ulong *)(puVar70 + (uVar96 >> 3));
      uVar80 = uVar96 & 7;
      puVar94 = (ulong *)(ulong)uVar80;
      uVar78 = (*(byte *)((long)puVar65 + 0x1c) >> (long)puVar94 & 1) << 3 |
               (*(byte *)((long)puVar65 + 0x14) >> (ulong)uVar80 & 1) << 2 |
               (*(byte *)((long)puVar65 + 0xc) >> (long)puVar94 & 1) << 1 |
               *(byte *)((long)puVar65 + 4) >> (ulong)uVar80 & 1;
      if (uVar78 != 0) {
        puStack_e30 = (ulong *)(&UNK_00838248 + (ulong)uVar78 * 0x40);
        puStack_e28 = (ulong *)&UNK_00838628;
        func_0x006fd6e0();
        func_0x006fe378();
        bVar62 = false;
      }
      uVar80 = ((byte)((byte)puVar65[3] >> (ulong)uVar80) & 1) << 3 |
               ((byte)((byte)puVar65[2] >> (ulong)uVar80) & 1) << 2 |
               ((byte)((byte)puVar65[1] >> (long)puVar94) & 1) << 1 |
               (byte)((byte)*puVar65 >> (ulong)uVar80) & 1;
      if (uVar80 != 0) {
        puStack_e30 = (ulong *)(&UNK_00837e88 + (ulong)uVar80 * 0x40);
        puStack_e28 = (ulong *)&UNK_00838628;
        func_0x006fd6e0();
        func_0x006fe378();
        bVar62 = false;
      }
    }
    cVar60 = acStack_d81[uVar93];
    if (cVar60 != '\0') {
      uVar61 = cVar60 == '\0';
      uVar78 = (uint)cVar60;
      uVar80 = -uVar78;
      if (-1 < cVar60) {
        uVar80 = uVar78;
      }
      uVar93 = (ulong)(uVar80 >> 1);
      puVar65 = auStack_c20 + uVar93 * 0xc;
      puVar94 = auStack_c00 + uVar93 * 0xc;
      if ((int)uVar78 < 0) {
        func_0x006fcd58(auStack_e10,puVar94);
        puVar94 = auStack_e10;
        if (!bVar62) goto LAB_006fbcc0;
LAB_006fbc88:
        func_0x006fe428(&uStack_df0);
        func_0x006fcb80(&uStack_dd0,puVar94);
        func_0x006fcb80(auStack_db0,auStack_be0 + uVar93 * 0xc);
      }
      else {
        if (bVar62) goto LAB_006fbc88;
LAB_006fbcc0:
        puStack_e28 = auStack_be0 + uVar93 * 0xc;
        puStack_e30 = puVar94;
        func_0x006fd6e0();
        FUN_006fc724();
      }
      bVar62 = false;
    }
    puVar67 = puStack_e18;
    uVar93 = (ulong)(uVar96 - 1);
  } while (-1 < (int)(uVar96 - 1));
  func_0x006fde74();
  FUN_006fc2e4(puVar67 + 9,&uStack_dd0);
  iVar63 = (int)puVar67 + 0x90;
  puVar73 = auStack_db0;
  FUN_006fc2e4();
  func_0x006fd508();
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  iVar64 = (int)auStack_f20;
  puStack_e48 = puVar67;
  pcStack_e38 = FUN_006fbd20;
  puStack_e60 = puVar94;
  puStack_e58 = puVar65;
  puStack_e50 = puVar70;
  pppuStack_e40 = &ppuStack_8c0;
  func_0x006fd9b0();
  func_0x006fd5fc();
  uStack_e68 = extraout_x8_02;
  FUN_006ec074();
  if (iVar63 == 0) {
    uStack_e90 = puVar65[0x12];
    uStack_e88 = puVar65[0x13];
    uStack_e80 = puVar65[0x14];
    uStack_e78 = puVar65[0x15];
    FUN_006fbf84(&uStack_e90,&uStack_e90,&uStack_e90);
    func_0x006fe078(*puVar67,puVar67[2]);
    uVar93 = *puVar65;
    auVar103._8_8_ = 0;
    auVar103._0_8_ = uVar93;
    uVar84 = SUB168(auVar103 * ZEXT816(0xffffffff00000001),8);
    uVar86 = uVar93 - (uVar93 << 0x20);
    auVar104._8_8_ = 0;
    auVar104._0_8_ = uVar93;
    lVar91 = SUB168(auVar104 * ZEXT816(0xffffffff),8);
    uVar82 = (uVar93 << 0x20) - uVar93;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = uVar93;
    uVar99 = SUB168(auVar105 * ZEXT816(0xffffffffffffffff),8);
    uVar79 = uVar99 + uVar82 + (ulong)CARRY8(-uVar93,uVar93);
    if (CARRY8(uVar99,uVar82) || CARRY8(uVar99 + uVar82,(ulong)CARRY8(-uVar93,uVar93))) {
      lVar91 = lVar91 + 1;
    }
    uVar93 = uVar79 + puVar65[1];
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uVar93;
    uVar82 = SUB168(auVar106 * ZEXT816(0xffffffffffffffff),8);
    uVar83 = uVar93 - (uVar93 << 0x20);
    uVar76 = (uVar93 << 0x20) - uVar93;
    uVar99 = uVar82 + uVar76;
    uVar72 = lVar91 + (ulong)CARRY8(uVar79,puVar65[1]) + (ulong)CARRY8(-uVar93,uVar93);
    uVar74 = uVar86 + CARRY8(uVar72,uVar99);
    uVar75 = (ulong)CARRY8(uVar86,(ulong)CARRY8(uVar72,uVar99));
    uVar79 = uVar83 + uVar84;
    uVar84 = (ulong)CARRY8(uVar83,uVar84);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar93;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar93;
    uVar93 = SUB168(auVar2 * ZEXT816(0xffffffff),8);
    bVar62 = CARRY8(uVar74,uVar93) || CARRY8(uVar74 + uVar93,(ulong)CARRY8(uVar82,uVar76));
    uVar93 = uVar74 + uVar93 + (ulong)CARRY8(uVar82,uVar76);
    uVar86 = uVar79 + uVar75 + (ulong)bVar62;
    if (CARRY8(uVar79,uVar75) || CARRY8(uVar79 + uVar75,(ulong)bVar62)) {
      uVar84 = uVar84 + 1;
    }
    bVar62 = CARRY8(uVar72 + uVar99,puVar65[2]);
    uVar99 = uVar72 + uVar99 + puVar65[2];
    uVar79 = uVar86 + CARRY8(uVar93,(ulong)bVar62);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar99;
    uVar82 = SUB168(auVar3 * ZEXT816(0xffffffffffffffff),8);
    uVar84 = uVar84 + SUB168(auVar1 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar86,(ulong)CARRY8(uVar93,(ulong)bVar62));
    uVar83 = uVar99 - (uVar99 << 0x20);
    uVar86 = (uVar99 << 0x20) - uVar99;
    bVar58 = CARRY8(uVar93 + bVar62,uVar82 + uVar86) ||
             CARRY8(uVar93 + bVar62 + uVar82 + uVar86,(ulong)CARRY8(-uVar99,uVar99));
    uVar72 = uVar79 + bVar58;
    uVar74 = (ulong)CARRY8(uVar79,(ulong)bVar58);
    uVar79 = uVar83 + uVar84;
    uVar84 = (ulong)CARRY8(uVar83,uVar84);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar99;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar99;
    uVar83 = SUB168(auVar5 * ZEXT816(0xffffffff),8);
    uVar93 = uVar93 + bVar62 + (ulong)CARRY8(-uVar99,uVar99) + uVar82 + uVar86;
    bVar62 = CARRY8(uVar72,uVar83) || CARRY8(uVar72 + uVar83,(ulong)CARRY8(uVar82,uVar86));
    uVar99 = uVar72 + uVar83 + (ulong)CARRY8(uVar82,uVar86);
    uVar86 = uVar79 + uVar74 + (ulong)bVar62;
    if (CARRY8(uVar79,uVar74) || CARRY8(uVar79 + uVar74,(ulong)bVar62)) {
      uVar84 = uVar84 + 1;
    }
    bVar62 = CARRY8(uVar93,puVar65[3]);
    uVar93 = uVar93 + puVar65[3];
    uVar72 = uVar86 + CARRY8(uVar99,(ulong)bVar62);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar93;
    uVar82 = SUB168(auVar6 * ZEXT816(0xffffffff00000001),8);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar93;
    puVar73 = SUB168(auVar7 * ZEXT816(0xffffffff),8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar93;
    uVar83 = SUB168(auVar8 * ZEXT816(0xffffffffffffffff),8);
    uVar86 = uVar84 + SUB168(auVar4 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar86,(ulong)CARRY8(uVar99,(ulong)bVar62));
    puVar71 = (ulong *)(uVar93 - (uVar93 << 0x20));
    uVar84 = (uVar93 << 0x20) - uVar93;
    uVar79 = uVar83 + uVar84;
    if (CARRY8(uVar83,uVar84)) {
      puVar73 = (ulong *)((long)puVar73 + 1);
    }
    uVar84 = uVar99 + bVar62 + (ulong)CARRY8(-uVar93,uVar93) + uVar79;
    bVar62 = CARRY8(uVar99 + bVar62,uVar79) ||
             CARRY8(uVar99 + bVar62 + uVar79,(ulong)CARRY8(-uVar93,uVar93));
    bVar58 = CARRY8(uVar72,(ulong)puVar73) || CARRY8(uVar72 + (long)puVar73,(ulong)bVar62);
    uVar93 = (long)puVar73 + bVar62 + uVar72;
    uVar99 = (long)puVar71 + bVar58 + uVar86;
    if (CARRY8((ulong)puVar71,uVar86) || CARRY8((long)puVar71 + uVar86,(ulong)bVar58)) {
      uVar82 = uVar82 + 1;
    }
    uVar79 = (ulong)(byte)-((0xfffffffffffffffe < uVar84) + -1);
    uVar83 = uVar93 - uVar79;
    uVar79 = (ulong)(byte)-((-1 - (uVar93 < uVar79)) + (0xfffffffe < uVar83));
    uVar86 = (ulong)(uVar99 < uVar79);
    uVar72 = uVar82 - uVar86;
    iVar63 = -(uint)(uVar82 < uVar86);
    uVar61 = (char)((char)iVar63 + -1 + (0xffffffff00000000 < uVar72)) == '\0';
    uStack_eb8 = uVar72 + 0xffffffff;
    uStack_ec0 = uVar99 - uVar79;
    uStack_ec8 = uVar83 - 0xffffffff;
    uStack_ed0 = uVar84 + 1;
    if (!(bool)uVar61) {
      uStack_eb8 = uVar82;
      uStack_ec0 = uVar99;
      uStack_ec8 = uVar93;
      uStack_ed0 = uVar84;
    }
    func_0x006fe338();
    if (iVar63 == 0) {
LAB_006fbf78:
      puVar65 = (ulong *)((long)&MACH_HEADER.magic + 1);
      goto LAB_006fbd4c;
    }
    puVar71 = (ulong *)(long)*(int *)(puVar70 + 0x40);
    puVar73 = (ulong *)(puVar70 + 0xe8);
    func_0x006fe7b8();
    if (iVar63 != 0) {
      puVar71 = *(ulong **)(puVar70 + 0x10);
      FUN_006e3678();
      func_0x006fe078(auStack_f20[0],uStack_f10);
      func_0x006fe338();
      puVar73 = puVar67;
      if (iVar64 == 0) goto LAB_006fbf78;
    }
  }
  puVar65 = (ulong *)0x0;
LAB_006fbd4c:
  func_0x006fd534(uStack_e68);
  if ((bool)uVar61) {
    return;
  }
  ___stack_chk_fail();
  uVar99 = *puVar73;
  uVar86 = puVar73[1];
  uVar79 = puVar71[2];
  uVar82 = puVar71[3];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar82;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar99;
  uVar93 = SUB168(auVar9 * auVar37,8);
  uVar85 = uVar82 * uVar99;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar79;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar99;
  uVar87 = SUB168(auVar10 * auVar38,8);
  uVar88 = uVar79 * uVar99;
  uVar84 = *puVar71;
  uVar83 = puVar71[1];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar83;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar99;
  uVar72 = SUB168(auVar11 * auVar39,8);
  uVar74 = uVar83 * uVar99;
  uVar75 = uVar84 * uVar99;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar84;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar99;
  uVar76 = SUB168(auVar12 * auVar40,8);
  bVar62 = CARRY8(uVar72,uVar88) || CARRY8(uVar72 + uVar88,(ulong)CARRY8(uVar76,uVar74));
  uVar88 = uVar72 + uVar88 + (ulong)CARRY8(uVar76,uVar74);
  uVar72 = uVar87 + uVar85 + (ulong)bVar62;
  if (CARRY8(uVar87,uVar85) || CARRY8(uVar87 + uVar85,(ulong)bVar62)) {
    uVar93 = uVar93 + 1;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar75;
  uVar77 = SUB168(auVar13 * ZEXT816(0xffffffff00000001),8);
  uVar87 = uVar75 - (uVar75 << 0x20);
  uVar90 = (uVar75 << 0x20) - uVar75;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar75;
  uVar92 = SUB168(auVar14 * ZEXT816(0xffffffffffffffff),8);
  bVar62 = CARRY8(-(uVar84 * uVar99),uVar75);
  bVar58 = CARRY8(uVar76 + uVar74,uVar92 + uVar90) ||
           CARRY8(uVar76 + uVar74 + uVar92 + uVar90,(ulong)bVar62);
  uVar89 = uVar88 + bVar58;
  uVar85 = (ulong)CARRY8(uVar88,(ulong)bVar58);
  uVar99 = uVar72 + uVar87;
  uVar87 = (ulong)CARRY8(uVar72,uVar87);
  uVar72 = uVar77 + uVar93;
  uVar88 = (ulong)CARRY8(uVar77,uVar93);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar82;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar86;
  uVar93 = SUB168(auVar15 * auVar41,8);
  uVar77 = uVar82 * uVar86;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar79;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar86;
  uVar95 = SUB168(auVar16 * auVar42,8);
  uVar97 = uVar79 * uVar86;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar83;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar86;
  uVar98 = SUB168(auVar17 * auVar43,8);
  uVar100 = uVar83 * uVar86;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar84;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar86;
  uVar101 = SUB168(auVar18 * auVar44,8);
  bVar58 = CARRY8(uVar98,uVar97) || CARRY8(uVar98 + uVar97,(ulong)CARRY8(uVar101,uVar100));
  uVar98 = uVar98 + uVar97 + (ulong)CARRY8(uVar101,uVar100);
  uVar97 = uVar95 + uVar77 + (ulong)bVar58;
  if (CARRY8(uVar95,uVar77) || CARRY8(uVar95 + uVar77,(ulong)bVar58)) {
    uVar93 = uVar93 + 1;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar75;
  uVar75 = SUB168(auVar19 * ZEXT816(0xffffffff),8);
  uVar74 = uVar76 + uVar74 + (ulong)bVar62 + uVar92 + uVar90;
  bVar62 = CARRY8(uVar89,uVar75) || CARRY8(uVar89 + uVar75,(ulong)CARRY8(uVar92,uVar90));
  uVar77 = uVar89 + uVar75 + (ulong)CARRY8(uVar92,uVar90);
  bVar58 = CARRY8(uVar99,uVar85) || CARRY8(uVar99 + uVar85,(ulong)bVar62);
  uVar85 = uVar99 + uVar85 + (ulong)bVar62;
  bVar59 = CARRY8(uVar72,uVar87) || CARRY8(uVar72 + uVar87,(ulong)bVar58);
  uVar75 = uVar72 + uVar87 + (ulong)bVar58;
  uVar86 = uVar84 * uVar86;
  uVar99 = uVar74 + uVar86;
  lVar91 = uVar101 + uVar100 + (ulong)CARRY8(uVar74,uVar86);
  uVar72 = lVar91 + uVar77;
  bVar62 = CARRY8(uVar101 + uVar100,uVar77) ||
           CARRY8(uVar101 + uVar100 + uVar77,(ulong)CARRY8(uVar74,uVar86));
  uVar76 = uVar98 + bVar62;
  uVar87 = (ulong)CARRY8(uVar98,(ulong)bVar62);
  uVar86 = uVar75 + uVar97;
  uVar90 = uVar99 - (uVar99 << 0x20);
  uVar92 = (uVar99 << 0x20) - uVar99;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar99;
  uVar95 = SUB168(auVar20 * ZEXT816(0xffffffffffffffff),8);
  uVar74 = uVar86 + uVar87 + (ulong)CARRY8(uVar76,uVar85);
  uVar75 = uVar93 + uVar88 + (ulong)bVar59 + (ulong)CARRY8(uVar75,uVar97) +
           (ulong)(CARRY8(uVar86,uVar87) || CARRY8(uVar86 + uVar87,(ulong)CARRY8(uVar76,uVar85)));
  uVar102 = nzcv;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar99;
  uVar89 = SUB168(auVar21 * ZEXT816(0xffffffff00000001),8);
  bVar62 = CARRY8(uVar72,uVar95 + uVar92) ||
           CARRY8(uVar72 + uVar95 + uVar92,(ulong)CARRY8(-uVar99,uVar99));
  uVar87 = uVar76 + uVar85 + (ulong)bVar62;
  uVar85 = (ulong)CARRY8(uVar76 + uVar85,(ulong)bVar62);
  uVar86 = uVar74 + uVar90;
  uVar76 = (ulong)CARRY8(uVar74,uVar90);
  uVar72 = uVar75 + uVar89;
  uVar74 = (ulong)CARRY8(uVar75,uVar89);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar99;
  uVar75 = SUB168(auVar22 * ZEXT816(0xffffffff),8);
  bVar62 = CARRY8(uVar87,uVar75) || CARRY8(uVar87 + uVar75,(ulong)CARRY8(uVar95,uVar92));
  uVar75 = uVar87 + uVar75 + (ulong)CARRY8(uVar95,uVar92);
  bVar58 = CARRY8(uVar86,uVar85) || CARRY8(uVar86 + uVar85,(ulong)bVar62);
  uVar85 = uVar86 + uVar85 + (ulong)bVar62;
  bVar62 = CARRY8(uVar72 + uVar76,(ulong)bVar58);
  uVar86 = uVar72 + uVar76 + (ulong)bVar58;
  if (CARRY8(uVar72,uVar76) || bVar62) {
    uVar74 = uVar74 + 1;
  }
  uVar99 = lVar91 + uVar77 + (ulong)CARRY8(-uVar99,uVar99) + uVar95 + uVar92;
  nzcv = uVar102;
  uVar77 = uVar74 + (CARRY8(uVar93,uVar88) || CARRY8(uVar93 + uVar88,(ulong)bVar59)) +
           (ulong)(CARRY8(uVar72,uVar76) || bVar62);
  uVar72 = puVar73[2];
  uVar74 = puVar73[3];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar82;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar72;
  uVar93 = SUB168(auVar23 * auVar45,8);
  uVar76 = uVar82 * uVar72;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar79;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar72;
  uVar88 = SUB168(auVar24 * auVar46,8);
  uVar87 = uVar79 * uVar72;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar83;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar72;
  uVar89 = SUB168(auVar25 * auVar47,8);
  uVar97 = uVar83 * uVar72;
  uVar90 = uVar84 * uVar72;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar84;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar72;
  uVar72 = SUB168(auVar26 * auVar48,8);
  bVar62 = CARRY8(uVar89,uVar87) || CARRY8(uVar89 + uVar87,(ulong)CARRY8(uVar72,uVar97));
  uVar89 = uVar89 + uVar87 + (ulong)CARRY8(uVar72,uVar97);
  uVar87 = uVar88 + uVar76 + (ulong)bVar62;
  if (CARRY8(uVar88,uVar76) || CARRY8(uVar88 + uVar76,(ulong)bVar62)) {
    uVar93 = uVar93 + 1;
  }
  uVar76 = uVar99 + uVar90;
  lVar91 = uVar72 + uVar97 + (ulong)CARRY8(uVar99,uVar90);
  uVar88 = lVar91 + uVar75;
  bVar62 = CARRY8(uVar72 + uVar97,uVar75) ||
           CARRY8(uVar72 + uVar97 + uVar75,(ulong)CARRY8(uVar99,uVar90));
  bVar58 = CARRY8(uVar89,uVar85) || CARRY8(uVar89 + uVar85,(ulong)bVar62);
  uVar89 = uVar89 + uVar85 + (ulong)bVar62;
  bVar62 = CARRY8(uVar87,uVar86) || CARRY8(uVar87 + uVar86,(ulong)bVar58);
  uVar85 = uVar87 + uVar86 + (ulong)bVar58;
  uVar87 = uVar93 + bVar62;
  uVar99 = uVar87 + uVar77;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar76;
  uVar97 = SUB168(auVar27 * ZEXT816(0xffffffff00000001),8);
  uVar90 = uVar76 - (uVar76 << 0x20);
  uVar92 = (uVar76 << 0x20) - uVar76;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar76;
  uVar72 = SUB168(auVar28 * ZEXT816(0xffffffff),8);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar76;
  uVar95 = SUB168(auVar29 * ZEXT816(0xffffffffffffffff),8);
  uVar86 = uVar95 + uVar92;
  if (CARRY8(uVar95,uVar92)) {
    uVar72 = uVar72 + 1;
  }
  bVar58 = CARRY8(uVar88,uVar86) || CARRY8(uVar88 + uVar86,(ulong)CARRY8(-uVar76,uVar76));
  bVar59 = CARRY8(uVar89,uVar72) || CARRY8(uVar89 + uVar72,(ulong)bVar58);
  uVar88 = uVar89 + uVar72 + (ulong)bVar58;
  bVar58 = CARRY8(uVar85,uVar90) || CARRY8(uVar85 + uVar90,(ulong)bVar59);
  uVar72 = uVar85 + uVar90 + (ulong)bVar59;
  uVar86 = lVar91 + uVar75 + (ulong)CARRY8(-uVar76,uVar76) + uVar86;
  uVar87 = (ulong)(CARRY8(uVar97,uVar99) || CARRY8(uVar97 + uVar99,(ulong)bVar58)) +
           (ulong)CARRY8(uVar93,(ulong)bVar62) + (ulong)CARRY8(uVar87,uVar77);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar82;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar74;
  uVar93 = SUB168(auVar30 * auVar49,8);
  uVar82 = uVar82 * uVar74;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar79;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar74;
  uVar75 = SUB168(auVar31 * auVar50,8);
  uVar79 = uVar79 * uVar74;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar83;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar74;
  uVar76 = SUB168(auVar32 * auVar51,8);
  uVar83 = uVar83 * uVar74;
  uVar85 = uVar84 * uVar74;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar84;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar74;
  uVar84 = SUB168(auVar33 * auVar52,8);
  bVar62 = CARRY8(uVar76,uVar79) || CARRY8(uVar76 + uVar79,(ulong)CARRY8(uVar84,uVar83));
  uVar79 = uVar76 + uVar79 + (ulong)CARRY8(uVar84,uVar83);
  if (CARRY8(uVar75,uVar82) || CARRY8(uVar75 + uVar82,(ulong)bVar62)) {
    uVar93 = uVar93 + 1;
  }
  uVar74 = uVar86 + uVar85;
  lVar91 = uVar84 + uVar83 + (ulong)CARRY8(uVar86,uVar85);
  uVar76 = lVar91 + uVar88;
  bVar59 = CARRY8(uVar84 + uVar83,uVar88) ||
           CARRY8(uVar84 + uVar83 + uVar88,(ulong)CARRY8(uVar86,uVar85));
  uVar86 = uVar79 + uVar72 + (ulong)bVar59;
  uVar84 = uVar75 + uVar82 + (ulong)bVar62 + uVar97 + uVar99 + (ulong)bVar58 +
           (ulong)(CARRY8(uVar79,uVar72) || CARRY8(uVar79 + uVar72,(ulong)bVar59));
  uVar102 = nzcv;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar74;
  uVar85 = SUB168(auVar34 * ZEXT816(0xffffffffffffffff),8);
  uVar79 = uVar74 - (uVar74 << 0x20);
  uVar82 = (uVar74 << 0x20) - uVar74;
  bVar62 = CARRY8(uVar76,uVar85 + uVar82) ||
           CARRY8(uVar76 + uVar85 + uVar82,(ulong)CARRY8(-uVar74,uVar74));
  uVar83 = uVar86 + bVar62;
  uVar86 = (ulong)CARRY8(uVar86,(ulong)bVar62);
  uVar99 = uVar84 + uVar79;
  uVar75 = (ulong)CARRY8(uVar84,uVar79);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar74;
  uVar79 = SUB168(auVar35 * ZEXT816(0xffffffff00000001),8);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar74;
  uVar84 = SUB168(auVar36 * ZEXT816(0xffffffff),8);
  bVar62 = CARRY8(uVar83,uVar84) || CARRY8(uVar83 + uVar84,(ulong)CARRY8(uVar85,uVar82));
  uVar72 = uVar83 + uVar84 + (ulong)CARRY8(uVar85,uVar82);
  bVar58 = CARRY8(uVar99,uVar86) || CARRY8(uVar99 + uVar86,(ulong)bVar62);
  uVar83 = uVar99 + uVar86 + (ulong)bVar62;
  cVar60 = CARRY8(uVar79,uVar75) || CARRY8(uVar79 + uVar75,(ulong)bVar58);
  uVar75 = uVar79 + uVar75 + (ulong)bVar58;
  nzcv = uVar102;
  uVar99 = (ulong)(byte)cVar60;
  uVar79 = (ulong)(byte)cVar60;
  uVar84 = uVar93 + uVar79 + uVar87;
  uVar86 = uVar75 + uVar84;
  if (CARRY8(uVar75,uVar84)) {
    cVar60 = cVar60 + '\x01';
  }
  uVar74 = lVar91 + uVar88 + (ulong)CARRY8(-uVar74,uVar74) + uVar85 + uVar82;
  uVar84 = (ulong)(byte)-((0xfffffffffffffffe < uVar74) + -1);
  uVar75 = uVar72 - uVar84;
  uVar84 = (ulong)(byte)-((-1 - (uVar72 < uVar84)) + (0xfffffffe < uVar75));
  uVar82 = (ulong)(uVar83 < uVar84);
  uVar76 = uVar86 - uVar82;
  bVar62 = (byte)(cVar60 + CARRY8(uVar93,uVar99) + CARRY8(uVar93 + uVar79,uVar87)) <
           (byte)-((-1 - (uVar86 < uVar82)) + (0xffffffff00000000 < uVar76));
  uVar93 = uVar83 - uVar84;
  uVar99 = uVar75 - 0xffffffff;
  uVar79 = uVar74 + 1;
  if (bVar62) {
    uVar93 = uVar83;
    uVar99 = uVar72;
    uVar79 = uVar74;
  }
  *puVar65 = uVar79;
  puVar65[1] = uVar99;
  uVar99 = uVar76 + 0xffffffff;
  if (bVar62) {
    uVar99 = uVar86;
  }
  puVar65[2] = uVar93;
  puVar65[3] = uVar99;
  return;
}



/* Entry: 006fbd20; end: 006fbf83;  */

void FUN_006fbd20(int param_1,ulong *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar57;
  undefined1 in_ZR;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  char cVar61;
  int iVar62;
  int iVar63;
  ulong *puVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  long lVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  undefined8 extraout_x8;
  ulong uVar72;
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  ulong uVar77;
  ulong uVar78;
  ulong uVar79;
  ulong uVar80;
  ulong uVar81;
  ulong *unaff_x19;
  long unaff_x20;
  ulong uVar82;
  ulong *unaff_x21;
  ulong uVar83;
  ulong uVar84;
  ulong uVar85;
  ulong uVar86;
  ulong uVar87;
  ulong uVar88;
  undefined8 auStack_f0 [2];
  undefined8 uStack_e0;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_38;
  
  iVar63 = (int)auStack_f0;
  func_0x006fd9b0();
  func_0x006fd5fc();
  uStack_38 = extraout_x8;
  FUN_006ec074();
  if (param_1 == 0) {
    uStack_58 = unaff_x21[0x13];
    uStack_60 = unaff_x21[0x12];
    uStack_48 = unaff_x21[0x15];
    uStack_50 = unaff_x21[0x14];
    FUN_006fbf84(&uStack_60,&uStack_60,&uStack_60);
    func_0x006fe078(*unaff_x19,unaff_x19[2]);
    uVar72 = *unaff_x21;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar72;
    uVar76 = SUB168(auVar1 * ZEXT816(0xffffffff00000001),8);
    uVar78 = uVar72 - (uVar72 << 0x20);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar72;
    lVar68 = SUB168(auVar2 * ZEXT816(0xffffffff),8);
    uVar73 = (uVar72 << 0x20) - uVar72;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar72;
    uVar65 = SUB168(auVar3 * ZEXT816(0xffffffffffffffff),8);
    uVar74 = uVar65 + uVar73 + (ulong)CARRY8(-uVar72,uVar72);
    if (CARRY8(uVar65,uVar73) || CARRY8(uVar65 + uVar73,(ulong)CARRY8(-uVar72,uVar72))) {
      lVar68 = lVar68 + 1;
    }
    uVar72 = uVar74 + unaff_x21[1];
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar72;
    uVar73 = SUB168(auVar4 * ZEXT816(0xffffffffffffffff),8);
    uVar75 = uVar72 - (uVar72 << 0x20);
    uVar70 = (uVar72 << 0x20) - uVar72;
    uVar65 = uVar73 + uVar70;
    uVar66 = lVar68 + (ulong)CARRY8(uVar74,unaff_x21[1]) + (ulong)CARRY8(-uVar72,uVar72);
    uVar67 = uVar78 + CARRY8(uVar66,uVar65);
    uVar69 = (ulong)CARRY8(uVar78,(ulong)CARRY8(uVar66,uVar65));
    uVar74 = uVar75 + uVar76;
    uVar76 = (ulong)CARRY8(uVar75,uVar76);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar72;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar72;
    uVar72 = SUB168(auVar6 * ZEXT816(0xffffffff),8);
    bVar58 = CARRY8(uVar67,uVar72) || CARRY8(uVar67 + uVar72,(ulong)CARRY8(uVar73,uVar70));
    uVar72 = uVar67 + uVar72 + (ulong)CARRY8(uVar73,uVar70);
    uVar78 = uVar74 + uVar69 + (ulong)bVar58;
    if (CARRY8(uVar74,uVar69) || CARRY8(uVar74 + uVar69,(ulong)bVar58)) {
      uVar76 = uVar76 + 1;
    }
    bVar58 = CARRY8(uVar66 + uVar65,unaff_x21[2]);
    uVar65 = uVar66 + uVar65 + unaff_x21[2];
    uVar74 = uVar78 + CARRY8(uVar72,(ulong)bVar58);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar65;
    uVar73 = SUB168(auVar7 * ZEXT816(0xffffffffffffffff),8);
    uVar76 = uVar76 + SUB168(auVar5 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar78,(ulong)CARRY8(uVar72,(ulong)bVar58));
    uVar75 = uVar65 - (uVar65 << 0x20);
    uVar78 = (uVar65 << 0x20) - uVar65;
    bVar59 = CARRY8(uVar72 + bVar58,uVar73 + uVar78) ||
             CARRY8(uVar72 + bVar58 + uVar73 + uVar78,(ulong)CARRY8(-uVar65,uVar65));
    uVar66 = uVar74 + bVar59;
    uVar67 = (ulong)CARRY8(uVar74,(ulong)bVar59);
    uVar74 = uVar75 + uVar76;
    uVar76 = (ulong)CARRY8(uVar75,uVar76);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar65;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar65;
    uVar75 = SUB168(auVar9 * ZEXT816(0xffffffff),8);
    uVar72 = uVar72 + bVar58 + (ulong)CARRY8(-uVar65,uVar65) + uVar73 + uVar78;
    bVar58 = CARRY8(uVar66,uVar75) || CARRY8(uVar66 + uVar75,(ulong)CARRY8(uVar73,uVar78));
    uVar65 = uVar66 + uVar75 + (ulong)CARRY8(uVar73,uVar78);
    uVar78 = uVar74 + uVar67 + (ulong)bVar58;
    if (CARRY8(uVar74,uVar67) || CARRY8(uVar74 + uVar67,(ulong)bVar58)) {
      uVar76 = uVar76 + 1;
    }
    bVar58 = CARRY8(uVar72,unaff_x21[3]);
    uVar72 = uVar72 + unaff_x21[3];
    uVar66 = uVar78 + CARRY8(uVar65,(ulong)bVar58);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar72;
    uVar73 = SUB168(auVar10 * ZEXT816(0xffffffff00000001),8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar72;
    param_2 = SUB168(auVar11 * ZEXT816(0xffffffff),8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar72;
    uVar75 = SUB168(auVar12 * ZEXT816(0xffffffffffffffff),8);
    uVar78 = uVar76 + SUB168(auVar8 * ZEXT816(0xffffffff00000001),8) +
             (ulong)CARRY8(uVar78,(ulong)CARRY8(uVar65,(ulong)bVar58));
    param_3 = (ulong *)(uVar72 - (uVar72 << 0x20));
    uVar76 = (uVar72 << 0x20) - uVar72;
    uVar74 = uVar75 + uVar76;
    if (CARRY8(uVar75,uVar76)) {
      param_2 = (ulong *)((long)param_2 + 1);
    }
    uVar76 = uVar65 + bVar58 + (ulong)CARRY8(-uVar72,uVar72) + uVar74;
    bVar58 = CARRY8(uVar65 + bVar58,uVar74) ||
             CARRY8(uVar65 + bVar58 + uVar74,(ulong)CARRY8(-uVar72,uVar72));
    bVar59 = CARRY8(uVar66,(ulong)param_2) || CARRY8(uVar66 + (long)param_2,(ulong)bVar58);
    uVar72 = (long)param_2 + bVar58 + uVar66;
    uVar65 = (long)param_3 + bVar59 + uVar78;
    if (CARRY8((ulong)param_3,uVar78) || CARRY8((long)param_3 + uVar78,(ulong)bVar59)) {
      uVar73 = uVar73 + 1;
    }
    uVar74 = (ulong)(byte)-((0xfffffffffffffffe < uVar76) + -1);
    uVar75 = uVar72 - uVar74;
    uVar74 = (ulong)(byte)-((-1 - (uVar72 < uVar74)) + (0xfffffffe < uVar75));
    uVar78 = (ulong)(uVar65 < uVar74);
    uVar66 = uVar73 - uVar78;
    iVar62 = -(uint)(uVar73 < uVar78);
    in_ZR = (char)((char)iVar62 + -1 + (0xffffffff00000000 < uVar66)) == '\0';
    uStack_88 = uVar66 + 0xffffffff;
    uStack_90 = uVar65 - uVar74;
    uStack_98 = uVar75 - 0xffffffff;
    uStack_a0 = uVar76 + 1;
    if (!(bool)in_ZR) {
      uStack_88 = uVar73;
      uStack_90 = uVar65;
      uStack_98 = uVar72;
      uStack_a0 = uVar76;
    }
    func_0x006fe338();
    if (iVar62 == 0) {
LAB_006fbf78:
      puVar64 = (ulong *)((long)&MACH_HEADER.magic + 1);
      goto LAB_006fbd4c;
    }
    param_3 = (ulong *)(long)*(int *)(unaff_x20 + 0x40);
    param_2 = (ulong *)(unaff_x20 + 0xe8);
    func_0x006fe7b8();
    if (iVar62 != 0) {
      param_3 = *(ulong **)(unaff_x20 + 0x10);
      FUN_006e3678();
      func_0x006fe078(auStack_f0[0],uStack_e0);
      func_0x006fe338();
      param_2 = unaff_x19;
      if (iVar63 == 0) goto LAB_006fbf78;
    }
  }
  puVar64 = (ulong *)0x0;
LAB_006fbd4c:
  func_0x006fd534(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar65 = *param_2;
  uVar78 = param_2[1];
  uVar74 = param_3[2];
  uVar73 = param_3[3];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar73;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar65;
  uVar72 = SUB168(auVar13 * auVar41,8);
  uVar77 = uVar73 * uVar65;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar74;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar65;
  uVar79 = SUB168(auVar14 * auVar42,8);
  uVar80 = uVar74 * uVar65;
  uVar76 = *param_3;
  uVar75 = param_3[1];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar75;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar65;
  uVar66 = SUB168(auVar15 * auVar43,8);
  uVar67 = uVar75 * uVar65;
  uVar69 = uVar76 * uVar65;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar76;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar65;
  uVar70 = SUB168(auVar16 * auVar44,8);
  bVar58 = CARRY8(uVar66,uVar80) || CARRY8(uVar66 + uVar80,(ulong)CARRY8(uVar70,uVar67));
  uVar80 = uVar66 + uVar80 + (ulong)CARRY8(uVar70,uVar67);
  uVar66 = uVar79 + uVar77 + (ulong)bVar58;
  if (CARRY8(uVar79,uVar77) || CARRY8(uVar79 + uVar77,(ulong)bVar58)) {
    uVar72 = uVar72 + 1;
  }
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar69;
  uVar71 = SUB168(auVar17 * ZEXT816(0xffffffff00000001),8);
  uVar79 = uVar69 - (uVar69 << 0x20);
  uVar82 = (uVar69 << 0x20) - uVar69;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar69;
  uVar83 = SUB168(auVar18 * ZEXT816(0xffffffffffffffff),8);
  bVar58 = CARRY8(-(uVar76 * uVar65),uVar69);
  bVar59 = CARRY8(uVar70 + uVar67,uVar83 + uVar82) ||
           CARRY8(uVar70 + uVar67 + uVar83 + uVar82,(ulong)bVar58);
  uVar81 = uVar80 + bVar59;
  uVar77 = (ulong)CARRY8(uVar80,(ulong)bVar59);
  uVar65 = uVar66 + uVar79;
  uVar79 = (ulong)CARRY8(uVar66,uVar79);
  uVar66 = uVar71 + uVar72;
  uVar80 = (ulong)CARRY8(uVar71,uVar72);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar73;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar78;
  uVar72 = SUB168(auVar19 * auVar45,8);
  uVar71 = uVar73 * uVar78;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar74;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar78;
  uVar84 = SUB168(auVar20 * auVar46,8);
  uVar85 = uVar74 * uVar78;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar75;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar78;
  uVar86 = SUB168(auVar21 * auVar47,8);
  uVar87 = uVar75 * uVar78;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar76;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar78;
  uVar88 = SUB168(auVar22 * auVar48,8);
  bVar59 = CARRY8(uVar86,uVar85) || CARRY8(uVar86 + uVar85,(ulong)CARRY8(uVar88,uVar87));
  uVar86 = uVar86 + uVar85 + (ulong)CARRY8(uVar88,uVar87);
  uVar85 = uVar84 + uVar71 + (ulong)bVar59;
  if (CARRY8(uVar84,uVar71) || CARRY8(uVar84 + uVar71,(ulong)bVar59)) {
    uVar72 = uVar72 + 1;
  }
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar69;
  uVar69 = SUB168(auVar23 * ZEXT816(0xffffffff),8);
  uVar67 = uVar70 + uVar67 + (ulong)bVar58 + uVar83 + uVar82;
  bVar58 = CARRY8(uVar81,uVar69) || CARRY8(uVar81 + uVar69,(ulong)CARRY8(uVar83,uVar82));
  uVar71 = uVar81 + uVar69 + (ulong)CARRY8(uVar83,uVar82);
  bVar59 = CARRY8(uVar65,uVar77) || CARRY8(uVar65 + uVar77,(ulong)bVar58);
  uVar77 = uVar65 + uVar77 + (ulong)bVar58;
  bVar60 = CARRY8(uVar66,uVar79) || CARRY8(uVar66 + uVar79,(ulong)bVar59);
  uVar69 = uVar66 + uVar79 + (ulong)bVar59;
  uVar78 = uVar76 * uVar78;
  uVar65 = uVar67 + uVar78;
  lVar68 = uVar88 + uVar87 + (ulong)CARRY8(uVar67,uVar78);
  uVar66 = lVar68 + uVar71;
  bVar58 = CARRY8(uVar88 + uVar87,uVar71) ||
           CARRY8(uVar88 + uVar87 + uVar71,(ulong)CARRY8(uVar67,uVar78));
  uVar70 = uVar86 + bVar58;
  uVar79 = (ulong)CARRY8(uVar86,(ulong)bVar58);
  uVar78 = uVar69 + uVar85;
  uVar82 = uVar65 - (uVar65 << 0x20);
  uVar83 = (uVar65 << 0x20) - uVar65;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar65;
  uVar84 = SUB168(auVar24 * ZEXT816(0xffffffffffffffff),8);
  uVar67 = uVar78 + uVar79 + (ulong)CARRY8(uVar70,uVar77);
  uVar69 = uVar72 + uVar80 + (ulong)bVar60 + (ulong)CARRY8(uVar69,uVar85) +
           (ulong)(CARRY8(uVar78,uVar79) || CARRY8(uVar78 + uVar79,(ulong)CARRY8(uVar70,uVar77)));
  uVar57 = nzcv;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar65;
  uVar81 = SUB168(auVar25 * ZEXT816(0xffffffff00000001),8);
  bVar58 = CARRY8(uVar66,uVar84 + uVar83) ||
           CARRY8(uVar66 + uVar84 + uVar83,(ulong)CARRY8(-uVar65,uVar65));
  uVar79 = uVar70 + uVar77 + (ulong)bVar58;
  uVar77 = (ulong)CARRY8(uVar70 + uVar77,(ulong)bVar58);
  uVar78 = uVar67 + uVar82;
  uVar70 = (ulong)CARRY8(uVar67,uVar82);
  uVar66 = uVar69 + uVar81;
  uVar67 = (ulong)CARRY8(uVar69,uVar81);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar65;
  uVar69 = SUB168(auVar26 * ZEXT816(0xffffffff),8);
  bVar58 = CARRY8(uVar79,uVar69) || CARRY8(uVar79 + uVar69,(ulong)CARRY8(uVar84,uVar83));
  uVar69 = uVar79 + uVar69 + (ulong)CARRY8(uVar84,uVar83);
  bVar59 = CARRY8(uVar78,uVar77) || CARRY8(uVar78 + uVar77,(ulong)bVar58);
  uVar77 = uVar78 + uVar77 + (ulong)bVar58;
  bVar58 = CARRY8(uVar66 + uVar70,(ulong)bVar59);
  uVar78 = uVar66 + uVar70 + (ulong)bVar59;
  if (CARRY8(uVar66,uVar70) || bVar58) {
    uVar67 = uVar67 + 1;
  }
  uVar65 = lVar68 + uVar71 + (ulong)CARRY8(-uVar65,uVar65) + uVar84 + uVar83;
  nzcv = uVar57;
  uVar71 = uVar67 + (CARRY8(uVar72,uVar80) || CARRY8(uVar72 + uVar80,(ulong)bVar60)) +
           (ulong)(CARRY8(uVar66,uVar70) || bVar58);
  uVar66 = param_2[2];
  uVar67 = param_2[3];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar73;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar66;
  uVar72 = SUB168(auVar27 * auVar49,8);
  uVar70 = uVar73 * uVar66;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar74;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar66;
  uVar80 = SUB168(auVar28 * auVar50,8);
  uVar79 = uVar74 * uVar66;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar75;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar66;
  uVar81 = SUB168(auVar29 * auVar51,8);
  uVar85 = uVar75 * uVar66;
  uVar82 = uVar76 * uVar66;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar76;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar66;
  uVar66 = SUB168(auVar30 * auVar52,8);
  bVar58 = CARRY8(uVar81,uVar79) || CARRY8(uVar81 + uVar79,(ulong)CARRY8(uVar66,uVar85));
  uVar81 = uVar81 + uVar79 + (ulong)CARRY8(uVar66,uVar85);
  uVar79 = uVar80 + uVar70 + (ulong)bVar58;
  if (CARRY8(uVar80,uVar70) || CARRY8(uVar80 + uVar70,(ulong)bVar58)) {
    uVar72 = uVar72 + 1;
  }
  uVar70 = uVar65 + uVar82;
  lVar68 = uVar66 + uVar85 + (ulong)CARRY8(uVar65,uVar82);
  uVar80 = lVar68 + uVar69;
  bVar58 = CARRY8(uVar66 + uVar85,uVar69) ||
           CARRY8(uVar66 + uVar85 + uVar69,(ulong)CARRY8(uVar65,uVar82));
  bVar59 = CARRY8(uVar81,uVar77) || CARRY8(uVar81 + uVar77,(ulong)bVar58);
  uVar81 = uVar81 + uVar77 + (ulong)bVar58;
  bVar58 = CARRY8(uVar79,uVar78) || CARRY8(uVar79 + uVar78,(ulong)bVar59);
  uVar77 = uVar79 + uVar78 + (ulong)bVar59;
  uVar79 = uVar72 + bVar58;
  uVar65 = uVar79 + uVar71;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar70;
  uVar85 = SUB168(auVar31 * ZEXT816(0xffffffff00000001),8);
  uVar82 = uVar70 - (uVar70 << 0x20);
  uVar83 = (uVar70 << 0x20) - uVar70;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar70;
  uVar66 = SUB168(auVar32 * ZEXT816(0xffffffff),8);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar70;
  uVar84 = SUB168(auVar33 * ZEXT816(0xffffffffffffffff),8);
  uVar78 = uVar84 + uVar83;
  if (CARRY8(uVar84,uVar83)) {
    uVar66 = uVar66 + 1;
  }
  bVar59 = CARRY8(uVar80,uVar78) || CARRY8(uVar80 + uVar78,(ulong)CARRY8(-uVar70,uVar70));
  bVar60 = CARRY8(uVar81,uVar66) || CARRY8(uVar81 + uVar66,(ulong)bVar59);
  uVar80 = uVar81 + uVar66 + (ulong)bVar59;
  bVar59 = CARRY8(uVar77,uVar82) || CARRY8(uVar77 + uVar82,(ulong)bVar60);
  uVar66 = uVar77 + uVar82 + (ulong)bVar60;
  uVar78 = lVar68 + uVar69 + (ulong)CARRY8(-uVar70,uVar70) + uVar78;
  uVar79 = (ulong)(CARRY8(uVar85,uVar65) || CARRY8(uVar85 + uVar65,(ulong)bVar59)) +
           (ulong)CARRY8(uVar72,(ulong)bVar58) + (ulong)CARRY8(uVar79,uVar71);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar73;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = uVar67;
  uVar72 = SUB168(auVar34 * auVar53,8);
  uVar73 = uVar73 * uVar67;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar74;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar67;
  uVar69 = SUB168(auVar35 * auVar54,8);
  uVar74 = uVar74 * uVar67;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar75;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar67;
  uVar70 = SUB168(auVar36 * auVar55,8);
  uVar75 = uVar75 * uVar67;
  uVar77 = uVar76 * uVar67;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar76;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar67;
  uVar76 = SUB168(auVar37 * auVar56,8);
  bVar58 = CARRY8(uVar70,uVar74) || CARRY8(uVar70 + uVar74,(ulong)CARRY8(uVar76,uVar75));
  uVar74 = uVar70 + uVar74 + (ulong)CARRY8(uVar76,uVar75);
  if (CARRY8(uVar69,uVar73) || CARRY8(uVar69 + uVar73,(ulong)bVar58)) {
    uVar72 = uVar72 + 1;
  }
  uVar67 = uVar78 + uVar77;
  lVar68 = uVar76 + uVar75 + (ulong)CARRY8(uVar78,uVar77);
  uVar70 = lVar68 + uVar80;
  bVar60 = CARRY8(uVar76 + uVar75,uVar80) ||
           CARRY8(uVar76 + uVar75 + uVar80,(ulong)CARRY8(uVar78,uVar77));
  uVar78 = uVar74 + uVar66 + (ulong)bVar60;
  uVar76 = uVar69 + uVar73 + (ulong)bVar58 + uVar85 + uVar65 + (ulong)bVar59 +
           (ulong)(CARRY8(uVar74,uVar66) || CARRY8(uVar74 + uVar66,(ulong)bVar60));
  uVar57 = nzcv;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar67;
  uVar77 = SUB168(auVar38 * ZEXT816(0xffffffffffffffff),8);
  uVar74 = uVar67 - (uVar67 << 0x20);
  uVar73 = (uVar67 << 0x20) - uVar67;
  bVar58 = CARRY8(uVar70,uVar77 + uVar73) ||
           CARRY8(uVar70 + uVar77 + uVar73,(ulong)CARRY8(-uVar67,uVar67));
  uVar75 = uVar78 + bVar58;
  uVar78 = (ulong)CARRY8(uVar78,(ulong)bVar58);
  uVar65 = uVar76 + uVar74;
  uVar69 = (ulong)CARRY8(uVar76,uVar74);
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar67;
  uVar74 = SUB168(auVar39 * ZEXT816(0xffffffff00000001),8);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar67;
  uVar76 = SUB168(auVar40 * ZEXT816(0xffffffff),8);
  bVar58 = CARRY8(uVar75,uVar76) || CARRY8(uVar75 + uVar76,(ulong)CARRY8(uVar77,uVar73));
  uVar66 = uVar75 + uVar76 + (ulong)CARRY8(uVar77,uVar73);
  bVar59 = CARRY8(uVar65,uVar78) || CARRY8(uVar65 + uVar78,(ulong)bVar58);
  uVar75 = uVar65 + uVar78 + (ulong)bVar58;
  cVar61 = CARRY8(uVar74,uVar69) || CARRY8(uVar74 + uVar69,(ulong)bVar59);
  uVar69 = uVar74 + uVar69 + (ulong)bVar59;
  nzcv = uVar57;
  uVar65 = (ulong)(byte)cVar61;
  uVar74 = (ulong)(byte)cVar61;
  uVar76 = uVar72 + uVar74 + uVar79;
  uVar78 = uVar69 + uVar76;
  if (CARRY8(uVar69,uVar76)) {
    cVar61 = cVar61 + '\x01';
  }
  uVar67 = lVar68 + uVar80 + (ulong)CARRY8(-uVar67,uVar67) + uVar77 + uVar73;
  uVar76 = (ulong)(byte)-((0xfffffffffffffffe < uVar67) + -1);
  uVar69 = uVar66 - uVar76;
  uVar76 = (ulong)(byte)-((-1 - (uVar66 < uVar76)) + (0xfffffffe < uVar69));
  uVar73 = (ulong)(uVar75 < uVar76);
  uVar70 = uVar78 - uVar73;
  bVar58 = (byte)(cVar61 + CARRY8(uVar72,uVar65) + CARRY8(uVar72 + uVar74,uVar79)) <
           (byte)-((-1 - (uVar78 < uVar73)) + (0xffffffff00000000 < uVar70));
  uVar72 = uVar75 - uVar76;
  uVar65 = uVar69 - 0xffffffff;
  uVar74 = uVar67 + 1;
  if (bVar58) {
    uVar72 = uVar75;
    uVar65 = uVar66;
    uVar74 = uVar67;
  }
  *puVar64 = uVar74;
  puVar64[1] = uVar65;
  uVar65 = uVar70 + 0xffffffff;
  if (bVar58) {
    uVar65 = uVar78;
  }
  puVar64[2] = uVar72;
  puVar64[3] = uVar65;
  return;
}



/* Entry: 006fbf84; end: 006fc2e3;  */

void FUN_006fbf84(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  char cVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  ulong uVar73;
  
  uVar1 = *param_2;
  uVar63 = param_2[1];
  uVar59 = param_3[2];
  uVar58 = param_3[3];
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar58;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar1;
  uVar57 = SUB168(auVar2 * auVar30,8);
  uVar62 = uVar58 * uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar59;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar1;
  uVar64 = SUB168(auVar3 * auVar31,8);
  uVar65 = uVar59 * uVar1;
  uVar61 = *param_3;
  uVar60 = param_3[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar60;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar1;
  uVar51 = SUB168(auVar4 * auVar32,8);
  uVar52 = uVar60 * uVar1;
  uVar54 = uVar61 * uVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar61;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar1;
  uVar55 = SUB168(auVar5 * auVar33,8);
  bVar47 = CARRY8(uVar51,uVar65) || CARRY8(uVar51 + uVar65,(ulong)CARRY8(uVar55,uVar52));
  uVar65 = uVar51 + uVar65 + (ulong)CARRY8(uVar55,uVar52);
  uVar51 = uVar64 + uVar62 + (ulong)bVar47;
  if (CARRY8(uVar64,uVar62) || CARRY8(uVar64 + uVar62,(ulong)bVar47)) {
    uVar57 = uVar57 + 1;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar54;
  uVar56 = SUB168(auVar6 * ZEXT816(0xffffffff00000001),8);
  uVar64 = uVar54 - (uVar54 << 0x20);
  uVar67 = (uVar54 << 0x20) - uVar54;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar54;
  uVar68 = SUB168(auVar7 * ZEXT816(0xffffffffffffffff),8);
  bVar47 = CARRY8(-(uVar61 * uVar1),uVar54);
  bVar48 = CARRY8(uVar55 + uVar52,uVar68 + uVar67) ||
           CARRY8(uVar55 + uVar52 + uVar68 + uVar67,(ulong)bVar47);
  uVar66 = uVar65 + bVar48;
  uVar62 = (ulong)CARRY8(uVar65,(ulong)bVar48);
  uVar1 = uVar51 + uVar64;
  uVar64 = (ulong)CARRY8(uVar51,uVar64);
  uVar51 = uVar56 + uVar57;
  uVar65 = (ulong)CARRY8(uVar56,uVar57);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar58;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar63;
  uVar57 = SUB168(auVar8 * auVar34,8);
  uVar56 = uVar58 * uVar63;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar59;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar63;
  uVar69 = SUB168(auVar9 * auVar35,8);
  uVar70 = uVar59 * uVar63;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar60;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar63;
  uVar71 = SUB168(auVar10 * auVar36,8);
  uVar72 = uVar60 * uVar63;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar61;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar63;
  uVar73 = SUB168(auVar11 * auVar37,8);
  bVar48 = CARRY8(uVar71,uVar70) || CARRY8(uVar71 + uVar70,(ulong)CARRY8(uVar73,uVar72));
  uVar71 = uVar71 + uVar70 + (ulong)CARRY8(uVar73,uVar72);
  uVar70 = uVar69 + uVar56 + (ulong)bVar48;
  if (CARRY8(uVar69,uVar56) || CARRY8(uVar69 + uVar56,(ulong)bVar48)) {
    uVar57 = uVar57 + 1;
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar54;
  uVar54 = SUB168(auVar12 * ZEXT816(0xffffffff),8);
  uVar52 = uVar55 + uVar52 + (ulong)bVar47 + uVar68 + uVar67;
  bVar47 = CARRY8(uVar66,uVar54) || CARRY8(uVar66 + uVar54,(ulong)CARRY8(uVar68,uVar67));
  uVar56 = uVar66 + uVar54 + (ulong)CARRY8(uVar68,uVar67);
  bVar48 = CARRY8(uVar1,uVar62) || CARRY8(uVar1 + uVar62,(ulong)bVar47);
  uVar62 = uVar1 + uVar62 + (ulong)bVar47;
  bVar49 = CARRY8(uVar51,uVar64) || CARRY8(uVar51 + uVar64,(ulong)bVar48);
  uVar54 = uVar51 + uVar64 + (ulong)bVar48;
  uVar63 = uVar61 * uVar63;
  uVar1 = uVar52 + uVar63;
  lVar53 = uVar73 + uVar72 + (ulong)CARRY8(uVar52,uVar63);
  uVar51 = lVar53 + uVar56;
  bVar47 = CARRY8(uVar73 + uVar72,uVar56) ||
           CARRY8(uVar73 + uVar72 + uVar56,(ulong)CARRY8(uVar52,uVar63));
  uVar55 = uVar71 + bVar47;
  uVar64 = (ulong)CARRY8(uVar71,(ulong)bVar47);
  uVar63 = uVar54 + uVar70;
  uVar67 = uVar1 - (uVar1 << 0x20);
  uVar68 = (uVar1 << 0x20) - uVar1;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  uVar69 = SUB168(auVar13 * ZEXT816(0xffffffffffffffff),8);
  uVar52 = uVar63 + uVar64 + (ulong)CARRY8(uVar55,uVar62);
  uVar54 = uVar57 + uVar65 + (ulong)bVar49 + (ulong)CARRY8(uVar54,uVar70) +
           (ulong)(CARRY8(uVar63,uVar64) || CARRY8(uVar63 + uVar64,(ulong)CARRY8(uVar55,uVar62)));
  uVar46 = nzcv;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  uVar66 = SUB168(auVar14 * ZEXT816(0xffffffff00000001),8);
  bVar47 = CARRY8(uVar51,uVar69 + uVar68) ||
           CARRY8(uVar51 + uVar69 + uVar68,(ulong)CARRY8(-uVar1,uVar1));
  uVar64 = uVar55 + uVar62 + (ulong)bVar47;
  uVar62 = (ulong)CARRY8(uVar55 + uVar62,(ulong)bVar47);
  uVar63 = uVar52 + uVar67;
  uVar55 = (ulong)CARRY8(uVar52,uVar67);
  uVar51 = uVar54 + uVar66;
  uVar52 = (ulong)CARRY8(uVar54,uVar66);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar1;
  uVar54 = SUB168(auVar15 * ZEXT816(0xffffffff),8);
  bVar47 = CARRY8(uVar64,uVar54) || CARRY8(uVar64 + uVar54,(ulong)CARRY8(uVar69,uVar68));
  uVar54 = uVar64 + uVar54 + (ulong)CARRY8(uVar69,uVar68);
  bVar48 = CARRY8(uVar63,uVar62) || CARRY8(uVar63 + uVar62,(ulong)bVar47);
  uVar62 = uVar63 + uVar62 + (ulong)bVar47;
  bVar47 = CARRY8(uVar51 + uVar55,(ulong)bVar48);
  uVar63 = uVar51 + uVar55 + (ulong)bVar48;
  if (CARRY8(uVar51,uVar55) || bVar47) {
    uVar52 = uVar52 + 1;
  }
  uVar1 = lVar53 + uVar56 + (ulong)CARRY8(-uVar1,uVar1) + uVar69 + uVar68;
  nzcv = uVar46;
  uVar56 = uVar52 + (CARRY8(uVar57,uVar65) || CARRY8(uVar57 + uVar65,(ulong)bVar49)) +
           (ulong)(CARRY8(uVar51,uVar55) || bVar47);
  uVar51 = param_2[2];
  uVar52 = param_2[3];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar58;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar51;
  uVar57 = SUB168(auVar16 * auVar38,8);
  uVar55 = uVar58 * uVar51;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar59;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar51;
  uVar65 = SUB168(auVar17 * auVar39,8);
  uVar64 = uVar59 * uVar51;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar60;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar51;
  uVar66 = SUB168(auVar18 * auVar40,8);
  uVar70 = uVar60 * uVar51;
  uVar67 = uVar61 * uVar51;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar61;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar51;
  uVar51 = SUB168(auVar19 * auVar41,8);
  bVar47 = CARRY8(uVar66,uVar64) || CARRY8(uVar66 + uVar64,(ulong)CARRY8(uVar51,uVar70));
  uVar66 = uVar66 + uVar64 + (ulong)CARRY8(uVar51,uVar70);
  uVar64 = uVar65 + uVar55 + (ulong)bVar47;
  if (CARRY8(uVar65,uVar55) || CARRY8(uVar65 + uVar55,(ulong)bVar47)) {
    uVar57 = uVar57 + 1;
  }
  uVar55 = uVar1 + uVar67;
  lVar53 = uVar51 + uVar70 + (ulong)CARRY8(uVar1,uVar67);
  uVar65 = lVar53 + uVar54;
  bVar47 = CARRY8(uVar51 + uVar70,uVar54) ||
           CARRY8(uVar51 + uVar70 + uVar54,(ulong)CARRY8(uVar1,uVar67));
  bVar48 = CARRY8(uVar66,uVar62) || CARRY8(uVar66 + uVar62,(ulong)bVar47);
  uVar66 = uVar66 + uVar62 + (ulong)bVar47;
  bVar47 = CARRY8(uVar64,uVar63) || CARRY8(uVar64 + uVar63,(ulong)bVar48);
  uVar62 = uVar64 + uVar63 + (ulong)bVar48;
  uVar64 = uVar57 + bVar47;
  uVar1 = uVar64 + uVar56;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar55;
  uVar70 = SUB168(auVar20 * ZEXT816(0xffffffff00000001),8);
  uVar67 = uVar55 - (uVar55 << 0x20);
  uVar68 = (uVar55 << 0x20) - uVar55;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar55;
  uVar51 = SUB168(auVar21 * ZEXT816(0xffffffff),8);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar55;
  uVar69 = SUB168(auVar22 * ZEXT816(0xffffffffffffffff),8);
  uVar63 = uVar69 + uVar68;
  if (CARRY8(uVar69,uVar68)) {
    uVar51 = uVar51 + 1;
  }
  bVar48 = CARRY8(uVar65,uVar63) || CARRY8(uVar65 + uVar63,(ulong)CARRY8(-uVar55,uVar55));
  bVar49 = CARRY8(uVar66,uVar51) || CARRY8(uVar66 + uVar51,(ulong)bVar48);
  uVar65 = uVar66 + uVar51 + (ulong)bVar48;
  bVar48 = CARRY8(uVar62,uVar67) || CARRY8(uVar62 + uVar67,(ulong)bVar49);
  uVar51 = uVar62 + uVar67 + (ulong)bVar49;
  uVar63 = lVar53 + uVar54 + (ulong)CARRY8(-uVar55,uVar55) + uVar63;
  uVar64 = (ulong)(CARRY8(uVar70,uVar1) || CARRY8(uVar70 + uVar1,(ulong)bVar48)) +
           (ulong)CARRY8(uVar57,(ulong)bVar47) + (ulong)CARRY8(uVar64,uVar56);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar58;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar52;
  uVar57 = SUB168(auVar23 * auVar42,8);
  uVar58 = uVar58 * uVar52;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar59;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar52;
  uVar54 = SUB168(auVar24 * auVar43,8);
  uVar59 = uVar59 * uVar52;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar60;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar52;
  uVar55 = SUB168(auVar25 * auVar44,8);
  uVar60 = uVar60 * uVar52;
  uVar62 = uVar61 * uVar52;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar61;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar52;
  uVar61 = SUB168(auVar26 * auVar45,8);
  bVar47 = CARRY8(uVar55,uVar59) || CARRY8(uVar55 + uVar59,(ulong)CARRY8(uVar61,uVar60));
  uVar59 = uVar55 + uVar59 + (ulong)CARRY8(uVar61,uVar60);
  if (CARRY8(uVar54,uVar58) || CARRY8(uVar54 + uVar58,(ulong)bVar47)) {
    uVar57 = uVar57 + 1;
  }
  uVar52 = uVar63 + uVar62;
  lVar53 = uVar61 + uVar60 + (ulong)CARRY8(uVar63,uVar62);
  uVar55 = lVar53 + uVar65;
  bVar49 = CARRY8(uVar61 + uVar60,uVar65) ||
           CARRY8(uVar61 + uVar60 + uVar65,(ulong)CARRY8(uVar63,uVar62));
  uVar63 = uVar59 + uVar51 + (ulong)bVar49;
  uVar61 = uVar54 + uVar58 + (ulong)bVar47 + uVar70 + uVar1 + (ulong)bVar48 +
           (ulong)(CARRY8(uVar59,uVar51) || CARRY8(uVar59 + uVar51,(ulong)bVar49));
  uVar46 = nzcv;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar52;
  uVar62 = SUB168(auVar27 * ZEXT816(0xffffffffffffffff),8);
  uVar59 = uVar52 - (uVar52 << 0x20);
  uVar58 = (uVar52 << 0x20) - uVar52;
  bVar47 = CARRY8(uVar55,uVar62 + uVar58) ||
           CARRY8(uVar55 + uVar62 + uVar58,(ulong)CARRY8(-uVar52,uVar52));
  uVar60 = uVar63 + bVar47;
  uVar63 = (ulong)CARRY8(uVar63,(ulong)bVar47);
  uVar1 = uVar61 + uVar59;
  uVar54 = (ulong)CARRY8(uVar61,uVar59);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar52;
  uVar59 = SUB168(auVar28 * ZEXT816(0xffffffff00000001),8);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar52;
  uVar61 = SUB168(auVar29 * ZEXT816(0xffffffff),8);
  bVar47 = CARRY8(uVar60,uVar61) || CARRY8(uVar60 + uVar61,(ulong)CARRY8(uVar62,uVar58));
  uVar51 = uVar60 + uVar61 + (ulong)CARRY8(uVar62,uVar58);
  bVar48 = CARRY8(uVar1,uVar63) || CARRY8(uVar1 + uVar63,(ulong)bVar47);
  uVar60 = uVar1 + uVar63 + (ulong)bVar47;
  cVar50 = CARRY8(uVar59,uVar54) || CARRY8(uVar59 + uVar54,(ulong)bVar48);
  uVar54 = uVar59 + uVar54 + (ulong)bVar48;
  nzcv = uVar46;
  uVar1 = (ulong)(byte)cVar50;
  uVar59 = (ulong)(byte)cVar50;
  uVar61 = uVar57 + uVar59 + uVar64;
  uVar63 = uVar54 + uVar61;
  if (CARRY8(uVar54,uVar61)) {
    cVar50 = cVar50 + '\x01';
  }
  uVar52 = lVar53 + uVar65 + (ulong)CARRY8(-uVar52,uVar52) + uVar62 + uVar58;
  uVar61 = (ulong)(byte)-((0xfffffffffffffffe < uVar52) + -1);
  uVar54 = uVar51 - uVar61;
  uVar61 = (ulong)(byte)-((-1 - (uVar51 < uVar61)) + (0xfffffffe < uVar54));
  uVar58 = (ulong)(uVar60 < uVar61);
  uVar55 = uVar63 - uVar58;
  bVar47 = (byte)(cVar50 + CARRY8(uVar57,uVar1) + CARRY8(uVar57 + uVar59,uVar64)) <
           (byte)-((-1 - (uVar63 < uVar58)) + (0xffffffff00000000 < uVar55));
  uVar57 = uVar60 - uVar61;
  uVar1 = uVar54 - 0xffffffff;
  uVar59 = uVar52 + 1;
  if (bVar47) {
    uVar57 = uVar60;
    uVar1 = uVar51;
    uVar59 = uVar52;
  }
  *param_1 = uVar59;
  param_1[1] = uVar1;
  uVar1 = uVar55 + 0xffffffff;
  if (bVar47) {
    uVar1 = uVar63;
  }
  param_1[2] = uVar57;
  param_1[3] = uVar1;
  return;
}



/* Entry: 006fc2e4; end: 006fc3df;  */

void FUN_006fc2e4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar2 = *param_2;
  uVar4 = param_2[1];
  param_1[1] = (char)((ulong)uVar2 >> 8);
  param_1[2] = (char)((ulong)uVar2 >> 0x10);
  param_1[3] = (char)((ulong)uVar2 >> 0x18);
  param_1[4] = (char)((ulong)uVar2 >> 0x20);
  param_1[5] = (char)((ulong)uVar2 >> 0x28);
  param_1[6] = (char)((ulong)uVar2 >> 0x30);
  *param_1 = (char)uVar2;
  param_1[7] = (char)((ulong)uVar2 >> 0x38);
  param_1[9] = (char)((ulong)uVar4 >> 8);
  param_1[10] = (char)((ulong)uVar4 >> 0x10);
  param_1[0xb] = (char)((ulong)uVar4 >> 0x18);
  param_1[0xc] = (char)((ulong)uVar4 >> 0x20);
  param_1[0xd] = (char)((ulong)uVar4 >> 0x28);
  param_1[0xe] = (char)((ulong)uVar4 >> 0x30);
  param_1[8] = (char)uVar4;
  param_1[0xf] = (char)((ulong)uVar4 >> 0x38);
  param_1[0x11] = (char)((ulong)uVar1 >> 8);
  param_1[0x12] = (char)((ulong)uVar1 >> 0x10);
  param_1[0x13] = (char)((ulong)uVar1 >> 0x18);
  param_1[0x14] = (char)((ulong)uVar1 >> 0x20);
  param_1[0x15] = (char)((ulong)uVar1 >> 0x28);
  param_1[0x16] = (char)((ulong)uVar1 >> 0x30);
  param_1[0x10] = (char)uVar1;
  param_1[0x17] = (char)((ulong)uVar1 >> 0x38);
  param_1[0x19] = (char)((ulong)uVar3 >> 8);
  param_1[0x1a] = (char)((ulong)uVar3 >> 0x10);
  param_1[0x1b] = (char)((ulong)uVar3 >> 0x18);
  param_1[0x1c] = (char)((ulong)uVar3 >> 0x20);
  param_1[0x1d] = (char)((ulong)uVar3 >> 0x28);
  param_1[0x1e] = (char)((ulong)uVar3 >> 0x30);
  param_1[0x18] = (char)uVar3;
  param_1[0x1f] = (char)((ulong)uVar3 >> 0x38);
  return;
}



/* Entry: 006fc3e0; end: 006fc723;  */

void FUN_006fc3e0(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  char cVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  
  func_0x006fdc38();
  uVar53 = param_2[2];
  uVar49 = param_2[3];
  uVar47 = *param_2;
  uVar65 = param_2[1];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar47;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar49;
  uVar48 = SUB168(auVar1 * auVar23,8);
  uVar46 = uVar47 * uVar49;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar47;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar53;
  uVar54 = SUB168(auVar2 * auVar24,8);
  uVar38 = uVar47 * uVar53;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar47;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar65;
  uVar40 = SUB168(auVar3 * auVar25,8);
  uVar42 = uVar47 * uVar65;
  uVar43 = uVar47 * uVar47;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar47;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar47;
  uVar51 = SUB168(auVar4 * auVar26,8);
  bVar34 = CARRY8(uVar38,uVar40) || CARRY8(uVar38 + uVar40,(ulong)CARRY8(uVar51,uVar42));
  uVar39 = uVar38 + uVar40 + (ulong)CARRY8(uVar51,uVar42);
  uVar45 = uVar46 + uVar54 + (ulong)bVar34;
  uVar63 = uVar48;
  if (CARRY8(uVar46,uVar54) || CARRY8(uVar46 + uVar54,(ulong)bVar34)) {
    uVar63 = uVar48 + 1;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar43;
  uVar55 = SUB168(auVar5 * ZEXT816(0xffffffff00000001),8);
  uVar57 = uVar43 - (uVar43 << 0x20);
  uVar59 = (uVar43 << 0x20) - uVar43;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar43;
  uVar60 = SUB168(auVar6 * ZEXT816(0xffffffffffffffff),8);
  bVar34 = CARRY8(-(uVar47 * uVar47),uVar43);
  bVar35 = CARRY8(uVar51 + uVar42,uVar60 + uVar59) ||
           CARRY8(uVar51 + uVar42 + uVar60 + uVar59,(ulong)bVar34);
  uVar61 = uVar39 + bVar35;
  uVar62 = (ulong)CARRY8(uVar39,(ulong)bVar35);
  uVar47 = uVar45 + uVar57;
  uVar58 = (ulong)CARRY8(uVar45,uVar57);
  uVar39 = uVar55 + uVar63;
  uVar56 = (ulong)CARRY8(uVar55,uVar63);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar49;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar65;
  uVar52 = SUB168(auVar7 * auVar27,8);
  uVar50 = uVar49 * uVar65;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar53;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar65;
  uVar55 = SUB168(auVar8 * auVar28,8);
  uVar45 = uVar53 * uVar65;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar65;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar65;
  uVar63 = SUB168(auVar9 * auVar29,8);
  uVar65 = uVar65 * uVar65;
  bVar35 = CARRY8(uVar45,uVar63) || CARRY8(uVar45 + uVar63,(ulong)CARRY8(uVar40,uVar65));
  uVar64 = uVar45 + uVar63 + (ulong)CARRY8(uVar40,uVar65);
  uVar57 = uVar50 + uVar55 + (ulong)bVar35;
  uVar63 = uVar52;
  if (CARRY8(uVar50,uVar55) || CARRY8(uVar50 + uVar55,(ulong)bVar35)) {
    uVar63 = uVar52 + 1;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar43;
  uVar44 = SUB168(auVar10 * ZEXT816(0xffffffff),8);
  uVar43 = uVar51 + uVar42 + (ulong)bVar34 + uVar60 + uVar59;
  bVar34 = CARRY8(uVar61,uVar44) || CARRY8(uVar61 + uVar44,(ulong)CARRY8(uVar60,uVar59));
  uVar51 = uVar61 + uVar44 + (ulong)CARRY8(uVar60,uVar59);
  bVar35 = CARRY8(uVar47,uVar62) || CARRY8(uVar47 + uVar62,(ulong)bVar34);
  uVar59 = uVar47 + uVar62 + (ulong)bVar34;
  bVar36 = CARRY8(uVar39,uVar58) || CARRY8(uVar39 + uVar58,(ulong)bVar35);
  uVar58 = uVar39 + uVar58 + (ulong)bVar35;
  uVar47 = uVar43 + uVar42;
  lVar41 = uVar40 + uVar65 + (ulong)CARRY8(uVar43,uVar42);
  uVar39 = lVar41 + uVar51;
  bVar34 = CARRY8(uVar40 + uVar65,uVar51) ||
           CARRY8(uVar40 + uVar65 + uVar51,(ulong)CARRY8(uVar43,uVar42));
  uVar60 = uVar64 + bVar34;
  uVar42 = (ulong)CARRY8(uVar64,(ulong)bVar34);
  uVar65 = uVar58 + uVar57;
  uVar62 = uVar47 - (uVar47 << 0x20);
  uVar64 = (uVar47 << 0x20) - uVar47;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar47;
  uVar44 = SUB168(auVar11 * ZEXT816(0xffffffffffffffff),8);
  uVar40 = uVar65 + uVar42 + (ulong)CARRY8(uVar60,uVar59);
  uVar42 = uVar63 + uVar56 + (ulong)bVar36 + (ulong)CARRY8(uVar58,uVar57) +
           (ulong)(CARRY8(uVar65,uVar42) || CARRY8(uVar65 + uVar42,(ulong)CARRY8(uVar60,uVar59)));
  uVar33 = nzcv;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar47;
  uVar61 = SUB168(auVar12 * ZEXT816(0xffffffff00000001),8);
  bVar34 = CARRY8(uVar39,uVar44 + uVar64) ||
           CARRY8(uVar39 + uVar44 + uVar64,(ulong)CARRY8(-uVar47,uVar47));
  uVar43 = uVar60 + uVar59 + (ulong)bVar34;
  uVar57 = (ulong)CARRY8(uVar60 + uVar59,(ulong)bVar34);
  uVar65 = uVar40 + uVar62;
  uVar58 = (ulong)CARRY8(uVar40,uVar62);
  uVar39 = uVar42 + uVar61;
  uVar40 = (ulong)CARRY8(uVar42,uVar61);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar47;
  uVar42 = SUB168(auVar13 * ZEXT816(0xffffffff),8);
  bVar34 = CARRY8(uVar43,uVar42) || CARRY8(uVar43 + uVar42,(ulong)CARRY8(uVar44,uVar64));
  uVar42 = uVar43 + uVar42 + (ulong)CARRY8(uVar44,uVar64);
  bVar35 = CARRY8(uVar65,uVar57) || CARRY8(uVar65 + uVar57,(ulong)bVar34);
  uVar65 = uVar65 + uVar57 + (ulong)bVar34;
  bVar34 = CARRY8(uVar39 + uVar58,(ulong)bVar35);
  if (CARRY8(uVar39,uVar58) || bVar34) {
    uVar40 = uVar40 + 1;
  }
  uVar47 = lVar41 + uVar51 + (ulong)CARRY8(-uVar47,uVar47) + uVar44 + uVar64;
  nzcv = uVar33;
  uVar40 = uVar40 + (CARRY8(uVar63,uVar56) || CARRY8(uVar63 + uVar56,(ulong)bVar36)) +
           (ulong)(CARRY8(uVar39,uVar58) || bVar34);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar49;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar53;
  uVar43 = SUB168(auVar14 * auVar30,8);
  uVar51 = uVar49 * uVar53;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar53;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar53;
  uVar57 = SUB168(auVar15 * auVar31,8);
  uVar53 = uVar53 * uVar53;
  bVar34 = CARRY8(uVar53,uVar55) || CARRY8(uVar53 + uVar55,(ulong)CARRY8(uVar54,uVar45));
  uVar53 = uVar53 + uVar55 + (ulong)CARRY8(uVar54,uVar45);
  uVar63 = uVar43;
  if (CARRY8(uVar51,uVar57) || CARRY8(uVar51 + uVar57,(ulong)bVar34)) {
    uVar63 = uVar43 + 1;
  }
  uVar55 = uVar47 + uVar38;
  lVar41 = uVar54 + uVar45 + (ulong)CARRY8(uVar47,uVar38);
  uVar56 = lVar41 + uVar42;
  bVar36 = CARRY8(uVar54 + uVar45,uVar42) ||
           CARRY8(uVar54 + uVar45 + uVar42,(ulong)CARRY8(uVar47,uVar38));
  uVar47 = uVar53 + uVar65 + (ulong)bVar36;
  uVar45 = uVar51 + uVar57 + (ulong)bVar34 + uVar39 + uVar58 + (ulong)bVar35 +
           (ulong)(CARRY8(uVar53,uVar65) || CARRY8(uVar53 + uVar65,(ulong)bVar36));
  uVar33 = nzcv;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar55;
  uVar39 = SUB168(auVar16 * ZEXT816(0xffffffffffffffff),8);
  uVar54 = uVar55 - (uVar55 << 0x20);
  uVar38 = (uVar55 << 0x20) - uVar55;
  bVar34 = CARRY8(uVar56,uVar39 + uVar38) ||
           CARRY8(uVar56 + uVar39 + uVar38,(ulong)CARRY8(-uVar55,uVar55));
  uVar57 = uVar47 + bVar34;
  uVar65 = (ulong)CARRY8(uVar47,(ulong)bVar34);
  uVar53 = uVar45 + uVar54;
  uVar54 = (ulong)CARRY8(uVar45,uVar54);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar55;
  uVar45 = SUB168(auVar17 * ZEXT816(0xffffffff00000001),8);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar55;
  uVar47 = SUB168(auVar18 * ZEXT816(0xffffffff),8);
  bVar34 = CARRY8(uVar57,uVar47) || CARRY8(uVar57 + uVar47,(ulong)CARRY8(uVar39,uVar38));
  uVar57 = uVar57 + uVar47 + (ulong)CARRY8(uVar39,uVar38);
  bVar35 = CARRY8(uVar53,uVar65) || CARRY8(uVar53 + uVar65,(ulong)bVar34);
  uVar56 = uVar53 + uVar65 + (ulong)bVar34;
  bVar34 = CARRY8(uVar45,uVar54) || CARRY8(uVar45 + uVar54,(ulong)bVar35);
  uVar65 = uVar45 + uVar54 + (ulong)bVar35;
  uVar47 = (ulong)bVar34;
  nzcv = uVar33;
  uVar53 = uVar63 + bVar34 + uVar40;
  if (CARRY8(uVar65,uVar53)) {
    uVar47 = uVar47 + 1;
  }
  uVar38 = lVar41 + uVar42 + (ulong)CARRY8(-uVar55,uVar55) + uVar39 + uVar38;
  uVar39 = uVar47 + CARRY8(uVar63,(ulong)bVar34) + (ulong)CARRY8(uVar63 + bVar34,uVar40);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar49;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar49;
  uVar63 = SUB168(auVar19 * auVar32,8);
  uVar49 = uVar49 * uVar49;
  bVar34 = CARRY8(uVar51,uVar52) || CARRY8(uVar51 + uVar52,(ulong)CARRY8(uVar48,uVar50));
  uVar47 = uVar51 + uVar52 + (ulong)CARRY8(uVar48,uVar50);
  if (CARRY8(uVar49,uVar43) || CARRY8(uVar49 + uVar43,(ulong)bVar34)) {
    uVar63 = uVar63 + 1;
  }
  uVar40 = uVar38 + uVar46;
  lVar41 = uVar48 + uVar50 + (ulong)CARRY8(uVar38,uVar46);
  uVar42 = lVar41 + uVar57;
  bVar35 = CARRY8(uVar48 + uVar50,uVar57) ||
           CARRY8(uVar48 + uVar50 + uVar57,(ulong)CARRY8(uVar38,uVar46));
  uVar38 = uVar47 + uVar56 + (ulong)bVar35;
  uVar43 = uVar49 + uVar43 + (ulong)bVar34 + uVar65 + uVar53 +
           (ulong)(CARRY8(uVar47,uVar56) || CARRY8(uVar47 + uVar56,(ulong)bVar35));
  uVar33 = nzcv;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar40;
  uVar45 = SUB168(auVar20 * ZEXT816(0xffffffffffffffff),8);
  uVar47 = uVar40 - (uVar40 << 0x20);
  uVar46 = (uVar40 << 0x20) - uVar40;
  bVar34 = CARRY8(uVar42,uVar45 + uVar46) ||
           CARRY8(uVar42 + uVar45 + uVar46,(ulong)CARRY8(-uVar40,uVar40));
  uVar49 = uVar38 + bVar34;
  uVar65 = (ulong)CARRY8(uVar38,(ulong)bVar34);
  uVar53 = uVar43 + uVar47;
  uVar43 = (ulong)CARRY8(uVar43,uVar47);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar40;
  uVar48 = SUB168(auVar21 * ZEXT816(0xffffffff00000001),8);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar40;
  uVar47 = SUB168(auVar22 * ZEXT816(0xffffffff),8);
  bVar34 = CARRY8(uVar49,uVar47) || CARRY8(uVar49 + uVar47,(ulong)CARRY8(uVar45,uVar46));
  uVar38 = uVar49 + uVar47 + (ulong)CARRY8(uVar45,uVar46);
  bVar35 = CARRY8(uVar53,uVar65) || CARRY8(uVar53 + uVar65,(ulong)bVar34);
  uVar42 = uVar53 + uVar65 + (ulong)bVar34;
  cVar37 = CARRY8(uVar48,uVar43) || CARRY8(uVar48 + uVar43,(ulong)bVar35);
  uVar43 = uVar48 + uVar43 + (ulong)bVar35;
  nzcv = uVar33;
  uVar53 = (ulong)(byte)cVar37;
  uVar47 = (ulong)(byte)cVar37;
  uVar49 = uVar63 + uVar47 + uVar39;
  uVar65 = uVar43 + uVar49;
  if (CARRY8(uVar43,uVar49)) {
    cVar37 = cVar37 + '\x01';
  }
  uVar43 = lVar41 + uVar57 + (ulong)CARRY8(-uVar40,uVar40) + uVar45 + uVar46;
  uVar49 = (ulong)(byte)-((0xfffffffffffffffe < uVar43) + -1);
  uVar45 = uVar38 - uVar49;
  uVar49 = (ulong)(byte)-((-1 - (uVar38 < uVar49)) + (0xfffffffe < uVar45));
  uVar40 = (ulong)(uVar42 < uVar49);
  uVar46 = uVar65 - uVar40;
  bVar34 = (byte)(cVar37 + CARRY8(uVar63,uVar53) + CARRY8(uVar63 + uVar47,uVar39)) <
           (byte)-((-1 - (uVar65 < uVar40)) + (0xffffffff00000000 < uVar46));
  uVar63 = uVar42 - uVar49;
  uVar53 = uVar45 - 0xffffffff;
  uVar47 = uVar43 + 1;
  if (bVar34) {
    uVar63 = uVar42;
    uVar53 = uVar38;
    uVar47 = uVar43;
  }
  *param_1 = uVar47;
  param_1[1] = uVar53;
  uVar53 = uVar46 + 0xffffffff;
  if (bVar34) {
    uVar53 = uVar65;
  }
  param_1[2] = uVar63;
  param_1[3] = uVar53;
  return;
}



/* Entry: 006fc724; end: 006fca4f;  */

/* WARNING: Possible PIC construction at 0x006fc7a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006fc8a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006fcc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006fcc38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006fcc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006fcc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006fcca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006fc920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006fc7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006fc924) */
/* WARNING: Removing unreachable block (ram,0x006fca40) */
/* WARNING: Removing unreachable block (ram,0x006fd4d8) */
/* WARNING: Removing unreachable block (ram,0x006fcca4) */
/* WARNING: Removing unreachable block (ram,0x006fcd24) */
/* WARNING: Removing unreachable block (ram,0x006fcd08) */
/* WARNING: Removing unreachable block (ram,0x006fcc98) */
/* WARNING: Removing unreachable block (ram,0x006fcc68) */
/* WARNING: Removing unreachable block (ram,0x006fcc3c) */
/* WARNING: Removing unreachable block (ram,0x006fcc1c) */
/* WARNING: Removing unreachable block (ram,0x006fc8ac) */
/* WARNING: Removing unreachable block (ram,0x006fc8b0) */
/* WARNING: Removing unreachable block (ram,0x006fc8b4) */
/* WARNING: Removing unreachable block (ram,0x006fc90c) */
/* WARNING: Removing unreachable block (ram,0x006fc8d8) */
/* WARNING: Removing unreachable block (ram,0x006fca4c) */
/* WARNING: Removing unreachable block (ram,0x006fc8e0) */
/* WARNING: Removing unreachable block (ram,0x006fcba0) */
/* WARNING: Removing unreachable block (ram,0x006fc7ac) */
/* WARNING: Removing unreachable block (ram,0x006fc7e4) */
/* WARNING: Removing unreachable block (ram,0x006fc830) */

void FUN_006fc724(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,
                 undefined8 param_5,ulong *param_6,int param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong *in_stack_00000068;
  ulong auStack_f0 [8];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [96];
  undefined1 auStack_30 [48];
  
  func_0x006fdcd0();
  puVar6 = param_6;
  func_0x006fd588();
  FUN_006fc3e0(*in_stack_00000068,auStack_90,puVar6);
  if (param_7 == 0) {
    FUN_006fc3e0(auStack_30,in_stack_00000068);
    FUN_006fbf84(auStack_b0,param_4,auStack_30);
    puVar6 = auStack_f0;
    param_3 = in_stack_00000068;
  }
  else {
    func_0x006fcb80(auStack_b0);
    puVar6 = auStack_f0;
    func_0x006fdc60();
    param_6 = param_4;
  }
  uVar9 = *param_6;
  uVar3 = *param_3;
  uVar10 = param_3[1];
  uVar1 = uVar3 + uVar9;
  uVar7 = param_6[1] + (ulong)CARRY8(uVar3,uVar9);
  uVar8 = (ulong)CARRY8(param_6[1],(ulong)CARRY8(uVar3,uVar9));
  uVar9 = param_3[2] + param_6[2];
  uVar12 = (ulong)CARRY8(param_3[2],param_6[2]);
  bVar4 = CARRY8(param_3[3],param_6[3]);
  uVar3 = param_3[3] + param_6[3];
  uVar2 = uVar7 + uVar10;
  bVar5 = CARRY8(uVar9,uVar8) || CARRY8(uVar9 + uVar8,(ulong)CARRY8(uVar7,uVar10));
  uVar9 = uVar9 + uVar8 + (ulong)CARRY8(uVar7,uVar10);
  uVar10 = uVar3 + uVar12 + (ulong)bVar5;
  if (CARRY8(uVar3,uVar12) || CARRY8(uVar3 + uVar12,(ulong)bVar5)) {
    bVar4 = bVar4 + 1;
  }
  uVar3 = (ulong)(byte)-((0xfffffffffffffffe < uVar1) + -1);
  uVar8 = uVar2 - uVar3;
  uVar3 = (ulong)(byte)-((-1 - (uVar2 < uVar3)) + (0xfffffffe < uVar8));
  uVar7 = (ulong)(uVar9 < uVar3);
  uVar12 = uVar10 - uVar7;
  uVar11 = -(uint)(bVar4 < (byte)-((-1 - (uVar10 < uVar7)) + (0xffffffff00000000 < uVar12)));
  uVar3 = uVar9 - uVar3;
  uVar7 = uVar8 - 0xffffffff;
  uVar8 = uVar1 + 1;
  if ((uVar11 & 0xff) != 0) {
    uVar3 = uVar9;
    uVar7 = uVar2;
    uVar8 = uVar1;
  }
  *puVar6 = uVar8;
  puVar6[1] = uVar7;
  uVar1 = uVar12 + 0xffffffff;
  if (uVar11 != 0) {
    uVar1 = uVar10;
  }
  puVar6[2] = uVar3;
  puVar6[3] = uVar1;
  return;
}



/* Entry: 006fca50; end: 006fcb9f;  */

void FUN_006fca50(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar8 = *param_2;
  uVar3 = *param_3;
  uVar9 = param_3[1];
  uVar1 = uVar3 + uVar8;
  uVar6 = param_2[1] + (ulong)CARRY8(uVar3,uVar8);
  uVar7 = (ulong)CARRY8(param_2[1],(ulong)CARRY8(uVar3,uVar8));
  uVar8 = param_3[2] + param_2[2];
  uVar11 = (ulong)CARRY8(param_3[2],param_2[2]);
  bVar4 = CARRY8(param_3[3],param_2[3]);
  uVar3 = param_3[3] + param_2[3];
  uVar2 = uVar6 + uVar9;
  bVar5 = CARRY8(uVar8,uVar7) || CARRY8(uVar8 + uVar7,(ulong)CARRY8(uVar6,uVar9));
  uVar8 = uVar8 + uVar7 + (ulong)CARRY8(uVar6,uVar9);
  uVar9 = uVar3 + uVar11 + (ulong)bVar5;
  if (CARRY8(uVar3,uVar11) || CARRY8(uVar3 + uVar11,(ulong)bVar5)) {
    bVar4 = bVar4 + 1;
  }
  uVar3 = (ulong)(byte)-((0xfffffffffffffffe < uVar1) + -1);
  uVar7 = uVar2 - uVar3;
  uVar3 = (ulong)(byte)-((-1 - (uVar2 < uVar3)) + (0xfffffffe < uVar7));
  uVar6 = (ulong)(uVar8 < uVar3);
  uVar11 = uVar9 - uVar6;
  uVar10 = -(uint)(bVar4 < (byte)-((-1 - (uVar9 < uVar6)) + (0xffffffff00000000 < uVar11)));
  uVar3 = uVar8 - uVar3;
  uVar6 = uVar7 - 0xffffffff;
  uVar7 = uVar1 + 1;
  if ((uVar10 & 0xff) != 0) {
    uVar3 = uVar8;
    uVar6 = uVar2;
    uVar7 = uVar1;
  }
  *param_1 = uVar7;
  param_1[1] = uVar6;
  uVar1 = uVar11 + 0xffffffff;
  if (uVar10 != 0) {
    uVar1 = uVar9;
  }
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  return;
}



/* Entry: 006fcba0; end: 006fcd27;  */

void FUN_006fcba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 in_ZR;
  bool bVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  undefined8 extraout_x8;
  ulong *unaff_x19;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  ulong auStack_98 [4];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x006fea3c();
  func_0x006fd8fc();
  func_0x006fd5fc();
  uStack_58 = extraout_x8;
  FUN_006fc3e0(auStack_78,param_6);
  FUN_006fc3e0(auStack_98);
  FUN_006fbf84(auStack_b8);
  func_0x006fcafc(auStack_d8);
  func_0x006fca50(auStack_f8);
  func_0x006fca50(auStack_118,auStack_f8,auStack_f8);
  func_0x006fca50(auStack_f8,auStack_f8,auStack_118);
  FUN_006fbf84(auStack_138,auStack_d8,auStack_f8);
  FUN_006fc3e0();
  func_0x006fca50(auStack_158,auStack_b8,auStack_b8);
  func_0x006fe884(auStack_158);
  func_0x006fe884(auStack_118);
  func_0x006fcafc();
  func_0x006fca50(auStack_78,auStack_98,auStack_78);
  func_0x006fe1e4(auStack_d8);
  func_0x006fca50();
  FUN_006fc3e0(param_3,auStack_d8);
  func_0x006fe0cc();
  func_0x006fcafc();
  func_0x006fcafc();
  func_0x006fe3cc();
  FUN_006fc3e0(auStack_98,auStack_98);
  puVar10 = auStack_138;
  FUN_006fbf84();
  func_0x006fe3cc();
  puVar11 = auStack_98;
  func_0x006fe574();
  func_0x006fcafc();
  func_0x006fd534(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  bVar9 = puVar10 == (undefined1 *)0x0;
  uVar12 = -(ulong)((long)((ulong)CONCAT14(bVar9,(uint)bVar9) << 0x3f) < 0);
  uVar13 = -(ulong)((long)((ulong)bVar9 << 0x3f) < 0);
  uVar7 = *puVar11;
  uVar3 = puVar11[2];
  uVar4 = puVar11[3];
  uVar8 = *param_4;
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  unaff_x19[1] = puVar11[1] ^ (puVar11[1] ^ param_4[1]) & ~uVar13;
  *unaff_x19 = uVar7 ^ (uVar7 ^ uVar8) & ~uVar12;
  unaff_x19[3] = uVar2 ^ (uVar6 ^ uVar4) & uVar13;
  unaff_x19[2] = uVar1 ^ (uVar5 ^ uVar3) & uVar12;
  return;
}



/* Entry: 006fcd28; end: 006fcdd7;  */

void FUN_006fcd28(ulong *param_1,long param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  
  bVar9 = param_2 == 0;
  uVar10 = -(ulong)((long)((ulong)CONCAT14(bVar9,(uint)bVar9) << 0x3f) < 0);
  uVar11 = -(ulong)((long)((ulong)bVar9 << 0x3f) < 0);
  uVar7 = *param_3;
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar8 = *param_4;
  uVar1 = param_4[2];
  uVar2 = param_4[3];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  param_1[1] = param_3[1] ^ (param_3[1] ^ param_4[1]) & ~uVar11;
  *param_1 = uVar7 ^ (uVar7 ^ uVar8) & ~uVar10;
  param_1[3] = uVar2 ^ (uVar6 ^ uVar4) & uVar11;
  param_1[2] = uVar1 ^ (uVar5 ^ uVar3) & uVar10;
  return;
}



/* Entry: 006fcdd8; end: 006fce6f;  */

void FUN_006fcdd8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x006fd9b0();
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  puVar2 = param_3 + 4;
  param_3[5] = 0;
  *puVar2 = 0;
  for (uVar3 = 0; uVar3 != 0xf; uVar3 = uVar3 + 1) {
    func_0x006fdcb8();
    FUN_006fcd28();
    FUN_006fcd28(puVar2,uVar3 ^ param_1 - 1U,unaff_x21 + 0x20,puVar2);
    unaff_x21 = unaff_x21 + 0x40;
  }
  bVar1 = unaff_x20 == 0;
  uVar3 = -(ulong)((long)((ulong)CONCAT14(bVar1,(uint)bVar1) << 0x3f) < 0);
  uVar4 = -(ulong)((long)((ulong)bVar1 << 0x3f) < 0);
  *(ulong *)(unaff_x19 + 0x48) =
       *(ulong *)(unaff_x19 + 0x48) ^ (*(ulong *)(unaff_x19 + 0x48) ^ 0xffffffff00000000) & ~uVar4;
  *(ulong *)(unaff_x19 + 0x40) =
       *(ulong *)(unaff_x19 + 0x40) ^ (*(ulong *)(unaff_x19 + 0x40) ^ 1) & ~uVar3;
  *(ulong *)(unaff_x19 + 0x58) = (*(ulong *)(unaff_x19 + 0x58) ^ 0xfffffffe) & uVar4 ^ 0xfffffffe;
  *(ulong *)(unaff_x19 + 0x50) =
       (*(ulong *)(unaff_x19 + 0x50) ^ 0xffffffffffffffff) & uVar3 ^ 0xffffffffffffffff;
  return;
}



/* Entry: 006fce70; end: 006fd01b;  */

void FUN_006fce70(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  
  uVar37 = param_3 & 0x1111111111111110;
  uVar35 = param_4 & 0x1111111111111111;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar35;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar37;
  uVar41 = param_3 & 0x2222222222222220;
  uVar42 = param_4 & 0x8888888888888888;
  uVar36 = param_3 & 0x4444444444444440;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar42;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar41;
  uVar38 = param_3 & 0x8888888888888880;
  uVar33 = param_4 & 0x4444444444444444;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar33;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar36;
  uVar39 = param_4 & 0x2222222222222222;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar39;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar38;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar39;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar37;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar35;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar41;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar42;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar36;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar33;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar38;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar33;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar37;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar39;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar41;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar35;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar36;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar42;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar38;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar42;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar37;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar33;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar41;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar39;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar36;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar35;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar38;
  uVar34 = param_4 & (long)(param_3 << 0x3e) >> 0x3f;
  uVar43 = param_4 & (long)(param_3 << 0x3d) >> 0x3f;
  uVar40 = param_4 & (long)(param_3 << 0x3c) >> 0x3f;
  *param_1 = ((uVar35 * uVar37 ^ uVar42 * uVar41 ^ uVar33 * uVar36 ^ uVar39 * uVar38) &
              0x1111111111111111 |
              (uVar39 * uVar37 ^ uVar35 * uVar41 ^ uVar42 * uVar36 ^ uVar33 * uVar38) &
              0x2222222222222222 |
             (uVar33 * uVar37 ^ uVar39 * uVar41 ^ uVar35 * uVar36 ^ uVar42 * uVar38) &
             0x4444444444444444 |
             (uVar42 * uVar37 ^ uVar33 * uVar41 ^ uVar39 * uVar36 ^ uVar35 * uVar38) &
             0x8888888888888888) ^
             -(param_3 & 1) & param_4 ^ uVar34 << 1 ^ uVar43 << 2 ^ uVar40 << 3;
  *param_2 = ((SUB168(auVar1 * auVar17,8) ^ SUB168(auVar2 * auVar18,8) ^
              SUB168(auVar3 * auVar19,8) ^ SUB168(auVar4 * auVar20,8)) & 0x1111111111111111 |
              (SUB168(auVar5 * auVar21,8) ^ SUB168(auVar6 * auVar22,8) ^
              SUB168(auVar7 * auVar23,8) ^ SUB168(auVar8 * auVar24,8)) & 0x2222222222222222 |
             (SUB168(auVar9 * auVar25,8) ^ SUB168(auVar10 * auVar26,8) ^
             SUB168(auVar11 * auVar27,8) ^ SUB168(auVar12 * auVar28,8)) & 0x4444444444444444 |
             (SUB168(auVar13 * auVar29,8) ^ SUB168(auVar14 * auVar30,8) ^
             SUB168(auVar15 * auVar31,8) ^ SUB168(auVar16 * auVar32,8)) & 0x8888888888888888) ^
             uVar34 >> 0x3f ^ uVar43 >> 0x3e ^ uVar40 >> 0x3d;
  return;
}



/* Entry: 006fd01c; end: 006fd043;  */

void FUN_006fd01c(void)

{
  return;
}



/* Entry: 006fd044; end: 006fd10f;  */

undefined8 FUN_006fd044(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    return 1;
  }
  func_0x006e3d14();
  if ((param_2 == 0) || (lVar1 = param_2, func_0x006fe900(), (int)lVar1 == 0)) {
    func_0x006fe908();
    uVar2 = 0;
  }
  else {
    *param_1 = param_2;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 006fd110; end: 006fd197;  */

void FUN_006fd110(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x006fd8fc();
  FUN_006e3cd0(*param_1);
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = 0;
  return;
}



/* Entry: 006fd198; end: 006fd4d7;  */

undefined8
FUN_006fd198(undefined8 *param_1,ulong param_2,long *param_3,undefined8 *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;
  uint uStack_a0;
  uint uStack_9c;
  int iStack_6c;
  undefined2 uStack_66;
  uint uStack_64;
  
  uVar11 = (uint)param_2;
  if ((param_2 & 0x3f) == 0) {
    if (uVar11 < 0x3ffffff) {
      func_0x006feb2c();
      FUN_006e4370(param_3,3);
      uVar1 = uVar11 * 5;
      if ((int)param_3 != 0) {
        uVar1 = uVar11 << 3;
      }
      func_0x006fe948();
      func_0x006fe920();
      if (param_3 != (long *)0x0) {
        uStack_9c = 0;
        iVar17 = 0;
        uVar16 = param_2;
        do {
          do {
            while( true ) {
              puVar6 = param_1;
              FUN_006e91e8(param_1,uVar16,1);
              if ((int)puVar6 == 0) goto LAB_006fd4b4;
              if (param_8 != 0) {
                puVar6 = (undefined8 *)0x0;
                (**(code **)(param_8 + 8))(0,iVar17,param_8);
                if ((int)puVar6 == 0) goto LAB_006fd4b4;
              }
              if (param_4 == (undefined8 *)0x0) break;
              iVar3 = *(int *)(param_1 + 1);
              iVar4 = *(int *)(param_4 + 1);
              iVar5 = iVar3;
              if (iVar4 <= iVar3) {
                iVar5 = iVar4;
              }
              iVar2 = iVar3;
              if (iVar3 - iVar4 == 0 || iVar3 < iVar4) {
                iVar2 = iVar4;
              }
              func_0x006fe948();
              func_0x006fe920();
              if (((puVar6 == (undefined8 *)0x0) ||
                  (plVar7 = param_3, func_0x006fe774(), (int)plVar7 == 0)) ||
                 (puVar8 = puVar6, func_0x006fe774(), (int)puVar8 == 0)) {
                FUN_006e4640(param_7);
                goto LAB_006fd4b4;
              }
              FUN_006e83cc(*param_3,*param_1,*param_4,iVar5,iVar3 - iVar4,*puVar6);
              *(int *)(param_3 + 1) = iVar2;
              func_0x006fe930();
              plVar7 = param_3;
              func_0x006fdd04();
              uVar16 = param_2 & 0xffffffff;
              if (0 < (int)plVar7) break;
LAB_006fd354:
              iVar17 = iVar17 + 1;
            }
            puVar6 = param_1;
            func_0x006fdd04();
            if ((int)puVar6 < 1) goto LAB_006fd354;
            puVar6 = (undefined8 *)&uStack_66;
            FUN_006e8c1c(puVar6,param_1);
            if (((int)puVar6 == 0) ||
               (puVar6 = param_1, FUN_006e4370(param_1,uStack_66), (int)puVar6 != 0)) {
              FUN_006e3dac();
              plVar7 = param_3;
              FUN_006e3994(param_3,param_1,puVar6);
              if ((int)plVar7 == 0) goto LAB_006fd4b4;
              func_0x006fe948();
              func_0x006fe920();
              if ((plVar7 == (long *)0x0) || (plVar9 = plVar7, FUN_006e6b3c(), (int)plVar9 == 0)) {
                bVar14 = true;
              }
              else if ((int)plVar7[1] == 0) {
                uStack_a0 = 0;
                bVar14 = false;
              }
              else {
                uVar12 = *(ulong *)*plVar7 ^ 1 | (ulong)uStack_64;
                for (lVar13 = 1; lVar13 < (int)plVar7[1]; lVar13 = lVar13 + 1) {
                  uVar12 = ((ulong *)*plVar7)[lVar13] | uVar12;
                }
                bVar14 = false;
                uStack_a0 = (uint)(uVar12 == 0);
              }
              func_0x006fe930();
              if (bVar14) goto LAB_006fd4b4;
              if (uStack_a0 == 0) {
                uStack_a0 = 0;
              }
              else {
                piVar10 = &iStack_6c;
                func_0x006e8ce4(piVar10,param_1,0,param_7,0,param_8);
                if ((int)piVar10 == 0) goto LAB_006fd4b4;
                if (iStack_6c != 0) {
                  uVar15 = 1;
                  goto LAB_006fd4b8;
                }
              }
            }
            uStack_9c = uStack_9c + 1;
            if (uVar1 <= uStack_9c) {
              func_0x006fd834();
              func_0x006fd5dc();
              goto LAB_006fd4b4;
            }
            iVar17 = iVar17 + 1;
          } while (param_8 == 0);
          iVar5 = 2;
          (**(code **)(param_8 + 8))(2,uStack_9c,param_8);
        } while (iVar5 != 0);
      }
LAB_006fd4b4:
      uVar15 = 0;
LAB_006fd4b8:
      func_0x006fe930();
      return uVar15;
    }
    func_0x006fd834();
  }
  else {
    func_0x006fd7ac();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006fd4d8; end: 006fecab;  */

void FUN_006fd4d8(void)

{
  return;
}



/* Entry: 006fecac; end: 006fed37;  */

undefined1 *
FUN_006fecac(undefined1 *param_1,ulong *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined1 *puVar1;
  long lVar2;
  ulong *puVar3;
  long extraout_x8;
  long extraout_x9;
  uint uStack_a4;
  ulong uStack_80;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  puVar3 = &uStack_80;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  puVar1 = auStack_78;
  lVar2 = param_3;
  FUN_006fed38();
  if ((int)puVar1 != 0) {
    FUN_006fed98(param_1,param_2,param_3,auStack_78,uStack_80,param_8,param_9);
    puVar1 = param_1;
    puVar3 = param_2;
    lVar2 = param_3;
    param_6 = param_8;
    param_7 = param_9;
  }
  func_0x006fef74(uStack_38);
  if (extraout_x9 == extraout_x8) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_006ef730(lVar2,param_6,param_7);
  if (lVar2 == 0) {
    func_0x006fef4c();
  }
  else {
    *puVar3 = (ulong)uStack_a4;
  }
  return (undefined1 *)(ulong)(lVar2 != 0);
}



/* Entry: 006fed38; end: 006fed97;  */

bool FUN_006fed38(undefined8 param_1,ulong *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uStack_24;
  
  FUN_006ef730(param_3,param_6,param_7,param_4,param_5,param_1,&uStack_24);
  if (param_3 == 0) {
    FUN_006fef4c();
  }
  else {
    *param_2 = (ulong)uStack_24;
  }
  return param_3 != 0;
}



/* Entry: 006fed98; end: 006fef4b;  */

/* WARNING: Possible PIC construction at 0x006fef10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

undefined8 *
FUN_006fed98(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [64];
  undefined8 uStack_70;
  
  func_0x006fef74();
  uVar9 = (ulong)*(uint *)(param_3 + 4);
  uStack_70 = extraout_x9;
  if (CARRY8(param_2,uVar9)) {
LAB_006feed0:
    FUN_006de8e4(0x1f,0,100,0,0);
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = ((param_2 + uVar9) - 1) / uVar9;
    }
    if (0xff < uVar3) goto LAB_006feed0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar7 = &uStack_120;
    FUN_006ef7cc(puVar7,param_4,param_5,param_3,0);
    if ((int)puVar7 == 0) {
LAB_006feef0:
      bVar4 = false;
      puVar7 = (undefined8 *)0x0;
    }
    else {
      lVar10 = 0;
      uVar6 = 0;
      while (uVar6 < uVar3) {
        iVar5 = (int)uVar6;
        uVar6 = (ulong)(iVar5 + 1);
        if (iVar5 != 0) {
          puVar7 = &uStack_120;
          FUN_006ef7cc(puVar7,0,0,0,0);
          if ((int)puVar7 == 0) goto LAB_006feef0;
          func_0x006fef64();
          (*extraout_x8)();
        }
        func_0x006fef64();
        (*extraout_x8_00)();
        func_0x006fef64();
        (*extraout_x8_01)();
        puVar7 = &uStack_120;
        FUN_006ef950(puVar7,auStack_b0,0);
        if ((int)puVar7 == 0) goto LAB_006feef0;
        uVar2 = param_2 - lVar10;
        if (lVar10 + uVar9 <= param_2) {
          uVar2 = uVar9;
        }
        if (uVar2 != 0) {
          _memcpy(param_1 + lVar10,auStack_b0,uVar2);
        }
        lVar10 = uVar2 + lVar10;
      }
      bVar4 = true;
      puVar7 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    FUN_006ef9d0(&uStack_120);
    if (!bVar4) goto code_r0x006de8e4;
  }
  func_0x006fef74(uStack_70);
  if (extraout_x9_00 == extraout_x8_02) {
    return puVar7;
  }
  ___stack_chk_fail();
code_r0x006de8e4:
  lVar10 = 0x1f;
  FUN_006de604(0x1f,0);
  puVar7 = (undefined8 *)0x0;
  if (lVar10 != 0) {
    iVar5 = *(int *)(lVar10 + 0x180);
    uVar1 = iVar5 + 1U & 0xf;
    *(uint *)(lVar10 + 0x180) = uVar1;
    if (uVar1 == *(uint *)(lVar10 + 0x184)) {
      *(uint *)(lVar10 + 0x184) = iVar5 + 2U & 0xf;
    }
    puVar8 = (undefined8 *)(lVar10 + (ulong)uVar1 * 0x18);
    puVar7 = puVar8;
    func_0x006de65c(puVar8);
    *puVar8 = 0;
    *(undefined2 *)((long)puVar8 + 0x14) = 0;
    *(undefined4 *)(puVar8 + 2) = 0x1f00001c;
  }
  return puVar7;
}



/* Entry: 006fef4c; end: 006fef83;  */

/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

void FUN_006fef4c(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0x1f;
  FUN_006de604(0x1f,0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x180);
    uVar1 = iVar2 + 1U & 0xf;
    *(uint *)(lVar3 + 0x180) = uVar1;
    if (uVar1 == *(uint *)(lVar3 + 0x184)) {
      *(uint *)(lVar3 + 0x184) = iVar2 + 2U & 0xf;
    }
    puVar4 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
    func_0x006de65c(puVar4);
    *puVar4 = 0;
    *(undefined2 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 2) = 0x1f00001c;
  }
  return;
}



/* Entry: 006fef84; end: 006fefeb;  */

bool FUN_006fef84(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0x20) {
    func_0x006ffb20();
    func_0x006ffa94();
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar3 = param_2[2];
    *(undefined8 *)(param_1 + 0x20) = param_2[3];
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 8) = uVar1;
    FUN_006d9b50(param_1 + 0x28);
  }
  return param_3 == 0x20;
}



/* Entry: 006fefec; end: 006ff107;  */

qword * FUN_006fefec(ushort *param_1,char *param_2,undefined8 *param_3,char *param_4,
                    segment_command *param_5,ulong param_6,qword *param_7,long param_8,char *param_9
                    ,long param_10)

{
  undefined1 uVar1;
  char *pcVar2;
  qword *pqVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  segment_command *psVar7;
  segment_command *psVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  segment_command *unaff_x19;
  undefined8 *unaff_x20;
  char *unaff_x21;
  undefined8 *puVar9;
  qword *unaff_x22;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  qword qStack_140;
  qword qStack_138;
  qword qStack_130;
  qword qStack_128;
  undefined1 auStack_118 [32];
  undefined8 uStack_f8;
  qword *pqStack_f0;
  char *pcStack_e8;
  undefined8 *puStack_e0;
  segment_command *psStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  segment_command sStack_c0;
  char acStack_78 [32];
  undefined8 uStack_58;
  
  psVar8 = &sStack_c0;
  func_0x006ffa84();
  uVar1 = param_6 == 0x1f;
  uStack_58 = extraout_x8;
  if (param_6 < 0x20) {
    func_0x006ffb20();
    pcVar6 = (char *)((long)&section_00000068.addr + 1);
    pcVar2 = param_2;
    psVar8 = param_5;
LAB_006ff0d4:
    func_0x006ffa94();
    pqVar3 = (qword *)0x0;
    param_5 = unaff_x19;
    param_3 = unaff_x20;
    param_2 = unaff_x21;
  }
  else {
    uVar1 = param_10 == 0x20;
    if (!(bool)uVar1) {
      func_0x006ffb20();
      pcVar6 = (char *)((long)&segment_command_00000020.flags + 2);
      pcVar2 = param_2;
      psVar8 = param_5;
      goto LAB_006ff0d4;
    }
    pcVar5 = param_9;
    pcVar6 = param_4;
    psVar7 = param_5;
    FUN_006d9b50(param_4,param_9);
    uVar1 = param_8 == 0x20;
    if (!(bool)uVar1) {
LAB_006ff0cc:
      param_4 = pcVar6;
      func_0x006ffb20();
      pcVar6 = section_00000068.segname + 0xe;
      pcVar2 = pcVar5;
      psVar8 = psVar7;
      unaff_x19 = param_5;
      unaff_x20 = param_3;
      unaff_x21 = param_2;
      unaff_x22 = param_7;
      goto LAB_006ff0d4;
    }
    pcVar2 = acStack_78;
    FUN_006d9c24(pcVar2,param_9,param_7);
    pcVar5 = param_9;
    if ((int)pcVar2 == 0) goto LAB_006ff0cc;
    sStack_c0.segname._0_8_ = *(undefined8 *)(param_4 + 8);
    sStack_c0._0_8_ = *(undefined8 *)param_4;
    sStack_c0.vmaddr = *(qword *)(param_4 + 0x18);
    sStack_c0.segname._8_8_ = *(undefined8 *)(param_4 + 0x10);
    sStack_c0.fileoff = param_7[1];
    sStack_c0.vmsize = *param_7;
    sStack_c0._56_8_ = param_7[3];
    sStack_c0.filesize = param_7[2];
    unaff_x22 = (qword *)(ulong)*param_1;
    FUN_006eabc0();
    param_4 = acStack_78;
    pqVar3 = unaff_x22;
    pcVar6 = param_2;
    FUN_006ff8f4(unaff_x22,pcVar2);
    if ((int)pqVar3 != 0) {
      param_5->cmd = 0x20;
      param_5->cmdsize = 0;
      *param_3 = 0x20;
      pqVar3 = (qword *)((long)&MACH_HEADER.magic + 1);
    }
  }
  func_0x006ffa70(uStack_58);
  if ((bool)uVar1) {
    return pqVar3;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_006ff108;
  pqStack_f0 = unaff_x22;
  pcStack_e8 = param_2;
  puStack_e0 = param_3;
  psStack_d8 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x006ffa84();
  uVar1 = psVar8 == &segment_command_00000020;
  uStack_f8 = extraout_x8_00;
  if ((bool)uVar1) {
    puVar4 = auStack_118;
    FUN_006d9c24(puVar4,pqVar3 + 1,param_4);
    if ((int)puVar4 != 0) {
      uStack_158 = *(undefined8 *)(param_4 + 8);
      uStack_160 = *(undefined8 *)param_4;
      uStack_148 = *(undefined8 *)(param_4 + 0x18);
      uStack_150 = *(undefined8 *)(param_4 + 0x10);
      qStack_138 = pqVar3[6];
      qStack_140 = pqVar3[5];
      qStack_128 = pqVar3[8];
      qStack_130 = pqVar3[7];
      puVar9 = (undefined8 *)(ulong)*(ushort *)*pqVar3;
      FUN_006eabc0();
      FUN_006ff8f4(puVar9,puVar4,pcVar2,auStack_118,&uStack_160);
      if ((int)puVar9 != 0) {
        *(undefined8 *)pcVar6 = 0x20;
        puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      goto LAB_006ff1ac;
    }
  }
  func_0x006ffb20();
  func_0x006ffa94();
  puVar9 = (undefined8 *)0x0;
LAB_006ff1ac:
  func_0x006ffa70(uStack_f8);
  if ((bool)uVar1) {
    return puVar9;
  }
  ___stack_chk_fail();
  return (qword *)&UNK_00a122d8;
}



/* Entry: 006ff108; end: 006ff1c3;  */

undefined *
FUN_006ff108(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            long param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined *puVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x006ffa84();
  uVar1 = param_5 == 0x20;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    puVar2 = auStack_58;
    FUN_006d9c24(puVar2,param_1 + 1,param_4);
    if ((int)puVar2 != 0) {
      uStack_98 = param_4[1];
      uStack_a0 = *param_4;
      uStack_88 = param_4[3];
      uStack_90 = param_4[2];
      uStack_78 = param_1[6];
      uStack_80 = param_1[5];
      uStack_68 = param_1[8];
      uStack_70 = param_1[7];
      puVar3 = (undefined *)(ulong)*(ushort *)*param_1;
      FUN_006eabc0();
      FUN_006ff8f4(puVar3,puVar2,param_2,auStack_58,&uStack_a0);
      if ((int)puVar3 != 0) {
        *param_3 = 0x20;
        puVar3 = (undefined *)0x1;
      }
      goto LAB_006ff1ac;
    }
  }
  func_0x006ffb20();
  func_0x006ffa94();
  puVar3 = (undefined *)0x0;
LAB_006ff1ac:
  func_0x006ffa70(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  return &UNK_00a122d8;
}



/* Entry: 006ff1c4; end: 006ff1e7;  */

undefined * FUN_006ff1c4(void)

{
  return &UNK_00a122d8;
}



/* Entry: 006ff1e8; end: 006ff39b;  */

/* WARNING: Possible PIC construction at 0x006ff280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006ff284) */
/* WARNING: Removing unreachable block (ram,0x006ff2b0) */
/* WARNING: Removing unreachable block (ram,0x006ff290) */

void FUN_006ff1e8(byte *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 param_9,
                 byte *param_10,long param_11)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined8 ******ppppppuVar12;
  segment_command *psVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  qword extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  segment_command sStack_450;
  byte *pbStack_408;
  byte *pbStack_400;
  undefined8 *****pppppuStack_3f8;
  byte *pbStack_3f0;
  long *plStack_3e8;
  undefined1 ***pppuStack_3e0;
  code *pcStack_3d8;
  byte *pbStack_3d0;
  long lStack_3c8;
  undefined8 *****pppppuStack_3b8;
  undefined1 auStack_3b0 [32];
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 auStack_378 [80];
  undefined1 auStack_328 [64];
  byte abStack_2e8 [134];
  undefined1 auStack_262 [64];
  undefined1 auStack_222 [64];
  undefined1 auStack_1e2 [10];
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  byte *pbStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined1 *puStack_180;
  byte *pbStack_178;
  undefined8 *puStack_168;
  undefined8 *****pppppuStack_160;
  byte abStack_158 [32];
  undefined8 uStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  byte *pbStack_120;
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a0;
  byte *pbStack_98;
  undefined1 auStack_88 [40];
  
  pbStack_98 = param_10;
  uStack_a0 = param_9;
  lVar9 = param_5;
  func_0x006ffa84();
  FUN_006e92d4(auStack_88,*(undefined8 *)(lVar9 + 0x18));
  pbStack_b0 = *(byte **)(param_5 + 0x18);
  lStack_c0 = param_11;
  pbStack_c8 = pbStack_98;
  uStack_d0 = uStack_a0;
  lStack_128 = param_11;
  uStack_d8 = 0x6ff284;
  puStack_168 = param_8;
  puStack_130 = auStack_88;
  pbStack_120 = param_1;
  lStack_118 = param_2;
  uStack_110 = param_3;
  lStack_108 = param_4;
  lStack_100 = param_5;
  uStack_f8 = param_6;
  uStack_f0 = param_7;
  puStack_e8 = param_8;
  puStack_e0 = &stack0xfffffffffffffff0;
  puStack_b8 = auStack_88;
  func_0x006ffb84(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  pbVar16 = pbStack_b0;
  puVar7 = puStack_b8;
  uVar1 = uStack_d0;
  func_0x006ffa84();
  uStack_138 = extraout_x8;
  func_0x006ffc38();
  func_0x006ffc20();
  *(undefined4 *)(param_8 + 0x59) = 1;
  *param_8 = param_6;
  param_8[1] = param_5;
  puStack_180 = puVar7;
  pbStack_178 = pbVar16;
  pbVar10 = abStack_158;
  ppppppuVar12 = &pppppuStack_160;
  lVar9 = param_4;
  pbVar17 = param_1;
  lVar15 = param_2;
  (**(code **)(param_4 + 0x30))();
  if ((int)lVar9 == 0) {
LAB_006ff350:
    if (param_8[2] == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      func_0x006ffc08();
      plVar4 = (long *)0x0;
      param_8[2] = 0;
    }
  }
  else {
    pbVar10 = abStack_158;
    puVar3 = param_8;
    pbVar17 = pbStack_c8;
    lVar15 = lStack_c0;
    FUN_006ff39c();
    ppppppuVar12 = (undefined8 ******)pppppuStack_160;
    if ((int)puVar3 == 0) goto LAB_006ff350;
    plVar4 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x006ffa70(uStack_138);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puStack_1d0 = puVar7;
  uStack_1c8 = uVar1;
  pbStack_1a0 = pbVar16;
  pcStack_188 = FUN_006ff39c;
  uStack_1c0 = param_3;
  lStack_1b8 = param_4;
  lStack_1b0 = param_5;
  uStack_1a8 = param_6;
  puStack_198 = param_8;
  ppuStack_190 = &puStack_e0;
  func_0x006ffa84();
  pbVar5 = abStack_2e8;
  uStack_1d8 = extraout_x8_00;
  FUN_006d3654(pbVar5,auStack_1e2,10);
  if ((int)pbVar5 == 0) {
LAB_006ff5c0:
    func_0x006d3688(abStack_2e8);
  }
  else {
    pbVar5 = abStack_2e8;
    FUN_006ffa3c(pbVar5,&UNK_0091685a);
    if ((int)pbVar5 == 0) goto LAB_006ff5c0;
    pbVar5 = abStack_2e8;
    FUN_006d3d68(pbVar5,0x20);
    if (((int)pbVar5 == 0) || (func_0x006ffc14(plVar4[1]), (int)pbVar5 == 0)) goto LAB_006ff5c0;
    func_0x006ffc14(*plVar4);
    pbVar6 = abStack_2e8;
    func_0x006d3688();
    pbVar16 = pbVar5;
    if ((int)pbVar5 != 0) {
      (**(code **)(plVar4[1] + 8))();
      pbStack_3d0 = (byte *)0x0;
      lStack_3c8 = 0;
      pbVar5 = pbVar6;
      func_0x006ffbb4();
      pbVar16 = pbVar6;
      if (((int)pbVar5 != 0) &&
         (pbVar5 = pbVar6, pbStack_3d0 = pbVar17, lStack_3c8 = lVar15,
         func_0x006ffbb4(pbVar6,auStack_262,&uStack_388), (int)pbVar5 != 0)) {
        puVar7 = auStack_3b0;
        FUN_006d3654(puVar7,abStack_2e8,0x81);
        if ((int)puVar7 != 0) {
          puVar7 = auStack_3b0;
          FUN_006d3a70(puVar7,0);
          if ((int)puVar7 != 0) {
            puVar7 = auStack_3b0;
            FUN_006d3b2c(puVar7,auStack_222,uStack_380);
            if ((int)puVar7 != 0) {
              puVar7 = auStack_3b0;
              FUN_006d3b2c(puVar7,auStack_262,uStack_388);
              if ((int)puVar7 != 0) {
                puVar7 = auStack_3b0;
                FUN_006d36d4(puVar7,0,&lStack_390);
                if ((int)puVar7 != 0) {
                  pbStack_3d0 = (byte *)0x0;
                  lStack_3c8 = 0;
                  pbVar5 = pbVar6;
                  FUN_006ff9b4(pbVar6,auStack_328,&pppppuStack_3b8,pbVar10,ppppppuVar12,auStack_1e2,
                               10);
                  if ((int)pbVar5 != 0) {
                    (**(code **)(*plVar4 + 8))();
                    pbVar17 = (byte *)(ulong)*pbVar5;
                    pbStack_3d0 = abStack_2e8;
                    lStack_3c8 = lStack_390;
                    FUN_006ff85c(pbVar6,auStack_378,pbVar17,auStack_328,pppppuStack_3b8,auStack_1e2,
                                 10);
                    ppppppuVar12 = (undefined8 ******)pppppuStack_3b8;
                    pbVar10 = pbVar5;
                    lVar15 = lStack_390;
                    if ((int)pbVar6 != 0) {
                      plVar8 = plVar4 + 2;
                      FUN_006e987c(plVar8,pbVar5,auStack_378,pbVar17,0,0);
                      iVar2 = (int)plVar8;
                      if (iVar2 != 0) {
                        pbVar10 = abStack_2e8;
                        lStack_3c8 = lStack_390;
                        pbStack_3d0 = pbVar10;
                        func_0x006ffb2c();
                        if (iVar2 != 0) {
                          lStack_3c8 = lStack_390;
                          pbStack_3d0 = pbVar10;
                          func_0x006ffb2c();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x006ffa70(uStack_1d8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  psVar13 = &sStack_450;
  pcStack_3d8 = FUN_006ff5f8;
  sStack_450.filesize = (qword)param_1;
  sStack_450._56_8_ = param_2;
  sStack_450._64_8_ = lVar15;
  pbStack_408 = pbVar17;
  pbStack_400 = pbVar10;
  pppppuStack_3f8 = ppppppuVar12;
  pbStack_3f0 = pbVar16;
  plStack_3e8 = plVar4;
  pppuStack_3e0 = &ppuStack_190;
  func_0x006ffb84();
  func_0x006ffa84();
  sStack_450.fileoff = extraout_x8_01;
  func_0x006ffc38();
  func_0x006ffc20();
  *(undefined4 *)(plVar4 + 0x59) = 0;
  *plVar4 = lVar15;
  plVar4[1] = param_2;
  pcVar11 = sStack_450.segname;
  (**(code **)(*(long *)param_1 + 0x38))();
  if ((int)param_1 == 0) {
LAB_006ff67c:
    if (plVar4[2] == 0) {
      lVar9 = 0;
    }
    else {
      func_0x006ffc08();
      lVar9 = 0;
      plVar4[2] = 0;
    }
  }
  else {
    pcVar11 = sStack_450.segname;
    psVar13 = &segment_command_00000020;
    plVar8 = plVar4;
    FUN_006ff39c();
    if ((int)plVar8 == 0) goto LAB_006ff67c;
    lVar9 = 1;
  }
  func_0x006ffa70(sStack_450.fileoff);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006ffa84();
  if (*(int *)(lVar9 + 0x2c8) == 0) {
    in_ZR = *(long *)(lVar9 + 0x2c0) == -1;
    if (!(bool)in_ZR) {
      func_0x006ffaa0();
      func_0x006ffb5c();
      FUN_006e9af4();
      if ((int)lVar9 != 0) {
        func_0x006ffc40();
      }
      goto LAB_006ff704;
    }
    func_0x006ffb20();
    psVar13 = (segment_command *)((long)&segment_command_00000020.vmsize + 5);
  }
  else {
    func_0x006ffb20();
    psVar13 = (segment_command *)((long)&segment_command_00000020.vmsize + 2);
  }
  func_0x006ffa94();
  lVar9 = 0;
LAB_006ff704:
  func_0x006ffa70(extraout_x8_02);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (psVar13 != (segment_command *)0x0) {
    _bzero(pcVar11,psVar13);
  }
  uVar14 = *(ulong *)(lVar9 + 0x2c0);
  for (lVar15 = -1; lVar15 != -9; lVar15 = lVar15 + -1) {
    (pcVar11 + (long)psVar13)[lVar15] = (byte)uVar14;
    uVar14 = uVar14 >> 8;
  }
  pbVar10 = (byte *)(lVar9 + 0x268);
  for (; psVar13 != (segment_command *)0x0;
      psVar13 = (segment_command *)((long)&psVar13[-1].flags + 3)) {
    *pcVar11 = *pcVar11 ^ *pbVar10;
    pbVar10 = pbVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  return;
}



/* Entry: 006ff39c; end: 006ff5f7;  */

void FUN_006ff39c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  segment_command *psVar9;
  undefined8 extraout_x8;
  qword extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar10;
  long lVar11;
  long unaff_x25;
  long *unaff_x26;
  byte abStack_2c8 [32];
  qword qStack_2a8;
  undefined8 uStack_238;
  undefined1 auStack_230 [32];
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [80];
  undefined1 auStack_1a8 [64];
  undefined1 auStack_168 [134];
  undefined1 auStack_e2 [64];
  undefined1 auStack_a2 [64];
  undefined1 auStack_62 [10];
  undefined8 uStack_58;
  
  func_0x006ffa84();
  puVar4 = auStack_168;
  uStack_58 = extraout_x8;
  FUN_006d3654(puVar4,auStack_62,10);
  if ((int)puVar4 == 0) {
LAB_006ff5c0:
    func_0x006d3688(auStack_168);
  }
  else {
    puVar4 = auStack_168;
    FUN_006ffa3c(puVar4,&UNK_0091685a);
    if ((int)puVar4 == 0) goto LAB_006ff5c0;
    puVar4 = auStack_168;
    FUN_006d3d68(puVar4,0x20);
    iVar3 = (int)puVar4;
    if ((iVar3 == 0) || (func_0x006ffc14(param_1[1]), iVar3 == 0)) goto LAB_006ff5c0;
    func_0x006ffc14(*param_1);
    puVar4 = auStack_168;
    func_0x006d3688();
    if (iVar3 != 0) {
      (**(code **)(param_1[1] + 8))();
      puVar5 = puVar4;
      func_0x006ffbb4();
      if (((int)puVar5 != 0) &&
         (puVar5 = puVar4, func_0x006ffbb4(puVar4,auStack_e2,&uStack_208), (int)puVar5 != 0)) {
        puVar5 = auStack_230;
        FUN_006d3654(puVar5,auStack_168,0x81);
        if ((int)puVar5 != 0) {
          puVar5 = auStack_230;
          FUN_006d3a70(puVar5,0);
          if ((int)puVar5 != 0) {
            puVar5 = auStack_230;
            FUN_006d3b2c(puVar5,auStack_a2,uStack_200);
            if ((int)puVar5 != 0) {
              puVar5 = auStack_230;
              FUN_006d3b2c(puVar5,auStack_e2,uStack_208);
              if ((int)puVar5 != 0) {
                puVar5 = auStack_230;
                FUN_006d36d4(puVar5,0,&lStack_210);
                if (((int)puVar5 != 0) &&
                   (puVar5 = puVar4,
                   FUN_006ff9b4(puVar4,auStack_1a8,&uStack_238,param_2,param_3,auStack_62,10),
                   (int)puVar5 != 0)) {
                  (**(code **)(*param_1 + 8))();
                  uVar1 = *puVar5;
                  FUN_006ff85c(puVar4,auStack_1f8,uVar1,auStack_1a8,uStack_238,auStack_62,10);
                  param_5 = lStack_210;
                  if ((int)puVar4 != 0) {
                    plVar6 = param_1 + 2;
                    FUN_006e987c(plVar6,puVar5,auStack_1f8,uVar1,0,0);
                    iVar3 = (int)plVar6;
                    if ((iVar3 != 0) && (func_0x006ffb2c(), iVar3 != 0)) {
                      func_0x006ffb2c();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x006ffa70(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  psVar9 = (segment_command *)&stack0xfffffffffffffd30;
  func_0x006ffb84();
  func_0x006ffa84();
  qStack_2a8 = extraout_x8_00;
  func_0x006ffc38();
  func_0x006ffc20();
  *(undefined4 *)(param_1 + 0x59) = 0;
  *param_1 = param_5;
  param_1[1] = unaff_x25;
  pbVar8 = abStack_2c8;
  (**(code **)(*unaff_x26 + 0x38))();
  if ((int)unaff_x26 == 0) {
LAB_006ff67c:
    if (param_1[2] == 0) {
      lVar7 = 0;
    }
    else {
      func_0x006ffc08();
      lVar7 = 0;
      param_1[2] = 0;
    }
  }
  else {
    pbVar8 = abStack_2c8;
    psVar9 = &segment_command_00000020;
    plVar6 = param_1;
    FUN_006ff39c();
    if ((int)plVar6 == 0) goto LAB_006ff67c;
    lVar7 = 1;
  }
  func_0x006ffa70(qStack_2a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006ffa84();
  if (*(int *)(lVar7 + 0x2c8) == 0) {
    in_ZR = *(long *)(lVar7 + 0x2c0) == -1;
    if (!(bool)in_ZR) {
      func_0x006ffaa0();
      func_0x006ffb5c();
      FUN_006e9af4();
      if ((int)lVar7 != 0) {
        func_0x006ffc40();
      }
      goto LAB_006ff704;
    }
    func_0x006ffb20();
    psVar9 = (segment_command *)((long)&segment_command_00000020.vmsize + 5);
  }
  else {
    func_0x006ffb20();
    psVar9 = (segment_command *)((long)&segment_command_00000020.vmsize + 2);
  }
  func_0x006ffa94();
  lVar7 = 0;
LAB_006ff704:
  func_0x006ffa70(extraout_x8_01);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (psVar9 != (segment_command *)0x0) {
    _bzero(pbVar8,psVar9);
  }
  uVar10 = *(ulong *)(lVar7 + 0x2c0);
  for (lVar11 = -1; lVar11 != -9; lVar11 = lVar11 + -1) {
    (pbVar8 + (long)psVar9)[lVar11] = (byte)uVar10;
    uVar10 = uVar10 >> 8;
  }
  pbVar2 = (byte *)(lVar7 + 0x268);
  for (; psVar9 != (segment_command *)0x0; psVar9 = (segment_command *)((long)&psVar9[-1].flags + 3)
      ) {
    *pbVar8 = *pbVar8 ^ *pbVar2;
    pbVar2 = pbVar2 + 1;
    pbVar8 = pbVar8 + 1;
  }
  return;
}



/* Entry: 006ff5f8; end: 006ff6c3;  */

void FUN_006ff5f8(void)

{
  byte *pbVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  byte *pbVar4;
  segment_command *psVar5;
  qword extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  byte abStack_78 [32];
  qword qStack_58;
  
  psVar5 = (segment_command *)&stack0xffffffffffffff80;
  func_0x006ffb84();
  func_0x006ffa84();
  qStack_58 = extraout_x8;
  func_0x006ffc38();
  func_0x006ffc20();
  *(undefined4 *)(unaff_x19 + 0x59) = 0;
  *unaff_x19 = unaff_x24;
  unaff_x19[1] = unaff_x25;
  pbVar4 = abStack_78;
  (**(code **)(*unaff_x26 + 0x38))();
  if ((int)unaff_x26 == 0) {
LAB_006ff67c:
    if (unaff_x19[2] == 0) {
      lVar3 = 0;
    }
    else {
      func_0x006ffc08();
      lVar3 = 0;
      unaff_x19[2] = 0;
    }
  }
  else {
    pbVar4 = abStack_78;
    psVar5 = &segment_command_00000020;
    puVar2 = unaff_x19;
    FUN_006ff39c();
    if ((int)puVar2 == 0) goto LAB_006ff67c;
    lVar3 = 1;
  }
  func_0x006ffa70(qStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006ffa84();
  if (*(int *)(lVar3 + 0x2c8) == 0) {
    in_ZR = *(long *)(lVar3 + 0x2c0) == -1;
    if (!(bool)in_ZR) {
      func_0x006ffaa0();
      func_0x006ffb5c();
      FUN_006e9af4();
      if ((int)lVar3 != 0) {
        func_0x006ffc40();
      }
      goto LAB_006ff704;
    }
    func_0x006ffb20();
    psVar5 = (segment_command *)((long)&segment_command_00000020.vmsize + 5);
  }
  else {
    func_0x006ffb20();
    psVar5 = (segment_command *)((long)&segment_command_00000020.vmsize + 2);
  }
  func_0x006ffa94();
  lVar3 = 0;
LAB_006ff704:
  func_0x006ffa70(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (psVar5 != (segment_command *)0x0) {
      _bzero(pbVar4,psVar5);
    }
    uVar6 = *(ulong *)(lVar3 + 0x2c0);
    for (lVar7 = -1; lVar7 != -9; lVar7 = lVar7 + -1) {
      (pbVar4 + (long)psVar5)[lVar7] = (byte)uVar6;
      uVar6 = uVar6 >> 8;
    }
    pbVar1 = (byte *)(lVar3 + 0x268);
    for (; psVar5 != (segment_command *)0x0;
        psVar5 = (segment_command *)((long)&psVar5[-1].flags + 3)) {
      *pbVar4 = *pbVar4 ^ *pbVar1;
      pbVar1 = pbVar1 + 1;
      pbVar4 = pbVar4 + 1;
    }
    return;
  }
  return;
}



/* Entry: 006ff6c4; end: 006ff74f;  */

void FUN_006ff6c4(long param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong uVar2;
  long lVar3;
  
  func_0x006ffa84();
  if (*(int *)(param_1 + 0x2c8) == 0) {
    in_ZR = *(long *)(param_1 + 0x2c0) == -1;
    if (!(bool)in_ZR) {
      func_0x006ffaa0();
      func_0x006ffb5c();
      FUN_006e9af4();
      if ((int)param_1 != 0) {
        func_0x006ffc40();
      }
      goto LAB_006ff704;
    }
    func_0x006ffb20();
    param_3 = 0x45;
  }
  else {
    func_0x006ffb20();
    param_3 = 0x42;
  }
  func_0x006ffa94();
  param_1 = 0;
LAB_006ff704:
  func_0x006ffa70(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_3 != 0) {
      _bzero(param_2,param_3);
    }
    uVar2 = *(ulong *)(param_1 + 0x2c0);
    for (lVar3 = -1; lVar3 != -9; lVar3 = lVar3 + -1) {
      param_2[lVar3 + param_3] = (byte)uVar2;
      uVar2 = uVar2 >> 8;
    }
    pbVar1 = (byte *)(param_1 + 0x268);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_2 = *param_2 ^ *pbVar1;
      pbVar1 = pbVar1 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  return;
}



/* Entry: 006ff750; end: 006ff7cf;  */

void FUN_006ff750(long param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    _bzero(param_2,param_3);
  }
  uVar2 = *(ulong *)(param_1 + 0x2c0);
  for (lVar3 = -1; lVar3 != -9; lVar3 = lVar3 + -1) {
    param_2[lVar3 + param_3] = (byte)uVar2;
    uVar2 = uVar2 >> 8;
  }
  pbVar1 = (byte *)(param_1 + 0x268);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_2 = *param_2 ^ *pbVar1;
    pbVar1 = pbVar1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 006ff7d0; end: 006ff85b;  */

long FUN_006ff7d0(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  int iVar2;
  undefined8 extraout_x8;
  undefined2 unaff_w21;
  long unaff_x23;
  undefined1 auStack_100 [32];
  
  func_0x006ffa84();
  if (*(int *)(param_1 + 0x2c8) == 0) {
    func_0x006ffb20();
LAB_006ff83c:
    func_0x006ffa94();
    param_1 = 0;
  }
  else {
    in_ZR = *(long *)(param_1 + 0x2c0) == -1;
    if ((bool)in_ZR) {
      func_0x006ffb20();
      goto LAB_006ff83c;
    }
    func_0x006ffaa0();
    func_0x006ffb5c();
    FUN_006e9938();
    if ((int)param_1 != 0) {
      func_0x006ffc40();
    }
  }
  func_0x006ffa70(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar1 = (int)param_1;
  iVar2 = (int)auStack_100;
  func_0x006ffad8();
  if (iVar1 != 0) {
    FUN_006d3d68(auStack_100,unaff_w21);
    if ((((iVar2 != 0) && (func_0x006ffbc4(), iVar2 != 0)) && (func_0x006ffbd4(), iVar2 != 0)) &&
       ((func_0x006ffc2c(), iVar2 != 0 && (func_0x006ffbfc(), iVar2 != 0)))) {
      func_0x006ffbe4();
      FUN_006fed98();
      goto LAB_006ff8e0;
    }
  }
  unaff_x23 = 0;
LAB_006ff8e0:
  func_0x006d3688(auStack_100);
  return unaff_x23;
}



/* Entry: 006ff85c; end: 006ff8f3;  */

undefined8 FUN_006ff85c(int param_1)

{
  int iVar1;
  undefined2 unaff_w21;
  undefined8 unaff_x23;
  undefined1 auStack_70 [32];
  
  iVar1 = (int)auStack_70;
  func_0x006ffad8();
  if (param_1 != 0) {
    FUN_006d3d68(auStack_70,unaff_w21);
    if ((((iVar1 != 0) && (func_0x006ffbc4(), iVar1 != 0)) && (func_0x006ffbd4(), iVar1 != 0)) &&
       ((func_0x006ffc2c(), iVar1 != 0 && (func_0x006ffbfc(), iVar1 != 0)))) {
      func_0x006ffbe4();
      FUN_006fed98();
      goto LAB_006ff8e0;
    }
  }
  unaff_x23 = 0;
LAB_006ff8e0:
  func_0x006d3688(auStack_70);
  return unaff_x23;
}



/* Entry: 006ff8f4; end: 006ff9b3;  */

undefined8 FUN_006ff8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined2 uVar3;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 unaff_x23;
  undefined1 auStack_110 [32];
  undefined8 uStack_88;
  undefined2 uStack_7d;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  uVar3 = (undefined2)((ulong)param_1 >> 8);
  func_0x006ffa84();
  uStack_7d = 0x454b;
  uStack_7b = 0x4d;
  uStack_7a = (undefined1)((ushort)uVar3 >> 8);
  uStack_79 = (undefined1)uVar3;
  uVar2 = param_2;
  uStack_38 = extraout_x8;
  FUN_006ff9b4(param_2,auStack_78,&uStack_88,0,0,&uStack_7d,5,&UNK_00916818);
  if ((int)uVar2 != 0) {
    FUN_006ff85c(param_2,param_3,0x20,auStack_78,uStack_88,&uStack_7d,5,&UNK_00916820);
    uVar2 = param_2;
  }
  func_0x006ffa70(uStack_38);
  if ((bool)in_ZR) {
    return uVar2;
  }
  ___stack_chk_fail();
  iVar1 = (int)uVar2;
  func_0x006ffad8();
  if ((((iVar1 == 0) || (func_0x006ffbc4(), iVar1 == 0)) || (func_0x006ffbd4(), iVar1 == 0)) ||
     ((func_0x006ffc2c(), iVar1 == 0 || (func_0x006ffbfc(), iVar1 == 0)))) {
    unaff_x23 = 0;
  }
  else {
    func_0x006ffbe4();
    FUN_006fed38();
  }
  func_0x006d3688(auStack_110);
  return unaff_x23;
}



/* Entry: 006ff9b4; end: 006ffa3b;  */

undefined8 FUN_006ff9b4(int param_1)

{
  undefined8 unaff_x23;
  undefined1 auStack_70 [32];
  
  func_0x006ffad8();
  if ((((param_1 == 0) || (func_0x006ffbc4(), param_1 == 0)) || (func_0x006ffbd4(), param_1 == 0))
     || ((func_0x006ffc2c(), param_1 == 0 || (func_0x006ffbfc(), param_1 == 0)))) {
    unaff_x23 = 0;
  }
  else {
    func_0x006ffbe4();
    FUN_006fed38();
  }
  func_0x006d3688(auStack_70);
  return unaff_x23;
}



/* Entry: 006ffa3c; end: 006ffa6f;  */

void FUN_006ffa3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  _strlen(param_2);
  func_0x006d40b0(param_1,param_2,uVar1);
  if ((int)param_1 != 0) {
    uVar1 = *unaff_x21;
    FUN_006d38e0(uVar1,&uStack_38,unaff_x19);
    if (((int)uVar1 != 0) && (unaff_x19 != 0)) {
      func_0x006d4130(uStack_38);
      _memcpy();
    }
  }
  return;
}



/* Entry: 006ffa70; end: 006ffc53;  */

void FUN_006ffa70(void)

{
  return;
}



/* Entry: 006ffc54; end: 006ffee3;  */

void FUN_006ffc54(long *param_1,long *param_2,long *param_3,long *param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if (param_5 == 1) {
    uVar20 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar24 = 0;
    uVar21 = 0;
    uVar22 = *(ulong *)*param_4;
    uVar23 = *(ulong *)param_4[1];
    uVar27 = 0x40;
    do {
      uVar12 = -(uVar23 & 1) & *(ulong *)param_3[1];
      uVar11 = uVar12 & (*(ulong *)*param_3 ^ -(uVar22 & 1));
      uVar22 = uVar22 >> 1;
      uVar23 = uVar23 >> 1;
      uVar13 = uVar11 << (uVar21 & 0x3f);
      uVar14 = uVar11 >> (uVar27 & 0x3f);
      uVar15 = uVar12 << (uVar21 & 0x3f);
      uVar16 = uVar12 >> (uVar27 & 0x3f);
      uVar25 = uVar15 ^ uVar24;
      uVar17 = uVar13 ^ uVar20;
      uVar15 = uVar15 ^ uVar20;
      uVar26 = uVar16 ^ uVar19;
      uVar24 = uVar11;
      uVar20 = uVar12;
      if (uVar21 != 0) {
        uVar24 = uVar17 & uVar25;
        uVar19 = (uVar14 ^ uVar18) & uVar26;
        uVar18 = uVar26 ^ uVar14 | uVar16 ^ uVar18;
        uVar20 = uVar25 ^ uVar13 | uVar15;
      }
      uVar21 = uVar21 + 1;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
    puVar7 = (ulong *)*param_1;
    puVar9 = (ulong *)param_1[1];
    *puVar7 = uVar24;
    puVar7[1] = uVar19;
    *puVar9 = uVar20;
    puVar9[1] = uVar18;
  }
  else {
    uVar21 = param_5 >> 1;
    uVar24 = param_5 - (param_5 >> 1);
    lVar1 = *param_3 + uVar21 * 8;
    lVar2 = param_3[1] + uVar21 * 8;
    lVar3 = *param_4 + uVar21 * 8;
    lVar4 = param_4[1] + uVar21 * 8;
    lVar29 = param_1[1];
    lVar28 = *param_1;
    lVar8 = *param_1;
    lVar10 = param_1[1];
    lVar5 = lVar8 + uVar24 * 8;
    lVar6 = lVar10 + uVar24 * 8;
    lStack_b0 = lVar5;
    lStack_a8 = lVar6;
    lStack_a0 = lVar28;
    lStack_98 = lVar29;
    lStack_88 = lVar3;
    lStack_80 = lVar4;
    lStack_78 = lVar1;
    lStack_70 = lVar2;
    FUN_00701220(lVar28,lVar29,param_3,&lStack_78,uVar21);
    FUN_00701220(lVar5,lVar6,param_4,&lStack_88,uVar21);
    if (uVar24 != param_5 >> 1) {
      *(undefined8 *)(lVar28 + uVar21 * 8) = *(undefined8 *)(lVar1 + uVar21 * 8);
      *(undefined8 *)(lVar29 + uVar21 * 8) = *(undefined8 *)(lVar2 + uVar21 * 8);
      *(undefined8 *)(lVar8 + param_5 * 8) = *(undefined8 *)(lVar3 + uVar21 * 8);
      *(undefined8 *)(lVar10 + param_5 * 8) = *(undefined8 *)(lVar4 + uVar21 * 8);
    }
    lStack_c0 = *param_2 + uVar24 * 0x10;
    lStack_b8 = param_2[1] + uVar24 * 0x10;
    lVar1 = *param_1 + uVar21 * 8;
    lVar2 = param_1[1] + uVar21 * 8;
    param_5 = param_5 & 0xfffffffffffffffe;
    lStack_e0 = *param_1 + param_5 * 8;
    lStack_d8 = param_1[1] + param_5 * 8;
    lStack_d0 = lVar1;
    lStack_c8 = lVar2;
    FUN_006ffc54(param_2,&lStack_c0,&lStack_a0,&lStack_b0,uVar24);
    FUN_006ffc54(&lStack_e0,&lStack_c0,&lStack_78,&lStack_88,uVar24);
    FUN_006ffc54(param_1,&lStack_c0,param_3,param_4,uVar21);
    func_0x00701270(param_2,param_1,param_5);
    func_0x00701270(param_2,&lStack_e0,uVar24 * 2);
    FUN_00701220(lVar1,lVar2,&lStack_d0,param_2,uVar24 * 2);
  }
  return;
}



/* Entry: 006ffee4; end: 006fff17;  */

void FUN_006ffee4(ulong *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_58 [7];
  
  FUN_007012c0(param_1 + 0xb,param_2 + 0x58);
  for (lVar1 = 0; lVar1 != 0xb; lVar1 = lVar1 + 1) {
    uVar4 = *(ulong *)(param_2 + lVar1 * 8);
    for (lVar3 = 0; lVar3 != 6; lVar3 = lVar3 + 1) {
      uVar5 = (ulong)(uint)(1 << (ulong)((uint)lVar3 & 0x1f));
      uVar4 = (*(ulong *)(&UNK_00838b38 + lVar3 * 8) & uVar4) << (uVar5 & 0x3f) |
              *(ulong *)(&UNK_00838b38 + lVar3 * 8) & uVar4 >> (uVar5 & 0x3f);
    }
    auStack_58[lVar1] = uVar4;
  }
  puVar2 = param_1;
  for (lVar1 = 0; lVar1 != -0x50; lVar1 = lVar1 + -8) {
    *puVar2 = *(ulong *)(&stack0xfffffffffffffff8 + lVar1) >> 4 |
              *(long *)(&stack0xfffffffffffffff0 + lVar1) << 0x3c;
    puVar2 = puVar2 + 1;
  }
  param_1[10] = auStack_58[0] >> 4;
  return;
}



/* Entry: 006fff18; end: 006fff53;  */

/* WARNING: Possible PIC construction at 0x006fff34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006fff38) */

void FUN_006fff18(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  for (lVar1 = 0; lVar1 != 0x58; lVar1 = lVar1 + 8) {
    uVar2 = (*(ulong *)(param_2 + lVar1) ^ *(ulong *)(param_1 + lVar1)) & param_3;
    *(ulong *)(param_1 + lVar1) = uVar2 ^ *(ulong *)(param_1 + lVar1);
    *(ulong *)(param_2 + lVar1) = *(ulong *)(param_2 + lVar1) ^ uVar2;
  }
  return;
}



/* Entry: 006fff54; end: 006fffab;  */

void FUN_006fff54(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = 0xb;
  do {
    uVar3 = param_2[0xb] & param_4;
    uVar2 = uVar3 & (*param_2 ^ param_3);
    uVar4 = *param_1;
    *param_1 = (param_1[0xb] ^ uVar3 ^ uVar2) & (uVar3 ^ uVar4);
    param_1[0xb] = param_1[0xb] ^ uVar3 | uVar2 ^ uVar4;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



/* Entry: 006fffac; end: 007004c3;  */

undefined8 FUN_006fffac(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_d38;
  ulong auStack_d30 [176];
  ulong auStack_7b0 [177];
  ulong auStack_228 [33];
  ulong auStack_120 [24];
  
  puVar4 = &uStack_d38;
  FUN_007004c4(puVar4,&UNK_00002bc0);
  if (puVar4 == (undefined8 *)0x0) {
    _bzero(param_1,0x590);
    FUN_006e92d4(param_2,0x710);
    uVar5 = 0;
  }
  else {
    uVar6 = (ulong)(uint)-(int)param_1 & 0xf;
    uVar14 = *(undefined8 *)(param_3 + 0x580);
    uVar5 = *(undefined8 *)(param_3 + 0x578);
    uVar15 = *(undefined8 *)(param_3 + 0x588);
    param_2 = param_2 + ((ulong)(uint)-(int)param_2 & 0xf);
    *(undefined8 *)(param_2 + 0x6f8) = *(undefined8 *)(param_3 + 0x590);
    *(undefined8 *)(param_2 + 0x6f0) = uVar15;
    *(undefined8 *)(param_2 + 0x6e8) = uVar14;
    *(undefined8 *)(param_2 + 0x6e0) = uVar5;
    func_0x00700504(puVar4 + 0x2b8,param_3);
    FUN_00700570(param_2,puVar4 + 0x2b8);
    _bzero(auStack_7b0,0xb0);
    _bzero(auStack_d30,0xb0);
    iVar11 = 1;
    auStack_d30[0xb] = 1;
    auStack_120[1] = 0;
    auStack_120[0] = 0;
    auStack_120[3] = 0;
    auStack_120[2] = 0;
    auStack_120[5] = 0;
    auStack_120[4] = 0;
    auStack_120[7] = 0;
    auStack_120[6] = 0;
    auStack_120[9] = 0;
    auStack_120[8] = 0;
    auStack_120[0xc] = 0xffffffffffffffff;
    auStack_120[0xb] = 0xffffffffffffffff;
    auStack_120[0xe] = 0xffffffffffffffff;
    auStack_120[0xd] = 0xffffffffffffffff;
    auStack_120[0x10] = 0xffffffffffffffff;
    auStack_120[0xf] = 0xffffffffffffffff;
    auStack_120[0x12] = 0xffffffffffffffff;
    auStack_120[0x11] = 0xffffffffffffffff;
    auStack_120[0x14] = 0xffffffffffffffff;
    auStack_120[0x13] = 0xffffffffffffffff;
    auStack_120[10] = 0;
    auStack_120[0x15] = 0x1fffffffffffffff;
    FUN_006ffee4(auStack_228 + 0xb,param_2);
    lVar12 = 0x577;
    do {
      FUN_00701360(auStack_7b0);
      FUN_00701360(auStack_7b0 + 0xb);
      uVar10 = 0;
      if (-1 < iVar11) {
        uVar10 = -(auStack_228[0x16] & 1);
      }
      uVar3 = 0;
      if (iVar11 != 0) {
        uVar3 = uVar10;
      }
      iVar2 = -iVar11;
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar11;
      }
      iVar11 = iVar2 + 1;
      FUN_006fff18(auStack_120,auStack_228 + 0xb,uVar3);
      func_0x007019f0(auStack_228 + 0xb,auStack_120);
      func_0x007013cc(auStack_228 + 0xb);
      func_0x007013cc(auStack_228 + 0x16);
      FUN_006fff18(auStack_7b0,auStack_d30,uVar3);
      func_0x007019f0(auStack_d30,auStack_7b0);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    for (lVar12 = 0; lVar12 != 0x58; lVar12 = lVar12 + 8) {
      uVar10 = -(auStack_120[0xb] & 1) & *(ulong *)((long)auStack_7b0 + lVar12 + 0x58);
      *(ulong *)((long)auStack_7b0 + lVar12 + 0x58) = uVar10;
      *(ulong *)((long)auStack_7b0 + lVar12) =
           uVar10 & (*(ulong *)((long)auStack_7b0 + lVar12) ^ -(auStack_120[0] & 1));
    }
    FUN_006ffee4(param_2 + 0xb0,auStack_7b0);
    func_0x00700504(puVar4 + 0x368,param_3 + 700);
    for (lVar12 = 0xda0; lVar12 != 0x105d; lVar12 = lVar12 + 1) {
      *(short *)((long)puVar4 + lVar12 * 2) = *(short *)((long)puVar4 + lVar12 * 2) * 3;
    }
    FUN_00700628(puVar4 + 0x368);
    puVar1 = puVar4 + 0x418;
    FUN_00700664(puVar4,puVar1,puVar4 + 0x2b8,puVar4 + 0x368);
    for (lVar12 = 0; lVar12 != 0x57a; lVar12 = lVar12 + 2) {
      *(short *)((long)auStack_7b0 + lVar12) = -*(short *)((long)puVar1 + lVar12);
    }
    uVar7 = 0;
    uVar10 = 0;
    auStack_120[2] = 0;
    auStack_120[1] = 0;
    auStack_120[4] = 0;
    auStack_120[3] = 0;
    auStack_120[6] = 0;
    auStack_120[5] = 0;
    auStack_120[8] = 0;
    auStack_120[7] = 0;
    auStack_120[10] = 0;
    auStack_120[9] = 0;
    auStack_120[0] = 1;
    auStack_d30[1] = 0;
    auStack_d30[0] = 0;
    auStack_d30[3] = 0;
    auStack_d30[2] = 0;
    auStack_d30[5] = 0;
    auStack_d30[4] = 0;
    auStack_d30[7] = 0;
    auStack_d30[6] = 0;
    auStack_d30[9] = 0;
    auStack_d30[8] = 0;
    auStack_228[0xc] = 0xffffffffffffffff;
    auStack_228[0xb] = 0xffffffffffffffff;
    auStack_228[0xe] = 0xffffffffffffffff;
    auStack_228[0xd] = 0xffffffffffffffff;
    auStack_228[0x10] = 0xffffffffffffffff;
    auStack_228[0xf] = 0xffffffffffffffff;
    auStack_228[0x12] = 0xffffffffffffffff;
    auStack_228[0x11] = 0xffffffffffffffff;
    auStack_228[0x14] = 0xffffffffffffffff;
    auStack_228[0x13] = 0xffffffffffffffff;
    auStack_228[0x15] = 0x1fffffffffffffff;
    auStack_d30[10] = 0;
    puVar8 = auStack_228;
    for (lVar12 = 0; lVar12 != 0x57a; lVar12 = lVar12 + 2) {
      uVar10 = uVar10 >> 1 | (ulong)*(ushort *)((long)puVar1 + lVar12) << 0x3f;
      uVar7 = uVar7 + 1;
      puVar9 = puVar8;
      if (uVar7 == 0x40) {
        uVar7 = 0;
        puVar9 = puVar8 + 1;
        *puVar8 = uVar10;
        uVar10 = 0;
      }
      puVar8 = puVar9;
    }
    *puVar8 = uVar10 >> (-(ulong)uVar7 & 0x3f);
    uVar10 = auStack_228[10] >> 0x3c;
    for (lVar12 = 0; lVar12 != 0x58; lVar12 = lVar12 + 8) {
      *(ulong *)((long)auStack_228 + lVar12) =
           *(ulong *)((long)auStack_228 + lVar12) ^ -(uVar10 & 1);
    }
    auStack_228[10] = auStack_228[10] & 0xfffffffffffffff;
    FUN_007012c0(auStack_228,auStack_228);
    iVar11 = 1;
    lVar12 = 0x577;
    do {
      FUN_00701360(auStack_d30);
      uVar10 = 0;
      if (-1 < iVar11) {
        uVar10 = -(auStack_228[0] & 1);
      }
      uVar3 = 0;
      if (iVar11 != 0) {
        uVar3 = uVar10;
      }
      lVar13 = -(auStack_228[0] & 1 & auStack_228[0xb]);
      iVar2 = -iVar11;
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar11;
      }
      iVar11 = iVar2 + 1;
      func_0x00701390(auStack_228 + 0xb,auStack_228,uVar3);
      func_0x00701974(auStack_228,auStack_228 + 0xb,lVar13);
      func_0x007013cc(auStack_228);
      func_0x00701390(auStack_d30,auStack_120,uVar3);
      func_0x00701974(auStack_120,auStack_d30,lVar13);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    puVar1 = puVar4 + 0x4c8;
    puVar8 = auStack_d30;
    FUN_007012c0(auStack_d30,auStack_d30);
    iVar11 = 0;
    uVar10 = auStack_d30[0];
    for (lVar12 = 0; lVar12 != 0x57a; lVar12 = lVar12 + 2) {
      *(ushort *)((long)puVar1 + lVar12) = (ushort)uVar10 & 1;
      iVar11 = iVar11 + 1;
      if (iVar11 == 0x40) {
        iVar11 = 0;
        puVar8 = puVar8 + 1;
        uVar10 = *puVar8;
      }
      else {
        uVar10 = uVar10 >> 1;
      }
    }
    iVar11 = 4;
    do {
      FUN_00700664(puVar4,auStack_d30,auStack_7b0,puVar1);
      auStack_d30[0] = CONCAT62(auStack_d30[0]._2_6_,(short)auStack_d30[0] + 2);
      FUN_00700664(puVar4,puVar1,puVar1,auStack_d30);
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    func_0x007019d8();
    FUN_00700664(puVar4,param_1 + uVar6,param_1 + uVar6,puVar4 + 0x368);
    FUN_007006e0(param_1 + uVar6);
    func_0x007019d8();
    FUN_00700664(puVar4,param_2 + 0x160,param_2 + 0x160,puVar4 + 0x2b8);
    FUN_007006e0(param_2 + 0x160);
    func_0x00701ed0(uStack_d38);
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 007004c4; end: 0070056f;  */

long FUN_007004c4(long *param_1,long param_2)

{
  long lVar1;
  
  param_2 = param_2 + 0x1f;
  FUN_00701e90();
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + ((ulong)(uint)-(int)param_2 & 0x1f);
  }
  *param_1 = param_2;
  return lVar1;
}



/* Entry: 00700570; end: 00700627;  */

void FUN_00700570(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  puVar4 = param_1 + 0xb;
  for (lVar6 = 0; lVar6 != 0x57a; lVar6 = lVar6 + 2) {
    uVar2 = (ulong)(uint)((int)((uint)*(ushort *)(param_2 + lVar6) << 0x13) >> 0x13);
    func_0x007013f8();
    uVar1 = (uint)uVar2 & 2;
    uVar9 = uVar9 >> 1 | (ulong)(uVar1 >> 1) << 0x3f;
    uVar8 = uVar8 >> 1 | uVar2 << 0x3f | (ulong)uVar1 << 0x3e;
    uVar7 = uVar7 + 1;
    puVar3 = param_1;
    puVar5 = puVar4;
    if (uVar7 == 0x40) {
      uVar7 = 0;
      puVar3 = param_1 + 1;
      *param_1 = uVar9;
      puVar5 = puVar4 + 1;
      *puVar4 = uVar8;
      uVar9 = 0;
      uVar8 = 0;
    }
    param_1 = puVar3;
    puVar4 = puVar5;
  }
  *param_1 = uVar9 >> (-(ulong)uVar7 & 0x3f);
  *puVar4 = uVar8 >> (-(ulong)uVar7 & 0x3f);
  return;
}



/* Entry: 00700628; end: 00700663;  */

void FUN_00700628(short *param_1)

{
  short sVar1;
  long lVar2;
  
  sVar1 = param_1[700];
  for (lVar2 = 0; lVar2 != -0x578; lVar2 = lVar2 + -2) {
    *(short *)((long)param_1 + lVar2 + 0x578) =
         *(short *)((long)param_1 + lVar2 + 0x576) - *(short *)((long)param_1 + lVar2 + 0x578);
  }
  *param_1 = sVar1 - *param_1;
  return;
}



/* Entry: 00700664; end: 007006df;  */

void FUN_00700664(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  short *psVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined2 *)(param_3 + 0x57e) = 0;
  *(undefined4 *)(param_3 + 0x57a) = 0;
  *(undefined2 *)(param_4 + 0x57e) = 0;
  *(undefined4 *)(param_4 + 0x57a) = 0;
  FUN_00701424(param_1,param_1 + 0x160,param_3,param_4,0x58);
  for (lVar2 = 0; lVar2 != 0x580; lVar2 = lVar2 + 0x10) {
    uVar5 = param_1[1];
    uVar4 = *param_1;
    auVar3 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0xae),*(undefined1 (*) [16])(param_1 + 0xb0),
                      10,1);
    psVar1 = (short *)(param_2 + lVar2);
    psVar1[4] = auVar3._8_2_ + (short)uVar5;
    psVar1[5] = auVar3._10_2_ + (short)((ulong)uVar5 >> 0x10);
    psVar1[6] = auVar3._12_2_ + (short)((ulong)uVar5 >> 0x20);
    psVar1[7] = auVar3._14_2_ + (short)((ulong)uVar5 >> 0x30);
    *psVar1 = auVar3._0_2_ + (short)uVar4;
    psVar1[1] = auVar3._2_2_ + (short)((ulong)uVar4 >> 0x10);
    psVar1[2] = auVar3._4_2_ + (short)((ulong)uVar4 >> 0x20);
    psVar1[3] = auVar3._6_2_ + (short)((ulong)uVar4 >> 0x30);
    param_1 = param_1 + 2;
  }
  *(undefined2 *)(param_2 + 0x57e) = 0;
  *(undefined4 *)(param_2 + 0x57a) = 0;
  return;
}



/* Entry: 007006e0; end: 00700703;  */

void FUN_007006e0(long param_1)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0x57a; lVar1 = lVar1 + 2) {
    *(ushort *)(param_1 + lVar1) = *(ushort *)(param_1 + lVar1) & 0x1fff;
  }
  return;
}



/* Entry: 00700704; end: 00700883;  */

undefined8 FUN_00700704(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  short *psVar4;
  undefined8 uStack_68;
  
  puVar1 = &uStack_68;
  FUN_007004c4(puVar1,&UNK_00002d50);
  if (puVar1 == (undefined8 *)0x0) {
    _bzero(param_1,0x472);
    func_0x007019e4();
    uVar2 = 0;
  }
  else {
    FUN_00700884(puVar1 + 0x2b8,param_4);
    FUN_00700884(puVar1 + 0x368,param_4 + 700);
    psVar4 = (short *)(puVar1 + 0x418);
    func_0x007008e0(psVar4,puVar1 + 0x2b8);
    FUN_00700664(puVar1,puVar1 + 0x4c8,puVar1 + 0x368,param_3 + ((ulong)(uint)-(int)param_3 & 0xf));
    lVar3 = 0x2bd;
    do {
      psVar4[0x2c0] = psVar4[0x2c0] + *psVar4;
      psVar4 = psVar4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    FUN_00700a0c(param_1,puVar1 + 0x4c8);
    func_0x00700b00(puVar1 + 0x586,puVar1 + 0x2b8);
    func_0x00700b00(&UNK_00002cbc + (long)puVar1,puVar1 + 0x368);
    FUN_006f5b5c(puVar1 + 0x578);
    FUN_006f5b8c(puVar1 + 0x578,&UNK_00838b28,0xb);
    func_0x007019b8(puVar1 + 0x578,puVar1 + 0x586);
    func_0x007019b8(puVar1 + 0x578,&UNK_00002cbc + (long)puVar1);
    FUN_006f5b8c(puVar1 + 0x578,param_1,0x472);
    FUN_006f6774(param_2,puVar1 + 0x578);
    func_0x00701ed0(uStack_68);
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 00700884; end: 00700a0b;  */

void FUN_00700884(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  for (lVar2 = 0; lVar2 != 700; lVar2 = lVar2 + 1) {
    uVar1 = (ulong)*(byte *)(param_2 + lVar2);
    func_0x007013f8();
    *(ushort *)(param_1 + lVar2 * 2) = ((ushort)(uVar1 >> 1) ^ 1) - 1 | (ushort)uVar1;
  }
  *(undefined2 *)(param_1 + 0x578) = 0;
  return;
}



/* Entry: 00700a0c; end: 00700b57;  */

void FUN_00700a0c(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = 0;
  while( true ) {
    puVar1 = (undefined1 *)(param_2 + lVar3);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1] & 0x1f | (char)*(undefined2 *)(puVar1 + 2) << 5;
    param_1[2] = (char)(*(ushort *)(puVar1 + 2) >> 3);
    param_1[3] = (char)*(undefined2 *)(puVar1 + 4) << 2 |
                 (byte)((ushort)*(undefined2 *)(puVar1 + 2) >> 0xb) & 3;
    param_1[4] = (char)*(undefined2 *)(puVar1 + 6) << 7 |
                 (byte)(*(ushort *)(puVar1 + 4) >> 6) & 0x7f;
    param_1[5] = (char)(*(ushort *)(puVar1 + 6) >> 1);
    bVar2 = (byte)((ushort)*(undefined2 *)(puVar1 + 6) >> 8);
    if (lVar3 == 0x570) break;
    param_1[6] = (char)*(undefined2 *)(puVar1 + 8) << 4 | bVar2 >> 1 & 0xf;
    param_1[7] = (char)(*(ushort *)(puVar1 + 8) >> 4);
    param_1[8] = (char)*(undefined2 *)(puVar1 + 10) << 1 |
                 (byte)((ushort)*(undefined2 *)(puVar1 + 8) >> 0xc) & 1;
    param_1[9] = (char)*(undefined2 *)(puVar1 + 0xc) << 6 |
                 (byte)(*(ushort *)(puVar1 + 10) >> 7) & 0x3f;
    param_1[10] = (char)(*(ushort *)(puVar1 + 0xc) >> 2);
    param_1[0xb] = (char)*(undefined2 *)(puVar1 + 0xe) << 3 |
                   (byte)((ushort)*(undefined2 *)(puVar1 + 0xc) >> 10) & 7;
    param_1[0xc] = (char)(*(ushort *)(puVar1 + 0xe) >> 5);
    param_1 = param_1 + 0xd;
    lVar3 = lVar3 + 0x10;
  }
  param_1[6] = bVar2 >> 1 & 0xf;
  return;
}



/* Entry: 00700b58; end: 00701027;  */

long FUN_00700b58(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  short sVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  byte bVar21;
  undefined8 uStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined1 *puStack_390;
  undefined1 *puStack_388;
  ulong *puStack_380;
  ulong *puStack_378;
  undefined1 auStack_370 [32];
  undefined1 auStack_350 [192];
  undefined1 auStack_290 [192];
  ulong auStack_1d0 [46];
  
  auStack_1d0[0x2c] = *(ulong *)PTR____stack_chk_guard_00999f88;
  puVar6 = &uStack_3b8;
  puVar7 = (undefined8 *)&UNK_00003f30;
  FUN_007004c4();
  if (puVar6 == (undefined8 *)0x0) {
    func_0x007019e4();
    lVar9 = 0;
  }
  else {
    param_2 = param_2 + ((ulong)(uint)-(int)param_2 & 0xf);
    for (lVar9 = 0; lVar9 != 0x20; lVar9 = lVar9 + 1) {
      *(byte *)((long)puVar6 +
               (long)("/System/Library/Frameworks/SwiftUI.framework/SwiftUI" + lVar9)) =
           *(byte *)(param_2 + 0x6e0 + lVar9) ^ 0x36;
    }
    puVar6[0x2bf] = 0x3636363636363636;
    puVar6[0x2be] = 0x3636363636363636;
    puVar6[0x2bd] = 0x3636363636363636;
    puVar6[700] = 0x3636363636363636;
    func_0x007019d0();
    func_0x007019c0();
    FUN_006f5b8c(puVar6 + 0x2c0,param_3,param_4);
    FUN_006f6774(auStack_370,puVar6 + 0x2c0);
    for (lVar9 = 0; lVar9 != 0x20; lVar9 = lVar9 + 1) {
      *(byte *)((long)puVar6 +
               (long)("/System/Library/Frameworks/SwiftUI.framework/SwiftUI" + lVar9)) =
           *(byte *)((long)puVar6 +
                    (long)("/System/Library/Frameworks/SwiftUI.framework/SwiftUI" + lVar9)) ^ 0x6a;
    }
    puVar6[0x2bd] = 0x5c5c5c5c5c5c5c5c;
    puVar6[700] = 0x5c5c5c5c5c5c5c5c;
    puVar6[0x2bf] = 0x5c5c5c5c5c5c5c5c;
    puVar6[0x2be] = 0x5c5c5c5c5c5c5c5c;
    func_0x007019d0();
    func_0x007019c0();
    FUN_006f5b8c(puVar6 + 0x2c0,auStack_370,0x20);
    puVar7 = puVar6 + 0x2c0;
    FUN_006f6774(param_1);
    if (param_4 == 0x472) {
      iVar5 = (int)puVar6 + 0x1670;
      puVar7 = param_3;
      FUN_00701028();
      if (iVar5 != 0) {
        func_0x00701168(puVar6 + 0x37e,param_2);
        FUN_00700664(puVar6,puVar6 + 0x42e,puVar6 + 0x2ce,puVar6 + 0x37e);
        FUN_00700570(puVar6 + 0x4de,puVar6 + 0x42e);
        puStack_380 = auStack_1d0 + 0x16;
        puStack_378 = auStack_1d0;
        lStack_3b0 = param_2 + 0xb0;
        puStack_390 = auStack_290;
        puStack_388 = auStack_350;
        puStack_398 = puVar6 + 0x4e9;
        lStack_3a8 = param_2 + 0x108;
        puStack_3a0 = puVar6 + 0x4de;
        FUN_006ffc54(&puStack_380,&puStack_390,&puStack_3a0,&lStack_3b0,0xb);
        lVar9 = -0x58;
        do {
          uVar16 = *(ulong *)((long)auStack_1d0 + lVar9 + 0x158) >> 0x3d |
                   *(long *)((long)auStack_1d0 + lVar9 + 0x160) << 3;
          uVar20 = *(ulong *)((long)auStack_1d0 + lVar9 + 0xa8) >> 0x3d |
                   *(long *)((long)auStack_1d0 + lVar9 + 0xb0) << 3;
          uVar17 = *(ulong *)((long)auStack_1d0 + lVar9 + 0x58);
          uVar13 = uVar20 ^ *(ulong *)((long)auStack_1d0 + lVar9 + 0x108);
          *(ulong *)(&UNK_000027f8 + (long)puVar6 + lVar9) = (uVar17 ^ uVar16) & uVar13;
          *(ulong *)(&UNK_00002850 + (long)puVar6 + lVar9) = uVar13 ^ uVar16 | uVar17 ^ uVar20;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
        uVar13 = puVar6[0x4fe];
        uVar16 = -((ulong)puVar6[0x509] >> 0x3c & 1);
        lVar9 = -0x58;
        do {
          lVar14 = (long)puVar6 + lVar9;
          uVar17 = *(ulong *)(&UNK_000027f8 + lVar14);
          *(ulong *)(&UNK_000027f8 + lVar14) =
               (uVar16 ^ (long)(uVar13 << 3) >> 0x3f ^ *(ulong *)(&UNK_00002850 + lVar14)) &
               (uVar17 ^ uVar16);
          *(ulong *)(&UNK_00002850 + lVar14) =
               *(ulong *)(&UNK_00002850 + lVar14) ^ uVar16 | uVar17 ^ -(uVar13 >> 0x3c & 1);
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
        puVar6[0x4fe] = puVar6[0x4fe] & 0x1fffffffffffffff;
        puVar6[0x509] = puVar6[0x509] & 0x1fffffffffffffff;
        func_0x00701168(puVar6 + 0x50a,puVar6 + 0x4f4);
        func_0x007008e0(puVar6 + 0x5ba,puVar6 + 0x50a);
        puVar7 = puVar6 + 0x66a;
        for (lVar9 = 0; lVar9 != 0x57a; lVar9 = lVar9 + 2) {
          *(short *)((char *)((long)puVar6 +
                             (long)("/System/Library/Frameworks/Accelerate.framework/Accelerate" +
                                   lVar9 + 0x10)) + -8 + (long)&dylib_command_00001ce0.dylib.name) =
               *(short *)((long)puVar6 +
                         (long)("/System/Library/Frameworks/Accelerate.framework/Accelerate" +
                               lVar9 + 0x10)) -
               *(short *)("/System/Library/Frameworks/WidgetKit.framework/WidgetKit" +
                         (long)puVar6 +
                         (long)("/System/Library/Frameworks/Accelerate.framework/Accelerate" +
                               lVar9 + 0x10));
        }
        FUN_00700664(puVar6,puVar7,puVar7,param_2 + 0x160);
        sVar8 = *(short *)(puVar6 + 0x719);
        for (lVar9 = 0; lVar9 != 0x57a; lVar9 = lVar9 + 2) {
          *(short *)((long)puVar7 + lVar9) = *(short *)((long)puVar7 + lVar9) - sVar8;
        }
        FUN_007006e0(puVar7);
        uVar15 = 0;
        uVar16 = 0;
        uVar13 = 0;
        bVar21 = 0xff;
        puVar10 = puVar6 + 0x71a;
        puVar18 = puVar6 + 0x725;
        for (lVar9 = 0; lVar9 != 0x57a; lVar9 = lVar9 + 2) {
          uVar4 = *(ushort *)((long)puVar7 + lVar9);
          uVar2 = uVar4 & 2;
          uVar3 = uVar4 & 3 ^ uVar2 >> 1;
          if ((uint)uVar4 != (uVar3 | -(uVar2 >> 1) & 0x1fff)) {
            bVar21 = 0;
          }
          uVar13 = uVar13 >> 1 | (ulong)(uVar2 >> 1) << 0x3f;
          uVar16 = uVar16 >> 1 | (ulong)uVar3 << 0x3f | (ulong)uVar2 << 0x3e;
          uVar15 = uVar15 + 1;
          puVar11 = puVar10;
          puVar19 = puVar18;
          if (uVar15 == 0x40) {
            uVar15 = 0;
            puVar11 = puVar10 + 1;
            *puVar10 = uVar13;
            puVar19 = puVar18 + 1;
            *puVar18 = uVar16;
            uVar16 = 0;
            uVar13 = 0;
          }
          puVar10 = puVar11;
          puVar18 = puVar19;
        }
        *puVar10 = uVar13 >> (-(ulong)uVar15 & 0x3f);
        *puVar18 = uVar16 >> (-(ulong)uVar15 & 0x3f);
        FUN_00700a0c(puVar6 + 0x730,puVar6 + 0x2ce);
        func_0x00700b00(&UNK_00003df2 + (long)puVar6,puVar6 + 0x50a);
        func_0x00700b00(&UNK_00003e7e + (long)puVar6,puVar7);
        FUN_00701f80(param_3,puVar6 + 0x730,0x472);
        func_0x007019d0();
        FUN_006f5b8c(puVar6 + 0x2c0,&UNK_00838b28,0xb);
        func_0x007019b8(puVar6 + 0x2c0,&UNK_00003df2 + (long)puVar6);
        func_0x007019b8(puVar6 + 0x2c0,&UNK_00003e7e + (long)puVar6);
        FUN_006f5b8c(puVar6 + 0x2c0,puVar6 + 0x730,0x472);
        puVar7 = puVar6 + 0x2c0;
        FUN_006f6774(&UNK_00003f0a + (long)puVar6);
        lVar9 = 0;
        if ((int)param_3 != 0) {
          bVar21 = 0;
        }
        for (; lVar9 != 0x20; lVar9 = lVar9 + 1) {
          *(byte *)(param_1 + lVar9) =
               *(byte *)(param_1 + lVar9) & ~bVar21 | (&UNK_00003f0a + (long)puVar6)[lVar9] & bVar21
          ;
        }
      }
    }
    func_0x00701ed0(uStack_3b8);
    lVar9 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != auStack_1d0[0x2c]) {
    ___stack_chk_fail();
    lVar14 = 0;
    pbVar12 = (byte *)((long)puVar7 + 6);
    while( true ) {
      puVar1 = (ushort *)(lVar9 + lVar14);
      *puVar1 = (ushort)pbVar12[-6] | (pbVar12[-5] & 0x1f) << 8;
      puVar1[1] = (ushort)(pbVar12[-5] >> 5) | (ushort)pbVar12[-4] << 3 | (pbVar12[-3] & 3) << 0xb;
      puVar1[2] = (ushort)(pbVar12[-3] >> 2) | (pbVar12[-2] & 0x7f) << 6;
      puVar1[3] = (ushort)(pbVar12[-2] >> 7) | (ushort)pbVar12[-1] << 1 | (*pbVar12 & 0xf) << 9;
      if (lVar14 == 0x570) break;
      puVar1[4] = (ushort)(*pbVar12 >> 4) | (ushort)pbVar12[1] << 4 | (pbVar12[2] & 1) << 0xc;
      puVar1[5] = (ushort)(pbVar12[2] >> 1) | (pbVar12[3] & 0x3f) << 7;
      puVar1[6] = (ushort)(pbVar12[3] >> 6) | (ushort)pbVar12[4] << 2 | (pbVar12[5] & 7) << 10;
      puVar1[7] = (ushort)(pbVar12[5] >> 3) | (ushort)pbVar12[6] << 5;
      lVar14 = lVar14 + 0x10;
      pbVar12 = pbVar12 + 0xd;
    }
    for (lVar14 = 0; lVar14 != 0x578; lVar14 = lVar14 + 2) {
      *(short *)(lVar9 + lVar14) = (short)((int)((uint)*(ushort *)(lVar9 + lVar14) << 0x13) >> 0x13)
      ;
    }
    if (0xf < *pbVar12) {
      return 0;
    }
    sVar8 = 0;
    for (lVar14 = 0; lVar14 != 0x578; lVar14 = lVar14 + 2) {
      sVar8 = sVar8 + *(short *)(lVar9 + lVar14);
    }
    *(short *)(lVar9 + 0x578) = -sVar8;
    return 1;
  }
  return lVar9;
}



/* Entry: 00701028; end: 007011df;  */

undefined8 FUN_00701028(long param_1,long param_2)

{
  ushort *puVar1;
  short sVar2;
  byte *pbVar3;
  long lVar4;
  
  lVar4 = 0;
  pbVar3 = (byte *)(param_2 + 6);
  while( true ) {
    puVar1 = (ushort *)(param_1 + lVar4);
    *puVar1 = (ushort)pbVar3[-6] | (pbVar3[-5] & 0x1f) << 8;
    puVar1[1] = (ushort)(pbVar3[-5] >> 5) | (ushort)pbVar3[-4] << 3 | (pbVar3[-3] & 3) << 0xb;
    puVar1[2] = (ushort)(pbVar3[-3] >> 2) | (pbVar3[-2] & 0x7f) << 6;
    puVar1[3] = (ushort)(pbVar3[-2] >> 7) | (ushort)pbVar3[-1] << 1 | (*pbVar3 & 0xf) << 9;
    if (lVar4 == 0x570) break;
    puVar1[4] = (ushort)(*pbVar3 >> 4) | (ushort)pbVar3[1] << 4 | (pbVar3[2] & 1) << 0xc;
    puVar1[5] = (ushort)(pbVar3[2] >> 1) | (pbVar3[3] & 0x3f) << 7;
    puVar1[6] = (ushort)(pbVar3[3] >> 6) | (ushort)pbVar3[4] << 2 | (pbVar3[5] & 7) << 10;
    puVar1[7] = (ushort)(pbVar3[5] >> 3) | (ushort)pbVar3[6] << 5;
    lVar4 = lVar4 + 0x10;
    pbVar3 = pbVar3 + 0xd;
  }
  for (lVar4 = 0; lVar4 != 0x578; lVar4 = lVar4 + 2) {
    *(short *)(param_1 + lVar4) = (short)((int)((uint)*(ushort *)(param_1 + lVar4) << 0x13) >> 0x13)
    ;
  }
  if (*pbVar3 < 0x10) {
    sVar2 = 0;
    for (lVar4 = 0; lVar4 != 0x578; lVar4 = lVar4 + 2) {
      sVar2 = sVar2 + *(short *)(param_1 + lVar4);
    }
    *(short *)(param_1 + 0x578) = -sVar2;
    return 1;
  }
  return 0;
}



/* Entry: 007011e0; end: 0070121f;  */

void FUN_007011e0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + ((ulong)(uint)-(int)param_1 & 0xf);
  lVar1 = param_1;
  FUN_00701028();
  if ((int)lVar1 != 0) {
    *(undefined2 *)(param_1 + 0x57e) = 0;
    *(undefined4 *)(param_1 + 0x57a) = 0;
  }
  return;
}



/* Entry: 00701220; end: 007012bf;  */

void FUN_00701220(long param_1,long param_2,long *param_3,long *param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  for (lVar1 = 0; param_5 != lVar1; lVar1 = lVar1 + 1) {
    uVar3 = *(ulong *)(param_3[1] + lVar1 * 8);
    uVar4 = *(ulong *)(*param_4 + lVar1 * 8);
    uVar5 = *(ulong *)(param_4[1] + lVar1 * 8);
    uVar2 = uVar5 ^ *(ulong *)(*param_3 + lVar1 * 8);
    *(ulong *)(param_1 + lVar1 * 8) = uVar2 & (uVar4 ^ uVar3);
    *(ulong *)(param_2 + lVar1 * 8) = uVar2 ^ uVar4 | uVar5 ^ uVar3;
  }
  return;
}



/* Entry: 007012c0; end: 0070135f;  */

void FUN_007012c0(ulong *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong auStack_58 [11];
  
  for (lVar1 = 0; lVar1 != 0xb; lVar1 = lVar1 + 1) {
    uVar4 = *(ulong *)(param_2 + lVar1 * 8);
    for (lVar3 = 0; lVar3 != 6; lVar3 = lVar3 + 1) {
      uVar5 = (ulong)(uint)(1 << (ulong)((uint)lVar3 & 0x1f));
      uVar4 = (*(ulong *)(&UNK_00838b38 + lVar3 * 8) & uVar4) << (uVar5 & 0x3f) |
              *(ulong *)(&UNK_00838b38 + lVar3 * 8) & uVar4 >> (uVar5 & 0x3f);
    }
    auStack_58[lVar1] = uVar4;
  }
  puVar2 = param_1;
  for (lVar1 = 0; lVar1 != -0x50; lVar1 = lVar1 + -8) {
    *puVar2 = *(ulong *)((long)auStack_58 + lVar1 + 0x50) >> 4 |
              *(long *)((long)auStack_58 + lVar1 + 0x48) << 0x3c;
    puVar2 = puVar2 + 1;
  }
  param_1[10] = auStack_58[0] >> 4;
  return;
}



/* Entry: 00701360; end: 00701423;  */

void FUN_00701360(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  for (lVar1 = 0; lVar1 != 0x58; lVar1 = lVar1 + 8) {
    uVar3 = uVar2 | *(ulong *)(param_1 + lVar1) << 1;
    uVar2 = *(ulong *)(param_1 + lVar1) >> 0x3f;
    *(ulong *)(param_1 + lVar1) = uVar3;
  }
  return;
}



/* Entry: 00701424; end: 00701973;  */

void FUN_00701424(short *param_1,short *param_2,undefined1 (*param_3) [16],undefined8 *param_4,
                 ulong param_5)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  short sVar32;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  undefined1 auVar33 [16];
  short sVar41;
  undefined1 auVar34 [16];
  short sVar42;
  short sVar44;
  short sVar45;
  undefined8 uVar43;
  short sVar46;
  short sVar47;
  short sVar49;
  short sVar50;
  undefined8 uVar48;
  short sVar51;
  short sVar52;
  short sVar54;
  short sVar55;
  undefined8 uVar53;
  short sVar56;
  short sVar57;
  short sVar59;
  short sVar60;
  undefined8 uVar58;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar72;
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  undefined1 auVar71 [16];
  short sVar78;
  short sVar79;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  undefined1 auVar80 [16];
  short sVar87;
  short sVar88;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  undefined1 auVar89 [16];
  short sVar96;
  short sVar97;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  undefined1 auVar98 [16];
  short sVar105;
  short sVar106;
  short sVar108;
  short sVar109;
  short sVar110;
  short sVar111;
  short sVar112;
  short sVar113;
  undefined1 auVar107 [16];
  short sVar114;
  short sVar115;
  short sVar116;
  short sVar117;
  short sVar118;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  short sVar123;
  short sVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  short sVar128;
  short sVar129;
  short sVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  short sVar134;
  short sVar135;
  short sVar136;
  short sVar137;
  short sVar138;
  short sVar139;
  short sVar140;
  short sVar142;
  short sVar143;
  short sVar144;
  short sVar145;
  short sVar146;
  short sVar147;
  short sVar148;
  short sVar149;
  short sVar150;
  short sVar151;
  short sVar152;
  short sVar153;
  undefined1 auVar141 [16];
  short sVar154;
  short sVar155;
  short sVar156;
  short sVar158;
  short sVar159;
  short sVar160;
  short sVar161;
  short sVar162;
  short sVar163;
  undefined1 auVar157 [16];
  short sVar164;
  short sVar165;
  short sVar167;
  short sVar168;
  short sVar169;
  short sVar170;
  short sVar171;
  short sVar172;
  undefined1 auVar166 [16];
  short sVar173;
  short sVar174;
  short sVar176;
  short sVar177;
  short sVar178;
  short sVar179;
  short sVar180;
  short sVar181;
  undefined1 auVar175 [16];
  short sVar182;
  short sVar183;
  short sVar185;
  short sVar186;
  short sVar187;
  short sVar188;
  short sVar189;
  short sVar190;
  undefined1 auVar184 [16];
  short sVar191;
  short sVar192;
  short sVar194;
  short sVar195;
  short sVar196;
  short sVar197;
  short sVar198;
  short sVar199;
  undefined1 auVar193 [16];
  short sVar200;
  short sVar201;
  short sVar203;
  short sVar204;
  short sVar205;
  short sVar206;
  short sVar207;
  short sVar208;
  undefined1 auVar202 [16];
  short sVar209;
  undefined1 auVar210 [16];
  short sVar211;
  short sVar212;
  short sVar213;
  short sVar214;
  short sVar215;
  short sVar216;
  short sVar217;
  short sVar218;
  short sVar219;
  short sVar221;
  short sVar222;
  short sVar223;
  short sVar224;
  short sVar225;
  short sVar226;
  undefined1 auVar220 [16];
  short sVar227;
  short sVar228;
  short sVar230;
  short sVar231;
  short sVar232;
  short sVar233;
  short sVar234;
  short sVar235;
  undefined1 auVar229 [16];
  short sVar236;
  short sVar237;
  short sVar239;
  short sVar240;
  short sVar241;
  short sVar242;
  short sVar243;
  short sVar244;
  undefined1 auVar238 [16];
  short sVar245;
  short sVar246;
  short sVar248;
  short sVar249;
  short sVar250;
  short sVar251;
  short sVar252;
  short sVar253;
  undefined1 auVar247 [16];
  short sVar254;
  short sVar255;
  short sVar257;
  short sVar258;
  short sVar259;
  short sVar260;
  short sVar261;
  short sVar262;
  undefined1 auVar256 [16];
  short sVar263;
  short sVar264;
  short sVar266;
  short sVar267;
  short sVar268;
  short sVar269;
  short sVar270;
  short sVar271;
  undefined1 auVar265 [16];
  short sVar272;
  short sVar273;
  short sVar275;
  short sVar276;
  short sVar277;
  short sVar278;
  short sVar279;
  short sVar280;
  undefined1 auVar274 [16];
  short sVar281;
  short sStack_e0;
  short sStack_de;
  short sStack_dc;
  short sStack_da;
  short sStack_d8;
  short sStack_d6;
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short sStack_cc;
  short sStack_ca;
  short sStack_c8;
  short sStack_c6;
  short sStack_c4;
  short sStack_c2;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  short sStack_ba;
  short sStack_b8;
  short sStack_b6;
  short sStack_b4;
  short sStack_b2;
  
  if (param_5 == 3) {
    auVar71 = *param_3;
    auVar33 = param_3[1];
    auVar80 = param_3[2];
    uVar30 = param_4[1];
    sVar66 = (short)uVar30;
    sVar67 = (short)((ulong)uVar30 >> 0x10);
    sVar68 = (short)((ulong)uVar30 >> 0x20);
    sVar69 = (short)((ulong)uVar30 >> 0x30);
    uVar30 = *param_4;
    sVar62 = (short)uVar30;
    sVar63 = (short)((ulong)uVar30 >> 0x10);
    sVar64 = (short)((ulong)uVar30 >> 0x20);
    sVar65 = (short)((ulong)uVar30 >> 0x30);
    uVar31 = param_4[3];
    uVar30 = param_4[2];
    sVar219 = auVar71._0_2_;
    sVar221 = auVar71._2_2_;
    sVar222 = auVar71._4_2_;
    sVar223 = auVar71._6_2_;
    sVar224 = auVar71._8_2_;
    sVar225 = auVar71._10_2_;
    sVar226 = auVar71._12_2_;
    sVar227 = auVar71._14_2_;
    sVar192 = auVar33._0_2_;
    sVar194 = auVar33._2_2_;
    sVar195 = auVar33._4_2_;
    sVar196 = auVar33._6_2_;
    sVar197 = auVar33._8_2_;
    sVar198 = auVar33._10_2_;
    sVar199 = auVar33._12_2_;
    sVar200 = auVar33._14_2_;
    sVar183 = auVar80._0_2_;
    sVar185 = auVar80._2_2_;
    sVar186 = auVar80._4_2_;
    sVar187 = auVar80._6_2_;
    sVar188 = auVar80._8_2_;
    sVar189 = auVar80._10_2_;
    sVar190 = auVar80._12_2_;
    sVar191 = auVar80._14_2_;
    uVar58 = param_4[5];
    uVar53 = param_4[4];
    auVar98 = NEON_ext(auVar80,ZEXT216(0),0xe,1);
    auVar89 = NEON_ext(auVar33,auVar80,0xe,1);
    auVar107 = NEON_ext(auVar71,auVar33,0xe,1);
    auVar141 = NEON_ext(ZEXT216(0),auVar71,0xe,1);
    sVar255 = auVar141._0_2_;
    sVar257 = auVar141._2_2_;
    sVar258 = auVar141._4_2_;
    sVar259 = auVar141._6_2_;
    sVar260 = auVar141._8_2_;
    sVar261 = auVar141._10_2_;
    sVar262 = auVar141._12_2_;
    sVar263 = auVar141._14_2_;
    sVar32 = auVar98._0_2_;
    sVar35 = auVar98._2_2_;
    sVar36 = auVar98._4_2_;
    sVar37 = auVar98._6_2_;
    sVar38 = auVar98._8_2_;
    sVar39 = auVar98._10_2_;
    sVar40 = auVar98._12_2_;
    sVar41 = auVar98._14_2_;
    sVar44 = (short)((ulong)uVar30 >> 0x10);
    sVar54 = (short)((ulong)uVar53 >> 0x10);
    auVar98 = NEON_ext(auVar80,ZEXT216(0),0xc,1);
    auVar34 = NEON_ext(auVar33,auVar80,0xc,1);
    auVar166 = NEON_ext(auVar71,auVar33,0xc,1);
    auVar157 = NEON_ext(ZEXT216(0),auVar141,0xe,1);
    sVar264 = auVar157._0_2_;
    sVar266 = auVar157._2_2_;
    sVar267 = auVar157._4_2_;
    sVar268 = auVar157._6_2_;
    sVar269 = auVar157._8_2_;
    sVar270 = auVar157._10_2_;
    sVar271 = auVar157._12_2_;
    sVar272 = auVar157._14_2_;
    auVar71 = NEON_ext(auVar80,ZEXT216(0),10,1);
    auVar141 = NEON_ext(auVar33,auVar80,10,1);
    auVar175 = NEON_ext(auVar157,auVar166,0xe,1);
    auVar33 = NEON_ext(ZEXT216(0),auVar157,0xe,1);
    sVar106 = auVar33._0_2_;
    sVar108 = auVar33._2_2_;
    sVar109 = auVar33._4_2_;
    sVar110 = auVar33._6_2_;
    sVar111 = auVar33._8_2_;
    sVar112 = auVar33._10_2_;
    sVar113 = auVar33._12_2_;
    sVar114 = auVar33._14_2_;
    auVar184 = NEON_ext(auVar80,ZEXT216(0),8,1);
    auVar193 = NEON_ext(auVar157,auVar166,0xc,1);
    auVar80 = NEON_ext(ZEXT216(0),auVar33,0xe,1);
    sVar115 = auVar80._0_2_;
    sVar116 = auVar80._2_2_;
    sVar117 = auVar80._4_2_;
    sVar118 = auVar80._6_2_;
    sVar119 = auVar80._8_2_;
    sVar120 = auVar80._10_2_;
    sVar121 = auVar80._12_2_;
    sVar122 = auVar80._14_2_;
    auVar33 = NEON_ext(auVar80,auVar193,0xe,1);
    auVar157 = NEON_ext(ZEXT216(0),auVar80,0xe,1);
    sVar123 = auVar157._0_2_;
    sVar124 = auVar157._2_2_;
    sVar125 = auVar157._4_2_;
    sVar126 = auVar157._6_2_;
    sVar127 = auVar157._8_2_;
    sVar128 = auVar157._10_2_;
    sVar129 = auVar157._12_2_;
    sVar130 = auVar157._14_2_;
    auVar202 = NEON_ext(auVar80,auVar193,0xc,1);
    auVar80 = NEON_ext(ZEXT216(0),auVar157,0xe,1);
    sVar131 = auVar80._0_2_;
    sVar132 = auVar80._2_2_;
    sVar133 = auVar80._4_2_;
    sVar134 = auVar80._6_2_;
    sVar135 = auVar80._8_2_;
    sVar136 = auVar80._10_2_;
    sVar137 = auVar80._12_2_;
    sVar138 = auVar80._14_2_;
    auVar157 = NEON_ext(auVar80,auVar202,0xe,1);
    auVar80 = NEON_ext(ZEXT216(0),auVar80,0xe,1);
    sVar246 = auVar80._0_2_;
    sVar248 = auVar80._2_2_;
    sVar249 = auVar80._4_2_;
    sVar250 = auVar80._6_2_;
    sVar251 = auVar80._8_2_;
    sVar252 = auVar80._10_2_;
    sVar253 = auVar80._12_2_;
    sVar254 = auVar80._14_2_;
    sVar70 = auVar107._0_2_;
    sVar72 = auVar107._2_2_;
    sVar73 = auVar107._4_2_;
    sVar74 = auVar107._6_2_;
    sVar75 = auVar107._8_2_;
    sVar76 = auVar107._10_2_;
    sVar77 = auVar107._12_2_;
    sVar78 = auVar107._14_2_;
    sVar211 = auVar166._0_2_;
    sVar212 = auVar166._2_2_;
    sVar213 = auVar166._4_2_;
    sVar214 = auVar166._6_2_;
    sVar215 = auVar166._8_2_;
    sVar216 = auVar166._10_2_;
    sVar217 = auVar166._12_2_;
    sVar218 = auVar166._14_2_;
    sVar228 = auVar175._0_2_;
    sVar230 = auVar175._2_2_;
    sVar231 = auVar175._4_2_;
    sVar232 = auVar175._6_2_;
    sVar233 = auVar175._8_2_;
    sVar234 = auVar175._10_2_;
    sVar235 = auVar175._12_2_;
    sVar236 = auVar175._14_2_;
    sVar42 = (short)uVar30;
    sVar45 = (short)((ulong)uVar30 >> 0x20);
    sVar46 = (short)((ulong)uVar30 >> 0x30);
    sVar237 = auVar193._0_2_;
    sVar239 = auVar193._2_2_;
    sVar240 = auVar193._4_2_;
    sVar241 = auVar193._6_2_;
    sVar242 = auVar193._8_2_;
    sVar243 = auVar193._10_2_;
    sVar244 = auVar193._12_2_;
    sVar245 = auVar193._14_2_;
    sVar47 = (short)uVar31;
    sVar49 = (short)((ulong)uVar31 >> 0x10);
    sVar22 = auVar33._0_2_;
    sVar23 = auVar33._2_2_;
    sVar24 = auVar33._4_2_;
    sVar25 = auVar33._6_2_;
    sVar26 = auVar33._8_2_;
    sVar27 = auVar33._10_2_;
    sVar28 = auVar33._12_2_;
    sVar29 = auVar33._14_2_;
    sVar50 = (short)((ulong)uVar31 >> 0x20);
    sVar273 = auVar202._0_2_;
    sVar275 = auVar202._2_2_;
    sVar276 = auVar202._4_2_;
    sVar277 = auVar202._6_2_;
    sVar278 = auVar202._8_2_;
    sVar279 = auVar202._10_2_;
    sVar280 = auVar202._12_2_;
    sVar281 = auVar202._14_2_;
    sVar51 = (short)((ulong)uVar31 >> 0x30);
    sVar139 = auVar157._0_2_;
    sVar142 = auVar157._2_2_;
    sVar144 = auVar157._4_2_;
    sVar146 = auVar157._6_2_;
    sVar148 = auVar157._8_2_;
    sVar150 = auVar157._10_2_;
    sVar152 = auVar157._12_2_;
    sVar154 = auVar157._14_2_;
    param_1[4] = sVar224 * sVar62 + sVar260 * sVar63 + sVar269 * sVar64 + sVar111 * sVar65 +
                 sVar119 * sVar66 + sVar127 * sVar67 + sVar135 * sVar68 + sVar251 * sVar69;
    param_1[5] = sVar225 * sVar62 + sVar261 * sVar63 + sVar270 * sVar64 + sVar112 * sVar65 +
                 sVar120 * sVar66 + sVar128 * sVar67 + sVar136 * sVar68 + sVar252 * sVar69;
    param_1[6] = sVar226 * sVar62 + sVar262 * sVar63 + sVar271 * sVar64 + sVar113 * sVar65 +
                 sVar121 * sVar66 + sVar129 * sVar67 + sVar137 * sVar68 + sVar253 * sVar69;
    param_1[7] = sVar227 * sVar62 + sVar263 * sVar63 + sVar272 * sVar64 + sVar114 * sVar65 +
                 sVar122 * sVar66 + sVar130 * sVar67 + sVar138 * sVar68 + sVar254 * sVar69;
    *param_1 = sVar219 * sVar62 + sVar255 * sVar63 + sVar264 * sVar64 + sVar106 * sVar65 +
               sVar115 * sVar66 + sVar123 * sVar67 + sVar131 * sVar68 + sVar246 * sVar69;
    param_1[1] = sVar221 * sVar62 + sVar257 * sVar63 + sVar266 * sVar64 + sVar108 * sVar65 +
                 sVar116 * sVar66 + sVar124 * sVar67 + sVar132 * sVar68 + sVar248 * sVar69;
    param_1[2] = sVar222 * sVar62 + sVar258 * sVar63 + sVar267 * sVar64 + sVar109 * sVar65 +
                 sVar117 * sVar66 + sVar125 * sVar67 + sVar133 * sVar68 + sVar249 * sVar69;
    param_1[3] = sVar223 * sVar62 + sVar259 * sVar63 + sVar268 * sVar64 + sVar110 * sVar65 +
                 sVar118 * sVar66 + sVar126 * sVar67 + sVar134 * sVar68 + sVar250 * sVar69;
    param_1[0xc] = sVar197 * sVar62 + sVar75 * sVar63 + sVar215 * sVar64 + sVar233 * sVar65 +
                   sVar224 * sVar42 + sVar260 * sVar44 + sVar269 * sVar45 + sVar111 * sVar46 +
                   sVar242 * sVar66 + sVar119 * sVar47 + sVar127 * sVar49 + sVar26 * sVar67 +
                   sVar135 * sVar50 + sVar278 * sVar68 + sVar251 * sVar51 + sVar148 * sVar69;
    param_1[0xd] = sVar198 * sVar62 + sVar76 * sVar63 + sVar216 * sVar64 + sVar234 * sVar65 +
                   sVar225 * sVar42 + sVar261 * sVar44 + sVar270 * sVar45 + sVar112 * sVar46 +
                   sVar243 * sVar66 + sVar120 * sVar47 + sVar128 * sVar49 + sVar27 * sVar67 +
                   sVar136 * sVar50 + sVar279 * sVar68 + sVar252 * sVar51 + sVar150 * sVar69;
    param_1[0xe] = sVar199 * sVar62 + sVar77 * sVar63 + sVar217 * sVar64 + sVar235 * sVar65 +
                   sVar226 * sVar42 + sVar262 * sVar44 + sVar271 * sVar45 + sVar113 * sVar46 +
                   sVar244 * sVar66 + sVar121 * sVar47 + sVar129 * sVar49 + sVar28 * sVar67 +
                   sVar137 * sVar50 + sVar280 * sVar68 + sVar253 * sVar51 + sVar152 * sVar69;
    param_1[0xf] = sVar200 * sVar62 + sVar78 * sVar63 + sVar218 * sVar64 + sVar236 * sVar65 +
                   sVar227 * sVar42 + sVar263 * sVar44 + sVar272 * sVar45 + sVar114 * sVar46 +
                   sVar245 * sVar66 + sVar122 * sVar47 + sVar130 * sVar49 + sVar29 * sVar67 +
                   sVar138 * sVar50 + sVar281 * sVar68 + sVar254 * sVar51 + sVar154 * sVar69;
    param_1[8] = sVar192 * sVar62 + sVar70 * sVar63 + sVar211 * sVar64 + sVar228 * sVar65 +
                 sVar219 * sVar42 + sVar255 * sVar44 + sVar264 * sVar45 + sVar106 * sVar46 +
                 sVar237 * sVar66 + sVar115 * sVar47 + sVar123 * sVar49 + sVar22 * sVar67 +
                 sVar131 * sVar50 + sVar273 * sVar68 + sVar246 * sVar51 + sVar139 * sVar69;
    param_1[9] = sVar194 * sVar62 + sVar72 * sVar63 + sVar212 * sVar64 + sVar230 * sVar65 +
                 sVar221 * sVar42 + sVar257 * sVar44 + sVar266 * sVar45 + sVar108 * sVar46 +
                 sVar239 * sVar66 + sVar116 * sVar47 + sVar124 * sVar49 + sVar23 * sVar67 +
                 sVar132 * sVar50 + sVar275 * sVar68 + sVar248 * sVar51 + sVar142 * sVar69;
    param_1[10] = sVar195 * sVar62 + sVar73 * sVar63 + sVar213 * sVar64 + sVar231 * sVar65 +
                  sVar222 * sVar42 + sVar258 * sVar44 + sVar267 * sVar45 + sVar109 * sVar46 +
                  sVar240 * sVar66 + sVar117 * sVar47 + sVar125 * sVar49 + sVar24 * sVar67 +
                  sVar133 * sVar50 + sVar276 * sVar68 + sVar249 * sVar51 + sVar144 * sVar69;
    param_1[0xb] = sVar196 * sVar62 + sVar74 * sVar63 + sVar214 * sVar64 + sVar232 * sVar65 +
                   sVar223 * sVar42 + sVar259 * sVar44 + sVar268 * sVar45 + sVar110 * sVar46 +
                   sVar241 * sVar66 + sVar118 * sVar47 + sVar126 * sVar49 + sVar25 * sVar67 +
                   sVar134 * sVar50 + sVar277 * sVar68 + sVar250 * sVar51 + sVar146 * sVar69;
    auVar80 = NEON_ext(auVar175,auVar141,0xe,1);
    auVar166 = NEON_ext(auVar80,auVar184,0xe,1);
    auVar175 = NEON_ext(auVar193,auVar80,0xe,1);
    auVar107 = NEON_ext(auVar80,auVar184,0xc,1);
    auVar157 = NEON_ext(auVar193,auVar80,0xc,1);
    auVar33 = NEON_ext(auVar193,auVar80,10,1);
    sStack_d0 = auVar89._0_2_;
    sStack_ce = auVar89._2_2_;
    sStack_cc = auVar89._4_2_;
    sStack_ca = auVar89._6_2_;
    sStack_c8 = auVar89._8_2_;
    sStack_c6 = auVar89._10_2_;
    sStack_c4 = auVar89._12_2_;
    sStack_c2 = auVar89._14_2_;
    sVar7 = auVar34._0_2_;
    sVar8 = auVar34._2_2_;
    sVar9 = auVar34._4_2_;
    sVar10 = auVar34._6_2_;
    sVar11 = auVar34._8_2_;
    sVar12 = auVar34._10_2_;
    sVar13 = auVar34._12_2_;
    sVar14 = auVar34._14_2_;
    sVar79 = auVar141._0_2_;
    sVar81 = auVar141._2_2_;
    sVar82 = auVar141._4_2_;
    sVar83 = auVar141._6_2_;
    sVar84 = auVar141._8_2_;
    sVar85 = auVar141._10_2_;
    sVar86 = auVar141._12_2_;
    sVar87 = auVar141._14_2_;
    sVar52 = (short)uVar53;
    sStack_c0 = auVar98._0_2_;
    sStack_be = auVar98._2_2_;
    sStack_bc = auVar98._4_2_;
    sStack_ba = auVar98._6_2_;
    sStack_b8 = auVar98._8_2_;
    sStack_b6 = auVar98._10_2_;
    sStack_b4 = auVar98._12_2_;
    sStack_b2 = auVar98._14_2_;
    sVar55 = (short)((ulong)uVar53 >> 0x20);
    sStack_e0 = auVar71._0_2_;
    sStack_de = auVar71._2_2_;
    sStack_dc = auVar71._4_2_;
    sStack_da = auVar71._6_2_;
    sStack_d8 = auVar71._8_2_;
    sStack_d6 = auVar71._10_2_;
    sStack_d4 = auVar71._12_2_;
    sStack_d2 = auVar71._14_2_;
    sVar56 = (short)((ulong)uVar53 >> 0x30);
    sVar57 = (short)uVar58;
    sVar201 = auVar184._0_2_;
    sVar203 = auVar184._2_2_;
    sVar204 = auVar184._4_2_;
    sVar205 = auVar184._6_2_;
    sVar206 = auVar184._8_2_;
    sVar207 = auVar184._10_2_;
    sVar208 = auVar184._12_2_;
    sVar209 = auVar184._14_2_;
    sVar59 = (short)((ulong)uVar58 >> 0x10);
    sVar165 = auVar166._0_2_;
    sVar167 = auVar166._2_2_;
    sVar168 = auVar166._4_2_;
    sVar169 = auVar166._6_2_;
    sVar170 = auVar166._8_2_;
    sVar171 = auVar166._10_2_;
    sVar172 = auVar166._12_2_;
    sVar173 = auVar166._14_2_;
    sVar60 = (short)((ulong)uVar58 >> 0x20);
    sVar140 = auVar107._0_2_;
    sVar143 = auVar107._2_2_;
    sVar145 = auVar107._4_2_;
    sVar147 = auVar107._6_2_;
    sVar149 = auVar107._8_2_;
    sVar151 = auVar107._10_2_;
    sVar153 = auVar107._12_2_;
    sVar155 = auVar107._14_2_;
    sVar97 = auVar80._0_2_;
    sVar99 = auVar80._2_2_;
    sVar100 = auVar80._4_2_;
    sVar101 = auVar80._6_2_;
    sVar102 = auVar80._8_2_;
    sVar103 = auVar80._10_2_;
    sVar104 = auVar80._12_2_;
    sVar105 = auVar80._14_2_;
    sVar174 = auVar175._0_2_;
    sVar176 = auVar175._2_2_;
    sVar177 = auVar175._4_2_;
    sVar178 = auVar175._6_2_;
    sVar179 = auVar175._8_2_;
    sVar180 = auVar175._10_2_;
    sVar181 = auVar175._12_2_;
    sVar182 = auVar175._14_2_;
    sVar61 = (short)((ulong)uVar58 >> 0x30);
    sVar156 = auVar157._0_2_;
    sVar158 = auVar157._2_2_;
    sVar159 = auVar157._4_2_;
    sVar160 = auVar157._6_2_;
    sVar161 = auVar157._8_2_;
    sVar162 = auVar157._10_2_;
    sVar163 = auVar157._12_2_;
    sVar164 = auVar157._14_2_;
    sVar88 = auVar33._0_2_;
    sVar90 = auVar33._2_2_;
    sVar91 = auVar33._4_2_;
    sVar92 = auVar33._6_2_;
    sVar93 = auVar33._8_2_;
    sVar94 = auVar33._10_2_;
    sVar95 = auVar33._12_2_;
    sVar96 = auVar33._14_2_;
    param_1[0x14] =
         sVar188 * sVar62 + sStack_c8 * sVar63 + sVar11 * sVar64 + sVar197 * sVar42 +
         sVar75 * sVar44 + sVar215 * sVar45 + sVar84 * sVar65 + sVar233 * sVar46 + sVar242 * sVar47
         + sVar224 * sVar52 + sVar260 * sVar54 + sVar269 * sVar55 + sVar111 * sVar56 +
         sVar102 * sVar66 + sVar119 * sVar57 + sVar26 * sVar49 + sVar127 * sVar59 + sVar135 * sVar60
         + sVar179 * sVar67 + sVar278 * sVar50 + sVar251 * sVar61 + sVar161 * sVar68 +
         sVar148 * sVar51 + sVar93 * sVar69;
    param_1[0x15] =
         sVar189 * sVar62 + sStack_c6 * sVar63 + sVar12 * sVar64 + sVar198 * sVar42 +
         sVar76 * sVar44 + sVar216 * sVar45 + sVar85 * sVar65 + sVar234 * sVar46 + sVar243 * sVar47
         + sVar225 * sVar52 + sVar261 * sVar54 + sVar270 * sVar55 + sVar112 * sVar56 +
         sVar103 * sVar66 + sVar120 * sVar57 + sVar27 * sVar49 + sVar128 * sVar59 + sVar136 * sVar60
         + sVar180 * sVar67 + sVar279 * sVar50 + sVar252 * sVar61 + sVar162 * sVar68 +
         sVar150 * sVar51 + sVar94 * sVar69;
    param_1[0x16] =
         sVar190 * sVar62 + sStack_c4 * sVar63 + sVar13 * sVar64 + sVar199 * sVar42 +
         sVar77 * sVar44 + sVar217 * sVar45 + sVar86 * sVar65 + sVar235 * sVar46 + sVar244 * sVar47
         + sVar226 * sVar52 + sVar262 * sVar54 + sVar271 * sVar55 + sVar113 * sVar56 +
         sVar104 * sVar66 + sVar121 * sVar57 + sVar28 * sVar49 + sVar129 * sVar59 + sVar137 * sVar60
         + sVar181 * sVar67 + sVar280 * sVar50 + sVar253 * sVar61 + sVar163 * sVar68 +
         sVar152 * sVar51 + sVar95 * sVar69;
    param_1[0x17] =
         sVar191 * sVar62 + sStack_c2 * sVar63 + sVar14 * sVar64 + sVar200 * sVar42 +
         sVar78 * sVar44 + sVar218 * sVar45 + sVar87 * sVar65 + sVar236 * sVar46 + sVar245 * sVar47
         + sVar227 * sVar52 + sVar263 * sVar54 + sVar272 * sVar55 + sVar114 * sVar56 +
         sVar105 * sVar66 + sVar122 * sVar57 + sVar29 * sVar49 + sVar130 * sVar59 + sVar138 * sVar60
         + sVar182 * sVar67 + sVar281 * sVar50 + sVar254 * sVar61 + sVar164 * sVar68 +
         sVar154 * sVar51 + sVar96 * sVar69;
    param_1[0x10] =
         sVar183 * sVar62 + sStack_d0 * sVar63 + sVar7 * sVar64 + sVar192 * sVar42 + sVar70 * sVar44
         + sVar211 * sVar45 + sVar79 * sVar65 + sVar228 * sVar46 + sVar237 * sVar47 +
         sVar219 * sVar52 + sVar255 * sVar54 + sVar264 * sVar55 + sVar106 * sVar56 + sVar97 * sVar66
         + sVar115 * sVar57 + sVar22 * sVar49 + sVar123 * sVar59 + sVar131 * sVar60 +
         sVar174 * sVar67 + sVar273 * sVar50 + sVar246 * sVar61 + sVar156 * sVar68 +
         sVar139 * sVar51 + sVar88 * sVar69;
    param_1[0x11] =
         sVar185 * sVar62 + sStack_ce * sVar63 + sVar8 * sVar64 + sVar194 * sVar42 + sVar72 * sVar44
         + sVar212 * sVar45 + sVar81 * sVar65 + sVar230 * sVar46 + sVar239 * sVar47 +
         sVar221 * sVar52 + sVar257 * sVar54 + sVar266 * sVar55 + sVar108 * sVar56 + sVar99 * sVar66
         + sVar116 * sVar57 + sVar23 * sVar49 + sVar124 * sVar59 + sVar132 * sVar60 +
         sVar176 * sVar67 + sVar275 * sVar50 + sVar248 * sVar61 + sVar158 * sVar68 +
         sVar142 * sVar51 + sVar90 * sVar69;
    param_1[0x12] =
         sVar186 * sVar62 + sStack_cc * sVar63 + sVar9 * sVar64 + sVar195 * sVar42 + sVar73 * sVar44
         + sVar213 * sVar45 + sVar82 * sVar65 + sVar231 * sVar46 + sVar240 * sVar47 +
         sVar222 * sVar52 + sVar258 * sVar54 + sVar267 * sVar55 + sVar109 * sVar56 +
         sVar100 * sVar66 + sVar117 * sVar57 + sVar24 * sVar49 + sVar125 * sVar59 + sVar133 * sVar60
         + sVar177 * sVar67 + sVar276 * sVar50 + sVar249 * sVar61 + sVar159 * sVar68 +
         sVar144 * sVar51 + sVar91 * sVar69;
    param_1[0x13] =
         sVar187 * sVar62 + sStack_ca * sVar63 + sVar10 * sVar64 + sVar196 * sVar42 +
         sVar74 * sVar44 + sVar214 * sVar45 + sVar83 * sVar65 + sVar232 * sVar46 + sVar241 * sVar47
         + sVar223 * sVar52 + sVar259 * sVar54 + sVar268 * sVar55 + sVar110 * sVar56 +
         sVar101 * sVar66 + sVar118 * sVar57 + sVar25 * sVar49 + sVar126 * sVar59 + sVar134 * sVar60
         + sVar178 * sVar67 + sVar277 * sVar50 + sVar250 * sVar61 + sVar160 * sVar68 +
         sVar146 * sVar51 + sVar92 * sVar69;
    auVar33 = NEON_ext(auVar80,auVar184,10,1);
    sVar62 = auVar33._0_2_;
    sVar106 = auVar33._2_2_;
    sVar108 = auVar33._4_2_;
    sVar109 = auVar33._6_2_;
    sVar110 = auVar33._8_2_;
    sVar111 = auVar33._10_2_;
    sVar112 = auVar33._12_2_;
    sVar113 = auVar33._14_2_;
    sVar22 = sVar32 * sVar63 + sStack_c0 * sVar64 + sVar183 * sVar42 + sStack_d0 * sVar44 +
             sVar7 * sVar45 + sStack_e0 * sVar65 + sVar79 * sVar46 + sVar192 * sVar52 +
             sVar70 * sVar54 + sVar211 * sVar55 + sVar228 * sVar56 + sVar201 * sVar66 +
             sVar97 * sVar47 + sVar237 * sVar57 + sVar22 * sVar59 + sVar165 * sVar67 +
             sVar174 * sVar49 + sVar273 * sVar60 + sVar140 * sVar68 + sVar156 * sVar50 +
             sVar139 * sVar61 + sVar62 * sVar69 + sVar88 * sVar51;
    sVar23 = sVar35 * sVar63 + sStack_be * sVar64 + sVar185 * sVar42 + sStack_ce * sVar44 +
             sVar8 * sVar45 + sStack_de * sVar65 + sVar81 * sVar46 + sVar194 * sVar52 +
             sVar72 * sVar54 + sVar212 * sVar55 + sVar230 * sVar56 + sVar203 * sVar66 +
             sVar99 * sVar47 + sVar239 * sVar57 + sVar23 * sVar59 + sVar167 * sVar67 +
             sVar176 * sVar49 + sVar275 * sVar60 + sVar143 * sVar68 + sVar158 * sVar50 +
             sVar142 * sVar61 + sVar106 * sVar69 + sVar90 * sVar51;
    sVar24 = sVar36 * sVar63 + sStack_bc * sVar64 + sVar186 * sVar42 + sStack_cc * sVar44 +
             sVar9 * sVar45 + sStack_dc * sVar65 + sVar82 * sVar46 + sVar195 * sVar52 +
             sVar73 * sVar54 + sVar213 * sVar55 + sVar231 * sVar56 + sVar204 * sVar66 +
             sVar100 * sVar47 + sVar240 * sVar57 + sVar24 * sVar59 + sVar168 * sVar67 +
             sVar177 * sVar49 + sVar276 * sVar60 + sVar145 * sVar68 + sVar159 * sVar50 +
             sVar144 * sVar61 + sVar108 * sVar69 + sVar91 * sVar51;
    sVar25 = sVar37 * sVar63 + sStack_ba * sVar64 + sVar187 * sVar42 + sStack_ca * sVar44 +
             sVar10 * sVar45 + sStack_da * sVar65 + sVar83 * sVar46 + sVar196 * sVar52 +
             sVar74 * sVar54 + sVar214 * sVar55 + sVar232 * sVar56 + sVar205 * sVar66 +
             sVar101 * sVar47 + sVar241 * sVar57 + sVar25 * sVar59 + sVar169 * sVar67 +
             sVar178 * sVar49 + sVar277 * sVar60 + sVar147 * sVar68 + sVar160 * sVar50 +
             sVar146 * sVar61 + sVar109 * sVar69 + sVar92 * sVar51;
    sVar26 = sVar38 * sVar63 + sStack_b8 * sVar64 + sVar188 * sVar42 + sStack_c8 * sVar44 +
             sVar11 * sVar45 + sStack_d8 * sVar65 + sVar84 * sVar46 + sVar197 * sVar52 +
             sVar75 * sVar54 + sVar215 * sVar55 + sVar233 * sVar56 + sVar206 * sVar66 +
             sVar102 * sVar47 + sVar242 * sVar57 + sVar26 * sVar59 + sVar170 * sVar67 +
             sVar179 * sVar49 + sVar278 * sVar60 + sVar149 * sVar68 + sVar161 * sVar50 +
             sVar148 * sVar61 + sVar110 * sVar69 + sVar93 * sVar51;
    sVar27 = sVar39 * sVar63 + sStack_b6 * sVar64 + sVar189 * sVar42 + sStack_c6 * sVar44 +
             sVar12 * sVar45 + sStack_d6 * sVar65 + sVar85 * sVar46 + sVar198 * sVar52 +
             sVar76 * sVar54 + sVar216 * sVar55 + sVar234 * sVar56 + sVar207 * sVar66 +
             sVar103 * sVar47 + sVar243 * sVar57 + sVar27 * sVar59 + sVar171 * sVar67 +
             sVar180 * sVar49 + sVar279 * sVar60 + sVar151 * sVar68 + sVar162 * sVar50 +
             sVar150 * sVar61 + sVar111 * sVar69 + sVar94 * sVar51;
    sVar28 = sVar40 * sVar63 + sStack_b4 * sVar64 + sVar190 * sVar42 + sStack_c4 * sVar44 +
             sVar13 * sVar45 + sStack_d4 * sVar65 + sVar86 * sVar46 + sVar199 * sVar52 +
             sVar77 * sVar54 + sVar217 * sVar55 + sVar235 * sVar56 + sVar208 * sVar66 +
             sVar104 * sVar47 + sVar244 * sVar57 + sVar28 * sVar59 + sVar172 * sVar67 +
             sVar181 * sVar49 + sVar280 * sVar60 + sVar153 * sVar68 + sVar163 * sVar50 +
             sVar152 * sVar61 + sVar112 * sVar69 + sVar95 * sVar51;
    sVar29 = sVar41 * sVar63 + sStack_b2 * sVar64 + sVar191 * sVar42 + sStack_c2 * sVar44 +
             sVar14 * sVar45 + sStack_d2 * sVar65 + sVar87 * sVar46 + sVar200 * sVar52 +
             sVar78 * sVar54 + sVar218 * sVar55 + sVar236 * sVar56 + sVar209 * sVar66 +
             sVar105 * sVar47 + sVar245 * sVar57 + sVar29 * sVar59 + sVar173 * sVar67 +
             sVar182 * sVar49 + sVar281 * sVar60 + sVar155 * sVar68 + sVar164 * sVar50 +
             sVar154 * sVar61 + sVar113 * sVar69 + sVar96 * sVar51;
    uVar30 = CONCAT26(sVar37 * sVar44 + sStack_ba * sVar45 + sStack_da * sVar46 + sVar187 * sVar52 +
                      sStack_ca * sVar54 + sVar10 * sVar55 + sVar83 * sVar56 + sVar205 * sVar47 +
                      sVar101 * sVar57 + sVar169 * sVar49 + sVar178 * sVar59 + sVar147 * sVar50 +
                      sVar160 * sVar60 + sVar109 * sVar51 + sVar92 * sVar61,
                      CONCAT24(sVar36 * sVar44 + sStack_bc * sVar45 + sStack_dc * sVar46 +
                               sVar186 * sVar52 + sStack_cc * sVar54 + sVar9 * sVar55 +
                               sVar82 * sVar56 + sVar204 * sVar47 + sVar100 * sVar57 +
                               sVar168 * sVar49 + sVar177 * sVar59 + sVar145 * sVar50 +
                               sVar159 * sVar60 + sVar108 * sVar51 + sVar91 * sVar61,
                               CONCAT22(sVar35 * sVar44 + sStack_be * sVar45 + sStack_de * sVar46 +
                                        sVar185 * sVar52 + sStack_ce * sVar54 + sVar8 * sVar55 +
                                        sVar81 * sVar56 + sVar203 * sVar47 + sVar99 * sVar57 +
                                        sVar167 * sVar49 + sVar176 * sVar59 + sVar143 * sVar50 +
                                        sVar158 * sVar60 + sVar106 * sVar51 + sVar90 * sVar61,
                                        sVar32 * sVar44 + sStack_c0 * sVar45 + sStack_e0 * sVar46 +
                                        sVar183 * sVar52 + sStack_d0 * sVar54 + sVar7 * sVar55 +
                                        sVar79 * sVar56 + sVar201 * sVar47 + sVar97 * sVar57 +
                                        sVar165 * sVar49 + sVar174 * sVar59 + sVar140 * sVar50 +
                                        sVar156 * sVar60 + sVar62 * sVar51 + sVar88 * sVar61)));
    uVar31 = CONCAT26(sVar41 * sVar44 + sStack_b2 * sVar45 + sStack_d2 * sVar46 + sVar191 * sVar52 +
                      sStack_c2 * sVar54 + sVar14 * sVar55 + sVar87 * sVar56 + sVar209 * sVar47 +
                      sVar105 * sVar57 + sVar173 * sVar49 + sVar182 * sVar59 + sVar155 * sVar50 +
                      sVar164 * sVar60 + sVar113 * sVar51 + sVar96 * sVar61,
                      CONCAT24(sVar40 * sVar44 + sStack_b4 * sVar45 + sStack_d4 * sVar46 +
                               sVar190 * sVar52 + sStack_c4 * sVar54 + sVar13 * sVar55 +
                               sVar86 * sVar56 + sVar208 * sVar47 + sVar104 * sVar57 +
                               sVar172 * sVar49 + sVar181 * sVar59 + sVar153 * sVar50 +
                               sVar163 * sVar60 + sVar112 * sVar51 + sVar95 * sVar61,
                               CONCAT22(sVar39 * sVar44 + sStack_b6 * sVar45 + sStack_d6 * sVar46 +
                                        sVar189 * sVar52 + sStack_c6 * sVar54 + sVar12 * sVar55 +
                                        sVar85 * sVar56 + sVar207 * sVar47 + sVar103 * sVar57 +
                                        sVar171 * sVar49 + sVar180 * sVar59 + sVar151 * sVar50 +
                                        sVar162 * sVar60 + sVar111 * sVar51 + sVar94 * sVar61,
                                        sVar38 * sVar44 + sStack_b8 * sVar45 + sStack_d8 * sVar46 +
                                        sVar188 * sVar52 + sStack_c8 * sVar54 + sVar11 * sVar55 +
                                        sVar84 * sVar56 + sVar206 * sVar47 + sVar102 * sVar57 +
                                        sVar170 * sVar49 + sVar179 * sVar59 + sVar149 * sVar50 +
                                        sVar161 * sVar60 + sVar110 * sVar51 + sVar93 * sVar61)));
    uVar53 = CONCAT26(sVar37 * sVar54 + sStack_ba * sVar55 + sStack_da * sVar56 + sVar205 * sVar57 +
                      sVar169 * sVar59 + sVar147 * sVar60 + sVar109 * sVar61,
                      CONCAT24(sVar36 * sVar54 + sStack_bc * sVar55 + sStack_dc * sVar56 +
                               sVar204 * sVar57 + sVar168 * sVar59 + sVar145 * sVar60 +
                               sVar108 * sVar61,
                               CONCAT22(sVar35 * sVar54 + sStack_be * sVar55 + sStack_de * sVar56 +
                                        sVar203 * sVar57 + sVar167 * sVar59 + sVar143 * sVar60 +
                                        sVar106 * sVar61,
                                        sVar32 * sVar54 + sStack_c0 * sVar55 + sStack_e0 * sVar56 +
                                        sVar201 * sVar57 + sVar165 * sVar59 + sVar140 * sVar60 +
                                        sVar62 * sVar61)));
    uVar58 = CONCAT26(sVar41 * sVar54 + sStack_b2 * sVar55 + sStack_d2 * sVar56 + sVar209 * sVar57 +
                      sVar173 * sVar59 + sVar155 * sVar60 + sVar113 * sVar61,
                      CONCAT24(sVar40 * sVar54 + sStack_b4 * sVar55 + sStack_d4 * sVar56 +
                               sVar208 * sVar57 + sVar172 * sVar59 + sVar153 * sVar60 +
                               sVar112 * sVar61,
                               CONCAT22(sVar39 * sVar54 + sStack_b6 * sVar55 + sStack_d6 * sVar56 +
                                        sVar207 * sVar57 + sVar171 * sVar59 + sVar151 * sVar60 +
                                        sVar111 * sVar61,
                                        sVar38 * sVar54 + sStack_b8 * sVar55 + sStack_d8 * sVar56 +
                                        sVar206 * sVar57 + sVar170 * sVar59 + sVar149 * sVar60 +
                                        sVar110 * sVar61)));
    lVar15 = 0x50;
    lVar18 = 0x40;
    lVar19 = 0x30;
  }
  else {
    if (param_5 != 2) {
      uVar21 = param_5 >> 1;
      uVar20 = param_5 - (param_5 >> 1);
      pauVar2 = param_3 + uVar21;
      puVar1 = param_4 + uVar21 * 2;
      for (uVar16 = 0; uVar21 != uVar16; uVar16 = uVar16 + 1) {
        pauVar3 = pauVar2 + uVar16;
        sVar7 = *(short *)*pauVar3;
        sVar8 = *(short *)(*pauVar3 + 2);
        sVar9 = *(short *)(*pauVar3 + 4);
        sVar10 = *(short *)(*pauVar3 + 6);
        sVar11 = *(short *)(*pauVar3 + 10);
        sVar12 = *(short *)(*pauVar3 + 0xc);
        sVar13 = *(short *)(*pauVar3 + 0xe);
        uVar31 = *(undefined8 *)(param_3[uVar16] + 8);
        uVar30 = *(undefined8 *)param_3[uVar16];
        psVar5 = param_1 + uVar16 * 8;
        psVar5[4] = (short)uVar31 + *(short *)(*pauVar3 + 8);
        psVar5[5] = (short)((ulong)uVar31 >> 0x10) + sVar11;
        psVar5[6] = (short)((ulong)uVar31 >> 0x20) + sVar12;
        psVar5[7] = (short)((ulong)uVar31 >> 0x30) + sVar13;
        *psVar5 = (short)uVar30 + sVar7;
        psVar5[1] = (short)((ulong)uVar30 >> 0x10) + sVar8;
        psVar5[2] = (short)((ulong)uVar30 >> 0x20) + sVar9;
        psVar5[3] = (short)((ulong)uVar30 >> 0x30) + sVar10;
        psVar5 = (short *)(puVar1 + uVar16 * 2);
        sVar7 = *psVar5;
        sVar8 = psVar5[1];
        sVar9 = psVar5[2];
        sVar10 = psVar5[3];
        sVar11 = psVar5[5];
        sVar12 = psVar5[6];
        sVar13 = psVar5[7];
        uVar31 = (param_4 + uVar16 * 2)[1];
        uVar30 = param_4[uVar16 * 2];
        psVar6 = param_1 + uVar21 * -8 + param_5 * 8 + uVar16 * 8;
        psVar6[4] = (short)uVar31 + psVar5[4];
        psVar6[5] = (short)((ulong)uVar31 >> 0x10) + sVar11;
        psVar6[6] = (short)((ulong)uVar31 >> 0x20) + sVar12;
        psVar6[7] = (short)((ulong)uVar31 >> 0x30) + sVar13;
        *psVar6 = (short)uVar30 + sVar7;
        psVar6[1] = (short)((ulong)uVar30 >> 0x10) + sVar8;
        psVar6[2] = (short)((ulong)uVar30 >> 0x20) + sVar9;
        psVar6[3] = (short)((ulong)uVar30 >> 0x30) + sVar10;
      }
      if (uVar20 != uVar21) {
        uVar30 = *(undefined8 *)pauVar2[uVar21];
        *(undefined8 *)(param_1 + uVar21 * 8 + 4) = *(undefined8 *)(pauVar2[uVar21] + 8);
        *(undefined8 *)(param_1 + uVar21 * 8) = uVar30;
        uVar30 = puVar1[uVar21 * 2];
        *(undefined8 *)(param_1 + param_5 * 8 + 4) = (puVar1 + uVar21 * 2)[1];
        *(undefined8 *)(param_1 + param_5 * 8) = uVar30;
      }
      lVar15 = uVar20 * 2;
      psVar5 = param_2 + uVar20 * 0x10;
      FUN_00701424(param_2,psVar5,param_1,param_1 + uVar20 * 8,uVar20);
      uVar17 = param_5 & 0xfffffffffffffffe;
      FUN_00701424(param_1 + uVar17 * 8,psVar5,pauVar2,puVar1,uVar20);
      FUN_00701424(param_1,psVar5,param_3,param_4,uVar21);
      psVar5 = param_1;
      psVar6 = param_2;
      for (uVar16 = uVar17; uVar16 != 0; uVar16 = uVar16 - 1) {
        uVar31 = *(undefined8 *)(psVar5 + 4);
        uVar30 = *(undefined8 *)psVar5;
        psVar4 = psVar5 + uVar21 * 0x10;
        sVar7 = *psVar4;
        sVar8 = psVar4[1];
        sVar9 = psVar4[2];
        sVar10 = psVar4[3];
        sVar11 = psVar4[5];
        sVar12 = psVar4[6];
        sVar13 = psVar4[7];
        psVar6[4] = psVar6[4] - ((short)uVar31 + psVar4[4]);
        psVar6[5] = psVar6[5] - ((short)((ulong)uVar31 >> 0x10) + sVar11);
        psVar6[6] = psVar6[6] - ((short)((ulong)uVar31 >> 0x20) + sVar12);
        psVar6[7] = psVar6[7] - ((short)((ulong)uVar31 >> 0x30) + sVar13);
        *psVar6 = *psVar6 - ((short)uVar30 + sVar7);
        psVar6[1] = psVar6[1] - ((short)((ulong)uVar30 >> 0x10) + sVar8);
        psVar6[2] = psVar6[2] - ((short)((ulong)uVar30 >> 0x20) + sVar9);
        psVar6[3] = psVar6[3] - ((short)((ulong)uVar30 >> 0x30) + sVar10);
        psVar5 = psVar5 + 8;
        psVar6 = psVar6 + 8;
      }
      if (uVar20 != uVar21) {
        psVar6 = param_2 + uVar17 * 8;
        sVar7 = *psVar6;
        sVar8 = psVar6[1];
        sVar9 = psVar6[2];
        sVar10 = psVar6[3];
        sVar11 = psVar6[5];
        sVar12 = psVar6[6];
        sVar13 = psVar6[7];
        psVar5 = param_1 + uVar21 * 0x20;
        uVar31 = *(undefined8 *)(psVar5 + 4);
        uVar30 = *(undefined8 *)psVar5;
        sVar14 = psVar5[8];
        sVar22 = psVar5[9];
        sVar23 = psVar5[10];
        sVar24 = psVar5[0xb];
        sVar25 = psVar5[0xc];
        sVar26 = psVar5[0xd];
        sVar27 = psVar5[0xe];
        sVar28 = psVar5[0xf];
        psVar5 = param_2 + uVar17 * 8;
        psVar5[4] = psVar6[4] - (short)uVar31;
        psVar5[5] = sVar11 - (short)((ulong)uVar31 >> 0x10);
        psVar5[6] = sVar12 - (short)((ulong)uVar31 >> 0x20);
        psVar5[7] = sVar13 - (short)((ulong)uVar31 >> 0x30);
        *psVar5 = sVar7 - (short)uVar30;
        psVar5[1] = sVar8 - (short)((ulong)uVar30 >> 0x10);
        psVar5[2] = sVar9 - (short)((ulong)uVar30 >> 0x20);
        psVar5[3] = sVar10 - (short)((ulong)uVar30 >> 0x30);
        uVar16 = param_5 << 4 | 0x10;
        psVar5 = (short *)((long)param_2 + uVar16);
        sVar7 = *psVar5;
        sVar8 = psVar5[1];
        sVar9 = psVar5[2];
        sVar10 = psVar5[3];
        psVar6 = (short *)((long)param_2 + uVar16);
        psVar6[4] = psVar5[4] - sVar25;
        psVar6[5] = psVar5[5] - sVar26;
        psVar6[6] = psVar5[6] - sVar27;
        psVar6[7] = psVar5[7] - sVar28;
        *psVar6 = sVar7 - sVar14;
        psVar6[1] = sVar8 - sVar22;
        psVar6[2] = sVar9 - sVar23;
        psVar6[3] = sVar10 - sVar24;
      }
      psVar5 = param_1 + uVar21 * 8;
      for (; lVar15 != 0; lVar15 = lVar15 + -1) {
        uVar31 = *(undefined8 *)(param_2 + 4);
        uVar30 = *(undefined8 *)param_2;
        psVar5[4] = (short)uVar31 + psVar5[4];
        psVar5[5] = (short)((ulong)uVar31 >> 0x10) + psVar5[5];
        psVar5[6] = (short)((ulong)uVar31 >> 0x20) + psVar5[6];
        psVar5[7] = (short)((ulong)uVar31 >> 0x30) + psVar5[7];
        *psVar5 = (short)uVar30 + *psVar5;
        psVar5[1] = (short)((ulong)uVar30 >> 0x10) + psVar5[1];
        psVar5[2] = (short)((ulong)uVar30 >> 0x20) + psVar5[2];
        psVar5[3] = (short)((ulong)uVar30 >> 0x30) + psVar5[3];
        psVar5 = psVar5 + 8;
        param_2 = param_2 + 8;
      }
      return;
    }
    auVar34 = *param_3;
    pauVar2 = param_3 + 1;
    uVar58 = *(undefined8 *)(param_3[1] + 8);
    sVar46 = (short)((ulong)uVar58 >> 0x10);
    sVar47 = (short)((ulong)uVar58 >> 0x20);
    sVar49 = (short)((ulong)uVar58 >> 0x30);
    uVar53 = *(undefined8 *)*pauVar2;
    sVar42 = (short)((ulong)uVar53 >> 0x10);
    sVar44 = (short)((ulong)uVar53 >> 0x20);
    sVar45 = (short)((ulong)uVar53 >> 0x30);
    uVar31 = param_4[1];
    uVar30 = *param_4;
    uVar48 = param_4[3];
    uVar43 = param_4[2];
    sVar7 = (short)uVar30;
    auVar220 = ZEXT216(0);
    auVar33._10_2_ = sVar46;
    auVar33._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar33._12_2_ = sVar47;
    auVar33._14_2_ = sVar49;
    auVar33 = NEON_ext(auVar33,auVar220,0xe,1);
    auVar71._10_2_ = sVar46;
    auVar71._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar71._12_2_ = sVar47;
    auVar71._14_2_ = sVar49;
    auVar71 = NEON_ext(auVar34,auVar71,0xe,1);
    auVar229 = NEON_ext(auVar220,auVar34,0xe,1);
    sVar8 = (short)((ulong)uVar30 >> 0x10);
    sVar35 = (short)((ulong)uVar43 >> 0x10);
    auVar80._10_2_ = sVar46;
    auVar80._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar80._12_2_ = sVar47;
    auVar80._14_2_ = sVar49;
    auVar175 = NEON_ext(auVar80,auVar220,0xc,1);
    auVar89._10_2_ = sVar46;
    auVar89._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar89._12_2_ = sVar47;
    auVar89._14_2_ = sVar49;
    auVar141 = NEON_ext(auVar34,auVar89,0xc,1);
    auVar238 = NEON_ext(auVar220,auVar229,0xe,1);
    sVar9 = (short)((ulong)uVar30 >> 0x20);
    sVar36 = (short)((ulong)uVar43 >> 0x20);
    auVar98._10_2_ = sVar46;
    auVar98._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar98._12_2_ = sVar47;
    auVar98._14_2_ = sVar49;
    auVar166 = NEON_ext(auVar98,auVar220,10,1);
    auVar157 = NEON_ext(auVar238,auVar141,0xe,1);
    auVar247 = NEON_ext(auVar220,auVar238,0xe,1);
    sVar10 = (short)((ulong)uVar30 >> 0x30);
    sVar37 = (short)((ulong)uVar43 >> 0x30);
    auVar193 = NEON_ext(auVar157,auVar166,0xe,1);
    auVar184 = NEON_ext(auVar238,auVar141,0xc,1);
    auVar256 = NEON_ext(auVar220,auVar247,0xe,1);
    sVar11 = (short)uVar31;
    sVar38 = (short)uVar48;
    auVar210 = NEON_ext(auVar184,auVar193,0xe,1);
    auVar202 = NEON_ext(auVar256,auVar184,0xe,1);
    auVar265 = NEON_ext(auVar220,auVar256,0xe,1);
    sVar12 = (short)((ulong)uVar31 >> 0x10);
    sVar39 = (short)((ulong)uVar48 >> 0x10);
    auVar274 = NEON_ext(auVar184,auVar193,0xc,1);
    auVar80 = NEON_ext(auVar256,auVar184,0xc,1);
    auVar89 = NEON_ext(auVar220,auVar265,0xe,1);
    sVar13 = (short)((ulong)uVar31 >> 0x20);
    sVar40 = (short)((ulong)uVar48 >> 0x20);
    auVar98 = NEON_ext(auVar184,auVar193,10,1);
    auVar107 = NEON_ext(auVar89,auVar80,0xe,1);
    auVar220 = NEON_ext(auVar220,auVar89,0xe,1);
    sVar14 = (short)((ulong)uVar31 >> 0x30);
    sVar32 = (short)uVar43;
    sVar41 = (short)((ulong)uVar48 >> 0x30);
    sVar22 = (short)uVar53 * sVar7 + auVar71._0_2_ * sVar8 + auVar141._0_2_ * sVar9 +
             auVar34._0_2_ * sVar32 + auVar229._0_2_ * sVar35 + auVar238._0_2_ * sVar36 +
             auVar157._0_2_ * sVar10 + auVar247._0_2_ * sVar37 + auVar256._0_2_ * sVar38 +
             auVar184._0_2_ * sVar11 + auVar265._0_2_ * sVar39 + auVar202._0_2_ * sVar12 +
             auVar89._0_2_ * sVar40 + auVar80._0_2_ * sVar13 + auVar220._0_2_ * sVar41 +
             auVar107._0_2_ * sVar14;
    sVar23 = sVar42 * sVar7 + auVar71._2_2_ * sVar8 + auVar141._2_2_ * sVar9 +
             auVar34._2_2_ * sVar32 + auVar229._2_2_ * sVar35 + auVar238._2_2_ * sVar36 +
             auVar157._2_2_ * sVar10 + auVar247._2_2_ * sVar37 + auVar256._2_2_ * sVar38 +
             auVar184._2_2_ * sVar11 + auVar265._2_2_ * sVar39 + auVar202._2_2_ * sVar12 +
             auVar89._2_2_ * sVar40 + auVar80._2_2_ * sVar13 + auVar220._2_2_ * sVar41 +
             auVar107._2_2_ * sVar14;
    sVar24 = sVar44 * sVar7 + auVar71._4_2_ * sVar8 + auVar141._4_2_ * sVar9 +
             auVar34._4_2_ * sVar32 + auVar229._4_2_ * sVar35 + auVar238._4_2_ * sVar36 +
             auVar157._4_2_ * sVar10 + auVar247._4_2_ * sVar37 + auVar256._4_2_ * sVar38 +
             auVar184._4_2_ * sVar11 + auVar265._4_2_ * sVar39 + auVar202._4_2_ * sVar12 +
             auVar89._4_2_ * sVar40 + auVar80._4_2_ * sVar13 + auVar220._4_2_ * sVar41 +
             auVar107._4_2_ * sVar14;
    sVar25 = sVar45 * sVar7 + auVar71._6_2_ * sVar8 + auVar141._6_2_ * sVar9 +
             auVar34._6_2_ * sVar32 + auVar229._6_2_ * sVar35 + auVar238._6_2_ * sVar36 +
             auVar157._6_2_ * sVar10 + auVar247._6_2_ * sVar37 + auVar256._6_2_ * sVar38 +
             auVar184._6_2_ * sVar11 + auVar265._6_2_ * sVar39 + auVar202._6_2_ * sVar12 +
             auVar89._6_2_ * sVar40 + auVar80._6_2_ * sVar13 + auVar220._6_2_ * sVar41 +
             auVar107._6_2_ * sVar14;
    sVar26 = (short)uVar58 * sVar7 + auVar71._8_2_ * sVar8 + auVar141._8_2_ * sVar9 +
             auVar34._8_2_ * sVar32 + auVar229._8_2_ * sVar35 + auVar238._8_2_ * sVar36 +
             auVar157._8_2_ * sVar10 + auVar247._8_2_ * sVar37 + auVar256._8_2_ * sVar38 +
             auVar184._8_2_ * sVar11 + auVar265._8_2_ * sVar39 + auVar202._8_2_ * sVar12 +
             auVar89._8_2_ * sVar40 + auVar80._8_2_ * sVar13 + auVar220._8_2_ * sVar41 +
             auVar107._8_2_ * sVar14;
    sVar27 = sVar46 * sVar7 + auVar71._10_2_ * sVar8 + auVar141._10_2_ * sVar9 +
             auVar34._10_2_ * sVar32 + auVar229._10_2_ * sVar35 + auVar238._10_2_ * sVar36 +
             auVar157._10_2_ * sVar10 + auVar247._10_2_ * sVar37 + auVar256._10_2_ * sVar38 +
             auVar184._10_2_ * sVar11 + auVar265._10_2_ * sVar39 + auVar202._10_2_ * sVar12 +
             auVar89._10_2_ * sVar40 + auVar80._10_2_ * sVar13 + auVar220._10_2_ * sVar41 +
             auVar107._10_2_ * sVar14;
    sVar28 = sVar47 * sVar7 + auVar71._12_2_ * sVar8 + auVar141._12_2_ * sVar9 +
             auVar34._12_2_ * sVar32 + auVar229._12_2_ * sVar35 + auVar238._12_2_ * sVar36 +
             auVar157._12_2_ * sVar10 + auVar247._12_2_ * sVar37 + auVar256._12_2_ * sVar38 +
             auVar184._12_2_ * sVar11 + auVar265._12_2_ * sVar39 + auVar202._12_2_ * sVar12 +
             auVar89._12_2_ * sVar40 + auVar80._12_2_ * sVar13 + auVar220._12_2_ * sVar41 +
             auVar107._12_2_ * sVar14;
    sVar29 = sVar49 * sVar7 + auVar71._14_2_ * sVar8 + auVar141._14_2_ * sVar9 +
             auVar34._14_2_ * sVar32 + auVar229._14_2_ * sVar35 + auVar238._14_2_ * sVar36 +
             auVar157._14_2_ * sVar10 + auVar247._14_2_ * sVar37 + auVar256._14_2_ * sVar38 +
             auVar184._14_2_ * sVar11 + auVar265._14_2_ * sVar39 + auVar202._14_2_ * sVar12 +
             auVar89._14_2_ * sVar40 + auVar80._14_2_ * sVar13 + auVar220._14_2_ * sVar41 +
             auVar107._14_2_ * sVar14;
    uVar30 = CONCAT26(auVar33._6_2_ * sVar8 + auVar175._6_2_ * sVar9 + sVar45 * sVar32 +
                      auVar71._6_2_ * sVar35 + auVar141._6_2_ * sVar36 + auVar166._6_2_ * sVar10 +
                      auVar157._6_2_ * sVar37 + auVar193._6_2_ * sVar11 + auVar184._6_2_ * sVar38 +
                      auVar210._6_2_ * sVar12 + auVar202._6_2_ * sVar39 + auVar274._6_2_ * sVar13 +
                      auVar80._6_2_ * sVar40 + auVar98._6_2_ * sVar14 + auVar107._6_2_ * sVar41,
                      CONCAT24(auVar33._4_2_ * sVar8 + auVar175._4_2_ * sVar9 + sVar44 * sVar32 +
                               auVar71._4_2_ * sVar35 + auVar141._4_2_ * sVar36 +
                               auVar166._4_2_ * sVar10 + auVar157._4_2_ * sVar37 +
                               auVar193._4_2_ * sVar11 + auVar184._4_2_ * sVar38 +
                               auVar210._4_2_ * sVar12 + auVar202._4_2_ * sVar39 +
                               auVar274._4_2_ * sVar13 + auVar80._4_2_ * sVar40 +
                               auVar98._4_2_ * sVar14 + auVar107._4_2_ * sVar41,
                               CONCAT22(auVar33._2_2_ * sVar8 + auVar175._2_2_ * sVar9 +
                                        sVar42 * sVar32 + auVar71._2_2_ * sVar35 +
                                        auVar141._2_2_ * sVar36 + auVar166._2_2_ * sVar10 +
                                        auVar157._2_2_ * sVar37 + auVar193._2_2_ * sVar11 +
                                        auVar184._2_2_ * sVar38 + auVar210._2_2_ * sVar12 +
                                        auVar202._2_2_ * sVar39 + auVar274._2_2_ * sVar13 +
                                        auVar80._2_2_ * sVar40 + auVar98._2_2_ * sVar14 +
                                        auVar107._2_2_ * sVar41,
                                        auVar33._0_2_ * sVar8 + auVar175._0_2_ * sVar9 +
                                        (short)uVar53 * sVar32 + auVar71._0_2_ * sVar35 +
                                        auVar141._0_2_ * sVar36 + auVar166._0_2_ * sVar10 +
                                        auVar157._0_2_ * sVar37 + auVar193._0_2_ * sVar11 +
                                        auVar184._0_2_ * sVar38 + auVar210._0_2_ * sVar12 +
                                        auVar202._0_2_ * sVar39 + auVar274._0_2_ * sVar13 +
                                        auVar80._0_2_ * sVar40 + auVar98._0_2_ * sVar14 +
                                        auVar107._0_2_ * sVar41)));
    uVar31 = CONCAT26(auVar33._14_2_ * sVar8 + auVar175._14_2_ * sVar9 + sVar49 * sVar32 +
                      auVar71._14_2_ * sVar35 + auVar141._14_2_ * sVar36 + auVar166._14_2_ * sVar10
                      + auVar157._14_2_ * sVar37 + auVar193._14_2_ * sVar11 +
                      auVar184._14_2_ * sVar38 + auVar210._14_2_ * sVar12 + auVar202._14_2_ * sVar39
                      + auVar274._14_2_ * sVar13 + auVar80._14_2_ * sVar40 + auVar98._14_2_ * sVar14
                      + auVar107._14_2_ * sVar41,
                      CONCAT24(auVar33._12_2_ * sVar8 + auVar175._12_2_ * sVar9 + sVar47 * sVar32 +
                               auVar71._12_2_ * sVar35 + auVar141._12_2_ * sVar36 +
                               auVar166._12_2_ * sVar10 + auVar157._12_2_ * sVar37 +
                               auVar193._12_2_ * sVar11 + auVar184._12_2_ * sVar38 +
                               auVar210._12_2_ * sVar12 + auVar202._12_2_ * sVar39 +
                               auVar274._12_2_ * sVar13 + auVar80._12_2_ * sVar40 +
                               auVar98._12_2_ * sVar14 + auVar107._12_2_ * sVar41,
                               CONCAT22(auVar33._10_2_ * sVar8 + auVar175._10_2_ * sVar9 +
                                        sVar46 * sVar32 + auVar71._10_2_ * sVar35 +
                                        auVar141._10_2_ * sVar36 + auVar166._10_2_ * sVar10 +
                                        auVar157._10_2_ * sVar37 + auVar193._10_2_ * sVar11 +
                                        auVar184._10_2_ * sVar38 + auVar210._10_2_ * sVar12 +
                                        auVar202._10_2_ * sVar39 + auVar274._10_2_ * sVar13 +
                                        auVar80._10_2_ * sVar40 + auVar98._10_2_ * sVar14 +
                                        auVar107._10_2_ * sVar41,
                                        auVar33._8_2_ * sVar8 + auVar175._8_2_ * sVar9 +
                                        (short)uVar58 * sVar32 + auVar71._8_2_ * sVar35 +
                                        auVar141._8_2_ * sVar36 + auVar166._8_2_ * sVar10 +
                                        auVar157._8_2_ * sVar37 + auVar193._8_2_ * sVar11 +
                                        auVar184._8_2_ * sVar38 + auVar210._8_2_ * sVar12 +
                                        auVar202._8_2_ * sVar39 + auVar274._8_2_ * sVar13 +
                                        auVar80._8_2_ * sVar40 + auVar98._8_2_ * sVar14 +
                                        auVar107._8_2_ * sVar41)));
    uVar53 = CONCAT26(auVar33._6_2_ * sVar35 + auVar175._6_2_ * sVar36 + auVar166._6_2_ * sVar37 +
                      auVar193._6_2_ * sVar38 + auVar210._6_2_ * sVar39 + auVar274._6_2_ * sVar40 +
                      auVar98._6_2_ * sVar41,
                      CONCAT24(auVar33._4_2_ * sVar35 + auVar175._4_2_ * sVar36 +
                               auVar166._4_2_ * sVar37 + auVar193._4_2_ * sVar38 +
                               auVar210._4_2_ * sVar39 + auVar274._4_2_ * sVar40 +
                               auVar98._4_2_ * sVar41,
                               CONCAT22(auVar33._2_2_ * sVar35 + auVar175._2_2_ * sVar36 +
                                        auVar166._2_2_ * sVar37 + auVar193._2_2_ * sVar38 +
                                        auVar210._2_2_ * sVar39 + auVar274._2_2_ * sVar40 +
                                        auVar98._2_2_ * sVar41,
                                        auVar33._0_2_ * sVar35 + auVar175._0_2_ * sVar36 +
                                        auVar166._0_2_ * sVar37 + auVar193._0_2_ * sVar38 +
                                        auVar210._0_2_ * sVar39 + auVar274._0_2_ * sVar40 +
                                        auVar98._0_2_ * sVar41)));
    uVar58 = CONCAT26(auVar33._14_2_ * sVar35 + auVar175._14_2_ * sVar36 + auVar166._14_2_ * sVar37
                      + auVar193._14_2_ * sVar38 + auVar210._14_2_ * sVar39 +
                      auVar274._14_2_ * sVar40 + auVar98._14_2_ * sVar41,
                      CONCAT24(auVar33._12_2_ * sVar35 + auVar175._12_2_ * sVar36 +
                               auVar166._12_2_ * sVar37 + auVar193._12_2_ * sVar38 +
                               auVar210._12_2_ * sVar39 + auVar274._12_2_ * sVar40 +
                               auVar98._12_2_ * sVar41,
                               CONCAT22(auVar33._10_2_ * sVar35 + auVar175._10_2_ * sVar36 +
                                        auVar166._10_2_ * sVar37 + auVar193._10_2_ * sVar38 +
                                        auVar210._10_2_ * sVar39 + auVar274._10_2_ * sVar40 +
                                        auVar98._10_2_ * sVar41,
                                        auVar33._8_2_ * sVar35 + auVar175._8_2_ * sVar36 +
                                        auVar166._8_2_ * sVar37 + auVar193._8_2_ * sVar38 +
                                        auVar210._8_2_ * sVar39 + auVar274._8_2_ * sVar40 +
                                        auVar98._8_2_ * sVar41)));
    *(ulong *)(param_1 + 4) =
         CONCAT26(auVar34._14_2_ * sVar7 + auVar229._14_2_ * sVar8 + auVar238._14_2_ * sVar9 +
                  auVar247._14_2_ * sVar10 + auVar256._14_2_ * sVar11 + auVar265._14_2_ * sVar12 +
                  auVar89._14_2_ * sVar13 + auVar220._14_2_ * sVar14,
                  CONCAT24(auVar34._12_2_ * sVar7 + auVar229._12_2_ * sVar8 +
                           auVar238._12_2_ * sVar9 + auVar247._12_2_ * sVar10 +
                           auVar256._12_2_ * sVar11 + auVar265._12_2_ * sVar12 +
                           auVar89._12_2_ * sVar13 + auVar220._12_2_ * sVar14,
                           CONCAT22(auVar34._10_2_ * sVar7 + auVar229._10_2_ * sVar8 +
                                    auVar238._10_2_ * sVar9 + auVar247._10_2_ * sVar10 +
                                    auVar256._10_2_ * sVar11 + auVar265._10_2_ * sVar12 +
                                    auVar89._10_2_ * sVar13 + auVar220._10_2_ * sVar14,
                                    auVar34._8_2_ * sVar7 + auVar229._8_2_ * sVar8 +
                                    auVar238._8_2_ * sVar9 + auVar247._8_2_ * sVar10 +
                                    auVar256._8_2_ * sVar11 + auVar265._8_2_ * sVar12 +
                                    auVar89._8_2_ * sVar13 + auVar220._8_2_ * sVar14)));
    *(ulong *)param_1 =
         CONCAT26(auVar34._6_2_ * sVar7 + auVar229._6_2_ * sVar8 + auVar238._6_2_ * sVar9 +
                  auVar247._6_2_ * sVar10 + auVar256._6_2_ * sVar11 + auVar265._6_2_ * sVar12 +
                  auVar89._6_2_ * sVar13 + auVar220._6_2_ * sVar14,
                  CONCAT24(auVar34._4_2_ * sVar7 + auVar229._4_2_ * sVar8 + auVar238._4_2_ * sVar9 +
                           auVar247._4_2_ * sVar10 + auVar256._4_2_ * sVar11 +
                           auVar265._4_2_ * sVar12 + auVar89._4_2_ * sVar13 +
                           auVar220._4_2_ * sVar14,
                           CONCAT22(auVar34._2_2_ * sVar7 + auVar229._2_2_ * sVar8 +
                                    auVar238._2_2_ * sVar9 + auVar247._2_2_ * sVar10 +
                                    auVar256._2_2_ * sVar11 + auVar265._2_2_ * sVar12 +
                                    auVar89._2_2_ * sVar13 + auVar220._2_2_ * sVar14,
                                    auVar34._0_2_ * sVar7 + auVar229._0_2_ * sVar8 +
                                    auVar238._0_2_ * sVar9 + auVar247._0_2_ * sVar10 +
                                    auVar256._0_2_ * sVar11 + auVar265._0_2_ * sVar12 +
                                    auVar89._0_2_ * sVar13 + auVar220._0_2_ * sVar14)));
    lVar15 = 0x30;
    lVar18 = 0x20;
    lVar19 = 0x10;
  }
  psVar5 = (short *)((long)param_1 + lVar19);
  psVar5[4] = sVar26;
  psVar5[5] = sVar27;
  psVar5[6] = sVar28;
  psVar5[7] = sVar29;
  *psVar5 = sVar22;
  psVar5[1] = sVar23;
  psVar5[2] = sVar24;
  psVar5[3] = sVar25;
  ((undefined8 *)((long)param_1 + lVar18))[1] = uVar31;
  *(undefined8 *)((long)param_1 + lVar18) = uVar30;
  ((undefined8 *)((long)param_1 + lVar15))[1] = uVar58;
  *(undefined8 *)((long)param_1 + lVar15) = uVar53;
  return;
}



/* Entry: 00701974; end: 007019fb;  */

void FUN_00701974(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0x58; lVar1 = lVar1 + 8) {
    *(ulong *)(param_1 + lVar1) =
         *(ulong *)(param_1 + lVar1) ^ *(ulong *)(param_2 + lVar1) & param_3;
  }
  return;
}



/* Entry: 007019fc; end: 00701a73;  */

char * FUN_007019fc(undefined8 param_1,qword param_2)

{
  qword qVar1;
  char *pcVar2;
  
  pcVar2 = segment_command_00000020.segname + 8;
  FUN_00701e90();
  if (pcVar2 != (char *)0x0) {
    *(qword *)(pcVar2 + 0x18) = 0;
    *(qword *)(pcVar2 + 0x10) = 0;
    *(undefined8 *)(pcVar2 + 0x28) = 0;
    *(qword *)(pcVar2 + 0x20) = 0;
    *(qword *)(pcVar2 + 8) = 0;
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
    *(qword *)(pcVar2 + 0x10) = 0x10;
    qVar1 = 0x80;
    FUN_00701e90();
    *(qword *)(pcVar2 + 8) = qVar1;
    if (qVar1 == 0) {
      func_0x00701ed0(pcVar2);
      pcVar2 = (char *)0x0;
    }
    else {
      FUN_00701a74();
      *(qword *)(pcVar2 + 0x20) = param_2;
      *(undefined8 *)(pcVar2 + 0x28) = param_1;
    }
  }
  return pcVar2;
}



/* Entry: 00701a74; end: 00701a7f;  */

void FUN_00701a74(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_0099a088)();
    return;
  }
  return;
}



/* Entry: 00701a80; end: 00701ae3;  */

/* WARNING: Possible PIC construction at 0x00701ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00701ab8) */

void FUN_00701a80(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  ulong unaff_x20;
  ulong uVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  uVar4 = 0;
  do {
    if (*(ulong *)(param_1 + 0x10) <= uVar4) {
      func_0x00701ed0();
      lVar2 = param_1;
SUB_00701ed0:
      if (lVar2 != 0) {
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        plVar3 = (long *)(lVar2 + -8);
        FUN_00701f08(plVar3,*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(plVar3);
        return;
      }
      return;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 8) + uVar4 * 8);
    if (lVar2 != 0) {
      unaff_x30 = 0x701ab8;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x20 = uVar4;
      unaff_x29 = puVar1;
      goto SUB_00701ed0;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}



/* Entry: 00701ae4; end: 00701b1b;  */

undefined8
FUN_00701ae4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_00701b1c(param_1,0,param_2,param_3,param_4);
  if ((undefined8 *)*param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)*param_1;
  }
  return uVar1;
}



/* Entry: 00701b1c; end: 00701b9f;  */

undefined8 *
FUN_00701b1c(long param_1,undefined4 *param_2,undefined8 param_3,code *param_4,code *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  (*param_4)(uVar3,param_3);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = (int)uVar3;
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uVar3 & 0xffffffff) / uVar1;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + ((uVar3 & 0xffffffff) - uVar2 * uVar1) * 8);
  do {
    puVar5 = puVar6;
    puVar6 = (undefined8 *)*puVar5;
    if (puVar6 == (undefined8 *)0x0) {
      return puVar5;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*param_5)(uVar4,*puVar6,param_3);
    puVar6 = puVar6 + 1;
  } while ((int)uVar4 != 0);
  return puVar5;
}



/* Entry: 00701ba0; end: 00701c8f;  */

undefined8 FUN_00701ba0(long param_1,undefined8 param_2,uint param_3,code *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_3 / uVar1;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 8) + ((ulong)param_3 - uVar2 * uVar1) * 8);
  do {
    puVar4 = puVar5;
    puVar5 = (undefined8 *)*puVar4;
    if (puVar5 == (undefined8 *)0x0) goto LAB_00701bf8;
    uVar3 = param_2;
    (*param_4)(param_2,*puVar5);
    puVar5 = puVar5 + 1;
  } while ((int)uVar3 != 0);
  puVar4 = (undefined8 *)*puVar4;
  if (puVar4 == (undefined8 *)0x0) {
LAB_00701bf8:
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar4;
  }
  return uVar3;
}



/* Entry: 00701c90; end: 00701cdf;  */

void FUN_00701c90(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if ((int)param_1[3] == 0) {
    uVar5 = param_1[2];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *param_1 / uVar5;
    }
    if (uVar9 < 3) {
      if (*param_1 < uVar5 && 0x10 < uVar5) {
        uVar5 = uVar5 >> 1;
        if (uVar5 < 0x11) {
          uVar5 = 0x10;
        }
        goto FUN_00701de0;
      }
    }
    else if (0 < (long)uVar5) {
      uVar5 = uVar5 << 1;
FUN_00701de0:
      if (uVar5 >> 0x3d == 0) {
        uVar9 = uVar5 << 3;
        FUN_00701e90();
        if (uVar9 != 0) {
          FUN_00701a74();
          uVar1 = param_1[1];
          uVar2 = param_1[2];
          for (uVar6 = 0; uVar6 != uVar2; uVar6 = uVar6 + 1) {
            lVar4 = *(long *)(uVar1 + uVar6 * 8);
            while (lVar4 != 0) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = *(uint *)(lVar4 + 0x10) / uVar5;
              }
              lVar7 = (ulong)*(uint *)(lVar4 + 0x10) - uVar3 * uVar5;
              lVar8 = *(long *)(lVar4 + 8);
              *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(uVar9 + lVar7 * 8);
              *(long *)(uVar9 + lVar7 * 8) = lVar4;
              lVar4 = lVar8;
            }
          }
          func_0x00701ed0();
          param_1[1] = uVar9;
          param_1[2] = uVar5;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 00701ce0; end: 00701d3f;  */

undefined8 FUN_00701ce0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = param_1;
  FUN_00701b1c(param_1,0,param_2,param_3,param_4);
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
    *plVar1 = puVar2[1];
    func_0x00701ed0();
    FUN_00701e78(*param_1 + -1);
  }
  return uVar3;
}



/* Entry: 00701d40; end: 00701ddf;  */

void FUN_00701d40(ulong *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  if ((int)param_1[3] != -1) {
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  }
  for (uVar10 = 0; uVar10 < param_1[2]; uVar10 = uVar10 + 1) {
    puVar6 = *(undefined8 **)(param_1[1] + uVar10 * 8);
    while (puVar6 != (undefined8 *)0x0) {
      uVar1 = *puVar6;
      puVar6 = (undefined8 *)puVar6[1];
      (*param_2)(uVar1,param_3);
    }
  }
  if ((int)param_1[3] != -1) {
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  }
  if ((int)param_1[3] == 0) {
    uVar10 = param_1[2];
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = *param_1 / uVar10;
    }
    if (uVar11 < 3) {
      if (*param_1 < uVar10 && 0x10 < uVar10) {
        uVar10 = uVar10 >> 1;
        if (uVar10 < 0x11) {
          uVar10 = 0x10;
        }
        goto FUN_00701de0;
      }
    }
    else if (0 < (long)uVar10) {
      uVar10 = uVar10 << 1;
FUN_00701de0:
      if (uVar10 >> 0x3d == 0) {
        uVar11 = uVar10 << 3;
        FUN_00701e90();
        if (uVar11 != 0) {
          FUN_00701a74();
          uVar2 = param_1[1];
          uVar3 = param_1[2];
          for (uVar7 = 0; uVar7 != uVar3; uVar7 = uVar7 + 1) {
            lVar5 = *(long *)(uVar2 + uVar7 * 8);
            while (lVar5 != 0) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = *(uint *)(lVar5 + 0x10) / uVar10;
              }
              lVar8 = (ulong)*(uint *)(lVar5 + 0x10) - uVar4 * uVar10;
              lVar9 = *(long *)(lVar5 + 8);
              *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(uVar11 + lVar8 * 8);
              *(long *)(uVar11 + lVar8 * 8) = lVar5;
              lVar5 = lVar9;
            }
          }
          func_0x00701ed0();
          param_1[1] = uVar11;
          param_1[2] = uVar10;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 00701de0; end: 00701e77;  */

void FUN_00701de0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 >> 0x3d == 0) {
    lVar8 = param_2 << 3;
    FUN_00701e90();
    if (lVar8 != 0) {
      FUN_00701a74();
      lVar1 = *(long *)(param_1 + 8);
      lVar2 = *(long *)(param_1 + 0x10);
      for (lVar5 = 0; lVar5 != lVar2; lVar5 = lVar5 + 1) {
        lVar4 = *(long *)(lVar1 + lVar5 * 8);
        while (lVar4 != 0) {
          uVar3 = 0;
          if (param_2 != 0) {
            uVar3 = *(uint *)(lVar4 + 0x10) / param_2;
          }
          lVar6 = (ulong)*(uint *)(lVar4 + 0x10) - uVar3 * param_2;
          lVar7 = *(long *)(lVar4 + 8);
          *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar8 + lVar6 * 8);
          *(long *)(lVar8 + lVar6 * 8) = lVar4;
          lVar4 = lVar7;
        }
      }
      func_0x00701ed0();
      *(long *)(param_1 + 8) = lVar8;
      *(ulong *)(param_1 + 0x10) = param_2;
    }
  }
  return;
}



/* Entry: 00701e78; end: 00701e8f;  */

void FUN_00701e78(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong *unaff_x19;
  ulong uVar9;
  
  *unaff_x19 = param_1;
  if ((int)unaff_x19[3] == 0) {
    uVar5 = unaff_x19[2];
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = *unaff_x19 / uVar5;
    }
    if (uVar9 < 3) {
      if (*unaff_x19 < uVar5 && 0x10 < uVar5) {
        uVar5 = uVar5 >> 1;
        if (uVar5 < 0x11) {
          uVar5 = 0x10;
        }
        goto FUN_00701de0;
      }
    }
    else if (0 < (long)uVar5) {
      uVar5 = uVar5 << 1;
FUN_00701de0:
      if (uVar5 >> 0x3d == 0) {
        uVar9 = uVar5 << 3;
        FUN_00701e90();
        if (uVar9 != 0) {
          FUN_00701a74();
          uVar1 = unaff_x19[1];
          uVar2 = unaff_x19[2];
          for (uVar6 = 0; uVar6 != uVar2; uVar6 = uVar6 + 1) {
            lVar4 = *(long *)(uVar1 + uVar6 * 8);
            while (lVar4 != 0) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = *(uint *)(lVar4 + 0x10) / uVar5;
              }
              lVar7 = (ulong)*(uint *)(lVar4 + 0x10) - uVar3 * uVar5;
              lVar8 = *(long *)(lVar4 + 8);
              *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(uVar9 + lVar7 * 8);
              *(long *)(uVar9 + lVar7 * 8) = lVar4;
              lVar4 = lVar8;
            }
          }
          func_0x00701ed0();
          unaff_x19[1] = uVar9;
          unaff_x19[2] = uVar5;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 00701e90; end: 00701f07;  */

ulong * FUN_00701e90(ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if (0xfffffffffffffff7 < param_1) {
    return (ulong *)0x0;
  }
  puVar1 = (ulong *)(param_1 + 8);
  _malloc();
  puVar2 = puVar1;
  if (puVar1 != (ulong *)0x0) {
    puVar2 = puVar1 + 1;
    *puVar1 = param_1;
  }
  return puVar2;
}



/* Entry: 00701f08; end: 00701f13;  */

void FUN_00701f08(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_0099a088)();
    return;
  }
  return;
}



/* Entry: 00701f14; end: 00701f7f;  */

ulong * FUN_00701f14(long param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if (param_1 != 0) {
    puVar2 = *(ulong **)(param_1 + -8);
    puVar1 = param_2;
    FUN_00701e90();
    if (puVar1 != (ulong *)0x0) {
      if (param_2 <= puVar2) {
        puVar2 = param_2;
      }
      _memcpy(puVar1,param_1,puVar2);
      func_0x00701ed0(param_1);
    }
    return puVar1;
  }
  if ((ulong *)0xfffffffffffffff7 < param_2) {
    return (ulong *)0x0;
  }
  puVar2 = param_2 + 1;
  _malloc();
  puVar1 = puVar2;
  if (puVar2 != (ulong *)0x0) {
    puVar1 = puVar2 + 1;
    *puVar2 = (ulong)param_2;
  }
  return puVar1;
}



/* Entry: 00701f80; end: 00701fcf;  */

byte FUN_00701f80(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *param_2 ^ *param_1 | bVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return bVar1;
}


