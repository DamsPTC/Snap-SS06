/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a13a40; end: 103a13a7f;  */

void FUN_103a13a40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3a110;
  func_0x000107c61520(&UNK_10dc3a110,&UNK_1106becd0);
  puRam0000000112fc9e38 = puVar1;
  return;
}



/* Entry: 103a13a80; end: 103a13aa3;  */

void FUN_103a13a80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103a13aa4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103a13aa4; end: 103a13ae3;  */

void FUN_103a13aa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3a180;
  func_0x000107c61520(&UNK_10dc3a180,&UNK_1106bed70);
  puRam0000000112fc9e40 = puVar1;
  return;
}



/* Entry: 103a13ae4; end: 103a13af7;  */

void FUN_103a13ae4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103a1236c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103a13b28();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a13af8; end: 103a13b27;  */

void FUN_103a13af8(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103a13b28; end: 103a13b67;  */

void FUN_103a13b28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc3a138;
  func_0x000107c61520(&DAT_10dc3a138,&UNK_1106bed70);
  puRam0000000112fc9e48 = puVar1;
  return;
}



/* Entry: 103a13b68; end: 103a13b6b;  */

void FUN_103a13b68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3a1e8;
  func_0x000107c61520(&UNK_10dc3a1e8,&UNK_1106bed70);
  puRam0000000112fc9e50 = puVar1;
  return;
}



/* Entry: 103a13b6c; end: 103a13bab;  */

void FUN_103a13b6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3a1e8;
  func_0x000107c61520(&UNK_10dc3a1e8,&UNK_1106bed70);
  puRam0000000112fc9e50 = puVar1;
  return;
}



/* Entry: 103a13bac; end: 103a13d1f;  */

int FUN_103a13bac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103a13c28;
        goto LAB_103a13c0c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103a13c0c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103a13c28:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103a13d20; end: 103a14013;  */

/* WARNING: Possible PIC construction at 0x000103a13e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a13e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a13e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a13f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a13fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a13fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a13ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a13f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a13f2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a13f10) */
/* WARNING: Removing unreachable block (ram,0x000103a13de0) */
/* WARNING: Removing unreachable block (ram,0x000103a13fe8) */
/* WARNING: Removing unreachable block (ram,0x000103a13fc8) */
/* WARNING: Removing unreachable block (ram,0x000103a13fa0) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x000103a13e94) */
/* WARNING: Removing unreachable block (ram,0x000103a13ff4) */
/* WARNING: Removing unreachable block (ram,0x000103a13e74) */
/* WARNING: Removing unreachable block (ram,0x000103a13e4c) */
/* WARNING: Removing unreachable block (ram,0x000100d65078) */
/* WARNING: Removing unreachable block (ram,0x000100d65088) */
/* WARNING: Removing unreachable block (ram,0x000100d65084) */
/* WARNING: Removing unreachable block (ram,0x000103a13f30) */
/* WARNING: Removing unreachable block (ram,0x000100de78a0) */
/* WARNING: Removing unreachable block (ram,0x000100de78b0) */
/* WARNING: Removing unreachable block (ram,0x000100de78ac) */

void FUN_103a13d20(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 in_stack_000000a0;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  ulong uStack_d0;
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
  
  uVar3 = in_stack_00000030;
  uVar2 = in_stack_00000010;
  puVar1 = &stack0xfffffffffffffff0;
  switch(in_stack_000000a0) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xf:
  case 0x12:
    func_0x000107c61434();
    func_0x000107c61434(param_2);
    param_1 = param_3;
    param_2 = param_4;
    break;
  case 0xc:
    break;
  case 0xd:
  case 0x10:
  case 0x11:
    unaff_x30 = 0x103a13de0;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    unaff_x19 = param_3;
    unaff_x20 = uVar2;
    unaff_x29 = puVar1;
    break;
  case 0xe:
    uStack_70 = in_stack_00000060;
    uStack_78 = in_stack_00000058;
    func_0x000107c61434();
    func_0x000107c61434(param_2);
    unaff_x30 = 0x103a13f10;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    param_1 = param_4;
    param_2 = param_5;
    unaff_x19 = param_4;
    unaff_x20 = uVar3;
    unaff_x29 = puVar1;
    break;
  case 0x13:
    uStack_c8 = in_stack_00000078;
    uStack_70 = in_stack_00000060;
    uStack_80 = in_stack_00000080;
    uStack_78 = in_stack_00000058;
    uStack_a0 = in_stack_00000048;
    uStack_98 = in_stack_00000050;
    uStack_90 = in_stack_00000068;
    uStack_88 = in_stack_00000070;
    uStack_b0 = in_stack_00000038;
    uStack_a8 = in_stack_00000040;
    uStack_b8 = in_stack_00000030;
    uStack_d0 = param_4;
    uStack_c0 = param_7;
    func_0x000107c61434();
    func_0x000107c61434(param_2);
    unaff_x30 = 0x103a13fa0;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    param_1 = param_3;
    param_2 = uStack_d0;
    unaff_x19 = param_8;
    unaff_x20 = uVar2;
    unaff_x29 = puVar1;
    break;
  case 0x14:
    uStack_c8 = in_stack_00000098;
    uStack_d0 = in_stack_00000090;
    uStack_d8 = in_stack_00000088;
    unaff_x30 = 0x103a13e4c;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    unaff_x19 = param_8;
    unaff_x20 = uVar2;
    unaff_x29 = puVar1;
    uStack_c0 = param_7;
    uStack_b8 = in_stack_00000030;
    uStack_b0 = in_stack_00000038;
    uStack_a8 = in_stack_00000040;
    uStack_a0 = in_stack_00000048;
    uStack_98 = in_stack_00000050;
    uStack_90 = in_stack_00000068;
    uStack_88 = in_stack_00000070;
    uStack_80 = in_stack_00000080;
    uStack_78 = in_stack_00000058;
    uStack_70 = in_stack_00000060;
    break;
  default:
    return;
  }
  uVar4 = (uint)(param_2 >> 0x3e);
  if (uVar4 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 103a14014; end: 103a1407b;  */

void FUN_103a14014(undefined8 *param_1)

{
  FUN_103a1407c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],param_1[0x18],param_1[0x19],
                param_1[0x1a],param_1[0x1b],*(undefined1 *)(param_1 + 0x1c));
  return;
}



/* Entry: 103a1407c; end: 103a1469b;  */

/* WARNING: Possible PIC construction at 0x000103a141a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a141cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a141ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a142f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a14320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a14340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a14138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a14268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a14288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a1426c) */
/* WARNING: Removing unreachable block (ram,0x000103a1413c) */
/* WARNING: Removing unreachable block (ram,0x000103a14344) */
/* WARNING: Removing unreachable block (ram,0x000103a14324) */
/* WARNING: Removing unreachable block (ram,0x000103a142fc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000103a141f0) */
/* WARNING: Removing unreachable block (ram,0x000103a14350) */
/* WARNING: Removing unreachable block (ram,0x000103a141d0) */
/* WARNING: Removing unreachable block (ram,0x000103a141a8) */
/* WARNING: Removing unreachable block (ram,0x000100d65094) */
/* WARNING: Removing unreachable block (ram,0x000100d650a4) */
/* WARNING: Removing unreachable block (ram,0x000100d650a0) */
/* WARNING: Removing unreachable block (ram,0x000103a1428c) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */

