/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0068e9ac; end: 0068e9cf;  */

long * FUN_0068e9ac(long *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long *unaff_x21;
  long lStack_160;
  undefined4 uStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_120;
  undefined8 uStack_48;
  
  uVar1 = (int)param_1[5] == -1;
  if ((bool)uVar1) {
    return (long *)0x0;
  }
  plVar6 = (long *)param_1[10];
  lVar4 = *param_1;
  func_0x006743c8();
  uStack_48 = extraout_x8;
  uVar5 = param_2;
  if (*(int *)(lVar4 + 0x88) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    func_0x00675410();
    if (*plVar6 != 0) {
      lStack_120 = *plVar6;
      FUN_00567614();
      plVar2 = (long *)unaff_x21[5];
      func_0x00675854();
      plVar6 = plVar2;
      func_0x00675f98();
      if (plVar2 != (long *)0x0) goto LAB_00655da4;
    }
    func_0x006757e0();
    lVar4 = *unaff_x21;
    func_0x00675b2c();
    if (unaff_x21[1] != 0) {
      func_0x00675ec0(unaff_x21[5]);
      func_0x00675fb8(unaff_x21[5]);
    }
    plVar6 = (long *)unaff_x21[5];
    func_0x00675854();
    if ((plVar6 == (long *)0x0) &&
       ((plVar6 = (long *)unaff_x21[3], plVar6 == (long *)0x0 ||
        (uVar5 = param_2, FUN_00655ca0(), lVar4 = unaff_x20, plVar6 == (long *)0x0)))) {
      func_0x006753c8();
      uVar5 = param_2;
      FUN_00655e48();
      if ((int)plVar6 == 0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar6 = (long *)unaff_x21[5];
        func_0x00675854();
        plVar7 = plVar6;
      }
      plVar2 = (long *)0x0;
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = 0;
      plVar7 = plVar6;
      plVar2 = plVar6;
    }
    func_0x00675210();
    if ((int)unaff_x20 != 0) {
      func_0x00675f90();
      uVar1 = (int)plVar6 == 0;
      plVar2 = plVar7;
      if ((bool)uVar1) {
        plVar2 = (long *)0x0;
      }
    }
    func_0x00675428();
  }
LAB_00655da4:
  func_0x00674120(uStack_48);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  plVar7 = plVar6;
  func_0x00675428();
  func_0x00674bc8();
  plVar3 = &lStack_160;
  pcStack_138 = FUN_00655dec;
  plVar2 = plVar7 + 0x21;
  lStack_160 = lVar4;
  uStack_158 = uVar5;
  lStack_150 = unaff_x20;
  plStack_148 = plVar6;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_00666b20();
  if ((long *)plVar7[0x22] == plVar2 && (uint)plVar3 == (uint)*(byte *)(plVar7[0x22] + 10)) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)plVar2[((ulong)plVar3 & 0xff) * 3 + 4];
  }
  return plVar6;
}



/* Entry: 0068e9d0; end: 0068eafb;  */

void FUN_0068e9d0(ulong param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong *puVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_58;
  
  func_0x00692d98();
  uVar7 = param_1;
  func_0x00692c68();
  FUN_0068eafc();
  uVar9 = (ulong)*(uint *)(param_1 + 0x44);
  lVar6 = *(long *)(unaff_x20 + uVar9);
  if (lVar6 != *(long *)(*(long *)(param_1 + 8) + uVar9)) goto LAB_0068ea64;
  uVar8 = (ulong)*(uint *)(param_1 + 0x48);
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) == 0) {
    if (uVar3 == 0) goto LAB_0068ea44;
LAB_0068ea28:
    FUN_0053ff40(uVar3,uVar8,8);
    uVar8 = uVar3;
  }
  else {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    if (uVar3 != 0) goto LAB_0068ea28;
LAB_0068ea44:
    __Znwm();
  }
  *(ulong *)(unaff_x20 + uVar9) = uVar8;
  _memcpy();
  lVar6 = *(long *)(unaff_x20 + (ulong)*(uint *)(param_1 + 0x44));
LAB_0068ea64:
  plVar1 = (long *)(lVar6 + (uVar7 & 0xffffffff));
  if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) {
    uVar7 = *(ulong *)(unaff_x20 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    puVar4 = (undefined *)*plVar1;
    if (puVar4 == &UNK_00810e00) {
      func_0x00692c1c();
      iVar2 = (int)puVar4;
      uStack_58 = uVar7;
      if ((iVar2 < 9) || ((func_0x00692c1c(), iVar2 == 9 && (func_0x00693264(), iVar2 == 1)))) {
        puVar5 = &uStack_58;
        FUN_00538194();
      }
      else {
        puVar5 = &uStack_58;
        func_0x00544ca4();
      }
      *plVar1 = (long)puVar5;
    }
  }
  return;
}



/* Entry: 0068eafc; end: 0068eb3f;  */

uint FUN_0068eafc(long param_1)

{
  uint uVar1;
  int iVar2;
  uint extraout_w8;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  func_0x00693094();
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(lVar4 + (long)iVar2 * 4);
  func_0x00692cdc();
  if (iVar2 - 9U < 4) {
    func_0x0069326c();
    uVar3 = extraout_w8;
  }
  else {
    uVar3 = 0x7fffffff;
  }
  return uVar3 & uVar1;
}



/* Entry: 0068eb40; end: 0068ebb7;  */

ulong * FUN_0068eb40(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x19;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_58;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return (ulong *)(unaff_x19 + (param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x00692d98();
  uVar6 = param_1;
  func_0x00692c68();
  FUN_0068eafc();
  uVar8 = (ulong)*(uint *)(param_1 + 0x44);
  lVar5 = *(long *)(unaff_x20 + uVar8);
  if (lVar5 != *(long *)(*(long *)(param_1 + 8) + uVar8)) goto LAB_0068ea64;
  uVar7 = (ulong)*(uint *)(param_1 + 0x48);
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) == 0) {
    if (uVar3 == 0) goto LAB_0068ea44;
LAB_0068ea28:
    FUN_0053ff40(uVar3,uVar7,8);
    uVar7 = uVar3;
  }
  else {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    if (uVar3 != 0) goto LAB_0068ea28;
LAB_0068ea44:
    __Znwm();
  }
  *(ulong *)(unaff_x20 + uVar8) = uVar7;
  _memcpy();
  lVar5 = *(long *)(unaff_x20 + (ulong)*(uint *)(param_1 + 0x44));
LAB_0068ea64:
  puVar1 = (ulong *)(lVar5 + (uVar6 & 0xffffffff));
  puVar4 = puVar1;
  if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    puVar4 = (ulong *)*puVar1;
    if (puVar4 == (ulong *)&UNK_00810e00) {
      func_0x00692c1c();
      iVar2 = (int)puVar4;
      uStack_58 = uVar6;
      if ((iVar2 < 9) || ((func_0x00692c1c(), iVar2 == 9 && (func_0x00693264(), iVar2 == 1)))) {
        puVar4 = &uStack_58;
        FUN_00538194();
      }
      else {
        puVar4 = &uStack_58;
        func_0x00544ca4();
      }
      *puVar1 = (ulong)puVar4;
    }
  }
  return puVar4;
}



/* Entry: 0068ebb8; end: 0068ec37;  */

uint FUN_0068ebb8(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint extraout_w8;
  uint uVar4;
  uint extraout_w8_00;
  long unaff_x19;
  long lVar5;
  long unaff_x20;
  
  func_0x00692d80();
  FUN_00659454();
  if (param_2 == 0) {
    func_0x00692cd0();
    lVar5 = *(long *)(param_2 + 8);
    func_0x00693094();
    iVar3 = (int)param_2;
    uVar1 = *(uint *)(lVar5 + (long)iVar3 * 4);
    func_0x00692cdc();
    if (iVar3 - 9U < 4) {
      func_0x0069326c();
      uVar4 = extraout_w8;
    }
    else {
      uVar4 = 0x7fffffff;
    }
    uVar4 = uVar4 & uVar1;
  }
  else {
    uVar2 = (*(long *)(unaff_x19 + 0x28) -
            *(long *)(*(long *)(*(long *)(unaff_x19 + 0x28) + 0x10) + 0x40)) / 0x38;
    uVar1 = *(uint *)(*(long *)(unaff_x20 + 8) + (long)*(int *)(*(long *)(unaff_x19 + 0x20) + 4) * 4
                     + (-(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2));
    func_0x00692cdc();
    if ((int)param_2 - 9U < 4) {
      func_0x0069326c();
      uVar4 = extraout_w8_00;
    }
    else {
      uVar4 = 0x7fffffff;
    }
    uVar4 = uVar4 & uVar1;
  }
  return uVar4;
}



/* Entry: 0068ec38; end: 0068ed63;  */

long * FUN_0068ec38(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00692914();
  if (param_1 == (long *)0x0) {
    func_0x00692a2c();
    func_0x006928e4();
    if ((int)param_1 != 0) {
      func_0x00692a2c();
      func_0x006928fc();
      func_0x00692e60();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00692a78();
  }
  else {
    func_0x00692a84();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 0068ed64; end: 0068ee0f;  */

ulong * FUN_0068ed64(ulong *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 **ppuVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 **ppuVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long lVar15;
  ulong extraout_x8_08;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar16;
  code *pcVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar5 = *(int *)(param_3 + 4) != 0;
  bVar6 = *(int *)(param_3 + 4) == 1;
  if ((!bVar6) || (lVar15 = *(long *)(param_3 + 0x30), (*(byte *)(lVar15 + 1) >> 1 & 1) == 0)) {
    func_0x00693414();
    return (ulong *)(ulong)(*(int *)(param_2 + (extraout_x8_08 & 0xffffffff)) != 0);
  }
  func_0x00692960();
  if (!bVar6) {
    func_0x00692c5c();
LAB_0068af28:
    func_0x00692c24();
    if (*(int *)((long)param_1 + 0x3c) != -1) {
      pcStack_38 = FUN_0068af2c;
      uVar12 = param_1[1];
      puStack_40 = &stack0xfffffffffffffff0;
      func_0x00693094();
      return (ulong *)(ulong)(*(uint *)(uVar12 + (long)(int)param_1 * 4) >> 0x1f);
    }
    return (ulong *)0x0;
  }
  func_0x00692d74();
  if ((bool)uVar5) {
    func_0x00692d00();
    goto LAB_0068af28;
  }
  if ((extraout_w8_01 >> 3 & 1) != 0) {
    func_0x00692eac();
    param_2 = param_2 + extraout_x8_04;
    func_0x005339b8();
    if (param_2 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(byte *)(param_2 + 10) ^ 1;
    }
    return (ulong *)(ulong)(uVar14 & 1);
  }
  func_0x00692d18();
  if (param_1 != (ulong *)0x0) {
    func_0x00692a00();
    func_0x00693588(*(undefined8 *)(lVar15 + 0x28));
    return (ulong *)(ulong)(*(int *)(param_2 + (extraout_x8_00 & 0xffffffff)) ==
                           *(int *)(lVar15 + 4));
  }
  func_0x00692a00();
  ppuVar7 = &puStack_40;
  puVar16 = &stack0xfffffffffffffff0;
  func_0x00692d98();
  puVar9 = param_1;
  func_0x00692c68();
  func_0x0068b0fc();
  if ((int)puVar9 != -1) {
    uVar12 = param_1[4];
    func_0x0069302c();
    func_0x0068b0fc();
    uVar14 = *(uint *)(unaff_x20 + (uint)uVar12 + ((ulong)puVar9 >> 5 & 0x7ffffff) * 4) >>
             (ulong)((uint)puVar9 & 0x1f) & 1;
    goto LAB_0068a6e8;
  }
  func_0x00692c1c();
  if ((int)puVar9 == 10) {
    if (unaff_x20 == param_1[1]) {
      uVar14 = 0;
      goto LAB_0068a6e8;
    }
    func_0x00692a00();
    FUN_00689b8c();
    goto LAB_0068a6dc;
  }
  func_0x00692c1c();
  uVar14 = (int)puVar9 - 1;
  uVar4 = 7 < uVar14;
  uVar5 = uVar14 == 8;
  switch(uVar14) {
  case 0:
  case 7:
    func_0x00692a00();
    func_0x0068ec74();
    break;
  case 1:
    func_0x00692a00();
    func_0x0068ecb0();
    goto LAB_0068a6dc;
  case 2:
  case 5:
    func_0x00692a00();
    func_0x0068ecec();
    break;
  case 3:
  case 4:
    func_0x00692a00();
    func_0x0068ed28();
LAB_0068a6dc:
    uVar12 = *puVar9;
code_r0x0068a6e0:
    bVar6 = uVar12 == 0;
    goto code_r0x0068a6e4;
  case 6:
    func_0x00692a00();
    func_0x0068ec38();
    uVar14 = (uint)(byte)*puVar9;
    goto LAB_0068a6e8;
  case 8:
    func_0x00693264();
    if ((int)puVar9 == 1) {
      func_0x00692d18();
      if (puVar9 == (ulong *)0x0) {
        func_0x0069302c();
        FUN_0068af2c();
        if ((int)puVar9 == 0) {
          func_0x0069302c();
          FUN_0068eafc();
          goto code_r0x0068a72c;
        }
        func_0x0069302c();
        FUN_0068eafc();
        func_0x00692e60();
        if ((extraout_w8 >> 5 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
      }
      else {
        func_0x0069302c();
        FUN_0068ebb8();
code_r0x0068a72c:
        puVar9 = (ulong *)(unaff_x20 + ((ulong)puVar9 & 0xffffffff));
      }
      uVar14 = (uint)puVar9;
      func_0x0054a724();
      uVar14 = uVar14 ^ 1;
      goto LAB_0068a6e8;
    }
    func_0x0069302c();
    func_0x0068fc18();
    if ((int)puVar9 == 0) {
      func_0x00692a00();
      FUN_00691c14();
      uVar12 = (ulong)*(char *)((*puVar9 & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar12 < 0) {
        uVar12 = *(ulong *)((*puVar9 & 0xfffffffffffffffc) + 8);
      }
    }
    else {
      func_0x00692a00();
      FUN_00691b78();
      uVar12 = puVar9[1];
      if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
        uVar12 = (ulong)*(byte *)((long)puVar9 + 0x17);
      }
    }
    goto code_r0x0068a6e0;
  default:
    func_0x00693044();
    FUN_0077670c(&puStack_40);
    puVar10 = &UNK_009140bd;
    FUN_00537844();
    pcVar17 = FUN_0068a7dc;
    func_0x006931a8();
    ppuVar2 = &puStack_40;
    while( true ) {
      *(undefined8 *)((long)ppuVar2 + -0x50) = unaff_d9;
      *(undefined8 *)((long)ppuVar2 + -0x48) = unaff_d8;
      *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_x24;
      *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_x23;
      *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
      *(ulong **)((long)ppuVar2 + -0x28) = param_1;
      *(ulong *)((long)ppuVar2 + -0x20) = unaff_x20;
      *(ulong **)((long)ppuVar2 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppuVar2 + -0x10) = puVar16;
      *(code **)((long)ppuVar2 + -8) = pcVar17;
      func_0x00692960();
      if (!(bool)uVar5) {
        func_0x00692c5c();
        func_0x00692c24();
        *(ulong *)((long)ppuVar2 + -0x70) = unaff_x20;
        *(ulong **)((long)ppuVar2 + -0x68) = unaff_x19;
        *(undefined1 **)((long)ppuVar2 + -0x60) = (undefined1 *)((long)ppuVar2 + -0x10);
        *(code **)((long)ppuVar2 + -0x58) = FUN_0068aaa4;
        func_0x00692d80();
        func_0x00692c68();
        func_0x0068b0fc();
        if ((int)ppuVar7 != -1) {
          func_0x00693210();
          *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8_00;
        }
        return (ulong *)ppuVar7;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        puVar9 = (ulong *)(puVar10 + extraout_x8_01);
        uVar1 = *(undefined8 *)((long)ppuVar2 + -0x10);
        uVar13 = *(undefined8 *)((long)ppuVar2 + -8);
        func_0x00693490();
        *(undefined8 *)((long)ppuVar2 + -0x60) = uVar1;
        *(undefined8 *)((long)ppuVar2 + -0x58) = uVar13;
        func_0x005339b8();
        if (puVar9 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *(undefined **)((long)ppuVar2 + -0x70) = puVar10;
        *(ulong **)((long)ppuVar2 + -0x68) = unaff_x19;
        *(undefined8 *)((long)ppuVar2 + -0x60) = *(undefined8 *)((long)ppuVar2 + -0x60);
        *(undefined8 *)((long)ppuVar2 + -0x58) = *(undefined8 *)((long)ppuVar2 + -0x58);
        bVar3 = *(char *)((long)puVar9 + 9) != '\0';
        bVar6 = *(char *)((long)puVar9 + 9) == '\x01';
        if (bVar6) {
          func_0x0053a4c8((char)puVar9[1]);
          puVar8 = puVar9;
          if (!bVar3 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
            return puVar9;
          }
        }
        else {
          puVar8 = puVar9;
          if ((*(byte *)((long)puVar9 + 10) & 1) == 0) {
            if (*(int *)(&UNK_00810e40 + (ulong)(byte)puVar9[1] * 4) == 10) {
              puVar8 = (ulong *)*puVar9;
              if ((*(byte *)((long)puVar9 + 10) >> 4 & 1) == 0) {
                pcVar17 = *(code **)(*puVar8 + 0x18);
              }
              else {
                pcVar17 = *(code **)(*puVar8 + 0x88);
              }
              (*pcVar17)();
            }
            else if (*(int *)(&UNK_00810e40 + (ulong)(byte)puVar9[1] * 4) == 9) {
              puVar8 = (ulong *)*puVar9;
              func_0x0048d000(puVar8);
            }
            *(byte *)((long)puVar9 + 10) = *(byte *)((long)puVar9 + 10) & 0xf0 | 1;
          }
        }
        return puVar8;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) break;
      puVar9 = unaff_x19;
      FUN_00659454();
      if (puVar9 == (ulong *)0x0) {
        func_0x00692a00();
        FUN_0068a604();
        if ((int)puVar9 != 0) {
          func_0x00692a00();
          func_0x0068b0c8();
          func_0x00692c1c();
          func_0x00692f84();
          if (!(bool)uVar4 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0068a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_0082760d)[extraout_x8_03] * 4 + 0x68a8b4))();
            return puVar9;
          }
        }
        goto LAB_0068aa80;
      }
      func_0x00692990();
      if ((int)puVar9 == 0) goto LAB_0068aa80;
      if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = unaff_x19[5];
      }
      uVar1 = *(undefined8 *)((long)ppuVar2 + -0x10);
      uVar13 = *(undefined8 *)((long)ppuVar2 + -8);
      ppuVar7 = (undefined1 **)param_1;
      puVar11 = puVar10;
      func_0x00693490();
      *(undefined8 *)((long)ppuVar2 + -0x80) = unaff_x22;
      *(ulong **)((long)ppuVar2 + -0x78) = param_1;
      *(undefined **)((long)ppuVar2 + -0x70) = puVar10;
      *(ulong **)((long)ppuVar2 + -0x68) = unaff_x19;
      *(undefined8 *)((long)ppuVar2 + -0x60) = uVar1;
      *(undefined8 *)((long)ppuVar2 + -0x58) = uVar13;
      uVar4 = *(int *)(uVar12 + 4) != 0;
      uVar5 = *(int *)(uVar12 + 4) == 1;
      if ((!(bool)uVar5) || ((*(byte *)(*(long *)(uVar12 + 0x30) + 1) >> 1 & 1) == 0)) {
        puVar9 = (ulong *)ppuVar7;
        func_0x006930c4();
        if (*(int *)(puVar11 + (extraout_x8_05 & 0xffffffff)) != 0) {
          puVar8 = (ulong *)*ppuVar7;
          FUN_00656068();
          uVar12 = *(ulong *)(puVar11 + 8);
          puVar9 = puVar8;
          if ((uVar12 & 1) != 0) {
            func_0x006931f8();
            uVar12 = extraout_x8_07;
          }
          if (uVar12 == 0) {
            func_0x00693398();
            if ((int)puVar9 == 10) {
              func_0x00692c50();
              func_0x0068eb7c();
              puVar9 = (ulong *)*puVar9;
              if (puVar9 != (ulong *)0x0) {
                func_0x00692ca4();
              }
            }
            else if ((int)puVar9 == 9) {
              FUN_00689b10();
              if ((int)puVar8 == 1) {
                func_0x00692c50();
                func_0x0068eb7c();
                puVar9 = (ulong *)*puVar8;
                if (puVar9 != (ulong *)0x0) {
                  FUN_00543968();
                }
                __ZdlPv();
              }
              else {
                func_0x00692c50();
                FUN_0068d284();
                func_0x00532f74();
                puVar9 = puVar8;
              }
            }
          }
          func_0x006930c4();
          *(undefined4 *)(puVar11 + (extraout_x8_06 & 0xffffffff)) = 0;
        }
        return puVar9;
      }
      func_0x00692c50();
      puVar16 = *(undefined1 **)((long)ppuVar2 + -0x60);
      pcVar17 = *(code **)((long)ppuVar2 + -0x58);
      unaff_x20 = *(ulong *)((long)ppuVar2 + -0x70);
      unaff_x19 = *(ulong **)((long)ppuVar2 + -0x68);
      unaff_x22 = *(undefined8 *)((long)ppuVar2 + -0x80);
      param_1 = *(ulong **)((long)ppuVar2 + -0x78);
      ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x50);
      puVar10 = puVar11;
    }
    FUN_00656c60();
    func_0x00692f84();
    puVar9 = unaff_x19;
    if (!(bool)uVar4 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0068a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00827603)[extraout_x8_02] * 4 + 0x68a870))();
      return unaff_x19;
    }
LAB_0068aa80:
    func_0x00693490();
    return puVar9;
  }
  bVar6 = (int)*puVar9 == 0;
