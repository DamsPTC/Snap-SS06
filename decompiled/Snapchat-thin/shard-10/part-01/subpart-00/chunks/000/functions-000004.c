/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10777afe0; end: 10777b03f;  */

undefined8 * FUN_10777afe0(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 extraout_w8;
  undefined1 uVar8;
  undefined4 *extraout_x8;
  long lVar9;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  char acStack_36c [540];
  byte bStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [16];
  byte bStack_a0;
  char *pcVar4;
  
  pcVar4 = auStack_b0;
  pppppppuVar11 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  func_0x00010777d8ec();
  func_0x00010777d4c0();
  func_0x00010777d648();
  if ((bStack_a0 & 1) == 0) {
    func_0x00010777db94();
  }
  else {
    func_0x00010777d4d8();
  }
  func_0x00010777d7c8();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  puVar13 = &UNK_10777b040;
  func_0x00010777d638();
  uVar5 = *(int *)(param_1 + 0xd) == 5;
  if ((bool)uVar5) {
    puVar6 = param_1 + 1;
    pcVar4 = acStack_36c + 0x20c;
    puStack_b8 = &UNK_10777b040;
    ppppppuStack_c0 = pppppppuVar11;
    func_0x00010777d224();
    uStack_138 = puVar6[1];
    uStack_140 = *puVar6;
    param_1 = param_2;
    param_2 = puVar6;
    if (puVar6[1] != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((bStack_150 & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar13 = &UNK_10777b0e0;
    func_0x00010777d638();
    pppppppuVar11 = &ppppppuStack_c0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(pcVar4 + -0x20) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar11;
  *(undefined **)(pcVar4 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((pcVar4[-0xb0] & 1U) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(undefined8 *)(pcVar4 + -0xe0) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0xd8) = unaff_x19;
  *(char **)(pcVar4 + -0xd0) = pcVar4 + -0x10;
  *(undefined **)(pcVar4 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9;
  if (*(int *)(param_1 + 0xd) == 0) {
    *(undefined4 *)(pcVar4 + -0xf0) = 0;
    unaff_x19 = pcVar4 + -0x158;
    func_0x00010777dd30();
    puVar6 = (undefined8 *)(pcVar4 + -0x150);
    func_0x00010726af18(puVar6);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return puVar6;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(undefined8 *)(pcVar4 + -0x180) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x178) = unaff_x19;
    *(char **)(pcVar4 + -0x170) = pcVar4 + -0xd0;
    *(undefined **)(pcVar4 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)param_2 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)param_2;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return param_2;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto code_r0x00010777b254;
  uVar10 = *(undefined8 *)(pcVar4 + -0xe0);
  puVar6 = *(undefined8 **)(pcVar4 + -0xd8);
  *(undefined8 *)(pcVar4 + -0xe0) = uVar10;
  *(undefined8 **)(pcVar4 + -0xd8) = puVar6;
  *(undefined8 *)(pcVar4 + -0xd0) = *(undefined8 *)(pcVar4 + -0xd0);
  *(undefined8 *)(pcVar4 + -200) = *(undefined8 *)(pcVar4 + -200);
  puVar12 = pcVar4 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9_00;
  uVar5 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar5) {
    puVar6 = (undefined8 *)(pcVar4 + -0x158);
    pcVar4[-0x150] = *(undefined1 *)(param_1 + 1);
    *(undefined4 *)(pcVar4 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (undefined8 *)(pcVar4 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar13 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar3 = pcVar4 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto code_r0x00010777b310;
    puVar12 = *(undefined1 **)(pcVar4 + -0xd0);
    puVar13 = *(undefined **)(pcVar4 + -200);
    uVar10 = *(undefined8 *)(pcVar4 + -0xe0);
    puVar6 = *(undefined8 **)(pcVar4 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(undefined8 *)(puVar3 + -0x20) = uVar10;
  *(undefined8 **)(puVar3 + -0x18) = puVar6;
  *(undefined1 **)(puVar3 + -0x10) = puVar12;
  *(undefined **)(puVar3 + -8) = puVar13;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      param_1 = (undefined8 *)(puVar3 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar14 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar14;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar9 = *(long *)(extraout_x9_01 + 0x10);
        uVar14 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar14;
        uVar5 = 1;
        if (lVar9 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar3[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar14 = *(undefined8 *)(puVar3 + -0xbc);
                puVar6[1] = *(undefined8 *)(puVar3 + -0xb4);
                *puVar6 = uVar14;
                *(undefined4 *)(puVar6 + 2) = 1;
                uVar8 = 1;
              }
              else {
                func_0x00010777d748();
                uVar8 = extraout_w8;
              }
              *(undefined1 *)((long)puVar6 + 0x14) = uVar8;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0xd) != 0) && (*(int *)(param_1 + 0xd) != 1)) &&
      (*(int *)(param_1 + 0xd) != 2)) && (*(int *)(param_1 + 0xd) == 3)) {
    pcVar7 = FUN_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar10;
    *(undefined8 **)(puVar3 + -0xd8) = puVar6;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(code **)(puVar3 + -200) = pcVar7;
    func_0x00010777d264();
    func_0x00010777d1c4();
    FUN_1077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)puVar6 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b49c; end: 10777b4f3;  */

undefined2 FUN_10777b49c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    FUN_1077f2c70();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777b6bc; end: 10777b713;  */

undefined2 FUN_10777b6bc(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2664();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777b8dc; end: 10777b933;  */

undefined2 FUN_10777b8dc(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f28a0();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777bafc; end: 10777bb53;  */

undefined2 FUN_10777bafc(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2a88();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777bd1c; end: 10777bd73;  */

undefined2 FUN_10777bd1c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2478();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}



/* Entry: 10777bf48; end: 10777bf6b;  */

undefined1 * FUN_10777bf48(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 uVar6;
  int extraout_w8_04;
  long lVar7;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar10;
  undefined1 auStack_3c0 [784];
  undefined1 auStack_b0 [128];
  
  uVar9 = (uint)unaff_x21;
  uVar6 = SUB81(unaff_x21,0);
  if (*(int *)(param_1 + 0x68) == 1) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    unaff_x20 = auStack_b0;
    func_0x00010777dae0();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8;
    }
    else {
      auStack_3c0[0x30f] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&LAB_10777c0b4;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_3c0 + 0x300);
    unaff_x19 = puVar2;
  }
  if (*(int *)(param_1 + 0x68) == 2) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777dacc();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_00;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_10777c14c;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = puVar2;
  }
  if (*(int *)(param_1 + 0x68) == 3) {
    puVar2 = param_2 + 8;
    param_2 = param_1 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(puVar2);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001072ddd58();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_01;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_10777c1e8;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = puVar2;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x68) == 4) {
    param_2 = param_2 + 8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(param_2,param_1 + 8);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_02;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0xb1) = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return param_2;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&LAB_10777c280;
    param_1 = param_2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = param_2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar2 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar1) {
    lVar7 = *(long *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar10;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined4 *)((long)register0x00000008 + -0x48) = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar9 == 0xff;
    if (uVar9 < 0x100) goto code_r0x00010777c3d0;
    *(undefined1 *)((long)register0x00000008 + -0xc0) = uVar6;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar6 = 1;
  }
  else {
    if (extraout_w8_04 == 6) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_04 == 7) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_04 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(param_1 + 8));
        func_0x000107535980((undefined1 *)((long)register0x00000008 + -0xb0));
        unaff_x21 = (undefined1 *)(*(undefined8 **)(param_1 + 8))[1];
        for (puVar8 = (undefined1 *)**(undefined8 **)(param_1 + 8); uVar1 = puVar8 == unaff_x21,
            !(bool)uVar1; puVar8 = puVar8 + 0x70) {
          puVar2 = puVar8;
          func_0x00010777bf6c();
          uVar9 = (uint)puVar2 & 0xffff;
          *(short *)((long)register0x00000008 + -0xc0) = (short)puVar2;
          uVar1 = uVar9 == 0x100;
          if (uVar9 < 0x100) {
            func_0x00010777d724();
            goto code_r0x00010777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
code_r0x00010777c41c:
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar9 = (uint)puVar2 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar1 = uVar9 == 0xff;
      if (0xff < uVar9) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar6 = extraout_w8_03;
  }
  unaff_x19[0x10] = uVar6;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar3 + 0x68) != 0) && (*(int *)(puVar3 + 0x68) != 1)) &&
      (*(int *)(puVar3 + 0x68) != 2)) && (*(int *)(puVar3 + 0x68) == 3)) {
    puVar4 = &UNK_10777c468;
    func_0x00010777de8c();
    *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar8;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -200) = puVar4;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar2 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c1e8; end: 10777c20b;  */

undefined1 * FUN_10777c1e8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  undefined1 extraout_w8_00;
  int extraout_w8_01;
  long lVar6;
  int extraout_w10;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar9;
  undefined1 auStack_180 [207];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [128];
  
  uVar8 = (uint)unaff_x21;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x68) == 4) {
    puVar2 = (undefined1 *)(param_2 + 8);
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4(puVar2,param_1 + 8);
    unaff_x20 = auStack_b0;
    func_0x00010777da1c();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar8 == 0xff;
    if (uVar8 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8;
    }
    else {
      uStack_b1 = (char)unaff_x21;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    unaff_x19[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_10777c280;
    param_1 = puVar2;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_180 + 0xc0);
    unaff_x19 = puVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar2 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar1) {
    lVar6 = *(long *)(param_1 + 0x10);
    uVar9 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar9;
    if (lVar6 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    puVar7 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined4 *)((long)register0x00000008 + -0x48) = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar1 = uVar8 == 0xff;
    if (uVar8 < 0x100) goto code_r0x00010777c3d0;
    *(char *)((long)register0x00000008 + -0xc0) = (char)unaff_x21;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar5 = 1;
  }
  else {
    if (extraout_w8_01 == 6) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar8 = (uint)puVar2 & 0xffff;
      puVar7 = (undefined1 *)(ulong)uVar8;
      func_0x00010777d640();
      uVar1 = uVar8 == 0xff;
      if (0xff < uVar8) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar8;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_01 == 7) {
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar8 = (uint)puVar2 & 0xffff;
      puVar7 = (undefined1 *)(ulong)uVar8;
      func_0x00010777d640();
      uVar1 = uVar8 == 0xff;
      if (0xff < uVar8) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar8;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_01 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(param_1 + 8));
        func_0x000107535980((undefined1 *)((long)register0x00000008 + -0xb0));
        unaff_x21 = (undefined1 *)(*(undefined8 **)(param_1 + 8))[1];
        for (puVar7 = (undefined1 *)**(undefined8 **)(param_1 + 8); uVar1 = puVar7 == unaff_x21,
            !(bool)uVar1; puVar7 = puVar7 + 0x70) {
          puVar2 = puVar7;
          func_0x00010777bf6c();
          uVar8 = (uint)puVar2 & 0xffff;
          *(short *)((long)register0x00000008 + -0xc0) = (short)puVar2;
          uVar1 = uVar8 == 0x100;
          if (uVar8 < 0x100) {
            func_0x00010777d724();
            goto code_r0x00010777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
code_r0x00010777c41c:
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar8 = (uint)puVar2 & 0xffff;
      puVar7 = (undefined1 *)(ulong)uVar8;
      func_0x00010777d640();
      uVar1 = uVar8 == 0xff;
      if (0xff < uVar8) {
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar8;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar5 = extraout_w8_00;
  }
  unaff_x19[0x10] = uVar5;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar3 + 0x68) != 0) && (*(int *)(puVar3 + 0x68) != 1)) &&
      (*(int *)(puVar3 + 0x68) != 2)) && (*(int *)(puVar3 + 0x68) == 3)) {
    puVar4 = &UNK_10777c468;
    func_0x00010777de8c();
    *(undefined1 **)((long)register0x00000008 + -0xe0) = puVar7;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = puVar2;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -200) = puVar4;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar2 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c694; end: 10777c6c7;  */

undefined8 FUN_10777c694(undefined8 param_1)

{
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2ec8();
  func_0x00010777d650();
  return param_1;
}



/* Entry: 10777c91c; end: 10777c94b;  */

undefined2 FUN_10777c91c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f3244();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777cb3c; end: 10777cb6b;  */

undefined2 FUN_10777cb3c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f338c();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777cd5c; end: 10777cd8b;  */

undefined2 FUN_10777cd5c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2f68();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777cf84; end: 10777d03b;  */