void FUN_103a1407c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  ulong in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined1 in_stack_000000a0;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  ulong uStack_d0;
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
  
  uVar3 = in_stack_00000030;
  uVar2 = in_stack_00000010;
  puVar1 = &stack0xfffffffffffffff0;
  switch(in_stack_000000a0) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xf:
  case 0x12:
    func_0x000107c6142c();
    func_0x000107c6142c(param_2);
    param_1 = param_3;
    param_2 = param_4;
    break;
  case 0xc:
    break;
  case 0xd:
  case 0x10:
  case 0x11:
    unaff_x30 = 0x103a1413c;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    unaff_x19 = param_3;
    unaff_x20 = uVar2;
    unaff_x29 = puVar1;
    break;
  case 0xe:
    uStack_70 = in_stack_00000060;
    uStack_78 = in_stack_00000058;
    func_0x000107c6142c();
    func_0x000107c6142c(param_2);
    unaff_x30 = 0x103a1426c;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    param_1 = param_4;
    param_2 = param_5;
    unaff_x19 = param_4;
    unaff_x20 = uVar3;
    unaff_x29 = puVar1;
    break;
  case 0x13:
    uStack_c8 = in_stack_00000078;
    uStack_70 = in_stack_00000060;
    uStack_80 = in_stack_00000080;
    uStack_78 = in_stack_00000058;
    uStack_a0 = in_stack_00000048;
    uStack_98 = in_stack_00000050;
    uStack_90 = in_stack_00000068;
    uStack_88 = in_stack_00000070;
    uStack_b0 = in_stack_00000038;
    uStack_a8 = in_stack_00000040;
    uStack_b8 = in_stack_00000030;
    uStack_d0 = param_4;
    uStack_c0 = param_7;
    func_0x000107c6142c();
    func_0x000107c6142c(param_2);
    unaff_x30 = 0x103a142fc;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    param_1 = param_3;
    param_2 = uStack_d0;
    unaff_x19 = param_8;
    unaff_x20 = uVar2;
    unaff_x29 = puVar1;
    break;
  case 0x14:
    uStack_c8 = in_stack_00000098;
    uStack_d0 = in_stack_00000090;
    uStack_d8 = in_stack_00000088;
    unaff_x30 = 0x103a141a8;
    register0x00000008 = (BADSPACEBASE *)auStack_e0;
    unaff_x19 = param_8;
    unaff_x20 = uVar2;
    unaff_x29 = puVar1;
    uStack_c0 = param_7;
    uStack_b8 = in_stack_00000030;
    uStack_b0 = in_stack_00000038;
    uStack_a8 = in_stack_00000040;
    uStack_a0 = in_stack_00000048;
    uStack_98 = in_stack_00000050;
    uStack_90 = in_stack_00000068;
    uStack_88 = in_stack_00000070;
    uStack_80 = in_stack_00000080;
    uStack_78 = in_stack_00000058;
    uStack_70 = in_stack_00000060;
    break;
  default:
    return;
  }
  uVar4 = (uint)(param_2 >> 0x3e);
  if (uVar4 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103a1469c; end: 103a146e7;  */

void FUN_103a1469c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x10];
  uVar5 = param_2[0x12];
  uVar7 = param_2[0x15];
  uVar6 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar5;
  param_1[0x15] = uVar7;
  param_1[0x14] = uVar6;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  uVar2 = param_2[0x17];
  uVar1 = param_2[0x16];
  uVar4 = param_2[0x19];
  uVar3 = param_2[0x18];
  uVar6 = param_2[0x1b];
  uVar5 = param_2[0x1a];
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar3;
  param_1[0x1b] = uVar6;
  param_1[0x1a] = uVar5;
  param_1[0x17] = uVar2;
  param_1[0x16] = uVar1;
  return;
}



/* Entry: 103a146e8; end: 103a147a3;  */

undefined8 * FUN_103a146e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  uVar9 = *(undefined1 *)(param_2 + 0x1c);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar12 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar18 = param_1[0xd];
  uVar17 = param_1[0xc];
  uVar20 = param_1[0xf];
  uVar19 = param_1[0xe];
  uVar22 = param_1[0x11];
  uVar21 = param_1[0x10];
  uVar24 = param_1[0x13];
  uVar23 = param_1[0x12];
  uVar26 = param_1[0x15];
  uVar25 = param_1[0x14];
  uVar28 = param_1[0x17];
  uVar27 = param_1[0x16];
  uVar30 = param_1[0x19];
  uVar29 = param_1[0x18];
  uVar4 = param_1[0x1a];
  uVar8 = param_1[0x1b];
  uVar10 = *(undefined1 *)(param_1 + 0x1c);
  uVar31 = *param_2;
  uVar33 = param_2[3];
  uVar32 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar31;
  param_1[3] = uVar33;
  param_1[2] = uVar32;
  uVar31 = param_2[4];
  uVar33 = param_2[7];
  uVar32 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar31;
  param_1[7] = uVar33;
  param_1[6] = uVar32;
  uVar31 = param_2[8];
  uVar33 = param_2[0xb];
  uVar32 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar31;
  param_1[0xb] = uVar33;
  param_1[10] = uVar32;
  uVar31 = param_2[0xc];
  uVar33 = param_2[0xf];
  uVar32 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar31;
  param_1[0xf] = uVar33;
  param_1[0xe] = uVar32;
  uVar31 = param_2[0x10];
  uVar33 = param_2[0x13];
  uVar32 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar31;
  param_1[0x13] = uVar33;
  param_1[0x12] = uVar32;
  uVar31 = param_2[0x14];
  uVar33 = param_2[0x17];
  uVar32 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar31;
  param_1[0x17] = uVar33;
  param_1[0x16] = uVar32;
  uVar31 = param_2[0x18];
  uVar33 = param_2[0x1b];
  uVar32 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar31;
  param_1[0x1b] = uVar33;
  param_1[0x1a] = uVar32;
  *(undefined1 *)(param_1 + 0x1c) = uVar9;
  FUN_103a1407c(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17
                ,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,uVar28,uVar29
                ,uVar30,uVar4,uVar8,uVar10);
  return param_1;
}



/* Entry: 103a147a4; end: 103a14953;  */

int FUN_103a147a4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xeb < param_2) && (*(char *)((long)param_1 + 0xe1) != '\0')) {
    return *param_1 + 0xec;
  }
  uVar1 = *(byte *)(param_1 + 0x38) ^ 0xff;
  if (*(byte *)(param_1 + 0x38) < 0x15) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103a14954; end: 103a14a07;  */

undefined8 * FUN_103a14954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)((long)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
  return param_1;
}



/* Entry: 103a14a08; end: 103a14ad7;  */

undefined8 * FUN_103a14a08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar5 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar5,uVar2);
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  param_1[2] = uVar5;
  param_1[3] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  uVar4 = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)((long)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 5) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 6) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 7) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
  return param_1;
}



/* Entry: 103a14ad8; end: 103a14b7b;  */

undefined8 * FUN_103a14ad8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c6142c(*param_1);
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar2,uVar3);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)((long)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined1 *)((long)param_1 + 0x3c) = *(undefined1 *)((long)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined1 *)((long)param_1 + 0x45) = *(undefined1 *)((long)param_2 + 0x45);
  return param_1;
}



/* Entry: 103a14b7c; end: 103a14c2b;  */

int FUN_103a14b7c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x46) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a14c2c; end: 103a14cdf;  */