code_r0x0068a6e4:
  uVar14 = (uint)!bVar6;
LAB_0068a6e8:
  return (ulong *)(ulong)(uVar14 & 1);
}



/* Entry: 0068ee10; end: 0068ef63;  */

long FUN_0068ee10(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  undefined1 auStack_68 [16];
  long alStack_58 [2];
  long lStack_48;
  
  lStack_48 = param_5;
  if ((*(byte *)(param_3 + 1) >> 5 & 1) == 0) {
    FUN_00533884(auStack_68,&UNK_009140e2);
    func_0x00693044();
    param_3 = unaff_x20;
  }
  else {
    lVar1 = param_3;
    FUN_00656c60();
    if (((int)lVar1 != param_4) && (func_0x00692e6c(), param_4 != 1 || (int)lVar1 != 8)) {
      func_0x00693044();
      FUN_00776714(alStack_58);
      FUN_0068ef64(alStack_58,&UNK_0091417b);
      FUN_00686da0();
      func_0x0068ef84();
      goto LAB_0068ef5c;
    }
    if (param_5 == 0) {
LAB_0068ee8c:
      if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
        func_0x00692a2c();
        func_0x0068e7c8();
      }
      else {
        lVar1 = param_2 + (ulong)*(uint *)(param_1 + 0x28);
        func_0x00534438(lVar1,*(undefined4 *)(param_3 + 4),&UNK_00810e00);
      }
      return lVar1;
    }
    func_0x006931a0();
    plVar2 = &lStack_48;
    alStack_58[0] = lVar1;
    FUN_0068e61c(plVar2,alStack_58,&UNK_0091420d);
    lVar1 = 0;
    if (plVar2 == (long *)0x0) goto LAB_0068ee8c;
    func_0x00533528();
    func_0x00693044();
  }
  FUN_00776794(alStack_58);
LAB_0068ef5c:
  FUN_005558a0(alStack_58);
  func_0x00692b08();
  func_0x00692af8();
  return param_3;
}



/* Entry: 0068ef64; end: 0068efa3;  */

void FUN_0068ef64(void)

{
  func_0x00692b08();
  func_0x00692af8();
  return;
}



/* Entry: 0068efa4; end: 0068f023;  */