void FUN_10777cf84(long *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 extraout_w8;
  int extraout_w8_00;
  long lVar5;
  long *plVar6;
  long alStack_60 [4];
  
  plVar6 = alStack_60;
  func_0x00010777da78();
  if ((((!(bool)in_ZR) && (extraout_w8_00 != 6)) && (extraout_w8_00 != 7)) && (extraout_w8_00 == 8))
  {
    lVar5 = **(long **)(param_2 + 8);
    lVar1 = (*(long **)(param_2 + 8))[1];
    if (lVar1 - lVar5 == 0x1c0) {
      do {
        if (lVar5 == lVar1) {
          param_1[1] = alStack_60[1];
          *param_1 = alStack_60[0];
          param_1[3] = alStack_60[3];
          param_1[2] = alStack_60[2];
          uVar4 = 1;
LAB_10777d034:
          *(undefined1 *)(param_1 + 4) = uVar4;
          return;
        }
        uVar3 = *param_3;
        lVar2 = lVar5;
        func_0x000107775240();
        if ((uVar3 & 1) == 0) {
          func_0x00010777d748();
          uVar4 = extraout_w8;
          goto LAB_10777d034;
        }
        *plVar6 = lVar2;
        lVar5 = lVar5 + 0x70;
        plVar6 = plVar6 + 1;
      } while( true );
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 10777ded0; end: 10777dee3;  */

void FUN_10777ded0(void)

{
  func_0x00010777de9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10777e98c; end: 10777ea33;  */

void FUN_10777e98c(undefined8 param_1)

{
  bool bVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined1 auStack_128 [8];
  undefined1 uStack_120;
  undefined4 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_a8;
  undefined4 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010777f8f4(param_1);
  uStack_120 = 1;
  uStack_c0 = 1;
  uStack_b8 = 1;
  uStack_a8 = 0;
  uStack_48 = 1;
  uStack_40 = 1;
  uStack_38 = extraout_x8;
  func_0x0001074d1ee8();
  lVar2 = 0x78;
  do {
    func_0x000107296ad0(auStack_128 + lVar2);
    lVar2 = lVar2 + -0x78;
    bVar1 = lVar2 == -0x78;
  } while (!bVar1);
  func_0x00010777f8e0(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = 0x78;
  do {
    func_0x000107296ad0(auStack_128 + lVar2);
    lVar2 = lVar2 + -0x78;
  } while (lVar2 != -0x78);
  func_0x00010777f924();
  return;
}



/* Entry: 10777f3a4; end: 10777f417;  */

long * FUN_10777f3a4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010777fa9c();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x18;
        func_0x0001073c6654();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x18;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x18;
  return unaff_x19;
}



/* Entry: 10777f700; end: 10777f78b;  */

void FUN_10777f700(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [31];
  undefined1 uStack_31;
  
  uVar1 = param_2;
  func_0x000107297740(param_2,&uStack_31);
  if ((int)uVar1 == 3) {
    func_0x000107470b80(param_1,param_2);
  }
  else {
    func_0x00010002b838(auStack_50,&UNK_10f42723e);
    func_0x00010777f9d4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  return;
}



/* Entry: 10777fb68; end: 10777fb73;  */

void FUN_10777fb68(void)

{
  uint in_stack_00000080;
  
  if (in_stack_00000080 != 0xffffffff) {
    func_0x000107285594((&PTR_DAT_110996f18)[in_stack_00000080]);
  }
  return;
}



/* Entry: 10777fec4; end: 10777ffd3;  */

undefined8 * FUN_10777fec4(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined4 *unaff_x24;
  undefined4 uVar3;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 auStack_90 [7];
  undefined8 uStack_58;
  
  puVar1 = &uStack_100;
  func_0x00010777ffe8();
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000104c318bc(auStack_90);
  uVar3 = *unaff_x24;
  uStack_a8 = unaff_x22[1];
  uStack_b0 = *unaff_x22;
  uStack_a0 = unaff_x22[2];
  unaff_x22[1] = 0;
  unaff_x22[2] = 0;
  *unaff_x22 = 0;
  uStack_c8 = unaff_x21[1];
  uStack_d0 = *unaff_x21;
  uStack_c0 = unaff_x21[2];
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = 0;
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_e0 = *(undefined4 *)(unaff_x20 + 2);
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x0001077814e8(uVar3,param_1,auStack_90);
  func_0x00010724e0ac(&uStack_d0);
  func_0x00010724e0ac(&uStack_b0);
  puVar2 = auStack_90;
  func_0x000104c2f714();
  func_0x000107780004(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010724e0ac(&uStack_d0);
  func_0x00010724e0ac(&uStack_b0);
  func_0x000104c2f714(auStack_90);
  __Unwind_Resume(puVar2);
  puVar2[1] = uStack_f8;
  *puVar2 = uStack_100;
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x000107274970();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001000df548();
  }
  return puVar2;
}



/* Entry: 1077805c4; end: 1077805ff;  */

long FUN_1077805c4(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  plVar2 = *(long **)(param_2 + 0x150);
  (**(code **)(*plVar2 + 0x18))();
  plVar1 = (long *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x50) == '\0') {
    plVar1 = plVar2;
  }
  func_0x0001000d03a8(param_1,plVar1);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 107780cf8; end: 107780d57;  */

void FUN_107780cf8(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  func_0x000107780d58();
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_DAT_1109d6c98)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 107780efc; end: 107780f27;  */

undefined1 * FUN_107780efc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x60] = 0;
  func_0x000107780f28();
  return param_1;
}



/* Entry: 107781098; end: 10778113f;  */

undefined1  [16] FUN_107781098(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 uStack_b9;
  undefined1 auStack_b8 [120];
  int iStack_40;
  undefined8 uStack_38;
  
  func_0x000107781398();
  puVar2 = (undefined1 *)*param_1;
  uStack_38 = extraout_x8;
  func_0x000107753050(auStack_b8,puVar2);
  uVar1 = iStack_40 == 1;
  if ((bool)uVar1) {
    puVar2 = auStack_b8;
    func_0x00010727f7dc(puVar2);
    param_2 = &uStack_b9;
    func_0x00010732a934();
    uVar4 = (ulong)puVar2 & 0xffffffffffffff00;
    uVar5 = (ulong)puVar2 & 0xff;
    uVar3 = (ulong)param_2 & 0xff;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
  }
  func_0x00010778146c();
  func_0x000107781384(uStack_38);
  if ((bool)uVar1) {
    auVar6._0_8_ = uVar5 | uVar4;
    auVar6._8_8_ = uVar3;
    return auVar6;
  }
  ___stack_chk_fail();
  func_0x00010778146c();
  func_0x0001077813bc();
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 107781254; end: 107781257;  */

void FUN_107781254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d6d50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107781364; end: 107781383;  */

void FUN_107781364(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107781374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 107781b1c; end: 107781b37;  */

/* WARNING: Possible PIC construction at 0x000107330270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107330348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107330274) */
/* WARNING: Removing unreachable block (ram,0x000107330298) */
/* WARNING: Removing unreachable block (ram,0x000107330290) */
/* WARNING: Removing unreachable block (ram,0x00010733034c) */
/* WARNING: Removing unreachable block (ram,0x000107330370) */
/* WARNING: Removing unreachable block (ram,0x000107330368) */
/* WARNING: Removing unreachable block (ram,0x000107344d98) */

undefined8 * FUN_107781b1c(undefined8 *param_1,undefined1 *param_2)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  float fVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auVar9 [8];
  code *pcVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  long lVar14;
  undefined2 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined1 **ppuVar19;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar20;
  undefined8 *extraout_x8_05;
  undefined8 *puVar21;
  long extraout_x8_06;
  undefined1 *puVar22;
  uint uVar23;
  int iVar24;
  int extraout_w9;
  undefined1 uVar25;
  int extraout_w11;
  undefined8 *extraout_x12;
  long lVar26;
  undefined8 *puVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  undefined *puVar31;
  float fVar32;
  undefined1 *puVar33;
  undefined1 *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined1 auStack_230 [8];
  undefined1 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [400];
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_70;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 uStack_4d;
  undefined1 auStack_4c [28];
  ulong uStack_30;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(int *)(param_1 + 0xf) == 1) {
    return param_1;
  }
  puVar31 = &UNK_107781b38;
  func_0x00010563ab98();
  ppuVar19 = &puStack_80;
  uVar18 = 0xd;
  func_0x0001003a994c(&stack0x00000040);
  puVar22 = param_2;
  uVar30 = uVar18;
  in_stack_00000040 = &stack0xfffffffffffffff0;
  in_stack_00000048 = puVar31;
  func_0x0001003a9964();
  iVar29 = (int)uVar30;
  uVar11 = puVar22 == (undefined1 *)0x2;
  puStack_18 = (undefined *)extraout_x8_00;
  if ((!(bool)uVar11) || (puVar21 = param_1, func_0x000100574918(), (int)puVar21 == 0)) {
    func_0x0001003a9974();
    puStack_228 = auStack_210;
    uStack_218 = 500;
    uStack_220 = 0;
    auStack_230 = (undefined1  [8])extraout_x8_01;
    func_0x0001003a9984(auStack_230,param_1,param_2,uVar18,ppuVar19,0);
    func_0x0001003ac6b8();
code_r0x0001003a9298:
    puVar17 = (undefined8 *)auStack_230;
    func_0x0001003ac644(puVar17);
    goto code_r0x0001003a92a0;
  }
  if ((long)uVar18 < 0) {
    if ((0 < (int)(uint)uVar18) && (uVar1 = *(uint *)(ppuVar19 + 2), uVar1 != 0))
    goto code_r0x0001003a92c8;
    goto code_r0x0001003a98cc;
  }
  uVar1 = (uint)uVar18 & 0xf;
  if ((uVar18 & 0xf) == 0) goto code_r0x0001003a98cc;
code_r0x0001003a92c8:
  uVar1 = uVar1 - 1;
  uVar11 = uVar1 == 0xe;
  if (0xe < uVar1) {
    func_0x000107c3aa80();
    puVar17 = puVar21;
    goto code_r0x0001003a92a0;
  }
  pcVar10 = (code *)ppuVar19[1];
  fVar5 = *(float *)ppuVar19;
  uVar30 = (ulong)(uint)fVar5;
  uVar13 = *(uint *)((long)ppuVar19 + 4);
  puVar33 = *ppuVar19;
  puVar15 = (undefined2 *)*ppuVar19;
  puVar7 = *ppuVar19;
  puVar6 = *ppuVar19;
  puVar17 = extraout_x8;
  uStack_70 = uVar30;
  uStack_30 = uVar30;
  switch(uVar1) {
  case 0:
    puVar17 = (undefined8 *)auStack_230;
    if ((int)fVar5 < 0) {
      puVar17 = (undefined8 *)(auStack_230 + 1);
      auStack_230[0] = 0x2d;
    }
    uVar11 = fVar5 == 0.0;
    fVar32 = (float)-(int)fVar5;
    if (-1 < (int)fVar5) {
      fVar32 = fVar5;
    }
    uVar18 = (ulong)(uint)fVar32;
    uVar30 = uVar18;
    func_0x00010054bacc(uVar18);
    func_0x00010054bb78(puVar17,uVar18,uVar30);
    func_0x000107c3a9d4();
    break;
  case 1:
    uVar18 = uVar30;
    func_0x00010054bacc(uVar30);
    puVar17 = (undefined8 *)auStack_230;
    func_0x00010054bb78(puVar17,uVar30,uVar18);
    func_0x000107c3a9d4();
    break;
  case 2:
    func_0x000107c3aa7c();
    puStack_20 = in_stack_00000040;
    if ((bool)uVar11) {
      puVar17 = (undefined8 *)(uVar30 | extraout_x8_03 << 0x20);
      puVar31 = in_stack_00000048;
      func_0x000107c3aa4c(extraout_x8);
      puStack_18 = puVar31;
      func_0x0001073447e0();
      puStack_58 = &UNK_10733034c;
      puStack_80 = param_2;
      pcStack_78 = pcVar10;
      ppuStack_60 = &puStack_20;
      func_0x000107345c14(auStack_4c);
      puVar21 = (undefined8 *)-(long)puVar17;
      if (-1 < (long)puVar17) {
        puVar21 = puVar17;
      }
      func_0x0001003b0470(puVar21);
      if ((long)pcVar10 < 0) {
        *(undefined1 *)extraout_x8 = 0x2d;
      }
      func_0x000107345ba8();
      func_0x0001003b04f4();
      return puVar17;
    }
    goto code_r0x0001003a98c8;
  case 3:
    func_0x000107c3aa7c();
    puStack_20 = in_stack_00000040;
    if ((bool)uVar11) {
      puVar21 = (undefined8 *)(uVar30 | extraout_x8_04 << 0x20);
      puVar31 = in_stack_00000048;
      func_0x000107c3aa4c(extraout_x8,puVar21);
      puStack_18 = puVar31;
      func_0x0001073447e0();
      puStack_58 = &UNK_107330274;
      ppuStack_60 = &puStack_20;
      func_0x000100a2b988(&uStack_4d);
      func_0x0001003b0470(puVar21);
      func_0x000107345dfc();
      func_0x0001003b04f4();
      return puVar21;
    }
    goto code_r0x0001003a98c8;
  case 4:
    puVar17 = (undefined8 *)auStack_230;
    if ((long)pcVar10 < 0) {
      puVar17 = (undefined8 *)(auStack_230 + 1);
      auStack_230[0] = 0x2d;
    }
    uVar30 = (long)pcVar10 >> 0x3f;
    lVar2 = ((ulong)*ppuVar19 ^ uVar30) - uVar30;
    uVar11 = lVar2 == 0;
    lVar26 = ((ulong)pcVar10 ^ uVar30) - (uVar30 + (((ulong)*ppuVar19 ^ uVar30) < uVar30));
    lVar14 = lVar2;
    func_0x000107c3176c(lVar2,lVar26);
    func_0x000107c31770(puVar17,lVar2,lVar26,lVar14);
    func_0x000107c3a9d4();
    break;
  case 5:
    puVar22 = puVar7;
    func_0x000107c3176c(puVar7,pcVar10);
    puVar17 = (undefined8 *)auStack_230;
    func_0x000107c31770(puVar17,puVar7,pcVar10,puVar22);
    func_0x000107c3a9d4();
    break;
  case 6:
    uVar11 = ((uint)fVar5 & 1) == 0;
    lVar2 = 4;
    if ((bool)uVar11) {
      lVar2 = 5;
    }
    pcVar3 = "true";
    if ((bool)uVar11) {
      pcVar3 = "false";
    }
    func_0x000107c610b4(auStack_230,pcVar3,lVar2);
    func_0x00010015492c(extraout_x8,auStack_230,auStack_230 + lVar2);
    break;
  case 7:
    auStack_230[0] = SUB41(fVar5,0);
    func_0x00010015492c(extraout_x8,auStack_230,auStack_230 + 1);
    break;
  case 8:
    fVar32 = fVar5;
    func_0x000107c3aa80();
    auStack_230 = (undefined1  [8])0x0;
    if ((int)fVar5 < 0) {
      auStack_230 = (undefined1  [8])0x10000000000;
      fVar32 = -fVar32;
    }
    if ((((uint)fVar5 ^ 0xffffffff) & 0x7f800000) == 0) {
      uVar11 = ABS(fVar32) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar11,&UNK_10e60dafc,auStack_230);
    }
    else {
      func_0x000107c31744();
      auVar9 = auStack_230;
      uVar18 = (ulong)auStack_230 >> 0x20;
      puVar16 = puVar21;
      func_0x00010054bacc();
      uVar30 = (ulong)auVar9 >> 0x28 & 0xff;
      iVar29 = (int)uVar30;
      uVar13 = (uint)puVar16;
      uVar1 = uVar13;
      if (iVar29 != 0) {
        uVar1 = uVar13 + 1;
      }
      uVar20 = (ulong)uVar1;
      uVar1 = uVar13 + (int)((ulong)puVar21 >> 0x20);
      uVar4 = auVar9._4_4_;
      uVar28 = auVar9._0_4_;
      if (((ulong)auVar9 >> 0x20 & 0xff) == 0) {
        if (-4 < (int)uVar1) {
          uVar23 = uVar28;
          if ((int)uVar28 < 1) {
            uVar23 = 0x10;
          }
          if ((int)uVar1 <= (int)uVar23) goto code_r0x0001003a9768;
        }
      }
      else if ((uVar4 & 0xff) != 1) {
code_r0x0001003a9768:
        if ((long)puVar21 < 0) {
          if ((int)uVar1 < 1) {
            uVar4 = uVar28;
            if ((int)(uVar28 + uVar1) < 0 == SCARRY4(uVar28,uVar1)) {
              uVar4 = -uVar1;
            }
            uVar11 = uVar28 < 0x80000000 && uVar13 == 0;
            if (uVar28 >= 0x80000000 || uVar13 != 0) {
              uVar4 = -uVar1;
            }
            puVar27 = (undefined8 *)(ulong)uVar4;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar21 = puVar16;
            if (iVar29 != 0) {
              puVar21 = (undefined8 *)((long)puVar16 + 1);
              *(undefined *)puVar16 = (&UNK_10e60dacd)[uVar30];
            }
            puVar17 = (undefined8 *)((long)puVar21 + 1);
            *(undefined1 *)puVar21 = 0x30;
            if ((((ulong)auVar9 & 0x10000000000000) != 0 || uVar13 != 0) || uVar4 != 0) {
              *(undefined1 *)((long)puVar21 + 1) = 0x2e;
              func_0x000107c3aa8c(puVar17);
              func_0x000107330b24(extraout_x8_06 + 2,puVar27);
              puVar17 = puVar27;
              func_0x000107c3aab0();
            }
          }
          else {
            uVar1 = uVar28 - uVar13 & (int)(uVar4 << 0xb) >> 0x1f;
            func_0x000107c3aa40();
            func_0x000107c3a9c8();
            puVar17 = puVar16;
            if (iVar29 != 0) {
              func_0x000107c3aa38();
              puVar17 = puVar16;
            }
            func_0x000107c31774();
            uVar11 = uVar1 == 1;
            if (0 < (int)uVar1) {
              func_0x000107c3aa8c();
              goto code_r0x0001003a9840;
            }
          }
        }
        else {
          bVar12 = (uVar4 & 0xff) != 2 && (uVar28 == uVar1 || (int)(uVar28 - uVar1) < 0);
          func_0x000107c3aa78(((ulong)puVar21 >> 0x20) + uVar20);
          puVar17 = extraout_x8_05;
          iVar24 = extraout_w9;
          if (!bVar12) {
            puVar17 = extraout_x12;
            iVar24 = extraout_w11;
          }
          uVar11 = ((ulong)auVar9 & 0x10000000000000) == 0;
          puVar16 = extraout_x8_05;
          iVar8 = extraout_w9;
          if (!(bool)uVar11) {
            puVar16 = puVar17;
            iVar8 = iVar24;
          }
          func_0x000107c3aa40();
          func_0x000107c3a9c8();
          if (iVar29 != 0) {
            func_0x000107c3aa38();
          }
          func_0x000107c3aab0();
          func_0x000107c3aa8c();
          func_0x000107330b24(puVar16,(ulong)puVar21 >> 0x20);
          puVar17 = puVar16;
          if ((uVar4 >> 0x14 & 1) != 0) {
            puVar17 = (undefined8 *)((long)puVar16 + 1);
            *(undefined1 *)puVar16 = 0x2e;
            uVar11 = iVar8 == 1;
            if (0 < iVar8) {
              func_0x000107c3aa8c(puVar17);
code_r0x0001003a9840:
              func_0x000107330b24();
            }
          }
        }
        func_0x000107c3a9c8();
        break;
      }
      puVar17 = (undefined8 *)(ulong)(uVar1 - 1);
      iVar24 = 0;
      if (uVar13 != 1) {
        iVar24 = 0x2e;
      }
      uVar1 = uVar28 - uVar13 & ((int)(uVar28 - uVar13) >> 0x1f ^ 0xffffffffU);
      bVar12 = (uVar18 & 0x100000) != 0;
      if (bVar12) {
        iVar24 = 0x2e;
      }
      uVar13 = 0;
      if (bVar12) {
        uVar20 = uVar1 + uVar20;
        uVar13 = uVar1;
      }
      uVar25 = 0x65;
      if (((ulong)auVar9 & 0x1000000000000) != 0) {
        uVar25 = 0x45;
      }
      func_0x000107c3aa94(uVar20);
      uVar11 = iVar24 == 0;
      func_0x000107c3aa40();
      if (iVar29 != 0) {
        func_0x000107c3aa38();
      }
      func_0x000107c31774();
      if (uVar13 != 0) {
        func_0x000107c3aa8c();
        func_0x000107330b24(puVar16,uVar13);
      }
      *(undefined1 *)puVar16 = uVar25;
      func_0x000107330ac0(puVar17,(long)puVar16 + 1);
    }
    break;
  case 9:
    puVar17 = (undefined8 *)auStack_230;
    auStack_230 = (undefined1  [8])*ppuVar19;
    func_0x000107330414(extraout_x8,puVar17);
    break;
  case 10:
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    puStack_268 = (undefined8 *)0x0;
    if ((int)uVar13 < 0) {
      puStack_268 = (undefined8 *)0x10000000000;
      puVar33 = (undefined1 *)-(double)puVar33;
    }
    uVar11 = (~uVar13 & 0x7ff00000) == 0;
    if ((bool)uVar11) {
      uVar11 = ABS((double)puVar33) == INFINITY;
      func_0x0001073304d4(extraout_x8,uVar11,&UNK_10e60db10,&puStack_268);
    }
    else {
      func_0x000107c31748();
      auStack_230 = (undefined1  [8])puVar21;
      puStack_228 = puVar22;
      func_0x000107330548(extraout_x8,auStack_230,&UNK_10e60db10,puStack_268,0x2e);
    }
    break;
  case 0xb:
    func_0x000107c3aa80();
    if (puVar6 == (undefined1 *)0x0) goto code_r0x0001003a98d0;
    puVar22 = puVar6;
    func_0x000107c613d0(puVar6);
    func_0x000107c31778(extraout_x8,puVar6,puVar22);
    break;
  case 0xc:
    func_0x000107c3aa80();
    func_0x000107c31778(extraout_x8);
    break;
  case 0xd:
    func_0x000107c3aa80();
    func_0x000107c3177c();
    uVar30 = ((ulong)puVar15 & 0xffffffff) + 2;
    func_0x000107c3aa40();
    puVar21 = (undefined8 *)(puVar15 + 1);
    *puVar15 = 0x7830;
    func_0x0001003ac67c(puStack_18);
    if ((bool)uVar11) {
      func_0x000107c3aa48();
      func_0x000107c3aa4c();
      puVar22 = (undefined1 *)((long)puVar21 + (long)iVar29);
      do {
        puVar22 = puVar22 + -1;
        *puVar22 = (&UNK_10e60dabc)[uVar30 & 0xf];
        bVar12 = 0xf < uVar30;
        uVar30 = uVar30 >> 4;
      } while (bVar12);
      return puVar21;
    }
    goto code_r0x0001003a98c8;
  case 0xe:
    func_0x0001003a9974(*ppuVar19);
    puStack_268 = (undefined8 *)auStack_230;
    puStack_228 = auStack_210;
    uStack_218 = 500;
    uStack_220 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_260 = 0;
    uStack_250 = 0;
    auStack_230 = (undefined1  [8])extraout_x8_02;
    (*pcVar10)();
    func_0x0001003ac6b8();
    goto code_r0x0001003a9298;
  }
code_r0x0001003a92a0:
  func_0x0001003ac67c(puStack_18);
  puVar21 = puVar17;
  if ((bool)uVar11) {
    return puVar17;
  }
code_r0x0001003a98c8:
  func_0x000107c60e78();
code_r0x0001003a98cc:
  func_0x000107c3aa14();
code_r0x0001003a98d0:
  func_0x000107c3a9ec();
  func_0x000106e53aac();
  func_0x000107c60e54(puVar21,&PTR_DAT_110d9ebd0,&DAT_10bd486fc);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1003a9900);
  (*pcVar10)();
}



/* Entry: 107781dc8; end: 107781de3;  */

void FUN_107781dc8(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)param_1 = 7;
  return;
}



/* Entry: 1077825c8; end: 107782f2b;  */

void FUN_1077825c8(long param_1,long param_2,undefined8 **param_3,undefined8 **param_4,
                  undefined8 **param_5,undefined8 **param_6)

{
  bool bVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  char cVar4;
  float fVar5;
  undefined1 in_ZR;
  ulong uVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *puVar10;
  undefined1 auStack_218 [24];
  char cStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  long lStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined1 *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1b8 [8];
  undefined4 uStack_1b0;
  undefined8 *apuStack_1a8 [2];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  char cStack_170;
  undefined1 uStack_168;
  undefined8 *puStack_160;
  undefined4 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  ulong uStack_130;
  int iStack_128;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  int iStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined4 uStack_c0;
  int iStack_78;
  undefined8 uStack_68;
  
  func_0x000107783740();
  uStack_68 = extraout_x8;
  func_0x0001000633dc(param_3,param_4,&DAT_10f2ff52c,10);
  if ((int)param_3 == 0) {
    func_0x000107783818();
    func_0x0001000633dc();
    if ((int)param_3 == 0) {
      func_0x000107783818();
      func_0x0001000633dc();
      if ((int)param_3 == 0) {
        func_0x000107783780();
        if ((int)param_3 != 0) {
          func_0x000107338a14(&puStack_e0,param_5,param_6);
          param_4 = param_6;
          if (iStack_78 == 0) {
            func_0x0001077838e4();
            uVar6 = extraout_x8_01 + 0xd0;
            param_4 = &puStack_d8;
            func_0x000107781d40(uVar6,param_4);
            if ((uVar6 & 1) == 0) {
              func_0x000107783864();
              func_0x000107783768();
              param_4 = &puStack_d8;
              func_0x000107338c30(puStack_140 + 0x1a,param_4);
              func_0x000107783750();
              func_0x000107783790();
              func_0x000107783870();
              func_0x0001077837e4();
            }
          }
          func_0x000107783718();
          param_3 = &puStack_d8;
          func_0x000107338d20();
          goto LAB_107782924;
        }
        func_0x000107783818();
        func_0x0001000633dc();
        if ((int)param_3 == 0) {
          func_0x000107783780();
          if ((int)param_3 == 0) {
            func_0x000107783780();
            if (((ulong)param_3 & 1) == 0) {
              func_0x000107783818();
              func_0x0001000633dc();
              if ((int)param_3 != 0) goto LAB_10778299c;
              func_0x000107783818();
              func_0x0001000633dc();
              if ((int)param_3 == 0) {
                func_0x000107783818();
                func_0x0001000633dc();
                if ((int)param_3 != 0) {
                  puStack_140 = (undefined8 *)0x0;
                  puStack_138 = (undefined8 *)0x0;
                  uStack_130 = 0;
                  ppuVar7 = &puStack_100;
                  func_0x0001075332f0(ppuVar7,param_5,&puStack_140,param_6);
                  bVar1 = ((uint)ppuVar7 >> 8 & 1) != 0;
                  if (bVar1) {
                    puStack_e0 = (undefined8 *)CONCAT71(puStack_e0._1_7_,(char)ppuVar7);
                  }
                  else {
                    puStack_d8 = puStack_138;
                    puStack_e0 = puStack_140;
                    uStack_d0 = uStack_130;
                    puStack_138 = (undefined8 *)0x0;
                    uStack_130 = 0;
                    puStack_140 = (undefined8 *)0x0;
                  }
                  lStack_c8 = CONCAT44(lStack_c8._4_4_,(uint)!bVar1);
                  param_3 = &puStack_140;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
                  if (((uint)ppuVar7 >> 8 & 1) != 0) {
                    cVar4 = (char)puStack_e0;
                    func_0x0001077838e4();
                    in_ZR = *(char *)(extraout_x8_03 + 0x138) == cVar4;
                    param_4 = param_5;
                    if (!(bool)in_ZR) {
                      func_0x000107783864();
                      func_0x000107783768();
                      *(char *)(puStack_140 + 0x27) = cVar4;
                      func_0x000107783750();
                      func_0x000107783790();
                      func_0x000107783870();
                      func_0x0001077837e4();
                      param_4 = param_5;
                    }
                    func_0x000107783718();
                    func_0x000107783948();
                    goto LAB_107782924;
                  }
                  func_0x000107783948();
                  param_4 = param_5;
                }
                goto LAB_1077827b4;
              }
              func_0x0001077838ac();
              if (iStack_128 == 0) {
                puStack_d8 = (undefined8 *)0x0;
                puStack_e0 = (undefined8 *)0x0;
                lStack_c8 = 0;
                uStack_d0 = 0;
                uStack_c0 = 0x3f800000;
                func_0x000107783700(&puStack_140);
                ppuVar2 = (undefined8 **)puStack_140[1];
                for (ppuVar7 = (undefined8 **)*puStack_140; ppuVar7 != ppuVar2;
                    ppuVar7 = ppuVar7 + 7) {
                  param_4 = ppuVar7;
                  func_0x000107373114(&puStack_e0,ppuVar7);
                }
                if (lStack_c8 == 0) {
                  func_0x0001072cda1c(&puStack_150,&puStack_150);
                }
                else {
                  func_0x0001072cdb30(&puStack_100,1);
                  puVar3 = puStack_f0;
                  puStack_f0[2] = 0;
                  *puStack_f0 = &PTR_DAT_11099be48;
                  puStack_f0[1] = 0;
                  param_4 = &puStack_e0;
                  func_0x000107298994(puStack_f0 + 3,param_4);
                  puStack_148 = puStack_f0;
                  *(undefined4 *)(puVar3 + 8) = 0;
                  puStack_f0 = (undefined8 *)0x0;
                  puStack_150 = puStack_148 + 3;
                  func_0x0001072cdbac(&puStack_100);
                }
                func_0x000107781d30(&puStack_100,param_2);
                puVar3 = puStack_150;
                in_ZR = puStack_100[3] == puStack_150[3];
                if ((bool)in_ZR) {
                  puVar10 = puStack_100 + 2;
                  do {
                    puVar10 = (undefined8 *)*puVar10;
                    if (puVar10 == (undefined8 *)0x0) {
                      func_0x000107783918();
                      goto LAB_107782d1c;
                    }
                    puVar8 = puVar3;
                    func_0x0001072623d4(puVar3,puVar10 + 2);
                    if (puVar8 == (undefined8 *)0x0) break;
                    puVar9 = puVar10 + 2;
                    param_4 = (undefined8 **)(puVar8 + 2);
                    func_0x000104c32db4(puVar9,param_4);
                  } while (((ulong)puVar9 & 1) != 0);
                }
                func_0x000107783918();
                func_0x000107783864();
                func_0x0001077837a8(&puStack_100);
                func_0x000107299380(puStack_100 + 0x18,&puStack_150);
                param_4 = &puStack_100;
                func_0x000107781c84(param_2 + 8,param_4);
                func_0x0001077832b8(&puStack_100);
LAB_107782d1c:
                func_0x000107283194(&puStack_150);
                func_0x0001072981bc(&puStack_e0);
              }
            }
            else {
LAB_10778299c:
              func_0x000107766098();
              if ((int)param_5 != 0) {
                uStack_1b0 = 3;
                func_0x0001072f5dec(&puStack_140,auStack_1b8);
                func_0x0001072f6ad4(apuStack_1a8,&puStack_140);
                param_4 = apuStack_1a8;
                func_0x0001072f6b34(&puStack_e0,param_4,1);
                func_0x0001072c9884(apuStack_1a8);
                func_0x0001072c9884(&puStack_140);
                func_0x0001072c9884(auStack_1b8);
                func_0x000107783990();
                func_0x0001077837b8();
                func_0x0001072c94e0(&puStack_140);
                if (((ulong)puStack_f0 & 1) == 0) {
                  func_0x000107783928();
                  goto LAB_1077827c0;
                }
                param_4 = &puStack_100;
                func_0x000107781cc8(param_2,param_4);
                goto LAB_107782724;
              }
              func_0x0001077838ac();
              if (iStack_128 == 0) {
                func_0x000107783700(&puStack_140);
                func_0x000107775530(&puStack_e0,&puStack_140,&puStack_150);
                func_0x00010755384c(&puStack_100,&puStack_e0);
                func_0x00010726af18(&puStack_d8);
                func_0x0001075393d4(&puStack_e0,&puStack_100);
                param_4 = &puStack_e0;
                func_0x000107781cc8(param_2,param_4);
                func_0x0001072c9b9c(&puStack_e0);
                puVar3 = puStack_100;
                puStack_100 = (undefined8 *)0x0;
                if (puVar3 != (undefined8 *)0x0) {
                  func_0x00010778397c();
                }
              }
            }
            func_0x000107783718();
            param_3 = &puStack_140;
            func_0x0001072f6c8c();
            goto LAB_107782924;
          }
          func_0x00010778389c();
          if (iStack_e8 != 0) goto LAB_10778296c;
          param_3 = *(undefined8 ***)(param_2 + 8);
          func_0x00010778384c();
          if (*(int *)(param_3 + 1) == 0) {
            func_0x0001077836e8(&puStack_100);
            param_4 = &puStack_100;
            func_0x0001072625b4(&puStack_140,param_4);
            func_0x000107781c6c(&puStack_e0,param_2);
            func_0x000107783950();
            func_0x000107783904();
            if (((ulong)param_5 & 1) == 0) {
              func_0x000107783864();
              func_0x0001077837a8(&puStack_e0);
              func_0x000107262f3c(puStack_e0 + 8,&puStack_140);
              goto LAB_107782ae4;
            }
            goto LAB_107782af8;
          }
        }
        else {
          func_0x00010778389c();
          if (iStack_e8 != 0) {
LAB_10778296c:
            func_0x000107783920();
            goto LAB_1077827b4;
          }
          param_3 = *(undefined8 ***)(param_2 + 8);
          func_0x00010778384c();
          if (*(int *)(param_3 + 1) == 0) {
            func_0x0001077836e8(&puStack_100);
            param_4 = &puStack_100;
            func_0x000107262e9c(&puStack_140,param_4);
            func_0x000107781c78(&puStack_e0,param_2);
            func_0x000107783950();
            func_0x000107783904();
            if (((ulong)param_5 & 1) == 0) {
              func_0x000107783864();
              func_0x0001077837a8(&puStack_e0);
              func_0x000107262f3c(puStack_e0 + 0xf,&puStack_140);
LAB_107782ae4:
              param_4 = &puStack_e0;
              func_0x000107781c84(param_2 + 8,param_4);
              func_0x0001077832b8(&puStack_e0);
            }
LAB_107782af8:
            param_3 = &puStack_140;
            func_0x000104c2f714();
          }
        }
        func_0x000107783718();
        func_0x000107783920();
        goto LAB_107782924;
      }
      func_0x0001077838bc();
      if ((int)lStack_c8 != 0) goto LAB_1077827b0;
      param_3 = &puStack_e0;
      FUN_1077836d0();
      fVar5 = puStack_e0._0_4_;
      func_0x0001077838e4();
      in_ZR = *(float *)(extraout_x8_02 + 0x134) == fVar5;
      if (!(bool)in_ZR) {
        func_0x000107783864();
        func_0x000107783768();
        *(float *)((long)puStack_140 + 0x134) = fVar5;
        func_0x000107783750();
        func_0x000107783790();
        func_0x000107783870();
        goto LAB_107782918;
      }
    }
    else {
      func_0x0001077838bc();
      if ((int)lStack_c8 != 0) {
LAB_1077827b0:
        func_0x000107783940();
LAB_1077827b4:
        *(undefined4 *)(param_1 + 0x28) = 0;
        goto LAB_107782924;
      }
      param_3 = &puStack_e0;
      FUN_1077836d0();
      fVar5 = puStack_e0._0_4_;
      func_0x0001077838e4();
      in_ZR = *(float *)(extraout_x8_00 + 0x130) == fVar5;
      if (!(bool)in_ZR) {
        func_0x000107783864();
        func_0x000107783768();
        *(float *)(puStack_140 + 0x26) = fVar5;
        func_0x000107783750();
        func_0x000107783790();
        func_0x000107783870();
LAB_107782918:
        func_0x0001077837e4();
      }
    }
    func_0x000107783718();
    func_0x000107783940();
  }
  else {
    uStack_158 = 3;
    param_4 = &puStack_160;
    func_0x0001072f6b34(&puStack_e0,param_4,1);
    func_0x0001072c9884(&puStack_160);
    func_0x000107783990();
    func_0x0001077837b8();
    func_0x0001072c94e0(&puStack_140);
    puVar10 = puStack_f8;
    puVar3 = puStack_100;
    if (((ulong)puStack_f0 & 1) == 0) {
      func_0x000107783928();
LAB_1077827c0:
      func_0x000107783718();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_140);
    }
    else {
      puStack_100 = (undefined8 *)0x0;
      puStack_f8 = (undefined8 *)0x0;
      uStack_188 = 1;
      puStack_178 = puVar10;
      puStack_180 = puVar3;
      uStack_198 = 0;
      uStack_190 = 0;
      cStack_170 = '\x01';
      uStack_168 = 0;
      func_0x0001077838e4();
      func_0x000107783988(&puStack_140);
      ppuVar7 = &puStack_180;
      param_4 = &puStack_140;
      func_0x000107781d84(ppuVar7,param_4);
      func_0x000107284db4(&puStack_140);
      if (((ulong)ppuVar7 & 1) == 0) {
        func_0x000107783864();
        func_0x0001077837a8(&puStack_150);
        puStack_140 = (undefined8 *)((ulong)puStack_140 & 0xffffffffffffff00);
        uVar6 = uStack_130 >> 8;
        uStack_130 = uStack_130 & 0xffffffffffffff00;
        in_ZR = cStack_170 == '\x01';
        if ((bool)in_ZR) {
          puStack_138 = puStack_178;
          puStack_140 = puStack_180;
          puStack_180 = (undefined8 *)0x0;
          puStack_178 = (undefined8 *)0x0;
          uStack_130 = CONCAT71((int7)uVar6,1);
        }
        iStack_128 = CONCAT31(iStack_128._1_3_,uStack_168);
        func_0x000107783c00(puStack_150 + 0x28,&puStack_140);
        func_0x000107284db4(&puStack_140);
        param_4 = &puStack_150;
        func_0x000107781c84(param_6,param_4);
        func_0x000107783790();
        func_0x000107783870();
        func_0x0001077832b8(&puStack_150);
      }
      func_0x000107284db4(&puStack_180);
      func_0x0001072c95d0(&uStack_198);
LAB_107782724:
      func_0x000107783718();
    }
    func_0x0001072c95d0(&puStack_100);
    param_3 = &puStack_e0;
    func_0x0001072ca718();
  }