undefined8 * FUN_103a14c2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = param_2[10];
  uVar3 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xc] = uVar3;
  *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
  return param_1;
}



/* Entry: 103a14ce0; end: 103a14daf;  */

undefined8 * FUN_103a14ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  param_1[2] = uVar4;
  param_1[3] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  uVar4 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar4;
  uVar4 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar4;
  uVar4 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar4;
  uVar4 = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = uVar4;
  uVar4 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xc] = uVar4;
  *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
  return param_1;
}



/* Entry: 103a14db0; end: 103a14e53;  */

undefined8 * FUN_103a14db0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = param_2[10];
  uVar1 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xc] = uVar1;
  *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
  return param_1;
}



/* Entry: 103a14e54; end: 103a14f07;  */

int FUN_103a14e54(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x6a) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a14f08; end: 103a14f9f;  */

undefined8 * FUN_103a14f08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 103a14fa0; end: 103a14fdf;  */

undefined8 * FUN_103a14fa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 103a14fe0; end: 103a1523f;  */

int FUN_103a14fe0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = (*(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103a15240; end: 103a152e3;  */

/* WARNING: Possible PIC construction at 0x000103a15264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a1529c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a15268) */
/* WARNING: Removing unreachable block (ram,0x000103a15278) */
/* WARNING: Removing unreachable block (ram,0x000103a15280) */
/* WARNING: Removing unreachable block (ram,0x000103a152a0) */
/* WARNING: Removing unreachable block (ram,0x000103a152b0) */
/* WARNING: Removing unreachable block (ram,0x000103a152b8) */
/* WARNING: Removing unreachable block (ram,0x000103a152d4) */
/* WARNING: Removing unreachable block (ram,0x000103a152c8) */
/* WARNING: Removing unreachable block (ram,0x000103a15298) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103a15240(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[3];
  uVar2 = (uint)((ulong)param_1[4] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[4] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103a152e4; end: 103a1544b;  */

undefined8 * FUN_103a152e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar4 = param_2[3];
  uVar2 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar4,uVar2);
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  uVar3 = param_2[6];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[5];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[5] = uVar4;
    param_1[6] = uVar3;
  }
  else {
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
  }
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar4 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar4;
  uVar3 = param_2[0x10];
  func_0x000107c61434();
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0xf];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0xf] = uVar4;
    param_1[0x10] = uVar3;
  }
  else {
    uVar4 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar4;
  }
  uVar3 = param_2[0x12];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x11];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x11] = uVar4;
    param_1[0x12] = uVar3;
  }
  else {
    uVar4 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar4;
  }
  uVar3 = param_2[0x14];
  if (uVar3 >> 0x3c < 0xf) {
    uVar4 = param_2[0x13];
    func_0x00010006c00c(uVar4,uVar3);
    param_1[0x13] = uVar4;
    param_1[0x14] = uVar3;
  }
  else {
    uVar4 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
  }
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  return param_1;
}



/* Entry: 103a1544c; end: 103a156f3;  */

undefined8 * FUN_103a1544c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar3 = param_2[3];
  uVar5 = param_2[4];
  func_0x00010006c00c(uVar3,uVar5);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  param_1[3] = uVar3;
  param_1[4] = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  uVar4 = param_2[6];
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) {
      func_0x0001006e5814(param_1 + 5);
      goto LAB_103a15504;
    }
    uVar5 = param_2[5];
    func_0x00010006c00c(uVar5,uVar4);
    uVar3 = param_1[5];
    uVar1 = param_1[6];
    param_1[5] = uVar5;
    param_1[6] = uVar4;
    func_0x00010006c090(uVar3,uVar1);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[5] = uVar3;
    param_1[6] = uVar4;
  }
  else {
LAB_103a15504:
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
  }
  uVar3 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar3;
  uVar3 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar3;
  uVar3 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar3;
  param_1[0xd] = param_2[0xd];
  uVar3 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c6142c(uVar3);
  uVar4 = param_2[0x10];
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) {
      func_0x0001006e5814(param_1 + 0xf);
      goto LAB_103a155c8;
    }
    uVar5 = param_2[0xf];
    func_0x00010006c00c(uVar5,uVar4);
    uVar3 = param_1[0xf];
    uVar1 = param_1[0x10];
    param_1[0xf] = uVar5;
    param_1[0x10] = uVar4;
    func_0x00010006c090(uVar3,uVar1);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[0xf];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar4;
  }
  else {
LAB_103a155c8:
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
  }
  uVar4 = param_2[0x12];
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) {
      func_0x0001006e5814(param_1 + 0x11);
      goto LAB_103a1563c;
    }
    uVar5 = param_2[0x11];
    func_0x00010006c00c(uVar5,uVar4);
    uVar3 = param_1[0x11];
    uVar1 = param_1[0x12];
    param_1[0x11] = uVar5;
    param_1[0x12] = uVar4;
    func_0x00010006c090(uVar3,uVar1);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[0x11];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar4;
  }
  else {
LAB_103a1563c:
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
  }
  uVar4 = param_2[0x14];
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      uVar5 = param_2[0x13];
      func_0x00010006c00c(uVar5,uVar4);
      uVar3 = param_1[0x13];
      uVar1 = param_1[0x14];
      param_1[0x13] = uVar5;
      param_1[0x14] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
      goto LAB_103a156d8;
    }
    func_0x0001006e5814(param_1 + 0x13);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[0x13];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
    goto LAB_103a156d8;
  }
  uVar3 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar3;
LAB_103a156d8:
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  return param_1;
}



/* Entry: 103a156f4; end: 103a1572f;  */

void FUN_103a156f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x10];
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  uVar7 = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)((long)param_1 + 0xa1) = *(undefined8 *)((long)param_2 + 0xa1);
  *(undefined8 *)((long)param_1 + 0x99) = uVar7;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  return;
}



/* Entry: 103a15730; end: 103a158e3;  */

undefined8 * FUN_103a15730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001006e5814(param_1 + 5);
      goto LAB_103a157a4;
    }
    uVar1 = param_1[5];
    param_1[5] = param_2[5];
    param_1[6] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103a157a4:
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
  }
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_2[0xe];
  uVar2 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  func_0x000107c6142c(uVar2);
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    uVar3 = param_2[0x10];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001006e5814(param_1 + 0xf);
      goto LAB_103a15828;
    }
    uVar1 = param_1[0xf];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103a15828:
    uVar1 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar1;
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001006e5814(param_1 + 0x11);
      goto LAB_103a1586c;
    }
    uVar1 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103a1586c:
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
  }
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    uVar3 = param_2[0x14];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0x13];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_103a158cc;
    }
    func_0x0001006e5814(param_1 + 0x13);
  }
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
LAB_103a158cc:
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  return param_1;
}



/* Entry: 103a158e4; end: 103a15b43;  */

int FUN_103a158e4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xa9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a15b44; end: 103a15baf;  */

undefined8 * FUN_103a15b44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)((long)param_1 + 0x24) = *(undefined2 *)((long)param_2 + 0x24);
  return param_1;
}



/* Entry: 103a15bb0; end: 103a15c3f;  */

undefined8 * FUN_103a15bb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar5 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar5,uVar2);
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  param_1[2] = uVar5;
  param_1[3] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  uVar4 = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  return param_1;
}



/* Entry: 103a15c40; end: 103a15c53;  */