undefined8 * FUN_0068efa4(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint extraout_w8;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong *unaff_x21;
  ulong uVar7;
  ulong uVar8;
  
  func_0x006929dc();
  func_0x006595dc();
  if ((param_1 & 1) == 0) {
    puVar5 = (undefined8 *)*unaff_x21;
    func_0x0069332c();
    func_0x00692c24();
    func_0x006929dc();
    func_0x006595dc();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x0069332c(*unaff_x21);
      func_0x00692c24();
      func_0x00692b08();
      func_0x00692af8();
      return unaff_x20;
    }
    func_0x00692a00();
    func_0x00692914();
    if (puVar5 == (undefined8 *)0x0) {
      func_0x00692a2c();
      func_0x006928e4();
      if ((int)puVar5 != 0) {
        func_0x00692a2c();
        func_0x006928fc();
        func_0x00692e60();
        if ((extraout_w8 >> 5 & 1) == 0) {
          return puVar5;
        }
        return (undefined8 *)*puVar5;
      }
      func_0x00692a78();
    }
    else {
      func_0x00692a84();
    }
    return (undefined8 *)(unaff_x19 + ((ulong)puVar5 & 0xffffffff));
  }
  func_0x00692a00();
  func_0x00692914();
  if (param_1 != 0) {
    func_0x00692a84();
    return (undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return (undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x00692d98();
  uVar2 = param_1;
  func_0x00692c68();
  FUN_0068eafc();
  uVar8 = (ulong)*(uint *)(param_1 + 0x44);
  lVar6 = *(long *)((long)unaff_x20 + uVar8);
  if (lVar6 != *(long *)(*(long *)(param_1 + 8) + uVar8)) goto LAB_0068ea64;
  uVar7 = (ulong)*(uint *)(param_1 + 0x48);
  uVar3 = unaff_x20[1];
  if ((uVar3 & 1) == 0) {
    if (uVar3 == 0) goto LAB_0068ea44;
LAB_0068ea28:
    FUN_0053ff40(uVar3,uVar7,8);
    uVar7 = uVar3;
  }
  else {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    if (uVar3 != 0) goto LAB_0068ea28;
LAB_0068ea44:
    __Znwm();
  }
  *(ulong *)((long)unaff_x20 + uVar8) = uVar7;
  _memcpy();
  lVar6 = *(long *)((long)unaff_x20 + (ulong)*(uint *)(param_1 + 0x44));
LAB_0068ea64:
  puVar5 = (undefined8 *)(lVar6 + (uVar2 & 0xffffffff));
  puVar4 = puVar5;
  if (((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) &&
     (puVar4 = (undefined8 *)*puVar5, puVar4 == (undefined8 *)&UNK_00810e00)) {
    func_0x00692c1c();
    iVar1 = (int)puVar4;
    if ((iVar1 < 9) || ((func_0x00692c1c(), iVar1 == 9 && (func_0x00693264(), iVar1 == 1)))) {
      puVar4 = (undefined8 *)&stack0xffffffffffffffa8;
      FUN_00538194();
    }
    else {
      puVar4 = (undefined8 *)&stack0xffffffffffffffa8;
      func_0x00544ca4();
    }
    *puVar5 = puVar4;
  }
  return puVar4;
}



/* Entry: 0068f024; end: 0068f043;  */

void FUN_0068f024(void)

{
  func_0x00692b08();
  func_0x00692af8();
  return;
}



/* Entry: 0068f044; end: 0068f7b7;  */

ulong * FUN_0068f044(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  code *pcVar8;
  long *plVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong *puVar15;
  undefined1 *puVar16;
  long lVar17;
  int iVar18;
  long extraout_x8;
  long extraout_x8_00;
  byte *pbVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *unaff_x20;
  ulong *puVar27;
  ulong *unaff_x21;
  byte *pbVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  byte bVar35;
  uint6 uVar36;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  undefined8 uVar37;
  byte bVar43;
  undefined1 auStack_1c0 [16];
  byte abStack_120 [8];
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined4 *puStack_e8;
  undefined4 *puStack_e0;
  undefined4 uStack_d0;
  undefined4 *puStack_c8;
  undefined4 *puStack_c0;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  uint uStack_98;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined2 uStack_78;
  undefined1 uStack_76;
  
  puStack_88 = (ulong *)0x0;
  puStack_80 = (ulong *)0x0;
  iVar18 = *(int *)(*param_1 + 4);
  puVar10 = (ulong *)0x0;
  if (iVar18 != 0) {
    if (iVar18 < 0) {
      func_0x0069074c();
LAB_0068f758:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x68f75c);
      (*pcVar8)();
    }
    FUN_00690760(abStack_120,(long)iVar18,0,&puStack_80);
    func_0x00692f60();
    puStack_80 = puStack_108;
    puStack_88 = puStack_110;
    func_0x00693164(0);
    puVar10 = unaff_x20;
  }
  lVar30 = 0;
  for (lVar32 = 0; lVar17 = *param_1, lVar32 < *(int *)(lVar17 + 4); lVar32 = lVar32 + 1) {
    lVar17 = *(long *)(lVar17 + 0x38) + lVar30;
    unaff_x20 = (ulong *)(param_1 + 1);
    func_0x0068fc18(unaff_x20,lVar17);
    func_0x0068b0fc(param_1 + 1,lVar17);
    FUN_006538b4();
    FUN_006895ec();
    FUN_0068af2c(param_1 + 1,lVar17);
    if ((int)unaff_x20 == 0) {
      uVar24 = 0xffffffff;
    }
    else {
      lVar34 = param_1[7];
      func_0x00659be0();
      uVar24 = *(undefined4 *)(lVar34 + (long)(int)lVar17 * 4);
    }
    if (puStack_88 < puStack_80) {
      func_0x00693148();
      *(undefined4 *)(extraout_x8 + 0x18) = uVar24;
      lVar17 = extraout_x8;
    }
    else {
      lVar17 = (long)puStack_88 - (long)puVar10 >> 5;
      uVar25 = lVar17 + 1;
      if (uVar25 >> 0x3b != 0) {
        func_0x0069074c();
        goto LAB_0068f758;
      }
      uVar23 = (long)puStack_80 - (long)puVar10 >> 4;
      if (uVar23 <= uVar25) {
        uVar23 = uVar25;
      }
      if (0x7fffffffffffffdf < (ulong)((long)puStack_80 - (long)puVar10)) {
        uVar23 = 0x7ffffffffffffff;
      }
      FUN_00690760(abStack_120,uVar23,lVar17,&puStack_80);
      func_0x00693148(puStack_110);
      *(undefined4 *)(extraout_x8_00 + 0x18) = uVar24;
      func_0x00692f60();
      puStack_80 = puStack_108;
      func_0x00693164(puVar10);
      puVar10 = unaff_x20;
      lVar17 = extraout_x8_00;
    }
    unaff_x21 = (ulong *)(lVar17 + 0x20);
    lVar30 = lVar30 + 0x58;
    puStack_88 = unaff_x21;
  }
  if (puVar10 != puStack_88) {
    FUN_006907f8(puVar10,puStack_88,LZCOUNT((long)puStack_88 - (long)puVar10 >> 5) << 1 ^ 0x7e,1);
    lVar17 = *param_1;
  }
  uStack_78 = 0;
  uStack_76 = 0;
  FUN_00693954(abStack_120,lVar17,&uStack_78);
  uVar23 = (ulong)((long)puStack_110 - (long)puStack_118) >> 5;
  uVar25 = uVar23;
  FUN_0054ff6c(uVar23,1 << (ulong)(uStack_98 & 0x1f),&UNK_0091425b);
  if (uVar25 == 0) {
    iVar18 = 2;
    for (puVar21 = puStack_c8; puVar21 != puStack_c0; puVar21 = puVar21 + 8) {
      iVar18 = iVar18 + ((uint)((ulong)(*(long *)(puVar21 + 4) - *(long *)(puVar21 + 2)) >> 1) &
                        0xfffffffe) + 3;
    }
    iVar7 = (int)uVar23 * 0x10;
    uVar1 = (iVar7 + 0x39U & 0xfff8) + iVar18 * 2 + 2 & 0xfffffffc;
    uVar2 = uVar1 + (int)((ulong)((long)puStack_88 - (long)puVar10) >> 5) * 0xc + 7 & 0xfffffff8;
    puVar27 = (ulong *)(long)(int)((iStack_a8 - iStack_b0) +
                                   (int)((ulong)((long)puStack_e0 - (long)puStack_e8) >> 1) + uVar2)
    ;
    unaff_x21 = puVar27;
    __Znwm();
    iVar18 = 0;
    if ((int)param_1[4] != -1) {
      iVar18 = (int)param_1[4];
    }
    iVar3 = 0;
    if ((int)param_1[5] != -1) {
      iVar3 = (int)param_1[5];
    }
    if (puVar10 == puStack_88) {
      uVar24 = 0;
    }
    else {
      uVar24 = *(undefined4 *)(puStack_88[-4] + 4);
    }
    uVar25 = param_1[1];
    if (abStack_120[0] - 0x76 < 0xffffff8b) {
      pcVar8 = FUN_0053b2d4;
    }
    else {
      pcVar8 = *(code **)(&UNK_00a0efd8 + (ulong)(uint)abStack_120[0] * 8);
    }
    *(short *)unaff_x21 = (short)iVar18;
    *(short *)((long)unaff_x21 + 2) = (short)iVar3;
    *(undefined4 *)((long)unaff_x21 + 4) = uVar24;
    *(byte *)(unaff_x21 + 1) = (char)uVar23 * '\b' - 8;
    *(byte *)((long)unaff_x21 + 9) = *(byte *)((long)unaff_x21 + 9) & 0xfe;
    *(short *)((long)unaff_x21 + 10) = (short)iVar7 + 0x38;
    *(undefined4 *)((long)unaff_x21 + 0xc) = uStack_d0;
    *(uint *)(unaff_x21 + 2) = uVar1;
    *(short *)((long)unaff_x21 + 0x14) = (short)((ulong)((long)puStack_88 - (long)puVar10) >> 5);
    *(short *)((long)unaff_x21 + 0x16) = (short)((ulong)((long)puStack_e0 - (long)puStack_e8) >> 4);
    *(uint *)(unaff_x21 + 3) = uVar2;
    unaff_x21[4] = uVar25;
    unaff_x21[5] = 0;
    unaff_x21[6] = (ulong)pcVar8;
    lVar32 = 0x38;
    unaff_x20 = puVar27;
    for (puVar10 = puStack_118; puVar10 != puStack_110; puVar10 = puVar10 + 4) {
      pcVar8 = FUN_0053b2d4;
      if (puVar10 == (ulong *)0x0) {
LAB_0068f40c:
        uVar25 = 0;
      }
      else if ((int)puVar10[3] == 1) {
        if (0xffffff8a < (byte)*puVar10 - 0x76) {
          pcVar8 = *(code **)(&UNK_00a0efd8 + (ulong)(uint)(byte)*puVar10 * 8);
        }
        uVar25 = puVar10[2];
        unaff_x20 = (ulong *)(ulong)*(byte *)((long)puVar10 + 0x12);
        bVar5 = *(byte *)((long)puVar10 + 0x13);
        plVar33 = param_1 + 1;
        FUN_0068ebb8(plVar33,puVar10[1]);
        uVar25 = (ulong)bVar5 << 0x18 | (long)plVar33 << 0x30 | (long)unaff_x20 << 0x10 |
                 (ulong)(ushort)uVar25;
      }
      else {
        if ((int)puVar10[3] != 2) goto LAB_0068f40c;
        if (0xffffff8a < (byte)*puVar10 - 0x76) {
          pcVar8 = *(code **)(&UNK_00a0efd8 + (ulong)(uint)(byte)*puVar10 * 8);
        }
        uVar25 = (ulong)*(uint *)((long)puVar10 + 2);
      }
      *(code **)((long)unaff_x21 + lVar32) = pcVar8;
      *(ulong *)((byte *)((long)unaff_x21 + lVar32) + 8) = uVar25;
      lVar32 = lVar32 + 0x10;
    }
    pbVar19 = (byte *)((ulong)*(ushort *)((long)unaff_x21 + 10) + (long)unaff_x21);
    for (; puStack_c8 != puStack_c0; puStack_c8 = puStack_c8 + 8) {
      *(undefined4 *)pbVar19 = *puStack_c8;
      puVar21 = *(undefined4 **)(puStack_c8 + 2);
      puVar4 = *(undefined4 **)(puStack_c8 + 4);
      *(short *)(pbVar19 + 4) = (short)((uint)((int)puVar4 - (int)puVar21) >> 2);
      pbVar19 = pbVar19 + 6;
      for (; puVar21 != puVar4; puVar21 = puVar21 + 1) {
        *(undefined4 *)pbVar19 = *puVar21;
        pbVar19 = pbVar19 + 4;
      }
    }
    pbVar19[0] = 0xff;
    pbVar19[1] = 0xff;
    pbVar19[2] = 0xff;
    pbVar19[3] = 0xff;
    pbVar19 = (byte *)((ulong)(uint)unaff_x21[2] + (long)unaff_x21);
    for (plVar33 = plStack_100; plVar33 != plStack_f8; plVar33 = plVar33 + 3) {
      lVar30 = *plVar33;
      lVar32 = lVar30;
      FUN_006538b4();
      if ((((int)lVar32 == 0xe) && ((*(ushort *)((long)plVar33 + 0x12) & 0x600) == 0x400)) &&
         (puStack_e8[(ulong)*(ushort *)(plVar33 + 2) * 4] == 10)) {
        pbVar19[8] = 0;
        pbVar19[9] = 0;
        pbVar19[10] = 0;
        pbVar19[0xb] = 0;
        pbVar19[0] = 0;
        pbVar19[1] = 0;
        pbVar19[2] = 0;
        pbVar19[3] = 0;
        pbVar19[4] = 0;
        pbVar19[5] = 0;
        pbVar19[6] = 0;
        pbVar19[7] = 0;
        uVar6 = *(ushort *)(plVar33 + 2);
        puStack_e8[(ulong)uVar6 * 4] = 0;
        *(undefined8 *)(puStack_e8 + (ulong)uVar6 * 4 + 2) = 0;
      }
      else {
        func_0x00692fb8();
        plVar9 = param_1 + 1;
        FUN_0068ebb8(plVar9,lVar30);
        *(int *)pbVar19 = (int)plVar9;
        if (lVar32 == 0) {
          if ((int)param_1[4] == -1) {
            iVar18 = 0;
          }
          else {
            iVar18 = (int)plVar33[1] + (int)param_1[4] * 8;
          }
        }
        else {
          iVar18 = *(int *)((long)param_1 + 0x2c) +
                   (int)((lVar32 - *(long *)(*(long *)(lVar32 + 0x10) + 0x40)) / 0x38) * 4;
        }
        *(int *)(pbVar19 + 4) = iVar18;
        *(int *)(pbVar19 + 8) = (int)plVar33[2];
      }
      pbVar19 = pbVar19 + 0xc;
    }
    pbVar19 = (byte *)((ulong)(uint)unaff_x21[3] + (long)unaff_x21);
    plVar33 = plStack_f8;
    for (puVar21 = puStack_e8; puVar21 != puStack_e0; puVar21 = puVar21 + 4) {
      pbVar28 = pbVar19;
      switch(*puVar21) {
      case 0:
        pbVar28 = pbVar19 + 8;
        pbVar19[0] = 0;
        pbVar19[1] = 0;
        pbVar19[2] = 0;
        pbVar19[3] = 0;
        pbVar19[4] = 0;
        pbVar19[5] = 0;
        pbVar19[6] = 0;
        pbVar19[7] = 0;
        break;
      case 1:
        uVar24 = (undefined4)param_1[8];
        goto code_r0x0068f63c;
      case 2:
        uVar24 = *(undefined4 *)((long)param_1 + 0x44);
        goto code_r0x0068f63c;
      case 3:
        uVar24 = (undefined4)param_1[9];
        goto code_r0x0068f63c;
      case 4:
        plVar9 = param_1;
        func_0x0068dbac(param_1,*(undefined8 *)(puVar21 + 2));
        pbVar28 = pbVar19 + 8;
        *(long **)pbVar19 = plVar9;
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 0xd:
        goto code_r0x0068f6f8;
      case 9:
      case 0xb:
        uVar24 = puVar21[2];
code_r0x0068f63c:
        pbVar28 = pbVar19 + 8;
        *(undefined4 *)pbVar19 = uVar24;
        break;
      case 10:
        func_0x0069301c();
        FUN_0077670c();
        FUN_0068f024();
        goto LAB_0068f778;
      case 0xc:
        uVar1 = (uint)plVar33 & 0xffffffe0;
        plVar33 = (long *)(ulong)uVar1;
        pbVar19[0] = 0;
        pbVar19[1] = 0;
        pbVar19[2] = (byte)uVar1;
        pbVar19[4] = 0;
        pbVar19[5] = 0;
        pbVar19[6] = 0;
        pbVar19[7] = 0;
        pbVar28 = pbVar19 + 8;
      }
      pbVar19 = pbVar28;
    }
    lVar32 = CONCAT44(uStack_ac,iStack_b0);
    uVar25 = (ulong)(uint)unaff_x21[3];
    lVar30 = lVar32;
    if (lVar32 != CONCAT44(uStack_a4,iStack_a8)) {
      _memcpy((byte *)((long)unaff_x21 + (ulong)*(ushort *)((long)unaff_x21 + 0x16) * 8 + uVar25),
              lVar32,CONCAT44(uStack_a4,iStack_a8) - lVar32);
      lVar32 = CONCAT44(uStack_ac,iStack_b0);
      uVar25 = (ulong)(uint)unaff_x21[3];
      lVar30 = CONCAT44(uStack_a4,iStack_a8);
    }
    puVar10 = (ulong *)((lVar30 - lVar32) + uVar25 + (ulong)*(ushort *)((long)unaff_x21 + 0x16) * 8)
    ;
    if (puVar10 == puVar27) {
      FUN_00691274(abStack_120);
      FUN_00691440(&stack0xffffffffffffff70);
      return unaff_x21;
    }
    FUN_00554520(puVar10,puVar27,&UNK_009142a3);
    func_0x00693108();
    func_0x0069301c();
    FUN_00776794();
  }
  else {
    func_0x0069301c();
    FUN_00776794();
  }
  FUN_005558a0();
code_r0x0068f6f8:
  func_0x0069301c();
  FUN_0077670c();
  func_0x00544ce8();
LAB_0068f778:
  FUN_005558a0();
  FUN_00691274(abStack_120);
  puVar10 = (ulong *)&stack0xffffffffffffff70;
  FUN_00691440();
  func_0x00692d60();
  if ((*puVar10 & 1) != 0) {
    return puVar10;
  }
  *(byte *)puVar10 = 1;
  func_0x0048afa0();
  func_0x00693448();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 1) {
    if (*(long *)(puVar10[4] + (long)unaff_x20) != 0) {
      FUN_0068f7b8();
    }
  }
  FUN_006559e8(puVar10[1],*(undefined4 *)((long)puVar10 + 4));
  puVar27 = puVar10;
  FUN_006994c8();
  puVar15 = puVar27 + 1;
  Hint_Prefetch(*puVar15,0,2,0);
  puVar11 = puVar10;
  FUN_0069a050(*puVar15);
  lVar32 = 0;
  uVar23 = *puVar15;
  uVar26 = puVar27[3];
  uVar25 = uVar23 >> 0xc ^ (ulong)puVar11 >> 7;
  bVar5 = (byte)puVar11;
  uVar36 = CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5,CONCAT11(bVar5,bVar5))))) &
           0x7f7f7f7f7f7f;
  do {
    uVar25 = uVar25 & uVar26;
    uVar37 = *(undefined8 *)(uVar23 + uVar25);
    cVar38 = (char)((ulong)uVar37 >> 8);
    cVar39 = (char)((ulong)uVar37 >> 0x10);
    cVar40 = (char)((ulong)uVar37 >> 0x18);
    cVar41 = (char)((ulong)uVar37 >> 0x20);
    cVar42 = (char)((ulong)uVar37 >> 0x28);
    bVar35 = (byte)((ulong)uVar37 >> 0x30);
    bVar43 = (byte)((ulong)uVar37 >> 0x38);
    for (uVar22 = CONCAT17(-(bVar43 == (bVar5 & 0x7f)),
                           CONCAT16(-(bVar35 == (bVar5 & 0x7f)),
                                    CONCAT15(-(cVar42 == (char)(uVar36 >> 0x28)),
                                             CONCAT14(-(cVar41 == (char)(uVar36 >> 0x20)),
                                                      CONCAT13(-(cVar40 == (char)(uVar36 >> 0x18)),
                                                               CONCAT12(-(cVar39 ==
                                                                         (char)(uVar36 >> 0x10)),
                                                                        CONCAT11(-(cVar38 ==
                                                                                  (char)(uVar36 >> 8
                                                                                        )),
                                                                                 -((char)uVar37 ==
                                                                                  (char)uVar36))))))
                                   )) & 0x8080808080808080; uVar22 != 0;
        uVar22 = uVar22 - 1 & uVar22) {
      uVar12 = (uVar22 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar22 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      puVar20 = *(ulong **)
                 (puVar27[2] +
                 (uVar25 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3) & uVar26) * 8);
      if (puVar20 == puVar10) {
LAB_006998b0:
        func_0x0069b108();
        FUN_0077670c();
        puVar14 = auStack_1c0;
        FUN_005512e8(puVar14,&UNK_00914bd4);
        puVar10 = puVar10 + 2;
        FUN_0055130c();
        func_0x0069af60();
        puVar16 = puVar14;
        puVar11 = puVar10;
        FUN_006994c8();
        puVar27 = (ulong *)(puVar16 + 0x68);
        FUN_005685a0();
        func_0x0069b19c();
        if (((ulong)puVar11 & 1) != 0) {
          plVar33 = (long *)(*(long *)(puVar16 + 0x78) + (long)puVar27 * 0x10);
          *plVar33 = (long)puVar14;
          plVar33[1] = (long)puVar10;
        }
        return puVar27;
      }
      uVar29 = puVar20[2];
      uVar12 = uVar29;
      _strlen(uVar29);
      uVar31 = puVar10[2];
      uVar13 = uVar31;
      _strlen(uVar31);
      func_0x00465a14(uVar29,uVar12,uVar31,uVar13);
      if ((uVar29 & 1) != 0) goto LAB_006998b0;
    }
    bVar35 = NEON_umaxv(CONCAT17(-(bVar43 == 0x80),
                                 CONCAT16(-(bVar35 == 0x80),
                                          CONCAT15(-(cVar42 == -0x80),
                                                   CONCAT14(-(cVar41 == -0x80),
                                                            CONCAT13(-(cVar40 == -0x80),
                                                                     CONCAT12(-(cVar39 == -0x80),
                                                                              CONCAT11(-(cVar38 ==
                                                                                        -0x80),-((
                                                  char)uVar37 == -0x80)))))))),1);
    if ((bVar35 & 1) != 0) {
      FUN_0069a080(puVar15,puVar11);
      *(ulong **)(puVar27[2] + (long)puVar15 * 8) = puVar10;
      return puVar15;
    }
    lVar32 = lVar32 + 8;
    uVar25 = lVar32 + uVar25;
  } while( true );
}



/* Entry: 0068f7b8; end: 0068f827;  */

void FUN_0068f7b8(byte *param_1)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long unaff_x20;
  long unaff_x21;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  byte bVar19;
  uint6 uVar20;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined8 uVar21;
  byte bVar27;
  undefined1 auStack_90 [16];
  
  if ((*param_1 & 1) != 0) {
    return;
  }
  *param_1 = 1;
  func_0x0048afa0();
  func_0x00693448();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 8) {
    if (*(long *)(*(long *)(param_1 + 0x20) + unaff_x20) != 0) {
      FUN_0068f7b8();
    }
  }
  FUN_006559e8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
  pbVar3 = param_1;
  FUN_006994c8();
  puVar15 = (ulong *)(pbVar3 + 8);
  Hint_Prefetch(*puVar15,0,2,0);
  pbVar4 = param_1;
  FUN_0069a050(*puVar15);
  lVar18 = 0;
  uVar13 = *puVar15;
  uVar14 = *(ulong *)(pbVar3 + 0x18);
  uVar10 = uVar13 >> 0xc ^ (ulong)pbVar4 >> 7;
  bVar2 = (byte)pbVar4;
  uVar20 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
           0x7f7f7f7f7f7f;
  do {
    uVar10 = uVar10 & uVar14;
    uVar21 = *(undefined8 *)(uVar13 + uVar10);
    cVar22 = (char)((ulong)uVar21 >> 8);
    cVar23 = (char)((ulong)uVar21 >> 0x10);
    cVar24 = (char)((ulong)uVar21 >> 0x18);
    cVar25 = (char)((ulong)uVar21 >> 0x20);
    cVar26 = (char)((ulong)uVar21 >> 0x28);
    bVar19 = (byte)((ulong)uVar21 >> 0x30);
    bVar27 = (byte)((ulong)uVar21 >> 0x38);
    for (uVar12 = CONCAT17(-(bVar27 == (bVar2 & 0x7f)),
                           CONCAT16(-(bVar19 == (bVar2 & 0x7f)),
                                    CONCAT15(-(cVar26 == (char)(uVar20 >> 0x28)),
                                             CONCAT14(-(cVar25 == (char)(uVar20 >> 0x20)),
                                                      CONCAT13(-(cVar24 == (char)(uVar20 >> 0x18)),
                                                               CONCAT12(-(cVar23 ==
                                                                         (char)(uVar20 >> 0x10)),
                                                                        CONCAT11(-(cVar22 ==
                                                                                  (char)(uVar20 >> 8
                                                                                        )),
                                                                                 -((char)uVar21 ==
                                                                                  (char)uVar20))))))
                                   )) & 0x8080808080808080; uVar12 != 0;
        uVar12 = uVar12 - 1 & uVar12) {
      uVar5 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      pbVar11 = *(byte **)(*(long *)(pbVar3 + 0x10) +
                          (uVar10 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) & uVar14) *
                          8);
      if (pbVar11 == param_1) {
LAB_006998b0:
        func_0x0069b108();
        FUN_0077670c();
        puVar7 = auStack_90;
        FUN_005512e8(puVar7,&UNK_00914bd4);
        param_1 = param_1 + 0x10;
        FUN_0055130c();
        func_0x0069af60();
        puVar8 = puVar7;
        pbVar3 = param_1;
        FUN_006994c8();
        puVar9 = puVar8 + 0x68;
        FUN_005685a0();
        func_0x0069b19c();
        if (((ulong)pbVar3 & 1) != 0) {
          plVar1 = (long *)(*(long *)(puVar8 + 0x78) + (long)puVar9 * 0x10);
          *plVar1 = (long)puVar7;
          plVar1[1] = (long)param_1;
        }
        return;
      }
      uVar16 = *(ulong *)(pbVar11 + 0x10);
      uVar5 = uVar16;
      _strlen(uVar16);
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = uVar17;
      _strlen(uVar17);
      func_0x00465a14(uVar16,uVar5,uVar17,uVar6);
      if ((uVar16 & 1) != 0) goto LAB_006998b0;
    }
    bVar19 = NEON_umaxv(CONCAT17(-(bVar27 == 0x80),
                                 CONCAT16(-(bVar19 == 0x80),
                                          CONCAT15(-(cVar26 == -0x80),
                                                   CONCAT14(-(cVar25 == -0x80),
                                                            CONCAT13(-(cVar24 == -0x80),
                                                                     CONCAT12(-(cVar23 == -0x80),
                                                                              CONCAT11(-(cVar22 ==
                                                                                        -0x80),-((
                                                  char)uVar21 == -0x80)))))))),1);
    if ((bVar19 & 1) != 0) {
      FUN_0069a080(puVar15,pbVar4);
      *(byte **)(*(long *)(pbVar3 + 0x10) + (long)puVar15 * 8) = param_1;
      return;
    }
    lVar18 = lVar18 + 8;
    uVar10 = lVar18 + uVar10;
  } while( true );
}