LAB_107782924:
  func_0x00010778372c(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar7 = param_3;
  func_0x0001077837e4();
  func_0x000107783948();
  func_0x0001077837a0();
  puStack_1c8 = &UNK_107782f2c;
  puStack_1f8 = (undefined8 *)0x0;
  puStack_1f0 = (undefined8 *)0x0;
  puStack_1e8 = (undefined8 *)0x0;
  lStack_1e0 = param_2;
  ppuStack_1d8 = param_3;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x00010753e004(auStack_218,param_4,&puStack_1f8);
  if (cStack_200 != '\x01') {
    ppuVar7[1] = puStack_1f0;
    *ppuVar7 = puStack_1f8;
    ppuVar7[2] = puStack_1e8;
    puStack_1f0 = (undefined8 *)0x0;
    puStack_1e8 = (undefined8 *)0x0;
    puStack_1f8 = (undefined8 *)0x0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(ppuVar7,auStack_218);
  }
  *(uint *)(ppuVar7 + 3) = (uint)(cStack_200 != '\x01');
  func_0x0001001148fc(auStack_218);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1f8);
  return;
}



/* Entry: 10778328c; end: 1077832b7;  */

void FUN_10778328c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  return;
}



/* Entry: 107783428; end: 10778342f;  */

void FUN_107783428(void)

{
  return;
}



/* Entry: 107783534; end: 10778355f;  */

void FUN_107783534(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1077836d0; end: 107783717;  */

void FUN_1077836d0(long param_1)

{
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  func_0x00010563ab98();
  *(undefined1 *)(unaff_x19 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x20) = 0;
  *(undefined4 *)(unaff_x19 + 0x28) = 1;
  return;
}



/* Entry: 107783c44; end: 107783cb7;  */

undefined8 * FUN_107783c44(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x000107783cb8(auStack_40,param_2,0x1138369c0);
  func_0x000107785644(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x000107786768();
  func_0x000107786560();
  *param_1 = &PTR_DAT_1109d6fe0;
  return param_1;
}



/* Entry: 107784084; end: 10778414f;  */

/* WARNING: Possible PIC construction at 0x0001077840d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077840d4) */
/* WARNING: Removing unreachable block (ram,0x0001077840dc) */
/* WARNING: Removing unreachable block (ram,0x0001077840f4) */
/* WARNING: Removing unreachable block (ram,0x000107784108) */
/* WARNING: Removing unreachable block (ram,0x000107784114) */
/* WARNING: Removing unreachable block (ram,0x00010778412c) */
/* WARNING: Removing unreachable block (ram,0x000107784224) */

void FUN_107784084(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a1;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  
  func_0x000107786398();
  func_0x000107781de4();
  lVar1 = *(long *)(param_1 + 8);
  uStack_98 = 0x1077840d4;
  puStack_a0 = &stack0xfffffffffffffff0;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(0x1077841f0) {
  case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uStack_98 = 0x1077840d4;
    func_0x000107784c0c(lVar1 + 0x1d8,&uStack_a1);
    break;
  case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uStack_98 = 0x1077840d4;
    func_0x000107784cb8(lVar1 + 0x248,&uStack_a1);
    break;
  case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uStack_98 = 0x1077840d4;
    FUN_107784e48(lVar1 + 0x2b0,&uStack_a1);
    break;
  case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uStack_98 = 0x1077840d4;
    func_0x000107784f0c(lVar1 + 0x310,&uStack_a1);
    break;
  case 4:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uStack_c8 = *(undefined8 *)(lVar1 + 0x228);
    uStack_d0 = *(undefined8 *)(lVar1 + 0x220);
    uStack_b8 = *(undefined8 *)(lVar1 + 0x238);
    uStack_c0 = *(undefined8 *)(lVar1 + 0x230);
    uStack_b0 = *(undefined8 *)(lVar1 + 0x240);
    goto code_r0x000107784210;
  case 5:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar2 = (undefined8 *)(lVar1 + 0x288);
    uStack_b0 = *(undefined8 *)(lVar1 + 0x2a8);
    goto code_r0x000107784204;
  case 6:
                    /* WARNING: This code block may not be properly labeled as switch case */
    puVar2 = (undefined8 *)(lVar1 + 0x2e8);
    uStack_b0 = *(undefined8 *)(lVar1 + 0x308);
code_r0x000107784204:
    uStack_c8 = puVar2[1];
    uStack_d0 = *puVar2;
    uStack_b8 = puVar2[3];
    uStack_c0 = puVar2[2];
code_r0x000107784210:
    func_0x000107784b98(&uStack_d0);
    return;
  case 7:
                    /* WARNING: This code block may not be properly labeled as switch case */
    uStack_c8 = *(undefined8 *)(lVar1 + 0x3b8);
    uStack_d0 = *(undefined8 *)(lVar1 + 0x3b0);
    uStack_b8 = *(undefined8 *)(lVar1 + 0x3c8);
    uStack_c0 = *(undefined8 *)(lVar1 + 0x3c0);
    uStack_b0 = *(undefined8 *)(lVar1 + 0x3d0);
    goto code_r0x000107784210;
  case 8:
                    /* WARNING: This code block may not be properly labeled as switch case */
    lVar1 = lVar1 + 0x168;
    goto code_r0x000107784244;
  case 9:
                    /* WARNING: This code block may not be properly labeled as switch case */
    lVar1 = lVar1 + 0x1a0;
code_r0x000107784244:
    uStack_98 = 0x1077840d4;
    func_0x000107785298(lVar1,&uStack_a1);
  }
  return;
}



/* Entry: 107784bf0; end: 107784c0b;  */

void FUN_107784bf0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107785298(param_1,&uStack_11);
  return;
}



/* Entry: 107784e48; end: 107784e77;  */

void FUN_107784e48(undefined8 *param_1,float *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  float *pfVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *puVar4;
  undefined4 *extraout_x8_03;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined *unaff_x30;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_60 [8];
  float afStack_58 [2];
  double dStack_50;
  undefined8 uStack_18;
  
  puVar4 = param_1;
  if (param_2[0xc] == 0.0) {
LAB_1077863ac:
    puVar4[8] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined4 *)puVar4 = 7;
    return;
  }
  uVar2 = param_2[0xc] == 1.4013e-45;
  if ((bool)uVar2) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x000107786418();
    dStack_50 = (double)*param_2;
    afStack_58[0] = 4.2039e-45;
    param_2 = afStack_58;
    uStack_18 = extraout_x8;
    func_0x000104c32a18();
    *(undefined1 *)(param_1 + 8) = 1;
    func_0x000107786500();
    func_0x00010778634c(uStack_18);
    if ((bool)uVar2) {
      return;
    }
    unaff_x30 = &LAB_107784ed0;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_3 = param_1;
    param_1 = extraout_x8_00;
  }
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar6 = &UNK_107784f0c;
    __Unwind_Resume();
    puVar4 = extraout_x8_01;
    if (*(int *)(param_3 + 0x13) == 0) goto LAB_1077863ac;
    pfVar3 = (float *)(param_3 + 1);
    uVar2 = *(int *)(param_3 + 0x13) == 1;
    if ((bool)uVar2) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0xe0);
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x20;
      *(undefined8 **)((long)register0x00000008 + -0x88) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x80) = puVar5;
      *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107784f0c;
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x80);
      func_0x000107786380();
      func_0x00010775f12c((undefined1 *)((long)register0x00000008 + -0xd8));
      func_0x000107786470();
      func_0x00010778647c(1);
      func_0x000107786334();
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      puVar6 = &UNK_107784f80;
      __Unwind_Resume();
      param_2 = pfVar3;
      puVar4 = extraout_x8_02;
    }
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar5;
    *(undefined **)(puVar1 + -8) = puVar6;
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined8 *)(puVar1 + -0x90) = unaff_x20;
      *(undefined8 **)(puVar1 + -0x88) = puVar4;
      *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x78) = &UNK_107784fbc;
      func_0x000107269c1c(puVar1 + -0xa0);
      if (*(char *)(param_2 + 2) == '\x01') {
        func_0x0001077867e0(*(undefined8 *)param_2);
        func_0x000107785078(puVar1 + -0xc0);
      }
      if (*(char *)(param_2 + 6) == '\x01') {
        func_0x0001077867e0(*(undefined8 *)(param_2 + 4));
        func_0x0001077850a0(puVar1 + -0xc0,puVar1 + -0xa0,"delay",puVar1 + -0xa8);
      }
      uVar8 = *(undefined8 *)(puVar1 + -0x98);
      uVar7 = *(undefined8 *)(puVar1 + -0xa0);
      *(undefined8 *)(puVar1 + -0xa0) = 0;
      *(undefined8 *)(puVar1 + -0x98) = 0;
      *extraout_x8_03 = 1;
      *(undefined8 *)(extraout_x8_03 + 4) = uVar8;
      *(undefined8 *)(extraout_x8_03 + 2) = uVar7;
      *(undefined8 *)(puVar1 + -0xd0) = 0;
      *(undefined8 *)(puVar1 + -200) = 0;
      func_0x000104c335c0(puVar1 + -0xd0);
      func_0x000104c335c0(puVar1 + -0xa0);
      return;
    }
  }
  return;
}



/* Entry: 1077850c8; end: 1077850e7;  */

void FUN_1077850c8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001077850e8(&uStack_18);
  return;
}



/* Entry: 1077851d0; end: 1077851d3;  */

void FUN_1077851d0(void)

{
  func_0x00010778664c();
  func_0x0001077851f0();
  return;
}



/* Entry: 10778531c; end: 107785357;  */

long FUN_10778531c(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uVar1 = (param_2 - param_1) / 0x18;
    while (lVar2 = param_1, uVar1 != 0) {
      uVar5 = uVar1 >> 1;
      lVar4 = lVar2 + uVar5 * 0x18;
      lVar3 = lVar4;
      func_0x0001077853d8(lVar4,param_3);
      uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
      param_1 = lVar4 + 0x18;
      if ((int)lVar3 == 0) {
        uVar1 = uVar5;
        param_1 = lVar2;
      }
    }
    return lVar2;
  }
  return param_1;
}



/* Entry: 10778556c; end: 1077855ab;  */

undefined8 * FUN_10778556c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d7158;
  func_0x0001077855d4(param_1 + 3);
  return param_1;
}



/* Entry: 107785780; end: 10778583b;  */

void FUN_107785780(long param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001077866dc();
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x140);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return;
}



/* Entry: 1077859c4; end: 107785a03;  */

undefined8 FUN_1077859c4(long param_1)

{
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    uStack_18 = 0;
  }
  else {
    puStack_20 = &uStack_18;
    func_0x000107785a04(&puStack_20,param_1);
  }
  return uStack_18;
}



/* Entry: 107785bfc; end: 107785c47;  */

void FUN_107785bfc(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != -1 && *(int *)(param_2 + 0x40) == iVar1) {
    func_0x000107786784(*(int *)(param_2 + 0x40) == iVar1,param_1);
    func_0x000107786518();
  }
  return;
}



/* Entry: 107785d4c; end: 107785d57;  */

void FUN_107785d4c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000107786544(*param_1,param_1[1]);
  func_0x000107432d98();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *(undefined4 *)(unaff_x20 + 8) = 1;
  return;
}



/* Entry: 107785e68; end: 107785ebb;  */

void FUN_107785e68(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x38) != -1 || *(int *)(param_2 + 0x38) != -1) {
    if (*(int *)(param_2 + 0x38) == -1) {
      if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099ae88)[*(uint *)(param_1 + 0x38)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      return;
    }
    func_0x00010778658c();
  }
  return;
}



/* Entry: 107785f94; end: 107785f9b;  */

void FUN_107785f94(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x38) == 2) {
    func_0x000107786544(param_2,param_3);
    func_0x0001072f6188();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x30) = uVar1;
    return;
  }
  func_0x000107786568();
  func_0x000107786000();
  return;
}



/* Entry: 107786100; end: 107786113;  */

undefined8 FUN_107786100(void)

{
  return 1;
}



/* Entry: 107786268; end: 10778626f;  */

void FUN_107786268(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x90) == 2) {
    func_0x000107786544(param_2,param_3);
    func_0x0001072f6188();
    func_0x000107295ba8(unaff_x20 + 0x28,unaff_x19 + 0x28);
    return;
  }
  func_0x000107786568();
  func_0x0001077862d0();
  return;
}



/* Entry: 1077868c4; end: 107786937;  */

undefined8 *
FUN_1077868c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_60 [32];
  
  FUN_107786a34();
  func_0x0001073db32c(auStack_60);
  *param_4 = &PTR_DAT_1109d7320;
  *(undefined4 *)((long)param_4 + 0x1c) = param_1;
  *(undefined4 *)(param_4 + 4) = param_2;
  *(undefined4 *)((long)param_4 + 0x24) = param_3;
  func_0x0001074840b8(param_4 + 5,param_6);
  return param_4;
}



/* Entry: 107786a34; end: 107786a63;  */