void FUN_103a15c40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)((long)param_1 + 0x1e) = *(undefined8 *)((long)param_2 + 0x1e);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 103a15c54; end: 103a15caf;  */

undefined8 * FUN_103a15c54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined2 *)((long)param_1 + 0x24) = *(undefined2 *)((long)param_2 + 0x24);
  return param_1;
}



/* Entry: 103a15cb0; end: 103a15d4f;  */

int FUN_103a15cb0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x26) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a15d50; end: 103a15def;  */

undefined8 * FUN_103a15d50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  return param_1;
}



/* Entry: 103a15df0; end: 103a15e2f;  */

undefined8 * FUN_103a15df0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  return param_1;
}



/* Entry: 103a15e30; end: 103a15ef3;  */

int FUN_103a15e30(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = (*(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103a15ef4; end: 103a15f1f;  */

void FUN_103a15ef4(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103a15f20; end: 103a15fcb;  */

undefined8 * FUN_103a15f20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 103a15fcc; end: 103a16013;  */

undefined8 * FUN_103a15fcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103a16014; end: 103a160ab;  */

int FUN_103a16014(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a160ac; end: 103a160db;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103a160ac(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = (uint)((ulong)param_1[3] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[3] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103a160dc; end: 103a1613f;  */

undefined8 * FUN_103a160dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 103a16140; end: 103a161bf;  */

undefined8 * FUN_103a16140(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  param_1[2] = uVar4;
  param_1[3] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 103a161c0; end: 103a16213;  */

undefined8 * FUN_103a161c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 103a16214; end: 103a162af;  */

int FUN_103a16214(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a162b0; end: 103a16363;  */

/* WARNING: Possible PIC construction at 0x000103a162d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a16304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a16334: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a162d8) */
/* WARNING: Removing unreachable block (ram,0x000103a162e8) */
/* WARNING: Removing unreachable block (ram,0x000103a162f0) */
/* WARNING: Removing unreachable block (ram,0x000103a16308) */
/* WARNING: Removing unreachable block (ram,0x000103a16318) */
/* WARNING: Removing unreachable block (ram,0x000103a16320) */
/* WARNING: Removing unreachable block (ram,0x000103a16338) */
/* WARNING: Removing unreachable block (ram,0x000103a16354) */
/* WARNING: Removing unreachable block (ram,0x000103a16348) */
/* WARNING: Removing unreachable block (ram,0x000103a16330) */
/* WARNING: Removing unreachable block (ram,0x000103a16300) */

void FUN_103a162b0(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[3];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 103a16364; end: 103a1652f;  */

undefined8 * FUN_103a16364(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar4 = param_2[8];
  if (uVar4 >> 0x3c < 0xf) {
    param_1[5] = param_2[5];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar3 = param_2[7];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[7] = uVar3;
    param_1[8] = uVar4;
  }
  else {
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  uVar4 = param_2[0xc];
  if (uVar4 >> 0x3c < 0xf) {
    param_1[9] = param_2[9];
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar3 = param_2[0xb];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar4;
  }
  else {
    uVar3 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
  }
  uVar4 = param_2[0x10];
  if (uVar4 >> 0x3c < 0xf) {
    param_1[0xd] = param_2[0xd];
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar3 = param_2[0xf];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar4;
  }
  else {
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
  }
  uVar4 = param_2[0x14];
  if (uVar4 >> 0x3c < 0xf) {
    param_1[0x11] = param_2[0x11];
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar3 = param_2[0x13];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar4;
  }
  else {
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
  }
  uVar4 = param_2[0x18];
  if (uVar4 >> 0x3c < 0xf) {
    param_1[0x15] = param_2[0x15];
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar3 = param_2[0x17];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar4;
  }
  else {
    uVar3 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar3;
    uVar3 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar3;
  }
  return param_1;
}



/* Entry: 103a16530; end: 103a1690b;  */

undefined8 * FUN_103a16530(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  func_0x00010006c00c(uVar2,uVar4);
  uVar3 = param_1[2];
  uVar1 = param_1[3];
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if ((ulong)param_1[8] >> 0x3c < 0xf) {
    if ((ulong)param_2[8] >> 0x3c < 0xf) {
      param_1[5] = param_2[5];
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      uVar2 = param_2[7];
      uVar4 = param_2[8];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[7];
      uVar1 = param_1[8];
      param_1[7] = uVar2;
      param_1[8] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_103a1690c(param_1 + 5);
      uVar3 = param_2[8];
      uVar2 = param_2[7];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      param_1[8] = uVar3;
      param_1[7] = uVar2;
    }
  }
  else if ((ulong)param_2[8] >> 0x3c < 0xf) {
    param_1[5] = param_2[5];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar2 = param_2[7];
    uVar3 = param_2[8];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[7] = uVar2;
    param_1[8] = uVar3;
  }
  else {
    uVar3 = param_2[6];
    uVar2 = param_2[5];
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    param_1[5] = uVar2;
  }
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xc] >> 0x3c < 0xf) {
      param_1[9] = param_2[9];
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      uVar2 = param_2[0xb];
      uVar4 = param_2[0xc];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0xb];
      uVar1 = param_1[0xc];
      param_1[0xb] = uVar2;
      param_1[0xc] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_103a1690c(param_1 + 9);
      uVar3 = param_2[0xc];
      uVar2 = param_2[0xb];
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      param_1[0xc] = uVar3;
      param_1[0xb] = uVar2;
    }
  }
  else if ((ulong)param_2[0xc] >> 0x3c < 0xf) {
    param_1[9] = param_2[9];
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = param_2[0xb];
    uVar3 = param_2[0xc];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
  }
  else {
    uVar3 = param_2[10];
    uVar2 = param_2[9];
    uVar4 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
    param_1[9] = uVar2;
  }
  if ((ulong)param_1[0x10] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x10] >> 0x3c < 0xf) {
      param_1[0xd] = param_2[0xd];
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      uVar2 = param_2[0xf];
      uVar4 = param_2[0x10];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0xf];
      uVar1 = param_1[0x10];
      param_1[0xf] = uVar2;
      param_1[0x10] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_103a1690c(param_1 + 0xd);
      uVar3 = param_2[0x10];
      uVar2 = param_2[0xf];
      uVar4 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar4;
      param_1[0x10] = uVar3;
      param_1[0xf] = uVar2;
    }
  }
  else if ((ulong)param_2[0x10] >> 0x3c < 0xf) {
    param_1[0xd] = param_2[0xd];
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar2 = param_2[0xf];
    uVar3 = param_2[0x10];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xf] = uVar2;
    param_1[0x10] = uVar3;
  }
  else {
    uVar3 = param_2[0xe];
    uVar2 = param_2[0xd];
    uVar4 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
    param_1[0xd] = uVar2;
  }
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x14] >> 0x3c < 0xf) {
      param_1[0x11] = param_2[0x11];
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      uVar2 = param_2[0x13];
      uVar4 = param_2[0x14];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0x13];
      uVar1 = param_1[0x14];
      param_1[0x13] = uVar2;
      param_1[0x14] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_103a1690c(param_1 + 0x11);
      uVar3 = param_2[0x14];
      uVar2 = param_2[0x13];
      uVar4 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar4;
      param_1[0x14] = uVar3;
      param_1[0x13] = uVar2;
    }
  }
  else if ((ulong)param_2[0x14] >> 0x3c < 0xf) {
    param_1[0x11] = param_2[0x11];
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar2 = param_2[0x13];
    uVar3 = param_2[0x14];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x13] = uVar2;
    param_1[0x14] = uVar3;
  }
  else {
    uVar3 = param_2[0x12];
    uVar2 = param_2[0x11];
    uVar4 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
    param_1[0x12] = uVar3;
    param_1[0x11] = uVar2;
  }
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x18] >> 0x3c < 0xf) {
      param_1[0x15] = param_2[0x15];
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
      uVar2 = param_2[0x17];
      uVar4 = param_2[0x18];
      func_0x00010006c00c(uVar2,uVar4);
      uVar3 = param_1[0x17];
      uVar1 = param_1[0x18];
      param_1[0x17] = uVar2;
      param_1[0x18] = uVar4;
      func_0x00010006c090(uVar3,uVar1);
    }
    else {
      FUN_103a1690c(param_1 + 0x15);
      uVar3 = param_2[0x18];
      uVar2 = param_2[0x17];
      uVar4 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      param_1[0x18] = uVar3;
      param_1[0x17] = uVar2;
    }
  }
  else if ((ulong)param_2[0x18] >> 0x3c < 0xf) {
    param_1[0x15] = param_2[0x15];
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar2 = param_2[0x17];
    uVar3 = param_2[0x18];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x17] = uVar2;
    param_1[0x18] = uVar3;
  }
  else {
    uVar3 = param_2[0x16];
    uVar2 = param_2[0x15];
    uVar4 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar4;
    param_1[0x16] = uVar3;
    param_1[0x15] = uVar2;
  }
  return param_1;
}