/* Entry: 0068f828; end: 0068f86b;  */

void FUN_0068f828(long param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  int *piStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  uVar5 = uVar7;
  _strlen(uVar7);
  func_0x0066594c(uVar7,uVar5);
  if ((uVar7 & 1) == 0) {
    func_0x006559c0();
  }
  piVar4 = (int *)(ulong)*(byte *)(param_1 + 1);
  piVar3 = piVar4;
  if ((bRam0000000000b63cf0 & 1) == 0) goto LAB_0068fa14;
  while( true ) {
    piVar4 = (int *)0xb63ce8;
    FUN_00567528(0xb63ce8);
    FUN_0068f7b8(param_1);
    FUN_00567fe4();
    if ((int)piVar3 != 0) {
      func_0x00693448();
      for (; piVar3 != (int *)0xb63ce8; piVar3 = piVar3 + 2) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)piVar3);
        if ((lVar6 != 0) && (piVar4 = *(int **)(lVar6 + 0x18), *piVar4 != 0xdd)) {
          FUN_00691640(piVar4,*(long *)(param_1 + 0x20) + (long)piVar3,1);
        }
      }
    }
    FUN_006558fc();
    lVar8 = *(long *)(param_1 + 0x10);
    lVar6 = lVar8;
    _strlen(lVar8);
    piVar3 = piVar4;
    FUN_00655a68(piVar4,lVar8,lVar6);
    if (piVar3 != (int *)0x0) break;
    FUN_00533884(auStack_40,&UNK_009144ec);
    func_0x00693044();
    FUN_00776794(&piStack_68);
    func_0x0069308c();
LAB_0068fa14:
    iVar2 = 0xb63cf0;
    ___cxa_guard_acquire();
    piVar3 = piVar4;
    if (iVar2 != 0) {
      ___cxa_atexit(FUN_00567000,0xb63ce8,0);
      ___cxa_guard_release(0xb63cf0);
    }
  }
  piVar4 = piVar3;
  FUN_006994c8();
  func_0x00693564();
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  plStack_60 = *(long **)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  piStack_68 = piVar4;
  while (unaff_x22 < piVar3[0xf]) {
    FUN_0069146c(&piStack_68,*(long *)(piVar3 + 0x18) + lVar8);
    func_0x00693558();
  }
  uVar1 = piVar3[0x10];
  for (lVar6 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar6 != 0;
      lVar6 = lVar6 + 0x58) {
    *plStack_60 = *(long *)(piVar3 + 0x1a) + lVar6;
    plStack_60 = plStack_60 + 1;
  }
  if (*(char *)(*(long *)(piVar3 + 0x20) + 0xa3) == '\x01') {
    uVar1 = piVar3[0x11];
    for (uVar5 = 0; uVar5 != (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 = uVar5 + 1) {
      *(ulong *)(*(long *)(param_1 + 0x50) + uVar5 * 8) = *(long *)(piVar3 + 0x1c) + uVar5 * 0x40;
    }
  }
  return;
}



/* Entry: 0068f86c; end: 0068fa4f;  */

void FUN_0068f86c(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  int *piStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  piVar3 = param_2;
  if ((bRam0000000000b63cf0 & 1) == 0) goto LAB_0068fa14;
  while( true ) {
    param_2 = (int *)0xb63ce8;
    FUN_00567528(0xb63ce8);
    FUN_0068f7b8(param_1);
    FUN_00567fe4();
    if ((int)piVar3 != 0) {
      func_0x00693448();
      for (; piVar3 != (int *)0xb63ce8; piVar3 = piVar3 + 2) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)piVar3);
        if ((lVar6 != 0) && (param_2 = *(int **)(lVar6 + 0x18), *param_2 != 0xdd)) {
          FUN_00691640(param_2,*(long *)(param_1 + 0x20) + (long)piVar3,1);
        }
      }
    }
    FUN_006558fc();
    lVar7 = *(long *)(param_1 + 0x10);
    lVar6 = lVar7;
    _strlen(lVar7);
    piVar3 = param_2;
    FUN_00655a68(param_2,lVar7,lVar6);
    if (piVar3 != (int *)0x0) break;
    FUN_00533884(auStack_40,&UNK_009144ec);
    func_0x00693044();
    FUN_00776794(&piStack_68);
    func_0x0069308c();
LAB_0068fa14:
    iVar2 = 0xb63cf0;
    ___cxa_guard_acquire();
    piVar3 = param_2;
    if (iVar2 != 0) {
      ___cxa_atexit(FUN_00567000,0xb63ce8,0);
      ___cxa_guard_release(0xb63cf0);
    }
  }
  piVar4 = piVar3;
  FUN_006994c8();
  func_0x00693564();
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  plStack_60 = *(long **)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  piStack_68 = piVar4;
  while (unaff_x22 < piVar3[0xf]) {
    FUN_0069146c(&piStack_68,*(long *)(piVar3 + 0x18) + lVar7);
    func_0x00693558();
  }
  uVar1 = piVar3[0x10];
  for (lVar6 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar6 != 0;
      lVar6 = lVar6 + 0x58) {
    *plStack_60 = *(long *)(piVar3 + 0x1a) + lVar6;
    plStack_60 = plStack_60 + 1;
  }
  if (*(char *)(*(long *)(piVar3 + 0x20) + 0xa3) == '\x01') {
    uVar1 = piVar3[0x11];
    for (uVar5 = 0; uVar5 != (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 = uVar5 + 1) {
      *(ulong *)(*(long *)(param_1 + 0x50) + uVar5 * 8) = *(long *)(piVar3 + 0x1c) + uVar5 * 0x40;
    }
  }
  return;
}



/* Entry: 0068fa50; end: 0068fa83;  */

void FUN_0068fa50(long param_1)

{
  long lStack_18;
  
  if (**(int **)(param_1 + 0x18) != 0xdd) {
    lStack_18 = param_1;
    func_0x00692824(*(int **)(param_1 + 0x18),&lStack_18);
  }
  return;
}



/* Entry: 0068fa84; end: 0068fb0b;  */

void FUN_0068fa84(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  lVar1 = param_1;
  FUN_0068fa50();
  FUN_006558fc();
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = lVar3;
  _strlen(lVar3);
  FUN_00655a68(lVar1,lVar3,lVar2);
  func_0x00693564();
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  puStack_38 = (undefined1 *)&uStack_40;
  while (unaff_x22 < *(int *)(lVar1 + 0x3c)) {
    FUN_0069287c(*(long *)(lVar1 + 0x60) + lVar3,&puStack_38);
    func_0x00693558();
  }
  return;
}



/* Entry: 0068fb0c; end: 0068fbef;  */

undefined1 * FUN_0068fb0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  FUN_006916c4();
  if ((int)puVar1 == 10) {
    return (undefined1 *)*param_1;
  }
  FUN_0077670c(auStack_30,&UNK_009144fc,0x37b);
  puVar2 = auStack_30;
  func_0x00682f78(puVar2,&UNK_00914598);
  func_0x006651b8();
  FUN_0054060c();
  func_0x00544ce8();
  puStack_38 = &DAT_009103dd;
  FUN_0055130c();
  FUN_00537a9c();
  func_0x00544ce8();
  FUN_006916c4();
  puStack_40 = (&PTR_DAT_00a0ded0)[(ulong)param_1 & 0xffffffff];
  FUN_0055130c(puVar2,&puStack_40);
  puVar2 = auStack_30;
  FUN_005558a0();
  func_0x006967bc(*(undefined8 *)(puVar2 + 0x18),puVar2);
  return puVar2;
}



/* Entry: 0068fbf0; end: 0068fc97;  */

long FUN_0068fbf0(long param_1)

{
  func_0x006967bc(*(undefined8 *)(param_1 + 0x18),param_1);
  return param_1;
}



/* Entry: 0068fc98; end: 0069029b;  */

void FUN_0068fc98(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined8 extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  int iVar12;
  long extraout_x9;
  ulong uVar13;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  undefined8 extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar21;
  undefined8 unaff_x30;
  
  func_0x00692d80();
  do {
    plVar9 = unaff_x19 + -1;
LAB_0068fcd0:
    uVar10 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    cVar5 = SBORROW8(uVar10,5);
    cVar6 = (long)(uVar10 - 5) < 0;
    switch(uVar10) {
    case 0:
    case 1:
      goto LAB_00690288;
    case 2:
      func_0x00692c74(unaff_x19[-1]);
      if (cVar6 != cVar5) {
        *unaff_x20 = extraout_x8_04;
        unaff_x19[-1] = extraout_x9;
      }
      goto LAB_00690288;
    case 3:
      plVar7 = unaff_x20 + 1;
      func_0x00693570();
      lVar17 = *plVar7;
      lVar11 = *unaff_x20;
      iVar12 = *(int *)(lVar17 + 4);
      iVar2 = *(int *)(lVar11 + 4);
      lVar16 = *plVar9;
      iVar3 = *(int *)(lVar16 + 4);
      if (iVar12 < iVar2) {
        if (iVar3 < iVar12) {
          *unaff_x20 = lVar16;
        }
        else {
          *unaff_x20 = lVar17;
          *plVar7 = lVar11;
          if (iVar2 <= *(int *)(*plVar9 + 4)) {
            return;
          }
          *plVar7 = *plVar9;
        }
        *plVar9 = lVar11;
      }
      else {
        cVar5 = SBORROW4(iVar3,iVar12);
        cVar6 = iVar3 - iVar12 < 0;
        if (iVar3 < iVar12) {
          *plVar7 = lVar16;
          *plVar9 = lVar17;
          func_0x00692c74(*plVar7);
          if (cVar6 != cVar5) {
            *unaff_x20 = extraout_x8_05;
            *plVar7 = extraout_x9_00;
            return;
          }
        }
      }
      return;
    case 4:
      func_0x00693570(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,plVar9);
      func_0x00692d40();
      FUN_0069029c();
      func_0x00692c74(*param_3);
      if (cVar6 != cVar5) {
        *plVar9 = extraout_x8_06;
        *param_3 = extraout_x9_01;
        func_0x00692c74(*plVar9);
        if (cVar6 != cVar5) {
          *unaff_x19 = extraout_x8_07;
          *plVar9 = extraout_x9_02;
          func_0x00692c74(*unaff_x19);
          if (cVar6 != cVar5) {
            *unaff_x20 = extraout_x8_08;
            *unaff_x19 = extraout_x9_03;
          }
        }
      }
      return;
    case 5:
      plVar7 = plVar9;
      func_0x00693570(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,unaff_x20 + 3);
      func_0x00692d40();
      FUN_00690324();
      func_0x00692c74(*plVar7);
      if (cVar6 != cVar5) {
        *param_3 = extraout_x8_09;
        *plVar7 = extraout_x9_04;
        func_0x00692c74(*param_3);
        if (cVar6 != cVar5) {
          *plVar9 = extraout_x8_10;
          *param_3 = extraout_x9_05;
          func_0x00692c74(*plVar9);
          if (cVar6 != cVar5) {
            *unaff_x19 = extraout_x8_11;
            *plVar9 = extraout_x9_06;
            func_0x00692c74(*unaff_x19);
            if (cVar6 != cVar5) {
              *unaff_x20 = extraout_x8_12;
              *unaff_x19 = extraout_x9_07;
            }
          }
        }
      }
      return;
    }
    if ((long)uVar10 < 0x18) {
      if ((param_4 & 1) == 0) {
        plVar9 = unaff_x20;
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            unaff_x20 = unaff_x20 + 1;
            plVar7 = plVar9 + 1;
            if (plVar7 == unaff_x19) break;
            lVar11 = *plVar9;
            lVar17 = plVar9[1];
            iVar12 = *(int *)(lVar17 + 4);
            plVar14 = unaff_x20;
            plVar9 = plVar7;
            if (iVar12 < *(int *)(lVar11 + 4)) {
              do {
                *plVar14 = lVar11;
                lVar11 = plVar14[-2];
                plVar14 = plVar14 + -1;
              } while (iVar12 < *(int *)(lVar11 + 4));
              *plVar14 = lVar17;
            }
          }
        }
        break;
      }
      if (unaff_x20 == unaff_x19) break;
      lVar11 = 8;
      plVar9 = unaff_x20;
      goto LAB_0068ffe8;
    }
    if (param_3 == (undefined8 *)0x0) {
      if (unaff_x20 == unaff_x19) break;
      uVar13 = uVar10 - 2 >> 1;
      uVar15 = uVar13;
      goto LAB_00690064;
    }
    plVar7 = unaff_x20 + (uVar10 >> 1);
    if (uVar10 < 0x81) {
      func_0x00693374(plVar7,unaff_x20);
    }
    else {
      func_0x00693374(unaff_x20,plVar7);
      FUN_0069029c(unaff_x20 + 1,plVar7 + -1,unaff_x19 + -2);
      FUN_0069029c(unaff_x20 + 2,plVar7 + 1,unaff_x19 + -3);
      FUN_0069029c(plVar7 + -1,plVar7,plVar7 + 1);
      lVar11 = *unaff_x20;
      *unaff_x20 = *plVar7;
      *plVar7 = lVar11;
    }
    param_3 = (undefined8 *)((long)param_3 + -1);
    lVar11 = *unaff_x20;
    if ((param_4 & 1) == 0) {
      iVar2 = *(int *)(unaff_x20[-1] + 4);
      iVar12 = *(int *)(lVar11 + 4);
      cVar5 = SBORROW4(iVar2,iVar12);
      cVar6 = iVar2 - iVar12 < 0;
      if (iVar12 <= iVar2) {
        func_0x006934c4();
        plVar7 = unaff_x20;
        if (cVar6 == cVar5) {
          lVar11 = extraout_x8;
          plVar14 = unaff_x20 + 1;
          do {
            plVar7 = plVar14;
            cVar5 = SBORROW8((long)plVar7,(long)unaff_x19);
            cVar6 = (long)plVar7 - (long)unaff_x19 < 0;
            if (unaff_x19 <= plVar7) break;
            func_0x00693038();
            lVar11 = extraout_x8_01;
            plVar14 = extraout_x10;
          } while (cVar6 == cVar5);
        }
        else {
          do {
            plVar7 = plVar7 + 1;
            func_0x006934c4();
            lVar11 = extraout_x8_00;
          } while (cVar6 == cVar5);
        }
        cVar5 = SBORROW8((long)plVar7,(long)unaff_x19);
        cVar6 = (long)plVar7 - (long)unaff_x19 < 0;
        plVar14 = unaff_x19;
        if (plVar7 < unaff_x19) {
          do {
            func_0x00693038();
            lVar11 = extraout_x8_02;
            plVar14 = extraout_x10_00;
          } while (cVar6 != cVar5);
        }
        while( true ) {
          cVar5 = SBORROW8((long)plVar7,(long)plVar14);
          cVar6 = (long)plVar7 - (long)plVar14 < 0;
          if (plVar14 <= plVar7) break;
          lVar11 = *plVar7;
          *plVar7 = *plVar14;
          *plVar14 = lVar11;
          do {
            plVar7 = plVar7 + 1;
            func_0x00693038();
          } while (cVar6 == cVar5);
          do {
            func_0x00693038();
            lVar11 = extraout_x8_03;
            plVar14 = extraout_x10_01;
          } while (cVar6 != cVar5);
        }
        plVar14 = plVar7 + -1;
        if (unaff_x20 != plVar14) {
          *unaff_x20 = *plVar14;
        }
        param_4 = 0;
        *plVar14 = lVar11;
        unaff_x20 = plVar7;
        goto LAB_0068fcd0;
      }
    }
    else {
      iVar12 = *(int *)(lVar11 + 4);
    }
    lVar17 = 0;
    do {
      lVar16 = *(long *)((long)unaff_x20 + lVar17 + 8);
      lVar17 = lVar17 + 8;
    } while (*(int *)(lVar16 + 4) < iVar12);
    plVar7 = (long *)((long)unaff_x20 + lVar17);
    plVar14 = unaff_x19;
    plVar21 = plVar7;
    if (lVar17 == 8) {
      do {
        plVar8 = plVar14;
        if (plVar14 <= plVar7) break;
        plVar14 = plVar14 + -1;
        plVar8 = plVar14;
      } while (iVar12 <= *(int *)(*plVar14 + 4));
    }
    else {
      do {
        plVar14 = plVar14 + -1;
        plVar8 = plVar14;
      } while (iVar12 <= *(int *)(*plVar14 + 4));
    }
    while (plVar21 < plVar14) {
      *plVar21 = *plVar14;
      *plVar14 = lVar16;
      do {
        plVar21 = plVar21 + 1;
        lVar16 = *plVar21;
      } while (*(int *)(lVar16 + 4) < iVar12);
      do {
        plVar14 = plVar14 + -1;
      } while (iVar12 <= *(int *)(*plVar14 + 4));
    }
    plVar14 = plVar21 + -1;
    if (unaff_x20 != plVar14) {
      *unaff_x20 = *plVar14;
    }
    *plVar14 = lVar11;
    if (plVar7 < plVar8) goto LAB_0068fe68;
    plVar7 = unaff_x20;
    FUN_00690414(unaff_x20,plVar14);
    plVar8 = plVar21;
    FUN_00690414(plVar21,unaff_x19);
    if ((int)plVar8 == 0) goto code_r0x0068fe64;
    unaff_x19 = plVar14;
  } while (((ulong)plVar7 & 1) == 0);
  goto LAB_00690288;