void FUN_107786a34(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  *param_1 = &PTR_DAT_1109ab0d0;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = (undefined1 *)&stack0x00000010;
  func_0x0001073ad858();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107786ca4; end: 107786ccb;  */

void FUN_107786ca4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x000107786ccc(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 107786e24; end: 107786e7f;  */

undefined8 FUN_107786e24(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lStack_28;
  
  lStack_28 = *param_3;
  *param_3 = 0;
  func_0x000107786f30(param_1,param_2,&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x000107786efc();
  }
  return param_1;
}



/* Entry: 107787008; end: 107787033;  */

undefined ** FUN_107787008(void)

{
  return &PTR_DAT_1109d73c0;
}



/* Entry: 107787138; end: 1077871a3;  */

undefined8 * FUN_107787138(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x0001077871a4(auStack_40,param_2,param_3);
  FUN_10778b6d8(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x00010778ca40();
  func_0x00010778c86c();
  *param_1 = &PTR_DAT_1109d7560;
  return param_1;
}



/* Entry: 107787ea4; end: 107787f73;  */

/* WARNING: Possible PIC construction at 0x000107787ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077893b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107787ef4) */
/* WARNING: Removing unreachable block (ram,0x000107787efc) */
/* WARNING: Removing unreachable block (ram,0x000107787f14) */
/* WARNING: Removing unreachable block (ram,0x0001077893b4) */
/* WARNING: Removing unreachable block (ram,0x0001077893fc) */
/* WARNING: Removing unreachable block (ram,0x000107789404) */
/* WARNING: Removing unreachable block (ram,0x000107789418) */
/* WARNING: Removing unreachable block (ram,0x0001077893bc) */
/* WARNING: Removing unreachable block (ram,0x0001077893d0) */
/* WARNING: Removing unreachable block (ram,0x0001077893d8) */
/* WARNING: Removing unreachable block (ram,0x000107789c38) */
/* WARNING: Removing unreachable block (ram,0x0001077893e0) */
/* WARNING: Removing unreachable block (ram,0x000107789c40) */
/* WARNING: Removing unreachable block (ram,0x000107789c48) */
/* WARNING: Removing unreachable block (ram,0x000107789c4c) */
/* WARNING: Removing unreachable block (ram,0x000107787f28) */
/* WARNING: Removing unreachable block (ram,0x000107787f34) */
/* WARNING: Removing unreachable block (ram,0x000107787f4c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_107787ea4(ulong param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 *param_6,undefined **param_7)

{
  byte bVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 uVar4;
  ulong *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined1 uVar14;
  undefined1 extraout_w8;
  long lVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  long extraout_x8_49;
  long extraout_x8_50;
  long extraout_x8_51;
  long extraout_x8_52;
  long extraout_x8_53;
  long extraout_x8_54;
  long extraout_x8_55;
  long extraout_x8_56;
  long extraout_x8_57;
  long extraout_x8_58;
  long extraout_x8_59;
  long extraout_x8_60;
  long extraout_x8_61;
  long extraout_x8_62;
  long extraout_x8_63;
  long extraout_x8_64;
  ulong *extraout_x8_65;
  long extraout_x8_66;
  long extraout_x8_67;
  long extraout_x8_68;
  long extraout_x8_69;
  long extraout_x8_70;
  long extraout_x8_71;
  ulong *extraout_x8_72;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong *extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  ulong *extraout_x9_11;
  long extraout_x9_12;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *******pppppppuVar19;
  undefined *puVar20;
  code *pcVar21;
  ulong in_register_00005008;
  ulong in_register_00005028;
  undefined1 uStack_291;
  undefined8 *******pppppppuStack_290;
  undefined *puStack_288;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong *puStack_250;
  ulong uStack_248;
  undefined *puStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined *apuStack_218 [4];
  undefined1 uStack_1f8;
  byte bStack_1f0;
  byte bStack_1e0;
  byte bStack_1d8;
  byte bStack_1d0;
  byte bStack_1c0;
  byte bStack_1a0;
  undefined8 uStack_198;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong auStack_128 [3];
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined *puStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 *******pppppppuStack_a0;
  code *pcStack_98;
  ulong auStack_90 [8];
  undefined1 uStack_50;
  
  puVar5 = auStack_90;
  puVar3 = auStack_90;
  func_0x00010778c620();
  func_0x000107781de4();
  uVar16 = 0x24;
  puVar8 = *(ulong **)(param_3 + 8);
  puStack_c0 = &UNK_1109d75e0;
  pcStack_98 = (code *)0x107787ef4;
  uStack_b8 = uVar16;
  lStack_b0 = param_3;
  pppppppuStack_a0 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010778c688();
  uVar4 = (int)uVar16 == 0x59;
  switch(uVar16 & 0xffffffff) {
  case 0:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0xa9;
      goto code_r0x000107784b60;
    }
    break;
  case 1:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0xb5;
code_r0x000107784b28:
      func_0x000107784c0c(auStack_90,puVar8,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 2:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0xc3;
      goto code_r0x000107784b44;
    }
    break;
  case 3:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0xd0;
      goto code_r0x000107784b60;
    }
    break;
  case 4:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0xdc;
      goto code_r0x000107784b44;
    }
    break;
  case 5:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0xe9;
      goto code_r0x000107784b44;
    }
    break;
  case 6:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0xf6;
      goto code_r0x000107784b60;
    }
    break;
  case 7:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x102;
      goto code_r0x000107784b60;
    }
    break;
  case 8:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x10e;
      goto code_r0x000107784b60;
    }
    break;
  case 9:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x11a;
      goto code_r0x000107784b60;
    }
    break;
  case 10:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x126;
      goto code_r0x000107784b44;
    }
    break;
  case 0xb:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x133;
FUN_107784bf0:
      func_0x000107785298(auStack_90,puVar8,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0xc:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x13f;
      goto code_r0x000107784b60;
    }
    break;
  case 0xd:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x14b;
      goto code_r0x000107784b60;
    }
    break;
  case 0xe:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x157;
      goto code_r0x000107784b60;
    }
    break;
  case 0xf:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x163;
      goto code_r0x000107784b28;
    }
    break;
  case 0x10:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x171;
      goto code_r0x000107784b44;
    }
    break;
  case 0x11:
    func_0x00010778c564();
    if ((bool)uVar4) {
      func_0x00010778b120(auStack_90,puVar8 + 0x17e,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0x12:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x18a;
      goto FUN_107784bf0;
    }
    break;
  case 0x13:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x196;
      goto code_r0x000107784b28;
    }
    break;
  case 0x14:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x1a4;
      goto code_r0x000107784b60;
    }
    break;
  case 0x15:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x1b0;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x16:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x1be;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x17:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x1cc;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x18:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x1da;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x19:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x1e8;
      goto code_r0x0001077885cc;
    }
    break;
  case 0x1a:
    if ((int)puVar8[0x1fc] == 0) goto code_r0x00010778863c;
    uVar4 = (int)puVar8[0x1fc] == 1;
    if ((bool)uVar4) {
      auStack_128[0] = 0;
      auStack_128[1] = 0;
      auStack_128[2] = 0;
      func_0x00010778ca0c(auStack_128);
      for (lVar15 = 0; uVar4 = lVar15 == 4, !(bool)uVar4; lVar15 = lVar15 + 1) {
        uStack_110 = CONCAT44(uStack_110._4_4_,6);
        uStack_108 = CONCAT71(uStack_108._1_7_,*(undefined1 *)((long)(puVar8 + 0x1f6) + lVar15));
        func_0x0001072aad1c(auStack_128,&uStack_110);
        func_0x00010778ca14();
      }
      func_0x000107327958(&uStack_140,auStack_128);
      uStack_110 = uStack_110 & 0xffffffff00000000;
      uStack_100 = uStack_138;
      uStack_108 = uStack_140;
      func_0x00010778c8d4();
      puVar5 = auStack_128;
      func_0x000107269124();
      puVar8 = &uStack_110;
      func_0x00010778c840();
      uStack_50 = 1;
      param_1 = uStack_140;
      in_register_00005008 = uStack_138;
    }
    else {
      puVar5 = (ulong *)puVar8[0x1f6];
      (**(code **)(*puVar5 + 0x28))(&uStack_110);
      puVar8 = &uStack_110;
      func_0x00010778c840();
      uStack_50 = 2;
    }
    func_0x00010778ca14();
    goto code_r0x0001077887e0;
  case 0x1b:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x1010;
code_r0x000107788498:
      puVar8 = (ulong *)((long)puVar8 + lVar15);
code_r0x000107784b60:
      FUN_107784e48(auStack_90,puVar8,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0x1c:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x1070;
code_r0x0001077885c8:
      puVar8 = (ulong *)((long)puVar8 + lVar15);
code_r0x0001077885cc:
      func_0x00010778b208(auStack_90,puVar8,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0x1d:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x10e0;
code_r0x0001077885a0:
      puVar8 = (ulong *)((long)puVar8 + lVar15);
code_r0x000107784b44:
      func_0x000107784cb8(auStack_90,puVar8,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0x1e:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x1148;
code_r0x000107788470:
      uVar4 = 1;
      puVar10 = (undefined8 *)((long)puVar8 + lVar15);
      func_0x00010778c688();
      if (*(int *)(puVar10 + 10) == 0) {
        func_0x00010778c7c4();
      }
      else {
        uVar4 = *(int *)(puVar10 + 10) == 1;
        if ((bool)uVar4) {
          auStack_128[1] = 0;
          auStack_128[2] = 0;
          uStack_110 = 0;
          func_0x00010778ca0c(auStack_128 + 1);
          lVar15 = 0x20;
          do {
            func_0x000107784d2c(&uStack_108,puVar10);
            func_0x00010778ca48();
            func_0x00010778c8e8();
            puVar10 = puVar10 + 1;
            lVar15 = lVar15 + -8;
          } while (lVar15 != 0);
          func_0x00010778ca28();
          uStack_108 = (ulong)uStack_108._4_4_ << 0x20;
          uStack_f8 = auStack_128[0];
          uStack_100 = uStack_130;
          func_0x00010778c8d4();
          func_0x00010778c9a8();
          func_0x00010778c840();
          uStack_50 = 1;
        }
        else {
          (**(code **)(*(long *)*puVar10 + 0x28))(&uStack_108);
          func_0x00010778c840();
          uStack_50 = 2;
        }
        func_0x00010778c8e8();
      }
      func_0x00010778c564();
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010778c858();
      puVar3 = &uStack_130;
      pppppppuVar19 = &pppppppuStack_a0;
      pcVar21 = FUN_10778b104;
code_r0x00010778b104:
      *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar19;
      *(code **)((long)puVar3 + -8) = pcVar21;
      func_0x00010778b36c();
      return;
    }
    break;
  case 0x1f:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x11c8;
      goto code_r0x000107788498;
    }
    break;
  case 0x20:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x1228;
      goto code_r0x000107788498;
    }
    break;
  case 0x21:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x1288;
      goto code_r0x0001077885c8;
    }
    break;
  case 0x22:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x12f8;
      goto code_r0x000107788470;
    }
    break;
  case 0x23:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x1378;
      goto code_r0x0001077885a0;
    }
    break;
  case 0x24:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x13e0;
      goto code_r0x000107788470;
    }
    break;
  case 0x25:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x1460;
      goto code_r0x000107788498;
    }
    break;
  case 0x26:
    func_0x00010778c564();
    if ((bool)uVar4) {
      lVar15 = 0x14c0;
      goto code_r0x0001077885c8;
    }
    break;
  case 0x27:
    in_register_00005008 = puVar8[0xb1];
    param_1 = puVar8[0xb0];
    in_register_00005028 = puVar8[0xb3];
    param_2 = puVar8[0xb2];
    uStack_f0 = puVar8[0xb4];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x28:
    in_register_00005008 = puVar8[0xbf];
    param_1 = puVar8[0xbe];
    in_register_00005028 = puVar8[0xc1];
    param_2 = puVar8[0xc0];
    uStack_f0 = puVar8[0xc2];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x29:
    func_0x00010778c664(puVar8 + 0xcb);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x2a:
    func_0x00010778c664(puVar8 + 0xd7);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x2b:
    in_register_00005008 = puVar8[0xe5];
    param_1 = puVar8[0xe4];
    in_register_00005028 = puVar8[0xe7];
    param_2 = puVar8[0xe6];
    uStack_f0 = puVar8[0xe8];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x2c:
    func_0x00010778c664(puVar8 + 0xf1);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x2d:
    func_0x00010778c664(puVar8 + 0xfd);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x2e:
    func_0x00010778c664(puVar8 + 0x109);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x2f:
    func_0x00010778c664(puVar8 + 0x115);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x30:
    func_0x00010778c664(puVar8 + 0x121);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x31:
    in_register_00005008 = puVar8[0x12f];
    param_1 = puVar8[0x12e];
    in_register_00005028 = puVar8[0x131];
    param_2 = puVar8[0x130];
    uStack_f0 = puVar8[0x132];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x32:
    in_register_00005008 = puVar8[0x13b];
    param_1 = puVar8[0x13a];
    in_register_00005028 = puVar8[0x13d];
    param_2 = puVar8[0x13c];
    uStack_f0 = puVar8[0x13e];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x33:
    in_register_00005008 = puVar8[0x147];
    param_1 = puVar8[0x146];
    in_register_00005028 = puVar8[0x149];
    param_2 = puVar8[0x148];
    uStack_f0 = puVar8[0x14a];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x34:
    in_register_00005008 = puVar8[0x153];
    param_1 = puVar8[0x152];
    in_register_00005028 = puVar8[0x155];
    param_2 = puVar8[0x154];
    uStack_f0 = puVar8[0x156];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x35:
    in_register_00005008 = puVar8[0x15f];
    param_1 = puVar8[0x15e];
    in_register_00005028 = puVar8[0x161];
    param_2 = puVar8[0x160];
    uStack_f0 = puVar8[0x162];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x36:
    in_register_00005008 = puVar8[0x16d];
    param_1 = puVar8[0x16c];
    in_register_00005028 = puVar8[0x16f];
    param_2 = puVar8[0x16e];
    uStack_f0 = puVar8[0x170];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x37:
    func_0x00010778c664(puVar8 + 0x179);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x38:
    func_0x00010778c664(puVar8 + 0x185);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x39:
    func_0x00010778c664(puVar8 + 0x191);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x3a:
    func_0x00010778c664(puVar8 + 0x19f);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x3b:
    func_0x00010778c664(puVar8 + 0x1ab);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x3c:
    func_0x00010778c664(puVar8 + 0x1b9);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x3d:
    func_0x00010778c664(puVar8 + 0x1c7);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x3e:
    func_0x00010778c664(puVar8 + 0x1d5);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x3f:
    func_0x00010778c664(puVar8 + 0x1e3);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x40:
    func_0x00010778c664(puVar8 + 0x1f1);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x41:
    func_0x00010778c664(puVar8 + 0x1fd);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x42:
    func_0x00010778c664(puVar8 + 0x209);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x43:
    func_0x00010778c664(puVar8 + 0x217);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x44:
    in_register_00005008 = puVar8[0x225];
    param_1 = puVar8[0x224];
    in_register_00005028 = puVar8[0x227];
    param_2 = puVar8[0x226];
    uStack_f0 = puVar8[0x228];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x45:
    in_register_00005008 = puVar8[0x235];
    param_1 = puVar8[0x234];
    in_register_00005028 = puVar8[0x237];
    param_2 = puVar8[0x236];
    uStack_f0 = puVar8[0x238];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x46:
    in_register_00005008 = puVar8[0x241];
    param_1 = puVar8[0x240];
    in_register_00005028 = puVar8[0x243];
    param_2 = puVar8[0x242];
    uStack_f0 = puVar8[0x244];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x47:
    in_register_00005008 = puVar8[0x24d];
    param_1 = puVar8[0x24c];
    in_register_00005028 = puVar8[0x24f];
    param_2 = puVar8[0x24e];
    uStack_f0 = puVar8[0x250];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x48:
    in_register_00005008 = puVar8[0x25b];
    param_1 = puVar8[0x25a];
    in_register_00005028 = puVar8[0x25d];
    param_2 = puVar8[0x25c];
    uStack_f0 = puVar8[0x25e];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x49:
    in_register_00005008 = puVar8[0x26b];
    param_1 = puVar8[0x26a];
    in_register_00005028 = puVar8[0x26d];
    param_2 = puVar8[0x26c];
    uStack_f0 = puVar8[0x26e];
    uStack_110 = param_1;
    uStack_108 = in_register_00005008;
    uStack_100 = param_2;
    uStack_f8 = in_register_00005028;
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x4a:
    func_0x00010778c664(puVar8 + 0x277);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x4b:
    func_0x00010778c664(puVar8 + 0x287);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x4c:
    func_0x00010778c664(puVar8 + 0x293);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x4d:
    func_0x00010778c664(puVar8 + 0x2a1);
    func_0x00010778c634();
    goto code_r0x0001077887e0;
  case 0x4e:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x2d;
      goto FUN_107784bf0;
    }
    break;
  case 0x4f:
    func_0x00010778c564();
    pppppppuVar19 = pppppppuStack_a0;
    pcVar21 = pcStack_98;
    if ((bool)uVar4) goto code_r0x00010778b104;
    break;
  case 0x50:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x43;
      goto FUN_107784bf0;
    }
    break;
  case 0x51:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x4a;
      goto FUN_107784bf0;
    }
    break;
  case 0x52:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x51;
      goto FUN_107784bf0;
    }
    break;
  case 0x53:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x58;
      goto FUN_107784bf0;
    }
    break;
  case 0x54:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0x5f;
      goto FUN_107784bf0;
    }
    break;
  case 0x55:
    func_0x00010778c564();
    puVar3 = auStack_90;
    pppppppuVar19 = pppppppuStack_a0;
    pcVar21 = pcStack_98;
    if ((bool)uVar4) goto code_r0x00010778b104;
    break;
  case 0x56:
    func_0x00010778c564();
    puVar3 = auStack_90;
    pppppppuVar19 = pppppppuStack_a0;
    pcVar21 = pcStack_98;
    if ((bool)uVar4) goto code_r0x00010778b104;
    break;
  case 0x57:
    func_0x00010778c564();
    puVar3 = auStack_90;
    pppppppuVar19 = pppppppuStack_a0;
    pcVar21 = pcStack_98;
    if ((bool)uVar4) goto code_r0x00010778b104;
    break;
  case 0x58:
    func_0x00010778c564();
    puVar3 = auStack_90;
    pppppppuVar19 = pppppppuStack_a0;
    pcVar21 = pcStack_98;
    if ((bool)uVar4) goto code_r0x00010778b104;
    break;
  case 0x59:
    func_0x00010778c564();
    if ((bool)uVar4) {
      puVar8 = puVar8 + 0xa2;
      goto FUN_107784bf0;
    }
    break;
  default:
code_r0x00010778863c:
    func_0x00010778c7c4();
code_r0x0001077887e0:
    func_0x00010778c564();
    if ((bool)uVar4) {
      return;
    }
  }
  ___stack_chk_fail();
  puVar3 = auStack_128;
  func_0x000107269124();
  func_0x00010778c858();
  puStack_148 = &DAT_107788824;
  puVar12 = param_6;
  ppuVar13 = param_7;
  pppppppuStack_150 = &pppppppuStack_a0;
  func_0x00010778c620();
  puStack_250 = puVar8;
  uStack_248 = uVar16;
  uStack_198 = extraout_x8;
  func_0x00010772d2fc(apuStack_218,&puStack_250);
  ppuVar6 = &PTR_DAT_1109d75d8;
  ppuVar9 = (undefined **)&UNK_1109d7e48;
  ppuVar11 = apuStack_218;
  func_0x000107785358(&PTR_DAT_1109d75d8,&UNK_1109d7e48,ppuVar11);
  uVar4 = ppuVar6 == (undefined **)&UNK_1109d7e48;
  if ((bool)uVar4) {
code_r0x000107788898:
    *(undefined1 *)puVar5 = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
    goto code_r0x00010778a0fc;
  }
  ppuVar7 = apuStack_218;
  ppuVar9 = ppuVar6;
  func_0x000107785400(ppuVar7,ppuVar6);
  if ((int)ppuVar7 != 0) goto code_r0x000107788898;
  bVar1 = *(byte *)(ppuVar6 + 1);
  uVar4 = bVar1 == 0x59;
  uVar17 = (uint)bVar1;
  if (bVar1 < 0x5a) {
    uVar18 = (uint)bVar1;
    switch(bVar1) {
    case 0:
    case 3:
    case 6:
    case 0xe:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x00010733b904();
      if ((bStack_1e0 & 1) != 0) {
        uVar4 = uVar17 == 0xe;
        if ((bool)uVar4) {
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_11 + 0xab8);
          func_0x000107786038(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c7a8(puStack_240 + 0xab8);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c7a8(*param_7 + 0xab8);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar4 = uVar17 == 3;
          if ((bool)uVar4) {
            func_0x00010778c79c();
            ppuVar6 = apuStack_218;
            ppuVar9 = (undefined **)(extraout_x8_09 + 0x680);
            func_0x000107786038(ppuVar6,ppuVar9);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                ppuVar9 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c7a8(puStack_240 + 0x680);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c7a8(*param_7 + 0x680);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar4 = uVar17 == 6;
            if ((bool)uVar4) {
              func_0x00010778c79c();
              ppuVar6 = apuStack_218;
              ppuVar9 = (undefined **)(extraout_x8_10 + 0x7b0);
              func_0x000107786038(ppuVar6,ppuVar9);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                  ppuVar9 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c7a8(puStack_240 + 0x7b0);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c7a8(*param_7 + 0x7b0);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              if (uVar17 != 0) {
                func_0x00010778c9b8();
                func_0x00010778c850();
                uVar4 = uVar17 - 1 == 0xc;
                switch(uVar17 - 1) {
                case 0:
                  goto code_r0x000107788d8c;
                case 1:
                case 3:
                case 9:
                  goto code_r0x000107788ed8;
                case 4:
                  goto code_r0x000107789114;
                case 6:
                case 7:
                case 8:
                case 0xb:
                case 0xc:
                  goto code_r0x0001077888c8;
                case 10:
                  goto code_r0x000107789084;
                }
                goto code_r0x00010778996c;
              }
              func_0x00010778c79c();
              ppuVar6 = apuStack_218;
              ppuVar9 = (undefined **)(extraout_x8_02 + 0x548);
              func_0x000107786038(ppuVar6,ppuVar9);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                  ppuVar9 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c7a8(puStack_240 + 0x548);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c7a8(*param_7 + 0x548);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
          }
        }
        goto code_r0x00010778a0e8;
      }
      func_0x00010778c5cc();
      if (extraout_x8_03 != 0) {
        func_0x00010778c5f4();
        func_0x00010778c698();
        func_0x00010778c604();
code_r0x000107788a44:
        func_0x00010778c6bc();
        func_0x00010778c848();
      }
code_r0x000107788a4c:
      func_0x00010778c590();
      goto code_r0x00010778a0ec;
    case 1:
    case 0xf:
    case 0x13:
code_r0x000107788d8c:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x0001077848c0();
      if ((bStack_1d0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_13 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar4 = uVar17 == 0x13;
        if ((bool)uVar4) {
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_15 + 0xcb0);
          FUN_107785bfc(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c8c0(puStack_240 + 0xcb0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c8c0(*param_7 + 0xcb0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar4 = uVar17 == 0xf;
          if ((bool)uVar4) {
            func_0x00010778c79c();
            ppuVar6 = apuStack_218;
            ppuVar9 = (undefined **)(extraout_x8_14 + 0xb18);
            FUN_107785bfc(ppuVar6,ppuVar9);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                ppuVar9 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c8c0(puStack_240 + 0xb18);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c8c0(*param_7 + 0xb18);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar4 = uVar17 == 1;
            if (!(bool)uVar4) {
              ppuVar7 = apuStack_218;
              func_0x00010754e888();
              func_0x00010778c850();
              uVar4 = uVar18 - 2 == 0x10;
              switch(uVar18 - 2) {
              case 0:
              case 2:
              case 8:
              case 0xe:
                goto code_r0x000107788ed8;
              case 3:
                goto code_r0x000107789114;
              case 5:
              case 6:
              case 7:
              case 10:
              case 0xb:
                goto code_r0x0001077888c8;
              case 9:
              case 0x10:
                goto code_r0x000107789084;
              case 0xf:
                goto code_r0x0001077893a8;
              }
              goto code_r0x00010778996c;
            }
            func_0x00010778c79c();
            ppuVar6 = apuStack_218;
            ppuVar9 = (undefined **)(extraout_x8_12 + 0x5a8);
            FUN_107785bfc(ppuVar6,ppuVar9);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                ppuVar9 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c8c0(puStack_240 + 0x5a8);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c8c0(*param_7 + 0x5a8);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010754e888();
      break;
    case 2:
    case 4:
    case 10:
    case 0x10:
    case 0x1d:
    case 0x23:
code_r0x000107788ed8:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x0001073398b8();
      if ((bStack_1d8 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_17 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          goto code_r0x000107788f74;
        }
        goto code_r0x000107788f7c;
      }
      uVar4 = uVar18 == 0x23;
      if ((bool)uVar4) {
        func_0x00010778c79c();
        func_0x00010778c860();
        func_0x000107785dfc();
        if (((ulong)ppuVar7 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7f4(puStack_240);
            FUN_107785e68();
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7f4(*param_7);
            FUN_107785e68();
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
      }
      else {
        uVar4 = uVar17 == 4;
        if ((bool)uVar4) {
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_24 + 0x6e0);
          func_0x000107785dfc(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c810(puStack_240 + 0x6e0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c810(*param_7 + 0x6e0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar4 = uVar17 == 10;
          if ((bool)uVar4) {
            func_0x00010778c79c();
            ppuVar6 = apuStack_218;
            ppuVar9 = (undefined **)(extraout_x8_18 + 0x930);
            func_0x000107785dfc(ppuVar6,ppuVar9);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                ppuVar9 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c810(puStack_240 + 0x930);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c810(*param_7 + 0x930);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar4 = uVar17 == 0x10;
            if ((bool)uVar4) {
              func_0x00010778c79c();
              ppuVar6 = apuStack_218;
              ppuVar9 = (undefined **)(extraout_x8_19 + 0xb88);
              func_0x000107785dfc(ppuVar6,ppuVar9);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                  ppuVar9 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c810(puStack_240 + 0xb88);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c810(*param_7 + 0xb88);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              uVar4 = uVar17 == 0x1d;
              if ((bool)uVar4) {
                func_0x00010778c79c();
                func_0x00010778c860();
                func_0x000107785dfc();
                if (((ulong)ppuVar7 & 1) == 0) {
                  if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                    ppuVar9 = (undefined **)*param_7;
                    func_0x00010778c784();
                    func_0x00010778c7f4(puStack_240);
                    FUN_107785e68();
                    func_0x00010778c614();
                    func_0x00010778c77c();
                  }
                  else {
                    func_0x00010778c7f4(*param_7);
                    FUN_107785e68();
                  }
                  func_0x00010778c640();
                  func_0x00010778c78c();
                }
              }
              else {
                uVar4 = uVar17 == 2;
                if (!(bool)uVar4) {
                  ppuVar7 = apuStack_218;
                  func_0x000107339974();
                  func_0x00010778c850();
                  uVar4 = uVar17 - 5 == 0x1d;
                  switch(uVar17 - 5) {
                  case 0:
                    goto code_r0x000107789114;
                  case 2:
                  case 3:
                  case 4:
                  case 7:
                  case 8:
                  case 0xf:
                  case 0x16:
                  case 0x1a:
                  case 0x1b:
                    goto code_r0x0001077888c8;
                  case 6:
                  case 0xd:
                    goto code_r0x000107789084;
                  case 0xc:
                    goto code_r0x0001077893a8;
                  case 0x10:
                  case 0x11:
                  case 0x12:
                  case 0x13:
                  case 0x14:
                  case 0x17:
                  case 0x1c:
                    goto code_r0x000107789308;
                  case 0x15:
                    goto code_r0x0001077894ec;
                  case 0x19:
                  case 0x1d:
                    goto code_r0x000107789454;
                  }
                  goto code_r0x00010778996c;
                }
                func_0x00010778c79c();
                ppuVar6 = apuStack_218;
                ppuVar9 = (undefined **)(extraout_x8_16 + 0x618);
                func_0x000107785dfc(ppuVar6,ppuVar9);
                if (((ulong)ppuVar6 & 1) == 0) {
                  if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                    ppuVar9 = (undefined **)*param_7;
                    func_0x00010778c784();
                    func_0x00010778c810(puStack_240 + 0x618);
                    func_0x00010778c614();
                    func_0x00010778c77c();
                  }
                  else {
                    func_0x00010778c810(*param_7 + 0x618);
                  }
                  func_0x00010778c640();
                  func_0x00010778c78c();
                }
              }
            }
          }
        }
      }
code_r0x000107789ee4:
      func_0x00010778c888();
      goto code_r0x000107789ee8;
    case 5:
code_r0x000107789114:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x0001073398b8();
      if ((bStack_1d8 & 1) != 0) {
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_22 + 0x748);
        func_0x000107785dfc(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c810(puStack_240 + 0x748);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c810(*param_7 + 0x748);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        goto code_r0x000107789ee4;
      }
      func_0x00010778c5cc();
      if (extraout_x8_23 != 0) {
        func_0x00010778c5f4();
        func_0x00010778c698();
        func_0x00010778c604();
code_r0x000107788f74:
        func_0x00010778c6bc();
        func_0x00010778c848();
      }
code_r0x000107788f7c:
      func_0x00010778c590();
code_r0x000107789ee8:
      func_0x00010778c8b4();
      func_0x000107339974();
      break;
    case 7:
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0x14:
    case 0x1b:
    case 0x1f:
    case 0x20:
    case 0x25:
code_r0x0001077888c8:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x00010733b904();
      if ((bStack_1e0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_01 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          goto code_r0x000107788a44;
        }
        goto code_r0x000107788a4c;
      }
      uVar4 = uVar17 - 7 == 0xd;
      switch(uVar17 - 7) {
      case 0:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_00 + 0x810);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_240 + 0x810);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x810);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 1:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_07 + 0x870);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_240 + 0x870);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x870);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 2:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_05 + 0x8d0);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_240 + 0x8d0);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x8d0);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 3:
      case 4:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
code_r0x000107788a54:
        func_0x00010778c9b8();
        func_0x00010778c850();
        uVar4 = uVar18 - 0xb == 0x19;
        switch(uVar18 - 0xb) {
        case 0:
        case 7:
          goto code_r0x000107789084;
        case 6:
          goto code_r0x0001077893a8;
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0x11:
        case 0x16:
          goto code_r0x000107789308;
        case 0xf:
          goto code_r0x0001077894ec;
        case 0x13:
        case 0x17:
        case 0x19:
          goto code_r0x000107789454;
        }
        goto code_r0x00010778996c;
      case 5:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_04 + 0x9f8);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_240 + 0x9f8);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0x9f8);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 6:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_06 + 0xa58);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_240 + 0xa58);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0xa58);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 0xd:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_08 + 0xd20);
        func_0x000107786038(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c7a8(puStack_240 + 0xd20);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c7a8(*param_7 + 0xd20);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      default:
        uVar4 = uVar17 == 0x1b;
        if ((bool)uVar4) {
          func_0x00010778c79c();
          func_0x00010778c818();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c6d8(puStack_240);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c6d8(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar4 = uVar17 == 0x1f;
          if ((bool)uVar4) {
            func_0x00010778c79c();
            func_0x00010778c818();
            if (((ulong)ppuVar7 & 1) == 0) {
              if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                ppuVar9 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c6d8(puStack_240);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c6d8(*param_7);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar4 = uVar17 == 0x20;
            if ((bool)uVar4) {
              func_0x00010778c79c();
              func_0x00010778c818();
              if (((ulong)ppuVar7 & 1) == 0) {
                if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                  ppuVar9 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c6d8(puStack_240);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c6d8(*param_7);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              uVar4 = uVar18 == 0x25;
              if (!(bool)uVar4) goto code_r0x000107788a54;
              func_0x00010778c79c();
              func_0x00010778c818();
              if (((ulong)ppuVar7 & 1) == 0) {
                if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                  ppuVar9 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c6d8(puStack_240);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c6d8(*param_7);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
          }
        }
      }
code_r0x00010778a0e8:
      func_0x00010778c888();
code_r0x00010778a0ec:
      func_0x00010778c8b4();
      func_0x00010727e950();
      break;
    case 0xb:
    case 0x12:
    case 0x53:
    case 0x54:
code_r0x000107789084:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x00010733e5bc();
      if ((bStack_1e0 & 1) != 0) {
        uVar4 = uVar17 == 0x54;
        if ((bool)uVar4) {
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_27 + 0x2f8);
          func_0x000107785b50(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c808(puStack_240 + 0x2f8);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c808(*param_7 + 0x2f8);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar4 = uVar17 == 0x12;
          if ((bool)uVar4) {
            func_0x00010778c79c();
            ppuVar6 = apuStack_218;
            ppuVar9 = (undefined **)(extraout_x8_25 + 0xc50);
            func_0x000107785b50(ppuVar6,ppuVar9);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                ppuVar9 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c998(puStack_240 + 0xc50);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c998(*param_7 + 0xc50);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar4 = uVar17 == 0x53;
            if ((bool)uVar4) {
              func_0x00010778c79c();
              ppuVar6 = apuStack_218;
              ppuVar9 = (undefined **)(extraout_x8_26 + 0x2c0);
              func_0x000107785b50(ppuVar6,ppuVar9);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                  ppuVar9 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c808(puStack_240 + 0x2c0);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c808(*param_7 + 0x2c0);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
            else {
              uVar4 = uVar17 == 0xb;
              if (!(bool)uVar4) {
                func_0x00010778c9b0();
                func_0x00010778c850();
                uVar4 = uVar18 - 0x11 == 0x15;
                switch(uVar18 - 0x11) {
                case 0:
                  goto code_r0x0001077893a8;
                case 1:
                case 2:
                case 3:
                case 10:
                case 0xc:
                case 0xe:
                case 0xf:
                case 0x12:
                case 0x14:
                  break;
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 0xb:
                case 0x10:
                case 0x15:
                  goto code_r0x000107789308;
                case 9:
                  goto code_r0x0001077894ec;
                case 0xd:
                case 0x11:
                case 0x13:
                  goto code_r0x000107789454;
                default:
                  uVar4 = uVar18 - 0x50 == 3;
                  if ((uVar18 - 0x50 < 3) || (uVar4 = true, uVar18 == 0x4e))
                  goto code_r0x0001077897f8;
                  uVar4 = uVar18 == 0x4f;
                  if ((bool)uVar4) goto code_r0x0001077898c0;
                }
                goto code_r0x00010778996c;
              }
              func_0x00010778c79c();
              ppuVar6 = apuStack_218;
              ppuVar9 = (undefined **)(extraout_x8_20 + 0x998);
              func_0x000107785b50(ppuVar6,ppuVar9);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                  ppuVar9 = (undefined **)*param_7;
                  func_0x00010778c784();
                  func_0x00010778c998(puStack_240 + 0x998);
                  func_0x00010778c614();
                  func_0x00010778c77c();
                }
                else {
                  func_0x00010778c998(*param_7 + 0x998);
                }
                func_0x00010778c640();
                func_0x00010778c78c();
              }
            }
          }
        }
        goto code_r0x00010778a07c;
      }
      func_0x00010778c5cc();
      if (extraout_x8_21 != 0) {
        func_0x00010778c5f4();
        func_0x00010778c698();
        func_0x00010778c604();
code_r0x000107789888:
        func_0x00010778c6bc();
        func_0x00010778c848();
      }
code_r0x000107789890:
      func_0x00010778c590();
      goto code_r0x00010778a080;
    case 0x11:
code_r0x0001077893a8:
      func_0x00010778c744();
      func_0x00010778c5b0();
      puVar20 = &UNK_1077893b4;
      goto code_r0x00010778ac78;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1c:
    case 0x21:
    case 0x26:
code_r0x000107789308:
      func_0x00010778c744();
      func_0x00010778c5b0();
      func_0x000107343028();
      if ((bStack_1d0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_29 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar4 = uVar18 - 0x15 == 0x11;
        switch(uVar18 - 0x15) {
        case 0:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_28 + 0xd80);
          func_0x00010778c12c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_240 + 0xd80);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xd80);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 1:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_33 + 0xdf0);
          func_0x00010778c12c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_240 + 0xdf0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xdf0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 2:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_34 + 0xe60);
          func_0x00010778c12c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_240 + 0xe60);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xe60);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 3:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_35 + 0xed0);
          func_0x00010778c12c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_240 + 0xed0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xed0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 4:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_36 + 0xf40);
          func_0x00010778c12c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c800(puStack_240 + 0xf40);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c800(*param_7 + 0xf40);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        default:
          ppuVar7 = (undefined **)0x0;
          func_0x000107343508();
          func_0x00010778c850();
          uVar2 = uVar18 - 0x1a >> 1 & 0x7f | (uVar18 - 0x1a) * 0x80 & 0xff;
          uVar4 = uVar2 - 4 == 2;
          if (1 < uVar2 - 4) {
            if (uVar2 == 0) goto code_r0x0001077894ec;
            uVar4 = uVar2 == 2;
            if (!(bool)uVar4) goto code_r0x00010778996c;
          }
          goto code_r0x000107789454;
        case 7:
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c12c();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c764(puStack_240);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c764(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 0xc:
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c12c();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c764(puStack_240);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c764(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 0x11:
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c12c();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c764(puStack_240);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c764(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x000107343508();
      break;
    case 0x1a:
code_r0x0001077894ec:
      puStack_268 = (undefined *)0x0;
      uStack_260 = 0;
      uStack_258 = 0;
      func_0x00010778c924();
      func_0x00010755d8d4();
      if ((bStack_1e0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_32 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_31 + 0xfb0);
        FUN_10778c198(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c9f4(puStack_240);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c9f4(*param_7);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010778b4b4();
      break;
    case 0x1e:
    case 0x22:
    case 0x24:
code_r0x000107789454:
      puStack_268 = (undefined *)0x0;
      uStack_260 = 0;
      uStack_258 = 0;
      func_0x00010778c924();
      func_0x00010755d660();
      if ((bStack_1c0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_30 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar4 = uVar18 == 0x24;
        if ((bool)uVar4) {
          func_0x00010778c79c();
          func_0x00010778c860();
          func_0x00010778c348();
          if (((ulong)ppuVar7 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c770(puStack_240);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c770(*param_7);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        else {
          uVar4 = uVar17 == 0x22;
          if ((bool)uVar4) {
            func_0x00010778c79c();
            func_0x00010778c860();
            func_0x00010778c348();
            if (((ulong)ppuVar7 & 1) == 0) {
              if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                ppuVar9 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c770(puStack_240);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c770(*param_7);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
          else {
            uVar4 = uVar17 == 0x1e;
            if (!(bool)uVar4) {
              func_0x00010778b4e4(apuStack_218);
              goto code_r0x000107789968;
            }
            func_0x00010778c79c();
            func_0x00010778c860();
            func_0x00010778c348();
            if (((ulong)ppuVar7 & 1) == 0) {
              if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
                ppuVar9 = (undefined **)*param_7;
                func_0x00010778c784();
                func_0x00010778c770(puStack_240);
                func_0x00010778c614();
                func_0x00010778c77c();
              }
              else {
                func_0x00010778c770(*param_7);
              }
              func_0x00010778c640();
              func_0x00010778c78c();
            }
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010778b4e4();
      break;
    default:
      goto code_r0x00010778996c;
    case 0x4e:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x59:
code_r0x0001077897f8:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x00010733e5bc();
      if ((bStack_1e0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_38 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          goto code_r0x000107789888;
        }
        goto code_r0x000107789890;
      }
      uVar4 = uVar17 - 0x4e == 0xb;
      switch(uVar17 - 0x4e) {
      case 0:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_37 + 0x168);
        func_0x000107785b50(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_240 + 0x168);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x168);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      default:
        func_0x00010778c9b0();
        func_0x00010778c850();
        uVar2 = uVar17 - 0x4f;
        uVar4 = uVar2 == 9;
        if ((uVar2 < 10) && (uVar4 = (1 << (ulong)(uVar2 & 0x1f) & 0x3c1U) == 0, !(bool)uVar4))
        goto code_r0x0001077898c0;
        goto code_r0x00010778996c;
      case 2:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_51 + 0x218);
        func_0x000107785b50(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_240 + 0x218);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x218);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 3:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_50 + 0x250);
        func_0x000107785b50(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_240 + 0x250);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x250);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 4:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_52 + 0x288);
        func_0x000107785b50(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_240 + 0x288);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x288);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
        break;
      case 0xb:
        func_0x00010778c79c();
        ppuVar6 = apuStack_218;
        ppuVar9 = (undefined **)(extraout_x8_53 + 0x510);
        func_0x000107785b50(ppuVar6,ppuVar9);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
            ppuVar9 = (undefined **)*param_7;
            func_0x00010778c784();
            func_0x00010778c808(puStack_240 + 0x510);
            func_0x00010778c614();
            func_0x00010778c77c();
          }
          else {
            func_0x00010778c808(*param_7 + 0x510);
          }
          func_0x00010778c640();
          func_0x00010778c78c();
        }
      }
code_r0x00010778a07c:
      func_0x00010778c888();
code_r0x00010778a080:
      func_0x00010778c8b4();
      func_0x00010733e5d8();
      break;
    case 0x4f:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
code_r0x0001077898c0:
      func_0x00010778c6a4();
      func_0x00010778c5b0();
      func_0x000107323db4();
      if ((bStack_1a0 & 1) == 0) {
        func_0x00010778c5cc();
        if (extraout_x8_41 != 0) {
          func_0x00010778c5f4();
          func_0x00010778c698();
          func_0x00010778c604();
          func_0x00010778c6bc();
          func_0x00010778c848();
        }
        func_0x00010778c590();
      }
      else {
        uVar4 = uVar18 - 0x4f == 9;
        switch(uVar18 - 0x4f) {
        case 0:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_39 + 0x1a0);
          func_0x00010778be7c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_40 + 0x1a8);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_55 + 0x1a8);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        default:
          func_0x00010732493c(apuStack_218);
code_r0x000107789968:
          func_0x00010778c850();
          goto code_r0x00010778996c;
        case 6:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_44 + 0x330);
          func_0x00010778be7c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_45 + 0x338);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_56 + 0x338);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 7:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_42 + 0x3a8);
          func_0x00010778be7c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_43 + 0x3b0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_54 + 0x3b0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 8:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_46 + 0x420);
          func_0x00010778be7c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_47 + 0x428);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_57 + 0x428);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
          break;
        case 9:
          func_0x00010778c79c();
          ppuVar6 = apuStack_218;
          ppuVar9 = (undefined **)(extraout_x8_48 + 0x498);
          func_0x00010778be7c(ppuVar6,ppuVar9);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
              ppuVar9 = (undefined **)*param_7;
              func_0x00010778c784();
              func_0x00010778c9e8();
              func_0x00010778c838(extraout_x8_49 + 0x4a0);
              func_0x00010778c614();
              func_0x00010778c77c();
            }
            else {
              func_0x00010778c9dc();
              func_0x00010778c838(extraout_x8_58 + 0x4a0);
            }
            func_0x00010778c640();
            func_0x00010778c78c();
          }
        }
        func_0x00010778c888();
      }
      func_0x00010778c8b4();
      func_0x00010732493c();
    }
    ppuVar6 = &puStack_268;
    goto code_r0x00010778a0f8;
  }
code_r0x00010778996c:
  puStack_240 = (undefined *)0x0;
  uStack_238 = 0;
  uStack_230 = 0;
  ppuVar9 = &puStack_240;
  func_0x00010754bb48(apuStack_218,param_6,ppuVar9,param_7);
  if ((bStack_1f0 & 1) == 0) {
    puVar5[1] = uStack_238;
    *puVar5 = (ulong)puStack_240;
    puVar5[2] = uStack_230;
    uStack_238 = 0;
    uStack_230 = 0;
    puStack_240 = (undefined *)0x0;
    uVar14 = 1;
    goto code_r0x00010778a7b4;
  }
  uVar4 = uVar17 - 0x27 == 0x26;
  switch(uVar17 - 0x27) {
  case 0:
    if ((puVar3[2] != 0) && (*(long *)(puVar3[2] + 8) == 0)) {
      func_0x00010778c728();
      func_0x00010778cb14();
      goto code_r0x00010778a7b0;
    }
    func_0x00010778c794();
    func_0x00010778c718();
    func_0x00010778cb14();
    goto code_r0x00010778a79c;
  case 1:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778ca9c();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778ca9c();
    goto code_r0x00010778a7b0;
  case 2:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0x678] = uStack_1f8;
code_r0x00010778a700:
      func_0x00010778c7b0();
      extraout_x9_04[1] = in_register_00005008;
      *extraout_x9_04 = param_1;
      extraout_x9_04[3] = in_register_00005028;
      extraout_x9_04[2] = param_2;
      goto code_r0x00010778a79c;
    }
    *(undefined1 *)(puVar3[1] + 0x678) = uStack_1f8;
    break;
  case 3:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0x6d8] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0x6d8) = uStack_1f8;
    break;
  case 4:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cad8();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cad8();
    goto code_r0x00010778a7b0;
  case 5:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0x7a8] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0x7a8) = uStack_1f8;
    break;
  case 6:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0x808] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0x808) = uStack_1f8;
    break;
  case 7:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0x868] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0x868) = uStack_1f8;
    break;
  case 8:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0x8c8] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0x8c8) = uStack_1f8;
    break;
  case 9:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0x928] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0x928) = uStack_1f8;
    break;
  case 10:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778ca74();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778ca74();
    goto code_r0x00010778a7b0;
  case 0xb:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778caec();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778caec();
    goto code_r0x00010778a7b0;
  case 0xc:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cac4();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cac4();
    goto code_r0x00010778a7b0;
  case 0xd:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778ca88();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778ca88();
    goto code_r0x00010778a7b0;
  case 0xe:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cb00();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cb00();
    goto code_r0x00010778a7b0;
  case 0xf:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c718();
      func_0x00010778cab0();
      goto code_r0x00010778a79c;
    }
    func_0x00010778c728();
    func_0x00010778cab0();
    goto code_r0x00010778a7b0;
  case 0x10:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xbe8] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xbe8) = uStack_1f8;
    break;
  case 0x11:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xc48] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xc48) = uStack_1f8;
    break;
  case 0x12:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xca8] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xca8) = uStack_1f8;
    break;
  case 0x13:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xd18] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xd18) = uStack_1f8;
    break;
  case 0x14:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xd78] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xd78) = uStack_1f8;
    break;
  case 0x15:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xde8] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xde8) = uStack_1f8;
    break;
  case 0x16:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xe58] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xe58) = uStack_1f8;
    break;
  case 0x17:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xec8] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xec8) = uStack_1f8;
    break;
  case 0x18:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xf38] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xf38) = uStack_1f8;
    break;
  case 0x19:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      puStack_268[0xfa8] = uStack_1f8;
      goto code_r0x00010778a700;
    }
    *(undefined1 *)(puVar3[1] + 0xfa8) = uStack_1f8;
    break;
  case 0x1a:
    if ((puVar3[2] != 0) && (*(long *)(puVar3[2] + 8) == 0)) {
      lVar15 = puVar3[1] + 0xfe8;
code_r0x00010778aa8c:
      func_0x00010778c7b0(lVar15);
      extraout_x8_72[1] = in_register_00005008;
      *extraout_x8_72 = param_1;
      extraout_x8_72[3] = in_register_00005028;
      extraout_x8_72[2] = param_2;
      *(undefined1 *)(extraout_x8_72 + 4) = uStack_1f8;
      goto code_r0x00010778a7b0;
    }
    func_0x00010778c794();
    puVar20 = puStack_268 + 0xfe8;
    goto code_r0x00010778a78c;
  case 0x1b:
    if ((puVar3[2] != 0) && (*(long *)(puVar3[2] + 8) == 0)) {
      uVar16 = puVar3[1];
      lVar15 = 0x1048;
code_r0x00010778aa88:
      lVar15 = uVar16 + lVar15;
      goto code_r0x00010778aa8c;
    }
    func_0x00010778c794();
    lVar15 = 0x1048;
    goto code_r0x00010778a788;
  case 0x1c:
    if ((puVar3[2] != 0) && (*(long *)(puVar3[2] + 8) == 0)) {
      uVar16 = puVar3[1];
      lVar15 = 0x10b8;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar15 = 0x10b8;
    goto code_r0x00010778a788;
  case 0x1d:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_268);
      *(ulong *)(extraout_x8_64 + 0x1128) = in_register_00005008;
      *(ulong *)(extraout_x8_64 + 0x1120) = param_1;
      *(ulong *)(extraout_x8_64 + 0x1138) = in_register_00005028;
      *(ulong *)(extraout_x8_64 + 0x1130) = param_2;
      lVar15 = extraout_x9_05;
code_r0x00010778a75c:
      *(undefined1 *)(lVar15 + 0x20) = uStack_1f8;
      goto code_r0x00010778a79c;
    }
    func_0x00010778c6c8(puVar3[1]);
    *(ulong *)(extraout_x8_71 + 0x1128) = in_register_00005008;
    *(ulong *)(extraout_x8_71 + 0x1120) = param_1;
    *(ulong *)(extraout_x8_71 + 0x1138) = in_register_00005028;
    *(ulong *)(extraout_x8_71 + 0x1130) = param_2;
    lVar15 = extraout_x9_12;
    goto code_r0x00010778aa74;
  case 0x1e:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_268);
      *(ulong *)(extraout_x8_62 + 0x11a8) = in_register_00005008;
      *(ulong *)(extraout_x8_62 + 0x11a0) = param_1;
      *(ulong *)(extraout_x8_62 + 0x11b8) = in_register_00005028;
      *(ulong *)(extraout_x8_62 + 0x11b0) = param_2;
      lVar15 = extraout_x9_02;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar3[1]);
    *(ulong *)(extraout_x8_69 + 0x11a8) = in_register_00005008;
    *(ulong *)(extraout_x8_69 + 0x11a0) = param_1;
    *(ulong *)(extraout_x8_69 + 0x11b8) = in_register_00005028;
    *(ulong *)(extraout_x8_69 + 0x11b0) = param_2;
    lVar15 = extraout_x9_09;
    goto code_r0x00010778aa74;
  case 0x1f:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_268);
      *(ulong *)(extraout_x8_61 + 0x1208) = in_register_00005008;
      *(ulong *)(extraout_x8_61 + 0x1200) = param_1;
      *(ulong *)(extraout_x8_61 + 0x1218) = in_register_00005028;
      *(ulong *)(extraout_x8_61 + 0x1210) = param_2;
      lVar15 = extraout_x9_01;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar3[1]);
    *(ulong *)(extraout_x8_68 + 0x1208) = in_register_00005008;
    *(ulong *)(extraout_x8_68 + 0x1200) = param_1;
    *(ulong *)(extraout_x8_68 + 0x1218) = in_register_00005028;
    *(ulong *)(extraout_x8_68 + 0x1210) = param_2;
    lVar15 = extraout_x9_08;
    goto code_r0x00010778aa74;
  case 0x20:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_268);
      *(ulong *)(extraout_x8_63 + 0x1268) = in_register_00005008;
      *(ulong *)(extraout_x8_63 + 0x1260) = param_1;
      *(ulong *)(extraout_x8_63 + 0x1278) = in_register_00005028;
      *(ulong *)(extraout_x8_63 + 0x1270) = param_2;
      lVar15 = extraout_x9_03;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar3[1]);
    *(ulong *)(extraout_x8_70 + 0x1268) = in_register_00005008;
    *(ulong *)(extraout_x8_70 + 0x1260) = param_1;
    *(ulong *)(extraout_x8_70 + 0x1278) = in_register_00005028;
    *(ulong *)(extraout_x8_70 + 0x1270) = param_2;
    lVar15 = extraout_x9_10;
    goto code_r0x00010778aa74;
  case 0x21:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_268);
      *(ulong *)(extraout_x8_60 + 0x12d8) = in_register_00005008;
      *(ulong *)(extraout_x8_60 + 0x12d0) = param_1;
      *(ulong *)(extraout_x8_60 + 0x12e8) = in_register_00005028;
      *(ulong *)(extraout_x8_60 + 0x12e0) = param_2;
      lVar15 = extraout_x9_00;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar3[1]);
    *(ulong *)(extraout_x8_67 + 0x12d8) = in_register_00005008;
    *(ulong *)(extraout_x8_67 + 0x12d0) = param_1;
    *(ulong *)(extraout_x8_67 + 0x12e8) = in_register_00005028;
    *(ulong *)(extraout_x8_67 + 0x12e0) = param_2;
    lVar15 = extraout_x9_07;
    goto code_r0x00010778aa74;
  case 0x22:
    if ((puVar3[2] == 0) || (*(long *)(puVar3[2] + 8) != 0)) {
      func_0x00010778c794();
      func_0x00010778c6c8(puStack_268);
      *(ulong *)(extraout_x8_59 + 0x1358) = in_register_00005008;
      *(ulong *)(extraout_x8_59 + 0x1350) = param_1;
      *(ulong *)(extraout_x8_59 + 0x1368) = in_register_00005028;
      *(ulong *)(extraout_x8_59 + 0x1360) = param_2;
      lVar15 = extraout_x9;
      goto code_r0x00010778a75c;
    }
    func_0x00010778c6c8(puVar3[1]);
    *(ulong *)(extraout_x8_66 + 0x1358) = in_register_00005008;
    *(ulong *)(extraout_x8_66 + 0x1350) = param_1;
    *(ulong *)(extraout_x8_66 + 0x1368) = in_register_00005028;
    *(ulong *)(extraout_x8_66 + 0x1360) = param_2;
    lVar15 = extraout_x9_06;
code_r0x00010778aa74:
    *(undefined1 *)(lVar15 + 0x20) = uStack_1f8;
    goto code_r0x00010778a7b0;
  case 0x23:
    if ((puVar3[2] != 0) && (*(long *)(puVar3[2] + 8) == 0)) {
      uVar16 = puVar3[1];
      lVar15 = 0x13b8;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar15 = 0x13b8;
    goto code_r0x00010778a788;
  case 0x24:
    if ((puVar3[2] != 0) && (*(long *)(puVar3[2] + 8) == 0)) {
      uVar16 = puVar3[1];
      lVar15 = 0x1438;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar15 = 0x1438;
    goto code_r0x00010778a788;
  case 0x25:
    if ((puVar3[2] != 0) && (*(long *)(puVar3[2] + 8) == 0)) {
      uVar16 = puVar3[1];
      lVar15 = 0x1498;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar15 = 0x1498;
    goto code_r0x00010778a788;
  case 0x26:
    if ((puVar3[2] != 0) && (*(long *)(puVar3[2] + 8) == 0)) {
      uVar16 = puVar3[1];
      lVar15 = 0x1508;
      goto code_r0x00010778aa88;
    }
    func_0x00010778c794();
    lVar15 = 0x1508;
code_r0x00010778a788:
    puVar20 = puStack_268 + lVar15;
code_r0x00010778a78c:
    func_0x00010778c7b0(puVar20);
    extraout_x8_65[1] = in_register_00005008;
    *extraout_x8_65 = param_1;
    extraout_x8_65[3] = in_register_00005028;
    extraout_x8_65[2] = param_2;
    *(undefined1 *)(extraout_x8_65 + 4) = uStack_1f8;
code_r0x00010778a79c:
    ppuVar9 = &puStack_268;
    func_0x00010778be38(puVar3 + 1,ppuVar9);
    func_0x00010778ada4(&puStack_268);
  default:
    goto code_r0x00010778a7b0;
  }
  func_0x00010778c7b0();
  extraout_x9_11[1] = in_register_00005008;
  *extraout_x9_11 = param_1;
  extraout_x9_11[3] = in_register_00005028;
  extraout_x9_11[2] = param_2;
code_r0x00010778a7b0:
  func_0x00010778c888();
  uVar14 = extraout_w8;
code_r0x00010778a7b4:
  *(undefined1 *)(puVar5 + 3) = uVar14;
  ppuVar6 = &puStack_240;
  ppuVar11 = param_7;
code_r0x00010778a0f8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar6);
code_r0x00010778a0fc:
  func_0x00010778c57c(uStack_198);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010778c6e4();
  func_0x00010754e888(apuStack_218);
  ppuVar7 = &puStack_268;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar7);
  puVar20 = &UNK_10778ac78;
  func_0x00010778c858();
code_r0x00010778ac78:
  pppppppuStack_290 = &pppppppuStack_150;
  puStack_288 = puVar20;
  func_0x00010755ac94(&uStack_291,ppuVar7,ppuVar9,ppuVar11,*puVar12,*(undefined1 *)ppuVar13);
  return;
}



/* Entry: 10778b104; end: 10778b11f;  */

void FUN_10778b104(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x00010778b36c(param_1,&uStack_11);
  return;
}



/* Entry: 10778b328; end: 10778b36b;  */

/* WARNING: Possible PIC construction at 0x00010778b3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3d8) */

undefined1 * FUN_10778b328(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar3;
  undefined *puVar4;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [72];
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  
  puVar1 = auStack_70;
  ppppuVar3 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x00010778c620();
  func_0x00010778c7e0();
  func_0x00010778c980();
  func_0x00010778c758();
  func_0x00010778c738(2);
  func_0x00010778c57c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar4 = &SUB_10778b36c;
    __Unwind_Resume();
    if (*(int *)(param_1 + 0x70) == 0) {
      extraout_x8[8] = 0;
      extraout_x8[5] = 0;
      extraout_x8[4] = 0;
      extraout_x8[7] = 0;
      extraout_x8[6] = 0;
      extraout_x8[1] = 0;
      *extraout_x8 = 0;
      extraout_x8[3] = 0;
      extraout_x8[2] = 0;
      *(undefined4 *)extraout_x8 = 7;
      return param_1;
    }
    uVar2 = *(int *)(param_1 + 0x70) == 1;
    if ((bool)uVar2) {
      puStack_78 = &SUB_10778b36c;
      pppuStack_80 = ppppuVar3;
      func_0x00010778c620(param_1 + 8);
      puVar1 = auStack_140;
      param_2 = auStack_140;
      puStack_e8 = &UNK_10778b3c0;
      ppppuVar3 = &pppuStack_f0;
      pppuStack_f0 = &pppuStack_80;
      func_0x00010778c620(auStack_d8);
      uStack_108 = extraout_x8_00;
      func_0x000104c2fe00(auStack_140);
      func_0x000104c33004();
      func_0x000104c2f714();
      func_0x00010778c57c(uStack_108);
      if ((bool)uVar2) {
        return param_2;
      }
      puVar4 = &UNK_10778b440;
      ___stack_chk_fail();
    }
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 *****)(puVar1 + -0x10) = ppppuVar3;
    *(undefined **)(puVar1 + -8) = puVar4;
    func_0x00010778c620();
    func_0x00010778c7e0();
    func_0x00010778c980();
    func_0x00010778c758();
    func_0x00010778c738(2);
    func_0x00010778c57c(*(undefined8 *)(puVar1 + -0x28));
    param_1 = param_2;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined8 *)(puVar1 + -0x90) = unaff_x20;
      *(undefined8 *)(puVar1 + -0x88) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x78) = &UNK_10778b484;
      if (param_2[0x38] == '\x01') {
        func_0x00010748aaa4(param_2);
      }
      return param_2;
    }
  }
  return param_1;
}