/* Entry: 103a1690c; end: 103a16b67;  */

undefined8 FUN_103a1690c(undefined8 param_1)

{
  (*(code *)&DAT_10460551c)();
  return param_1;
}



/* Entry: 103a16b68; end: 103a16c2f;  */

int FUN_103a16b68(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x19] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103a16c30; end: 103a16cef;  */

/* WARNING: Possible PIC construction at 0x000103a16c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a16c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a16ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a16c4c) */
/* WARNING: Removing unreachable block (ram,0x000103a16c5c) */
/* WARNING: Removing unreachable block (ram,0x000103a16c64) */
/* WARNING: Removing unreachable block (ram,0x000103a16c7c) */
/* WARNING: Removing unreachable block (ram,0x000103a16c8c) */
/* WARNING: Removing unreachable block (ram,0x000103a16c94) */
/* WARNING: Removing unreachable block (ram,0x000103a16cac) */
/* WARNING: Removing unreachable block (ram,0x000103a16cbc) */
/* WARNING: Removing unreachable block (ram,0x000103a16cc4) */
/* WARNING: Removing unreachable block (ram,0x000103a16ce0) */
/* WARNING: Removing unreachable block (ram,0x000103a16cd4) */
/* WARNING: Removing unreachable block (ram,0x000103a16ca4) */
/* WARNING: Removing unreachable block (ram,0x000103a16c74) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103a16c30(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103a16cf0; end: 103a1733f;  */

undefined8 * FUN_103a16cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[6];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[3] = param_2[3];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    uVar1 = param_2[5];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[5] = uVar1;
    param_1[6] = uVar2;
  }
  else {
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
  }
  uVar2 = param_2[10];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[7] = param_2[7];
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar1 = param_2[9];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[9] = uVar1;
    param_1[10] = uVar2;
  }
  else {
    uVar1 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar1;
    uVar1 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar1;
  }
  uVar2 = param_2[0xe];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[0xb] = param_2[0xb];
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar1 = param_2[0xd];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
  }
  else {
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
  }
  uVar2 = param_2[0x12];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[0xf] = param_2[0xf];
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar1 = param_2[0x11];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
  }
  else {
    uVar1 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar1;
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
  }
  uVar2 = param_2[0x16];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[0x13] = param_2[0x13];
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar1 = param_2[0x15];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0x15] = uVar1;
    param_1[0x16] = uVar2;
  }
  else {
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
    uVar1 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar1;
  }
  *(undefined2 *)(param_1 + 0x17) = *(undefined2 *)(param_2 + 0x17);
  uVar2 = param_2[0x1b];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[0x18] = param_2[0x18];
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    uVar1 = param_2[0x1a];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[0x1a] = uVar1;
    param_1[0x1b] = uVar2;
  }
  else {
    uVar1 = param_2[0x18];
    uVar4 = param_2[0x1b];
    uVar3 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar1;
    param_1[0x1b] = uVar4;
    param_1[0x1a] = uVar3;
  }
  return param_1;
}



/* Entry: 103a17340; end: 103a175a7;  */

undefined8 * FUN_103a17340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001015ef434(param_1 + 3);
      goto LAB_103a17398;
    }
    param_1[3] = param_2[3];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    uVar1 = param_1[5];
    param_1[5] = param_2[5];
    param_1[6] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103a17398:
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
  }
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar3 = param_2[10];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001015ef434(param_1 + 7);
      goto LAB_103a173f4;
    }
    param_1[7] = param_2[7];
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar1 = param_1[9];
    param_1[9] = param_2[9];
    param_1[10] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103a173f4:
    uVar1 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar1;
    uVar1 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar1;
  }
  if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
    uVar3 = param_2[0xe];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001015ef434(param_1 + 0xb);
      goto LAB_103a17450;
    }
    param_1[0xb] = param_2[0xb];
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar1 = param_1[0xd];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103a17450:
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar3 = param_2[0x12];
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001015ef434(param_1 + 0xf);
      goto LAB_103a174ac;
    }
    param_1[0xf] = param_2[0xf];
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar1 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103a174ac:
    uVar1 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar1;
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
  }
  if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
    uVar3 = param_2[0x16];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0x13] = param_2[0x13];
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar1 = param_1[0x15];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = uVar3;
      func_0x00010006c090(uVar1);
      goto LAB_103a1753c;
    }
    func_0x0001015ef434(param_1 + 0x13);
  }
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar1;
LAB_103a1753c:
  *(undefined2 *)(param_1 + 0x17) = *(undefined2 *)(param_2 + 0x17);
  if ((ulong)param_1[0x1b] >> 0x3c < 0xf) {
    uVar3 = param_2[0x1b];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[0x18] = param_2[0x18];
      *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
      uVar1 = param_1[0x1a];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x1b] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_103a1690c(param_1 + 0x18);
  }
  uVar1 = param_2[0x18];
  uVar4 = param_2[0x1b];
  uVar2 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar1;
  param_1[0x1b] = uVar4;
  param_1[0x1a] = uVar2;
  return param_1;
}



/* Entry: 103a175a8; end: 103a17693;  */