LAB_0068ffe8:
  if (plVar9 + 1 == unaff_x19) goto LAB_00690288;
  lVar17 = *plVar9;
  lVar16 = plVar9[1];
  iVar12 = *(int *)(lVar16 + 4);
  lVar18 = lVar11;
  if (iVar12 < *(int *)(lVar17 + 4)) {
    do {
      *(long *)((long)unaff_x20 + lVar18) = lVar17;
      lVar4 = lVar18 + -8;
      plVar7 = unaff_x20;
      if (lVar4 == 0) goto LAB_0069003c;
      lVar17 = *(long *)((long)unaff_x20 + lVar18 + -0x10);
      lVar18 = lVar4;
    } while (iVar12 < *(int *)(lVar17 + 4));
    plVar7 = (long *)((long)unaff_x20 + lVar4);
LAB_0069003c:
    *plVar7 = lVar16;
  }
  lVar11 = lVar11 + 8;
  plVar9 = plVar9 + 1;
  goto LAB_0068ffe8;
code_r0x0068fe64:
  unaff_x20 = plVar21;
  if (((ulong)plVar7 & 1) == 0) {
LAB_0068fe68:
    func_0x006934dc();
    FUN_0068fc98();
    param_4 = 0;
    unaff_x20 = plVar21;
  }
  goto LAB_0068fcd0;