/* Entry: 10778b5b0; end: 10778b5d7;  */

long FUN_10778b5b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010778b5d8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10778b6d8; end: 10778b83b;  */

undefined8 * FUN_10778b6d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073db868(&uStack_30);
  return param_1;
}



/* Entry: 10778bd00; end: 10778bd43;  */

undefined8 FUN_10778bd00(long param_1)

{
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x70) == 0) {
    uStack_18 = 0;
  }
  else {
    puStack_20 = &uStack_18;
    func_0x00010778bd44(&puStack_20,param_1);
  }
  return uStack_18;
}



/* Entry: 10778bf3c; end: 10778bf57;  */

undefined8 FUN_10778bf3c(void)

{
  return 1;
}



/* Entry: 10778c05c; end: 10778c08b;  */

void FUN_10778c05c(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x00010778c87c();
  func_0x00010748aaa4();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 10778c198; end: 10778c1e3;  */

void FUN_10778c198(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != -1 && *(int *)(param_2 + 0x30) == iVar1) {
    func_0x00010778cb28(*(int *)(param_2 + 0x30) == iVar1,param_1);
    func_0x00010778c824();
  }
  return;
}



/* Entry: 10778c3d4; end: 10778c42b;  */

bool FUN_10778c3d4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  while ((param_1 != param_2 &&
         (lVar1 = param_1, func_0x000107785e5c(param_1,param_3), (int)lVar1 != 0))) {
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  }
  return param_1 == param_2;
}