int FUN_103a175a8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x38] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = (*(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103a17694; end: 103a17c93;  */

void FUN_103a17694(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca4a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc3a154;
  func_0x000107c61520(&DAT_10dc3a154,&UNK_1106bed70);
  puRam0000000112fca4a0 = puVar1;
  return;
}



/* Entry: 103a17c94; end: 103a17ccb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103a17c94(ulong param_1,ulong param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 == '\x03') {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 103a17ccc; end: 103a17d13;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103a17ccc(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 103a17d14; end: 103a17d3f;  */

void FUN_103a17d14(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 103a17d40; end: 103a17d87;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103a17d40(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 103a17d88; end: 103a17e2b;  */

void FUN_103a17d88(undefined8 *param_1)

{
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
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
  return;
}



/* Entry: 103a17e2c; end: 103a17eab;  */

void FUN_103a17e2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca6b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd1c2e0;
  func_0x000107c61520(&DAT_10dd1c2e0,&UNK_11078dd70);
  puRam0000000112fca6b8 = puVar1;
  return;
}



/* Entry: 103a17eac; end: 103a17eeb;  */

undefined8 FUN_103a17eac(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103a17eec; end: 103a182cf;  */

void FUN_103a17eec(undefined8 *param_1)

{
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
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
  *(undefined1 *)(param_1 + 0x1c) = 0xff;
  return;
}



/* Entry: 103a182d0; end: 103a18317;  */

void FUN_103a182d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3ae20,0x15,2);
  uRam000000011380cbc0 = uStack_38;
  uRam000000011380cbb8 = uStack_40;
  uRam000000011380cbd0 = uStack_28;
  uRam000000011380cbc8 = uStack_30;
  uRam000000011380cbe0 = uStack_18;
  uRam000000011380cbd8 = uStack_20;
  return;
}



/* Entry: 103a18318; end: 103a183af;  */

void FUN_103a18318(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103a1836c:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000103a18388;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_103a18354;
code_r0x000103a18388:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_103a18354:
    (*pcVar3)();
  }
  goto LAB_103a1836c;
}



/* Entry: 103a183b0; end: 103a18453;  */

void FUN_103a183b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103a18454; end: 103a18493;  */

void FUN_103a18454(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 103a18494; end: 103a184c3;  */

undefined1  [16] FUN_103a18494(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103a184c4; end: 103a184f7;  */

void FUN_103a184c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103a184f8; end: 103a1850b;  */

undefined1  [16] FUN_103a184f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103a18508;
  return auVar1;
}



/* Entry: 103a1850c; end: 103a18533;  */

void FUN_103a1850c(void)

{
  FUN_103a18318();
  return;
}



/* Entry: 103a18534; end: 103a18537;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a18534(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103a18538; end: 103a1856f;  */

uint FUN_103a18538(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103a19820();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103a18570; end: 103a185b7;  */

uint FUN_103a18570(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_103a18e80(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103a185b8; end: 103a18657;  */

/* WARNING: Possible PIC construction at 0x000103a18604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a18614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a18608) */
/* WARNING: Removing unreachable block (ram,0x000103a18618) */

void FUN_103a185b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fca6e0 != -1) {
    func_0x000107c61568(0x112fca6e0,FUN_103a182d0);
  }
  uVar5 = uRam000000011380cbe0;
  uVar4 = uRam000000011380cbd8;
  uVar3 = uRam000000011380cbd0;
  uVar2 = uRam000000011380cbc8;
  uVar1 = uRam000000011380cbc0;
  *param_1 = uRam000000011380cbb8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103a18658; end: 103a18693;  */

void FUN_103a18658(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca748;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca748,&UNK_10dc3ada0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a18694; end: 103a187a7;  */

void FUN_103a18694(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a187a8; end: 103a18833;  */

uint FUN_103a187a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_103a18e80(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103a18834; end: 103a1895f;  */

/* WARNING: Removing unreachable block (ram,0x000103a18944) */

void FUN_103a18834(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 != 1) {
          if (lVar1 == 2) {
            pcVar3 = *(code **)(param_3 + 0x160);
            lVar1 = unaff_x20 + 0x10;
          }
          else {
            if (lVar1 != 3) goto LAB_103a188ac;
            pcVar3 = *(code **)(param_3 + 0x48);
            lVar1 = unaff_x20 + 0x18;
          }
          goto LAB_103a1889c;
        }
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000103a18f3c();
        (*pcVar3)();
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x20;
        }
        else if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x28;
        }
        else {
          if (lVar1 != 6) goto LAB_103a188ac;
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x30;
        }
LAB_103a1889c:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_103a188ac:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103a18960; end: 103a18aab;  */

void FUN_103a18960(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000103a18f3c();
    (*pcVar2)(&lStack_50,1,&UNK_1106bf2b0,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((((((*(long *)(unaff_x20[2] + 0x10) == 0) ||
         ((**(code **)(param_3 + 0x100))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) &&
        (((int)unaff_x20[3] == 0 ||
         ((**(code **)(param_3 + 0x18))((int)unaff_x20[3],3,param_2,param_3), unaff_x21 == 0)))) &&
       ((*(long *)(unaff_x20[4] + 0x10) == 0 ||
        ((**(code **)(param_3 + 0x100))(unaff_x20[4],4,param_2,param_3), unaff_x21 == 0)))) &&
      ((*(long *)(unaff_x20[5] + 0x10) == 0 ||
       ((**(code **)(param_3 + 0x100))(unaff_x20[5],5,param_2,param_3), unaff_x21 == 0)))) &&
     ((*(long *)(unaff_x20[6] + 0x10) == 0 ||
      ((**(code **)(param_3 + 0x100))(unaff_x20[6],6,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
  }
  return;
}



/* Entry: 103a18aac; end: 103a18b03;  */

void FUN_103a18aac(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = puVar1;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  return;
}



/* Entry: 103a18b04; end: 103a18b33;  */

undefined1  [16] FUN_103a18b04(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 103a18b34; end: 103a18b67;  */

void FUN_103a18b34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 103a18b68; end: 103a18b7b;  */

undefined1  [16] FUN_103a18b68(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x103a18b78;
  return auVar1;
}



/* Entry: 103a18b7c; end: 103a18ba3;  */

void FUN_103a18b7c(void)

{
  FUN_103a18834();
  return;
}



/* Entry: 103a18ba4; end: 103a18ba7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a18ba4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103a18ba8; end: 103a18bdf;  */

uint FUN_103a18ba8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_103a197e0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103a18be0; end: 103a18c37;  */

uint FUN_103a18be0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_103a18f7c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103a18c38; end: 103a18cd7;  */

/* WARNING: Possible PIC construction at 0x000103a18c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a18c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a18c88) */
/* WARNING: Removing unreachable block (ram,0x000103a18c98) */

void FUN_103a18c38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fca6f0 != -1) {
    func_0x000107c61568(0x112fca6f0,0x103a187ec);
  }
  uVar5 = uRam000000011380cc10;
  uVar4 = uRam000000011380cc08;
  uVar3 = uRam000000011380cc00;
  uVar2 = uRam000000011380cbf8;
  uVar1 = uRam000000011380cbf0;
  *param_1 = uRam000000011380cbe8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103a18cd8; end: 103a18d13;  */

void FUN_103a18cd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca738;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca738,&UNK_10dc3ad98);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a18d14; end: 103a18e27;  */

void FUN_103a18d14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a18e28; end: 103a18e7f;  */

uint FUN_103a18e28(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103a18f7c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103a18e80; end: 103a18efb;  */

/* WARNING: Possible PIC construction at 0x000103a18eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103a18eb4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a18e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103a18efc; end: 103a18f7b;  */

void FUN_103a18efc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3abe0;
  func_0x000107c61520(&UNK_10dc3abe0,&UNK_1106bf010);
  puRam0000000112fca6e8 = puVar1;
  return;
}



/* Entry: 103a18f7c; end: 103a190b3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a19094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103a19098) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a18f7c(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  lVar22 = param_1[2];
  lVar23 = param_2[2];
  lVar19 = *(long *)(lVar22 + 0x10);
  if (lVar19 == *(long *)(lVar23 + 0x10)) {
    if (lVar19 != 0 && lVar22 != lVar23) {
      puVar28 = (undefined8 *)(lVar23 + 0x28);
      puVar29 = (undefined8 *)(lVar22 + 0x28);
      do {
        pbVar12 = (byte *)puVar29[-1];
        pbVar15 = (byte *)*puVar29;
        pbVar16 = (byte *)puVar28[-1];
        pbVar17 = (byte *)*puVar28;
        if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
        goto code_r0x000107c605b8;
        puVar28 = puVar28 + 2;
        puVar29 = puVar29 + 2;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    if ((int)param_1[3] == (int)param_2[3]) {
      uVar13 = param_1[4];
      func_0x00010142cfc4(uVar13,param_2[4]);
      if ((uVar13 & 1) != 0) {
        uVar13 = param_1[5];
        func_0x00010142cfc4(uVar13,param_2[5]);
        if ((uVar13 & 1) != 0) {
          uVar13 = param_1[6];
          func_0x00010142cfc4(uVar13,param_2[6]);
          if ((uVar13 & 1) != 0) {
            pbVar10 = (byte *)param_1[7];
            pbVar27 = (byte *)param_1[8];
            lVar19 = param_2[7];
            uVar13 = param_2[8];
            puVar7 = (undefined1 *)register0x00000008;
            do {
              *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
              *(byte **)(puVar7 + -0x48) = unaff_x25;
              *(byte **)(puVar7 + -0x40) = unaff_x24;
              *(byte **)(puVar7 + -0x38) = unaff_x23;
              *(ulong *)(puVar7 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
              *(ulong *)(puVar7 + -0x20) = unaff_x20;
              *(byte **)(puVar7 + -0x18) = unaff_x19;
              *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
              *(undefined8 *)(puVar7 + -8) = unaff_x30;
              *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              uVar4 = (uint)((ulong)pbVar27 >> 0x20);
              uVar18 = uVar4 >> 0x1e;
              uVar5 = (uint)(uVar13 >> 0x20);
              uVar24 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar14 = pbVar27;
              if ((ulong)pbVar27 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
                    (uVar13 >> 0x3e < 3)) ||
                   ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000))))
                goto joined_r0x000100e26170;
code_r0x000100e26128:
                pbVar9 = (byte *)0x1;
              }
              else if (uVar4 >> 0x1e < 2) {
                if (uVar18 == 0) {
                  uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
                }
                else {
                  iVar20 = (int)((ulong)pbVar10 >> 0x20);
                  if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                    (*pcVar6)();
                  }
                  uVar21 = (ulong)(iVar20 - iVar8);
                }
joined_r0x000100e26170:
                if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                if (uVar24 == 0) {
                  uVar25 = uVar13 >> 0x30 & 0xff;
                  goto code_r0x000100e2608c;
                }
                iVar20 = (int)((ulong)lVar19 >> 0x20);
                if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                  (*pcVar6)();
                }
                if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
                pbVar9 = (byte *)0x0;
              }
              else {
                if (uVar18 == 2) {
                  uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                  if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                    (*pcVar6)();
                  }
                  goto joined_r0x000100e26170;
                }
                uVar21 = 0;
                if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                if (uVar24 == 2) {
                  uVar25 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                  if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                    (*pcVar6)();
                  }
code_r0x000100e2608c:
                  if (uVar21 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
                  if ((long)uVar21 < 1) goto code_r0x000100e26128;
                  if (uVar18 < 2) {
                    if (uVar18 == 0) {
                      puVar7[-0x70] = (char)pbVar10;
                      puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                      puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                      puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                      puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                      puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                      puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                      puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                      puVar7[-0x68] = (char)pbVar27;
                      puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
                      puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                      puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                      puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
                      puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
                      pbVar14 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                      unaff_x21 = 0;
                      func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                      pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                      goto code_r0x000100e262b0;
                    }
                    unaff_x25 = (byte *)(long)iVar8;
                    unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                    if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec30();
                    unaff_x24 = pbVar27;
                    if (pbVar10 == (byte *)0x0) {
                      func_0x000107c5ec38();
                      pbVar10 = (byte *)0x0;
                    }
                    else {
                      pbVar14 = pbVar10;
                      func_0x000107c5ec3c();
                      if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                      func_0x000107c5ec38();
                      unaff_x19 = pbVar10;
                      if (pbVar10 != (byte *)0x0) {
                        if ((long)unaff_x23 <= (long)pbVar14) {
                          pbVar14 = unaff_x23;
                        }
                        pbVar14 = pbVar14 + (long)pbVar10;
                        goto code_r0x000100e262a4;
                      }
                    }
                    pbVar14 = (byte *)0x0;
                  }
                  else {
                    if (uVar18 != 2) {
                      *(undefined8 *)(puVar7 + -0x6a) = 0;
                      *(undefined8 *)(puVar7 + -0x70) = 0;
                      pbVar14 = puVar7 + -0x70;
                      goto code_r0x000100e26260;
                    }
                    lVar22 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar14 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
                    }
                    unaff_x23 = unaff_x24 + -lVar22;
                    if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    unaff_x25 = pbVar27;
                    if (pbVar10 == (byte *)0x0) {
                      pbVar14 = (byte *)0x0;
                    }
                    else {
                      if ((long)unaff_x23 <= (long)pbVar14) {
                        pbVar14 = unaff_x23;
                      }
                      pbVar14 = pbVar14 + (long)pbVar10;
                    }
                  }
code_r0x000100e262a4:
                  unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                  unaff_x22 = uVar13;
                }
                else {
                  pbVar9 = (byte *)(ulong)(uVar21 == 0);
                }
              }
code_r0x000100e262b0:
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
                return pbVar9;
              }
              func_0x000107c60e78();
              *(byte **)(puVar7 + -0xc0) = unaff_x24;
              *(byte **)(puVar7 + -0xb8) = unaff_x23;
              *(ulong *)(puVar7 + -0xb0) = unaff_x22;
              *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
              *(ulong *)(puVar7 + -0xa0) = unaff_x20;
              *(byte **)(puVar7 + -0x98) = unaff_x19;
              *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
              *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
              pbVar12 = *(byte **)pbVar9;
              pbVar10 = *(byte **)(pbVar9 + 8);
              pbVar26 = *(byte **)(pbVar9 + 0x18);
              bVar30 = pbVar9[0x28];
              pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                 (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
              pbVar15 = pbVar10;
              if (bVar30 < 3) {
                if (bVar30 == 0) {
                  if (pbVar14[0x28] == 0) {
                    lVar19 = *(long *)pbVar14;
                    uVar11 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar19,uVar11);
                    return (byte *)(ulong)((uint)pbVar12 & 1);
                  }
                  return (byte *)0x0;
                }
                if (bVar30 == 1) {
                  if (pbVar14[0x28] != 1) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)(pbVar14 + 8);
                  pbVar17 = *(byte **)(pbVar14 + 0x10);
                  lVar19 = *(long *)pbVar14;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar15 = pbVar27;
                  if ((pbVar10 == pbVar16) && (pbVar27 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar14[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  lVar19 = *(long *)(pbVar14 + 0x18);
                  if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar26 != (byte *)0x0) {
                      if (lVar19 == 0) {
                        return (byte *)0x0;
                      }
                      func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                      func_0x000107c61174(lVar19);
                      func_0x000107c61174();
                      pbVar12 = pbVar26;
                      func_0x000107c60118();
                      func_0x000107c61170(pbVar26);
                      func_0x000107c61170(lVar19);
                      pbVar26 = pbVar12;
                      goto joined_r0x000100e266a4;
                    }
joined_r0x000100e26620:
                    if (lVar19 == 0) {
                      return (byte *)0x1;
                    }
                    return (byte *)0x0;
                  }
                }
                goto code_r0x000107c605b8;
              }
              lVar22 = *(long *)(pbVar9 + 0x20);
              if (bVar30 < 5) {
                if (bVar30 != 3) {
                  if (pbVar14[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar27, pbVar15 = pbVar26, pbVar16 = *(byte **)(pbVar14 + 0x10),
                     pbVar17 = *(byte **)(pbVar14 + 0x18),
                     pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar26 == *(byte **)(pbVar14 + 0x18))
                     ) {
                    return (byte *)0x1;
                  }
                  goto code_r0x000107c605b8;
                }
                if (pbVar14[0x28] != 3) {
                  return (byte *)0x0;
                }
                if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar14 + 0x10);
                lVar19 = *(long *)(pbVar14 + 0x20);
                if (pbVar27 == (byte *)0x0) {
                  if (pbVar17 != (byte *)0x0) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar17 == (byte *)0x0) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)(pbVar14 + 8);
                  pbVar12 = pbVar10;
                  pbVar15 = pbVar27;
                  if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)
                      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
                    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
                    return pbVar12;
                  }
                }
                if (lVar22 != 0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar26 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar26,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                  if (((ulong)pbVar26 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  return (byte *)0x1;
                }
                goto joined_r0x000100e26620;
              }
              if (bVar30 != 5) {
                if ((((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar22 == 0) && pbVar27 == (byte *)0x0) {
                  if (pbVar14[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar22 = *(long *)(pbVar14 + 0x20);
                  lVar19 = *(long *)(pbVar14 + 0x18);
                  bVar30 = pbVar14[8] | (byte)lVar19;
                  bVar31 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                  bVar32 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                  bVar33 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                  bVar34 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                  bVar35 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                  bVar36 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                  bVar37 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                  bVar38 = pbVar14[0x10] | (byte)lVar22;
                  bVar39 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                  bVar40 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                  bVar41 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                  bVar42 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                  bVar43 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                  bVar44 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                  bVar45 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
                  auVar46[1] = bVar31;
                  auVar46[0] = bVar30;
                  auVar46[2] = bVar32;
                  auVar46[3] = bVar33;
                  auVar46[4] = bVar34;
                  auVar46[5] = bVar35;
                  auVar46[6] = bVar36;
                  auVar46[7] = bVar37;
                  auVar46[8] = bVar38;
                  auVar46[9] = bVar39;
                  auVar46[10] = bVar40;
                  auVar46[0xb] = bVar41;
                  auVar46[0xc] = bVar42;
                  auVar46[0xd] = bVar43;
                  auVar46[0xe] = bVar44;
                  auVar46[0xf] = bVar45;
                  auVar3[1] = bVar31;
                  auVar3[0] = bVar30;
                  auVar3[2] = bVar32;
                  auVar3[3] = bVar33;
                  auVar3[4] = bVar34;
                  auVar3[5] = bVar35;
                  auVar3[6] = bVar36;
                  auVar3[7] = bVar37;
                  auVar3[8] = bVar38;
                  auVar3[9] = bVar39;
                  auVar3[10] = bVar40;
                  auVar3[0xb] = bVar41;
                  auVar3[0xc] = bVar42;
                  auVar3[0xd] = bVar43;
                  auVar3[0xe] = bVar44;
                  auVar3[0xf] = bVar45;
                  auVar46 = NEON_ext(auVar46,auVar3,8,1);
                  if (CONCAT17(bVar37 | auVar46[7],
                               CONCAT16(bVar36 | auVar46[6],
                                        CONCAT15(bVar35 | auVar46[5],
                                                 CONCAT14(bVar34 | auVar46[4],
                                                          CONCAT13(bVar33 | auVar46[3],
                                                                   CONCAT12(bVar32 | auVar46[2],
                                                                            CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                      *(long *)pbVar14 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0)
                    && lVar22 == 0)) {
                  if (pbVar14[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar14 != 1) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar14[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar14 != 2) {
                    return (byte *)0x0;
                  }
                }
                lVar22 = *(long *)(pbVar14 + 0x20);
                lVar19 = *(long *)(pbVar14 + 0x18);
                bVar30 = pbVar14[8] | (byte)lVar19;
                bVar31 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                bVar32 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar33 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar34 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar35 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar36 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar37 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar38 = pbVar14[0x10] | (byte)lVar22;
                bVar39 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar40 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar41 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar42 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar43 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar44 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar45 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar1[1] = bVar31;
                auVar1[0] = bVar30;
                auVar1[2] = bVar32;
                auVar1[3] = bVar33;
                auVar1[4] = bVar34;
                auVar1[5] = bVar35;
                auVar1[6] = bVar36;
                auVar1[7] = bVar37;
                auVar1[8] = bVar38;
                auVar1[9] = bVar39;
                auVar1[10] = bVar40;
                auVar1[0xb] = bVar41;
                auVar1[0xc] = bVar42;
                auVar1[0xd] = bVar43;
                auVar1[0xe] = bVar44;
                auVar1[0xf] = bVar45;
                auVar2[1] = bVar31;
                auVar2[0] = bVar30;
                auVar2[2] = bVar32;
                auVar2[3] = bVar33;
                auVar2[4] = bVar34;
                auVar2[5] = bVar35;
                auVar2[6] = bVar36;
                auVar2[7] = bVar37;
                auVar2[8] = bVar38;
                auVar2[9] = bVar39;
                auVar2[10] = bVar40;
                auVar2[0xb] = bVar41;
                auVar2[0xc] = bVar42;
                auVar2[0xd] = bVar43;
                auVar2[0xe] = bVar44;
                auVar2[0xf] = bVar45;
                auVar46 = NEON_ext(auVar1,auVar2,8,1);
                lVar19 = CONCAT17(bVar37 | auVar46[7],
                                  CONCAT16(bVar36 | auVar46[6],
                                           CONCAT15(bVar35 | auVar46[5],
                                                    CONCAT14(bVar34 | auVar46[4],
                                                             CONCAT13(bVar33 | auVar46[3],
                                                                      CONCAT12(bVar32 | auVar46[2],
                                                                               CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar14[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar19 = *(long *)(pbVar14 + 8);
              uVar13 = *(ulong *)(pbVar14 + 0x10);
              lVar22 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar22,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
              unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
              unaff_x20 = *(ulong *)(puVar7 + -0xa0);
              unaff_x19 = *(byte **)(puVar7 + -0x98);
              unaff_x22 = *(ulong *)(puVar7 + -0xb0);
              unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
              unaff_x24 = *(byte **)(puVar7 + -0xc0);
              unaff_x23 = *(byte **)(puVar7 + -0xb8);
              puVar7 = puVar7 + -0x80;
            } while( true );
          }
        }
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103a190b4; end: 103a190f3;  */

void FUN_103a190b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fca700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc3acb8;
  func_0x000107c61520(&UNK_10dc3acb8,&UNK_1106bf098);
  puRam0000000112fca700 = puVar1;
  return;
}