LAB_00690064:
  do {
    if ((long)uVar15 <= (long)uVar13) {
      uVar19 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      plVar9 = unaff_x20 + uVar19;
      uVar1 = uVar15 * 2 + 2;
      lVar17 = *plVar9;
      plVar7 = plVar9;
      lVar11 = lVar17;
      uVar20 = uVar19;
      if ((long)uVar1 < (long)uVar10) {
        lVar11 = plVar9[1];
        plVar7 = plVar9 + 1;
        uVar20 = uVar1;
        if (*(int *)(lVar11 + 4) <= *(int *)(lVar17 + 4)) {
          plVar7 = plVar9;
          lVar11 = lVar17;
          uVar20 = uVar19;
        }
      }
      lVar17 = unaff_x20[uVar15];
      iVar12 = *(int *)(lVar17 + 4);
      plVar9 = unaff_x20 + uVar15;
      if (iVar12 <= *(int *)(lVar11 + 4)) {
        do {
          plVar14 = plVar7;
          *plVar9 = lVar11;
          if ((long)uVar13 < (long)uVar20) break;
          uVar19 = uVar20 << 1 | 1;
          plVar9 = unaff_x20 + uVar19;
          uVar1 = uVar20 * 2 + 2;
          lVar16 = *plVar9;
          plVar7 = plVar9;
          lVar11 = lVar16;
          uVar20 = uVar19;
          if ((long)uVar1 < (long)uVar10) {
            lVar11 = plVar9[1];
            plVar7 = plVar9 + 1;
            uVar20 = uVar1;
            if (*(int *)(lVar11 + 4) <= *(int *)(lVar16 + 4)) {
              plVar7 = plVar9;
              lVar11 = lVar16;
              uVar20 = uVar19;
            }
          }
          plVar9 = plVar14;
        } while (iVar12 <= *(int *)(lVar11 + 4));
        *plVar14 = lVar17;
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  for (; 1 < (long)uVar10; uVar10 = uVar10 - 1) {
    lVar11 = *unaff_x20;
    plVar9 = unaff_x20;
    uVar15 = 0;
    do {
      plVar14 = plVar9 + uVar15 + 1;
      lVar16 = *plVar14;
      uVar1 = uVar15 << 1 | 1;
      uVar13 = uVar15 * 2 + 2;
      plVar7 = plVar14;
      lVar17 = lVar16;
      uVar19 = uVar1;
      if ((long)uVar13 < (long)uVar10) {
        lVar17 = plVar9[uVar15 + 2];
        plVar7 = plVar9 + uVar15 + 2;
        uVar19 = uVar13;
        if (*(int *)(lVar17 + 4) <= *(int *)(lVar16 + 4)) {
          plVar7 = plVar14;
          lVar17 = lVar16;
          uVar19 = uVar1;
        }
      }
      *plVar9 = lVar17;
      plVar9 = plVar7;
      uVar15 = uVar19;
    } while ((long)uVar19 <= (long)(uVar10 - 2 >> 1));
    unaff_x19 = unaff_x19 + -1;
    if (plVar7 == unaff_x19) {
      *plVar7 = lVar11;
    }
    else {
      *plVar7 = *unaff_x19;
      *unaff_x19 = lVar11;
      lVar11 = (long)plVar7 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar11) {
        uVar15 = lVar11 - 2U >> 1;
        lVar17 = unaff_x20[uVar15];
        lVar11 = *plVar7;
        iVar12 = *(int *)(lVar11 + 4);
        plVar9 = unaff_x20 + uVar15;
        if (*(int *)(lVar17 + 4) < iVar12) {
          do {
            plVar14 = plVar9;
            *plVar7 = lVar17;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            lVar17 = unaff_x20[uVar15];
            plVar7 = plVar14;
            plVar9 = unaff_x20 + uVar15;
          } while (*(int *)(lVar17 + 4) < iVar12);
          *plVar14 = lVar11;
        }
      }
    }
  }
LAB_00690288:
  func_0x00693570(unaff_x30);
  return;
}



/* Entry: 0069029c; end: 00690323;  */

void FUN_0069029c(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x9;
  long lVar8;
  
  lVar7 = *param_2;
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar7 + 4);
  iVar2 = *(int *)(lVar6 + 4);
  lVar8 = *param_3;
  iVar3 = *(int *)(lVar8 + 4);
  if (iVar1 < iVar2) {
    if (iVar3 < iVar1) {
      *param_1 = lVar8;
    }
    else {
      *param_1 = lVar7;
      *param_2 = lVar6;
      if (iVar2 <= *(int *)(*param_3 + 4)) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = lVar6;
  }
  else {
    cVar4 = SBORROW4(iVar3,iVar1);
    cVar5 = iVar3 - iVar1 < 0;
    if (iVar3 < iVar1) {
      *param_2 = lVar8;
      *param_3 = lVar7;
      func_0x00692c74(*param_2);
      if (cVar5 != cVar4) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 00690324; end: 0069038b;  */

void FUN_00690324(void)

{
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00692d40();
  FUN_0069029c();
  func_0x00692c74(*unaff_x22);
  if (in_NG != in_OV) {
    *unaff_x21 = extraout_x8;
    *unaff_x22 = extraout_x9;
    func_0x00692c74(*unaff_x21);
    if (in_NG != in_OV) {
      *unaff_x19 = extraout_x8_00;
      *unaff_x21 = extraout_x9_00;
      func_0x00692c74(*unaff_x19);
      if (in_NG != in_OV) {
        *unaff_x20 = extraout_x8_01;
        *unaff_x19 = extraout_x9_01;
      }
    }
  }
  return;
}



/* Entry: 0069038c; end: 00690413;  */

void FUN_0069038c(void)

{
  char in_NG;
  char in_OV;
  undefined8 *in_x4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x00692d40();
  FUN_00690324();
  func_0x00692c74(*in_x4);
  if (in_NG != in_OV) {
    *unaff_x22 = extraout_x8;
    *in_x4 = extraout_x9;
    func_0x00692c74(*unaff_x22);
    if (in_NG != in_OV) {
      *unaff_x21 = extraout_x8_00;
      *unaff_x22 = extraout_x9_00;
      func_0x00692c74(*unaff_x21);
      if (in_NG != in_OV) {
        *unaff_x19 = extraout_x8_01;
        *unaff_x21 = extraout_x9_01;
        func_0x00692c74(*unaff_x19);
        if (in_NG != in_OV) {
          *unaff_x20 = extraout_x8_02;
          *unaff_x19 = extraout_x9_02;
        }
      }
    }
  }
  return;
}



/* Entry: 00690414; end: 00690563;  */

void FUN_00690414(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x9;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar12;
  
  func_0x00693204();
  lVar6 = param_2 - param_1 >> 3;
  cVar3 = SBORROW8(lVar6,5);
  cVar4 = lVar6 + -5 < 0;
  switch(lVar6) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00692c74(unaff_x20[-1],1);
    if (cVar4 != cVar3) {
      *unaff_x19 = extraout_x8;
      unaff_x20[-1] = extraout_x9;
    }
    break;
  case 3:
    FUN_0069029c();
    break;
  case 4:
    FUN_00690324();
    break;
  case 5:
    FUN_0069038c();
    break;
  default:
    func_0x00693374();
    iVar5 = 0;
    lVar6 = 0x18;
    plVar9 = unaff_x19 + 3;
    plVar12 = unaff_x19 + 2;
    while (plVar7 = plVar9, plVar7 != unaff_x20) {
      lVar8 = *plVar7;
      lVar10 = *plVar12;
      iVar1 = *(int *)(lVar8 + 4);
      lVar11 = lVar6;
      if (iVar1 < *(int *)(lVar10 + 4)) {
        do {
          *(long *)((long)unaff_x19 + lVar11) = lVar10;
          lVar2 = lVar11 + -8;
          plVar9 = unaff_x19;
          if (lVar2 == 0) goto LAB_00690514;
          lVar10 = *(long *)((long)unaff_x19 + lVar11 + -0x10);
          lVar11 = lVar2;
        } while (iVar1 < *(int *)(lVar10 + 4));
        plVar9 = (long *)((long)unaff_x19 + lVar2);
LAB_00690514:
        *plVar9 = lVar8;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          return;
        }
      }
      lVar6 = lVar6 + 8;
      plVar12 = plVar7;
      plVar9 = plVar7 + 1;
    }
  }
  return;
}



/* Entry: 00690564; end: 00690637;  */

ulong * FUN_00690564(ulong *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((*param_2 & 1) == 0) || (uVar4 = param_2[1], uVar4 == 0)) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
  }
  else {
    piVar1 = (int *)(uVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = 1;
    param_1[1] = uVar4;
    if (1 < *param_2) {
      FUN_0055ae58(param_1,param_2,8);
    }
  }
  return param_1;
}



/* Entry: 00690638; end: 006906e3;  */

undefined8 * FUN_00690638(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  lVar2 = param_2;
  FUN_00699298(param_2);
  FUN_0068efa4(lVar2,param_2,param_3);
  param_1[3] = lVar2;
  func_0x006931a0();
  func_0x0069327c();
  if ((bool)in_ZR) {
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
  }
  else {
    uVar3 = 0;
  }
  FUN_00656c60(uVar3);
  puVar4 = param_1 + 4;
  FUN_006906e4(puVar4,uVar3);
  func_0x006931a0();
  func_0x0069327c();
  if ((bool)in_ZR) {
    iVar1 = (int)puVar4[7] + 0x58;
  }
  else {
    iVar1 = 0;
  }
  FUN_00656c60();
  *(int *)(param_1 + 9) = iVar1;
  return param_1;
}



/* Entry: 006906e4; end: 0069072b;  */

void FUN_006906e4(undefined8 *param_1,int param_2)

{
  if (*(int *)(param_1 + 3) != param_2) {
    if (*(int *)(param_1 + 3) == 9) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    *(int *)(param_1 + 3) = param_2;
    if (param_2 == 9) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
  }
  return;
}



/* Entry: 0069072c; end: 0069075f;  */

void FUN_0069072c(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 9) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 00690760; end: 006907b7;  */

long * FUN_00690760(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x00693204();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3b != 0) {
      FUN_0040cee8();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0x20;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x20;
  return unaff_x19;
}



/* Entry: 006907b8; end: 006907f7;  */

long * FUN_006907b8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x20;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 006907f8; end: 00690f2b;  */

void FUN_006907f8(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w9;
  long *plVar14;
  long *extraout_x9;
  ulong uVar15;
  long *extraout_x9_00;
  ulong extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  ulong uVar16;
  long lVar17;
  ulong extraout_x11;
  ulong *puVar18;
  ulong *puVar19;
  long extraout_x12;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x30;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  
  plVar11 = param_3;
  func_0x00692d80();
  uVar12 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  do {
    plVar10 = unaff_x19 + -4;
LAB_00690844:
    uVar13 = (long)unaff_x19 - (long)unaff_x20 >> 5;
    cVar5 = SBORROW8(uVar13,5);
    cVar6 = (long)(uVar13 - 5) < 0;
    uVar7 = uVar13 == 5;
    switch(uVar13) {
    case 0:
    case 1:
      goto LAB_00690f08;
    case 2:
      plVar10 = unaff_x19 + -4;
      uVar7 = *(int *)(*plVar10 + 4) == *(int *)(*unaff_x20 + 4);
      if (*(int *)(*plVar10 + 4) < *(int *)(*unaff_x20 + 4)) {
        lVar28 = unaff_x20[1];
        lVar17 = *unaff_x20;
        lVar31 = unaff_x20[3];
        lVar29 = unaff_x20[2];
        lVar22 = *plVar10;
        lVar33 = unaff_x19[-1];
        lVar27 = unaff_x19[-2];
        unaff_x20[1] = unaff_x19[-3];
        *unaff_x20 = lVar22;
        unaff_x20[3] = lVar33;
        unaff_x20[2] = lVar27;
        unaff_x19[-3] = lVar28;
        *plVar10 = lVar17;
        unaff_x19[-1] = lVar31;
        unaff_x19[-2] = lVar29;
      }
      goto LAB_00690f08;
    case 3:
      func_0x00692bec(uVar12);
      if (!(bool)uVar7) goto LAB_00690f28;
      param_2 = unaff_x20 + 4;
      func_0x0069328c();
      goto code_r0x00690f2c;
    case 4:
      func_0x00692bec(uVar12);
      if ((bool)uVar7) {
        func_0x0069328c(unaff_x20,unaff_x20 + 4,unaff_x20 + 8,plVar10);
        func_0x00692d40();
        FUN_00690f2c();
        func_0x00693314();
        if (((cVar6 != cVar5) && (func_0x00692fc0(), cVar6 != cVar5)) &&
           (func_0x00692f90(), cVar6 != cVar5)) {
          func_0x006934fc();
        }
        return;
      }
      goto LAB_00690f28;
    case 5:
      func_0x00692bec(uVar12);
      if ((bool)uVar7) {
        func_0x0069328c(unaff_x20,unaff_x20 + 4,unaff_x20 + 8,unaff_x20 + 0xc);
        func_0x00692d40();
        FUN_00690fec();
        iVar4 = *(int *)(*plVar10 + 4);
        iVar2 = *(int *)(*param_3 + 4);
        cVar5 = SBORROW4(iVar4,iVar2);
        cVar6 = iVar4 - iVar2 < 0;
        if (iVar4 < iVar2) {
          lVar29 = param_3[1];
          lVar28 = *param_3;
          lVar22 = param_3[3];
          lVar17 = param_3[2];
          lVar33 = *plVar10;
          lVar31 = plVar10[3];
          lVar27 = plVar10[2];
          param_3[1] = plVar10[1];
          *param_3 = lVar33;
          param_3[3] = lVar31;
          param_3[2] = lVar27;
          plVar10[1] = lVar29;
          *plVar10 = lVar28;
          plVar10[3] = lVar22;
          plVar10[2] = lVar17;
          func_0x00693314();
          if (((cVar6 != cVar5) && (func_0x00692fc0(), cVar6 != cVar5)) &&
             (func_0x00692f90(), cVar6 != cVar5)) {
            func_0x006934fc();
          }
        }
        return;
      }
      goto LAB_00690f28;
    }
    if ((long)uVar13 < 0x18) {
      uVar7 = unaff_x20 == unaff_x19;
      if ((param_4 & 1) == 0) {
        plVar10 = unaff_x20;
        if (!(bool)uVar7) {
          while( true ) {
            unaff_x20 = unaff_x20 + 4;
            uVar7 = 1;
            if (plVar10 + 4 == unaff_x19) break;
            lVar17 = plVar10[4];
            lVar22 = *plVar10;
            plVar10 = plVar10 + 4;
            if (*(int *)(lVar17 + 4) < *(int *)(lVar22 + 4)) {
              do {
                unaff_x20[1] = unaff_x20[-3];
                *unaff_x20 = unaff_x20[-4];
                unaff_x20[3] = unaff_x20[-1];
                unaff_x20[2] = unaff_x20[-2];
                plVar10 = unaff_x20 + -8;
                unaff_x20 = unaff_x20 + -4;
              } while (*(int *)(lVar17 + 4) < *(int *)(*plVar10 + 4));
              func_0x006932a8();
              plVar10 = extraout_x9_00;
              unaff_x20 = extraout_x8_01;
            }
          }
        }
        break;
      }
      if ((bool)uVar7) break;
      lVar17 = 0;
      plVar10 = unaff_x20;
      goto LAB_00690bc4;
    }
    if (param_3 == (long *)0x0) {
      uVar7 = 1;
      if (unaff_x20 == unaff_x19) break;
      uVar15 = uVar13 - 2 >> 1;
      uVar16 = uVar15;
      goto LAB_00690c5c;
    }
    param_1 = unaff_x20 + (uVar13 >> 1) * 4;
    if (uVar13 < 0x81) {
      param_2 = unaff_x20;
      func_0x0069336c();
    }
    else {
      func_0x0069336c(unaff_x20,param_1);
      plVar8 = param_1 + -4;
      FUN_00690f2c(unaff_x20 + 4,plVar8,unaff_x19 + -8);
      FUN_00690f2c(unaff_x20 + 8,param_1 + 4,unaff_x19 + -0xc);
      plVar11 = param_1 + 4;
      param_2 = param_1;
      FUN_00690f2c();
      lVar28 = unaff_x20[1];
      lVar17 = *unaff_x20;
      lVar33 = unaff_x20[3];
      lVar27 = unaff_x20[2];
      lVar31 = *param_1;
      lVar29 = param_1[3];
      lVar22 = param_1[2];
      unaff_x20[1] = param_1[1];
      *unaff_x20 = lVar31;
      unaff_x20[3] = lVar29;
      unaff_x20[2] = lVar22;
      param_1[1] = lVar28;
      *param_1 = lVar17;
      param_1[3] = lVar33;
      param_1[2] = lVar27;
      param_1 = plVar8;
    }
    param_3 = (long *)((long)param_3 - 1);
    if ((param_4 & 1) == 0) {
      iVar4 = *(int *)(unaff_x20[-4] + 4);
      iVar2 = *(int *)(*unaff_x20 + 4);
      cVar5 = SBORROW4(iVar4,iVar2);
      cVar6 = iVar4 - iVar2 < 0;
      if (iVar2 <= iVar4) {
        func_0x0069347c();
        func_0x006934c4();
        plVar8 = unaff_x20;
        if (cVar6 == cVar5) {
          plVar14 = unaff_x20 + 4;
          do {
            plVar8 = plVar14;
            cVar5 = SBORROW8((long)plVar8,(long)unaff_x19);
            cVar6 = (long)plVar8 - (long)unaff_x19 < 0;
            if (unaff_x19 <= plVar8) break;
            func_0x00693038();
            plVar14 = extraout_x10_00;
          } while (cVar6 == cVar5);
        }
        else {
          do {
            plVar8 = plVar8 + 4;
            func_0x006934c4();
          } while (cVar6 == cVar5);
        }
        cVar5 = SBORROW8((long)plVar8,(long)unaff_x19);
        cVar6 = (long)plVar8 - (long)unaff_x19 < 0;
        plVar14 = unaff_x19;
        if (plVar8 < unaff_x19) {
          do {
            func_0x00693038();
            plVar14 = extraout_x10_01;
          } while (cVar6 != cVar5);
        }
        while( true ) {
          cVar5 = SBORROW8((long)plVar8,(long)plVar14);
          cVar6 = (long)plVar8 - (long)plVar14 < 0;
          if (plVar14 <= plVar8) break;
          lVar28 = plVar8[1];
          lVar17 = *plVar8;
          lVar31 = plVar8[3];
          lVar29 = plVar8[2];
          lVar22 = *plVar14;
          lVar33 = plVar14[3];
          lVar27 = plVar14[2];
          plVar8[1] = plVar14[1];
          *plVar8 = lVar22;
          plVar8[3] = lVar33;
          plVar8[2] = lVar27;
          plVar14[1] = lVar28;
          *plVar14 = lVar17;
          plVar14[3] = lVar31;
          plVar14[2] = lVar29;
          do {
            plVar8 = plVar8 + 4;
            func_0x00693038();
          } while (cVar6 == cVar5);
          do {
            func_0x00693038();
            plVar14 = extraout_x10_02;
          } while (cVar6 != cVar5);
        }
        if (unaff_x20 != plVar8 + -4) {
          lVar17 = plVar8[-4];
          lVar28 = plVar8[-1];
          lVar22 = plVar8[-2];
          unaff_x20[1] = plVar8[-3];
          *unaff_x20 = lVar17;
          unaff_x20[3] = lVar28;
          unaff_x20[2] = lVar22;
        }
        param_4 = 0;
        func_0x006932c0();
        unaff_x20 = plVar8;
        goto LAB_00690844;
      }
    }
    func_0x0069347c();
    lVar17 = extraout_x12;
    do {
      lVar22 = lVar17 + 0x20;
      lVar17 = lVar17 + 0x20;
    } while (*(int *)(*(long *)((long)unaff_x20 + lVar22) + 4) < extraout_w9);
    plVar8 = (long *)((long)unaff_x20 + lVar17);
    plVar14 = unaff_x19;
    if (lVar17 == 0x20) {
      do {
        if (plVar14 <= plVar8) break;
        plVar14 = plVar14 + -4;
      } while (extraout_w9 <= *(int *)(*plVar14 + 4));
    }
    else {
      do {
        plVar14 = plVar14 + -4;
      } while (extraout_w9 <= *(int *)(*plVar14 + 4));
    }
    while (plVar8 < plVar14) {
      lVar28 = plVar8[1];
      lVar17 = *plVar8;
      lVar31 = plVar8[3];
      lVar29 = plVar8[2];
      lVar22 = *plVar14;
      lVar33 = plVar14[3];
      lVar27 = plVar14[2];
      plVar8[1] = plVar14[1];
      *plVar8 = lVar22;
      plVar8[3] = lVar33;
      plVar8[2] = lVar27;
      plVar14[1] = lVar28;
      *plVar14 = lVar17;
      plVar14[3] = lVar31;
      plVar14[2] = lVar29;
      do {
        plVar8 = plVar8 + 4;
      } while (*(int *)(*plVar8 + 4) < *(int *)(extraout_x8 + 4));
      do {
        plVar14 = plVar14 + -4;
      } while (*(int *)(extraout_x8 + 4) <= *(int *)(*plVar14 + 4));
    }
    plVar14 = plVar8 + -4;
    if (unaff_x20 != plVar14) {
      lVar17 = *plVar14;
      lVar28 = plVar8[-1];
      lVar22 = plVar8[-2];
      unaff_x20[1] = plVar8[-3];
      *unaff_x20 = lVar17;
      unaff_x20[3] = lVar28;
      unaff_x20[2] = lVar22;
    }
    func_0x006932c0();
    uVar7 = extraout_x10 == extraout_x11;
    if (extraout_x10 < extraout_x11) goto LAB_006909f8;
    plVar9 = unaff_x20;
    FUN_006910b8(unaff_x20,plVar14);
    param_1 = plVar8;
    param_2 = unaff_x19;
    FUN_006910b8();
    if ((int)param_1 == 0) goto code_r0x006909f4;
    unaff_x19 = plVar14;
  } while (((ulong)plVar9 & 1) == 0);
  goto LAB_00690f08;
LAB_00690bc4:
  plVar8 = plVar10 + 4;
  uVar7 = 1;
  if (plVar8 == unaff_x19) goto LAB_00690f08;
  lVar22 = plVar10[4];
  if (*(int *)(lVar22 + 4) < *(int *)(*plVar10 + 4)) {
    do {
      puVar1 = (undefined8 *)((long)unaff_x20 + lVar17);
      puVar1[5] = puVar1[1];
      puVar1[4] = *puVar1;
      puVar1[7] = puVar1[3];
      puVar1[6] = puVar1[2];
      if (lVar17 == 0) break;
      lVar17 = lVar17 + -0x20;
    } while (*(int *)(lVar22 + 4) < *(int *)(puVar1[-4] + 4));
    func_0x006932a8();
    lVar17 = extraout_x8_00;
    plVar8 = extraout_x9;
  }
  lVar17 = lVar17 + 0x20;
  plVar10 = plVar8;
  goto LAB_00690bc4;
code_r0x006909f4:
  unaff_x20 = plVar8;
  if (((ulong)plVar9 & 1) == 0) {
LAB_006909f8:
    func_0x006934dc();
    FUN_006907f8();
    param_4 = 0;
    unaff_x20 = plVar8;
  }
  goto LAB_00690844;
LAB_00690c5c:
  do {
    if ((long)uVar16 <= (long)uVar15) {
      uVar23 = (uVar16 & 0x3fffffffffffffff) << 1 | 1;
      puVar21 = (ulong *)(unaff_x20 + uVar23 * 4);
      uVar20 = uVar16 * 2 + 2;
      if ((long)uVar20 < (long)uVar13) {
        uVar24 = puVar21[4];
        uVar3 = *(uint *)(uVar24 + 4);
        param_1 = (long *)(ulong)uVar3;
        puVar19 = puVar21 + 4;
        if ((int)uVar3 <= *(int *)(*puVar21 + 4)) {
          puVar19 = puVar21;
          uVar20 = uVar23;
          uVar24 = *puVar21;
        }
      }
      else {
        puVar19 = puVar21;
        uVar20 = uVar23;
        uVar24 = *puVar21;
      }
      puVar21 = (ulong *)(unaff_x20 + uVar16 * 4);
      uVar23 = *puVar21;
      if (*(int *)(uVar23 + 4) <= *(int *)(uVar24 + 4)) {
        uVar30 = puVar21[2];
        uVar25 = puVar21[1];
        uVar24 = puVar21[3];
        do {
          puVar18 = puVar19;
          uVar26 = *puVar18;
          uVar34 = puVar18[3];
          uVar32 = puVar18[2];
          puVar21[1] = puVar18[1];
          *puVar21 = uVar26;
          puVar21[3] = uVar34;
          puVar21[2] = uVar32;
          if ((long)uVar15 < (long)uVar20) break;
          uVar26 = uVar20 << 1 | 1;
          puVar21 = (ulong *)(unaff_x20 + uVar26 * 4);
          uVar20 = uVar20 * 2 + 2;
          if ((long)uVar20 < (long)uVar13) {
            param_1 = (long *)puVar21[4];
            uVar3 = *(uint *)((long)*puVar21 + 4);
            param_2 = (long *)(ulong)uVar3;
            plVar11 = (long *)(ulong)*(uint *)((long)param_1 + 4);
            puVar19 = puVar21 + 4;
            plVar10 = param_1;
            if ((int)*(uint *)((long)param_1 + 4) <= (int)uVar3) {
              puVar19 = puVar21;
              uVar20 = uVar26;
              plVar10 = (long *)*puVar21;
            }
          }
          else {
            puVar19 = puVar21;
            uVar20 = uVar26;
            plVar10 = (long *)*puVar21;
          }
          puVar21 = puVar18;
        } while (*(int *)(uVar23 + 4) <= *(int *)((long)plVar10 + 4));
        *puVar18 = uVar23;
        puVar18[3] = uVar24;
        puVar18[2] = uVar30;
        puVar18[1] = uVar25;
      }
    }
    uVar16 = uVar16 - 1;
  } while (-1 < (long)uVar16);
  while( true ) {
    uVar7 = uVar13 - 2 == 0;
    if ((long)uVar13 < 2) break;
    lVar22 = unaff_x20[1];
    lVar17 = *unaff_x20;
    lVar29 = unaff_x20[3];
    lVar28 = unaff_x20[2];
    plVar10 = unaff_x20;
    uVar16 = 0;
    do {
      uVar20 = uVar16 << 1 | 1;
      uVar15 = uVar16 * 2 + 2;
      plVar8 = plVar10 + uVar16 * 4 + 4;
      uVar23 = uVar20;
      if (((long)uVar15 < (long)uVar13) &&
         (plVar8 = plVar10 + uVar16 * 4 + 8, uVar23 = uVar15,
         *(int *)(plVar10[uVar16 * 4 + 8] + 4) <= *(int *)(plVar10[uVar16 * 4 + 4] + 4))) {
        plVar8 = plVar10 + uVar16 * 4 + 4;
        uVar23 = uVar20;
      }
      lVar27 = *plVar8;
      lVar33 = plVar8[3];
      lVar31 = plVar8[2];
      plVar10[1] = plVar8[1];
      *plVar10 = lVar27;
      plVar10[3] = lVar33;
      plVar10[2] = lVar31;
      plVar10 = plVar8;
      uVar16 = uVar23;
    } while ((long)uVar23 <= (long)(uVar13 - 2 >> 1));
    plVar10 = unaff_x19 + -4;
    if (plVar8 == plVar10) {
      plVar8[1] = lVar22;
      *plVar8 = lVar17;
      plVar8[3] = lVar29;
      plVar8[2] = lVar28;
    }
    else {
      lVar27 = *plVar10;
      lVar33 = unaff_x19[-1];
      lVar31 = unaff_x19[-2];
      plVar8[1] = unaff_x19[-3];
      *plVar8 = lVar27;
      plVar8[3] = lVar33;
      plVar8[2] = lVar31;
      unaff_x19[-3] = lVar22;
      *plVar10 = lVar17;
      unaff_x19[-1] = lVar29;
      unaff_x19[-2] = lVar28;
      lVar17 = (long)plVar8 + (0x20 - (long)unaff_x20) >> 5;
      if (1 < lVar17) {
        uVar16 = lVar17 - 2U >> 1;
        lVar17 = *plVar8;
        if (*(int *)(unaff_x20[uVar16 * 4] + 4) < *(int *)(lVar17 + 4)) {
          lVar29 = plVar8[2];
          lVar28 = plVar8[1];
          lVar22 = plVar8[3];
          plVar14 = unaff_x20 + uVar16 * 4;
          do {
            plVar9 = plVar14;
            lVar27 = *plVar9;
            lVar33 = plVar9[3];
            lVar31 = plVar9[2];
            plVar8[1] = plVar9[1];
            *plVar8 = lVar27;
            plVar8[3] = lVar33;
            plVar8[2] = lVar31;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            plVar8 = plVar9;
            plVar14 = unaff_x20 + uVar16 * 4;
          } while (*(int *)(unaff_x20[uVar16 * 4] + 4) < *(int *)(lVar17 + 4));
          *plVar9 = lVar17;
          plVar9[3] = lVar22;
          plVar9[2] = lVar29;
          plVar9[1] = lVar28;
        }
      }
    }
    uVar13 = uVar13 - 1;
    unaff_x19 = plVar10;
  }
LAB_00690f08:
  func_0x00692bec(uVar12);
  if ((bool)uVar7) {
    func_0x0069328c(unaff_x30);
    return;
  }
LAB_00690f28:
  plVar10 = plVar11;
  unaff_x20 = param_1;
  ___stack_chk_fail();
code_r0x00690f2c:
  iVar4 = *(int *)(*param_2 + 4);
  if (iVar4 < *(int *)(*unaff_x20 + 4)) {
    if (*(int *)(*plVar10 + 4) < iVar4) {
      lVar29 = unaff_x20[1];
      lVar28 = *unaff_x20;
      lVar22 = unaff_x20[3];
      lVar17 = unaff_x20[2];
      lVar33 = *plVar10;
      lVar31 = plVar10[3];
      lVar27 = plVar10[2];
      unaff_x20[1] = plVar10[1];
      *unaff_x20 = lVar33;
      unaff_x20[3] = lVar31;
      unaff_x20[2] = lVar27;
    }
    else {
      lVar29 = unaff_x20[1];
      lVar28 = *unaff_x20;
      lVar22 = unaff_x20[3];
      lVar17 = unaff_x20[2];
      lVar33 = *param_2;
      lVar31 = param_2[3];
      lVar27 = param_2[2];
      unaff_x20[1] = param_2[1];
      *unaff_x20 = lVar33;
      unaff_x20[3] = lVar31;
      unaff_x20[2] = lVar27;
      param_2[1] = lVar29;
      *param_2 = lVar28;
      param_2[3] = lVar22;
      param_2[2] = lVar17;
      if (*(int *)(*param_2 + 4) <= *(int *)(*plVar10 + 4)) {
        return;
      }
      lVar29 = param_2[1];
      lVar28 = *param_2;
      lVar22 = param_2[3];
      lVar17 = param_2[2];
      lVar33 = *plVar10;
      lVar31 = plVar10[3];
      lVar27 = plVar10[2];
      param_2[1] = plVar10[1];
      *param_2 = lVar33;
      param_2[3] = lVar31;
      param_2[2] = lVar27;
    }
    plVar10[1] = lVar29;
    *plVar10 = lVar28;
    plVar10[3] = lVar22;
    plVar10[2] = lVar17;
  }
  else if (*(int *)(*plVar10 + 4) < iVar4) {
    lVar29 = param_2[1];
    lVar28 = *param_2;
    lVar22 = param_2[3];
    lVar17 = param_2[2];
    lVar33 = *plVar10;
    lVar31 = plVar10[3];
    lVar27 = plVar10[2];
    param_2[1] = plVar10[1];
    *param_2 = lVar33;
    param_2[3] = lVar31;
    param_2[2] = lVar27;
    plVar10[1] = lVar29;
    *plVar10 = lVar28;
    plVar10[3] = lVar22;
    plVar10[2] = lVar17;
    if (*(int *)(*param_2 + 4) < *(int *)(*unaff_x20 + 4)) {
      lVar29 = unaff_x20[1];
      lVar28 = *unaff_x20;
      lVar22 = unaff_x20[3];
      lVar17 = unaff_x20[2];
      lVar33 = *param_2;
      lVar31 = param_2[3];
      lVar27 = param_2[2];
      unaff_x20[1] = param_2[1];
      *unaff_x20 = lVar33;
      unaff_x20[3] = lVar31;
      unaff_x20[2] = lVar27;
      param_2[1] = lVar29;
      *param_2 = lVar28;
      param_2[3] = lVar22;
      param_2[2] = lVar17;
    }
  }
  return;
}



/* Entry: 00690f2c; end: 00690feb;  */

void FUN_00690f2c(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = *(int *)(*param_2 + 4);
  if (iVar1 < *(int *)(*param_1 + 4)) {
    if (*(int *)(*param_3 + 4) < iVar1) {
      lVar5 = param_1[1];
      lVar4 = *param_1;
      lVar3 = param_1[3];
      lVar2 = param_1[2];
      lVar8 = *param_3;
      lVar7 = param_3[3];
      lVar6 = param_3[2];
      param_1[1] = param_3[1];
      *param_1 = lVar8;
      param_1[3] = lVar7;
      param_1[2] = lVar6;
    }
    else {
      lVar5 = param_1[1];
      lVar4 = *param_1;
      lVar3 = param_1[3];
      lVar2 = param_1[2];
      lVar8 = *param_2;
      lVar7 = param_2[3];
      lVar6 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar8;
      param_1[3] = lVar7;
      param_1[2] = lVar6;
      param_2[1] = lVar5;
      *param_2 = lVar4;
      param_2[3] = lVar3;
      param_2[2] = lVar2;
      if (*(int *)(*param_2 + 4) <= *(int *)(*param_3 + 4)) {
        return;
      }
      lVar5 = param_2[1];
      lVar4 = *param_2;
      lVar3 = param_2[3];
      lVar2 = param_2[2];
      lVar8 = *param_3;
      lVar7 = param_3[3];
      lVar6 = param_3[2];
      param_2[1] = param_3[1];
      *param_2 = lVar8;
      param_2[3] = lVar7;
      param_2[2] = lVar6;
    }
    param_3[1] = lVar5;
    *param_3 = lVar4;
    param_3[3] = lVar3;
    param_3[2] = lVar2;
  }
  else if (*(int *)(*param_3 + 4) < iVar1) {
    lVar5 = param_2[1];
    lVar4 = *param_2;
    lVar3 = param_2[3];
    lVar2 = param_2[2];
    lVar8 = *param_3;
    lVar7 = param_3[3];
    lVar6 = param_3[2];
    param_2[1] = param_3[1];
    *param_2 = lVar8;
    param_2[3] = lVar7;
    param_2[2] = lVar6;
    param_3[1] = lVar5;
    *param_3 = lVar4;
    param_3[3] = lVar3;
    param_3[2] = lVar2;
    if (*(int *)(*param_2 + 4) < *(int *)(*param_1 + 4)) {
      lVar5 = param_1[1];
      lVar4 = *param_1;
      lVar3 = param_1[3];
      lVar2 = param_1[2];
      lVar8 = *param_2;
      lVar7 = param_2[3];
      lVar6 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar8;
      param_1[3] = lVar7;
      param_1[2] = lVar6;
      param_2[1] = lVar5;
      *param_2 = lVar4;
      param_2[3] = lVar3;
      param_2[2] = lVar2;
    }
  }
  return;
}



/* Entry: 00690fec; end: 00691037;  */

void FUN_00690fec(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00692d40();
  FUN_00690f2c();
  func_0x00693314();
  if (((in_NG != in_OV) && (func_0x00692fc0(), in_NG != in_OV)) &&
     (func_0x00692f90(), in_NG != in_OV)) {
    func_0x006934fc();
  }
  return;
}



/* Entry: 00691038; end: 006910b7;  */

void FUN_00691038(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  long *in_x4;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00692d40();
  FUN_00690fec();
  iVar1 = *(int *)(*in_x4 + 4);
  iVar2 = *(int *)(*unaff_x22 + 4);
  cVar3 = SBORROW4(iVar1,iVar2);
  cVar4 = iVar1 - iVar2 < 0;
  if (iVar1 < iVar2) {
    lVar8 = unaff_x22[1];
    lVar7 = *unaff_x22;
    lVar6 = unaff_x22[3];
    lVar5 = unaff_x22[2];
    lVar11 = *in_x4;
    lVar10 = in_x4[3];
    lVar9 = in_x4[2];
    unaff_x22[1] = in_x4[1];
    *unaff_x22 = lVar11;
    unaff_x22[3] = lVar10;
    unaff_x22[2] = lVar9;
    in_x4[1] = lVar8;
    *in_x4 = lVar7;
    in_x4[3] = lVar6;
    in_x4[2] = lVar5;
    func_0x00693314();
    if (((cVar4 != cVar3) && (func_0x00692fc0(), cVar4 != cVar3)) &&
       (func_0x00692f90(), cVar4 != cVar3)) {
      func_0x006934fc();
    }
  }
  return;
}



/* Entry: 006910b8; end: 00691273;  */

ulong FUN_006910b8(long param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  func_0x00693204();
  uVar3 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  lVar4 = param_2 - param_1 >> 5;
  uVar1 = lVar4 == 5;
  uVar2 = 1;
  switch(lVar4) {
  case 0:
  case 1:
    goto LAB_00691240;
  case 2:
    plVar9 = unaff_x20 + -4;
    uVar1 = *(int *)(*plVar9 + 4) == *(int *)(*unaff_x19 + 4);
    if (*(int *)(*plVar9 + 4) < *(int *)(*unaff_x19 + 4)) {
      lVar8 = unaff_x19[1];
      lVar13 = *unaff_x19;
      lVar7 = unaff_x19[3];
      lVar4 = unaff_x19[2];
      lVar14 = *plVar9;
      lVar12 = unaff_x20[-1];
      lVar11 = unaff_x20[-2];
      unaff_x19[1] = unaff_x20[-3];
      *unaff_x19 = lVar14;
      unaff_x19[3] = lVar12;
      unaff_x19[2] = lVar11;
      unaff_x20[-3] = lVar8;
      *plVar9 = lVar13;
      unaff_x20[-1] = lVar7;
      unaff_x20[-2] = lVar4;
    }
    goto LAB_00691240;
  case 3:
    FUN_00690f2c();
    break;
  case 4:
    FUN_00690fec();
    break;
  case 5:
    FUN_00691038();
    break;
  default:
    func_0x0069336c();
    lVar4 = 0;
    iVar5 = 0;
    plVar9 = unaff_x19 + 0xc;
    plVar10 = unaff_x19 + 8;
    while (plVar6 = plVar9, uVar1 = plVar6 == unaff_x20, !(bool)uVar1) {
      lVar7 = *plVar6;
      if (*(int *)(lVar7 + 4) < *(int *)(*plVar10 + 4)) {
        lVar12 = plVar6[2];
        lVar11 = plVar6[1];
        lVar8 = plVar6[3];
        lVar13 = lVar4;
        do {
          lVar14 = lVar13;
          *(undefined8 *)((long)unaff_x19 + lVar14 + 0x68) =
               *(undefined8 *)((long)unaff_x19 + lVar14 + 0x48);
          *(undefined8 *)((long)unaff_x19 + lVar14 + 0x60) =
               *(undefined8 *)((long)unaff_x19 + lVar14 + 0x40);
          *(undefined8 *)((long)unaff_x19 + lVar14 + 0x78) =
               *(undefined8 *)((long)unaff_x19 + lVar14 + 0x58);
          *(undefined8 *)((long)unaff_x19 + lVar14 + 0x70) =
               *(undefined8 *)((long)unaff_x19 + lVar14 + 0x50);
          plVar9 = unaff_x19;
          if (lVar14 == -0x40) goto LAB_006911f8;
          lVar13 = lVar14 + -0x20;
        } while (*(int *)(lVar7 + 4) < *(int *)(*(long *)((long)unaff_x19 + lVar14 + 0x20) + 4));
        plVar9 = (long *)((long)unaff_x19 + lVar14 + 0x40);
LAB_006911f8:
        *plVar9 = lVar7;
        plVar9[2] = lVar12;
        plVar9[1] = lVar11;
        plVar9[3] = lVar8;
        iVar5 = iVar5 + 1;
        if (iVar5 == 8) {
          uVar1 = plVar6 + 4 == unaff_x20;
          uVar2 = (ulong)(byte)uVar1;
          goto LAB_00691240;
        }
      }
      lVar4 = lVar4 + 0x20;
      plVar10 = plVar6;
      plVar9 = plVar6 + 4;
    }
  }
  uVar2 = 1;
LAB_00691240:
  func_0x00692bec(uVar3,uVar2);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_0040d974(uVar2 + 0x70);
    func_0x006912b8(uVar2 + 0x58);
    FUN_00691398(uVar2 + 0x38);
    FUN_006913d0(uVar2 + 0x20);
    FUN_00691408(uVar2 + 8);
    return uVar2;
  }
  return uVar2;
}