/* Entry: 10778cfa0; end: 10778cfb3;  */

void FUN_10778cfa0(void)

{
  func_0x00010778cfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10778d39c; end: 10778d39f;  */

undefined8 * FUN_10778d39c(undefined8 *param_1)

{
  func_0x00010748b94c(param_1 + 5);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10778d7e4; end: 10778d96f;  */

undefined8 * FUN_10778d7e4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plStack_430;
  undefined1 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined1 *puStack_410;
  undefined *puStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_370 [112];
  undefined1 auStack_300 [104];
  undefined1 auStack_298 [96];
  undefined1 auStack_238 [112];
  undefined1 auStack_1c8 [200];
  undefined1 auStack_100 [104];
  undefined1 auStack_98 [96];
  undefined8 uStack_38;
  
  func_0x00010778f7e4();
  uStack_38 = extraout_x8;
  func_0x00010778d53c(&lStack_400,*(undefined8 *)(param_2 + 8));
  func_0x000107262f3c(lStack_400 + 8,param_3);
  func_0x00010778f0c8(&lStack_3d0);
  lVar1 = lStack_400;
  func_0x00010778adcc(lStack_400 + 0x3b0,&lStack_3d0);
  func_0x000107784a14(lVar1 + 0x410,auStack_370);
  func_0x000107784a4c(lVar1 + 0x480,auStack_300);
  func_0x000107784a7c(lVar1 + 0x4e8,auStack_298);
  func_0x000107784a14(lVar1 + 0x548,auStack_238);
  func_0x000107784ab4(lVar1 + 0x5b8,auStack_1c8);
  func_0x000107784a4c(lVar1 + 0x680,auStack_100);
  func_0x00010778adec(lVar1 + 0x6e8,auStack_98);
  func_0x00010778ed34(&lStack_3d0);
  puVar2 = (undefined8 *)0x48;
  __Znwm();
  uStack_3c8 = uStack_3f8;
  lStack_3d0 = lStack_400;
  lStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  plVar5 = &lStack_3d0;
  func_0x000107781b94();
  func_0x0001073ad4c4(&lStack_3d0);
  func_0x0001073dcd34(&uStack_3e0);
  *puVar2 = &PTR_DAT_1109d8080;
  puVar3 = &uStack_3f0;
  func_0x0001073dcd34();
  *param_1 = puVar2;
  func_0x00010778f8f0();
  func_0x00010778f714(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001073ad4c4(&lStack_3d0);
  func_0x0001073dcd34(&uStack_3e0);
  func_0x0001073dcd34(&uStack_3f0);
  puVar4 = puVar2;
  __ZdlPv();
  func_0x00010778f8f0();
  func_0x00010778f8f8();
  puStack_408 = &DAT_10778d970;
  puStack_420 = puVar2;
  puStack_418 = puVar3;
  puStack_410 = &stack0xfffffffffffffff0;
  func_0x00010734936c(plVar5);
  if (*(int *)(puVar4 + 0x33) != 0) {
    func_0x00010778f77c(&DAT_10f428581);
    func_0x0001077858cc(plVar5,puVar4 + 0x2d);
  }
  if (*(int *)(puVar4 + 0x3a) != 0) {
    func_0x00010778f77c(&DAT_10f428570);
    plStack_430 = plVar5;
    func_0x0001073dd72c(puVar4 + 0x34);
    puStack_428 = (undefined1 *)&plStack_430;
    func_0x00010778fa48(*(undefined4 *)(puVar4 + 0x3a));
    (*(code *)(&PTR_FUN_1109d8388)[extraout_x8_00])(&puStack_428,puVar4 + 0x34);
  }
  if (*(int *)(puVar4 + 0x41) != 0) {
    func_0x00010778f77c(&DAT_10f42855a);
    func_0x0001077858cc(plVar5,puVar4 + 0x3b);
  }
  if (*(int *)(puVar4 + 0x48) != 0) {
    func_0x00010778f77c(&DAT_10f42848d);
    func_0x00010778f294(plVar5,puVar4 + 0x42);
  }
  if (*(int *)(puVar4 + 0x57) != 0) {
    func_0x00010778f77c(&DAT_10f428509);
    func_0x00010778fa20();
  }
  if (*(int *)(puVar4 + 0x66) != 0) {
    func_0x00010778f77c(&DAT_10f428417);
    func_0x00010778fa20();
  }
  if (*(int *)(puVar4 + 0x75) != 0) {
    func_0x00010778f77c(&DAT_10f428539);
    func_0x00010778fa20();
  }
  plVar5[4] = plVar5[4] + -0x10;
  func_0x000107349610(*plVar5,0x7d);
  return (undefined8 *)0x1;
}



/* Entry: 10778eca8; end: 10778ee1f;  */

void FUN_10778eca8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010778d53c(&uStack_40,*(undefined8 *)(param_2 + 8));
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[1] = lStack_38;
  *param_1 = uStack_40;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077832b8(&uStack_30);
  func_0x00010778f8f0();
  return;
}



/* Entry: 10778ef8c; end: 10778ef9b;  */

void FUN_10778ef8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010778ef94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10778f1a4; end: 10778f1a7;  */

undefined8 FUN_10778f1a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 10778f338; end: 10778f397;  */

long * FUN_10778f338(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long **pplStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [72];
  
  func_0x00010778f7e4();
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0x28))(auStack_68);
  func_0x00010778f9ac();
  func_0x00010778f930();
  func_0x00010778f6dc();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010778f930();
  func_0x00010778f8f8();
  puStack_78 = &UNK_10778f398;
  plStack_88 = (long *)0x0;
  if ((int)param_2[6] == 0) {
    plStack_88 = (long *)0x0;
  }
  else {
    pplStack_90 = &plStack_88;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010778f440(&pplStack_90,param_2);
  }
  return plStack_88;
}



/* Entry: 10778f57c; end: 10778f5ab;  */

undefined8 FUN_10778f57c(void)

{
  return 1;
}



/* Entry: 10778fc5c; end: 10778fc87;  */

undefined ** FUN_10778fc5c(void)

{
  return &PTR_DAT_1109d8050;
}



/* Entry: 10778fe7c; end: 10778fef3;  */

undefined1 * FUN_10778fe7c(undefined1 *param_1)

{
  *param_1 = 0;
  _bzero(param_1 + 8,0x108);
  func_0x00010778fef4(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  param_1[0x1e8] = 0;
  return param_1;
}



/* Entry: 107790040; end: 107790053;  */

void FUN_107790040(void)

{
  func_0x000107781c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077908e8; end: 1077909b7;  */

/* WARNING: Possible PIC construction at 0x000107790934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107790938) */
/* WARNING: Removing unreachable block (ram,0x000107790940) */
/* WARNING: Removing unreachable block (ram,0x00010779095c) */
/* WARNING: Removing unreachable block (ram,0x000107790970) */
/* WARNING: Removing unreachable block (ram,0x00010779097c) */
/* WARNING: Removing unreachable block (ram,0x000107790994) */
/* WARNING: Removing unreachable block (ram,0x000107790a78) */

void FUN_1077908e8(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 uStack_111;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long alStack_f8 [5];
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  
  func_0x000107791900();
  func_0x000107781de4();
  plVar3 = *(long **)(param_1 + 8);
  uStack_98 = 0x107790938;
  uVar1 = 1;
  puStack_a0 = &stack0xfffffffffffffff0;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(0x1077909fc) {
  case 0:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar2 = plVar3 + 0x88;
    uStack_98 = 0x107790938;
    lStack_b0 = param_1;
    func_0x000107791900();
    plVar2 = (long *)*plVar2;
    lStack_b8 = extraout_x8;
    if (plVar2 == (long *)0x0) {
      func_0x0001077919d0();
    }
    else {
      (**(code **)(*plVar2 + 0x28))(alStack_f8);
      plVar3 = alStack_f8;
      func_0x000104c32a18();
      *(undefined1 *)(unaff_x19 + 0x40) = 2;
      plVar2 = alStack_f8;
      func_0x000104c3323c(plVar2);
    }
    func_0x0001077918dc(lStack_b8);
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_108 = FUN_1077915b8;
    ppuStack_110 = &puStack_a0;
    func_0x0001077915e0(&uStack_111,plVar2,plVar3);
    return;
  case 1:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x8f;
    break;
  case 2:
                    /* WARNING: This code block may not be properly labeled as switch case */
    lStack_c8 = plVar3[0x8b];
    lStack_d0 = plVar3[0x8a];
    lStack_b8 = plVar3[0x8d];
    lStack_c0 = plVar3[0x8c];
    lStack_b0 = plVar3[0x8e];
    goto code_r0x000107790a58;
  case 3:
                    /* WARNING: This code block may not be properly labeled as switch case */
    lStack_c8 = plVar3[0x97];
    lStack_d0 = plVar3[0x96];
    lStack_b8 = plVar3[0x99];
    lStack_c0 = plVar3[0x98];
    lStack_b0 = plVar3[0x9a];
code_r0x000107790a58:
    func_0x000107784b98(&lStack_d0);
    return;
  case 4:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x2d;
    break;
  case 5:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x34;
    break;
  case 6:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x3b;
    break;
  case 7:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x42;
    break;
  case 8:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x49;
    break;
  case 9:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x50;
    break;
  case 10:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x57;
    break;
  case 0xb:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x5e;
    break;
  case 0xc:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x65;
    break;
  case 0xd:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x6c;
    break;
  case 0xe:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x73;
    break;
  case 0xf:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x7a;
    break;
  case 0x10:
                    /* WARNING: This code block may not be properly labeled as switch case */
    plVar3 = plVar3 + 0x81;
  }
  FUN_107784e48(plVar3,&stack0xffffffffffffff5f);
  return;
}



/* Entry: 1077915b8; end: 1077915df;  */

void FUN_1077915b8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x0001077915e0(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 107791718; end: 107791773;  */

undefined8 * FUN_107791718(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077839b8();
  *puVar1 = &PTR_DAT_1109d8798;
  _bzero(puVar1 + 0x2d,0x310);
  *(undefined1 *)(param_1 + 0x8e) = 1;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  *(undefined1 *)(param_1 + 0x9a) = 1;
  return param_1;
}



/* Entry: 107791b24; end: 107791bef;  */

long FUN_107791b24(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_DAT_1109d8798;
  func_0x000107791500(param_1 + 0x88);
  func_0x0001077917d4(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 107791d04; end: 1077920ab;  */

void FUN_107791d04(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000107794804();
  uStack_48 = extraout_x8;
  func_0x000107793ec4(&uStack_60,1);
  puVar8 = puStack_50;
  puStack_50[1] = 0;
  puStack_50[2] = 0;
  *puStack_50 = &PTR_DAT_1109d8bd8;
  func_0x000107785684(puStack_50 + 3,param_2);
  puVar8[3] = &PTR_DAT_1109d8d48;
  *(undefined1 *)(puVar8 + 0x30) = 0;
  *(undefined4 *)(puVar8 + 0x36) = 0xffffffff;
  func_0x000107794a5c();
  uVar3 = *(uint *)(param_2 + 0x198);
  if (uVar3 != 0xffffffff) {
    puStack_68 = puVar8 + 0x30;
    (*(code *)(&PTR_DAT_1109d8c18)[uVar3])(&puStack_68,param_2 + 0x168);
    *(uint *)(puVar8 + 0x36) = uVar3;
  }
  puVar1 = puVar8 + 0x37;
  *(undefined1 *)(puVar8 + 0x37) = 0;
  *(undefined4 *)(puVar8 + 0x3d) = 0xffffffff;
  func_0x00010755e980(puVar1);
  uVar3 = *(uint *)(param_2 + 0x1d0);
  uVar7 = uVar3 == 0xffffffff;
  if (!(bool)uVar7) {
    puStack_68 = puVar1;
    (*(code *)(&PTR_DAT_1109d8c30)[uVar3])(&puStack_68,param_2 + 0x1a0);
    *(uint *)(puVar8 + 0x3d) = uVar3;
  }
  func_0x00010727fe7c(puVar8 + 0x3e,param_2 + 0x1d8);
  func_0x00010727d614(puVar8 + 0x45,param_2 + 0x210);
  func_0x00010727d614(puVar8 + 0x4c,param_2 + 0x248);
  func_0x00010727fe7c(puVar8 + 0x53,param_2 + 0x280);
  func_0x00010727d614(puVar8 + 0x5a,param_2 + 0x2b8);
  func_0x0001074c4824(puVar8 + 0x61,param_2 + 0x2f0);
  func_0x0001074c4884(puVar8 + 0x6d,param_2 + 0x350);
  func_0x0001072f67c4(puVar8 + 0x7b,param_2 + 0x3c0);
  uVar11 = *(undefined8 *)(param_2 + 0x410);
  uVar10 = *(undefined8 *)(param_2 + 0x408);
  uVar13 = *(undefined8 *)(param_2 + 0x420);
  uVar12 = *(undefined8 *)(param_2 + 0x418);
  puVar8[0x88] = *(undefined8 *)(param_2 + 0x428);
  puVar8[0x87] = uVar13;
  puVar8[0x86] = uVar12;
  puVar8[0x85] = uVar11;
  puVar8[0x84] = uVar10;
  func_0x0001074c4824(puVar8 + 0x89,param_2 + 0x430);
  func_0x0001074c4824(puVar8 + 0x95,param_2 + 0x490);
  puVar8[0xa1] = *(undefined8 *)(param_2 + 0x4f0);
  lVar9 = *(long *)(param_2 + 0x4f8);
  puVar8[0xa2] = lVar9;
  if (lVar9 != 0) {
    plVar2 = (long *)(lVar9 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar11 = *(undefined8 *)(param_2 + 0x508);
  uVar10 = *(undefined8 *)(param_2 + 0x500);
  uVar13 = *(undefined8 *)(param_2 + 0x518);
  uVar12 = *(undefined8 *)(param_2 + 0x510);
  puVar8[0xa7] = *(undefined8 *)(param_2 + 0x520);
  puVar8[0xa4] = uVar11;
  puVar8[0xa3] = uVar10;
  puVar8[0xa6] = uVar13;
  puVar8[0xa5] = uVar12;
  func_0x0001074c4858(puVar8 + 0xa8,param_2 + 0x528);
  func_0x0001074c4824(puVar8 + 0xb5,param_2 + 0x590);
  func_0x0001074c4824(puVar8 + 0xc1,param_2 + 0x5f0);
  func_0x0001077857d8(puVar8 + 0xcd,param_2 + 0x650);
  func_0x0001074c4858(puVar8 + 0xe6,param_2 + 0x718);
  func_0x00010778b738(puVar8 + 0xf3,param_2 + 0x780);
  func_0x0001074c4824(puVar8 + 0xff,param_2 + 0x7e0);
  puVar6 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x000107793fdc(&uStack_60);
  *param_1 = (long)(puVar6 + 3);
  param_1[1] = (long)puVar6;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar8 = &uStack_60;
  func_0x000107793af4(puVar8);
  func_0x000107794738(uStack_48);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010755e980(puVar1);
  func_0x000107794a5c();
  func_0x000107785780(puVar6 + 3);
  do {
    __ZNSt3__119__shared_weak_countD2Ev(puVar6);
    func_0x000107793fdc(&uStack_60);
    __Unwind_Resume(puVar8);
  } while( true );
}



/* Entry: 107793a00; end: 107793a8f;  */

void FUN_107793a00(undefined8 param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  lStack_48 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_48 = (long)param_3;
  }
  func_0x00010750c5d0(auStack_40,&lStack_48);
  ppuVar1 = &PTR_DAT_1109d88e0;
  func_0x000107785358(&PTR_DAT_1109d88e0,&UNK_1109d8bc8,auStack_40);
  if (ppuVar1 != (undefined **)&UNK_1109d8bc8) {
    puVar2 = auStack_40;
    func_0x000107785400(puVar2,ppuVar1);
    if ((int)puVar2 == 0) {
      func_0x0001077925f0(param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(ppuVar1 + 1));
      return;
    }
  }
  func_0x000107794a30();
  return;
}



/* Entry: 107793e18; end: 107793e3b;  */

void FUN_107793e18(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x000107793e3c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 107793f88; end: 107793fcb;  */

undefined8 * FUN_107793f88(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077839b8();
  *puVar1 = &PTR_DAT_1109d8d48;
  _bzero(puVar1 + 0x2d,0x188);
  func_0x0001077940b4(param_1 + 0x5e);
  return param_1;
}



/* Entry: 1077940cc; end: 1077941ef;  */

undefined8 * FUN_1077940cc(undefined8 *param_1)

{
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
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  param_1[0x53] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x53) = 1;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 1;
  _bzero(param_1 + 0x6c,200);
  *(undefined1 *)(param_1 + 0x84) = 1;
  param_1[0x91] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  *(undefined1 *)(param_1 + 0x91) = 1;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  *(undefined1 *)(param_1 + 0x9d) = 1;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  *(undefined1 *)(param_1 + 0xa9) = 1;
  return param_1;
}



/* Entry: 107794318; end: 107794337;  */

void FUN_107794318(void)

{
  func_0x0001077949e4();
  func_0x000107785b28();
  func_0x000107794968();
  return;
}



/* Entry: 1077944fc; end: 10779454b;  */

void FUN_1077944fc(long param_1,long param_2)

{
  int iVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != -1 && *(int *)(param_2 + 0x30) == iVar1) {
    puStack_18 = &uStack_19;
    func_0x0001077949c0(*(int *)(param_2 + 0x30) == iVar1,param_1);
  }
  return;
}



/* Entry: 107794bd0; end: 107794d93;  */

uint FUN_107794bd0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  uVar1 = param_1 + 0xd0;
  func_0x00010778cf84(uVar1,param_2 + 0xd0);
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 0x140;
    func_0x000107781d84(lVar2,param_2 + 0x140);
    if ((int)lVar2 != 0) {
      lVar2 = param_1 + 0x168;
      func_0x000107794360(lVar2,param_2 + 0x168);
      if ((int)lVar2 != 0) {
        lVar2 = param_1 + 0x1a0;
        FUN_1077944fc(lVar2,param_2 + 0x1a0);
        if ((int)lVar2 != 0) {
          lVar2 = param_1 + 0x1d8;
          func_0x000107785b50(lVar2,param_2 + 0x1d8);
          if ((int)lVar2 != 0) {
            lVar2 = param_1 + 0x210;
            func_0x000107786038(lVar2,param_2 + 0x210);
            if ((int)lVar2 != 0) {
              lVar2 = param_1 + 0x248;
              func_0x000107786038(lVar2,param_2 + 0x248);
              if ((int)lVar2 != 0) {
                lVar2 = param_1 + 0x280;
                func_0x000107785b50(lVar2,param_2 + 0x280);
                if ((int)lVar2 != 0) {
                  lVar2 = param_1 + 0x2b8;
                  func_0x000107786038(lVar2,param_2 + 0x2b8);
                  if ((int)lVar2 != 0) {
                    lVar2 = param_1 + 0x2f0;
                    func_0x00010778d01c(lVar2,param_2 + 0x2f0);
                    lVar3 = param_1 + 0x350;
                    func_0x00010778d05c(lVar3,param_2 + 0x350);
                    uVar1 = param_1 + 0x3c0;
                    func_0x00010779465c(uVar1,param_2 + 0x3c0);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_1 + 0x3c0;
                      func_0x00010749f16c();
                      if ((uVar1 & 1) == 0) {
                        lVar4 = param_2 + 0x3c0;
                        func_0x00010749f16c(lVar4);
                        uVar12 = (uint)lVar4;
                      }
                      else {
                        uVar12 = 1;
                      }
                    }
                    else {
                      uVar12 = 0;
                    }
                    lVar4 = param_1 + 0x430;
                    func_0x00010778d01c(lVar4,param_2 + 0x430);
                    lVar5 = param_1 + 0x490;
                    func_0x00010778d01c(lVar5,param_2 + 0x490);
                    lVar6 = param_1 + 0x528;
                    func_0x00010778d09c(lVar6,param_2 + 0x528);
                    lVar7 = param_1 + 0x590;
                    func_0x00010778d01c(lVar7,param_2 + 0x590);
                    lVar8 = param_1 + 0x5f0;
                    func_0x00010778d01c(lVar8,param_2 + 0x5f0);
                    lVar9 = param_1 + 0x650;
                    func_0x00010778fcc4(lVar9,param_2 + 0x650);
                    lVar10 = param_1 + 0x718;
                    func_0x00010778d09c(lVar10,param_2 + 0x718);
                    lVar11 = param_1 + 0x780;
                    func_0x00010778d11c(lVar11,param_2 + 0x780);
                    param_1 = param_1 + 0x7e0;
                    func_0x00010778d01c(param_1,param_2 + 0x7e0);
                    uVar12 = (uint)lVar2 | (uint)lVar3 | uVar12 | (uint)lVar4 |
                             (uint)lVar5 | (uint)lVar6 | (uint)lVar7 |
                             (uint)lVar8 | (uint)lVar9 | (uint)lVar10 | (uint)lVar11 | (uint)param_1
                    ;
                    goto LAB_107794cb8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar12 = 1;
LAB_107794cb8:
  return uVar12 & 1;
}



/* Entry: 107794efc; end: 107794f0f;  */

void FUN_107794efc(void)

{
  func_0x000107794ed0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107795134; end: 10779519f;  */

undefined8 * FUN_107795134(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x0001077951a0(auStack_40,param_2,param_3);
  func_0x000107798168(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x000107799580();
  func_0x0001077994b4();
  *param_1 = &PTR_DAT_1109d8e18;
  return param_1;
}



/* Entry: 107795e50; end: 107795f13;  */

/* WARNING: Possible PIC construction at 0x000107795e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010779657c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107795ea0) */
/* WARNING: Removing unreachable block (ram,0x000107795ea8) */
/* WARNING: Removing unreachable block (ram,0x000107795ec0) */
/* WARNING: Removing unreachable block (ram,0x000107796580) */
/* WARNING: Removing unreachable block (ram,0x00010779667c) */
/* WARNING: Removing unreachable block (ram,0x000107796684) */
/* WARNING: Removing unreachable block (ram,0x000107796698) */
/* WARNING: Removing unreachable block (ram,0x000107796588) */
/* WARNING: Removing unreachable block (ram,0x000107796594) */
/* WARNING: Removing unreachable block (ram,0x000107796bf8) */
/* WARNING: Removing unreachable block (ram,0x000107796c0c) */
/* WARNING: Removing unreachable block (ram,0x000107796c14) */
/* WARNING: Removing unreachable block (ram,0x000107797200) */
/* WARNING: Removing unreachable block (ram,0x000107796c1c) */
/* WARNING: Removing unreachable block (ram,0x00010779720c) */
/* WARNING: Removing unreachable block (ram,0x000107796b70) */
/* WARNING: Removing unreachable block (ram,0x000107796b84) */
/* WARNING: Removing unreachable block (ram,0x000107796b8c) */
/* WARNING: Removing unreachable block (ram,0x0001077971b8) */
/* WARNING: Removing unreachable block (ram,0x000107796b94) */
/* WARNING: Removing unreachable block (ram,0x0001077971c4) */
/* WARNING: Removing unreachable block (ram,0x000107796bb4) */
/* WARNING: Removing unreachable block (ram,0x000107796bc8) */
/* WARNING: Removing unreachable block (ram,0x000107796bd0) */
/* WARNING: Removing unreachable block (ram,0x0001077971e8) */
/* WARNING: Removing unreachable block (ram,0x000107796bd8) */
/* WARNING: Removing unreachable block (ram,0x0001077971f4) */
/* WARNING: Removing unreachable block (ram,0x000107796c3c) */
/* WARNING: Removing unreachable block (ram,0x0001077965ac) */
/* WARNING: Removing unreachable block (ram,0x0001077965c0) */
/* WARNING: Removing unreachable block (ram,0x0001077965c8) */
/* WARNING: Removing unreachable block (ram,0x0001077971d0) */
/* WARNING: Removing unreachable block (ram,0x0001077965d0) */
/* WARNING: Removing unreachable block (ram,0x0001077971dc) */
/* WARNING: Removing unreachable block (ram,0x000107797214) */
/* WARNING: Removing unreachable block (ram,0x000107797218) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Removing unreachable block (ram,0x000107795ed0) */
/* WARNING: Removing unreachable block (ram,0x000107795edc) */
/* WARNING: Removing unreachable block (ram,0x000107795ef4) */

void FUN_107795e50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6,undefined **param_7)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  code *extraout_x9;
  undefined8 *extraout_x9_00;
  undefined8 *extraout_x9_01;
  ulong uVar13;
  uint uVar14;
  undefined *puVar16;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 uStack_251;
  undefined1 ***pppuStack_250;
  undefined *puStack_248;
  undefined1 uStack_240;
  undefined *apuStack_228 [3];
  ulong uStack_210;
  ulong uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *apuStack_1d8 [4];
  undefined1 uStack_1b8;
  byte bStack_1b0;
  byte bStack_1a0;
  byte bStack_190;
  byte bStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_b0;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_50;
  uint uVar15;
  
  ppuVar5 = &puStack_90;
  func_0x0001077991a8();
  func_0x000107781de4();
  uVar13 = 0xe;
  uVar9 = *(ulong *)(param_3 + 8);
  puVar3 = &uStack_100;
  uStack_98 = 0x107795ea0;
  lStack_b0 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001077991d0();
  uVar2 = (int)uVar13 == 0x30;
  switch(uVar13 & 0xffffffff) {
  case 0:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x7f0;
FUN_10778b104:
      func_0x00010778b36c(&puStack_90,lVar4,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 1:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x890;
code_r0x000107784b60:
      FUN_107784e48(&puStack_90,lVar4,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 2:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x8f0;
code_r0x0001077961cc:
      func_0x000107797c9c(&puStack_90,lVar4,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 3:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x958;
      goto code_r0x000107784b60;
    }
    break;
  case 4:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x9b8;
      goto code_r0x0001077961cc;
    }
    break;
  case 5:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0xa20;
      goto code_r0x000107784b60;
    }
    break;
  case 6:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0xa80;
      goto code_r0x0001077961cc;
    }
    break;
  case 7:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0xae8;
      goto code_r0x000107784b60;
    }
    break;
  case 8:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0xb48;
      goto code_r0x0001077961cc;
    }
    break;
  case 9:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0xbb0;
      goto code_r0x000107784b60;
    }
    break;
  case 10:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0xc10;
      goto code_r0x000107784b60;
    }
    break;
  case 0xb:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0xc70;
      goto code_r0x000107784b60;
    }
    break;
  case 0xc:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0xcd0;
      goto code_r0x000107784b60;
    }
    break;
  case 0xd:
    func_0x000107799248(uVar9 + 0x868);
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0xe:
    func_0x000107799248(uVar9 + 0x8c8);
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0xf:
    in_register_00005008 = *(undefined8 *)(uVar9 + 0x938);
    param_1 = *(undefined8 *)(uVar9 + 0x930);
    in_register_00005028 = *(undefined8 *)(uVar9 + 0x948);
    param_2 = *(undefined8 *)(uVar9 + 0x940);
    uStack_e0 = *(undefined8 *)(uVar9 + 0x950);
    uStack_100 = param_1;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_2;
    uStack_e8 = in_register_00005028;
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x10:
    in_register_00005008 = *(undefined8 *)(uVar9 + 0x998);
    param_1 = *(undefined8 *)(uVar9 + 0x990);
    in_register_00005028 = *(undefined8 *)(uVar9 + 0x9a8);
    param_2 = *(undefined8 *)(uVar9 + 0x9a0);
    uStack_e0 = *(undefined8 *)(uVar9 + 0x9b0);
    uStack_100 = param_1;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_2;
    uStack_e8 = in_register_00005028;
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x11:
    func_0x000107799248(uVar9 + 0x9f8);
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x12:
    func_0x000107799248(uVar9 + 0xa58);
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x13:
    in_register_00005008 = *(undefined8 *)(uVar9 + 0xac8);
    param_1 = *(undefined8 *)(uVar9 + 0xac0);
    in_register_00005028 = *(undefined8 *)(uVar9 + 0xad8);
    param_2 = *(undefined8 *)(uVar9 + 0xad0);
    uStack_e0 = *(undefined8 *)(uVar9 + 0xae0);
    uStack_100 = param_1;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_2;
    uStack_e8 = in_register_00005028;
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x14:
    in_register_00005008 = *(undefined8 *)(uVar9 + 0xb28);
    param_1 = *(undefined8 *)(uVar9 + 0xb20);
    in_register_00005028 = *(undefined8 *)(uVar9 + 0xb38);
    param_2 = *(undefined8 *)(uVar9 + 0xb30);
    uStack_e0 = *(undefined8 *)(uVar9 + 0xb40);
    uStack_100 = param_1;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_2;
    uStack_e8 = in_register_00005028;
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x15:
    func_0x000107799248(uVar9 + 0xb88);
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x16:
    func_0x000107799248(uVar9 + 0xbe8);
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x17:
    func_0x000107799248(uVar9 + 0xc48);
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x18:
    func_0x000107799248(uVar9 + 0xca8);
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x19:
    func_0x000107799248(uVar9 + 0xd08);
    func_0x000107799218();
    goto code_r0x00010779635c;
  case 0x1a:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x168;
      goto code_r0x000107784b60;
    }
    break;
  case 0x1b:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x1a0;
FUN_107784bf0:
      func_0x000107785298(&puStack_90,lVar4,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0x1c:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x1d8;
      goto FUN_107784bf0;
    }
    break;
  case 0x1d:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x210;
      goto code_r0x000107784b60;
    }
    break;
  case 0x1e:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x248;
      goto FUN_10778b104;
    }
    break;
  case 0x1f:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x2c0;
      goto FUN_10778b104;
    }
    break;
  case 0x20:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x338;
      goto code_r0x000107784b60;
    }
    break;
  case 0x21:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x370;
      goto code_r0x000107784b60;
    }
    break;
  case 0x22:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x3a8;
      goto code_r0x000107784b60;
    }
    break;
  case 0x23:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x3e0;
      goto FUN_10778b104;
    }
    break;
  case 0x24:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x458;
      goto FUN_10778b104;
    }
    break;
  case 0x25:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x4d0;
code_r0x00010779626c:
      func_0x000107797dfc(&puStack_90,lVar4,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0x26:
    if (*(int *)(uVar9 + 0x548) == 0) goto code_r0x0001077962f4;
    uVar2 = *(int *)(uVar9 + 0x548) == 1;
    if ((bool)uVar2) {
      uVar9 = (ulong)*(byte *)(uVar9 + 0x518);
      func_0x0001077f34cc();
      func_0x00010724ae4c();
      func_0x000107799554();
      uStack_50 = 1;
      ppuVar5 = (undefined **)puVar3;
    }
    else {
      ppuVar5 = *(undefined ***)(uVar9 + 0x518);
      func_0x000107799464();
      (*extraout_x9)(&uStack_100);
      func_0x000107799554();
      uStack_50 = 2;
    }
    func_0x00010779953c();
    goto code_r0x00010779635c;
  case 0x27:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x550;
      goto FUN_107784bf0;
    }
    break;
  case 0x28:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x588;
      goto FUN_107784bf0;
    }
    break;
  case 0x29:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x5c0;
      goto FUN_10778b104;
    }
    break;
  case 0x2a:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x638;
      goto code_r0x00010779626c;
    }
    break;
  case 0x2b:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x680;
      goto code_r0x000107784b60;
    }
    break;
  case 0x2c:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x6b8;
      goto code_r0x000107784b60;
    }
    break;
  case 0x2d:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x6f0;
      goto code_r0x000107784b60;
    }
    break;
  case 0x2e:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      func_0x000107793bbc(&puStack_90,uVar9 + 0x728,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0x2f:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x770;
      goto code_r0x00010779626c;
    }
    break;
  case 0x30:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      lVar4 = uVar9 + 0x7b8;
      goto code_r0x000107784b60;
    }
    break;
  default:
code_r0x0001077962f4:
    func_0x000107799480();
code_r0x00010779635c:
    func_0x0001077990b0();
    if ((bool)uVar2) {
      return;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_108 = &DAT_107796374;
  ppuVar11 = param_6;
  ppuVar12 = param_7;
  ppuStack_110 = &puStack_a0;
  func_0x0001077991a8();
  uStack_210 = uVar9;
  uStack_208 = uVar13;
  uStack_158 = extraout_x8;
  func_0x00010772d2fc(apuStack_1d8,&uStack_210);
  ppuVar6 = &PTR_DAT_1109d8e90;
  ppuVar10 = (undefined **)&UNK_1109d9328;
  ppuVar8 = apuStack_1d8;
  func_0x000107785358(&PTR_DAT_1109d8e90,&UNK_1109d9328,ppuVar8);
  uVar2 = ppuVar6 == (undefined **)&UNK_1109d9328;
  if ((bool)uVar2) {
code_r0x0001077963e8:
    puStack_90 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff00);
    uStack_78 = 0;
    goto code_r0x0001077972a8;
  }
  ppuVar7 = apuStack_1d8;
  ppuVar10 = ppuVar6;
  func_0x000107785400(ppuVar7,ppuVar6);
  if ((int)ppuVar7 != 0) goto code_r0x0001077963e8;
  bVar1 = *(byte *)(ppuVar6 + 1);
  uVar9 = (ulong)bVar1;
  uVar14 = (uint)bVar1;
  uVar15 = (uint)bVar1;
  if (bVar1 < 0x2e) {
    uVar2 = false;
    if ((1L << (uVar9 & 0x3f) & 0x380724001eaaU) == 0) {
      uVar2 = (1L << (uVar9 & 0x3f) & 0x210c0000001U) == 0;
      if ((bool)uVar2) {
code_r0x000107796568:
        if ((1L << (uVar9 & 0x3f) & 0x154U) == 0) goto code_r0x0001077968a4;
code_r0x000107796574:
        func_0x000107799258();
        func_0x0001077990ec();
        puVar16 = &UNK_107796580;
        goto code_r0x000107797a58;
      }
      func_0x0001077993a4();
      puStack_200 = (undefined *)CONCAT71(puStack_200._1_7_,extraout_w8);
      uStack_240 = 0;
      func_0x0001077990ec();
      func_0x000107323db4();
      if ((bStack_160 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_04 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
          goto code_r0x00010779666c;
        }
        goto code_r0x000107796674;
      }
      uVar2 = uVar15 == 0x29;
      if ((bool)uVar2) {
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_29 + 0x5c0);
        func_0x00010778be7c(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077994cc();
            func_0x000107799344(extraout_x8_30 + 0x5c8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x000107799458();
            func_0x000107799344(extraout_x8_40 + 0x5c8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
      }
      else {
        uVar2 = uVar15 == 0x1e;
        if ((bool)uVar2) {
          func_0x00010779929c();
          ppuVar6 = apuStack_1d8;
          ppuVar10 = (undefined **)(extraout_x8_23 + 0x248);
          func_0x00010778be7c(ppuVar6,ppuVar10);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
               (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
              ppuVar10 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x0001077994cc();
              func_0x000107799344(extraout_x8_24 + 0x250);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799458();
              func_0x000107799344(extraout_x8_37 + 0x250);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
        else {
          uVar2 = uVar15 == 0x1f;
          if ((bool)uVar2) {
            func_0x00010779929c();
            ppuVar6 = apuStack_1d8;
            ppuVar10 = (undefined **)(extraout_x8_27 + 0x2c0);
            func_0x00010778be7c(ppuVar6,ppuVar10);
            if (((ulong)ppuVar6 & 1) == 0) {
              if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
                 (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
                ppuVar10 = (undefined **)*param_7;
                func_0x000107799278();
                func_0x0001077994cc();
                func_0x000107799344(extraout_x8_28 + 0x2c8);
                func_0x000107799160();
                func_0x000107799270();
              }
              else {
                func_0x000107799458();
                func_0x000107799344(extraout_x8_39 + 0x2c8);
              }
              func_0x00010779916c();
              func_0x000107799280();
            }
          }
          else {
            uVar2 = uVar15 == 0x24;
            if ((bool)uVar2) {
              func_0x00010779929c();
              ppuVar6 = apuStack_1d8;
              ppuVar10 = (undefined **)(extraout_x8_25 + 0x458);
              func_0x00010778be7c(ppuVar6,ppuVar10);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
                   (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
                  ppuVar10 = (undefined **)*param_7;
                  func_0x000107799278();
                  func_0x0001077994cc();
                  func_0x000107799344(extraout_x8_26 + 0x460);
                  func_0x000107799160();
                  func_0x000107799270();
                }
                else {
                  func_0x000107799458();
                  func_0x000107799344(extraout_x8_38 + 0x460);
                }
                func_0x00010779916c();
                func_0x000107799280();
              }
            }
            else {
              if (uVar15 != 0) {
                ppuVar7 = apuStack_1d8;
                func_0x00010732493c(ppuVar7);
                func_0x0001077994ac();
                if (0x22 < uVar15) goto code_r0x0001077968a4;
                uVar2 = (1L << (uVar9 & 0x3f) & 0x724001eaaU) == 0;
                if (!(bool)uVar2) goto code_r0x00010779641c;
                goto code_r0x000107796568;
              }
              func_0x00010779929c();
              ppuVar6 = apuStack_1d8;
              ppuVar10 = (undefined **)(extraout_x8_01 + 0x7f0);
              func_0x00010778be7c(ppuVar6,ppuVar10);
              if (((ulong)ppuVar6 & 1) == 0) {
                if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
                   (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
                  ppuVar10 = (undefined **)*param_7;
                  func_0x000107799278();
                  func_0x0001077994cc();
                  func_0x000107799524();
                  func_0x000107799160();
                  func_0x000107799270();
                }
                else {
                  func_0x000107799458();
                  func_0x000107799524();
                }
                func_0x00010779916c();
                func_0x000107799280();
              }
            }
          }
        }
      }
code_r0x000107797294:
      func_0x000107799428();
      param_7 = ppuVar8;
code_r0x000107797298:
      func_0x000107799444();
      func_0x00010732493c();
      goto code_r0x0001077972a0;
    }
code_r0x00010779641c:
    func_0x0001077993a4();
    puStack_200 = (undefined *)CONCAT71(puStack_200._1_7_,1);
    uStack_240 = 0;
    func_0x0001077990ec();
    func_0x00010733b904();
    if ((bStack_1a0 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_02 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        goto code_r0x000107796550;
      }
      goto code_r0x000107796558;
    }
    uVar2 = uVar15 - 1 == 0xb;
    switch(uVar15 - 1) {
    case 0:
      func_0x00010779929c();
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_00 + 0x890);
      func_0x000107786038(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_200 + 0x890);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0x890);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 1:
    case 3:
    case 5:
    case 7:
code_r0x00010779687c:
      ppuVar7 = apuStack_1d8;
      func_0x00010727e950(ppuVar7);
      func_0x0001077994ac();
      if ((uVar15 < 9) && ((1 << (ulong)(uVar14 & 0x1f) & 0x154U) != 0)) goto code_r0x000107796574;
      goto code_r0x0001077968a4;
    case 2:
      func_0x00010779929c();
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_08 + 0x958);
      func_0x000107786038(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_200 + 0x958);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0x958);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 4:
      func_0x00010779929c();
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_10 + 0xa20);
      func_0x000107786038(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_200 + 0xa20);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xa20);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 6:
      func_0x00010779929c();
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_06 + 0xae8);
      func_0x000107786038(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_200 + 0xae8);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xae8);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 8:
      func_0x00010779929c();
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_07 + 0xbb0);
      func_0x000107786038(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_200 + 0xbb0);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xbb0);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 9:
      func_0x00010779929c();
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_09 + 0xc10);
      func_0x000107786038(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_200 + 0xc10);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xc10);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 10:
      func_0x00010779929c();
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_05 + 0xc70);
      func_0x000107786038(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_200 + 0xc70);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xc70);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    case 0xb:
      func_0x00010779929c();
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_11 + 0xcd0);
      func_0x000107786038(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077992e4(puStack_200 + 0xcd0);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077992e4(*param_7 + 0xcd0);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      break;
    default:
      uVar2 = uVar15 - 0x1a == 0x13;
      switch(uVar15 - 0x1a) {
      case 0:
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_03 + 0x168);
        func_0x000107786038(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_200 + 0x168);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x168);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      default:
        goto code_r0x00010779687c;
      case 3:
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_18 + 0x210);
        func_0x000107786038(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_200 + 0x210);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x210);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 6:
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_20 + 0x338);
        func_0x000107786038(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_200 + 0x338);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x338);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 7:
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_16 + 0x370);
        func_0x000107786038(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_200 + 0x370);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x370);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 8:
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_17 + 0x3a8);
        func_0x000107786038(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_200 + 0x3a8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x3a8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 0x11:
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_19 + 0x680);
        func_0x000107786038(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_200 + 0x680);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x680);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 0x12:
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_15 + 0x6b8);
        func_0x000107786038(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_200 + 0x6b8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x6b8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        break;
      case 0x13:
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_21 + 0x6f0);
        func_0x000107786038(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_200 + 0x6f0);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x6f0);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
      }
    }
    goto code_r0x0001077971a8;
  }