/* Entry: 00691274; end: 00691317;  */

long FUN_00691274(long param_1)

{
  FUN_0040d974(param_1 + 0x70);
  func_0x006912b8(param_1 + 0x58);
  FUN_00691398(param_1 + 0x38);
  FUN_006913d0(param_1 + 0x20);
  FUN_00691408(param_1 + 8);
  return param_1;
}



/* Entry: 00691318; end: 0069131f;  */

void FUN_00691318(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00692d80(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    FUN_00691360(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 00691320; end: 0069135f;  */

void FUN_00691320(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00692d80();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    FUN_00691360(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 00691360; end: 00691383;  */

void FUN_00691360(void)

{
  func_0x00692e74();
  FUN_00691384();
  return;
}



/* Entry: 00691384; end: 00691397;  */

void FUN_00691384(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00691398; end: 006913bb;  */

void FUN_00691398(void)

{
  func_0x00692e74();
  FUN_006913bc();
  return;
}



/* Entry: 006913bc; end: 006913cf;  */

void FUN_006913bc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 006913d0; end: 006913f3;  */

void FUN_006913d0(void)

{
  func_0x00692e74();
  FUN_006913f4();
  return;
}



/* Entry: 006913f4; end: 00691407;  */

void FUN_006913f4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00691408; end: 0069142b;  */

void FUN_00691408(void)

{
  func_0x00692e74();
  FUN_0069142c();
  return;
}



/* Entry: 0069142c; end: 0069143f;  */

void FUN_0069142c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00691440; end: 0069146b;  */

long * FUN_00691440(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0069146c; end: 0069163f;  */

void FUN_0069146c(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  func_0x00693204();
  func_0x00693564();
  while (unaff_x22 < *(int *)(unaff_x20 + 0x80)) {
    FUN_0069146c();
    func_0x00693558();
  }
  plVar2 = (long *)**(long **)(unaff_x19 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))();
    if (plVar2[6] != 0) {
      plVar2[8] = unaff_x20;
      lVar3 = 0x70;
      __Znwm();
      FUN_006558fc();
      FUN_0068952c(lVar3);
      FUN_0054a414(FUN_006916ac,lVar3);
      plVar2[7] = lVar3;
    }
  }
  uVar1 = *(uint *)(unaff_x20 + 0x84);
  for (lVar3 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x58 - lVar3 != 0;
      lVar3 = lVar3 + 0x58) {
    plVar2 = *(long **)(unaff_x19 + 8);
    *plVar2 = *(long *)(unaff_x20 + 0x50) + lVar3;
    *(long **)(unaff_x19 + 8) = plVar2 + 1;
  }
  *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 8;
  *(long *)(unaff_x19 + 0x10) = *(long *)(unaff_x19 + 0x10) + 0x10;
  return;
}



/* Entry: 00691640; end: 006916ab;  */

void FUN_00691640(ulong param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined4 *unaff_x19;
  
  func_0x00692ef4();
  iVar4 = (int)param_1;
  if (((param_1 & 1) != 0) || (func_0x00693254(), iVar4 == 0)) {
    FUN_0068f86c(*param_2,param_3 & 1);
    do {
      uVar1 = *unaff_x19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
      if (bVar3) {
        *unaff_x19 = 0xdd;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00693530(uVar1);
    if ((bool)in_ZR) {
      func_0x006933c4();
    }
  }
  return;
}



/* Entry: 006916ac; end: 006916c3;  */

void FUN_006916ac(long param_1)

{
  if (param_1 != 0) {
    FUN_0068958c();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006916c4; end: 00691727;  */

ulong FUN_006916c4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x19;
  undefined1 auStack_20 [16];
  
  puVar1 = auStack_20;
  if ((*(uint *)(param_1 + 1) != 0) && (*param_1 != 0)) {
    return (ulong)*(uint *)(param_1 + 1);
  }
  FUN_0077670c(auStack_20,&UNK_009144fc,0x327);
  func_0x00682f78(auStack_20,&UNK_00914598);
  FUN_0066bab4();
  func_0x006931a8();
  func_0x006928e4();
  if ((int)puVar1 == 0) {
    func_0x00692a78();
    return unaff_x19 + ((ulong)puVar1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(ulong *)(unaff_x19 + ((ulong)puVar1 & 0xffffffff));
}



/* Entry: 00691728; end: 00691763;  */

long FUN_00691728(ulong param_1)

{
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691764; end: 0069177f;  */

undefined8 FUN_00691764(ulong param_1)

{
  long unaff_x19;
  
  func_0x006929a0();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691780; end: 006917bb;  */

long FUN_00691780(ulong param_1)

{
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 006917bc; end: 006917d7;  */

undefined8 FUN_006917bc(ulong param_1)

{
  long unaff_x19;
  
  func_0x006929a0();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 006917d8; end: 00691813;  */

long FUN_006917d8(ulong param_1)

{
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691814; end: 0069182f;  */

undefined8 FUN_00691814(ulong param_1)

{
  long unaff_x19;
  
  func_0x006929a0();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691830; end: 0069186b;  */

long FUN_00691830(ulong param_1)

{
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 0069186c; end: 00691887;  */

undefined8 FUN_0069186c(ulong param_1)

{
  long unaff_x19;
  
  func_0x006929a0();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691888; end: 006918c3;  */

long FUN_00691888(ulong param_1)

{
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 006918c4; end: 006918df;  */

undefined8 FUN_006918c4(ulong param_1)

{
  long unaff_x19;
  
  func_0x006929a0();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 006918e0; end: 0069191b;  */

long FUN_006918e0(ulong param_1)

{
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 0069191c; end: 00691937;  */

undefined8 FUN_0069191c(ulong param_1)

{
  long unaff_x19;
  
  func_0x006929a0();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691938; end: 00691973;  */

long FUN_00691938(ulong param_1)

{
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691974; end: 0069198f;  */

undefined8 FUN_00691974(ulong param_1)

{
  long unaff_x19;
  
  func_0x006929a0();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691990; end: 006919cb;  */

long FUN_00691990(ulong param_1)

{
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 006919cc; end: 006919e7;  */

undefined8 FUN_006919cc(ulong param_1)

{
  long unaff_x19;
  
  func_0x006929a0();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 006919e8; end: 00691a23;  */

long FUN_006919e8(ulong param_1)

{
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return unaff_x19 + (param_1 & 0xffffffff);
  }
  func_0x00692a2c();
  func_0x006929a0();
  return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691a24; end: 00691a3f;  */

undefined8 FUN_00691a24(ulong param_1)

{
  long unaff_x19;
  
  func_0x006929a0();
  return *(undefined8 *)(unaff_x19 + (param_1 & 0xffffffff));
}



/* Entry: 00691a40; end: 00691ab7;  */

long * FUN_00691a40(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00692914();
  if (param_1 == (long *)0x0) {
    func_0x00692a2c();
    func_0x006928e4();
    if ((int)param_1 != 0) {
      func_0x00692a2c();
      func_0x006928fc();
      func_0x00692e60();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00692a78();
  }
  else {
    func_0x00692a84();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 00691ab8; end: 00691adb;  */

void FUN_00691ab8(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 00691adc; end: 00691b53;  */

long * FUN_00691adc(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00692914();
  if (param_1 == (long *)0x0) {
    func_0x00692a2c();
    func_0x006928e4();
    if ((int)param_1 != 0) {
      func_0x00692a2c();
      func_0x006928fc();
      func_0x00692e60();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00692a78();
  }
  else {
    func_0x00692a84();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 00691b54; end: 00691b77;  */

void FUN_00691b54(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 00691b78; end: 00691bef;  */

long * FUN_00691b78(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00692914();
  if (param_1 == (long *)0x0) {
    func_0x00692a2c();
    func_0x006928e4();
    if ((int)param_1 != 0) {
      func_0x00692a2c();
      func_0x006928fc();
      func_0x00692e60();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00692a78();
  }
  else {
    func_0x00692a84();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 00691bf0; end: 00691c13;  */

void FUN_00691bf0(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 00691c14; end: 00691c8b;  */

long * FUN_00691c14(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00692914();
  if (param_1 == (long *)0x0) {
    func_0x00692a2c();
    func_0x006928e4();
    if ((int)param_1 != 0) {
      func_0x00692a2c();
      func_0x006928fc();
      func_0x00692e60();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00692a78();
  }
  else {
    func_0x00692a84();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 00691c8c; end: 00691caf;  */

void FUN_00691c8c(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 00691cb0; end: 00691ceb;  */

ulong * FUN_00691cb0(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928fc();
  func_0x00692e60();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 00691cec; end: 00691d0f;  */

void FUN_00691cec(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 00691d10; end: 00691e0b;  */

undefined1  [16] FUN_00691d10(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 == param_1) {
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  *param_1 = 0;
  iVar3 = *param_2;
  if (iVar3 != 0) {
    FUN_004907dc(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar4 = (undefined4 *)(*(long *)(param_1 + 2) + (long)iVar1 * 4);
    puVar2 = *(undefined4 **)(param_2 + 2);
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



/* Entry: 00691e0c; end: 00691f23;  */

void FUN_00691e0c(void)

{
  int extraout_w8;
  long alStack_38 [3];
  
  func_0x00692d80();
  func_0x00693510();
  if (extraout_w8 != 0) {
    FUN_0054d20c(alStack_38);
  }
  func_0x00692cd0();
  func_0x00691e5c();
  func_0x00693354();
  if (alStack_38[0] != 0) {
    FUN_00437b48(alStack_38);
  }
  return;
}



/* Entry: 00691f24; end: 00691f93;  */

void FUN_00691f24(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (param_1[2] == 0) {
    puVar2 = param_1;
    FUN_0048cf58();
    puVar1 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar1 = (ulong *)(*param_1 + 7);
    }
    for (uVar3 = (ulong)((uint)puVar2 & ((int)(uint)puVar2 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      if (*puVar1 != 0) {
        func_0x00692ca4();
      }
      puVar1 = puVar1 + 1;
    }
    if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_0099c620)(*param_1 - 1);
      return;
    }
  }
  return;
}



/* Entry: 00691f94; end: 00692073;  */

undefined4 FUN_00691f94(undefined4 *param_1)

{
  func_0x00692b80();
  func_0x0068ec74();
  return *param_1;
}



/* Entry: 00692074; end: 0069217f;  */

long * FUN_00692074(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong extraout_x8;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  puVar7 = (undefined8 *)*param_1;
  lVar6 = param_1[2];
  puVar3 = (undefined8 *)*puVar7;
  if (*(undefined8 **)(lVar6 + 0x20) == puVar3) {
    if (*(byte *)(lVar6 + 1) < 0xc0) {
      lVar9 = param_1[1];
      func_0x00692c1c();
      if ((int)puVar3 == 10) {
        if ((*(byte *)(lVar6 + 1) >> 3 & 1) != 0) {
          plVar5 = (long *)puVar7[0xb];
          plVar4 = (long *)(lVar9 + (ulong)*(uint *)(puVar7 + 5));
          plVar2 = plVar4;
          func_0x005339b8(plVar4,*(undefined4 *)(lVar6 + 4));
          if (plVar2 == (long *)0x0) {
            plVar8 = (long *)0x0;
          }
          else {
            plVar8 = (long *)*plVar2;
            if ((*(byte *)((long)plVar2 + 10) >> 4 & 1) != 0) {
              lVar9 = lVar6;
              FUN_00656024(lVar6);
              (**(code **)(*plVar5 + 0x10))(plVar5,lVar9);
              (**(code **)(*plVar8 + 0x48))(plVar8,plVar5,*plVar4);
              if ((*plVar4 == 0) && (*plVar2 != 0)) {
                func_0x006884f0();
              }
            }
            FUN_00534900(plVar4,*(undefined4 *)(lVar6 + 4));
          }
          return plVar8;
        }
        if (((*(byte *)(lVar6 + 1) >> 5 & 1) == 0) &&
           (func_0x00692d18(), puVar3 == (undefined8 *)0x0)) {
          puVar3 = puVar7;
          func_0x00692d20();
          FUN_0068b0c8();
        }
        func_0x00692d18();
        if (puVar3 != (undefined8 *)0x0) {
          puVar3 = puVar7;
          func_0x00692d20();
          iVar1 = (int)puVar3;
          FUN_00689ae8();
          if (iVar1 == 0) {
            return (long *)0x0;
          }
          func_0x00693588(*(undefined8 *)(lVar6 + 0x28));
          *(undefined4 *)(lVar9 + (extraout_x8 & 0xffffffff)) = 0;
        }
        func_0x00692d20();
        func_0x0068eb7c();
        plVar4 = (long *)*puVar7;
        *puVar7 = 0;
        return plVar4;
      }
      goto LAB_0069216c;
    }
    func_0x00692d00(puVar3,param_2,&UNK_00913f94);
  }
  else {
    func_0x00692c5c(puVar3,param_2,&UNK_00913f94);
  }
  func_0x00692c24();
LAB_0069216c:
  puVar7 = (undefined8 *)*puVar7;
  func_0x00692ee4(puVar7,lVar6,&UNK_00913f94);
  func_0x00692b80();
  FUN_00691a40();
  return (long *)*puVar7;
}



/* Entry: 00692180; end: 006921b7;  */

undefined8 FUN_00692180(undefined8 *param_1)

{
  func_0x00692b80();
  FUN_00691a40();
  return *param_1;
}



/* Entry: 006921b8; end: 006921e7;  */

void FUN_006921b8(long *param_1)

{
  *(undefined4 *)
   (param_1[1] +
   (ulong)(uint)(*(int *)(*param_1 + 0x2c) +
                (int)((*(long *)(param_1[2] + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_1[2] + 0x28) + 0x10) + 0x40)) / 0x38) * 4)
   ) = 0;
  return;
}



/* Entry: 006921e8; end: 00692307;  */

void FUN_006921e8(void)

{
  func_0x00692d2c();
  FUN_0068b640();
  return;
}



/* Entry: 00692308; end: 0069231b;  */

void FUN_00692308(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  uint extraout_w8;
  long extraout_x8;
  code *pcVar14;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar15;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong uVar16;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar2 = (undefined8 *)*param_1;
  uVar15 = param_1[1];
  lVar13 = param_1[2];
  plVar10 = (long *)*puVar2;
  bVar6 = plVar10 <= *(long **)(lVar13 + 0x20);
  if (*(long **)(lVar13 + 0x20) == plVar10) {
    lVar12 = lVar13;
    func_0x00693308();
    if (bVar6) {
      func_0x00692d00();
      goto LAB_0068e048;
    }
    func_0x00692be0();
    if ((int)plVar10 == 10) {
      if ((*(byte *)(lVar13 + 1) >> 3 & 1) != 0) {
        func_0x00692db0();
        func_0x006932f0();
        if (param_2 == 0) goto FUN_00533aac;
        plVar9 = plVar10;
        FUN_0053572c();
        plVar9[2] = lVar12;
        if ((uVar15 & 1) == 0) {
          if ((*(byte *)((long)plVar9 + 10) >> 4 & 1) != 0) {
            (**(code **)(*(long *)*plVar9 + 0x38))((long *)*plVar9,param_2,*plVar10);
            goto LAB_005348ec;
          }
          if ((*plVar10 == 0) && (*plVar9 != 0)) {
            func_0x0053a5c4();
            (*extraout_x8_00)();
          }
        }
        else {
          func_0x0053aaf4();
        }
        *plVar9 = param_2;
LAB_005348ec:
        *(byte *)((long)plVar9 + 10) = *(byte *)((long)plVar9 + 10) & 0xf0;
        return;
      }
      func_0x00692e94();
      if (plVar10 == (long *)0x0) {
        func_0x00692a5c();
        if (param_2 == 0) {
          FUN_0068b0c8();
        }
        else {
          FUN_0068aaa4();
        }
        func_0x00692a5c();
        func_0x0068eb7c();
        uVar15 = unaff_x21[1];
        if ((uVar15 & 1) != 0) {
          func_0x006931f8();
          uVar15 = extraout_x8_07;
        }
        if ((uVar15 == 0) && (*plVar10 != 0)) {
          func_0x00692ca4();
        }
        *plVar10 = param_2;
        return;
      }
      if (param_2 == 0) {
        if ((*(byte *)(lVar13 + 1) >> 4 & 1) == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x28);
        }
        func_0x00692c2c();
        puVar3 = (undefined1 *)register0x00000008;
        uVar16 = unaff_x20;
        while( true ) {
          unaff_x20 = uVar15;
          *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
          *(long **)(puVar3 + -0x28) = unaff_x21;
          *(ulong *)(puVar3 + -0x20) = uVar16;
          *(long *)(puVar3 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar3 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar3 + -8) = unaff_x30;
          uVar5 = *(int *)(lVar13 + 4) != 0;
          uVar7 = *(int *)(lVar13 + 4) == 1;
          if ((!(bool)uVar7) || ((*(byte *)(*(long *)(lVar13 + 0x30) + 1) >> 1 & 1) == 0)) {
            func_0x006930c4();
            if (*(int *)(unaff_x20 + (extraout_x8_04 & 0xffffffff)) != 0) {
              plVar10 = (long *)*plVar10;
              FUN_00656068();
              uVar15 = *(ulong *)(unaff_x20 + 8);
              plVar9 = plVar10;
              if ((uVar15 & 1) != 0) {
                func_0x006931f8();
                uVar15 = extraout_x8_06;
              }
              if (uVar15 == 0) {
                func_0x00693398();
                if ((int)plVar9 == 10) {
                  func_0x00692c50();
                  func_0x0068eb7c();
                  if (*plVar9 != 0) {
                    func_0x00692ca4();
                  }
                }
                else if ((int)plVar9 == 9) {
                  FUN_00689b10();
                  if ((int)plVar10 == 1) {
                    func_0x00692c50();
                    func_0x0068eb7c();
                    if (*plVar10 != 0) {
                      FUN_00543968();
                    }
                    __ZdlPv();
                  }
                  else {
                    func_0x00692c50();
                    FUN_0068d284();
                    func_0x00532f74();
                  }
                }
              }
              func_0x006930c4();
              *(undefined4 *)(unaff_x20 + (extraout_x8_05 & 0xffffffff)) = 0;
            }
            return;
          }
          func_0x00692c50();
          iVar8 = (int)plVar10;
          uVar1 = *(undefined8 *)(puVar3 + -0x20);
          unaff_x19 = *(long *)(puVar3 + -0x18);
          unaff_x22 = *(undefined8 *)(puVar3 + -0x30);
          unaff_x21 = *(long **)(puVar3 + -0x28);
          register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x50);
          *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
          *(undefined8 *)(puVar3 + -0x48) = unaff_d8;
          *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
          *(long **)(puVar3 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar3 + -0x20) = uVar1;
          *(long *)(puVar3 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
          *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
          func_0x00692960();
          if (!(bool)uVar7) {
            func_0x00692c5c();
            func_0x00692c24();
            *(undefined8 *)(puVar3 + -0x70) = uVar1;
            *(long *)(puVar3 + -0x68) = unaff_x19;
            *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x10;
            *(code **)(puVar3 + -0x58) = FUN_0068aaa4;
            func_0x00692d80();
            func_0x00692c68();
            func_0x0068b0fc();
            if (iVar8 != -1) {
              func_0x00693210();
              *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
            }
            return;
          }
          if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) break;
          if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) {
            FUN_00656c60();
            func_0x00692f84();
            if (!(bool)uVar5 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0068a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_00827603)[extraout_x8_02] * 4 + 0x68a870))();
              return;
            }
LAB_0068aa80:
            func_0x00693490();
            return;
          }
          lVar13 = unaff_x19;
          FUN_00659454();
          if (lVar13 == 0) {
            func_0x00692a00();
            iVar8 = (int)lVar13;
            FUN_0068a604();
            if (iVar8 != 0) {
              func_0x00692a00();
              FUN_0068b0c8();
              func_0x00692c1c();
              func_0x00692f84();
              if (!(bool)uVar5 || (bool)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0068a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)(byte)(&UNK_0082760d)[extraout_x8_03] * 4 + 0x68a8b4))();
                return;
              }
            }
            goto LAB_0068aa80;
          }
          func_0x00692990();
          if ((int)lVar13 == 0) goto LAB_0068aa80;
          if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = *(long *)(unaff_x19 + 0x28);
          }
          unaff_x29 = *(undefined8 *)(puVar3 + -0x10);
          unaff_x30 = *(undefined8 *)(puVar3 + -8);
          plVar10 = unaff_x21;
          uVar15 = unaff_x20;
          func_0x00693490();
          puVar3 = puVar3 + -0x50;
          uVar16 = unaff_x20;
        }
        func_0x00692eac();
        plVar10 = (long *)(unaff_x20 + extraout_x8_01);
        unaff_x29 = *(undefined8 *)(puVar3 + -0x10);
        unaff_x30 = *(undefined8 *)(puVar3 + -8);
        func_0x00693490();
FUN_00533aac:
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        func_0x005339b8();
        if (plVar10 == (long *)0x0) {
          return;
        }
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        bVar4 = *(char *)((long)plVar10 + 9) != '\0';
        bVar6 = *(char *)((long)plVar10 + 9) == '\x01';
        if (bVar6) {
          func_0x0053a4c8((char)plVar10[1]);
          if (!bVar4 || bVar6) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
            return;
          }
        }
        else if ((*(byte *)((long)plVar10 + 10) & 1) == 0) {
          if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(plVar10 + 1) * 4) == 10) {
            if ((*(byte *)((long)plVar10 + 10) >> 4 & 1) == 0) {
              pcVar14 = *(code **)(*(long *)*plVar10 + 0x18);
            }
            else {
              pcVar14 = *(code **)(*(long *)*plVar10 + 0x88);
            }
            (*pcVar14)();
          }
          else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(plVar10 + 1) * 4) == 9) {
            func_0x0048d000(*plVar10);
          }
          *(byte *)((long)plVar10 + 10) = *(byte *)((long)plVar10 + 10) & 0xf0 | 1;
        }
        return;
      }
      if ((*(byte *)(lVar13 + 1) >> 4 & 1) == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = *(undefined **)(lVar13 + 0x28);
      }
      func_0x00692c2c();
      FUN_0068d0dc();
      func_0x00692a5c();
      func_0x0068eb7c();
      *plVar10 = param_2;
      func_0x00692a5c();
      goto FUN_0068e05c;
    }
  }
  else {
    func_0x00692c5c(plVar10,uVar15,&UNK_00913f80);
LAB_0068e048:
    func_0x00692e58();
  }
  plVar10 = (long *)*puVar2;
  puVar11 = &UNK_00913f80;
  func_0x00692da4();
FUN_0068e05c:
  *(undefined4 *)
   (uVar15 + (uint)(*(int *)((long)plVar10 + 0x2c) +
                   (int)((*(long *)(puVar11 + 0x28) -
                         *(long *)(*(long *)(*(long *)(puVar11 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)
   ) = *(undefined4 *)(puVar11 + 4);
  return;
}



/* Entry: 0069231c; end: 0069246b;  */

void FUN_0069231c(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x21;
  undefined8 unaff_x22;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x00693050();
  if (CONCAT44(uVar2,uVar1) == 0) {
    func_0x00692ba0();
    func_0x0068eb7c();
    *(undefined8 *)CONCAT44(uVar2,uVar1) = unaff_x22;
    func_0x00692ba0();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (uVar1 != 0xffffffff) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692ba0();
  FUN_00689ae8();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(unaff_x21 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x21 + 0x28);
    }
    func_0x006933d0();
  }
  func_0x00692ba0();
  func_0x0068eb7c();
  *(undefined8 *)CONCAT44(uVar2,uVar1) = unaff_x22;
  func_0x00692ba0();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar2,uVar1) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 0069246c; end: 0069248f;  */

void FUN_0069246c(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 00692490; end: 00692507;  */

long * FUN_00692490(long *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  func_0x00692914();
  if (param_1 == (long *)0x0) {
    func_0x00692a2c();
    func_0x006928e4();
    if ((int)param_1 != 0) {
      func_0x00692a2c();
      func_0x006928fc();
      func_0x00692e60();
      if ((extraout_w8 >> 5 & 1) != 0) {
        param_1 = (long *)*param_1;
      }
      return param_1;
    }
    func_0x00692a78();
  }
  else {
    func_0x00692a84();
  }
  return (long *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
}



/* Entry: 00692508; end: 0069252b;  */

void FUN_00692508(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 0069252c; end: 006925fb;  */

long FUN_0069252c(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint extraout_w8;
  uint uVar5;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  func_0x00693094();
  iVar4 = (int)param_1;
  uVar3 = *(uint *)(lVar2 + (long)iVar4 * 4);
  func_0x00692cdc();
  if (iVar4 - 9U < 4) {
    func_0x0069326c();
    uVar5 = extraout_w8;
  }
  else {
    uVar5 = 0x7fffffff;
  }
  return lVar1 + (ulong)(uVar5 & uVar3);
}



/* Entry: 006925fc; end: 00692643;  */

void FUN_006925fc(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 00692644; end: 0069267f;  */

ulong * FUN_00692644(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928fc();
  func_0x00692e60();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 00692680; end: 006926a3;  */

void FUN_00692680(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 006926a4; end: 006926df;  */

ulong * FUN_006926a4(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928fc();
  func_0x00692e60();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 006926e0; end: 00692703;  */

void FUN_006926e0(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}



/* Entry: 00692704; end: 0069273f;  */

ulong * FUN_00692704(ulong *param_1)

{
  uint extraout_w8;
  long unaff_x19;
  
  FUN_006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    return (ulong *)(unaff_x19 + ((ulong)param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928fc();
  func_0x00692e60();
  if ((extraout_w8 >> 5 & 1) != 0) {
    param_1 = (ulong *)*param_1;
  }
  return param_1;
}



/* Entry: 00692740; end: 00692763;  */

void FUN_00692740(void)

{
  func_0x006928fc();
  func_0x00692e60();
  return;
}