code_r0x0001077968a4:
  uVar2 = uVar14 - 0x1b == 1;
  if (uVar14 - 0x1b < 2) {
    func_0x000107799258();
    func_0x0001077990ec();
    func_0x00010733e5bc();
    if ((bStack_1a0 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_31 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        goto code_r0x000107796e10;
      }
      goto code_r0x000107796e18;
    }
    func_0x00010779929c();
    uVar2 = uVar14 == 0x1b;
    if ((bool)uVar2) {
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_12 + 0x1a0);
      func_0x000107785b50(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x000107799364(puStack_200 + 0x1a0);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x000107799364(*param_7 + 0x1a0);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
    }
    else {
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_12 + 0x1d8);
      func_0x000107785b50(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x000107799364(puStack_200 + 0x1d8);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x000107799364(*param_7 + 0x1d8);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
    }
    goto code_r0x0001077974cc;
  }
  uVar2 = uVar15 - 0x23 == 7;
  switch(uVar15 - 0x23) {
  case 0:
    func_0x0001077993a4();
    puStack_200 = (undefined *)((ulong)puStack_200 & 0xffffffffffffff00);
    uStack_240 = 0;
    func_0x0001077990ec();
    func_0x000107323db4();
    if ((bStack_160 & 1) != 0) {
      func_0x00010779929c();
      ppuVar6 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_13 + 0x3e0);
      func_0x00010778be7c(ppuVar6,ppuVar10);
      if (((ulong)ppuVar6 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077994cc();
          func_0x000107799344(extraout_x8_14 + 1000);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x000107799458();
          func_0x000107799344(extraout_x8_48 + 1000);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      goto code_r0x000107797294;
    }
    func_0x000107799128();
    if (extraout_x8_41 != 0) {
      func_0x000107799140();
      func_0x000107799224();
      func_0x000107799150();
code_r0x00010779666c:
      func_0x00010779923c();
      func_0x000107799390();
    }
code_r0x000107796674:
    func_0x000107799108();
    param_7 = ppuVar8;
    goto code_r0x000107797298;
  case 1:
  case 4:
  case 5:
  case 6:
    goto code_r0x0001077973f0;
  case 2:
  case 7:
code_r0x000107796efc:
    func_0x000107799258();
    func_0x0001077990ec();
    func_0x00010733d400();
    if ((bStack_190 & 1) == 0) {
      func_0x000107799128();
      if (extraout_x8_34 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        func_0x00010779923c();
        func_0x000107799390();
      }
      func_0x000107799108();
    }
    else {
      uVar2 = uVar15 == 0x2f;
      if ((bool)uVar2) {
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_43 + 0x770);
        func_0x000107798a18(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x000107799408(puStack_200 + 0x770);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x000107799408(*param_7 + 0x770);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
      }
      else {
        uVar2 = uVar15 == 0x2a;
        if ((bool)uVar2) {
          func_0x00010779929c();
          ppuVar6 = apuStack_1d8;
          ppuVar10 = (undefined **)(extraout_x8_42 + 0x638);
          func_0x000107798a18(ppuVar6,ppuVar10);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
               (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
              ppuVar10 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799408(puStack_200 + 0x638);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799408(*param_7 + 0x638);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
        else {
          uVar2 = uVar15 == 0x25;
          if (!(bool)uVar2) {
            func_0x00010733d41c(apuStack_1d8);
            func_0x0001077994ac();
            uVar2 = true;
            if (uVar15 == 0x26) goto code_r0x000107797384;
            goto code_r0x0001077973f0;
          }
          func_0x00010779929c();
          ppuVar6 = apuStack_1d8;
          ppuVar10 = (undefined **)(extraout_x8_33 + 0x4d0);
          func_0x000107798a18(ppuVar6,ppuVar10);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
               (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
              ppuVar10 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799408(puStack_200 + 0x4d0);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799408(*param_7 + 0x4d0);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
      }
      func_0x000107799428();
    }
    func_0x000107799444();
    func_0x00010733d41c();
    param_7 = ppuVar8;
    goto code_r0x0001077972a0;
  case 3:
code_r0x000107797384:
    func_0x0001077993a4();
    ppuVar6 = apuStack_228;
    ppuVar12 = (undefined **)0x0;
    ppuVar11 = param_7;
    func_0x0001075587c8(apuStack_1d8,&puStack_200,param_6,ppuVar6,param_7,0,0);
    if ((bStack_1a0 & 1) == 0) {
      func_0x000107799128();
      ppuVar10 = param_6;
      if (extraout_x8_46 != 0) {
        func_0x000107799140();
        func_0x000107799224();
        func_0x000107799150();
        func_0x00010779923c();
        func_0x000107799390();
        ppuVar10 = param_6;
      }
      func_0x000107799108();
    }
    else {
      func_0x00010779929c();
      ppuVar8 = apuStack_1d8;
      ppuVar10 = (undefined **)(extraout_x8_44 + 0x518);
      FUN_107798bfc(ppuVar8,ppuVar10);
      if (((ulong)ppuVar8 & 1) == 0) {
        if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
           (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
          ppuVar10 = (undefined **)*param_7;
          func_0x000107799278();
          func_0x0001077994f0(puStack_200);
          func_0x000107799160();
          func_0x000107799270();
        }
        else {
          func_0x0001077994f0(*param_7);
        }
        func_0x00010779916c();
        func_0x000107799280();
      }
      func_0x000107799428();
    }
    func_0x000107799444();
    func_0x000107797f6c();
    param_7 = ppuVar6;
code_r0x0001077972a0:
    ppuVar5 = apuStack_228;
    goto code_r0x0001077972a4;
  default:
    uVar2 = true;
    if (uVar15 == 0x2f) goto code_r0x000107796efc;
code_r0x0001077973f0:
    uVar2 = uVar15 - 0x27 == 1;
    if (uVar15 - 0x27 < 2) {
      func_0x0001077993a4();
      puStack_200 = (undefined *)((ulong)puStack_200 & 0xffffffffffffff00);
      uStack_240 = 0;
      func_0x0001077990ec();
      func_0x00010733e5bc();
      if ((bStack_1a0 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_47 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
code_r0x000107796e10:
          func_0x00010779923c();
          func_0x000107799390();
        }
code_r0x000107796e18:
        func_0x000107799108();
      }
      else {
        func_0x00010779929c();
        uVar2 = uVar14 == 0x27;
        if ((bool)uVar2) {
          ppuVar6 = apuStack_1d8;
          ppuVar10 = (undefined **)(extraout_x8_45 + 0x550);
          func_0x000107785b50(ppuVar6,ppuVar10);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
               (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
              ppuVar10 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799364(puStack_200 + 0x550);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799364(*param_7 + 0x550);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
        else {
          ppuVar6 = apuStack_1d8;
          ppuVar10 = (undefined **)(extraout_x8_45 + 0x588);
          func_0x000107785b50(ppuVar6,ppuVar10);
          if (((ulong)ppuVar6 & 1) == 0) {
            if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
               (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
              ppuVar10 = (undefined **)*param_7;
              func_0x000107799278();
              func_0x000107799364(puStack_200 + 0x588);
              func_0x000107799160();
              func_0x000107799270();
            }
            else {
              func_0x000107799364(*param_7 + 0x588);
            }
            func_0x00010779916c();
            func_0x000107799280();
          }
        }
code_r0x0001077974cc:
        func_0x000107799428();
      }
      func_0x000107799444();
      func_0x00010733e5d8();
      param_7 = ppuVar8;
      goto code_r0x0001077972a0;
    }
    uVar2 = uVar15 == 0x30;
    if ((bool)uVar2) {
      func_0x0001077993a4();
      puStack_200 = (undefined *)((ulong)puStack_200 & 0xffffffffffffff00);
      uStack_240 = 0;
      func_0x0001077990ec();
      func_0x00010733b904();
      if ((bStack_1a0 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_36 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
code_r0x000107796550:
          func_0x00010779923c();
          func_0x000107799390();
        }
code_r0x000107796558:
        func_0x000107799108();
        param_7 = ppuVar8;
      }
      else {
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_32 + 0x7b8);
        func_0x000107786038(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x0001077992b4(puStack_200 + 0x7b8);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x0001077992b4(*param_7 + 0x7b8);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
code_r0x0001077971a8:
        func_0x000107799428();
        param_7 = ppuVar8;
      }
      func_0x000107799444();
      func_0x00010727e950();
      goto code_r0x0001077972a0;
    }
    uVar2 = uVar14 == 0x2e;
    if ((bool)uVar2) {
      func_0x000107799258();
      func_0x0001077990ec();
      func_0x0001077939c8();
      if ((bStack_190 & 1) == 0) {
        func_0x000107799128();
        if (extraout_x8_35 != 0) {
          func_0x000107799140();
          func_0x000107799224();
          func_0x000107799150();
          func_0x00010779923c();
          func_0x000107799390();
        }
        func_0x000107799108();
      }
      else {
        func_0x00010779929c();
        ppuVar6 = apuStack_1d8;
        ppuVar10 = (undefined **)(extraout_x8_22 + 0x728);
        func_0x00010779465c(ppuVar6,ppuVar10);
        if (((ulong)ppuVar6 & 1) == 0) {
          if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
             (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
            ppuVar10 = (undefined **)*param_7;
            func_0x000107799278();
            func_0x000107799560(puStack_200);
            func_0x000107799160();
            func_0x000107799270();
          }
          else {
            func_0x000107799560(*param_7);
          }
          func_0x00010779916c();
          func_0x000107799280();
        }
        func_0x000107799428();
      }
      func_0x000107799444();
      func_0x000107793d90();
      param_7 = ppuVar8;
      goto code_r0x0001077972a0;
    }
    puStack_200 = (undefined *)0x0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    ppuVar10 = &puStack_200;
    func_0x00010754bb48(apuStack_1d8,param_6,ppuVar10,param_7);
    if ((bStack_1b0 & 1) == 0) {
      uStack_88 = uStack_1f8;
      puStack_90 = puStack_200;
      uStack_80 = uStack_1f0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      puStack_200 = (undefined *)0x0;
      uStack_78 = 1;
      goto code_r0x000107797790;
    }
  }
  uVar2 = uVar14 - 0xd == 0xc;
  switch(uVar14 - 0xd) {
  case 0:
    if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
      func_0x0001077992ec();
      apuStack_228[0][0x888] = uStack_1b8;
      break;
    }
    *(undefined1 *)(*(long *)((long)ppuVar5 + 8) + 0x888) = uStack_1b8;
code_r0x000107797928:
    func_0x000107799398();
    extraout_x9_01[1] = in_register_00005008;
    *extraout_x9_01 = param_1;
    extraout_x9_01[3] = in_register_00005028;
    extraout_x9_01[2] = param_2;
    goto code_r0x00010779778c;
  case 1:
    if ((*(long *)((long)ppuVar5 + 0x10) != 0) &&
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)((long)ppuVar5 + 8) + 0x8e8) = uStack_1b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_228[0][0x8e8] = uStack_1b8;
    break;
  case 2:
    if ((*(long *)((long)ppuVar5 + 0x10) != 0) &&
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) == 0)) {
      func_0x000107799398(*(undefined8 *)((long)ppuVar5 + 8));
      func_0x000107799594();
      goto code_r0x00010779778c;
    }
    func_0x0001077992ec();
    func_0x000107799398(apuStack_228[0]);
    func_0x000107799594();
    goto code_r0x000107797778;
  case 3:
    if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_228[0]);
      func_0x0001077995f0();
      goto code_r0x000107797778;
    }
    func_0x000107799398(*(undefined8 *)((long)ppuVar5 + 8));
    func_0x0001077995f0();
    goto code_r0x00010779778c;
  case 4:
    if ((*(long *)((long)ppuVar5 + 0x10) != 0) &&
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)((long)ppuVar5 + 8) + 0xa18) = uStack_1b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_228[0][0xa18] = uStack_1b8;
    break;
  case 5:
    if ((*(long *)((long)ppuVar5 + 0x10) != 0) &&
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)((long)ppuVar5 + 8) + 0xa78) = uStack_1b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_228[0][0xa78] = uStack_1b8;
    break;
  case 6:
    if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_228[0]);
      func_0x0001077995bc();
      goto code_r0x000107797778;
    }
    func_0x000107799398(*(undefined8 *)((long)ppuVar5 + 8));
    func_0x0001077995bc();
    goto code_r0x00010779778c;
  case 7:
    if ((*(long *)((long)ppuVar5 + 0x10) == 0) ||
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) != 0)) {
      func_0x0001077992ec();
      func_0x000107799398(apuStack_228[0]);
      func_0x0001077995dc();
      goto code_r0x000107797778;
    }
    func_0x000107799398(*(undefined8 *)((long)ppuVar5 + 8));
    func_0x0001077995dc();
    goto code_r0x00010779778c;
  case 8:
    if ((*(long *)((long)ppuVar5 + 0x10) != 0) &&
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)((long)ppuVar5 + 8) + 0xba8) = uStack_1b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_228[0][0xba8] = uStack_1b8;
    break;
  case 9:
    if ((*(long *)((long)ppuVar5 + 0x10) != 0) &&
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)((long)ppuVar5 + 8) + 0xc08) = uStack_1b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_228[0][0xc08] = uStack_1b8;
    break;
  case 10:
    if ((*(long *)((long)ppuVar5 + 0x10) != 0) &&
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)((long)ppuVar5 + 8) + 0xc68) = uStack_1b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_228[0][0xc68] = uStack_1b8;
    break;
  case 0xb:
    if ((*(long *)((long)ppuVar5 + 0x10) != 0) &&
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)((long)ppuVar5 + 8) + 0xcc8) = uStack_1b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_228[0][0xcc8] = uStack_1b8;
    break;
  case 0xc:
    if ((*(long *)((long)ppuVar5 + 0x10) != 0) &&
       (*(long *)(*(long *)((long)ppuVar5 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)((long)ppuVar5 + 8) + 0xd28) = uStack_1b8;
      goto code_r0x000107797928;
    }
    func_0x0001077992ec();
    apuStack_228[0][0xd28] = uStack_1b8;
    break;
  default:
    goto code_r0x00010779778c;
  }
  func_0x000107799398();
  extraout_x9_00[1] = in_register_00005008;
  *extraout_x9_00 = param_1;
  extraout_x9_00[3] = in_register_00005028;
  extraout_x9_00[2] = param_2;
code_r0x000107797778:
  ppuVar10 = apuStack_228;
  func_0x0001077989d4((undefined1 *)((long)ppuVar5 + 8),ppuVar10);
  func_0x000107797b84(apuStack_228);
code_r0x00010779778c:
  func_0x000107799428();
  uStack_78 = extraout_w8_00;
code_r0x000107797790:
  ppuVar5 = &puStack_200;
code_r0x0001077972a4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar5);
  ppuVar8 = param_7;
code_r0x0001077972a8:
  func_0x0001077990c8(uStack_158);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077995d0();
  func_0x00010733e5d8();
  ppuVar7 = apuStack_228;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar7);
  puVar16 = &UNK_107797a58;
  func_0x00010779934c();
code_r0x000107797a58:
  pppuStack_250 = &ppuStack_110;
  puStack_248 = puVar16;
  func_0x000107555700(&uStack_251,ppuVar7,ppuVar10,ppuVar8,*(undefined1 *)ppuVar11,
                      *(undefined1 *)ppuVar12);
  return;
}



/* Entry: 107797ccc; end: 107797d17;  */

/* WARNING: Possible PIC construction at 0x000107797cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107797e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107797cf0) */
/* WARNING: Removing unreachable block (ram,0x000107797d10) */
/* WARNING: Removing unreachable block (ram,0x000107797d08) */
/* WARNING: Removing unreachable block (ram,0x000107797e50) */
/* WARNING: Removing unreachable block (ram,0x000107797e70) */
/* WARNING: Removing unreachable block (ram,0x000107797e68) */

undefined8 * FUN_107797ccc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar6;
  undefined8 *******pppppppuVar7;
  undefined *puVar8;
  undefined1 auStack_290 [16];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [64];
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 ******ppppppuStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1e8 [72];
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [80];
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *****pppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  double dStack_e0;
  undefined8 uStack_a8;
  undefined8 ****ppppuStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [72];
  
  func_0x0001077991a8();
  uStack_78 = 0x107797cf0;
  ppppuStack_80 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x0001077991a8(auStack_68);
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  puVar3 = &uStack_100;
  puVar5 = (undefined8 *)0x3;
  uStack_a8 = extraout_x8;
  func_0x0001072ac134();
  for (lVar6 = 0; uVar2 = lVar6 == 0xc, !(bool)uVar2; lVar6 = lVar6 + 4) {
    dStack_e0 = (double)*(float *)((long)param_2 + lVar6);
    uStack_e8 = 3;
    func_0x000107799574();
    func_0x000107799450();
  }
  func_0x000107799530();
  func_0x0001077993b0();
  func_0x0001077994c4();
  func_0x0001077990c8(uStack_a8);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  func_0x0001077994c4();
  func_0x00010779934c();
  puVar1 = auStack_180;
  puStack_118 = &UNK_107797db8;
  pppppppuVar7 = (undefined8 *******)&pppppuStack_120;
  puStack_130 = param_2;
  puStack_128 = puVar3;
  pppppuStack_120 = &ppppuStack_80;
  func_0x0001077991a8();
  func_0x0001077992bc();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x000104c32a18();
  func_0x0001077992f4(2);
  func_0x0001077990b0();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar8 = &UNK_107797dfc;
    __Unwind_Resume();
    if (*(int *)(puVar4 + 8) == 0) {
      extraout_x8_00[8] = 0;
      extraout_x8_00[5] = 0;
      extraout_x8_00[4] = 0;
      extraout_x8_00[7] = 0;
      extraout_x8_00[6] = 0;
      extraout_x8_00[1] = 0;
      *extraout_x8_00 = 0;
      extraout_x8_00[3] = 0;
      extraout_x8_00[2] = 0;
      *(undefined4 *)extraout_x8_00 = 7;
      return puVar4;
    }
    uVar2 = 0;
    if (*(int *)(puVar4 + 8) == 1) {
      puStack_188 = &UNK_107797dfc;
      puStack_1a0 = param_2;
      puStack_198 = puVar3;
      ppppppuStack_190 = pppppppuVar7;
      func_0x0001077991a8();
      puVar1 = auStack_290;
      uStack_218 = 3;
      puStack_1f8 = &UNK_107797e50;
      pppppppuVar7 = &ppppppuStack_200;
      puVar5 = puVar4;
      lStack_220 = lVar6;
      puStack_210 = param_2;
      puStack_208 = puVar3;
      ppppppuStack_200 = &ppppppuStack_190;
      func_0x0001077991a8(auStack_1e8);
      uStack_228 = extraout_x8_01;
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_280 = 0;
      puVar3 = &uStack_280;
      func_0x0001072ac134(puVar3,(((long *)*puVar5)[1] - *(long *)*puVar5) / 0x38);
      puVar5 = (undefined8 *)((undefined8 *)*puVar4)[1];
      for (param_2 = *(undefined8 **)*puVar4; uVar2 = param_2 == puVar5, !(bool)uVar2;
          param_2 = param_2 + 7) {
        puVar3 = param_2;
        func_0x00010778b3e8(auStack_268);
        func_0x000107799574();
        func_0x000107799450();
      }
      func_0x000107799530();
      func_0x0001077993b0();
      func_0x0001077994c4();
      func_0x0001077990c8(uStack_228);
      if ((bool)uVar2) {
        return puVar3;
      }
      ___stack_chk_fail();
      puVar5 = puVar3;
      func_0x0001077994c4();
      puVar8 = &UNK_107797f28;
      func_0x00010779934c();
    }
    *(undefined8 **)(puVar1 + -0x20) = param_2;
    *(undefined8 **)(puVar1 + -0x18) = puVar3;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    func_0x0001077991a8();
    func_0x0001077992bc();
    func_0x000107799434();
    func_0x0001077992a8();
    func_0x000104c32a18();
    func_0x0001077992f4(2);
    func_0x0001077990b0();
    puVar4 = puVar5;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      *(undefined8 **)(puVar1 + -0x90) = param_2;
      *(undefined8 **)(puVar1 + -0x88) = puVar3;
      *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
      *(undefined **)(puVar1 + -0x78) = &UNK_107797f6c;
      if (*(char *)(puVar5 + 7) == '\x01') {
        func_0x00010779954c();
      }
      return puVar5;
    }
  }
  return puVar4;
}



/* Entry: 107797f98; end: 107797fbb;  */

void FUN_107797f98(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x000107797fbc(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 107798104; end: 107798147;  */

undefined8 * FUN_107798104(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077839b8();
  *puVar1 = &PTR_DAT_1109d94f0;
  _bzero(puVar1 + 0x2d,0x688);
  func_0x000107798320(param_1 + 0xfe);
  return param_1;
}



/* Entry: 107798470; end: 107798493;  */

void FUN_107798470(void)

{
  func_0x000107799334();
  func_0x0001073f1aa4();
  func_0x00010779941c();
  func_0x0001077992d0();
  func_0x000107799328();
  return;
}



/* Entry: 1077985c0; end: 10779861b;  */

void FUN_1077985c0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  func_0x0001077991d0();
  uVar1 = *param_2;
  func_0x000107799464();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x0001077778dc();
  func_0x000107799354();
  func_0x0001077990b0();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107799354();
  func_0x00010779934c();
  puStack_78 = &UNK_10779861c;
  uStack_88 = uVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010779863c(&uStack_88);
  return;
}



/* Entry: 107798754; end: 1077987c3;  */

undefined8 FUN_107798754(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x0001077995a8();
    func_0x0001077987c4();
  }
  return 0;
}



/* Entry: 107798904; end: 107798923;  */

void FUN_107798904(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)*param_1;
  **(ulong **)*param_1 = uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1;
  return;
}



/* Entry: 107798b00; end: 107798b13;  */

void FUN_107798b00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x40) != 0) {
    uStack_18 = param_3;
    func_0x000107798b40(&lStack_20);
  }
  return;
}



/* Entry: 107798bfc; end: 107798c4b;  */

void FUN_107798bfc(long param_1,long param_2)

{
  int iVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != -1 && *(int *)(param_2 + 0x30) == iVar1) {
    puStack_18 = &uStack_19;
    func_0x0001077993e4(*(int *)(param_2 + 0x30) == iVar1,param_1);
  }
  return;
}



/* Entry: 107798f64; end: 107798f77;  */

undefined8 FUN_107798f64(void)

{
  return 1;
}


