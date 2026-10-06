/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00689ae8; end: 00689b0f;  */

bool FUN_00689ae8(undefined8 param_1,long param_2,long param_3)

{
  ulong extraout_x8;
  
  func_0x00693588(*(undefined8 *)(param_3 + 0x28));
  return *(int *)(param_2 + (extraout_x8 & 0xffffffff)) == *(int *)(param_3 + 4);
}



/* Entry: 00689b10; end: 00689b5b;  */

undefined8 FUN_00689b10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  FUN_006538b4();
  if (((((int)lVar1 == 0xc) && ((*(byte *)(param_1 + 1) >> 5 & 1) == 0)) &&
      ((*(byte *)(param_1 + 1) >> 3 & 1) == 0)) && (*(int *)(*(long *)(param_1 + 0x38) + 0x80) == 1)
     ) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 00689b5c; end: 00689b8b;  */

long FUN_00689b5c(byte *param_1)

{
  long lVar1;
  
  if (((*param_1 & 1) != 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) {
    FUN_0055a738();
    return lVar1 + 0x10;
  }
  return 0x10;
}



/* Entry: 00689b8c; end: 00689bc7;  */

long * FUN_00689b8c(long *param_1)

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



/* Entry: 00689bc8; end: 0068a603;  */

/* WARNING: Removing unreachable block (ram,0x0068a1c0) */
/* WARNING: Removing unreachable block (ram,0x0068a1d4) */
/* WARNING: Removing unreachable block (ram,0x0068a584) */

ulong * FUN_00689bc8(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  int extraout_w8;
  int extraout_w8_00;
  uint uVar15;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  uint extraout_w11;
  ulong *puVar16;
  int iVar17;
  ulong *unaff_x24;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined1 **ppuVar23;
  code *pcVar24;
  ulong uVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulong auStack_110 [2];
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  ulong uStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong auStack_70 [2];
  
  puVar16 = (ulong *)&UNK_00913beb;
  puVar8 = (ulong *)&UNK_00913c2c;
  puVar9 = param_1;
  puVar10 = param_2;
  while( true ) {
    if (puVar10 == param_3) {
      return puVar9;
    }
    uVar18 = puVar10[1];
    if ((uVar18 & 1) != 0) {
      uVar18 = *(ulong *)(uVar18 & 0xfffffffffffffffe);
    }
    uVar20 = param_3[1];
    if ((uVar20 & 1) != 0) {
      uVar20 = *(ulong *)(uVar20 & 0xfffffffffffffffe);
    }
    FUN_00699298(puVar10);
    puVar9 = param_1;
    func_0x00689498(param_2,param_1,&UNK_00913beb);
    if (param_2 != (ulong *)0x0) break;
    FUN_00699298(param_3);
    func_0x00689498(puVar9,param_1,&UNK_00913c2c);
    if (puVar9 != (ulong *)0x0) {
      func_0x00693108();
      func_0x00692e84();
      FUN_00776714();
      puVar10 = &uStack_90;
      FUN_00537844(puVar10,&UNK_00913c49);
      puVar9 = param_3;
      FUN_00699298();
      func_0x00693010(puVar9[1]);
      FUN_006894a8(puVar10);
      func_0x00693010(*(undefined8 *)(*param_1 + 8));
      func_0x006894d4(puVar10);
      goto LAB_0068a5fc;
    }
    if (uVar18 == uVar20) {
      lVar19 = 0;
      uVar18 = 0;
      func_0x00693544(*(undefined4 *)((long)param_1 + 0x24));
      unaff_x24 = (ulong *)&UNK_008275d4;
      goto LAB_00689ccc;
    }
    puVar9 = puVar10;
    if (uVar18 != 0) {
      uVar20 = uVar18;
      puVar9 = param_3;
      param_3 = puVar10;
    }
    puVar10 = param_3;
    param_3 = puVar10;
    (**(code **)(*puVar10 + 0x10))(puVar10,uVar20);
    FUN_00699090();
    param_2 = puVar10;
    FUN_006990ec(puVar9);
    unaff_x24 = puVar10;
  }
  func_0x00693108();
  func_0x00692e84();
  FUN_00776714();
  param_3 = &uStack_90;
  FUN_0065ae4c(param_3,&UNK_00913c08);
  puVar9 = puVar10;
  FUN_00699298();
  func_0x006933ec(puVar9[1]);
  FUN_006894a8(param_3);
  func_0x006933ec(*(undefined8 *)(*param_1 + 8));
  func_0x006894d4(param_3);
  goto LAB_0068a5fc;
LAB_00689ccc:
  uVar20 = (ulong)(int)param_1[0xc];
  uVar5 = uVar20 <= uVar18;
  uVar6 = uVar18 == uVar20;
  if (!(bool)uVar6 && (long)uVar20 <= (long)uVar18) goto LAB_00689f00;
  lVar21 = *(long *)(*param_1 + 0x38);
  puVar9 = (ulong *)(lVar21 + lVar19);
  FUN_00659454();
  if (puVar9 == (ulong *)0x0) {
    puVar9 = param_1 + 1;
    FUN_0068af2c(puVar9,lVar21 + lVar19);
    if (((ulong)puVar9 & 1) == 0) {
      bVar3 = *(byte *)(lVar21 + lVar19 + 1);
      puVar16 = (ulong *)(ulong)bVar3;
      func_0x0069309c();
      if ((bVar3 >> 5 & 1) != 0) {
        func_0x00692f84();
        if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00689d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_008275ca)[extraout_x8_00] * 4 + 0x689d48))();
          return puVar9;
        }
        func_0x00692e84();
        FUN_0077670c();
        func_0x0069322c();
        func_0x0069309c();
        func_0x006930b4();
        param_1 = puVar9;
        goto LAB_0068a5fc;
      }
      if ((int)puVar9 == 10) {
code_r0x00689d14:
        func_0x00692a4c();
        func_0x006929b4();
        uVar20 = *puVar16;
        *puVar16 = *puVar9;
        *puVar9 = uVar20;
      }
      else {
        func_0x0069309c();
        if ((int)puVar9 == 9) {
          puVar8 = (ulong *)(lVar21 + lVar19);
          FUN_00689b10();
          if ((int)puVar8 == 1) {
            func_0x00692a4c();
            func_0x006929b4();
            uStack_88 = puVar16[1];
            uStack_90 = *puVar16;
            *puVar16 = 0;
            puVar16[1] = 0;
            FUN_0054a92c(puVar16,puVar8);
            FUN_0054a92c(puVar8,&uStack_90);
            puVar9 = &uStack_90;
            FUN_00543968();
          }
          else {
            puVar9 = param_1 + 1;
            func_0x0068fc18(puVar9,lVar21 + lVar19);
            puVar8 = puVar9;
            func_0x00692a4c();
            func_0x006929b4();
            if ((int)puVar9 == 0) {
              uVar20 = *puVar8;
              *puVar8 = *puVar16;
              *puVar16 = uVar20;
              puVar9 = puVar8;
            }
            else {
              puVar9 = (ulong *)(lVar21 + lVar19);
              func_0x00659be0();
              uStack_88 = puVar16[1];
              uStack_90 = *puVar16;
              uStack_80 = puVar16[2];
              uVar25 = puVar8[1];
              uVar20 = *puVar8;
              puVar16[2] = puVar8[2];
              puVar16[1] = uVar25;
              *puVar16 = uVar20;
              puVar8[2] = uStack_80;
              puVar8[1] = uStack_88;
              *puVar8 = uStack_90;
            }
          }
        }
        else {
          func_0x0069309c();
          switch((int)puVar9) {
          case 1:
          case 3:
          case 8:
            func_0x00692a4c();
            func_0x006929b4();
            uVar20 = *puVar16;
            *(int *)puVar16 = (int)*puVar9;
            *(int *)puVar9 = (int)uVar20;
            break;
          case 2:
          case 4:
            goto code_r0x00689d14;
          case 5:
            func_0x00692a4c();
            func_0x006929b4();
            uVar20 = *puVar16;
            *puVar16 = *puVar9;
            *puVar9 = uVar20;
            break;
          case 6:
            func_0x00692a4c();
            func_0x006929b4();
            uVar20 = *puVar16;
            *(int *)puVar16 = (int)*puVar9;
            *(int *)puVar9 = (int)uVar20;
            break;
          case 7:
            func_0x00692a4c();
            func_0x006929b4();
            uVar20 = *puVar16;
            *(char *)puVar16 = (char)*puVar9;
            *(char *)puVar9 = (char)uVar20;
            break;
          default:
            func_0x00692e84();
            FUN_0077670c();
            func_0x0069322c();
            func_0x0069309c();
            func_0x006930b4();
            param_1 = puVar9;
            goto LAB_0068a5fc;
          }
        }
      }
    }
  }
  uVar18 = uVar18 + 1;
  lVar19 = lVar19 + 0x58;
  goto LAB_00689ccc;
LAB_00689f00:
  if (*(int *)((long)param_1 + 0x44) != -1) {
    func_0x00693544();
  }
  uVar18 = 0;
  uStack_c8 = (ulong)(*(uint *)(*param_1 + 0x7c) &
                     ((int)*(uint *)(*param_1 + 0x7c) >> 0x1f ^ 0xffffffffU)) * 0x38;
  while( true ) {
    uVar5 = uVar18 <= uStack_c8;
    uVar6 = uStack_c8 == uVar18;
    if ((bool)uVar6) break;
    unaff_x24 = (ulong *)*param_1;
    func_0x00693174(*(undefined4 *)((long)param_1 + 0x2c));
    uVar20 = (ulong)(uint)(extraout_w8 + extraout_w9 * 4);
    uVar15 = *(uint *)((long)puVar10 + uVar20);
    puVar16 = (ulong *)(ulong)uVar15;
    uVar2 = *(uint *)((long)param_3 + uVar20);
    puVar8 = (ulong *)(ulong)uVar2;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    if (uVar15 != 0) {
      FUN_00656068();
      puVar9 = unaff_x24;
      puStack_a8 = param_1;
      puStack_a0 = puVar10;
      puStack_98 = unaff_x24;
      FUN_00656c60();
      func_0x00692f84();
      if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00689f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_008275dc)[extraout_x8_01] * 4 + 0x689fa0))();
        return puVar9;
      }
      func_0x00692cbc();
      func_0x00692e48();
      func_0x006933e4();
      func_0x006930b4();
LAB_0068a5c4:
      param_1 = auStack_70;
      FUN_005558a0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
      func_0x00692d60();
      goto LAB_0068a5fc;
    }
    unaff_x24 = (ulong *)0x0;
    if (uVar2 != 0) {
      puVar11 = (ulong *)*param_1;
      FUN_00656068(puVar11,puVar8);
      puVar9 = puVar11;
      puStack_c0 = param_1;
      puStack_b8 = param_3;
      puStack_b0 = puVar11;
      puStack_a8 = param_1;
      puStack_a0 = puVar10;
      puStack_98 = puVar11;
      FUN_00656c60();
      func_0x00692f84();
      if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0068a0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_008275e6)[extraout_x8_02] * 4 + 0x68a0a4))();
        return puVar9;
      }
      func_0x00692cbc();
      func_0x00692e48();
      FUN_00656c60(puVar11);
      func_0x006930b4();
      goto LAB_0068a5c4;
    }
    func_0x00693174(*(undefined4 *)((long)param_1 + 0x2c));
    *(undefined4 *)((long)puVar10 + (ulong)(uint)(extraout_w8_00 + extraout_w9_00 * 4)) = 0;
    *(undefined4 *)
     ((long)param_3 + (ulong)(uint)(*(int *)((long)param_1 + 0x2c) + extraout_w9_00 * 4)) = 0;
    puVar9 = &uStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    uVar18 = uVar18 + 0x38;
  }
  puVar16 = (ulong *)(ulong)(uint)param_1[4];
  if ((uint)param_1[4] != 0xffffffff) {
    lVar21 = 0;
    iVar17 = 0;
    for (lVar19 = 0; lVar19 < *(int *)(*param_1 + 4); lVar19 = lVar19 + 1) {
      puVar9 = (ulong *)(*(long *)(*param_1 + 0x38) + lVar21);
      if (((*(byte *)((long)puVar9 + 1) >> 5 & 1) == 0) && (FUN_00659454(), puVar9 == (ulong *)0x0))
      {
        iVar17 = iVar17 + 1;
      }
      lVar21 = lVar21 + 0x58;
    }
    uVar15 = (iVar17 + 0x1f) / 0x20;
    if ((uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) != 0) {
      do {
        func_0x006932d8();
      } while (extraout_x10 != 0);
    }
  }
  puVar8 = (ulong *)(ulong)(uint)param_1[8];
  if ((uint)param_1[8] == 0xffffffff) {
LAB_0068a3f8:
    uVar15 = (uint)param_1[5];
    if (uVar15 != 0xffffffff) {
      puVar9 = (ulong *)((long)puVar10 + (ulong)uVar15);
      FUN_005355ac(puVar9,(long)param_3 + (ulong)uVar15);
    }
    return puVar9;
  }
  lVar21 = 0;
  lVar19 = 0;
  unaff_x24 = (ulong *)0x0;
  while( true ) {
    iVar17 = (int)unaff_x24;
    if (*(int *)(*param_1 + 4) <= lVar19) break;
    lVar22 = *(long *)(*param_1 + 0x38);
    puVar16 = (ulong *)(lVar22 + lVar21);
    if ((((*puVar16 & 0x2800) == 0) && (func_0x00692fb8(), puVar9 == (ulong *)0x0)) &&
       (*(int *)(*(long *)(lVar22 + lVar21 + 0x38) + 0x80) == 0)) {
      puVar9 = param_1 + 1;
      func_0x0068fc18(puVar9,puVar16);
      unaff_x24 = (ulong *)(ulong)(uint)(iVar17 + (int)puVar9);
    }
    lVar19 = lVar19 + 1;
    lVar21 = lVar21 + 0x58;
  }
  if (iVar17 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (iVar17 + 0x20) / 0x20;
  }
  if (((*(uint *)((long)param_3 + (long)puVar8) ^ *(uint *)((long)puVar10 + (long)puVar8)) & 1) == 0
     ) {
    if ((uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU)) != 0) {
      do {
        func_0x006932d8();
      } while (extraout_x10_00 != 0);
    }
    goto LAB_0068a3f8;
  }
  FUN_0055419c((*(uint *)((long)puVar10 + (long)puVar8) ^ 0xffffffff) & 1,
               (*(uint *)((long)param_3 + (long)puVar8) ^ 0xffffffff) & 1,&UNK_00913cd3);
  func_0x00533528();
  func_0x00692e84();
  FUN_00776794();
LAB_0068a5fc:
  puVar9 = &uStack_90;
  FUN_005558a0();
  puVar11 = auStack_110;
  pcStack_d8 = FUN_0068a604;
  ppuVar23 = &puStack_e0;
  puStack_100 = puVar16;
  puStack_f8 = puVar10;
  puStack_f0 = param_3;
  puStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00692d98();
  puVar10 = puVar9;
  func_0x00692c68();
  func_0x0068b0fc();
  if ((int)puVar10 != -1) {
    uVar18 = puVar9[4];
    func_0x0069302c();
    func_0x0068b0fc();
    uVar15 = *(uint *)((long)param_3 + ((ulong)puVar10 >> 5 & 0x7ffffff) * 4 + (ulong)(uint)uVar18)
             >> (ulong)((uint)puVar10 & 0x1f) & 1;
    goto LAB_0068a6e8;
  }
  func_0x00692c1c();
  if ((int)puVar10 == 10) {
    if (param_3 == (ulong *)puVar9[1]) {
      uVar15 = 0;
      goto LAB_0068a6e8;
    }
    func_0x00692a00();
    FUN_00689b8c();
    goto LAB_0068a6dc;
  }
  func_0x00692c1c();
  uVar15 = (int)puVar10 - 1;
  uVar5 = 7 < uVar15;
  uVar6 = uVar15 == 8;
  switch(uVar15) {
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
    uVar18 = *puVar10;
code_r0x0068a6e0:
    bVar7 = uVar18 == 0;
    goto code_r0x0068a6e4;
  case 6:
    func_0x00692a00();
    func_0x0068ec38();
    uVar15 = (uint)(byte)*puVar10;
    goto LAB_0068a6e8;
  case 8:
    func_0x00693264();
    if ((int)puVar10 == 1) {
      func_0x00692d18();
      if (puVar10 == (ulong *)0x0) {
        func_0x0069302c();
        FUN_0068af2c();
        if ((int)puVar10 == 0) {
          func_0x0069302c();
          FUN_0068eafc();
          goto code_r0x0068a72c;
        }
        func_0x0069302c();
        FUN_0068eafc();
        func_0x00692e60();
        if ((extraout_w8_01 >> 5 & 1) != 0) {
          puVar10 = (ulong *)*puVar10;
        }
      }
      else {
        func_0x0069302c();
        FUN_0068ebb8();
code_r0x0068a72c:
        puVar10 = (ulong *)((long)param_3 + ((ulong)puVar10 & 0xffffffff));
      }
      uVar15 = (uint)puVar10;
      func_0x0054a724();
      uVar15 = uVar15 ^ 1;
      goto LAB_0068a6e8;
    }
    func_0x0069302c();
    func_0x0068fc18();
    if ((int)puVar10 == 0) {
      func_0x00692a00();
      FUN_00691c14();
      uVar18 = (ulong)*(char *)((*puVar10 & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar18 < 0) {
        uVar18 = *(ulong *)((*puVar10 & 0xfffffffffffffffc) + 8);
      }
    }
    else {
      func_0x00692a00();
      FUN_00691b78();
      uVar18 = puVar10[1];
      if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
        uVar18 = (ulong)*(byte *)((long)puVar10 + 0x17);
      }
    }
    goto code_r0x0068a6e0;
  default:
    func_0x00693044();
    FUN_0077670c(auStack_110);
    puVar12 = &UNK_009140bd;
    FUN_00537844();
    pcVar24 = FUN_0068a7dc;
    func_0x006931a8();
    puVar10 = auStack_110;
    while( true ) {
      *(undefined8 *)((long)puVar10 + -0x50) = unaff_d9;
      *(undefined8 *)((long)puVar10 + -0x48) = unaff_d8;
      *(ulong **)((long)puVar10 + -0x40) = unaff_x24;
      *(ulong **)((long)puVar10 + -0x38) = puVar8;
      *(ulong **)((long)puVar10 + -0x30) = puVar16;
      *(ulong **)((long)puVar10 + -0x28) = puVar9;
      *(ulong **)((long)puVar10 + -0x20) = param_3;
      *(ulong **)((long)puVar10 + -0x18) = param_1;
      *(undefined1 ***)((long)puVar10 + -0x10) = ppuVar23;
      *(code **)((long)puVar10 + -8) = pcVar24;
      func_0x00692960();
      if (!(bool)uVar6) {
        func_0x00692c5c();
        func_0x00692c24();
        *(ulong **)((long)puVar10 + -0x70) = param_3;
        *(ulong **)((long)puVar10 + -0x68) = param_1;
        *(undefined1 **)((long)puVar10 + -0x60) = (undefined1 *)((long)puVar10 + -0x10);
        *(code **)((long)puVar10 + -0x58) = FUN_0068aaa4;
        func_0x00692d80();
        func_0x00692c68();
        func_0x0068b0fc();
        if ((int)puVar11 != -1) {
          func_0x00693210();
          *(uint *)(extraout_x9 + (extraout_x10_01 & 0xffffffff) * 4) =
               extraout_w11 | extraout_w8_02;
        }
        return puVar11;
      }
      if ((*(byte *)((long)param_1 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        puVar16 = (ulong *)(puVar12 + extraout_x8_03);
        uVar1 = *(undefined8 *)((long)puVar10 + -0x10);
        uVar14 = *(undefined8 *)((long)puVar10 + -8);
        func_0x00693490();
        *(undefined8 *)((long)puVar10 + -0x60) = uVar1;
        *(undefined8 *)((long)puVar10 + -0x58) = uVar14;
        func_0x005339b8();
        if (puVar16 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *(undefined **)((long)puVar10 + -0x70) = puVar12;
        *(ulong **)((long)puVar10 + -0x68) = param_1;
        *(undefined8 *)((long)puVar10 + -0x60) = *(undefined8 *)((long)puVar10 + -0x60);
        *(undefined8 *)((long)puVar10 + -0x58) = *(undefined8 *)((long)puVar10 + -0x58);
        bVar4 = *(char *)((long)puVar16 + 9) != '\0';
        bVar7 = *(char *)((long)puVar16 + 9) == '\x01';
        if (bVar7) {
          func_0x0053a4c8((char)puVar16[1]);
          puVar8 = puVar16;
          if (!bVar4 || bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
            return puVar16;
          }
        }
        else {
          puVar8 = puVar16;
          if ((*(byte *)((long)puVar16 + 10) & 1) == 0) {
            if (*(int *)(&UNK_00810e40 + (ulong)(byte)puVar16[1] * 4) == 10) {
              puVar8 = (ulong *)*puVar16;
              if ((*(byte *)((long)puVar16 + 10) >> 4 & 1) == 0) {
                pcVar24 = *(code **)(*puVar8 + 0x18);
              }
              else {
                pcVar24 = *(code **)(*puVar8 + 0x88);
              }
              (*pcVar24)();
            }
            else if (*(int *)(&UNK_00810e40 + (ulong)(byte)puVar16[1] * 4) == 9) {
              puVar8 = (ulong *)*puVar16;
              func_0x0048d000(puVar8);
            }
            *(byte *)((long)puVar16 + 10) = *(byte *)((long)puVar16 + 10) & 0xf0 | 1;
          }
        }
        return puVar8;
      }
      if ((*(byte *)((long)param_1 + 1) >> 5 & 1) != 0) break;
      puVar11 = param_1;
      FUN_00659454();
      if (puVar11 == (ulong *)0x0) {
        func_0x00692a00();
        FUN_0068a604();
        if ((int)puVar11 != 0) {
          func_0x00692a00();
          func_0x0068b0c8();
          func_0x00692c1c();
          func_0x00692f84();
          if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0068a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_0082760d)[extraout_x8_05] * 4 + 0x68a8b4))();
            return puVar11;
          }
        }
        goto LAB_0068aa80;
      }
      func_0x00692990();
      if ((int)puVar11 == 0) goto LAB_0068aa80;
      if ((*(byte *)((long)param_1 + 1) >> 4 & 1) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = param_1[5];
      }
      uVar1 = *(undefined8 *)((long)puVar10 + -0x10);
      uVar14 = *(undefined8 *)((long)puVar10 + -8);
      puVar11 = puVar9;
      puVar13 = puVar12;
      func_0x00693490();
      *(ulong **)((long)puVar10 + -0x80) = puVar16;
      *(ulong **)((long)puVar10 + -0x78) = puVar9;
      *(undefined **)((long)puVar10 + -0x70) = puVar12;
      *(ulong **)((long)puVar10 + -0x68) = param_1;
      *(undefined8 *)((long)puVar10 + -0x60) = uVar1;
      *(undefined8 *)((long)puVar10 + -0x58) = uVar14;
      uVar5 = *(int *)(uVar18 + 4) != 0;
      uVar6 = *(int *)(uVar18 + 4) == 1;
      if ((!(bool)uVar6) || ((*(byte *)(*(long *)(uVar18 + 0x30) + 1) >> 1 & 1) == 0)) {
        puVar16 = puVar11;
        func_0x006930c4();
        if (*(int *)(puVar13 + (extraout_x8_06 & 0xffffffff)) != 0) {
          puVar11 = (ulong *)*puVar11;
          FUN_00656068();
          uVar18 = *(ulong *)(puVar13 + 8);
          puVar16 = puVar11;
          if ((uVar18 & 1) != 0) {
            func_0x006931f8();
            uVar18 = extraout_x8_08;
          }
          if (uVar18 == 0) {
            func_0x00693398();
            if ((int)puVar16 == 10) {
              func_0x00692c50();
              func_0x0068eb7c();
              puVar16 = (ulong *)*puVar16;
              if (puVar16 != (ulong *)0x0) {
                func_0x00692ca4();
              }
            }
            else if ((int)puVar16 == 9) {
              FUN_00689b10();
              if ((int)puVar11 == 1) {
                func_0x00692c50();
                func_0x0068eb7c();
                puVar16 = (ulong *)*puVar11;
                if (puVar16 != (ulong *)0x0) {
                  FUN_00543968();
                }
                __ZdlPv();
              }
              else {
                func_0x00692c50();
                FUN_0068d284();
                func_0x00532f74();
                puVar16 = puVar11;
              }
            }
          }
          func_0x006930c4();
          *(undefined4 *)(puVar13 + (extraout_x8_07 & 0xffffffff)) = 0;
        }
        return puVar16;
      }
      func_0x00692c50();
      ppuVar23 = *(undefined1 ***)((long)puVar10 + -0x60);
      pcVar24 = *(code **)((long)puVar10 + -0x58);
      param_3 = *(ulong **)((long)puVar10 + -0x70);
      param_1 = *(ulong **)((long)puVar10 + -0x68);
      puVar16 = *(ulong **)((long)puVar10 + -0x80);
      puVar9 = *(ulong **)((long)puVar10 + -0x78);
      puVar10 = (ulong *)((long)puVar10 + -0x50);
      puVar12 = puVar13;
    }
    FUN_00656c60();
    func_0x00692f84();
    puVar11 = param_1;
    if (!(bool)uVar5 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0068a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00827603)[extraout_x8_04] * 4 + 0x68a870))();
      return param_1;
    }
LAB_0068aa80:
    func_0x00693490();
    return puVar11;
  }
  bVar7 = (int)*puVar10 == 0;
code_r0x0068a6e4:
  uVar15 = (uint)!bVar7;
LAB_0068a6e8:
  return (ulong *)(ulong)(uVar15 & 1);
}



/* Entry: 0068a604; end: 0068a7db;  */

ulong * FUN_0068a604(ulong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar13;
  code *pcVar14;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulong auStack_40 [2];
  
  puVar6 = auStack_40;
  puVar13 = &stack0xfffffffffffffff0;
  func_0x00692d98();
  puVar7 = param_1;
  func_0x00692c68();
  func_0x0068b0fc();
  if ((int)puVar7 != -1) {
    uVar10 = param_1[4];
    func_0x0069302c();
    func_0x0068b0fc();
    uVar12 = *(uint *)(unaff_x20 + (uint)uVar10 + ((ulong)puVar7 >> 5 & 0x7ffffff) * 4) >>
             (ulong)((uint)puVar7 & 0x1f) & 1;
    goto LAB_0068a6e8;
  }
  func_0x00692c1c();
  if ((int)puVar7 == 10) {
    if (unaff_x20 == param_1[1]) {
      uVar12 = 0;
      goto LAB_0068a6e8;
    }
    func_0x00692a00();
    FUN_00689b8c();
    goto LAB_0068a6dc;
  }
  func_0x00692c1c();
  uVar12 = (int)puVar7 - 1;
  uVar3 = 7 < uVar12;
  uVar4 = uVar12 == 8;
  switch(uVar12) {
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
    uVar10 = *puVar7;
code_r0x0068a6e0:
    bVar5 = uVar10 == 0;
    goto code_r0x0068a6e4;
  case 6:
    func_0x00692a00();
    func_0x0068ec38();
    uVar12 = (uint)(byte)*puVar7;
    goto LAB_0068a6e8;
  case 8:
    func_0x00693264();
    if ((int)puVar7 == 1) {
      func_0x00692d18();
      if (puVar7 == (ulong *)0x0) {
        func_0x0069302c();
        FUN_0068af2c();
        if ((int)puVar7 == 0) {
          func_0x0069302c();
          FUN_0068eafc();
          goto code_r0x0068a72c;
        }
        func_0x0069302c();
        FUN_0068eafc();
        func_0x00692e60();
        if ((extraout_w8 >> 5 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
      }
      else {
        func_0x0069302c();
        FUN_0068ebb8();
code_r0x0068a72c:
        puVar7 = (ulong *)(unaff_x20 + ((ulong)puVar7 & 0xffffffff));
      }
      uVar12 = (uint)puVar7;
      func_0x0054a724();
      uVar12 = uVar12 ^ 1;
      goto LAB_0068a6e8;
    }
    func_0x0069302c();
    func_0x0068fc18();
    if ((int)puVar7 == 0) {
      func_0x00692a00();
      FUN_00691c14();
      uVar10 = (ulong)*(char *)((*puVar7 & 0xfffffffffffffffc) + 0x17);
      if ((long)uVar10 < 0) {
        uVar10 = *(ulong *)((*puVar7 & 0xfffffffffffffffc) + 8);
      }
    }
    else {
      func_0x00692a00();
      FUN_00691b78();
      uVar10 = puVar7[1];
      if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
        uVar10 = (ulong)*(byte *)((long)puVar7 + 0x17);
      }
    }
    goto code_r0x0068a6e0;
  default:
    func_0x00693044();
    FUN_0077670c(auStack_40);
    puVar8 = &UNK_009140bd;
    FUN_00537844();
    pcVar14 = FUN_0068a7dc;
    func_0x006931a8();
    puVar7 = auStack_40;
    while( true ) {
      *(undefined8 *)((long)puVar7 + -0x50) = unaff_d9;
      *(undefined8 *)((long)puVar7 + -0x48) = unaff_d8;
      *(undefined8 *)((long)puVar7 + -0x40) = unaff_x24;
      *(undefined8 *)((long)puVar7 + -0x38) = unaff_x23;
      *(undefined8 *)((long)puVar7 + -0x30) = unaff_x22;
      *(ulong **)((long)puVar7 + -0x28) = param_1;
      *(ulong *)((long)puVar7 + -0x20) = unaff_x20;
      *(ulong **)((long)puVar7 + -0x18) = unaff_x19;
      *(undefined1 **)((long)puVar7 + -0x10) = puVar13;
      *(code **)((long)puVar7 + -8) = pcVar14;
      func_0x00692960();
      if (!(bool)uVar4) {
        func_0x00692c5c();
        func_0x00692c24();
        *(ulong *)((long)puVar7 + -0x70) = unaff_x20;
        *(ulong **)((long)puVar7 + -0x68) = unaff_x19;
        *(undefined1 **)((long)puVar7 + -0x60) = (undefined1 *)((long)puVar7 + -0x10);
        *(code **)((long)puVar7 + -0x58) = FUN_0068aaa4;
        func_0x00692d80();
        func_0x00692c68();
        func_0x0068b0fc();
        if ((int)puVar6 != -1) {
          func_0x00693210();
          *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8_00;
        }
        return puVar6;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        puVar6 = (ulong *)(puVar8 + extraout_x8_00);
        uVar1 = *(undefined8 *)((long)puVar7 + -0x10);
        uVar11 = *(undefined8 *)((long)puVar7 + -8);
        func_0x00693490();
        *(undefined8 *)((long)puVar7 + -0x60) = uVar1;
        *(undefined8 *)((long)puVar7 + -0x58) = uVar11;
        func_0x005339b8();
        if (puVar6 == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        *(undefined **)((long)puVar7 + -0x70) = puVar8;
        *(ulong **)((long)puVar7 + -0x68) = unaff_x19;
        *(undefined8 *)((long)puVar7 + -0x60) = *(undefined8 *)((long)puVar7 + -0x60);
        *(undefined8 *)((long)puVar7 + -0x58) = *(undefined8 *)((long)puVar7 + -0x58);
        bVar2 = *(char *)((long)puVar6 + 9) != '\0';
        bVar5 = *(char *)((long)puVar6 + 9) == '\x01';
        if (bVar5) {
          func_0x0053a4c8((char)puVar6[1]);
          puVar7 = puVar6;
          if (!bVar2 || bVar5) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
            return puVar6;
          }
        }
        else {
          puVar7 = puVar6;
          if ((*(byte *)((long)puVar6 + 10) & 1) == 0) {
            if (*(int *)(&UNK_00810e40 + (ulong)(byte)puVar6[1] * 4) == 10) {
              puVar7 = (ulong *)*puVar6;
              if ((*(byte *)((long)puVar6 + 10) >> 4 & 1) == 0) {
                pcVar14 = *(code **)(*puVar7 + 0x18);
              }
              else {
                pcVar14 = *(code **)(*puVar7 + 0x88);
              }
              (*pcVar14)();
            }
            else if (*(int *)(&UNK_00810e40 + (ulong)(byte)puVar6[1] * 4) == 9) {
              puVar7 = (ulong *)*puVar6;
              func_0x0048d000(puVar7);
            }
            *(byte *)((long)puVar6 + 10) = *(byte *)((long)puVar6 + 10) & 0xf0 | 1;
          }
        }
        return puVar7;
      }
      if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) break;
      puVar6 = unaff_x19;
      FUN_00659454();
      if (puVar6 == (ulong *)0x0) {
        func_0x00692a00();
        FUN_0068a604();
        if ((int)puVar6 != 0) {
          func_0x00692a00();
          func_0x0068b0c8();
          func_0x00692c1c();
          func_0x00692f84();
          if (!(bool)uVar3 || (bool)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0068a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_0082760d)[extraout_x8_02] * 4 + 0x68a8b4))();
            return puVar6;
          }
        }
        goto LAB_0068aa80;
      }
      func_0x00692990();
      if ((int)puVar6 == 0) goto LAB_0068aa80;
      if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = unaff_x19[5];
      }
      uVar1 = *(undefined8 *)((long)puVar7 + -0x10);
      uVar11 = *(undefined8 *)((long)puVar7 + -8);
      puVar6 = param_1;
      puVar9 = puVar8;
      func_0x00693490();
      *(undefined8 *)((long)puVar7 + -0x80) = unaff_x22;
      *(ulong **)((long)puVar7 + -0x78) = param_1;
      *(undefined **)((long)puVar7 + -0x70) = puVar8;
      *(ulong **)((long)puVar7 + -0x68) = unaff_x19;
      *(undefined8 *)((long)puVar7 + -0x60) = uVar1;
      *(undefined8 *)((long)puVar7 + -0x58) = uVar11;
      uVar3 = *(int *)(uVar10 + 4) != 0;
      uVar4 = *(int *)(uVar10 + 4) == 1;
      if ((!(bool)uVar4) || ((*(byte *)(*(long *)(uVar10 + 0x30) + 1) >> 1 & 1) == 0)) {
        puVar7 = puVar6;
        func_0x006930c4();
        if (*(int *)(puVar9 + (extraout_x8_03 & 0xffffffff)) != 0) {
          puVar6 = (ulong *)*puVar6;
          FUN_00656068();
          uVar10 = *(ulong *)(puVar9 + 8);
          puVar7 = puVar6;
          if ((uVar10 & 1) != 0) {
            func_0x006931f8();
            uVar10 = extraout_x8_05;
          }
          if (uVar10 == 0) {
            func_0x00693398();
            if ((int)puVar7 == 10) {
              func_0x00692c50();
              func_0x0068eb7c();
              puVar7 = (ulong *)*puVar7;
              if (puVar7 != (ulong *)0x0) {
                func_0x00692ca4();
              }
            }
            else if ((int)puVar7 == 9) {
              FUN_00689b10();
              if ((int)puVar6 == 1) {
                func_0x00692c50();
                func_0x0068eb7c();
                puVar7 = (ulong *)*puVar6;
                if (puVar7 != (ulong *)0x0) {
                  FUN_00543968();
                }
                __ZdlPv();
              }
              else {
                func_0x00692c50();
                FUN_0068d284();
                func_0x00532f74();
                puVar7 = puVar6;
              }
            }
          }
          func_0x006930c4();
          *(undefined4 *)(puVar9 + (extraout_x8_04 & 0xffffffff)) = 0;
        }
        return puVar7;
      }
      func_0x00692c50();
      puVar13 = *(undefined1 **)((long)puVar7 + -0x60);
      pcVar14 = *(code **)((long)puVar7 + -0x58);
      unaff_x20 = *(ulong *)((long)puVar7 + -0x70);
      unaff_x19 = *(ulong **)((long)puVar7 + -0x68);
      unaff_x22 = *(undefined8 *)((long)puVar7 + -0x80);
      param_1 = *(ulong **)((long)puVar7 + -0x78);
      puVar7 = (ulong *)((long)puVar7 + -0x50);
      puVar8 = puVar9;
    }
    FUN_00656c60();
    func_0x00692f84();
    puVar6 = unaff_x19;
    if (!(bool)uVar3 || (bool)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0068a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00827603)[extraout_x8_01] * 4 + 0x68a870))();
      return unaff_x19;
    }
LAB_0068aa80:
    func_0x00693490();
    return puVar6;
  }
  bVar5 = (int)*puVar7 == 0;
code_r0x0068a6e4:
  uVar12 = (uint)!bVar5;
LAB_0068a6e8:
  return (ulong *)(ulong)(uVar12 & 1);
}



/* Entry: 0068a7dc; end: 0068aaa3;  */

void FUN_0068a7dc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint extraout_w8;
  long extraout_x8;
  code *pcVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar12;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    iVar4 = (int)param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00692960();
    if (!(bool)in_ZR) {
      func_0x00692c5c();
      func_0x00692c24();
      *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x58) = FUN_0068aaa4;
      func_0x00692d80();
      func_0x00692c68();
      func_0x0068b0fc();
      if (iVar4 != -1) {
        func_0x00693210();
        *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
      }
      return;
    }
    if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
      func_0x00692eac();
      puVar5 = (undefined8 *)(param_2 + extraout_x8_00);
      uVar1 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar10 = *(undefined8 *)((long)register0x00000008 + -8);
      func_0x00693490();
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar1;
      *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
      func_0x005339b8();
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      *(long *)((long)register0x00000008 + -0x70) = param_2;
      *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)((long)register0x00000008 + -0x58);
      bVar2 = *(char *)((long)puVar5 + 9) != '\0';
      bVar3 = *(char *)((long)puVar5 + 9) == '\x01';
      if (bVar3) {
        func_0x0053a4c8(*(undefined1 *)(puVar5 + 1));
        if (!bVar2 || bVar3) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
          return;
        }
      }
      else if ((*(byte *)((long)puVar5 + 10) & 1) == 0) {
        if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(puVar5 + 1) * 4) == 10) {
          if ((*(byte *)((long)puVar5 + 10) >> 4 & 1) == 0) {
            pcVar11 = *(code **)(*(long *)*puVar5 + 0x18);
          }
          else {
            pcVar11 = *(code **)(*(long *)*puVar5 + 0x88);
          }
          (*pcVar11)();
        }
        else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(puVar5 + 1) * 4) == 9) {
          func_0x0048d000(*puVar5);
        }
        *(byte *)((long)puVar5 + 10) = *(byte *)((long)puVar5 + 10) & 0xf0 | 1;
      }
      return;
    }
    if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) break;
    lVar9 = unaff_x19;
    FUN_00659454();
    if (lVar9 == 0) {
      func_0x00692a00();
      iVar4 = (int)lVar9;
      FUN_0068a604();
      if (iVar4 != 0) {
        func_0x00692a00();
        FUN_0068b0c8();
        func_0x00692c1c();
        func_0x00692f84();
        if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0068a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_0082760d)[extraout_x8_02] * 4 + 0x68a8b4))();
          return;
        }
      }
      goto LAB_0068aa80;
    }
    func_0x00692990();
    if ((int)lVar9 == 0) goto LAB_0068aa80;
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(unaff_x19 + 0x28);
    }
    uVar1 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -8);
    param_1 = unaff_x21;
    lVar8 = param_2;
    func_0x00693490();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x78) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x70) = param_2;
    *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar1;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar10;
    in_CY = *(int *)(lVar9 + 4) != 0;
    in_ZR = *(int *)(lVar9 + 4) == 1;
    if ((!(bool)in_ZR) || ((*(byte *)(*(long *)(lVar9 + 0x30) + 1) >> 1 & 1) == 0)) {
      func_0x006930c4();
      if (*(int *)(lVar8 + (extraout_x8_03 & 0xffffffff)) != 0) {
        plVar6 = (long *)*param_1;
        FUN_00656068();
        uVar12 = *(ulong *)(lVar8 + 8);
        plVar7 = plVar6;
        if ((uVar12 & 1) != 0) {
          func_0x006931f8();
          uVar12 = extraout_x8_05;
        }
        if (uVar12 == 0) {
          func_0x00693398();
          if ((int)plVar7 == 10) {
            func_0x00692c50();
            func_0x0068eb7c();
            if (*plVar7 != 0) {
              func_0x00692ca4();
            }
          }
          else if ((int)plVar7 == 9) {
            FUN_00689b10();
            if ((int)plVar6 == 1) {
              func_0x00692c50();
              func_0x0068eb7c();
              if (*plVar6 != 0) {
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
        *(undefined4 *)(lVar8 + (extraout_x8_04 & 0xffffffff)) = 0;
      }
      return;
    }
    func_0x00692c50();
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 **)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_2 = lVar8;
  }
  FUN_00656c60();
  func_0x00692f84();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0068a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00827603)[extraout_x8_01] * 4 + 0x68a870))();
    return;
  }
LAB_0068aa80:
  func_0x00693490();
  return;
}



/* Entry: 0068aaa4; end: 0068aad7;  */

void FUN_0068aaa4(int param_1)

{
  uint extraout_w8;
  long extraout_x9;
  uint extraout_w10;
  uint extraout_w11;
  
  func_0x00692d80();
  func_0x00692c68();
  func_0x0068b0fc();
  if (param_1 != -1) {
    func_0x00693210();
    *(uint *)(extraout_x9 + (ulong)extraout_w10 * 4) = extraout_w11 | extraout_w8;
  }
  return;
}



/* Entry: 0068aad8; end: 0068ab37;  */

long FUN_0068aad8(long param_1,undefined8 param_2)

{
  undefined1 auStack_98 [64];
  long lStack_58;
  
  FUN_005554b4(auStack_98,*(undefined8 *)(param_1 + 8));
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(lStack_58 + 0x118,param_2);
  FUN_005556e0(auStack_98);
  return param_1;
}



/* Entry: 0068ab38; end: 0068abb3;  */

undefined1  [16] FUN_0068ab38(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x006930fc();
    FUN_0048ebf4();
    func_0x00692cd0();
    FUN_00691d10();
    func_0x006930e4();
    func_0x00691d24();
    FUN_0048ed64(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0068abb4; end: 0068ac2f;  */

undefined1  [16] FUN_0068abb4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x006930fc();
    FUN_00488f08();
    func_0x00692cd0();
    func_0x00691d34();
    func_0x006930e4();
    func_0x00691d48();
    FUN_0048b2d0(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0068ac30; end: 0068acab;  */

undefined1  [16] FUN_0068ac30(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x006930fc();
    FUN_004ead8c();
    func_0x00692cd0();
    func_0x00691d58();
    func_0x006930e4();
    func_0x00691d6c();
    FUN_004eb4cc(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0068acac; end: 0068ad27;  */

undefined1  [16] FUN_0068acac(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x006930fc();
    FUN_004df784();
    func_0x00692cd0();
    func_0x00691d7c();
    func_0x006930e4();
    func_0x00691d90();
    FUN_004dfa80(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0068ad28; end: 0068ada3;  */

undefined1  [16] FUN_0068ad28(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x006930fc();
    FUN_00535464();
    func_0x00692cd0();
    func_0x00691da0();
    func_0x006930e4();
    func_0x00691db4();
    FUN_00538dcc(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0068ada4; end: 0068ae1f;  */

undefined1  [16] FUN_0068ada4(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x006930fc();
    func_0x005354ac();
    func_0x00692cd0();
    func_0x00691dc4();
    func_0x006930e4();
    func_0x00691dd8();
    FUN_00538e10(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0068ae20; end: 0068ae9b;  */

undefined1  [16] FUN_0068ae20(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_30;
  if (param_1 != param_2) {
    func_0x00692b18();
    if (extraout_w9 != 0) {
      func_0x006930f0();
    }
    func_0x00692c38();
    lStack_28 = extraout_x8;
    if (extraout_w10 != 0) {
      lStack_28 = *(long *)(extraout_x8 + -8);
    }
    if (extraout_x9 == lStack_28) {
      func_0x00692cd0();
      puVar1 = param_1 + 0x10;
      puVar4 = param_2;
      for (; param_1 != puVar1; param_1 = param_1 + 1) {
        uVar2 = *param_1;
        *param_1 = *puVar4;
        *puVar4 = uVar2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      auVar5._8_8_ = param_2;
      auVar5._0_8_ = puVar1;
      return auVar5;
    }
    uStack_30 = 0;
    func_0x006930fc();
    func_0x005354f4();
    func_0x00692cd0();
    func_0x00691de8();
    func_0x006930e4();
    func_0x00691dfc();
    FUN_00538e54(&uStack_30);
    param_1 = (undefined1 *)puVar3;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0068ae9c; end: 0068af2b;  */

ulong * FUN_0068ae9c(ulong *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 **ppuVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
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
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  ulong *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  code *pcVar16;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x00692960();
  if (!(bool)in_ZR) {
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
  if ((bool)in_CY) {
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
    func_0x00693588(*(undefined8 *)(param_3 + 0x28));
    return (ulong *)(ulong)(*(int *)(param_2 + (extraout_x8_00 & 0xffffffff)) ==
                           *(int *)(param_3 + 4));
  }
  func_0x00692a00();
  ppuVar7 = &puStack_40;
  puVar15 = &stack0xfffffffffffffff0;
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
    pcVar16 = FUN_0068a7dc;
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
      *(undefined1 **)((long)ppuVar2 + -0x10) = puVar15;
      *(code **)((long)ppuVar2 + -8) = pcVar16;
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
                pcVar16 = *(code **)(*puVar8 + 0x18);
              }
              else {
                pcVar16 = *(code **)(*puVar8 + 0x88);
              }
              (*pcVar16)();
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
      puVar15 = *(undefined1 **)((long)ppuVar2 + -0x60);
      pcVar16 = *(code **)((long)ppuVar2 + -0x58);
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



/* Entry: 0068af2c; end: 0068af63;  */

uint FUN_0068af2c(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x3c) != -1) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00693094();
    return *(uint *)(lVar1 + (long)(int)param_1 * 4) >> 0x1f;
  }
  return 0;
}



/* Entry: 0068af64; end: 0068b0c7;  */

void FUN_0068af64(int param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar4;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  undefined1 auStack_40 [16];
  
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      if ((extraout_w8 >> 3 & 1) != 0) {
        func_0x00692eac();
        param_2 = param_2 + extraout_x8_02;
        func_0x005339b8();
        if (param_2 == 0) {
          return;
        }
        puVar3 = (undefined8 *)&stack0xffffffffffffffe0;
        func_0x0053a4c8(*(undefined1 *)(param_2 + 8));
        if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00533a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_00810bcc)[extraout_x8] * 4 + 0x533a64))();
          return;
        }
        func_0x0053a54c();
        FUN_0077670c(&stack0xffffffffffffffe0);
        func_0x00537864(&stack0xffffffffffffffe0,"Can\'t get here.");
        func_0x0053a53c();
        func_0x005339b8();
        if (puVar3 == (undefined8 *)0x0) {
          return;
        }
        bVar1 = *(char *)((long)puVar3 + 9) != '\0';
        bVar2 = *(char *)((long)puVar3 + 9) == '\x01';
        if (bVar2) {
          func_0x0053a4c8(*(undefined1 *)(puVar3 + 1));
          if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8_00] * 4 + 0x533b0c))();
            return;
          }
        }
        else if ((*(byte *)((long)puVar3 + 10) & 1) == 0) {
          if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(puVar3 + 1) * 4) == 10) {
            if ((*(byte *)((long)puVar3 + 10) >> 4 & 1) == 0) {
              pcVar4 = *(code **)(*(long *)*puVar3 + 0x18);
            }
            else {
              pcVar4 = *(code **)(*(long *)*puVar3 + 0x88);
            }
            (*pcVar4)();
          }
          else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(puVar3 + 1) * 4) == 9) {
            func_0x0048d000(*puVar3);
          }
          *(byte *)((long)puVar3 + 10) = *(byte *)((long)puVar3 + 10) & 0xf0 | 1;
        }
        return;
      }
      func_0x00692c1c();
      func_0x00692f84();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0068afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_00827617)[extraout_x8_01] * 4 + 0x68afb4))();
        return;
      }
      func_0x00693044();
      FUN_0077670c(auStack_40);
      param_1 = (int)auStack_40;
      func_0x00537864(auStack_40,&UNK_00913d5f);
      goto LAB_0068b0c4;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068b0c4:
  func_0x006931a8();
  func_0x00692d80();
  func_0x00692c68();
  func_0x0068b0fc();
  if (param_1 != -1) {
    func_0x00693210();
    *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) =
         extraout_w11 & (extraout_w8_00 ^ 0xffffffff);
  }
  return;
}



/* Entry: 0068b0c8; end: 0068b12f;  */

void FUN_0068b0c8(int param_1)

{
  uint extraout_w8;
  long extraout_x9;
  uint extraout_w10;
  uint extraout_w11;
  
  func_0x00692d80();
  func_0x00692c68();
  func_0x0068b0fc();
  if (param_1 != -1) {
    func_0x00693210();
    *(uint *)(extraout_x9 + (ulong)extraout_w10 * 4) = extraout_w11 & (extraout_w8 ^ 0xffffffff);
  }
  return;
}



/* Entry: 0068b130; end: 0068b143;  */

void FUN_0068b130(ulong *param_1)

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



/* Entry: 0068b144; end: 0068b217;  */

void FUN_0068b144(ulong *param_1,long param_2)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      if ((extraout_w8 >> 3 & 1) == 0) {
        func_0x00692c1c();
        func_0x00692f84();
        if ((bool)in_CY && !(bool)in_ZR) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0068b18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_00827621)[extraout_x8_00] * 4 + 0x68b190))();
        return;
      }
      func_0x00692eac();
      param_2 = param_2 + extraout_x8_01;
      func_0x005339b8();
      if (param_2 != 0) {
        func_0x0053a4c8(*(undefined1 *)(param_2 + 8));
        if ((bool)in_CY && !(bool)in_ZR) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00534a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_00810bea)[extraout_x8] * 4 + 0x534a54))();
        return;
      }
      func_0x0053a214();
      func_0x0053a544();
      func_0x0053a244();
      func_0x0053a53c();
      puVar3 = *(undefined8 **)(param_2 + 0x10);
      if ((long)*(short *)(param_2 + 10) < 0) {
        lVar4 = puVar3[1];
        lVar2 = *(long *)*puVar3;
        cVar1 = *(char *)(lVar4 + 10);
        while (lVar2 != lVar4 || cVar1 != '\0') {
          FUN_00533acc(lVar2 + 0x18);
          func_0x0053a9bc();
        }
      }
      else {
        for (lVar4 = (long)*(short *)(param_2 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
          FUN_00533acc(puVar3 + 1);
          puVar3 = puVar3 + 4;
        }
      }
      return;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
  lVar4 = (long)(int)param_1[1] + -1;
  *(int *)(param_1 + 1) = (int)lVar4;
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + lVar4 * 8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x0068b244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))();
  return;
}



/* Entry: 0068b218; end: 0068b247;  */

void FUN_0068b218(ulong *param_1)

{
  long lVar1;
  
  lVar1 = (long)(int)param_1[1] + -1;
  *(int *)(param_1 + 1) = (int)lVar1;
  if ((*param_1 & 1) != 0) {
    param_1 = (ulong *)(*param_1 + lVar1 * 8 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x0068b244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))();
  return;
}



/* Entry: 0068b248; end: 0068b25f;  */

uint FUN_0068b248(uint param_1)

{
  func_0x00659750();
  return param_1 ^ 1;
}



/* Entry: 0068b260; end: 0068b4bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0068b260(long *******param_1,long ******param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  long ******pppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  long extraout_x8;
  ulong uVar15;
  long ******extraout_x8_00;
  long ******extraout_x8_01;
  long ******extraout_x8_02;
  long ******extraout_x8_03;
  long ******extraout_x8_04;
  long ******extraout_x8_05;
  long ******extraout_x8_06;
  long ******extraout_x8_07;
  long ******extraout_x8_08;
  long ******extraout_x8_09;
  undefined8 extraout_x8_10;
  long ******extraout_x8_11;
  long ******extraout_x8_12;
  long ******extraout_x8_13;
  int iVar16;
  long ******pppppplVar17;
  long ******extraout_x9;
  ulong uVar18;
  long ******extraout_x9_00;
  undefined8 extraout_x9_01;
  long ******extraout_x9_02;
  long ******extraout_x9_03;
  long ******extraout_x9_04;
  undefined8 extraout_x9_05;
  long ******extraout_x9_06;
  long ******extraout_x9_07;
  long *******extraout_x10;
  long *******extraout_x10_00;
  long *******extraout_x10_01;
  long *******ppppppplVar19;
  ulong uVar20;
  long ******pppppplVar21;
  ulong uVar22;
  ulong uVar23;
  long *******unaff_x19;
  long *******unaff_x20;
  uint uVar24;
  uint uVar25;
  long lVar26;
  long *****ppppplVar27;
  long lVar28;
  long *******ppppppplVar29;
  long lVar30;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  
  param_3[1] = *param_3;
  if (param_2 == param_1[1]) {
    return;
  }
  func_0x00692d98();
  uVar25 = *(uint *)(param_1 + 4);
  pppppplVar17 = param_1[3];
  ppppppplVar13 = (long *******)(long)*(int *)((long)*param_1 + 4);
  ppppppplVar10 = (long *******)(param_3 + 2);
  if ((long *******)((long)*ppppppplVar10 - extraout_x8 >> 3) < ppppppplVar13) {
    if (*(int *)((long)*param_1 + 4) < 0) {
      func_0x00666d38();
      ppppppplVar11 = (long *******)&ppppppplStack_88;
      FUN_00666d80();
      func_0x00692d60();
      if (ppppppplVar11 == ppppppplVar13) {
        return;
      }
      puVar14 = (undefined8 *)(LZCOUNT((long)ppppppplVar13 - (long)ppppppplVar11 >> 3) << 1 ^ 0x7e);
      bVar5 = true;
      func_0x00692d80();
LAB_0068fcc0:
      ppppppplVar13 = ppppppplVar10 + -1;
LAB_0068fcd0:
      while( true ) {
        uVar15 = (long)ppppppplVar10 - (long)unaff_x20 >> 3;
        cVar6 = SBORROW8(uVar15,5);
        cVar7 = (long)(uVar15 - 5) < 0;
        switch(uVar15) {
        case 0:
        case 1:
          goto LAB_00690288;
        case 2:
          func_0x00692c74(ppppppplVar10[-1]);
          if (cVar7 != cVar6) {
            *unaff_x20 = extraout_x8_05;
            ppppppplVar10[-1] = extraout_x9;
          }
          goto LAB_00690288;
        case 3:
          ppppppplVar10 = unaff_x20 + 1;
          func_0x00693570();
          pppppplVar9 = *ppppppplVar10;
          pppppplVar17 = *unaff_x20;
          iVar16 = *(int *)((long)pppppplVar9 + 4);
          iVar2 = *(int *)((long)pppppplVar17 + 4);
          pppppplVar21 = *ppppppplVar13;
          iVar3 = *(int *)((long)pppppplVar21 + 4);
          if (iVar16 < iVar2) {
            if (iVar3 < iVar16) {
              *unaff_x20 = pppppplVar21;
            }
            else {
              *unaff_x20 = pppppplVar9;
              *ppppppplVar10 = pppppplVar17;
              if (iVar2 <= *(int *)((long)*ppppppplVar13 + 4)) {
                return;
              }
              *ppppppplVar10 = *ppppppplVar13;
            }
            *ppppppplVar13 = pppppplVar17;
          }
          else {
            cVar6 = SBORROW4(iVar3,iVar16);
            cVar7 = iVar3 - iVar16 < 0;
            if (iVar3 < iVar16) {
              *ppppppplVar10 = pppppplVar21;
              *ppppppplVar13 = pppppplVar9;
              func_0x00692c74(*ppppppplVar10);
              if (cVar7 != cVar6) {
                *unaff_x20 = extraout_x8_06;
                *ppppppplVar10 = extraout_x9_00;
                return;
              }
            }
          }
          return;
        case 4:
          func_0x00693570(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,ppppppplVar13);
          func_0x00692d40();
          FUN_0069029c();
          func_0x00692c74(*puVar14);
          if (cVar7 != cVar6) {
            *ppppppplVar13 = extraout_x8_07;
            *puVar14 = extraout_x9_01;
            func_0x00692c74(*ppppppplVar13);
            if (cVar7 != cVar6) {
              *ppppppplVar10 = extraout_x8_08;
              *ppppppplVar13 = extraout_x9_02;
              func_0x00692c74(*ppppppplVar10);
              if (cVar7 != cVar6) {
                *unaff_x20 = extraout_x8_09;
                *ppppppplVar10 = extraout_x9_03;
              }
            }
          }
          return;
        case 5:
          ppppppplVar11 = ppppppplVar13;
          func_0x00693570(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,unaff_x20 + 3);
          func_0x00692d40();
          FUN_00690324();
          func_0x00692c74(*ppppppplVar11);
          if (cVar7 != cVar6) {
            *puVar14 = extraout_x8_10;
            *ppppppplVar11 = extraout_x9_04;
            func_0x00692c74(*puVar14);
            if (cVar7 != cVar6) {
              *ppppppplVar13 = extraout_x8_11;
              *puVar14 = extraout_x9_05;
              func_0x00692c74(*ppppppplVar13);
              if (cVar7 != cVar6) {
                *ppppppplVar10 = extraout_x8_12;
                *ppppppplVar13 = extraout_x9_06;
                func_0x00692c74(*ppppppplVar10);
                if (cVar7 != cVar6) {
                  *unaff_x20 = extraout_x8_13;
                  *ppppppplVar10 = extraout_x9_07;
                }
              }
            }
          }
          return;
        }
        if ((long)uVar15 < 0x18) {
          if (!bVar5) {
            ppppppplVar13 = unaff_x20;
            if (unaff_x20 != ppppppplVar10) {
              while( true ) {
                unaff_x20 = unaff_x20 + 1;
                ppppppplVar11 = ppppppplVar13 + 1;
                if (ppppppplVar11 == ppppppplVar10) break;
                pppppplVar17 = *ppppppplVar13;
                pppppplVar9 = ppppppplVar13[1];
                iVar16 = *(int *)((long)pppppplVar9 + 4);
                ppppppplVar19 = unaff_x20;
                ppppppplVar13 = ppppppplVar11;
                if (iVar16 < *(int *)((long)pppppplVar17 + 4)) {
                  do {
                    *ppppppplVar19 = pppppplVar17;
                    pppppplVar17 = ppppppplVar19[-2];
                    ppppppplVar19 = ppppppplVar19 + -1;
                  } while (iVar16 < *(int *)((long)pppppplVar17 + 4));
                  *ppppppplVar19 = pppppplVar9;
                }
              }
            }
            goto LAB_00690288;
          }
          if (unaff_x20 == ppppppplVar10) goto LAB_00690288;
          lVar30 = 8;
          ppppppplVar13 = unaff_x20;
          goto LAB_0068ffe8;
        }
        if (puVar14 == (undefined8 *)0x0) {
          if (unaff_x20 == ppppppplVar10) goto LAB_00690288;
          uVar18 = uVar15 - 2 >> 1;
          uVar20 = uVar18;
          goto LAB_00690064;
        }
        ppppppplVar11 = unaff_x20 + (uVar15 >> 1);
        if (uVar15 < 0x81) {
          func_0x00693374(ppppppplVar11,unaff_x20);
        }
        else {
          func_0x00693374(unaff_x20,ppppppplVar11);
          FUN_0069029c(unaff_x20 + 1,ppppppplVar11 + -1,ppppppplVar10 + -2);
          FUN_0069029c(unaff_x20 + 2,ppppppplVar11 + 1,ppppppplVar10 + -3);
          FUN_0069029c(ppppppplVar11 + -1,ppppppplVar11,ppppppplVar11 + 1);
          pppppplVar17 = *unaff_x20;
          *unaff_x20 = *ppppppplVar11;
          *ppppppplVar11 = pppppplVar17;
        }
        puVar14 = (undefined8 *)((long)puVar14 - 1);
        pppppplVar17 = *unaff_x20;
        if (bVar5) break;
        iVar2 = *(int *)((long)unaff_x20[-1] + 4);
        iVar16 = *(int *)((long)pppppplVar17 + 4);
        cVar6 = SBORROW4(iVar2,iVar16);
        cVar7 = iVar2 - iVar16 < 0;
        if (iVar2 < iVar16) goto LAB_0068fd88;
        func_0x006934c4();
        ppppppplVar11 = unaff_x20;
        if (cVar7 == cVar6) {
          pppppplVar17 = extraout_x8_00;
          ppppppplVar19 = unaff_x20 + 1;
          do {
            ppppppplVar11 = ppppppplVar19;
            cVar6 = SBORROW8((long)ppppppplVar11,(long)ppppppplVar10);
            cVar7 = (long)ppppppplVar11 - (long)ppppppplVar10 < 0;
            if (ppppppplVar10 <= ppppppplVar11) break;
            func_0x00693038();
            pppppplVar17 = extraout_x8_02;
            ppppppplVar19 = extraout_x10;
          } while (cVar7 == cVar6);
        }
        else {
          do {
            ppppppplVar11 = ppppppplVar11 + 1;
            func_0x006934c4();
            pppppplVar17 = extraout_x8_01;
          } while (cVar7 == cVar6);
        }
        cVar6 = SBORROW8((long)ppppppplVar11,(long)ppppppplVar10);
        cVar7 = (long)ppppppplVar11 - (long)ppppppplVar10 < 0;
        ppppppplVar19 = ppppppplVar10;
        if (ppppppplVar11 < ppppppplVar10) {
          do {
            func_0x00693038();
            pppppplVar17 = extraout_x8_03;
            ppppppplVar19 = extraout_x10_00;
          } while (cVar7 != cVar6);
        }
        while( true ) {
          cVar6 = SBORROW8((long)ppppppplVar11,(long)ppppppplVar19);
          cVar7 = (long)ppppppplVar11 - (long)ppppppplVar19 < 0;
          if (ppppppplVar19 <= ppppppplVar11) break;
          pppppplVar17 = *ppppppplVar11;
          *ppppppplVar11 = *ppppppplVar19;
          *ppppppplVar19 = pppppplVar17;
          do {
            ppppppplVar11 = ppppppplVar11 + 1;
            func_0x00693038();
          } while (cVar7 == cVar6);
          do {
            func_0x00693038();
            pppppplVar17 = extraout_x8_04;
            ppppppplVar19 = extraout_x10_01;
          } while (cVar7 != cVar6);
        }
        ppppppplVar19 = ppppppplVar11 + -1;
        if (unaff_x20 != ppppppplVar19) {
          *unaff_x20 = *ppppppplVar19;
        }
        bVar5 = false;
        *ppppppplVar19 = pppppplVar17;
        unaff_x20 = ppppppplVar11;
      }
      iVar16 = *(int *)((long)pppppplVar17 + 4);
LAB_0068fd88:
      lVar30 = 0;
      do {
        pppppplVar9 = *(long *******)((long)unaff_x20 + lVar30 + 8);
        lVar30 = lVar30 + 8;
      } while (*(int *)((long)pppppplVar9 + 4) < iVar16);
      ppppppplVar11 = (long *******)((long)unaff_x20 + lVar30);
      ppppppplVar19 = ppppppplVar10;
      ppppppplVar29 = ppppppplVar11;
      if (lVar30 == 8) {
        do {
          ppppppplVar12 = ppppppplVar19;
          if (ppppppplVar19 <= ppppppplVar11) break;
          ppppppplVar19 = ppppppplVar19 + -1;
          ppppppplVar12 = ppppppplVar19;
        } while (iVar16 <= *(int *)((long)*ppppppplVar19 + 4));
      }
      else {
        do {
          ppppppplVar19 = ppppppplVar19 + -1;
          ppppppplVar12 = ppppppplVar19;
        } while (iVar16 <= *(int *)((long)*ppppppplVar19 + 4));
      }
      while (ppppppplVar29 < ppppppplVar19) {
        *ppppppplVar29 = *ppppppplVar19;
        *ppppppplVar19 = pppppplVar9;
        do {
          ppppppplVar29 = ppppppplVar29 + 1;
          pppppplVar9 = *ppppppplVar29;
        } while (*(int *)((long)pppppplVar9 + 4) < iVar16);
        do {
          ppppppplVar19 = ppppppplVar19 + -1;
        } while (iVar16 <= *(int *)((long)*ppppppplVar19 + 4));
      }
      ppppppplVar19 = ppppppplVar29 + -1;
      if (unaff_x20 != ppppppplVar19) {
        *unaff_x20 = *ppppppplVar19;
      }
      *ppppppplVar19 = pppppplVar17;
      if (ppppppplVar12 <= ppppppplVar11) {
        ppppppplVar11 = unaff_x20;
        FUN_00690414(unaff_x20,ppppppplVar19);
        ppppppplVar12 = ppppppplVar29;
        FUN_00690414(ppppppplVar29,ppppppplVar10);
        if ((int)ppppppplVar12 != 0) goto LAB_0068ff28;
        unaff_x20 = ppppppplVar29;
        if (((ulong)ppppppplVar11 & 1) != 0) goto LAB_0068fcd0;
      }
      func_0x006934dc();
      FUN_0068fc98();
      bVar5 = false;
      unaff_x20 = ppppppplVar29;
      goto LAB_0068fcd0;
    }
    ppppppplStack_68 = ppppppplVar10;
    FUN_00666d44();
    ppppppplStack_70 = ppppppplVar10 + (long)ppppppplVar13;
    ppppppplStack_88 = ppppppplVar10;
    ppppppplStack_80 = ppppppplVar10;
    ppppppplStack_78 = ppppppplVar10;
    func_0x0066bd70();
    ppppppplVar10 = (long *******)&ppppppplStack_88;
    FUN_00666d80();
  }
  lVar28 = 0;
  uVar24 = 0;
  iVar16 = *(int *)(param_1 + 0xc);
  for (lVar30 = 0; lVar30 <= iVar16; lVar30 = lVar30 + 1) {
    ppppplVar27 = (*param_1)[7];
    bVar4 = *(byte *)((long)ppppplVar27 + lVar28 + 1);
    if ((bVar4 >> 5 & 1) == 0) {
      if ((bVar4 >> 4 & 1) == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = *(long *)((long)ppppplVar27 + lVar28 + 0x28);
      }
      func_0x00692fb8();
      if (ppppppplVar10 == (long *******)0x0) {
        if ((uVar25 == 0xffffffff) ||
           (uVar8 = *(uint *)((long)pppppplVar17 + lVar30 * 4), uVar8 == 0xffffffff)) {
          ppppppplVar10 = param_1;
          FUN_0068a604();
          uVar8 = (uint)ppppppplVar10;
        }
        else {
          uVar8 = *(uint *)((long)unaff_x20 + (ulong)(uVar8 >> 5) * 4 + (ulong)uVar25) >>
                  (ulong)(uVar8 & 0x1f) & 1;
        }
        if (uVar8 != 0) goto LAB_0068b350;
      }
      else {
        uVar15 = (lVar26 - *(long *)(*(long *)(lVar26 + 0x10) + 0x40)) / 0x38;
        if ((ulong)*(uint *)((long)unaff_x20 +
                            (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar15 & 0xffffffff) << 2
                            ) + (ulong)*(uint *)((long)param_1 + 0x2c)) ==
            (long)*(int *)((long)ppppplVar27 + lVar28 + 4)) {
LAB_0068b350:
          uVar8 = *(uint *)((long)ppppplVar27 + lVar28 + 4);
          if (uVar8 < uVar24) {
            uVar8 = 0xffffffff;
          }
          ppppppplVar10 = unaff_x19;
          ppppppplStack_88 = (long *******)((long)ppppplVar27 + lVar28);
          func_0x0066bcac();
          uVar24 = uVar8;
        }
      }
    }
    else {
      ppppppplVar10 = param_1;
      FUN_0068af64();
      if (0 < (int)ppppppplVar10) goto LAB_0068b350;
    }
    lVar28 = lVar28 + 0x58;
  }
  if (uVar24 == 0xffffffff) {
    FUN_0068b4c0(*unaff_x19,unaff_x19[1]);
    pppppplVar17 = unaff_x19[1];
    uVar24 = *(uint *)((long)pppppplVar17[-1] + 4);
  }
  else {
    pppppplVar17 = unaff_x19[1];
  }
  pppppplVar9 = *unaff_x19;
  uVar25 = uVar24;
  if (*(uint *)(param_1 + 5) != 0xffffffff) {
    FUN_00686808((long)unaff_x20 + (ulong)*(uint *)(param_1 + 5),*param_1,param_1[10]);
    if (((long)unaff_x19[1] - (long)*unaff_x19 != (long)pppppplVar17 - (long)pppppplVar9) &&
       (uVar25 = *(uint *)(*(long *)((long)*unaff_x19 + ((long)pppppplVar17 - (long)pppppplVar9)) +
                          4), uVar25 < uVar24)) goto LAB_0068b488;
  }
  if (uVar25 != 0xffffffff) {
    return;
  }
LAB_0068b488:
  FUN_0068b4c0();
  return;
LAB_0068ffe8:
  if (ppppppplVar13 + 1 == ppppppplVar10) goto LAB_00690288;
  pppppplVar17 = *ppppppplVar13;
  pppppplVar9 = ppppppplVar13[1];
  iVar16 = *(int *)((long)pppppplVar9 + 4);
  lVar28 = lVar30;
  if (iVar16 < *(int *)((long)pppppplVar17 + 4)) {
    do {
      *(long *******)((long)unaff_x20 + lVar28) = pppppplVar17;
      lVar26 = lVar28 + -8;
      ppppppplVar11 = unaff_x20;
      if (lVar26 == 0) goto LAB_0069003c;
      pppppplVar17 = *(long *******)((long)unaff_x20 + lVar28 + -0x10);
      lVar28 = lVar26;
    } while (iVar16 < *(int *)((long)pppppplVar17 + 4));
    ppppppplVar11 = (long *******)((long)unaff_x20 + lVar26);
LAB_0069003c:
    *ppppppplVar11 = pppppplVar9;
  }
  lVar30 = lVar30 + 8;
  ppppppplVar13 = ppppppplVar13 + 1;
  goto LAB_0068ffe8;
LAB_0068ff28:
  ppppppplVar10 = ppppppplVar19;
  if (((ulong)ppppppplVar11 & 1) != 0) goto LAB_00690288;
  goto LAB_0068fcc0;
LAB_00690064:
  do {
    if ((long)uVar20 <= (long)uVar18) {
      uVar22 = (uVar20 & 0x3fffffffffffffff) << 1 | 1;
      ppppppplVar13 = unaff_x20 + uVar22;
      uVar1 = uVar20 * 2 + 2;
      pppppplVar9 = *ppppppplVar13;
      ppppppplVar11 = ppppppplVar13;
      pppppplVar17 = pppppplVar9;
      uVar23 = uVar22;
      if ((long)uVar1 < (long)uVar15) {
        pppppplVar17 = ppppppplVar13[1];
        ppppppplVar11 = ppppppplVar13 + 1;
        uVar23 = uVar1;
        if (*(int *)((long)pppppplVar17 + 4) <= *(int *)((long)pppppplVar9 + 4)) {
          ppppppplVar11 = ppppppplVar13;
          pppppplVar17 = pppppplVar9;
          uVar23 = uVar22;
        }
      }
      pppppplVar9 = unaff_x20[uVar20];
      iVar16 = *(int *)((long)pppppplVar9 + 4);
      ppppppplVar13 = unaff_x20 + uVar20;
      if (iVar16 <= *(int *)((long)pppppplVar17 + 4)) {
        do {
          ppppppplVar19 = ppppppplVar11;
          *ppppppplVar13 = pppppplVar17;
          if ((long)uVar18 < (long)uVar23) break;
          uVar22 = uVar23 << 1 | 1;
          ppppppplVar13 = unaff_x20 + uVar22;
          uVar1 = uVar23 * 2 + 2;
          pppppplVar21 = *ppppppplVar13;
          ppppppplVar11 = ppppppplVar13;
          pppppplVar17 = pppppplVar21;
          uVar23 = uVar22;
          if ((long)uVar1 < (long)uVar15) {
            pppppplVar17 = ppppppplVar13[1];
            ppppppplVar11 = ppppppplVar13 + 1;
            uVar23 = uVar1;
            if (*(int *)((long)pppppplVar17 + 4) <= *(int *)((long)pppppplVar21 + 4)) {
              ppppppplVar11 = ppppppplVar13;
              pppppplVar17 = pppppplVar21;
              uVar23 = uVar22;
            }
          }
          ppppppplVar13 = ppppppplVar19;
        } while (iVar16 <= *(int *)((long)pppppplVar17 + 4));
        *ppppppplVar19 = pppppplVar9;
      }
    }
    uVar20 = uVar20 - 1;
  } while (-1 < (long)uVar20);
  for (; 1 < (long)uVar15; uVar15 = uVar15 - 1) {
    pppppplVar17 = *unaff_x20;
    ppppppplVar13 = unaff_x20;
    uVar20 = 0;
    do {
      ppppppplVar19 = ppppppplVar13 + uVar20 + 1;
      pppppplVar21 = *ppppppplVar19;
      uVar1 = uVar20 << 1 | 1;
      uVar18 = uVar20 * 2 + 2;
      ppppppplVar11 = ppppppplVar19;
      pppppplVar9 = pppppplVar21;
      uVar22 = uVar1;
      if ((long)uVar18 < (long)uVar15) {
        pppppplVar9 = ppppppplVar13[uVar20 + 2];
        ppppppplVar11 = ppppppplVar13 + uVar20 + 2;
        uVar22 = uVar18;
        if (*(int *)((long)pppppplVar9 + 4) <= *(int *)((long)pppppplVar21 + 4)) {
          ppppppplVar11 = ppppppplVar19;
          pppppplVar9 = pppppplVar21;
          uVar22 = uVar1;
        }
      }
      *ppppppplVar13 = pppppplVar9;
      ppppppplVar13 = ppppppplVar11;
      uVar20 = uVar22;
    } while ((long)uVar22 <= (long)(uVar15 - 2 >> 1));
    ppppppplVar10 = ppppppplVar10 + -1;
    if (ppppppplVar11 == ppppppplVar10) {
      *ppppppplVar11 = pppppplVar17;
    }
    else {
      *ppppppplVar11 = *ppppppplVar10;
      *ppppppplVar10 = pppppplVar17;
      lVar30 = (long)ppppppplVar11 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar30) {
        uVar20 = lVar30 - 2U >> 1;
        pppppplVar9 = unaff_x20[uVar20];
        pppppplVar17 = *ppppppplVar11;
        iVar16 = *(int *)((long)pppppplVar17 + 4);
        ppppppplVar13 = unaff_x20 + uVar20;
        if (*(int *)((long)pppppplVar9 + 4) < iVar16) {
          do {
            ppppppplVar19 = ppppppplVar13;
            *ppppppplVar11 = pppppplVar9;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1 >> 1;
            pppppplVar9 = unaff_x20[uVar20];
            ppppppplVar11 = ppppppplVar19;
            ppppppplVar13 = unaff_x20 + uVar20;
          } while (*(int *)((long)pppppplVar9 + 4) < iVar16);
          *ppppppplVar19 = pppppplVar17;
        }
      }
    }
  }
LAB_00690288:
  func_0x00693570(FUN_0068b4c0);
  return;
}



/* Entry: 0068b4c0; end: 0068b4e7;  */

void FUN_0068b4c0(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
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
  int iVar14;
  long extraout_x9;
  ulong uVar15;
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
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar23;
  undefined8 unaff_x30;
  
  if (param_1 == param_2) {
    return;
  }
  puVar11 = (undefined8 *)(LZCOUNT(param_2 - param_1 >> 3) << 1 ^ 0x7e);
  bVar5 = true;
  func_0x00692d80();
  do {
    plVar10 = unaff_x19 + -1;
LAB_0068fcd0:
    uVar12 = (long)unaff_x19 - (long)unaff_x20 >> 3;
    cVar6 = SBORROW8(uVar12,5);
    cVar7 = (long)(uVar12 - 5) < 0;
    switch(uVar12) {
    case 0:
    case 1:
      goto LAB_00690288;
    case 2:
      func_0x00692c74(unaff_x19[-1]);
      if (cVar7 != cVar6) {
        *unaff_x20 = extraout_x8_04;
        unaff_x19[-1] = extraout_x9;
      }
      goto LAB_00690288;
    case 3:
      plVar8 = unaff_x20 + 1;
      func_0x00693570();
      lVar19 = *plVar8;
      lVar13 = *unaff_x20;
      iVar14 = *(int *)(lVar19 + 4);
      iVar2 = *(int *)(lVar13 + 4);
      lVar18 = *plVar10;
      iVar3 = *(int *)(lVar18 + 4);
      if (iVar14 < iVar2) {
        if (iVar3 < iVar14) {
          *unaff_x20 = lVar18;
        }
        else {
          *unaff_x20 = lVar19;
          *plVar8 = lVar13;
          if (iVar2 <= *(int *)(*plVar10 + 4)) {
            return;
          }
          *plVar8 = *plVar10;
        }
        *plVar10 = lVar13;
      }
      else {
        cVar6 = SBORROW4(iVar3,iVar14);
        cVar7 = iVar3 - iVar14 < 0;
        if (iVar3 < iVar14) {
          *plVar8 = lVar18;
          *plVar10 = lVar19;
          func_0x00692c74(*plVar8);
          if (cVar7 != cVar6) {
            *unaff_x20 = extraout_x8_05;
            *plVar8 = extraout_x9_00;
            return;
          }
        }
      }
      return;
    case 4:
      func_0x00693570(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,plVar10);
      func_0x00692d40();
      FUN_0069029c();
      func_0x00692c74(*puVar11);
      if (cVar7 != cVar6) {
        *plVar10 = extraout_x8_06;
        *puVar11 = extraout_x9_01;
        func_0x00692c74(*plVar10);
        if (cVar7 != cVar6) {
          *unaff_x19 = extraout_x8_07;
          *plVar10 = extraout_x9_02;
          func_0x00692c74(*unaff_x19);
          if (cVar7 != cVar6) {
            *unaff_x20 = extraout_x8_08;
            *unaff_x19 = extraout_x9_03;
          }
        }
      }
      return;
    case 5:
      plVar8 = plVar10;
      func_0x00693570(unaff_x20,unaff_x20 + 1,unaff_x20 + 2,unaff_x20 + 3);
      func_0x00692d40();
      FUN_00690324();
      func_0x00692c74(*plVar8);
      if (cVar7 != cVar6) {
        *puVar11 = extraout_x8_09;
        *plVar8 = extraout_x9_04;
        func_0x00692c74(*puVar11);
        if (cVar7 != cVar6) {
          *plVar10 = extraout_x8_10;
          *puVar11 = extraout_x9_05;
          func_0x00692c74(*plVar10);
          if (cVar7 != cVar6) {
            *unaff_x19 = extraout_x8_11;
            *plVar10 = extraout_x9_06;
            func_0x00692c74(*unaff_x19);
            if (cVar7 != cVar6) {
              *unaff_x20 = extraout_x8_12;
              *unaff_x19 = extraout_x9_07;
            }
          }
        }
      }
      return;
    }
    if ((long)uVar12 < 0x18) {
      if (!bVar5) {
        plVar10 = unaff_x20;
        if (unaff_x20 != unaff_x19) {
          while( true ) {
            unaff_x20 = unaff_x20 + 1;
            plVar8 = plVar10 + 1;
            if (plVar8 == unaff_x19) break;
            lVar13 = *plVar10;
            lVar19 = plVar10[1];
            iVar14 = *(int *)(lVar19 + 4);
            plVar16 = unaff_x20;
            plVar10 = plVar8;
            if (iVar14 < *(int *)(lVar13 + 4)) {
              do {
                *plVar16 = lVar13;
                lVar13 = plVar16[-2];
                plVar16 = plVar16 + -1;
              } while (iVar14 < *(int *)(lVar13 + 4));
              *plVar16 = lVar19;
            }
          }
        }
        break;
      }
      if (unaff_x20 == unaff_x19) break;
      lVar13 = 8;
      plVar10 = unaff_x20;
      goto LAB_0068ffe8;
    }
    if (puVar11 == (undefined8 *)0x0) {
      if (unaff_x20 == unaff_x19) break;
      uVar15 = uVar12 - 2 >> 1;
      uVar17 = uVar15;
      goto LAB_00690064;
    }
    plVar8 = unaff_x20 + (uVar12 >> 1);
    if (uVar12 < 0x81) {
      func_0x00693374(plVar8,unaff_x20);
    }
    else {
      func_0x00693374(unaff_x20,plVar8);
      FUN_0069029c(unaff_x20 + 1,plVar8 + -1,unaff_x19 + -2);
      FUN_0069029c(unaff_x20 + 2,plVar8 + 1,unaff_x19 + -3);
      FUN_0069029c(plVar8 + -1,plVar8,plVar8 + 1);
      lVar13 = *unaff_x20;
      *unaff_x20 = *plVar8;
      *plVar8 = lVar13;
    }
    puVar11 = (undefined8 *)((long)puVar11 - 1);
    lVar13 = *unaff_x20;
    if (bVar5) {
      iVar14 = *(int *)(lVar13 + 4);
    }
    else {
      iVar2 = *(int *)(unaff_x20[-1] + 4);
      iVar14 = *(int *)(lVar13 + 4);
      cVar6 = SBORROW4(iVar2,iVar14);
      cVar7 = iVar2 - iVar14 < 0;
      if (iVar14 <= iVar2) {
        func_0x006934c4();
        plVar8 = unaff_x20;
        if (cVar7 == cVar6) {
          lVar13 = extraout_x8;
          plVar16 = unaff_x20 + 1;
          do {
            plVar8 = plVar16;
            cVar6 = SBORROW8((long)plVar8,(long)unaff_x19);
            cVar7 = (long)plVar8 - (long)unaff_x19 < 0;
            if (unaff_x19 <= plVar8) break;
            func_0x00693038();
            lVar13 = extraout_x8_01;
            plVar16 = extraout_x10;
          } while (cVar7 == cVar6);
        }
        else {
          do {
            plVar8 = plVar8 + 1;
            func_0x006934c4();
            lVar13 = extraout_x8_00;
          } while (cVar7 == cVar6);
        }
        cVar6 = SBORROW8((long)plVar8,(long)unaff_x19);
        cVar7 = (long)plVar8 - (long)unaff_x19 < 0;
        plVar16 = unaff_x19;
        if (plVar8 < unaff_x19) {
          do {
            func_0x00693038();
            lVar13 = extraout_x8_02;
            plVar16 = extraout_x10_00;
          } while (cVar7 != cVar6);
        }
        while( true ) {
          cVar6 = SBORROW8((long)plVar8,(long)plVar16);
          cVar7 = (long)plVar8 - (long)plVar16 < 0;
          if (plVar16 <= plVar8) break;
          lVar13 = *plVar8;
          *plVar8 = *plVar16;
          *plVar16 = lVar13;
          do {
            plVar8 = plVar8 + 1;
            func_0x00693038();
          } while (cVar7 == cVar6);
          do {
            func_0x00693038();
            lVar13 = extraout_x8_03;
            plVar16 = extraout_x10_01;
          } while (cVar7 != cVar6);
        }
        plVar16 = plVar8 + -1;
        if (unaff_x20 != plVar16) {
          *unaff_x20 = *plVar16;
        }
        bVar5 = false;
        *plVar16 = lVar13;
        unaff_x20 = plVar8;
        goto LAB_0068fcd0;
      }
    }
    lVar19 = 0;
    do {
      lVar18 = *(long *)((long)unaff_x20 + lVar19 + 8);
      lVar19 = lVar19 + 8;
    } while (*(int *)(lVar18 + 4) < iVar14);
    plVar8 = (long *)((long)unaff_x20 + lVar19);
    plVar16 = unaff_x19;
    plVar23 = plVar8;
    if (lVar19 == 8) {
      do {
        plVar9 = plVar16;
        if (plVar16 <= plVar8) break;
        plVar16 = plVar16 + -1;
        plVar9 = plVar16;
      } while (iVar14 <= *(int *)(*plVar16 + 4));
    }
    else {
      do {
        plVar16 = plVar16 + -1;
        plVar9 = plVar16;
      } while (iVar14 <= *(int *)(*plVar16 + 4));
    }
    while (plVar23 < plVar16) {
      *plVar23 = *plVar16;
      *plVar16 = lVar18;
      do {
        plVar23 = plVar23 + 1;
        lVar18 = *plVar23;
      } while (*(int *)(lVar18 + 4) < iVar14);
      do {
        plVar16 = plVar16 + -1;
      } while (iVar14 <= *(int *)(*plVar16 + 4));
    }
    plVar16 = plVar23 + -1;
    if (unaff_x20 != plVar16) {
      *unaff_x20 = *plVar16;
    }
    *plVar16 = lVar13;
    if (plVar8 < plVar9) goto LAB_0068fe68;
    plVar8 = unaff_x20;
    FUN_00690414(unaff_x20,plVar16);
    plVar9 = plVar23;
    FUN_00690414(plVar23,unaff_x19);
    if ((int)plVar9 == 0) goto code_r0x0068fe64;
    unaff_x19 = plVar16;
  } while (((ulong)plVar8 & 1) == 0);
  goto LAB_00690288;
LAB_0068ffe8:
  if (plVar10 + 1 == unaff_x19) goto LAB_00690288;
  lVar19 = *plVar10;
  lVar18 = plVar10[1];
  iVar14 = *(int *)(lVar18 + 4);
  lVar20 = lVar13;
  if (iVar14 < *(int *)(lVar19 + 4)) {
    do {
      *(long *)((long)unaff_x20 + lVar20) = lVar19;
      lVar4 = lVar20 + -8;
      plVar8 = unaff_x20;
      if (lVar4 == 0) goto LAB_0069003c;
      lVar19 = *(long *)((long)unaff_x20 + lVar20 + -0x10);
      lVar20 = lVar4;
    } while (iVar14 < *(int *)(lVar19 + 4));
    plVar8 = (long *)((long)unaff_x20 + lVar4);
LAB_0069003c:
    *plVar8 = lVar18;
  }
  lVar13 = lVar13 + 8;
  plVar10 = plVar10 + 1;
  goto LAB_0068ffe8;
code_r0x0068fe64:
  unaff_x20 = plVar23;
  if (((ulong)plVar8 & 1) == 0) {
LAB_0068fe68:
    func_0x006934dc();
    FUN_0068fc98();
    bVar5 = false;
    unaff_x20 = plVar23;
  }
  goto LAB_0068fcd0;
LAB_00690064:
  do {
    if ((long)uVar17 <= (long)uVar15) {
      uVar21 = (uVar17 & 0x3fffffffffffffff) << 1 | 1;
      plVar10 = unaff_x20 + uVar21;
      uVar1 = uVar17 * 2 + 2;
      lVar19 = *plVar10;
      plVar8 = plVar10;
      lVar13 = lVar19;
      uVar22 = uVar21;
      if ((long)uVar1 < (long)uVar12) {
        lVar13 = plVar10[1];
        plVar8 = plVar10 + 1;
        uVar22 = uVar1;
        if (*(int *)(lVar13 + 4) <= *(int *)(lVar19 + 4)) {
          plVar8 = plVar10;
          lVar13 = lVar19;
          uVar22 = uVar21;
        }
      }
      lVar19 = unaff_x20[uVar17];
      iVar14 = *(int *)(lVar19 + 4);
      plVar10 = unaff_x20 + uVar17;
      if (iVar14 <= *(int *)(lVar13 + 4)) {
        do {
          plVar16 = plVar8;
          *plVar10 = lVar13;
          if ((long)uVar15 < (long)uVar22) break;
          uVar21 = uVar22 << 1 | 1;
          plVar10 = unaff_x20 + uVar21;
          uVar1 = uVar22 * 2 + 2;
          lVar18 = *plVar10;
          plVar8 = plVar10;
          lVar13 = lVar18;
          uVar22 = uVar21;
          if ((long)uVar1 < (long)uVar12) {
            lVar13 = plVar10[1];
            plVar8 = plVar10 + 1;
            uVar22 = uVar1;
            if (*(int *)(lVar13 + 4) <= *(int *)(lVar18 + 4)) {
              plVar8 = plVar10;
              lVar13 = lVar18;
              uVar22 = uVar21;
            }
          }
          plVar10 = plVar16;
        } while (iVar14 <= *(int *)(lVar13 + 4));
        *plVar16 = lVar19;
      }
    }
    uVar17 = uVar17 - 1;
  } while (-1 < (long)uVar17);
  for (; 1 < (long)uVar12; uVar12 = uVar12 - 1) {
    lVar13 = *unaff_x20;
    plVar10 = unaff_x20;
    uVar17 = 0;
    do {
      plVar16 = plVar10 + uVar17 + 1;
      lVar18 = *plVar16;
      uVar1 = uVar17 << 1 | 1;
      uVar15 = uVar17 * 2 + 2;
      plVar8 = plVar16;
      lVar19 = lVar18;
      uVar21 = uVar1;
      if ((long)uVar15 < (long)uVar12) {
        lVar19 = plVar10[uVar17 + 2];
        plVar8 = plVar10 + uVar17 + 2;
        uVar21 = uVar15;
        if (*(int *)(lVar19 + 4) <= *(int *)(lVar18 + 4)) {
          plVar8 = plVar16;
          lVar19 = lVar18;
          uVar21 = uVar1;
        }
      }
      *plVar10 = lVar19;
      plVar10 = plVar8;
      uVar17 = uVar21;
    } while ((long)uVar21 <= (long)(uVar12 - 2 >> 1));
    unaff_x19 = unaff_x19 + -1;
    if (plVar8 == unaff_x19) {
      *plVar8 = lVar13;
    }
    else {
      *plVar8 = *unaff_x19;
      *unaff_x19 = lVar13;
      lVar13 = (long)plVar8 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar13) {
        uVar17 = lVar13 - 2U >> 1;
        lVar19 = unaff_x20[uVar17];
        lVar13 = *plVar8;
        iVar14 = *(int *)(lVar13 + 4);
        plVar10 = unaff_x20 + uVar17;
        if (*(int *)(lVar19 + 4) < iVar14) {
          do {
            plVar16 = plVar10;
            *plVar8 = lVar19;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            lVar19 = unaff_x20[uVar17];
            plVar8 = plVar16;
            plVar10 = unaff_x20 + uVar17;
          } while (*(int *)(lVar19 + 4) < iVar14);
          *plVar16 = lVar13;
        }
      }
    }
  }
LAB_00690288:
  func_0x00693570(unaff_x30);
  return;
}



/* Entry: 0068b4e8; end: 0068b593;  */

undefined4 * FUN_0068b4e8(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068b580;
    }
    func_0x00692a6c();
    in_CY = (int)param_1 != 0;
    in_ZR = 0;
    if ((int)param_1 == 1) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        puVar2 = (uint *)(unaff_x20 + extraout_x8);
        func_0x0053a564();
        if ((puVar2 != (uint *)0x0) && ((*(byte *)((long)puVar2 + 10) & 1) == 0)) {
          unaff_x19 = (undefined4 *)(ulong)*puVar2;
        }
        return unaff_x19;
      }
      func_0x00692d18();
      if ((param_1 == (uint *)0x0) || (func_0x00692990(), ((ulong)param_1 & 1) != 0)) {
        func_0x00692a00();
        func_0x0068ec74();
        uVar4 = *param_1;
      }
      else {
        uVar4 = unaff_x19[0x14];
      }
      return (undefined4 *)(ulong)uVar4;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068b580:
    func_0x00692c24();
  }
  puVar3 = (undefined4 *)*unaff_x21;
  func_0x00692e2c();
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00692a6c();
      if ((int)puVar3 == 1) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(puVar3);
          func_0x006934a4();
          func_0x00693338();
          func_0x0053a490();
          *(undefined4 **)(puVar3 + 4) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *puVar3 = (int)unaff_x19;
          return puVar3;
        }
        func_0x00692b90();
        FUN_0068b640();
        return puVar3;
      }
      goto LAB_0068b630;
    }
    func_0x00692d00();
    puVar7 = param_4;
  }
  else {
    func_0x00692c5c();
    puVar7 = param_4;
  }
  func_0x00692c24();
LAB_0068b630:
  puVar3 = (undefined4 *)*unaff_x22;
  puVar6 = &UNK_00913d8e;
  func_0x00692e2c();
  func_0x0069294c();
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = *puVar7;
    func_0x00692928();
    *puVar3 = uVar5;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if ((int)puVar3 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return puVar3;
  }
  func_0x00692990();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 10);
    }
    func_0x00692b68();
  }
  uVar1 = *puVar7;
  func_0x00692928();
  *puVar3 = uVar1;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return puVar3;
}



/* Entry: 0068b594; end: 0068b63f;  */

void FUN_0068b594(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00692a6c();
      if ((int)param_1 == 1) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(param_1);
          func_0x006934a4();
          func_0x00693338();
          func_0x0053a490();
          *(undefined4 **)(param_1 + 4) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *param_1 = (int)unaff_x19;
          return;
        }
        func_0x00692b90();
        FUN_0068b640();
        return;
      }
      goto LAB_0068b630;
    }
    func_0x00692d00();
    puVar7 = param_4;
  }
  else {
    func_0x00692c5c();
    puVar7 = param_4;
  }
  func_0x00692c24();
LAB_0068b630:
  puVar3 = (undefined4 *)*unaff_x22;
  puVar6 = &UNK_00913d8e;
  func_0x00692e2c();
  func_0x0069294c();
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = *puVar7;
    func_0x00692928();
    *puVar3 = uVar5;
    func_0x00692a00();
    iVar2 = (int)puVar3;
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (iVar2 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar1 = *puVar7;
  func_0x00692928();
  *puVar3 = uVar1;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return;
}



/* Entry: 0068b640; end: 0068b73b;  */

void FUN_0068b640(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  func_0x0069294c();
  if (CONCAT44(uVar3,uVar2) == 0) {
    uVar1 = *param_4;
    func_0x00692928();
    *(undefined4 *)CONCAT44(uVar3,uVar2) = uVar1;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (uVar2 != 0xffffffff) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar1 = *param_4;
  func_0x00692928();
  *(undefined4 *)CONCAT44(uVar3,uVar2) = uVar1;
  func_0x00692a00();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar3,uVar2) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 0068b73c; end: 0068b7e3;  */

void FUN_0068b73c(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int extraout_w8;
  long extraout_x9;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692a6c();
      in_ZR = 0;
      if ((int)param_1 == 1) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692aa4();
          func_0x0069345c();
          func_0x00693338();
          func_0x0053abec();
          func_0x0053a308();
          func_0x0053a9c4();
          if ((param_2 & 1) != 0) {
            func_0x0053a27c();
            FUN_00538194();
            *unaff_x20 = param_1;
          }
          FUN_00533cb4();
          return;
        }
        func_0x00692b90();
        FUN_0068b7e4();
        return;
      }
      goto LAB_0068b7d4;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068b7d4:
  func_0x00692e2c(*unaff_x22);
  func_0x00692eb8();
  uVar1 = *unaff_x19;
  func_0x0053a638();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    func_0x00437928();
  }
  func_0x0053a628();
  *(undefined4 *)(extraout_x9 + (long)extraout_w8 * 4) = uVar1;
  return;
}



/* Entry: 0068b7e4; end: 0068b803;  */

void FUN_0068b7e4(void)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  undefined4 *unaff_x19;
  
  func_0x00692eb8();
  uVar1 = *unaff_x19;
  func_0x0053a638();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    func_0x00437928();
  }
  func_0x0053a628();
  *(undefined4 *)(extraout_x9 + (long)extraout_w8 * 4) = uVar1;
  return;
}



/* Entry: 0068b804; end: 0068b8af;  */

long * FUN_0068b804(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long *plVar5;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong *unaff_x22;
  long lVar6;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (uint)param_2;
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068b89c;
    }
    func_0x00692a6c();
    in_CY = 1 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 2) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        plVar1 = (long *)(unaff_x20 + extraout_x8);
        func_0x0053a9d8();
        if ((plVar1 != (long *)0x0) && ((*(byte *)((long)plVar1 + 10) & 1) == 0)) {
          unaff_x19 = (long *)*plVar1;
        }
        return unaff_x19;
      }
      func_0x00692d18();
      if ((param_1 == (undefined8 *)0x0) || (func_0x00692990(), ((ulong)param_1 & 1) != 0)) {
        func_0x00692a00();
        func_0x0068ecb0();
        plVar1 = (long *)*param_1;
      }
      else {
        plVar1 = (long *)unaff_x19[10];
      }
      return plVar1;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068b89c:
    func_0x00692c24();
  }
  plVar1 = (long *)*unaff_x21;
  func_0x00692e20();
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      plVar5 = param_4;
      func_0x00692a6c();
      if ((int)plVar1 == 2) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(plVar1);
          func_0x00693338();
          func_0x0053a96c();
          plVar1[2] = (long)param_4;
          if ((uVar2 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *plVar1 = (long)unaff_x19;
          return plVar1;
        }
        func_0x00692b90();
        FUN_0068b960();
        return plVar1;
      }
      goto LAB_0068b950;
    }
    func_0x00692d00();
    plVar5 = param_4;
  }
  else {
    func_0x00692c5c();
    plVar5 = param_4;
  }
  func_0x00692c24();
LAB_0068b950:
  plVar1 = (long *)*unaff_x22;
  puVar4 = &UNK_00913dba;
  func_0x00692e20();
  func_0x0069294c();
  if (plVar1 == (long *)0x0) {
    lVar6 = *plVar5;
    func_0x00692928();
    *plVar1 = lVar6;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if ((int)plVar1 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return plVar1;
  }
  func_0x00692990();
  if (((ulong)plVar1 & 1) == 0) {
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = (undefined *)unaff_x19[5];
    }
    func_0x00692b68();
  }
  lVar6 = *plVar5;
  func_0x00692928();
  *plVar1 = lVar6;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar3,uVar2) +
   (ulong)(uint)(*(int *)((long)plVar1 + 0x2c) +
                (int)((*(long *)(puVar4 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar4 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar4 + 4);
  return plVar1;
}



/* Entry: 0068b8b0; end: 0068b95f;  */

void FUN_0068b8b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong *unaff_x22;
  undefined8 uVar7;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (uint)param_2;
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      puVar6 = param_4;
      func_0x00692a6c();
      if ((int)param_1 == 2) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(param_1);
          func_0x00693338();
          func_0x0053a96c();
          param_1[2] = (long)param_4;
          if ((uVar3 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *param_1 = unaff_x19;
          return;
        }
        func_0x00692b90();
        FUN_0068b960();
        return;
      }
      goto LAB_0068b950;
    }
    func_0x00692d00();
    puVar6 = param_4;
  }
  else {
    func_0x00692c5c();
    puVar6 = param_4;
  }
  func_0x00692c24();
LAB_0068b950:
  puVar2 = (undefined8 *)*unaff_x22;
  puVar5 = &UNK_00913dba;
  func_0x00692e20();
  func_0x0069294c();
  if (puVar2 == (undefined8 *)0x0) {
    uVar7 = *puVar6;
    func_0x00692928();
    *puVar2 = uVar7;
    func_0x00692a00();
    iVar1 = (int)puVar2;
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (iVar1 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if (((ulong)puVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar7 = *puVar6;
  func_0x00692928();
  *puVar2 = uVar7;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar4,uVar3) +
   (ulong)(uint)(*(int *)((long)puVar2 + 0x2c) +
                (int)((*(long *)(puVar5 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar5 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar5 + 4);
  return;
}



/* Entry: 0068b960; end: 0068ba5b;  */

void FUN_0068b960(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0069294c();
  if (CONCAT44(uVar2,uVar1) == 0) {
    uVar3 = *param_4;
    func_0x00692928();
    *(undefined8 *)CONCAT44(uVar2,uVar1) = uVar3;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (uVar1 != 0xffffffff) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar3 = *param_4;
  func_0x00692928();
  *(undefined8 *)CONCAT44(uVar2,uVar1) = uVar3;
  func_0x00692a00();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar2,uVar1) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 0068ba5c; end: 0068bb07;  */

void FUN_0068ba5c(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int extraout_w8;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692a6c();
      in_ZR = 0;
      if ((int)param_1 == 2) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692aa4();
          func_0x00693338();
          func_0x0053abec();
          func_0x0053a308();
          func_0x0053a9c4();
          if ((param_2 & 1) != 0) {
            func_0x0053a27c();
            func_0x005381c4();
            *unaff_x20 = param_1;
          }
          FUN_00533dd0();
          return;
        }
        func_0x00692b90();
        FUN_0068bb08();
        return;
      }
      goto LAB_0068baf8;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068baf8:
  func_0x00692e20(*unaff_x22);
  func_0x00692eb8();
  func_0x0053a61c();
  func_0x0053a874();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_0048b00c();
  }
  func_0x0053a628();
  *(long *)(extraout_x9 + (long)extraout_w8 * 8) = unaff_x19;
  return;
}



/* Entry: 0068bb08; end: 0068bb27;  */

void FUN_0068bb08(undefined8 param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  undefined8 *unaff_x19;
  
  func_0x00692eb8();
  func_0x0053a61c(param_1,*unaff_x19);
  func_0x0053a874();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_0048b00c();
  }
  func_0x0053a628();
  *(undefined8 **)(extraout_x9 + (long)extraout_w8 * 8) = unaff_x19;
  return;
}



/* Entry: 0068bb28; end: 0068bbd3;  */

undefined4 * FUN_0068bb28(uint *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068bbc0;
    }
    func_0x00692a6c();
    in_CY = 2 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 3) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        puVar2 = (uint *)(unaff_x20 + extraout_x8);
        func_0x0053a564();
        if ((puVar2 != (uint *)0x0) && ((*(byte *)((long)puVar2 + 10) & 1) == 0)) {
          unaff_x19 = (undefined4 *)(ulong)*puVar2;
        }
        return unaff_x19;
      }
      func_0x00692d18();
      if ((param_1 == (uint *)0x0) || (func_0x00692990(), ((ulong)param_1 & 1) != 0)) {
        func_0x00692a00();
        func_0x0068ecec();
        uVar4 = *param_1;
      }
      else {
        uVar4 = unaff_x19[0x14];
      }
      return (undefined4 *)(ulong)uVar4;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068bbc0:
    func_0x00692c24();
  }
  puVar3 = (undefined4 *)*unaff_x21;
  func_0x00692dfc();
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00692a6c();
      if ((int)puVar3 == 3) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(puVar3);
          func_0x006934a4();
          func_0x00693338();
          func_0x0053a490();
          *(undefined4 **)(puVar3 + 4) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *puVar3 = (int)unaff_x19;
          return puVar3;
        }
        func_0x00692b90();
        FUN_0068bc80();
        return puVar3;
      }
      goto LAB_0068bc70;
    }
    func_0x00692d00();
    puVar7 = param_4;
  }
  else {
    func_0x00692c5c();
    puVar7 = param_4;
  }
  func_0x00692c24();
LAB_0068bc70:
  puVar3 = (undefined4 *)*unaff_x22;
  puVar6 = &UNK_00913de7;
  func_0x00692dfc();
  func_0x0069294c();
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = *puVar7;
    func_0x00692928();
    *puVar3 = uVar5;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if ((int)puVar3 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return puVar3;
  }
  func_0x00692990();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 10);
    }
    func_0x00692b68();
  }
  uVar1 = *puVar7;
  func_0x00692928();
  *puVar3 = uVar1;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return puVar3;
}



/* Entry: 0068bbd4; end: 0068bc7f;  */

void FUN_0068bbd4(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x22;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00692a6c();
      if ((int)param_1 == 3) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(param_1);
          func_0x006934a4();
          func_0x00693338();
          func_0x0053a490();
          *(undefined4 **)(param_1 + 4) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *param_1 = (int)unaff_x19;
          return;
        }
        func_0x00692b90();
        FUN_0068bc80();
        return;
      }
      goto LAB_0068bc70;
    }
    func_0x00692d00();
    puVar7 = param_4;
  }
  else {
    func_0x00692c5c();
    puVar7 = param_4;
  }
  func_0x00692c24();
LAB_0068bc70:
  puVar3 = (undefined4 *)*unaff_x22;
  puVar6 = &UNK_00913de7;
  func_0x00692dfc();
  func_0x0069294c();
  if (puVar3 == (undefined4 *)0x0) {
    uVar5 = *puVar7;
    func_0x00692928();
    *puVar3 = uVar5;
    func_0x00692a00();
    iVar2 = (int)puVar3;
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (iVar2 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar1 = *puVar7;
  func_0x00692928();
  *puVar3 = uVar1;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return;
}



/* Entry: 0068bc80; end: 0068bd7b;  */

void FUN_0068bc80(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  func_0x0069294c();
  if (CONCAT44(uVar3,uVar2) == 0) {
    uVar1 = *param_4;
    func_0x00692928();
    *(undefined4 *)CONCAT44(uVar3,uVar2) = uVar1;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (uVar2 != 0xffffffff) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar1 = *param_4;
  func_0x00692928();
  *(undefined4 *)CONCAT44(uVar3,uVar2) = uVar1;
  func_0x00692a00();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar3,uVar2) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 0068bd7c; end: 0068be23;  */

void FUN_0068bd7c(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int extraout_w8;
  long extraout_x9;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692a6c();
      in_ZR = 0;
      if ((int)param_1 == 3) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692aa4();
          func_0x0069345c();
          func_0x00693338();
          func_0x0053abec();
          func_0x0053a308();
          func_0x0053a9c4();
          if ((param_2 & 1) != 0) {
            func_0x0053a27c();
            func_0x005381f4();
            *unaff_x20 = param_1;
          }
          FUN_00533eec();
          return;
        }
        func_0x00692b90();
        FUN_0068be24();
        return;
      }
      goto LAB_0068be14;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068be14:
  func_0x00692dfc(*unaff_x22);
  func_0x00692eb8();
  uVar1 = *unaff_x19;
  func_0x0053a638();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_004eb308();
  }
  func_0x0053a628();
  *(undefined4 *)(extraout_x9 + (long)extraout_w8 * 4) = uVar1;
  return;
}



/* Entry: 0068be24; end: 0068be43;  */

void FUN_0068be24(void)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  undefined4 *unaff_x19;
  
  func_0x00692eb8();
  uVar1 = *unaff_x19;
  func_0x0053a638();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_004eb308();
  }
  func_0x0053a628();
  *(undefined4 *)(extraout_x9 + (long)extraout_w8 * 4) = uVar1;
  return;
}



/* Entry: 0068be44; end: 0068beef;  */

long * FUN_0068be44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long *plVar5;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong *unaff_x22;
  long lVar6;
  
  uVar3 = (undefined4)((ulong)param_2 >> 0x20);
  uVar2 = (uint)param_2;
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068bedc;
    }
    func_0x00692a6c();
    in_CY = 3 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 4) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        plVar1 = (long *)(unaff_x20 + extraout_x8);
        func_0x0053a9d8();
        if ((plVar1 != (long *)0x0) && ((*(byte *)((long)plVar1 + 10) & 1) == 0)) {
          unaff_x19 = (long *)*plVar1;
        }
        return unaff_x19;
      }
      func_0x00692d18();
      if ((param_1 == (undefined8 *)0x0) || (func_0x00692990(), ((ulong)param_1 & 1) != 0)) {
        func_0x00692a00();
        func_0x0068ed28();
        plVar1 = (long *)*param_1;
      }
      else {
        plVar1 = (long *)unaff_x19[10];
      }
      return plVar1;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068bedc:
    func_0x00692c24();
  }
  plVar1 = (long *)*unaff_x21;
  func_0x00692e14();
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      plVar5 = param_4;
      func_0x00692a6c();
      if ((int)plVar1 == 4) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(plVar1);
          func_0x00693338();
          func_0x0053a96c();
          plVar1[2] = (long)param_4;
          if ((uVar2 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *plVar1 = (long)unaff_x19;
          return plVar1;
        }
        func_0x00692b90();
        FUN_0068bfa0();
        return plVar1;
      }
      goto LAB_0068bf90;
    }
    func_0x00692d00();
    plVar5 = param_4;
  }
  else {
    func_0x00692c5c();
    plVar5 = param_4;
  }
  func_0x00692c24();
LAB_0068bf90:
  plVar1 = (long *)*unaff_x22;
  puVar4 = &UNK_00913e17;
  func_0x00692e14();
  func_0x0069294c();
  if (plVar1 == (long *)0x0) {
    lVar6 = *plVar5;
    func_0x00692928();
    *plVar1 = lVar6;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if ((int)plVar1 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return plVar1;
  }
  func_0x00692990();
  if (((ulong)plVar1 & 1) == 0) {
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = (undefined *)unaff_x19[5];
    }
    func_0x00692b68();
  }
  lVar6 = *plVar5;
  func_0x00692928();
  *plVar1 = lVar6;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar3,uVar2) +
   (ulong)(uint)(*(int *)((long)plVar1 + 0x2c) +
                (int)((*(long *)(puVar4 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar4 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar4 + 4);
  return plVar1;
}



/* Entry: 0068bef0; end: 0068bf9f;  */

void FUN_0068bef0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong *unaff_x22;
  undefined8 uVar7;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  uVar3 = (uint)param_2;
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      puVar6 = param_4;
      func_0x00692a6c();
      if ((int)param_1 == 4) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(param_1);
          func_0x00693338();
          func_0x0053a96c();
          param_1[2] = (long)param_4;
          if ((uVar3 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *param_1 = unaff_x19;
          return;
        }
        func_0x00692b90();
        FUN_0068bfa0();
        return;
      }
      goto LAB_0068bf90;
    }
    func_0x00692d00();
    puVar6 = param_4;
  }
  else {
    func_0x00692c5c();
    puVar6 = param_4;
  }
  func_0x00692c24();
LAB_0068bf90:
  puVar2 = (undefined8 *)*unaff_x22;
  puVar5 = &UNK_00913e17;
  func_0x00692e14();
  func_0x0069294c();
  if (puVar2 == (undefined8 *)0x0) {
    uVar7 = *puVar6;
    func_0x00692928();
    *puVar2 = uVar7;
    func_0x00692a00();
    iVar1 = (int)puVar2;
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (iVar1 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if (((ulong)puVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar7 = *puVar6;
  func_0x00692928();
  *puVar2 = uVar7;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar4,uVar3) +
   (ulong)(uint)(*(int *)((long)puVar2 + 0x2c) +
                (int)((*(long *)(puVar5 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar5 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar5 + 4);
  return;
}



/* Entry: 0068bfa0; end: 0068c09b;  */

void FUN_0068bfa0(undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 uVar3;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (uint)param_1;
  func_0x0069294c();
  if (CONCAT44(uVar2,uVar1) == 0) {
    uVar3 = *param_4;
    func_0x00692928();
    *(undefined8 *)CONCAT44(uVar2,uVar1) = uVar3;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (uVar1 != 0xffffffff) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar3 = *param_4;
  func_0x00692928();
  *(undefined8 *)CONCAT44(uVar2,uVar1) = uVar3;
  func_0x00692a00();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar2,uVar1) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 0068c09c; end: 0068c147;  */

void FUN_0068c09c(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int extraout_w8;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692a6c();
      in_ZR = 0;
      if ((int)param_1 == 4) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692aa4();
          func_0x00693338();
          func_0x0053abec();
          func_0x0053a308();
          func_0x0053a9c4();
          if ((param_2 & 1) != 0) {
            func_0x0053a27c();
            func_0x00538224();
            *unaff_x20 = param_1;
          }
          FUN_00534008();
          return;
        }
        func_0x00692b90();
        FUN_0068c148();
        return;
      }
      goto LAB_0068c138;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068c138:
  func_0x00692e14(*unaff_x22);
  func_0x00692eb8();
  func_0x0053a61c();
  func_0x0053a874();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_004df8b8();
  }
  func_0x0053a628();
  *(long *)(extraout_x9 + (long)extraout_w8 * 8) = unaff_x19;
  return;
}



/* Entry: 0068c148; end: 0068c167;  */

void FUN_0068c148(undefined8 param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  undefined8 *unaff_x19;
  
  func_0x00692eb8();
  func_0x0053a61c(param_1,*unaff_x19);
  func_0x0053a874();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_004df8b8();
  }
  func_0x0053a628();
  *(undefined8 **)(extraout_x9 + (long)extraout_w8 * 8) = unaff_x19;
  return;
}



/* Entry: 0068c168; end: 0068c213;  */

/* WARNING: Possible PIC construction at 0x0068c264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0068c268) */
/* WARNING: Removing unreachable block (ram,0x00692b44) */

ulong FUN_0068c168(ulong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined *puVar5;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_74;
  
  uVar8 = (undefined4)((ulong)param_3 >> 0x20);
  uVar6 = (uint)param_3;
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068c200;
    }
    func_0x00692a6c();
    in_CY = 5 < (uint)param_2;
    in_ZR = 0;
    if ((uint)param_2 == 6) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        uVar7 = (ulong)*(uint *)(unaff_x19 + 0x50);
        puVar2 = (uint *)(unaff_x20 + extraout_x8);
        func_0x005339b8();
        if ((puVar2 != (uint *)0x0) && ((*(byte *)((long)puVar2 + 10) & 1) == 0)) {
          uVar7 = (ulong)*puVar2;
        }
        return uVar7;
      }
      func_0x00692d18();
      if ((param_2 == (uint *)0x0) || (func_0x00692990(), ((ulong)param_2 & 1) != 0)) {
        func_0x00692a00();
        func_0x006923f4();
        uVar6 = *param_2;
      }
      else {
        uVar6 = *(uint *)(unaff_x19 + 0x50);
      }
      return (ulong)uVar6;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068c200:
    func_0x00692c24();
  }
  puVar3 = (undefined4 *)*unaff_x21;
  puVar5 = &UNK_00913e3d;
  func_0x00692e08();
  func_0x00692d8c();
  uStack_74 = (undefined4)param_1;
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      uVar7 = param_1;
      goto LAB_0068c2b8;
    }
    uVar7 = param_1;
    func_0x00692a6c();
    if ((int)puVar3 == 6) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692c0c();
        uVar4 = SUB81(puVar5,0);
        func_0x00692ff4(puVar3);
        uVar7 = param_1;
        FUN_0053572c();
        *(long *)(puVar3 + 4) = unaff_x19;
        if ((uVar6 & 1) != 0) {
          *(undefined1 *)(puVar3 + 2) = uVar4;
          *(undefined1 *)((long)puVar3 + 9) = 0;
        }
        func_0x0053a4e0();
        *puVar3 = (int)param_1;
        return uVar7;
      }
      param_5 = &uStack_74;
      func_0x00692a00();
      goto SUB_0068c2cc;
    }
  }
  else {
    func_0x00692c5c();
    uVar7 = param_1;
LAB_0068c2b8:
    func_0x00692c24();
  }
  puVar3 = (undefined4 *)*unaff_x21;
  puVar5 = &UNK_00913e46;
  func_0x00692e08();
SUB_0068c2cc:
  func_0x0069294c();
  if (puVar3 == (undefined4 *)0x0) {
    uVar8 = *param_5;
    func_0x00692928();
    *puVar3 = uVar8;
    func_0x00692a00();
    iVar1 = (int)puVar3;
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (iVar1 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return uVar7;
  }
  func_0x00692990();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar9 = *param_5;
  func_0x00692928();
  *puVar3 = uVar9;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar8,uVar6) +
   (ulong)(uint)(puVar3[0xb] +
                (int)((*(long *)(puVar5 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar5 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar5 + 4);
  return uVar7;
}



/* Entry: 0068c214; end: 0068c33b;  */

/* WARNING: Possible PIC construction at 0x0068c264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0068c268) */
/* WARNING: Removing unreachable block (ram,0x00692b44) */

void FUN_0068c214(undefined4 param_1,undefined4 *param_2,undefined8 param_3,undefined *param_4,
                 undefined4 *param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong *unaff_x21;
  undefined4 uVar5;
  undefined4 uStack_44;
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (uint)param_3;
  uStack_44 = param_1;
  func_0x00692d8c();
  uVar5 = uStack_44;
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068c2b8;
    }
    func_0x00692a6c();
    if ((int)param_2 == 6) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692c0c();
        uVar4 = SUB81(param_4,0);
        func_0x00692ff4(param_2);
        FUN_0053572c();
        *(long *)(param_2 + 4) = unaff_x19;
        if ((uVar2 & 1) != 0) {
          *(undefined1 *)(param_2 + 2) = uVar4;
          *(undefined1 *)((long)param_2 + 9) = 0;
        }
        func_0x0053a4e0();
        *param_2 = uVar5;
        return;
      }
      param_5 = &uStack_44;
      func_0x00692a00();
      goto SUB_0068c2cc;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068c2b8:
    func_0x00692c24();
  }
  param_2 = (undefined4 *)*unaff_x21;
  param_4 = &UNK_00913e46;
  func_0x00692e08();
SUB_0068c2cc:
  func_0x0069294c();
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = *param_5;
    func_0x00692928();
    *param_2 = uVar5;
    func_0x00692a00();
    iVar1 = (int)param_2;
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (iVar1 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if (((ulong)param_2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_4 = (undefined *)0x0;
    }
    else {
      param_4 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar5 = *param_5;
  func_0x00692928();
  *param_2 = uVar5;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar3,uVar2) +
   (ulong)(uint)(param_2[0xb] +
                (int)((*(long *)(param_4 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_4 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_4 + 4);
  return;
}



/* Entry: 0068c33c; end: 0068c3cb;  */

ulong FUN_0068c33c(ulong param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  uint *param_6)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  int *piVar2;
  int extraout_w8;
  int iVar3;
  long extraout_x8;
  uint *unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  uint uVar4;
  ulong uVar5;
  
  func_0x00692978();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00692d0c();
      goto LAB_0068c3b8;
    }
    func_0x00692a3c();
    in_CY = 5 < (uint)param_2;
    in_ZR = 0;
    if ((uint)param_2 == 6) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00692ac0();
        func_0x006899bc();
        return (ulong)*(uint *)(param_2[1] + (long)unaff_w20 * 4);
      }
      func_0x00692a90();
      func_0x0053a564();
      if (param_2 != (long *)0x0) {
        func_0x0053a5c4();
        return (ulong)*(uint *)(extraout_x8 + (long)(int)unaff_x19 * 4);
      }
      func_0x0053a214();
      func_0x0053a544();
      func_0x0053a244();
      func_0x0053a53c();
      unaff_x19 = param_6;
      goto FUN_005340f8;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068c3b8:
    func_0x00692c24();
  }
  param_2 = (long *)*unaff_x22;
  func_0x00692e08();
  func_0x00692d8c();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      uVar5 = param_1;
      func_0x00692a6c();
      in_ZR = 0;
      if ((int)param_2 == 6) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
          func_0x00692a00();
          FUN_0068c48c();
          return uVar5;
        }
        func_0x00692c0c();
        func_0x00692ff4(param_2);
FUN_005340f8:
        func_0x0053a5d0();
        param_2[2] = (long)unaff_x19;
        if ((param_3 & 1) != 0) {
          plVar1 = param_2;
          func_0x0053a8c0();
          func_0x00538254();
          *param_2 = (long)plVar1;
        }
        FUN_00534164(param_1);
        return param_1;
      }
      goto LAB_0068c47c;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068c47c:
  piVar2 = (int *)*unaff_x21;
  func_0x00692e08();
  func_0x00692eb8();
  uVar4 = *unaff_x19;
  uVar5 = (ulong)uVar4;
  func_0x0053a874();
  iVar3 = extraout_w8;
  if ((bool)in_ZR) {
    FUN_00538284(piVar2);
    iVar3 = *piVar2;
  }
  *piVar2 = iVar3 + 1;
  *(uint *)(*(long *)(piVar2 + 2) + (long)iVar3 * 4) = uVar4;
  return uVar5;
}



/* Entry: 0068c3cc; end: 0068c48b;  */

void FUN_0068c3cc(undefined8 param_1,long *param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  int *piVar2;
  int extraout_w8;
  int iVar3;
  undefined4 *unaff_x19;
  undefined8 *unaff_x21;
  undefined4 uVar4;
  
  func_0x00692d8c();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692a6c();
      in_ZR = 0;
      if ((int)param_2 == 6) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00692c0c();
          func_0x00692ff4(param_2);
          func_0x0053a5d0();
          param_2[2] = (long)unaff_x19;
          if ((param_3 & 1) != 0) {
            plVar1 = param_2;
            func_0x0053a8c0();
            func_0x00538254();
            *param_2 = (long)plVar1;
          }
          FUN_00534164(param_1);
          return;
        }
        func_0x00692a00();
        FUN_0068c48c();
        return;
      }
      goto LAB_0068c47c;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068c47c:
  piVar2 = (int *)*unaff_x21;
  func_0x00692e08();
  func_0x00692eb8();
  uVar4 = *unaff_x19;
  func_0x0053a874();
  iVar3 = extraout_w8;
  if ((bool)in_ZR) {
    FUN_00538284(piVar2);
    iVar3 = *piVar2;
  }
  *piVar2 = iVar3 + 1;
  *(undefined4 *)(*(long *)(piVar2 + 2) + (long)iVar3 * 4) = uVar4;
  return;
}



/* Entry: 0068c48c; end: 0068c4ab;  */

void FUN_0068c48c(int *param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  int iVar1;
  undefined4 *unaff_x19;
  undefined4 uVar2;
  
  func_0x00692eb8();
  uVar2 = *unaff_x19;
  func_0x0053a874();
  iVar1 = extraout_w8;
  if ((bool)in_ZR) {
    FUN_00538284(param_1);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 1;
  *(undefined4 *)(*(long *)(param_1 + 2) + (long)iVar1 * 4) = uVar2;
  return;
}



/* Entry: 0068c4ac; end: 0068c557;  */

/* WARNING: Possible PIC construction at 0x0068c5a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0068c5ac) */
/* WARNING: Removing unreachable block (ram,0x00692b44) */

undefined8
FUN_0068c4ac(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (uint)param_3;
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068c544;
    }
    func_0x00692a6c();
    in_CY = 4 < (uint)param_2;
    in_ZR = 0;
    if ((uint)param_2 == 5) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
        puVar2 = (undefined8 *)(unaff_x20 + extraout_x8);
        func_0x005339b8();
        if ((puVar2 != (undefined8 *)0x0) && ((*(byte *)((long)puVar2 + 10) & 1) == 0)) {
          uVar7 = *puVar2;
        }
        return uVar7;
      }
      func_0x00692d18();
      if ((param_2 == (undefined8 *)0x0) || (func_0x00692990(), ((ulong)param_2 & 1) != 0)) {
        func_0x00692a00();
        FUN_00692490();
        uVar7 = *param_2;
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
      }
      return uVar7;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068c544:
    func_0x00692c24();
  }
  puVar2 = (undefined8 *)*unaff_x21;
  puVar6 = &UNK_00913e69;
  func_0x00692de4();
  func_0x00692d8c();
  uStack_78 = param_1;
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      uVar7 = param_1;
      goto LAB_0068c5fc;
    }
    uVar7 = param_1;
    func_0x00692a6c();
    if ((int)puVar2 == 5) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692c0c();
        uVar5 = SUB81(puVar6,0);
        func_0x00692ff4(puVar2);
        uVar7 = param_1;
        FUN_0053572c();
        puVar2[2] = unaff_x19;
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)(puVar2 + 1) = uVar5;
          *(undefined1 *)((long)puVar2 + 9) = 0;
        }
        func_0x0053a4e0();
        *puVar2 = param_1;
        return uVar7;
      }
      param_5 = &uStack_78;
      func_0x00692a00();
      goto SUB_0068c610;
    }
  }
  else {
    func_0x00692c5c();
    uVar7 = param_1;
LAB_0068c5fc:
    func_0x00692c24();
  }
  puVar2 = (undefined8 *)*unaff_x21;
  puVar6 = &UNK_00913e73;
  func_0x00692de4();
SUB_0068c610:
  func_0x0069294c();
  if (puVar2 == (undefined8 *)0x0) {
    uVar8 = *param_5;
    func_0x00692928();
    *puVar2 = uVar8;
    func_0x00692a00();
    iVar1 = (int)puVar2;
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (iVar1 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return uVar7;
  }
  func_0x00692990();
  if (((ulong)puVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar8 = *param_5;
  func_0x00692928();
  *puVar2 = uVar8;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar4,uVar3) +
   (ulong)(uint)(*(int *)((long)puVar2 + 0x2c) +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return uVar7;
}



/* Entry: 0068c558; end: 0068c67f;  */

/* WARNING: Possible PIC construction at 0x0068c5a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0068c5ac) */
/* WARNING: Removing unreachable block (ram,0x00692b44) */

void FUN_0068c558(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined *param_4,
                 undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong *unaff_x21;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (uint)param_3;
  func_0x00692d8c();
  uStack_48 = param_1;
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068c5fc;
    }
    func_0x00692a6c();
    if ((int)param_2 == 5) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692c0c();
        uVar4 = SUB81(param_4,0);
        func_0x00692ff4(param_2);
        FUN_0053572c();
        param_2[2] = unaff_x19;
        if ((uVar2 & 1) != 0) {
          *(undefined1 *)(param_2 + 1) = uVar4;
          *(undefined1 *)((long)param_2 + 9) = 0;
        }
        func_0x0053a4e0();
        *param_2 = param_1;
        return;
      }
      param_5 = &uStack_48;
      func_0x00692a00();
      goto SUB_0068c610;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068c5fc:
    func_0x00692c24();
  }
  param_2 = (undefined8 *)*unaff_x21;
  param_4 = &UNK_00913e73;
  func_0x00692de4();
SUB_0068c610:
  func_0x0069294c();
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = *param_5;
    func_0x00692928();
    *param_2 = uVar5;
    func_0x00692a00();
    iVar1 = (int)param_2;
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (iVar1 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if (((ulong)param_2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_4 = (undefined *)0x0;
    }
    else {
      param_4 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar5 = *param_5;
  func_0x00692928();
  *param_2 = uVar5;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar3,uVar2) +
   (ulong)(uint)(*(int *)((long)param_2 + 0x2c) +
                (int)((*(long *)(param_4 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_4 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_4 + 4);
  return;
}



/* Entry: 0068c680; end: 0068c70f;  */

undefined8
FUN_0068c680(undefined8 param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            undefined8 *param_6)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  int *piVar2;
  int extraout_w8;
  int iVar3;
  long extraout_x8;
  undefined8 *unaff_x19;
  int unaff_w20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00692978();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00692d0c();
      goto LAB_0068c6fc;
    }
    func_0x00692a3c();
    in_CY = 4 < (uint)param_2;
    in_ZR = 0;
    if ((uint)param_2 == 5) {
      if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00692ac0();
        func_0x00689980();
        return *(undefined8 *)(param_2[1] + (long)unaff_w20 * 8);
      }
      func_0x00692a90();
      func_0x0053a564();
      if (param_2 != (long *)0x0) {
        func_0x0053a5c4();
        return *(undefined8 *)(extraout_x8 + (long)(int)unaff_x19 * 8);
      }
      func_0x0053a214();
      func_0x0053a544();
      func_0x0053a244();
      func_0x0053a53c();
      unaff_x19 = param_6;
      goto FUN_00534268;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068c6fc:
    func_0x00692c24();
  }
  param_2 = (long *)*unaff_x22;
  func_0x00692de4();
  func_0x00692d8c();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      uVar4 = param_1;
      func_0x00692a6c();
      in_ZR = 0;
      if ((int)param_2 == 5) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
          func_0x00692a00();
          FUN_0068c7d0();
          return uVar4;
        }
        func_0x00692c0c();
        func_0x00692ff4(param_2);
FUN_00534268:
        func_0x0053a5d0();
        param_2[2] = (long)unaff_x19;
        if ((param_3 & 1) != 0) {
          plVar1 = param_2;
          func_0x0053a8c0();
          FUN_0053838c();
          *param_2 = (long)plVar1;
        }
        FUN_005342d4(param_1);
        return param_1;
      }
      goto LAB_0068c7c0;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068c7c0:
  piVar2 = (int *)*unaff_x21;
  func_0x00692de4();
  func_0x00692eb8();
  uVar5 = *unaff_x19;
  uVar4 = uVar5;
  func_0x0053a874();
  iVar3 = extraout_w8;
  if ((bool)in_ZR) {
    FUN_005383bc(piVar2);
    iVar3 = *piVar2;
  }
  *piVar2 = iVar3 + 1;
  *(undefined8 *)(*(long *)(piVar2 + 2) + (long)iVar3 * 8) = uVar5;
  return uVar4;
}



/* Entry: 0068c710; end: 0068c7cf;  */

void FUN_0068c710(undefined8 param_1,long *param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  int *piVar2;
  int extraout_w8;
  int iVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar4;
  
  func_0x00692d8c();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692a6c();
      in_ZR = 0;
      if ((int)param_2 == 5) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x00692c0c();
          func_0x00692ff4(param_2);
          func_0x0053a5d0();
          param_2[2] = (long)unaff_x19;
          if ((param_3 & 1) != 0) {
            plVar1 = param_2;
            func_0x0053a8c0();
            FUN_0053838c();
            *param_2 = (long)plVar1;
          }
          FUN_005342d4(param_1);
          return;
        }
        func_0x00692a00();
        FUN_0068c7d0();
        return;
      }
      goto LAB_0068c7c0;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068c7c0:
  piVar2 = (int *)*unaff_x21;
  func_0x00692de4();
  func_0x00692eb8();
  uVar4 = *unaff_x19;
  func_0x0053a874();
  iVar3 = extraout_w8;
  if ((bool)in_ZR) {
    FUN_005383bc(piVar2);
    iVar3 = *piVar2;
  }
  *piVar2 = iVar3 + 1;
  *(undefined8 *)(*(long *)(piVar2 + 2) + (long)iVar3 * 8) = uVar4;
  return;
}



/* Entry: 0068c7d0; end: 0068c7ef;  */

void FUN_0068c7d0(int *param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  int iVar1;
  undefined8 *unaff_x19;
  undefined8 uVar2;
  
  func_0x00692eb8();
  uVar2 = *unaff_x19;
  func_0x0053a874();
  iVar1 = extraout_w8;
  if ((bool)in_ZR) {
    FUN_005383bc(param_1);
    iVar1 = *param_1;
  }
  *param_1 = iVar1 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = uVar2;
  return;
}



/* Entry: 0068c7f0; end: 0068c89f;  */

undefined1 * FUN_0068c7f0(byte *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  byte *pbVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  uVar5 = (uint)param_2;
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068c88c;
    }
    func_0x00692a6c();
    in_CY = 6 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 7) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x00692eac();
        pbVar3 = (byte *)(unaff_x20 + extraout_x8);
        func_0x0053a564();
        if ((pbVar3 != (byte *)0x0) && ((pbVar3[10] & 1) == 0)) {
          unaff_x19 = (ulong)*pbVar3;
        }
        return (undefined1 *)(ulong)((uint)unaff_x19 & 1);
      }
      func_0x00692d18();
      if ((param_1 == (byte *)0x0) || (func_0x00692990(), ((ulong)param_1 & 1) != 0)) {
        func_0x00692a00();
        FUN_0068ec38();
        bVar1 = *param_1;
      }
      else {
        bVar1 = *(byte *)(unaff_x19 + 0x50);
      }
      return (undefined1 *)(ulong)(bVar1 & 1);
    }
  }
  else {
    func_0x00692c5c();
LAB_0068c88c:
    func_0x00692c24();
  }
  puVar4 = (undefined1 *)*unaff_x21;
  func_0x00692dd8();
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      puVar8 = param_4;
      func_0x00692a6c();
      if ((int)puVar4 == 7) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(puVar4);
          func_0x006934a4();
          func_0x00693338();
          func_0x0053a490();
          *(undefined1 **)(puVar4 + 0x10) = param_4;
          if ((uVar5 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *puVar4 = (char)unaff_x19;
          return puVar4;
        }
        func_0x00692b90();
        FUN_0068c94c();
        return puVar4;
      }
      goto LAB_0068c93c;
    }
    func_0x00692d00();
    puVar8 = param_4;
  }
  else {
    func_0x00692c5c();
    puVar8 = param_4;
  }
  func_0x00692c24();
LAB_0068c93c:
  puVar4 = (undefined1 *)*unaff_x22;
  puVar7 = &UNK_00913ea1;
  func_0x00692dd8();
  func_0x0069294c();
  if (puVar4 == (undefined1 *)0x0) {
    uVar2 = *puVar8;
    func_0x00692928();
    *puVar4 = uVar2;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if ((int)puVar4 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return puVar4;
  }
  func_0x00692990();
  if (((ulong)puVar4 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar2 = *puVar8;
  func_0x00692928();
  *puVar4 = uVar2;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar6,uVar5) +
   (ulong)(uint)(*(int *)(puVar4 + 0x2c) +
                (int)((*(long *)(puVar7 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar7 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar7 + 4);
  return puVar4;
}



/* Entry: 0068c8a0; end: 0068c94b;  */

void FUN_0068c8a0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined1 uStack000000000000000f;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x00693400();
  func_0x00692d54();
  uStack000000000000000f = SUB81(param_4,0);
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      puVar7 = param_4;
      func_0x00692a6c();
      if ((int)param_1 == 7) {
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692b58(param_1);
          func_0x006934a4();
          func_0x00693338();
          func_0x0053a490();
          *(undefined1 **)(param_1 + 0x10) = param_4;
          if ((uVar4 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *param_1 = (char)unaff_x19;
          return;
        }
        func_0x00692b90();
        FUN_0068c94c();
        return;
      }
      goto LAB_0068c93c;
    }
    func_0x00692d00();
    puVar7 = param_4;
  }
  else {
    func_0x00692c5c();
    puVar7 = param_4;
  }
  func_0x00692c24();
LAB_0068c93c:
  puVar3 = (undefined1 *)*unaff_x22;
  puVar6 = &UNK_00913ea1;
  func_0x00692dd8();
  func_0x0069294c();
  if (puVar3 == (undefined1 *)0x0) {
    uVar1 = *puVar7;
    func_0x00692928();
    *puVar3 = uVar1;
    func_0x00692a00();
    iVar2 = (int)puVar3;
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (iVar2 != -1) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if (((ulong)puVar3 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = *(undefined **)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar1 = *puVar7;
  func_0x00692928();
  *puVar3 = uVar1;
  func_0x00692a00();
  *(undefined4 *)
   (CONCAT44(uVar5,uVar4) +
   (ulong)(uint)(*(int *)(puVar3 + 0x2c) +
                (int)((*(long *)(puVar6 + 0x28) -
                      *(long *)(*(long *)(*(long *)(puVar6 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar6 + 4);
  return;
}



/* Entry: 0068c94c; end: 0068ca47;  */

void FUN_0068c94c(undefined8 param_1,long param_2,long param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_w8;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  func_0x0069294c();
  if (CONCAT44(uVar3,uVar2) == 0) {
    uVar1 = *param_4;
    func_0x00692928();
    *(undefined1 *)CONCAT44(uVar3,uVar2) = uVar1;
    func_0x00692a00();
    func_0x00692d80();
    func_0x00692c68();
    func_0x0068b0fc();
    if (uVar2 != 0xffffffff) {
      func_0x00693210();
      *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
    }
    return;
  }
  func_0x00692990();
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    func_0x00692b68();
  }
  uVar1 = *param_4;
  func_0x00692928();
  *(undefined1 *)CONCAT44(uVar3,uVar2) = uVar1;
  func_0x00692a00();
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(CONCAT44(uVar3,uVar2) + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 0068ca48; end: 0068ca6b;  */

long FUN_0068ca48(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x006899f8();
  return *(long *)(param_1 + 8) + (long)param_4;
}



/* Entry: 0068ca6c; end: 0068cb13;  */

void FUN_0068ca6c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  int extraout_w8;
  long extraout_x9;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined1 uStack000000000000000f;
  
  uStack000000000000000f = param_4;
  func_0x00693400();
  func_0x00692d54();
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692a6c();
      in_ZR = 0;
      if ((int)param_1 == 7) {
        if (((byte)unaff_x19[1] >> 3 & 1) != 0) {
          func_0x006929f0();
          func_0x00692aa4();
          func_0x0069345c();
          func_0x00693338();
          func_0x0053abec();
          func_0x0053a308();
          func_0x0053a9c4();
          if ((param_2 & 1) != 0) {
            func_0x0053a27c();
            FUN_005384c8();
            *unaff_x20 = param_1;
          }
          FUN_00534404();
          return;
        }
        func_0x00692b90();
        FUN_0068cb14();
        return;
      }
      goto code_r0x00534404;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
code_r0x00534404:
  func_0x00692dd8(*unaff_x22);
  func_0x00692eb8();
  uVar1 = *unaff_x19;
  func_0x0053a638();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_005384f8();
  }
  func_0x0053a628();
  *(undefined1 *)(extraout_x9 + extraout_w8) = uVar1;
  return;
}



/* Entry: 0068cb14; end: 0068cb33;  */

void FUN_0068cb14(void)

{
  undefined1 uVar1;
  undefined1 in_ZR;
  int extraout_w8;
  long extraout_x9;
  undefined1 *unaff_x19;
  
  func_0x00692eb8();
  uVar1 = *unaff_x19;
  func_0x0053a638();
  if ((bool)in_ZR) {
    func_0x0053aaa0();
    FUN_005384f8();
  }
  func_0x0053a628();
  *(undefined1 *)(extraout_x9 + extraout_w8) = uVar1;
  return;
}



/* Entry: 0068cb34; end: 0068cea3;  */

ulong * FUN_0068cb34(ulong *param_1,ulong *param_2,undefined8 param_3,ulong *param_4,ulong *param_5)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ulong **ppuVar6;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  uint extraout_w8;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 uVar15;
  long unaff_x21;
  undefined8 *******pppppppuVar16;
  code *pcVar17;
  ulong *puStack_90;
  undefined8 ******ppppppuStack_70;
  code *pcStack_68;
  ulong *puStack_60;
  undefined8 *****pppppuStack_40;
  undefined8 uStack_38;
  
  puVar10 = param_2;
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00693308();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068cc34;
    }
    func_0x00692be0();
    in_CY = 8 < (uint)puVar10;
    in_ZR = 0;
    if ((uint)puVar10 == 9) {
      if ((*(byte *)((long)param_4 + 1) >> 3 & 1) != 0) {
        func_0x00693064();
        goto LAB_0068cbe8;
      }
      func_0x00692e94();
      if (puVar10 == (ulong *)0x0) {
LAB_0068cb88:
        func_0x00693190();
        uVar7 = (int)puVar10 == 1;
        if ((bool)uVar7) {
          func_0x00692e94();
          if (puVar10 == (ulong *)0x0) {
            func_0x00692a5c();
            FUN_00691adc();
          }
          else {
            func_0x00692a5c();
            FUN_00691a40();
            puVar10 = (ulong *)*puVar10;
          }
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          FUN_00559ebc();
          return puVar10;
        }
        func_0x00692dc0();
        if ((int)puVar10 != 0) {
          func_0x00692a5c();
          FUN_00691b78();
          goto LAB_0068cbe8;
        }
        func_0x00692a5c();
        FUN_00691c14();
        func_0x006934d0();
        if (!(bool)uVar7) {
          puVar10 = (ulong *)(extraout_x8 & 0xfffffffffffffffc);
          goto LAB_0068cbe8;
        }
      }
      else {
        func_0x00692a5c();
        FUN_00689ae8();
        if (((ulong)puVar10 & 1) != 0) goto LAB_0068cb88;
      }
      puVar10 = (ulong *)param_4[10];
LAB_0068cbe8:
                    /* WARNING: Could not recover jumptable at 0x00779c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__00998a18)
                (param_1,puVar10);
      return param_1;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068cc34:
    func_0x00692e58();
  }
  uVar11 = *param_2;
  func_0x00692c84();
  uStack_38 = 0x68cc48;
  puStack_60 = param_2;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x00692978();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068cd54;
    }
    func_0x00692ad0();
    in_CY = 8 < (uint)uVar11;
    in_ZR = 0;
    param_4 = param_5;
    if ((uint)uVar11 == 9) {
      if ((*(byte *)((long)param_1 + 1) >> 3 & 1) != 0) {
        puVar8 = (undefined8 *)(unaff_x21 + (ulong)(uint)param_2[5]);
        func_0x0053a9d8(puVar8,*(undefined4 *)((long)param_1 + 4),param_1[10]);
        if ((puVar8 != (undefined8 *)0x0) && ((*(byte *)((long)puVar8 + 10) & 1) == 0)) {
          param_1 = (ulong *)*puVar8;
        }
        return param_1;
      }
      func_0x00692d18();
      if (uVar11 != 0) {
        func_0x00692ac0();
        FUN_00689ae8();
        if ((uVar11 & 1) == 0) goto LAB_0068cd14;
      }
      func_0x00693264();
      uVar7 = (int)uVar11 == 1;
      if ((bool)uVar7) {
        func_0x00692d18();
        if (uVar11 == 0) {
          func_0x00692ac0();
          FUN_00691adc();
        }
        else {
          func_0x00692ac0();
          FUN_00691a40();
        }
        FUN_00559ebc();
        return param_5;
      }
      param_2 = param_2 + 1;
      func_0x0068fc18(param_2,param_1);
      if ((int)param_2 != 0) {
        func_0x00692ac0();
        func_0x00692914();
        if (param_2 != (ulong *)0x0) {
          func_0x00692a84();
          return (ulong *)((long)param_1 + ((ulong)param_2 & 0xffffffff));
        }
        func_0x00692a2c();
        func_0x006928e4();
        if ((int)param_2 != 0) {
          func_0x00692a2c();
          func_0x006928fc();
          func_0x00692e60();
          if ((extraout_w8 >> 5 & 1) == 0) {
            return param_2;
          }
          return (ulong *)*param_2;
        }
        func_0x00692a78();
        return (ulong *)((long)param_1 + ((ulong)param_2 & 0xffffffff));
      }
      func_0x00692ac0();
      FUN_00691c14();
      func_0x006934d0();
      if (!(bool)uVar7) {
        return (ulong *)(extraout_x8_00 & 0xfffffffffffffffc);
      }
LAB_0068cd14:
      return (ulong *)param_1[10];
    }
  }
  else {
    func_0x00692c5c();
LAB_0068cd54:
    func_0x00692c24();
  }
  puVar12 = (ulong *)*param_2;
  puVar10 = (ulong *)&UNK_00913ecb;
  puVar9 = param_1;
  func_0x00692ea4();
  ppuVar6 = &puStack_90;
  pcStack_68 = (code *)0x68cd6c;
  pppppppuVar16 = &ppppppuStack_70;
  puVar13 = puVar12;
  puStack_90 = param_2;
  ppppppuStack_70 = &pppppuStack_40;
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00693308();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068ce90;
    }
    func_0x00692be0();
    if ((int)puVar13 == 9) {
      if ((*(byte *)((long)puVar10 + 1) >> 3 & 1) == 0) {
        func_0x00692e94();
        if (puVar13 == (ulong *)0x0) {
LAB_0068cdc0:
          func_0x00693190();
          uVar7 = (int)puVar13 == 1;
          if ((bool)uVar7) {
            func_0x00692e94();
            if (puVar13 == (ulong *)0x0) {
              func_0x00692a5c();
              FUN_00691adc();
            }
            else {
              func_0x00692a5c();
              FUN_00691a40();
              puVar13 = (ulong *)*puVar13;
            }
            if (((*puVar13 & 1) == 0) || (uVar11 = puVar13[1], uVar11 == 0)) {
              uVar11 = *puVar13;
              extraout_x8_01[1] = puVar13[1];
              *extraout_x8_01 = uVar11;
            }
            else {
              piVar2 = (int *)(uVar11 + 8);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = *piVar2 + 4;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              *extraout_x8_01 = 1;
              extraout_x8_01[1] = uVar11;
              if (1 < *puVar13) {
                FUN_0055ae58(extraout_x8_01,puVar13,8);
              }
            }
            return extraout_x8_01;
          }
          func_0x00692dc0();
          if ((int)puVar13 != 0) {
            func_0x00692a5c();
            FUN_00691b78();
            goto LAB_0068cde8;
          }
          func_0x00692a5c();
          FUN_00691c14();
          func_0x006934d0();
          if ((bool)uVar7) goto LAB_0068ce30;
          puVar10 = (ulong *)(extraout_x8_02 & 0xfffffffffffffffc);
        }
        else {
          func_0x00692a5c();
          FUN_00689ae8();
          if (((ulong)puVar13 & 1) != 0) goto LAB_0068cdc0;
LAB_0068ce30:
          puVar10 = (ulong *)puVar10[10];
        }
        puVar9 = puVar10;
        puVar14 = (undefined *)(long)(char)*(byte *)((long)puVar10 + 0x17);
        if ((long)(char)*(byte *)((long)puVar10 + 0x17) < 0) {
          puVar9 = (ulong *)*puVar10;
          puVar14 = (undefined *)puVar10[1];
        }
      }
      else {
        func_0x00693064();
LAB_0068cde8:
        puVar9 = (ulong *)*puVar13;
        puVar14 = (undefined *)puVar13[1];
        if (-1 < (char)*(byte *)((long)puVar13 + 0x17)) {
          puVar9 = puVar13;
          puVar14 = (undefined *)(ulong)*(byte *)((long)puVar13 + 0x17);
        }
      }
      ppuVar6 = &puStack_60;
      puVar12 = extraout_x8_01;
      puVar10 = param_4;
      pppppppuVar16 = (undefined8 *******)ppppppuStack_70;
      pcVar17 = pcStack_68;
      goto FUN_00557b34;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068ce90:
    func_0x00692e58();
  }
  puVar12 = (ulong *)*puVar12;
  puVar14 = &UNK_00913ede;
  pcVar17 = FUN_0068cea4;
  func_0x00692c84();
  param_1 = extraout_x8_01;
FUN_00557b34:
  if ((undefined *)0xf < puVar14) {
    *(ulong **)((long)ppuVar6 + -0x20) = puVar10;
    *(ulong **)((long)ppuVar6 + -0x18) = param_1;
    *(undefined8 ********)((long)ppuVar6 + -0x10) = pppppppuVar16;
    *(code **)((long)ppuVar6 + -8) = pcVar17;
    FUN_00557a00(puVar9,puVar14);
    *puVar12 = 1;
    puVar12[1] = (ulong)puVar9;
    return puVar12;
  }
  *(byte *)puVar12 = (byte)((int)puVar14 << 1);
  if (puVar14 <= (undefined *)((long)&MACH_HEADER.cputype + 3)) {
    if (puVar14 <= (undefined *)((long)&MACH_HEADER.magic + 3)) {
      if (puVar14 != (undefined *)0x0) {
        *(byte *)((long)puVar12 + 1) = (byte)*puVar9;
        *(byte *)((long)puVar12 + ((ulong)puVar14 >> 1) + 1) =
             *(byte *)((long)puVar9 + ((ulong)puVar14 >> 1));
        *(byte *)((long)puVar12 + (long)puVar14) = *(byte *)((long)puVar9 + (long)(puVar14 + -1));
      }
      puVar12[1] = 0;
      pbVar1 = (byte *)((long)puVar12 + (long)(puVar14 + 1));
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      return puVar12;
    }
    uVar11 = *puVar9;
    uVar3 = *(undefined4 *)((long)puVar9 + (long)(puVar14 + -4));
    pbVar1 = (byte *)((long)puVar12 + 5);
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    puVar12[1] = 0;
    *(int *)((long)puVar12 + 1) = (int)uVar11;
    *(undefined4 *)((long)puVar12 + (long)(puVar14 + -3)) = uVar3;
    return puVar12;
  }
  uVar11 = *puVar9;
  uVar15 = *(undefined8 *)((long)puVar9 + (long)(puVar14 + -8));
  puVar12[1] = 0;
  *(ulong *)((long)puVar12 + 1) = uVar11;
  *(undefined8 *)((long)puVar12 + (long)(puVar14 + -7)) = uVar15;
  return puVar12;
}



/* Entry: 0068cea4; end: 0068ceab;  */

undefined8 * FUN_0068cea4(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (0xf < param_3) {
    FUN_00557a00(param_2,param_3,(int)param_3,9);
    *param_1 = 1;
    param_1[1] = param_2;
    return param_1;
  }
  *(char *)param_1 = (char)((int)param_3 << 1);
  if (7 < param_3) {
    uVar3 = *param_2;
    uVar4 = *(undefined8 *)((long)param_2 + (param_3 - 8));
    param_1[1] = 0;
    *(undefined8 *)((long)param_1 + 1) = uVar3;
    *(undefined8 *)((long)param_1 + (param_3 - 7)) = uVar4;
    return param_1;
  }
  if (3 < param_3) {
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)((long)param_2 + (param_3 - 4));
    *(undefined4 *)((long)param_1 + 5) = 0;
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + (param_3 - 3)) = uVar2;
    return param_1;
  }
  if (param_3 != 0) {
    *(undefined1 *)((long)param_1 + 1) = *(undefined1 *)param_2;
    *(undefined1 *)((long)param_1 + (param_3 >> 1) + 1) =
         *(undefined1 *)((long)param_2 + (param_3 >> 1));
    *(undefined1 *)((long)param_1 + param_3) = *(undefined1 *)((long)param_2 + (param_3 - 1));
  }
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + param_3 + 1) = 0;
  return param_1;
}



/* Entry: 0068ceac; end: 0068d0db;  */

ulong * FUN_0068ceac(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  uint uVar18;
  ulong uVar19;
  long extraout_x9;
  undefined8 uVar20;
  ulong extraout_x10;
  uint extraout_w11;
  ulong *unaff_x19;
  ulong *puVar21;
  ulong *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  ulong uVar22;
  undefined8 unaff_x24;
  undefined1 *puVar23;
  undefined8 unaff_x30;
  code *pcVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar21 = &uStack_60;
  puVar23 = &stack0xfffffffffffffff0;
  puVar12 = param_3;
  func_0x006929c8();
  if ((bool)in_ZR) {
    func_0x00693308();
    if (!(bool)in_CY) {
      func_0x00692be0();
      unaff_x19 = param_4;
      if ((int)param_1 == 9) {
        if ((*(byte *)((long)param_3 + 1) >> 3 & 1) != 0) {
          func_0x00692db0();
          uStack_58 = param_4[1];
          uStack_60 = *param_4;
          uStack_50 = param_4[2];
          *param_4 = 0;
          param_4[1] = 0;
          param_4[2] = 0;
          func_0x006934b0(param_1);
          FUN_0053553c();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
          return puVar21;
        }
        func_0x00693190();
        if ((int)param_1 != 1) {
          func_0x00692dc0();
          if ((int)param_1 != 0) {
            func_0x00659be0(param_3);
            func_0x00692a5c();
            func_0x0068d244();
            uVar22 = (ulong)(char)*(byte *)((long)param_4 + 0x17);
            puVar12 = param_4;
            if ((long)uVar22 < 0) {
              puVar12 = (ulong *)*param_4;
              uVar22 = param_4[1];
            }
            func_0x00692a5c();
            FUN_0068d27c();
            func_0x00693434(param_3,puVar12,uVar22,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x00779b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_009989c8
            )();
            return param_3;
          }
          func_0x00692e94();
          if (param_1 != (ulong *)0x0) {
            func_0x00692a5c();
            FUN_00689ae8();
            if (((ulong)param_1 & 1) == 0) {
              func_0x00692c2c();
              FUN_0068d0dc();
              func_0x00692a5c();
              FUN_0068d284();
              *param_1 = (ulong)&DAT_00b69408;
            }
          }
          func_0x00692a5c();
          FUN_0068d284();
          uVar22 = unaff_x21[1];
          if ((uVar22 & 1) != 0) {
            uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
          }
          func_0x00693434();
          if ((*param_1 & 3) == 0) {
            if (uVar22 == 0) {
              puVar12 = param_1;
              func_0x005332cc();
              uVar22 = *param_4;
              puVar12[1] = param_4[1];
              *puVar12 = uVar22;
              puVar12[2] = param_4[2];
              *param_4 = 0;
              param_4[1] = 0;
              param_4[2] = 0;
              uVar22 = 2;
            }
            else {
              puVar12 = (ulong *)&stack0xffffffffffffff78;
              FUN_0053324c(puVar12,param_4);
              uVar22 = 3;
            }
            *param_1 = uVar22 | (ulong)puVar12;
            return puVar12;
          }
          puVar21 = (ulong *)(*param_1 & 0xfffffffffffffffc);
          puVar12 = puVar21;
          if (*(char *)((long)puVar21 + 0x17) < '\0') {
            puVar12 = (ulong *)*puVar21;
            __ZdlPv(puVar12);
          }
          uVar19 = param_4[1];
          uVar22 = *param_4;
          puVar21[2] = param_4[2];
          puVar21[1] = uVar19;
          *puVar21 = uVar22;
          *(byte *)((long)param_4 + 0x17) = 0;
          *(byte *)param_4 = 0;
          return puVar12;
        }
        func_0x00692e94();
        if (param_1 != (ulong *)0x0) {
          func_0x00692a5c();
          FUN_00689ae8();
          if (((ulong)param_1 & 1) == 0) {
            func_0x00692c2c();
            FUN_0068d0dc();
            uStack_48 = unaff_x21[1];
            if ((uStack_48 & 1) != 0) {
              func_0x006931f8();
              uStack_48 = extraout_x8_03;
            }
            puVar12 = &uStack_48;
            FUN_00543928();
            param_1 = puVar12;
            func_0x00692a5c();
            func_0x0068d1d4();
            *param_1 = (ulong)puVar12;
          }
          uVar22 = (ulong)(char)*(byte *)((long)param_4 + 0x17);
          puVar12 = param_4;
          if ((long)uVar22 < 0) {
            puVar12 = (ulong *)*param_4;
            uVar22 = param_4[1];
          }
          func_0x00692a5c();
          func_0x0068d1d4();
          param_1 = (ulong *)*param_1;
          FUN_00557cfc(param_1,puVar12,uVar22);
          return param_1;
        }
        uVar22 = (ulong)(char)*(byte *)((long)param_4 + 0x17);
        puVar12 = param_4;
        if ((long)uVar22 < 0) {
          puVar12 = (ulong *)*param_4;
          uVar22 = param_4[1];
        }
        func_0x00692a5c();
        func_0x0068d20c();
        func_0x00693434();
        iVar15 = (int)uVar22;
        if ((*param_1 & 1) == 0) {
          if (0xf < uVar22) goto LAB_00557e58;
        }
        else {
          puVar21 = (ulong *)param_1[1];
          if (0xf < uVar22) {
            if (puVar21 != (ulong *)0x0) {
              uVar19 = *param_1;
              lVar7 = uVar19 - 1;
              if (lVar7 == 0) {
                bVar5 = *(byte *)((long)puVar21 + 0xc);
              }
              else {
                FUN_0055b3ec(lVar7,6);
                bVar5 = *(byte *)((long)puVar21 + 0xc);
              }
              if (5 < bVar5) {
                uVar17 = (uint)bVar5;
                uVar18 = 6;
                if (0xba < uVar17) {
                  uVar18 = 0xc;
                }
                iVar15 = -0xe8d;
                if (0xba < uVar17) {
                  iVar15 = -0xb800d;
                }
                uVar2 = 3;
                if (0x42 < uVar17) {
                  uVar2 = uVar18;
                }
                iVar3 = -0x1d;
                if (0x42 < uVar17) {
                  iVar3 = iVar15;
                }
                if ((uVar22 <= (ulong)(long)(int)((uVar17 << (ulong)uVar2) + iVar3)) &&
                   ((puVar21[1] & 0xfffffffd) == 4)) {
                  _memmove((long)puVar21 + 0xd);
                  *puVar21 = uVar22;
                  if (lVar7 != 0) {
                    func_0x0055b518();
                    return param_1;
                  }
                  return param_1;
                }
              }
              FUN_00557a00(puVar12,uVar22);
              param_1[1] = (ulong)puVar12;
              if (lVar7 != 0) {
                *(ulong **)(uVar19 + 0x3f) = puVar12;
              }
              puVar12 = puVar21 + 1;
              do {
                uVar22 = *puVar12;
                cVar6 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar12,0x10);
                if (bVar10) {
                  *(uint *)puVar12 = (uint)uVar22 - 4;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (((uint)uVar22 & 0xfffffff9) == 0) {
                func_0x0055b598(puVar21);
              }
              if (lVar7 != 0) {
                func_0x0055b518();
                return param_1;
              }
              return param_1;
            }
LAB_00557e58:
            FUN_00557a00(puVar12,uVar22);
            *param_1 = 1;
            param_1[1] = (ulong)puVar12;
            return param_1;
          }
          if (puVar21 != (ulong *)0x0) {
            if (*param_1 - 1 == 0) {
              *(byte *)param_1 = (byte)(iVar15 << 1);
            }
            else {
              FUN_0055abd0(*param_1 - 1);
              *(byte *)param_1 = (byte)(iVar15 << 1);
            }
            if (uVar22 < 8) {
              if (uVar22 < 4) {
                if (uVar22 != 0) {
                  *(byte *)((long)param_1 + 1) = (byte)*puVar12;
                  *(byte *)((long)param_1 + (uVar22 >> 1) + 1) =
                       *(byte *)((long)puVar12 + (uVar22 >> 1));
                  *(byte *)((long)param_1 + uVar22) = *(byte *)((long)puVar12 + (uVar22 - 1));
                }
                param_1[1] = 0;
                pbVar1 = (byte *)((long)param_1 + uVar22 + 1);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                pbVar1[4] = 0;
                pbVar1[5] = 0;
                pbVar1[6] = 0;
                pbVar1[7] = 0;
              }
              else {
                uVar19 = *puVar12;
                uVar4 = *(undefined4 *)((long)puVar12 + (uVar22 - 4));
                pbVar1 = (byte *)((long)param_1 + 5);
                pbVar1[0] = 0;
                pbVar1[1] = 0;
                pbVar1[2] = 0;
                pbVar1[3] = 0;
                param_1[1] = 0;
                *(int *)((long)param_1 + 1) = (int)uVar19;
                *(undefined4 *)((long)param_1 + (uVar22 - 3)) = uVar4;
              }
            }
            else {
              uVar19 = *puVar12;
              uVar20 = *(undefined8 *)((long)puVar12 + (uVar22 - 8));
              param_1[1] = 0;
              *(ulong *)((long)param_1 + 1) = uVar19;
              *(undefined8 *)((long)param_1 + (uVar22 - 7)) = uVar20;
            }
            puVar12 = puVar21 + 1;
            do {
              uVar22 = *puVar12;
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar12,0x10);
              if (bVar10) {
                *(uint *)puVar12 = (uint)uVar22 - 4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (((uint)uVar22 & 0xfffffff9) == 0) {
              func_0x0055b598(puVar21);
              return param_1;
            }
            return param_1;
          }
        }
        *(byte *)param_1 = (byte)(iVar15 << 1);
        if (7 < uVar22) {
          uVar19 = *puVar12;
          uVar20 = *(undefined8 *)((long)puVar12 + (uVar22 - 8));
          param_1[1] = 0;
          *(ulong *)((long)param_1 + 1) = uVar19;
          *(undefined8 *)((long)param_1 + (uVar22 - 7)) = uVar20;
          return param_1;
        }
        if (uVar22 < 4) {
          if (uVar22 != 0) {
            *(byte *)((long)param_1 + 1) = (byte)*puVar12;
            *(byte *)((long)param_1 + (uVar22 >> 1) + 1) = *(byte *)((long)puVar12 + (uVar22 >> 1));
            *(byte *)((long)param_1 + uVar22) = *(byte *)((long)puVar12 + (uVar22 - 1));
          }
          param_1[1] = 0;
          pbVar1 = (byte *)((long)param_1 + uVar22 + 1);
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          return param_1;
        }
        uVar19 = *puVar12;
        uVar4 = *(undefined4 *)((long)puVar12 + (uVar22 - 4));
        pbVar1 = (byte *)((long)param_1 + 5);
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        param_1[1] = 0;
        *(int *)((long)param_1 + 1) = (int)uVar19;
        *(undefined4 *)((long)param_1 + (uVar22 - 3)) = uVar4;
        return param_1;
      }
      goto LAB_0068d0c4;
    }
    func_0x00693134();
    func_0x00692d00();
  }
  else {
    func_0x00693134();
    func_0x00692c5c();
  }
  func_0x00692e58();
LAB_0068d0c4:
  puVar13 = (ulong *)*unaff_x22;
  func_0x00693134();
  func_0x00692c84();
  func_0x00693004();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  pcVar24 = FUN_0068d0dc;
  func_0x00692d60();
  puVar21 = &uStack_60;
  while( true ) {
    puVar14 = param_2;
    *(undefined8 **)((long)puVar21 + -0x30) = unaff_x22;
    *(ulong **)((long)puVar21 + -0x28) = unaff_x21;
    *(ulong **)((long)puVar21 + -0x20) = param_3;
    *(ulong **)((long)puVar21 + -0x18) = unaff_x19;
    *(undefined1 **)((long)puVar21 + -0x10) = puVar23;
    *(code **)((long)puVar21 + -8) = pcVar24;
    uVar9 = *(int *)((long)puVar12 + 4) != 0;
    uVar11 = *(int *)((long)puVar12 + 4) == 1;
    if ((!(bool)uVar11) || ((*(byte *)(puVar12[6] + 1) >> 1 & 1) == 0)) {
      puVar12 = puVar13;
      func_0x006930c4();
      if (*(int *)((long)puVar14 + (extraout_x8_04 & 0xffffffff)) != 0) {
        puVar13 = (ulong *)*puVar13;
        FUN_00656068();
        uVar22 = puVar14[1];
        puVar12 = puVar13;
        if ((uVar22 & 1) != 0) {
          func_0x006931f8();
          uVar22 = extraout_x8_06;
        }
        if (uVar22 == 0) {
          func_0x00693398();
          if ((int)puVar12 == 10) {
            func_0x00692c50();
            func_0x0068eb7c();
            puVar12 = (ulong *)*puVar12;
            if (puVar12 != (ulong *)0x0) {
              func_0x00692ca4();
            }
          }
          else if ((int)puVar12 == 9) {
            FUN_00689b10();
            if ((int)puVar13 == 1) {
              func_0x00692c50();
              func_0x0068eb7c();
              puVar12 = (ulong *)*puVar13;
              if (puVar12 != (ulong *)0x0) {
                FUN_00543968();
              }
              __ZdlPv();
            }
            else {
              func_0x00692c50();
              FUN_0068d284();
              func_0x00532f74();
              puVar12 = puVar13;
            }
          }
        }
        func_0x006930c4();
        *(undefined4 *)((long)puVar14 + (extraout_x8_05 & 0xffffffff)) = 0;
      }
      return puVar12;
    }
    func_0x00692c50();
    uVar20 = *(undefined8 *)((long)puVar21 + -0x20);
    unaff_x19 = *(ulong **)((long)puVar21 + -0x18);
    unaff_x22 = *(undefined8 **)((long)puVar21 + -0x30);
    unaff_x21 = *(ulong **)((long)puVar21 + -0x28);
    *(undefined8 *)((long)puVar21 + -0x50) = unaff_d9;
    *(undefined8 *)((long)puVar21 + -0x48) = unaff_d8;
    *(undefined8 *)((long)puVar21 + -0x40) = unaff_x24;
    *(undefined8 *)((long)puVar21 + -0x38) = unaff_x23;
    *(undefined8 **)((long)puVar21 + -0x30) = unaff_x22;
    *(ulong **)((long)puVar21 + -0x28) = unaff_x21;
    *(undefined8 *)((long)puVar21 + -0x20) = uVar20;
    *(ulong **)((long)puVar21 + -0x18) = unaff_x19;
    *(undefined8 *)((long)puVar21 + -0x10) = *(undefined8 *)((long)puVar21 + -0x10);
    *(undefined8 *)((long)puVar21 + -8) = *(undefined8 *)((long)puVar21 + -8);
    func_0x00692960();
    if (!(bool)uVar11) {
      func_0x00692c5c();
      func_0x00692c24();
      *(undefined8 *)((long)puVar21 + -0x70) = uVar20;
      *(ulong **)((long)puVar21 + -0x68) = unaff_x19;
      *(undefined1 **)((long)puVar21 + -0x60) = (undefined1 *)((long)puVar21 + -0x10);
      *(code **)((long)puVar21 + -0x58) = FUN_0068aaa4;
      func_0x00692d80();
      func_0x00692c68();
      func_0x0068b0fc();
      if ((int)puVar13 != -1) {
        func_0x00693210();
        *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
      }
      return puVar13;
    }
    if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
      func_0x00692eac();
      puVar12 = (ulong *)((long)puVar14 + extraout_x8_00);
      uVar20 = *(undefined8 *)((long)puVar21 + -0x10);
      uVar16 = *(undefined8 *)((long)puVar21 + -8);
      func_0x00693490();
      *(undefined8 *)((long)puVar21 + -0x60) = uVar20;
      *(undefined8 *)((long)puVar21 + -0x58) = uVar16;
      func_0x005339b8();
      if (puVar12 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      *(ulong **)((long)puVar21 + -0x70) = puVar14;
      *(ulong **)((long)puVar21 + -0x68) = unaff_x19;
      *(undefined8 *)((long)puVar21 + -0x60) = *(undefined8 *)((long)puVar21 + -0x60);
      *(undefined8 *)((long)puVar21 + -0x58) = *(undefined8 *)((long)puVar21 + -0x58);
      bVar8 = *(char *)((long)puVar12 + 9) != '\0';
      bVar10 = *(char *)((long)puVar12 + 9) == '\x01';
      if (bVar10) {
        func_0x0053a4c8((char)puVar12[1]);
        puVar21 = puVar12;
        if (!bVar8 || bVar10) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
          return puVar12;
        }
      }
      else {
        puVar21 = puVar12;
        if ((*(byte *)((long)puVar12 + 10) & 1) == 0) {
          if (*(int *)(&UNK_00810e40 + (ulong)(byte)puVar12[1] * 4) == 10) {
            puVar21 = (ulong *)*puVar12;
            if ((*(byte *)((long)puVar12 + 10) >> 4 & 1) == 0) {
              pcVar24 = *(code **)(*puVar21 + 0x18);
            }
            else {
              pcVar24 = *(code **)(*puVar21 + 0x88);
            }
            (*pcVar24)();
          }
          else if (*(int *)(&UNK_00810e40 + (ulong)(byte)puVar12[1] * 4) == 9) {
            puVar21 = (ulong *)*puVar12;
            func_0x0048d000(puVar21);
          }
          *(byte *)((long)puVar12 + 10) = *(byte *)((long)puVar12 + 10) & 0xf0 | 1;
        }
      }
      return puVar21;
    }
    if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) break;
    puVar12 = unaff_x19;
    FUN_00659454();
    if (puVar12 == (ulong *)0x0) {
      func_0x00692a00();
      FUN_0068a604();
      if ((int)puVar12 != 0) {
        func_0x00692a00();
        FUN_0068b0c8();
        func_0x00692c1c();
        func_0x00692f84();
        if (!(bool)uVar9 || (bool)uVar11) {
                    /* WARNING: Could not recover jumptable at 0x0068a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_0082760d)[extraout_x8_02] * 4 + 0x68a8b4))();
          return puVar12;
        }
      }
      goto LAB_0068aa80;
    }
    func_0x00692990();
    if ((int)puVar12 == 0) goto LAB_0068aa80;
    if ((*(byte *)((long)unaff_x19 + 1) >> 4 & 1) == 0) {
      puVar12 = (ulong *)0x0;
    }
    else {
      puVar12 = (ulong *)unaff_x19[5];
    }
    puVar23 = *(undefined1 **)((long)puVar21 + -0x10);
    pcVar24 = *(code **)((long)puVar21 + -8);
    puVar13 = unaff_x21;
    param_2 = puVar14;
    func_0x00693490();
    puVar21 = (ulong *)((long)puVar21 + -0x50);
    param_3 = puVar14;
  }
  FUN_00656c60();
  func_0x00692f84();
  puVar12 = unaff_x19;
  if (!(bool)uVar9 || (bool)uVar11) {
                    /* WARNING: Could not recover jumptable at 0x0068a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00827603)[extraout_x8_01] * 4 + 0x68a870))();
    return unaff_x19;
  }
LAB_0068aa80:
  func_0x00693490();
  return puVar12;
}



/* Entry: 0068d0dc; end: 0068d27b;  */

void FUN_0068d0dc(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  uint extraout_w8;
  long extraout_x8;
  code *pcVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar14;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    lVar11 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar3 = *(int *)(param_3 + 4) != 0;
    uVar5 = *(int *)(param_3 + 4) == 1;
    if ((!(bool)uVar5) || ((*(byte *)(*(long *)(param_3 + 0x30) + 1) >> 1 & 1) == 0)) {
      func_0x006930c4();
      if (*(int *)(lVar11 + (extraout_x8_03 & 0xffffffff)) != 0) {
        plVar9 = (long *)*param_1;
        FUN_00656068();
        uVar14 = *(ulong *)(lVar11 + 8);
        plVar10 = plVar9;
        if ((uVar14 & 1) != 0) {
          func_0x006931f8();
          uVar14 = extraout_x8_05;
        }
        if (uVar14 == 0) {
          func_0x00693398();
          if ((int)plVar10 == 10) {
            func_0x00692c50();
            func_0x0068eb7c();
            if (*plVar10 != 0) {
              func_0x00692ca4();
            }
          }
          else if ((int)plVar10 == 9) {
            FUN_00689b10();
            if ((int)plVar9 == 1) {
              func_0x00692c50();
              func_0x0068eb7c();
              if (*plVar9 != 0) {
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
        *(undefined4 *)(lVar11 + (extraout_x8_04 & 0xffffffff)) = 0;
      }
      return;
    }
    func_0x00692c50();
    iVar6 = (int)param_1;
    uVar1 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 **)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar1;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    func_0x00692960();
    if (!(bool)uVar5) {
      func_0x00692c5c();
      func_0x00692c24();
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar1;
      *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x58) = FUN_0068aaa4;
      func_0x00692d80();
      func_0x00692c68();
      func_0x0068b0fc();
      if (iVar6 != -1) {
        func_0x00693210();
        *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
      }
      return;
    }
    if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
      func_0x00692eac();
      puVar8 = (undefined8 *)(lVar11 + extraout_x8_00);
      uVar1 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -8);
      func_0x00693490();
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar1;
      *(undefined8 *)((long)register0x00000008 + -0x58) = uVar12;
      func_0x005339b8();
      if (puVar8 == (undefined8 *)0x0) {
        return;
      }
      *(long *)((long)register0x00000008 + -0x70) = lVar11;
      *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)((long)register0x00000008 + -0x58);
      bVar2 = *(char *)((long)puVar8 + 9) != '\0';
      bVar4 = *(char *)((long)puVar8 + 9) == '\x01';
      if (bVar4) {
        func_0x0053a4c8(*(undefined1 *)(puVar8 + 1));
        if (!bVar2 || bVar4) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
          return;
        }
      }
      else if ((*(byte *)((long)puVar8 + 10) & 1) == 0) {
        if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(puVar8 + 1) * 4) == 10) {
          if ((*(byte *)((long)puVar8 + 10) >> 4 & 1) == 0) {
            pcVar13 = *(code **)(*(long *)*puVar8 + 0x18);
          }
          else {
            pcVar13 = *(code **)(*(long *)*puVar8 + 0x88);
          }
          (*pcVar13)();
        }
        else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(puVar8 + 1) * 4) == 9) {
          func_0x0048d000(*puVar8);
        }
        *(byte *)((long)puVar8 + 10) = *(byte *)((long)puVar8 + 10) & 0xf0 | 1;
      }
      return;
    }
    if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) break;
    lVar7 = unaff_x19;
    FUN_00659454();
    if (lVar7 == 0) {
      func_0x00692a00();
      iVar6 = (int)lVar7;
      FUN_0068a604();
      if (iVar6 != 0) {
        func_0x00692a00();
        FUN_0068b0c8();
        func_0x00692c1c();
        func_0x00692f84();
        if (!(bool)uVar3 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0068a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_0082760d)[extraout_x8_02] * 4 + 0x68a8b4))();
          return;
        }
      }
      goto LAB_0068aa80;
    }
    func_0x00692990();
    if ((int)lVar7 == 0) goto LAB_0068aa80;
    if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = *(long *)(unaff_x19 + 0x28);
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
    param_1 = unaff_x21;
    param_2 = lVar11;
    func_0x00693490();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x20 = lVar11;
  }
  FUN_00656c60();
  func_0x00692f84();
  if (!(bool)uVar3 || (bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0068a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00827603)[extraout_x8_01] * 4 + 0x68a870))();
    return;
  }
LAB_0068aa80:
  func_0x00693490();
  return;
}



/* Entry: 0068d27c; end: 0068d283;  */

long FUN_0068d27c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
    plVar2 = (long *)(*(long *)(param_3 + 0x20) + 0x38);
  }
  else {
    lVar1 = param_3;
    func_0x0067584c();
    if (lVar1 == 0) {
      plVar2 = (long *)(*(long *)(param_3 + 0x10) + 0x78);
    }
    else {
      func_0x0067584c();
      plVar2 = (long *)(lVar1 + 0x60);
    }
  }
  return (param_3 - *plVar2) / 0x58;
}



/* Entry: 0068d284; end: 0068d2bb;  */

ulong * FUN_0068d284(ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_58;
  
  func_0x0069294c();
  if (param_1 == 0) {
    func_0x00692a00();
    FUN_0068aaa4();
  }
  else {
    func_0x00692a00();
    FUN_0068e05c();
  }
  func_0x00692a00();
  func_0x00692914();
  if (param_1 != 0) {
    func_0x00692a84();
LAB_00692a10:
    return (ulong *)(unaff_x19 + (param_1 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928e4();
  if ((int)param_1 == 0) {
    func_0x00692a78();
    goto LAB_00692a10;
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



/* Entry: 0068d2bc; end: 0068d4b3;  */

/* WARNING: Possible PIC construction at 0x0068d3e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0068d3e4) */
/* WARNING: Type propagation algorithm not settling */

qword * FUN_0068d2bc(qword *param_1,long param_2,qword *param_3,qword *param_4)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  qword **ppqVar8;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar9;
  int iVar10;
  qword *pqVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  ulong *puVar15;
  qword *pqVar16;
  ulong uVar17;
  int iVar18;
  qword *pqVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ulong extraout_x8;
  qword *extraout_x8_00;
  char cVar24;
  uint uVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  qword *pqVar29;
  long lVar30;
  ulong *puVar31;
  ulong uVar32;
  ulong uVar33;
  qword *pqVar34;
  long *plVar35;
  ulong uVar36;
  ulong uVar37;
  qword qVar38;
  long unaff_x21;
  undefined8 *unaff_x22;
  qword qVar39;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  qword *unaff_x25;
  qword *pqVar40;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******unaff_x29;
  code *unaff_x30;
  undefined8 uVar41;
  undefined8 uVar42;
  qword qVar43;
  undefined8 uVar44;
  qword qVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  byte abStack_144 [12];
  undefined8 auStack_138 [19];
  qword *pqStack_80;
  qword *pqStack_78;
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  ulong auStack_58 [3];
  
  ppqVar8 = (qword **)auStack_60;
  pqVar40 = param_3;
  func_0x006929c8();
  pqStack_80 = param_3;
  if ((bool)in_ZR) {
    func_0x00693308();
    if ((bool)in_CY) {
      func_0x00693134();
      func_0x00692d00();
      pqVar11 = param_4;
      goto LAB_0068d490;
    }
    pqVar11 = param_4;
    func_0x00692be0();
    in_CY = 8 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 9) {
      pqStack_78 = param_4;
      if ((*(byte *)((long)param_3 + 1) >> 3 & 1) == 0) {
        func_0x00693190();
        if ((int)param_1 != 1) {
          func_0x00692e94();
          if (param_1 != (qword *)0x0) {
            func_0x00692a5c();
            FUN_00689ae8();
            if (((ulong)param_1 & 1) == 0) {
              func_0x00692c2c();
              FUN_0068d0dc();
              func_0x00692a5c();
              FUN_0068d284();
              *param_1 = (qword)&DAT_00b69408;
            }
          }
          func_0x00692dc0();
          if ((int)param_1 == 0) {
            func_0x00692a5c();
            FUN_0068d284();
            func_0x00693360();
            uVar17 = *(ulong *)(unaff_x21 + 8);
            if ((uVar17 & 1) != 0) {
              uVar17 = *(ulong *)(uVar17 & 0xfffffffffffffffe);
            }
            FUN_00532e74(param_1,auStack_58,uVar17);
          }
          else {
            func_0x00692a5c();
            func_0x0068d244();
            func_0x00659be0(param_3);
            func_0x00693360();
            func_0x00692a5c();
            FUN_0068d27c();
            FUN_004575b8(param_1,auStack_58);
          }
          pqVar40 = auStack_58;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pqVar40);
          return pqVar40;
        }
        func_0x00692e94();
        if (param_1 == (qword *)0x0) {
          func_0x00692a5c();
          func_0x0068d20c();
          func_0x00693434();
        }
        else {
          func_0x00692a5c();
          FUN_00689ae8();
          if (((ulong)param_1 & 1) == 0) {
            func_0x00692c2c();
            FUN_0068d0dc();
            auStack_58[0] = *(ulong *)(unaff_x21 + 8);
            if ((auStack_58[0] & 1) != 0) {
              func_0x006931f8();
              auStack_58[0] = extraout_x8;
            }
            pqVar40 = auStack_58;
            FUN_00543928();
            param_1 = pqVar40;
            func_0x00692a5c();
            func_0x0068d1d4();
            *param_1 = (qword)pqVar40;
          }
          func_0x00692a5c();
          func_0x0068d1d4();
          param_1 = (qword *)*param_1;
          unaff_x30 = (code *)0x68d3e4;
          unaff_x29 = (undefined8 *******)&stack0xfffffffffffffff0;
        }
        if (param_1 == param_4) {
          return param_1;
        }
        if (((*param_1 & 1) == 0) && ((*param_4 & 1) == 0)) {
          uVar17 = *param_4;
          param_1[1] = param_4[1];
          *param_1 = uVar17;
          return param_1;
        }
        pppppppuStack_70 = unaff_x29;
        pcStack_68 = unaff_x30;
        FUN_00557884(param_1);
        return param_1;
      }
      func_0x00692db0();
      func_0x006932f0();
      FUN_00534670();
      func_0x00693434();
      if ((*param_4 & 1) == 0) {
        pqVar11 = (qword *)((long)&MACH_HEADER.filetype + 3);
        pqVar40 = param_1;
        FUN_0053316c();
        pqVar19 = param_1;
        if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
          pqVar19 = (qword *)*param_1;
        }
        uVar17 = *(ulong *)((long)param_4 + 1);
        *(qword *)((long)pqVar19 + 7) = param_4[1];
        *pqVar19 = uVar17;
        uVar17 = (ulong)(long)(char)(byte)*param_4 >> 1;
        if ((long)(char)*(byte *)((long)param_1 + 0x17) < 0) {
          if (uVar17 <= param_1[1]) {
            param_1[1] = uVar17;
            *(undefined1 *)(*param_1 + uVar17) = 0;
            return pqVar40;
          }
        }
        else if (uVar17 <= (ulong)(long)(char)*(byte *)((long)param_1 + 0x17)) {
          *(byte *)((long)param_1 + 0x17) = (byte)((uint)(int)(char)(byte)*param_4 >> 1);
          *(byte *)((long)param_1 + uVar17) = 0;
          return pqVar40;
        }
        FUN_00461b78();
        ppqVar8 = &pqStack_80;
        pqVar19 = param_1;
        pppppppuStack_70 = &pppppppuStack_70;
        pcStack_68 = FUN_00559fa8;
      }
      else {
        pppppppuStack_70 = unaff_x29;
        pcStack_68 = unaff_x30;
        FUN_0053316c(param_1,*(undefined8 *)param_4[1]);
        pqVar40 = param_4;
        pqVar11 = param_1;
        pqVar19 = pqStack_78;
        param_4 = pqStack_80;
        if ((char)*(byte *)((long)param_1 + 0x17) < '\0') {
          ppqVar8 = (qword **)auStack_60;
          pqVar11 = (qword *)*param_1;
        }
      }
      puVar15 = (ulong *)((long)ppqVar8 + -0x100);
      *(undefined8 *)((long)ppqVar8 + -0x50) = unaff_x26;
      *(qword **)((long)ppqVar8 + -0x48) = unaff_x25;
      *(undefined1 **)((long)ppqVar8 + -0x40) = unaff_x24;
      *(undefined1 **)((long)ppqVar8 + -0x38) = unaff_x23;
      *(undefined8 **)((long)ppqVar8 + -0x30) = unaff_x22;
      *(long *)((long)ppqVar8 + -0x28) = unaff_x21;
      *(qword **)((long)ppqVar8 + -0x20) = param_4;
      *(qword **)((long)ppqVar8 + -0x18) = pqVar19;
      *(undefined8 ********)((long)ppqVar8 + -0x10) = pppppppuStack_70;
      *(code **)((long)ppqVar8 + -8) = pcStack_68;
      pqVar19 = (qword *)0x0;
      *(undefined8 *)((long)ppqVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_00999f88;
      *(undefined8 *)((long)ppqVar8 + -0x100) = 0;
      *(undefined8 *)((long)ppqVar8 + -0xf8) = 0;
      if ((*pqVar40 & 1) != 0) {
        pqVar19 = (qword *)pqVar40[1];
      }
      FUN_0055a308();
      if ((int)pqVar19 == 0) {
        *(undefined8 *)((long)ppqVar8 + -0xd0) = 0;
        *(undefined8 *)((long)ppqVar8 + -0xe8) = 0;
        *(undefined8 *)((long)ppqVar8 + -0xf0) = 0;
        *(undefined8 *)((long)ppqVar8 + -0xd8) = 0;
        *(undefined8 *)((long)ppqVar8 + -0xe0) = 0;
        *(undefined4 *)((long)ppqVar8 + -200) = 0xffffffff;
        bVar3 = (byte)*pqVar40;
        if ((((long)(char)bVar3 & 1U) == 0) ||
           (plVar23 = (long *)pqVar40[1], plVar23 == (long *)0x0)) {
          unaff_x22 = (undefined8 *)0x0;
          param_4 = (qword *)((ulong)(long)(char)bVar3 >> 1);
          puVar15 = (ulong *)0x0;
          if ((bVar3 & 1) == 0) {
            puVar15 = (ulong *)((long)pqVar40 + 1);
          }
          unaff_x25 = (qword *)0x0;
          pqVar16 = param_4;
          if (param_4 == (qword *)0x0) goto LAB_0055a0f4;
        }
        else {
          pqVar16 = (qword *)*plVar23;
          *(qword **)((long)ppqVar8 + -0xd8) = pqVar16;
          unaff_x25 = (qword *)0x0;
          if (pqVar16 == (qword *)0x0) goto LAB_0055a0f4;
          bVar3 = *(byte *)((long)plVar23 + 0xc);
          if (bVar3 == 2) {
            plVar23 = (long *)plVar23[2];
            bVar3 = *(byte *)((long)plVar23 + 0xc);
          }
          if (bVar3 != 3) {
            if (bVar3 == 1) {
              lVar22 = plVar23[2];
              plVar35 = (long *)plVar23[3];
              param_4 = (qword *)*plVar23;
              plVar23 = plVar35;
              if (5 < *(byte *)((long)plVar35 + 0xc)) goto LAB_0055a190;
LAB_0055a174:
              lVar30 = plVar23[2];
            }
            else {
              lVar22 = 0;
              param_4 = (qword *)*plVar23;
              if (bVar3 < 6) goto LAB_0055a174;
LAB_0055a190:
              lVar30 = (long)plVar23 + 0xd;
            }
            unaff_x22 = (undefined8 *)0x0;
            puVar15 = (ulong *)(lVar30 + lVar22);
            goto LAB_0055a19c;
          }
          uVar17 = (ulong)*(byte *)((long)plVar23 + 0xd);
          *(uint *)((long)ppqVar8 + -200) = (uint)*(byte *)((long)plVar23 + 0xd);
          bVar3 = *(byte *)((long)plVar23 + 0xe);
          uVar27 = (ulong)bVar3;
          *(long **)((long)ppqVar8 + uVar17 * 8 + -0xb8) = plVar23;
          *(byte *)((long)ppqVar8 + (uVar17 - 0xc4)) = bVar3;
          plVar35 = plVar23;
          if (uVar17 != 0) {
            do {
              plVar35 = (long *)plVar35[uVar27 + 2];
              *(long **)((long)ppqVar8 + uVar17 * 8 + -0xc0) = plVar35;
              uVar27 = (ulong)*(byte *)((long)plVar35 + 0xe);
              *(byte *)((long)ppqVar8 + (uVar17 - 0xc5)) = *(byte *)((long)plVar35 + 0xe);
              bVar9 = uVar17 != 0;
              uVar17 = uVar17 - 1;
            } while (bVar9 && uVar17 != 0);
          }
          puVar20 = *(undefined8 **)(*(long *)((long)ppqVar8 + -0xb8) + uVar27 * 8 + 0x10);
          param_4 = (qword *)*puVar20;
          unaff_x22 = (undefined8 *)(*plVar23 - (long)param_4);
          *(undefined8 **)((long)ppqVar8 + -0xd0) = unaff_x22;
          if (*(byte *)((long)puVar20 + 0xc) == 1) {
            lVar22 = puVar20[2];
            puVar20 = (undefined8 *)puVar20[3];
            if (5 < *(byte *)((long)puVar20 + 0xc)) goto LAB_0055a134;
LAB_0055a0d4:
            lVar30 = puVar20[2];
          }
          else {
            lVar22 = 0;
            if (*(byte *)((long)puVar20 + 0xc) < 6) goto LAB_0055a0d4;
LAB_0055a134:
            lVar30 = (long)puVar20 + 0xd;
          }
          puVar15 = (ulong *)(lVar30 + lVar22);
          pqVar16 = *(qword **)((long)ppqVar8 + -0xd8);
          if (*(qword **)((long)ppqVar8 + -0xd8) == (qword *)0x0) {
            unaff_x25 = (qword *)0x0;
            goto LAB_0055a0f4;
          }
        }
LAB_0055a19c:
        unaff_x25 = pqVar16;
        pqVar40 = (qword *)((long)ppqVar8 + -0xf0);
        unaff_x23 = (undefined1 *)((long)ppqVar8 + -0xb8);
        unaff_x24 = (undefined1 *)((long)ppqVar8 + -0xc4);
        pqVar16 = param_4;
LAB_0055a1c0:
        do {
          while( true ) {
            pqVar19 = pqVar11;
            _memcpy(pqVar11,puVar15,pqVar16);
            unaff_x25 = (qword *)((long)unaff_x25 - (long)pqVar16);
            *(qword **)((long)ppqVar8 + -0xd8) = unaff_x25;
            param_4 = pqVar16;
            if (unaff_x25 == (qword *)0x0) goto LAB_0055a0f4;
            uVar25 = *(uint *)((long)ppqVar8 + -200);
            if (((-1 < (int)uVar25) && (*(long *)(unaff_x23 + (ulong)uVar25 * 8) != 0)) &&
               (unaff_x22 != (undefined8 *)0x0)) break;
            param_4 = (qword *)0x0;
            puVar15 = (ulong *)0x0;
            pqVar11 = (qword *)((long)pqVar11 + (long)pqVar16);
            pqVar16 = param_4;
            if (unaff_x25 == (qword *)0x0) goto LAB_0055a0f4;
          }
          uVar17 = *(ulong *)((long)ppqVar8 + -0xb8);
          if ((ulong)*(byte *)(uVar17 + 0xf) - 1 == (ulong)*(byte *)((long)ppqVar8 + -0xc4)) {
            uVar21 = 0;
            do {
              uVar28 = uVar21;
              if (uVar25 == uVar28) {
                puVar20 = (undefined8 *)0x0;
                param_4 = (qword *)0x100000cfeedfacf;
                unaff_x22 = (undefined8 *)((long)unaff_x22 + -0x100000cfeedfacf);
                *(undefined8 **)((long)ppqVar8 + -0xd0) = unaff_x22;
                bVar3 = 6;
                goto LAB_0055a2dc;
              }
              uVar17 = pqVar40[uVar28 + 8];
              uVar27 = (ulong)*(byte *)((long)pqVar40 + uVar28 + 0x2d) + 1;
              uVar21 = uVar28 + 1;
            } while (uVar27 == *(byte *)(uVar17 + 0xf));
            *(byte *)((long)pqVar40 + uVar28 + 0x2d) = (byte)uVar27;
            lVar22 = (long)(int)(uVar28 + 1);
            do {
              uVar17 = *(ulong *)(uVar17 + uVar27 * 8 + 0x10);
              lVar30 = lVar22 + -1;
              *(ulong *)(unaff_x23 + lVar30 * 8) = uVar17;
              uVar27 = (ulong)*(byte *)(uVar17 + 0xe);
              unaff_x24[lVar30] = *(byte *)(uVar17 + 0xe);
              bVar9 = 0 < lVar22;
              lVar22 = lVar30;
            } while (lVar30 != 0 && bVar9);
            unaff_x22 = *(undefined8 **)((long)ppqVar8 + -0xd0);
          }
          else {
            bVar3 = *(byte *)((long)ppqVar8 + -0xc4) + 1;
            *(byte *)((long)ppqVar8 + -0xc4) = bVar3;
            uVar27 = (ulong)bVar3;
          }
          puVar20 = *(undefined8 **)(uVar17 + uVar27 * 8 + 0x10);
          param_4 = (qword *)*puVar20;
          unaff_x22 = (undefined8 *)((long)unaff_x22 - (long)param_4);
          *(undefined8 **)((long)ppqVar8 + -0xd0) = unaff_x22;
          bVar3 = *(byte *)((long)puVar20 + 0xc);
          if (bVar3 == 1) {
            lVar22 = puVar20[2];
            puVar20 = (undefined8 *)puVar20[3];
            bVar3 = *(byte *)((long)puVar20 + 0xc);
          }
          else {
LAB_0055a2dc:
            lVar22 = 0;
          }
          if (bVar3 < 6) {
            puVar15 = (ulong *)(puVar20[2] + lVar22);
            unaff_x25 = *(qword **)((long)ppqVar8 + -0xd8);
            pqVar11 = (qword *)((long)pqVar11 + (long)pqVar16);
            pqVar16 = param_4;
            if (unaff_x25 == (qword *)0x0) {
              unaff_x25 = (qword *)0x0;
              goto LAB_0055a0f4;
            }
            goto LAB_0055a1c0;
          }
          puVar15 = (ulong *)((long)puVar20 + lVar22 + 0xd);
          unaff_x25 = *(qword **)((long)ppqVar8 + -0xd8);
          pqVar11 = (qword *)((long)pqVar11 + (long)pqVar16);
          pqVar16 = param_4;
        } while (unaff_x25 != (qword *)0x0);
        unaff_x25 = (qword *)0x0;
      }
      else {
        puVar15 = *(ulong **)((long)ppqVar8 + -0x100);
        pqVar19 = pqVar11;
        _memcpy(pqVar11,puVar15,*(undefined8 *)((long)ppqVar8 + -0xf8));
      }
LAB_0055a0f4:
      if (*(long *)PTR____stack_chk_guard_00999f88 == *(long *)((long)ppqVar8 + -0x58)) {
        return pqVar19;
      }
      ___stack_chk_fail();
      if (*pqVar19 == 0) {
        *puVar15 = 0;
        puVar15[1] = 0;
        return (qword *)((long)&MACH_HEADER.magic + 1);
      }
      bVar3 = *(byte *)((long)pqVar19 + 0xc);
      if (bVar3 == 2) {
        pqVar19 = (qword *)pqVar19[2];
        bVar3 = *(byte *)((long)pqVar19 + 0xc);
      }
      if (5 < bVar3) {
        uVar17 = *pqVar19;
        *puVar15 = (ulong)((long)pqVar19 + 0xd);
        puVar15[1] = uVar17;
LAB_0055a330:
        return (qword *)((long)&MACH_HEADER.magic + 1);
      }
      if (bVar3 != 1) {
        if (bVar3 == 3) {
          if ((*(byte *)((long)pqVar19 + 0xd) == 0) &&
             ((ulong)*(byte *)((long)pqVar19 + 0xf) - (ulong)*(byte *)((long)pqVar19 + 0xe) == 1)) {
            if (puVar15 != (ulong *)0x0) {
              puVar26 = (ulong *)pqVar19[(ulong)*(byte *)((long)pqVar19 + 0xe) + 2];
              bVar3 = *(byte *)((long)puVar26 + 0xc);
              if (bVar3 == 1) {
                uVar17 = puVar26[2];
                bVar3 = *(byte *)((long)puVar26[3] + 0xc);
                puVar31 = (ulong *)puVar26[3];
              }
              else {
                uVar17 = 0;
                puVar31 = puVar26;
              }
              uVar27 = *puVar26;
              if (bVar3 < 6) {
                *puVar15 = puVar31[2] + uVar17;
                puVar15[1] = uVar27;
                return (qword *)((long)&MACH_HEADER.magic + 1);
              }
              *puVar15 = (long)puVar31 + uVar17 + 0xd;
              puVar15[1] = uVar27;
              return (qword *)((long)&MACH_HEADER.magic + 1);
            }
            goto LAB_0055a330;
          }
        }
        else if (bVar3 == 5) {
          uVar17 = *pqVar19;
          *puVar15 = pqVar19[2];
          puVar15[1] = uVar17;
          return (qword *)((long)&MACH_HEADER.magic + 1);
        }
        return (qword *)0x0;
      }
      puVar20 = (undefined8 *)pqVar19[3];
      bVar3 = *(byte *)((long)puVar20 + 0xc);
      if (5 < bVar3) {
        uVar17 = *pqVar19;
        *puVar15 = (long)puVar20 + pqVar19[2] + 0xd;
        puVar15[1] = uVar17;
        return (qword *)((long)&MACH_HEADER.magic + 1);
      }
      if (bVar3 != 3) {
        if (bVar3 != 5) {
          return (qword *)0x0;
        }
        uVar17 = *pqVar19;
        *puVar15 = puVar20[2] + pqVar19[2];
        puVar15[1] = uVar17;
        return (qword *)((long)&MACH_HEADER.magic + 1);
      }
      pqVar16 = (qword *)pqVar19[2];
      uVar17 = *pqVar19;
      *(undefined1 **)((long)ppqVar8 + -0x110) = (undefined1 *)((long)ppqVar8 + -0x10);
      *(code **)((long)ppqVar8 + -0x108) = FUN_0055a308;
      if (uVar17 == 0) {
        return (qword *)0x0;
      }
      uVar25 = (uint)*(byte *)((long)puVar20 + 0xd);
      do {
        puVar12 = (undefined8 *)puVar20[(ulong)*(byte *)((long)puVar20 + 0xe) + 2];
        plVar23 = (long *)*puVar12;
        if (plVar23 <= pqVar16) {
          puVar20 = puVar20 + (ulong)*(byte *)((long)puVar20 + 0xe) + 3;
          do {
            pqVar16 = (qword *)((long)pqVar16 - (long)plVar23);
            puVar12 = (undefined8 *)*puVar20;
            plVar23 = (long *)*puVar12;
            puVar20 = puVar20 + 1;
          } while (plVar23 <= pqVar16);
        }
        if (plVar23 < (long *)((long)pqVar16 + uVar17)) {
          return (qword *)0x0;
        }
        bVar9 = 0 < (int)uVar25;
        puVar20 = puVar12;
        uVar25 = uVar25 - 1;
      } while (bVar9);
      if (puVar15 == (ulong *)0x0) goto LAB_0055db5c;
      if (*(byte *)((long)puVar12 + 0xc) == 1) {
        lVar22 = puVar12[2];
        puVar12 = (undefined8 *)puVar12[3];
        if (5 < *(byte *)((long)puVar12 + 0xc)) goto LAB_0055db3c;
LAB_0055db1c:
        lVar30 = puVar12[2];
      }
      else {
        lVar22 = 0;
        if (*(byte *)((long)puVar12 + 0xc) < 6) goto LAB_0055db1c;
LAB_0055db3c:
        lVar30 = (long)puVar12 + 0xd;
      }
      if (pqVar16 <= plVar23) {
        uVar27 = (long)plVar23 - (long)pqVar16;
        if (uVar17 <= (ulong)((long)plVar23 - (long)pqVar16)) {
          uVar27 = uVar17;
        }
        *puVar15 = (ulong)(lVar30 + lVar22 + (long)pqVar16);
        puVar15[1] = uVar27;
LAB_0055db5c:
        return (qword *)((long)&MACH_HEADER.magic + 1);
      }
      pcVar13 = "string_view::substr";
      FUN_00435534();
      *(undefined1 **)((long)ppqVar8 + -0x120) = (undefined1 *)((long)ppqVar8 + -0x110);
      *(undefined8 *)((long)ppqVar8 + -0x118) = 0x55db74;
      *(char **)((long)ppqVar8 + -0x128) = pcVar13;
      if (*(char *)((long)pqVar16 + 0xc) != '\x03') {
        *(undefined1 **)((long)ppqVar8 + -0x130) = (undefined1 *)((long)ppqVar8 + -0x128);
        func_0x0055e638(pqVar16,(undefined1 *)((long)ppqVar8 + -0x130),0x55e534);
        return *(qword **)((long)ppqVar8 + -0x128);
      }
      if (*(byte *)((long)pcVar13 + 0xd) < *(byte *)((long)pqVar16 + 0xd)) {
        *(undefined8 *)((long)ppqVar8 + -0x170) = unaff_x28;
        *(undefined8 *)((long)ppqVar8 + -0x168) = unaff_x27;
        *(undefined8 *)((long)ppqVar8 + -0x160) = unaff_x26;
        *(qword **)((long)ppqVar8 + -0x158) = unaff_x25;
        *(undefined1 **)((long)ppqVar8 + -0x150) = unaff_x24;
        *(undefined1 **)((long)ppqVar8 + -0x148) = unaff_x23;
        *(undefined8 **)((long)ppqVar8 + -0x140) = unaff_x22;
        *(qword **)((long)ppqVar8 + -0x138) = pqVar40;
        *(qword **)((long)ppqVar8 + -0x130) = param_4;
        *(qword **)((long)ppqVar8 + -0x128) = pqVar11;
        *(undefined8 *)((long)ppqVar8 + -0x120) = *(undefined8 *)((long)ppqVar8 + -0x120);
        *(undefined8 *)((long)ppqVar8 + -0x118) = *(undefined8 *)((long)ppqVar8 + -0x118);
        qVar38 = *(qword *)pcVar13;
        bVar3 = *(byte *)((long)pqVar16 + 0xd);
        bVar4 = *(byte *)((long)pcVar13 + 0xd);
        uVar25 = (uint)bVar3 - (uint)bVar4;
        uVar17 = (ulong)uVar25;
        pqVar40 = pqVar16;
        if ((int)uVar25 < 1) {
          uVar27 = 0;
        }
        else {
          uVar21 = 0;
          do {
            uVar27 = uVar21;
            if ((pqVar40[1] & 0xfffffffd) != 4) break;
            *(qword **)((long)ppqVar8 + uVar21 * 8 + -0x1d0) = pqVar40;
            uVar21 = uVar21 + 1;
            pqVar40 = (qword *)pqVar40[(ulong)*(byte *)((long)pqVar40 + 0xe) + 2];
            uVar27 = uVar17;
          } while (uVar17 != uVar21);
        }
        iVar18 = (int)uVar27;
        iVar10 = iVar18;
        if ((pqVar40[1] & 0xfffffffd) == 4) {
          iVar10 = iVar18 + 1;
        }
        *(int *)((long)ppqVar8 + -0x1d8) = iVar10;
        if (iVar18 < (int)uVar25) {
          puVar20 = (undefined8 *)((long)ppqVar8 + (uVar27 & 0xffffffff) * 8 + -0x1d8);
          do {
            puVar20 = puVar20 + 1;
            *puVar20 = pqVar40;
            pqVar40 = (qword *)pqVar40[(ulong)*(byte *)((long)pqVar40 + 0xe) + 2];
            uVar1 = (int)uVar27 + 1;
            uVar27 = (ulong)uVar1;
          } while ((int)uVar1 < (int)uVar25);
        }
        uVar27 = (ulong)*(byte *)((long)pcVar13 + 0xf);
        uVar21 = (ulong)*(byte *)((long)pcVar13 + 0xe);
        if (6 < (*(byte *)((long)pqVar40 + 0xf) + uVar27) -
                (*(byte *)((long)pqVar40 + 0xe) + uVar21)) {
          iVar18 = 2;
          iVar10 = 2;
          if ((uint)bVar3 != (uint)bVar4) goto LAB_0055d744;
          goto LAB_0055d99c;
        }
        if ((int)uVar25 < iVar10) {
          iVar10 = 0;
          lVar22 = uVar27 - uVar21;
          bVar5 = *(byte *)((long)pqVar40 + 0xf);
          bVar6 = *(byte *)((long)pqVar40 + 0xe);
        }
        else {
          qVar39 = *pqVar40;
          pqVar11 = &segment_command_00000020.vmsize;
          __Znwm();
          *(undefined4 *)(pqVar11 + 1) = 4;
          *pqVar11 = qVar39;
          uVar41 = *(undefined8 *)((long)pqVar40 + 0x14);
          uVar14 = *(undefined8 *)((long)pqVar40 + 0xc);
          uVar44 = *(undefined8 *)((long)pqVar40 + 0x24);
          uVar42 = *(undefined8 *)((long)pqVar40 + 0x1c);
          uVar47 = *(undefined8 *)((long)pqVar40 + 0x34);
          uVar46 = *(undefined8 *)((long)pqVar40 + 0x2c);
          *(undefined4 *)((long)pqVar11 + 0x3c) = *(undefined4 *)((long)pqVar40 + 0x3c);
          *(undefined8 *)((long)pqVar11 + 0x34) = uVar47;
          *(undefined8 *)((long)pqVar11 + 0x2c) = uVar46;
          *(undefined8 *)((long)pqVar11 + 0x24) = uVar44;
          *(undefined8 *)((long)pqVar11 + 0x1c) = uVar42;
          *(undefined8 *)((long)pqVar11 + 0x14) = uVar41;
          *(undefined8 *)((long)pqVar11 + 0xc) = uVar14;
          bVar5 = *(byte *)((long)pqVar40 + 0xf);
          if ((uint)*(byte *)((long)pqVar40 + 0xe) != (uint)bVar5) {
            pqVar19 = pqVar40 + (ulong)*(byte *)((long)pqVar40 + 0xe) + 2;
            do {
              piVar2 = (int *)(*pqVar19 + 8);
              do {
                cVar24 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar9) {
                  *piVar2 = *piVar2 + 4;
                  cVar24 = ExclusiveMonitorsStatus();
                }
              } while (cVar24 != '\0');
              pqVar19 = pqVar19 + 1;
            } while (pqVar19 != pqVar40 + (ulong)(uint)bVar5 + 2);
            uVar21 = (ulong)*(byte *)((long)pcVar13 + 0xe);
            uVar27 = (ulong)*(byte *)((long)pcVar13 + 0xf);
          }
          iVar10 = 1;
          lVar22 = uVar27 - uVar21;
          bVar5 = *(byte *)((long)pqVar11 + 0xf);
          bVar6 = *(byte *)((long)pqVar11 + 0xe);
          pqVar40 = pqVar11;
        }
        uVar37 = (ulong)bVar5;
        uVar28 = (ulong)bVar6;
        if (uVar37 != 6) {
          uVar28 = (6 - uVar37) + uVar28;
          *(char *)((long)pqVar40 + 0xf) = '\x06';
          if (uVar28 < 6) {
            uVar33 = 5;
            pqVar11 = pqVar40;
            do {
              pqVar11[7] = pqVar11[uVar37 + 1];
              uVar33 = uVar33 - 1;
              pqVar11 = pqVar11 + -1;
            } while (uVar28 <= uVar33);
          }
        }
        lVar30 = (uVar28 & 0xff) - lVar22;
        *(char *)((long)pqVar40 + 0xe) = (char)lVar30;
        if ((int)uVar27 != (int)uVar21) {
          pqVar11 = (qword *)((long)pcVar13 + (uVar21 + 2) * 8);
          uVar37 = (uVar27 * 8 + uVar21 * -8) - 8;
          pqVar19 = pqVar11;
          if ((0x47 < uVar37) &&
             ("" < (char *)((long)pqVar40 +
                           ((uVar28 & 0xff) * 8 - (long)((long)pcVar13 + uVar27 * 8))))) {
            uVar27 = (uVar37 >> 3) + 1;
            uVar37 = uVar27 & 0x3ffffffffffffffc;
            uVar28 = uVar37;
            pqVar19 = pqVar40 + lVar30;
            pqVar29 = (qword *)((long)pcVar13 + uVar21 * 8);
            do {
              qVar39 = pqVar29[2];
              qVar45 = pqVar29[5];
              qVar43 = pqVar29[4];
              pqVar19[3] = pqVar29[3];
              pqVar19[2] = qVar39;
              pqVar19[5] = qVar45;
              pqVar19[4] = qVar43;
              uVar28 = uVar28 - 4;
              pqVar19 = pqVar19 + 4;
              pqVar29 = pqVar29 + 4;
            } while (uVar28 != 0);
            pqVar19 = pqVar11 + uVar37;
            lVar30 = lVar30 + uVar37;
            if (uVar27 == uVar37) goto LAB_0055d900;
          }
          pqVar29 = pqVar40 + lVar30 + 2;
          do {
            pqVar34 = pqVar19 + 1;
            *pqVar29 = *pqVar19;
            pqVar29 = pqVar29 + 1;
            pqVar19 = pqVar34;
          } while (pqVar34 != pqVar11 + lVar22);
        }
LAB_0055d900:
        pqVar11 = (qword *)((long)pcVar13 + 8);
        *pqVar40 = *pqVar40 + *(qword *)pcVar13;
        if ((*pqVar11 & 0xfffffffd) == 4) {
          __ZdlPv(pcVar13);
        }
        else {
          bVar5 = *(byte *)((long)pcVar13 + 0xf);
          if ((uint)*(byte *)((long)pcVar13 + 0xe) != (uint)bVar5) {
            pqVar19 = (qword *)((long)pcVar13 + ((ulong)*(byte *)((long)pcVar13 + 0xe) + 2) * 8);
            do {
              piVar2 = (int *)(*pqVar19 + 8);
              do {
                cVar24 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar9) {
                  *piVar2 = *piVar2 + 4;
                  cVar24 = ExclusiveMonitorsStatus();
                }
              } while (cVar24 != '\0');
              pqVar19 = pqVar19 + 1;
            } while (pqVar19 != (qword *)((long)pcVar13 + ((ulong)(uint)bVar5 + 2) * 8));
          }
          do {
            qVar39 = *pqVar11;
            cVar24 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pqVar11,0x10);
            if (bVar9) {
              *(uint *)pqVar11 = (uint)qVar39 - 4;
              cVar24 = ExclusiveMonitorsStatus();
            }
          } while (cVar24 != '\0');
          if (((uint)qVar39 & 0xfffffff9) == 0) {
            func_0x0055b598(pcVar13);
          }
        }
        pcVar13 = (char *)pqVar40;
        iVar18 = iVar10;
        if (bVar3 != bVar4) {
LAB_0055d744:
          pqVar40 = (qword *)((long)ppqVar8 + -0x1d8);
          FUN_0055b6d0(pqVar40,pqVar16,uVar17,qVar38,pcVar13,iVar18);
          return pqVar40;
        }
LAB_0055d99c:
        pqVar40 = (qword *)pcVar13;
        if (iVar10 != 0) {
          if (iVar10 == 1) {
            pqVar11 = pqVar16 + 1;
            do {
              qVar38 = *pqVar11;
              cVar24 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(pqVar11,0x10);
              if (bVar9) {
                *(uint *)pqVar11 = (uint)qVar38 - 4;
                cVar24 = ExclusiveMonitorsStatus();
              }
            } while (cVar24 != '\0');
            if (((uint)qVar38 & 0xfffffff9) == 0) {
              func_0x0055b598(pqVar16);
            }
          }
          else {
            pqVar40 = &segment_command_00000020.vmsize;
            __Znwm();
            *(undefined4 *)(pqVar40 + 1) = 4;
            *pqVar40 = *pqVar16 + *(qword *)pcVar13;
            bVar3 = *(char *)((long)pcVar13 + 0xd) + 1;
            *(char *)((long)pqVar40 + 0xc) = '\x03';
            *(byte *)((long)pqVar40 + 0xd) = bVar3;
            ((char *)((long)pqVar40 + 0xe))[0] = '\0';
            ((char *)((long)pqVar40 + 0xe))[1] = '\x02';
            pqVar40[2] = (qword)pcVar13;
            pqVar40[3] = (qword)pqVar16;
            if ((0xb < bVar3) && (FUN_0055e064(), 0xb < *(byte *)((long)pqVar40 + 0xd))) {
              *(char **)((long)ppqVar8 + -0x1f0) = "tree->height() <= CordRepBtree::kMaxHeight";
              *(char **)((long)ppqVar8 + -0x1e8) = "Max height exceeded";
              FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x55daa4);
              (*pcVar7)();
            }
          }
        }
        return pqVar40;
      }
      *(undefined8 *)((long)ppqVar8 + -0x170) = unaff_x28;
      *(undefined8 *)((long)ppqVar8 + -0x168) = unaff_x27;
      *(undefined8 *)((long)ppqVar8 + -0x160) = unaff_x26;
      *(qword **)((long)ppqVar8 + -0x158) = unaff_x25;
      *(undefined1 **)((long)ppqVar8 + -0x150) = unaff_x24;
      *(undefined1 **)((long)ppqVar8 + -0x148) = unaff_x23;
      *(undefined8 **)((long)ppqVar8 + -0x140) = unaff_x22;
      *(qword **)((long)ppqVar8 + -0x138) = pqVar40;
      *(qword **)((long)ppqVar8 + -0x130) = param_4;
      *(qword **)((long)ppqVar8 + -0x128) = pqVar11;
      *(undefined8 *)((long)ppqVar8 + -0x120) = *(undefined8 *)((long)ppqVar8 + -0x120);
      *(undefined8 *)((long)ppqVar8 + -0x118) = *(undefined8 *)((long)ppqVar8 + -0x118);
      qVar38 = *pqVar16;
      bVar3 = *(byte *)((long)pcVar13 + 0xd);
      bVar4 = *(byte *)((long)pqVar16 + 0xd);
      uVar25 = (uint)bVar3 - (uint)bVar4;
      uVar17 = (ulong)uVar25;
      pqVar40 = (qword *)pcVar13;
      if ((int)uVar25 < 1) {
        uVar27 = 0;
      }
      else {
        uVar21 = 0;
        do {
          uVar27 = uVar21;
          if ((pqVar40[1] & 0xfffffffd) != 4) break;
          *(qword **)((long)ppqVar8 + uVar21 * 8 + -0x1d0) = pqVar40;
          uVar21 = uVar21 + 1;
          pqVar40 = (qword *)pqVar40[(ulong)*(byte *)((long)pqVar40 + 0xf) + 1];
          uVar27 = uVar17;
        } while (uVar17 != uVar21);
      }
      iVar18 = (int)uVar27;
      iVar10 = iVar18;
      if ((pqVar40[1] & 0xfffffffd) == 4) {
        iVar10 = iVar18 + 1;
      }
      *(int *)((long)ppqVar8 + -0x1d8) = iVar10;
      if (iVar18 < (int)uVar25) {
        puVar20 = (undefined8 *)((long)ppqVar8 + (uVar27 & 0xffffffff) * 8 + -0x1d8);
        do {
          puVar20 = puVar20 + 1;
          *puVar20 = pqVar40;
          pqVar40 = (qword *)pqVar40[(ulong)*(byte *)((long)pqVar40 + 0xf) + 1];
          uVar1 = (int)uVar27 + 1;
          uVar27 = (ulong)uVar1;
        } while ((int)uVar1 < (int)uVar25);
      }
      uVar21 = (ulong)*(byte *)((long)pqVar16 + 0xf);
      uVar27 = (ulong)*(byte *)((long)pqVar16 + 0xe);
      if (6 < (*(byte *)((long)pqVar40 + 0xf) + uVar21) - (*(byte *)((long)pqVar40 + 0xe) + uVar27))
      {
        iVar10 = 2;
        iVar18 = 2;
        if ((uint)bVar3 != (uint)bVar4) goto LAB_0055d280;
        goto LAB_0055d44c;
      }
      if ((int)uVar25 < iVar10) {
        iVar18 = 0;
        pqVar11 = pqVar40;
      }
      else {
        qVar39 = *pqVar40;
        pqVar11 = &segment_command_00000020.vmsize;
        __Znwm();
        *(undefined4 *)(pqVar11 + 1) = 4;
        *pqVar11 = qVar39;
        uVar41 = *(undefined8 *)((long)pqVar40 + 0x14);
        uVar14 = *(undefined8 *)((long)pqVar40 + 0xc);
        uVar44 = *(undefined8 *)((long)pqVar40 + 0x24);
        uVar42 = *(undefined8 *)((long)pqVar40 + 0x1c);
        uVar47 = *(undefined8 *)((long)pqVar40 + 0x34);
        uVar46 = *(undefined8 *)((long)pqVar40 + 0x2c);
        *(undefined4 *)((long)pqVar11 + 0x3c) = *(undefined4 *)((long)pqVar40 + 0x3c);
        *(undefined8 *)((long)pqVar11 + 0x34) = uVar47;
        *(undefined8 *)((long)pqVar11 + 0x2c) = uVar46;
        *(undefined8 *)((long)pqVar11 + 0x24) = uVar44;
        *(undefined8 *)((long)pqVar11 + 0x1c) = uVar42;
        *(undefined8 *)((long)pqVar11 + 0x14) = uVar41;
        *(undefined8 *)((long)pqVar11 + 0xc) = uVar14;
        bVar5 = *(byte *)((long)pqVar40 + 0xf);
        if ((uint)*(byte *)((long)pqVar40 + 0xe) != (uint)bVar5) {
          pqVar19 = pqVar40 + (ulong)*(byte *)((long)pqVar40 + 0xe) + 2;
          do {
            piVar2 = (int *)(*pqVar19 + 8);
            do {
              cVar24 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar9) {
                *piVar2 = *piVar2 + 4;
                cVar24 = ExclusiveMonitorsStatus();
              }
            } while (cVar24 != '\0');
            pqVar19 = pqVar19 + 1;
          } while (pqVar19 != pqVar40 + (ulong)(uint)bVar5 + 2);
          uVar27 = (ulong)*(byte *)((long)pqVar16 + 0xe);
          uVar21 = (ulong)*(byte *)((long)pqVar16 + 0xf);
        }
        iVar18 = 1;
      }
      bVar5 = *(byte *)((long)pqVar11 + 0xe);
      uVar37 = (ulong)bVar5;
      bVar6 = *(byte *)((long)pqVar11 + 0xf);
      uVar33 = (ulong)bVar6;
      uVar28 = uVar33;
      if (bVar5 != 0) {
        uVar28 = uVar33 - uVar37;
        *(char *)((long)pqVar11 + 0xe) = '\0';
        *(char *)((long)pqVar11 + 0xf) = (char)uVar28;
        if (bVar6 != bVar5) {
          if (uVar28 < 2) {
            uVar32 = 0;
          }
          else {
            uVar32 = uVar28 & 6;
            uVar36 = uVar32;
            pqVar40 = pqVar11;
            do {
              pqVar19 = pqVar40 + 2;
              qVar39 = pqVar19[uVar37];
              pqVar40[3] = (pqVar19 + uVar37)[1];
              *pqVar19 = qVar39;
              uVar36 = uVar36 - 2;
              pqVar40 = pqVar19;
            } while (uVar36 != 0);
            if (uVar28 == uVar32) goto LAB_0055d338;
          }
          lVar22 = (uVar32 + uVar37) - uVar33;
          pqVar40 = pqVar11 + uVar32 + 2;
          pqVar19 = pqVar11 + uVar32 + uVar37 + 2;
          do {
            *pqVar40 = *pqVar19;
            bVar9 = lVar22 != -1;
            lVar22 = lVar22 + 1;
            pqVar40 = pqVar40 + 1;
            pqVar19 = pqVar19 + 1;
          } while (bVar9);
        }
      }
LAB_0055d338:
      cVar24 = (char)uVar28;
      if ((int)uVar21 != (int)uVar27) {
        pqVar40 = pqVar16 + uVar27 + 2;
        uVar28 = uVar28 & 0xffffffff;
        uVar37 = (uVar21 * 8 + uVar27 * -8) - 8;
        pqVar19 = pqVar40;
        if ((uVar37 < 0x48) ||
           (pqVar29 = pqVar11 + uVar28, (ulong)((long)pqVar29 - (long)(pqVar16 + uVar27)) < 0x20)) {
LAB_0055d380:
          uVar37 = uVar28;
          do {
            pqVar29 = pqVar19 + 1;
            uVar28 = uVar37 + 1;
            pqVar11[uVar37 + 2] = *pqVar19;
            pqVar19 = pqVar29;
            uVar37 = uVar28;
          } while (pqVar29 != pqVar40 + (uVar21 - uVar27));
        }
        else {
          uVar37 = (uVar37 >> 3) + 1;
          uVar36 = uVar37 & 0x3ffffffffffffffc;
          uVar28 = uVar36 + uVar28;
          pqVar19 = pqVar40 + uVar36;
          uVar33 = uVar36;
          pqVar34 = pqVar16 + uVar27;
          do {
            qVar39 = pqVar34[2];
            qVar45 = pqVar34[5];
            qVar43 = pqVar34[4];
            pqVar29[3] = pqVar34[3];
            pqVar29[2] = qVar39;
            pqVar29[5] = qVar45;
            pqVar29[4] = qVar43;
            uVar33 = uVar33 - 4;
            pqVar29 = pqVar29 + 4;
            pqVar34 = pqVar34 + 4;
          } while (uVar33 != 0);
          if (uVar37 != uVar36) goto LAB_0055d380;
        }
        cVar24 = (char)uVar28;
      }
      *(char *)((long)pqVar11 + 0xf) = cVar24;
      pqVar40 = pqVar16 + 1;
      *pqVar11 = *pqVar11 + *pqVar16;
      if ((*pqVar40 & 0xfffffffd) == 4) {
        __ZdlPv(pqVar16);
      }
      else {
        bVar5 = *(byte *)((long)pqVar16 + 0xf);
        if ((uint)*(byte *)((long)pqVar16 + 0xe) != (uint)bVar5) {
          pqVar19 = pqVar16 + (ulong)*(byte *)((long)pqVar16 + 0xe) + 2;
          do {
            piVar2 = (int *)(*pqVar19 + 8);
            do {
              cVar24 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar9) {
                *piVar2 = *piVar2 + 4;
                cVar24 = ExclusiveMonitorsStatus();
              }
            } while (cVar24 != '\0');
            pqVar19 = pqVar19 + 1;
          } while (pqVar19 != pqVar16 + (ulong)(uint)bVar5 + 2);
        }
        do {
          qVar39 = *pqVar40;
          cVar24 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pqVar40,0x10);
          if (bVar9) {
            *(uint *)pqVar40 = (uint)qVar39 - 4;
            cVar24 = ExclusiveMonitorsStatus();
          }
        } while (cVar24 != '\0');
        if (((uint)qVar39 & 0xfffffff9) == 0) {
          func_0x0055b598(pqVar16);
        }
      }
      pqVar16 = pqVar11;
      iVar10 = iVar18;
      if (bVar3 != bVar4) {
LAB_0055d280:
        pqVar40 = (qword *)((long)ppqVar8 + -0x1d8);
        FUN_0055bdcc(pqVar40,pcVar13,uVar17,qVar38,pqVar16,iVar10);
        return pqVar40;
      }
LAB_0055d44c:
      pqVar40 = pqVar16;
      if (iVar18 != 0) {
        if (iVar18 == 1) {
          pqVar11 = (qword *)((long)pcVar13 + 8);
          do {
            qVar38 = *pqVar11;
            cVar24 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pqVar11,0x10);
            if (bVar9) {
              *(uint *)pqVar11 = (uint)qVar38 - 4;
              cVar24 = ExclusiveMonitorsStatus();
            }
          } while (cVar24 != '\0');
          if (((uint)qVar38 & 0xfffffff9) == 0) {
            func_0x0055b598(pcVar13);
          }
        }
        else {
          pqVar40 = &segment_command_00000020.vmsize;
          __Znwm();
          *(undefined4 *)(pqVar40 + 1) = 4;
          *pqVar40 = *pqVar16 + *(qword *)pcVar13;
          bVar3 = *(char *)((long)pcVar13 + 0xd) + 1;
          *(char *)((long)pqVar40 + 0xc) = '\x03';
          *(byte *)((long)pqVar40 + 0xd) = bVar3;
          ((char *)((long)pqVar40 + 0xe))[0] = '\0';
          ((char *)((long)pqVar40 + 0xe))[1] = '\x02';
          pqVar40[2] = (qword)pcVar13;
          pqVar40[3] = (qword)pqVar16;
          if ((0xb < bVar3) && (FUN_0055e064(), 0xb < *(byte *)((long)pqVar40 + 0xd))) {
            *(char **)((long)ppqVar8 + -0x1f0) = "tree->height() <= CordRepBtree::kMaxHeight";
            *(char **)((long)ppqVar8 + -0x1e8) = "Max height exceeded";
            FUN_00584c60(3,"cord_rep_btree.cc",0x118,"Check %s failed: %s");
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x55d5c0);
            (*pcVar7)();
          }
        }
      }
      return pqVar40;
    }
  }
  else {
    func_0x00693134();
    func_0x00692c5c();
    pqVar11 = param_4;
LAB_0068d490:
    func_0x00692e58();
  }
  uVar14 = *unaff_x22;
  func_0x00693134();
  func_0x00692c84();
  puVar15 = auStack_58;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00692d60();
  pcStack_68 = FUN_0068d4b4;
  puVar26 = puVar15;
  pqStack_78 = (qword *)uVar14;
  pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00692a1c();
  iVar10 = (int)puVar26;
  if ((bool)in_ZR) {
    func_0x006934f0();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692e6c();
      if (iVar10 == 9) {
        if ((*(byte *)((long)pqVar40 + 1) >> 3 & 1) == 0) {
          FUN_0068d578(puVar15,param_2,pqVar40,pqVar11);
        }
        else {
          puVar15 = (ulong *)(param_2 + (ulong)(uint)puVar15[5]);
          FUN_005346c8(puVar15,*(undefined4 *)((long)pqVar40 + 4),pqVar11);
        }
        pqVar40 = extraout_x8_00;
                    /* WARNING: Could not recover jumptable at 0x00779c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__00998a18)
                  (extraout_x8_00,puVar15);
        return pqVar40;
      }
      goto LAB_0068d568;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692e58();
LAB_0068d568:
  pqVar40 = (qword *)*puVar15;
  func_0x00692c84(pqVar40);
  func_0x00689a34();
  func_0x00692ce4();
  return pqVar40;
}



/* Entry: 0068d4b4; end: 0068d577;  */

void FUN_0068d4b4(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,
                 undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2;
  func_0x00692a1c();
  iVar1 = (int)puVar2;
  if ((bool)in_ZR) {
    func_0x006934f0();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692e6c();
      if (iVar1 == 9) {
        if ((*(byte *)(param_4 + 1) >> 3 & 1) == 0) {
          FUN_0068d578(param_2,param_3,param_4,param_5);
        }
        else {
          param_2 = (undefined8 *)(param_3 + (ulong)*(uint *)(param_2 + 5));
          FUN_005346c8(param_2,*(undefined4 *)(param_4 + 4),param_5);
        }
                    /* WARNING: Could not recover jumptable at 0x00779c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__00998a18)
                  (param_1,param_2);
        return;
      }
      goto LAB_0068d568;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692e58();
LAB_0068d568:
  func_0x00692c84(*param_2);
  func_0x00689a34();
  func_0x00692ce4();
  return;
}



/* Entry: 0068d578; end: 0068d597;  */

void FUN_0068d578(void)

{
  func_0x00689a34();
  func_0x00692ce4();
  return;
}



/* Entry: 0068d598; end: 0068d62b;  */

void FUN_0068d598(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined1 unaff_w21;
  long *unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x00692978();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00692d0c();
      goto LAB_0068d614;
    }
    func_0x00692a3c();
    in_CY = 8 < (uint)param_1;
    in_ZR = 0;
    if ((uint)param_1 == 9) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00692ac0();
        func_0x00689a34();
        func_0x00692ce4();
        return;
      }
      func_0x00692a90();
      func_0x0053a564();
      if (param_1 == (long *)0x0) {
        func_0x0053a214();
        func_0x0053a544();
        func_0x0053a244();
        func_0x0053a53c();
        func_0x0053a6fc();
        param_1[2] = (long)param_4;
        if ((param_2 & 1) != 0) {
          *(undefined1 *)(param_1 + 1) = unaff_w21;
          *(undefined1 *)((long)param_1 + 9) = 1;
          *(undefined1 *)((long)param_1 + 0xb) = 0;
          plVar1 = param_1;
          func_0x0053a3cc();
          FUN_005385f8();
          *param_1 = (long)plVar1;
        }
        func_0x0054d0b8();
        return;
      }
      func_0x0053a344();
      return;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068d614:
    func_0x00692c24();
  }
  puVar2 = (undefined8 *)*unaff_x22;
  func_0x00692ea4();
  func_0x00692978();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00692d0c();
      goto LAB_0068d6e4;
    }
    puVar3 = param_4;
    func_0x00692ad0();
    if ((int)puVar2 == 9) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x006929f0();
        uStack_88 = param_4[1];
        uStack_90 = *param_4;
        uStack_80 = param_4[2];
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        func_0x006934b0(puVar2);
        FUN_0068d708();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
        return;
      }
      func_0x00692ac0();
      FUN_0068d730();
      func_0x00693434();
      goto FUN_004575b8;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068d6e4:
    func_0x00692c24();
    puVar3 = param_4;
  }
  param_4 = puVar3;
  puVar2 = (undefined8 *)*unaff_x22;
  func_0x00692ea4();
  func_0x00693004();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00692d60();
  FUN_00534704();
FUN_004575b8:
  if (*(char *)((long)puVar2 + 0x17) < '\0') {
    __ZdlPv(*puVar2);
  }
  uVar5 = param_4[1];
  uVar4 = *param_4;
  puVar2[2] = param_4[2];
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  *(undefined1 *)((long)param_4 + 0x17) = 0;
  *(undefined1 *)param_4 = 0;
  return;
}



/* Entry: 0068d62c; end: 0068d707;  */

void FUN_0068d62c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar1;
  long unaff_x19;
  long *unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x00692978();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00692d0c();
      goto LAB_0068d6e4;
    }
    puVar1 = param_4;
    func_0x00692ad0();
    if ((int)param_1 == 9) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) {
        func_0x006929f0();
        uStack_58 = param_4[1];
        uStack_60 = *param_4;
        uStack_50 = param_4[2];
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        func_0x006934b0(param_1);
        FUN_0068d708();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
        return;
      }
      func_0x00692ac0();
      FUN_0068d730();
      func_0x00693434();
      goto FUN_004575b8;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068d6e4:
    func_0x00692c24();
    puVar1 = param_4;
  }
  param_4 = puVar1;
  param_1 = (undefined8 *)*unaff_x22;
  func_0x00692ea4();
  func_0x00693004();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00692d60();
  FUN_00534704();
FUN_004575b8:
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  uVar3 = param_4[1];
  uVar2 = *param_4;
  param_1[2] = param_4[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  *(undefined1 *)((long)param_4 + 0x17) = 0;
  *(undefined1 *)param_4 = 0;
  return;
}



/* Entry: 0068d708; end: 0068d72f;  */

void FUN_0068d708(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00534704();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[2] = param_4[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined1 *)((long)param_4 + 0x17) = 0;
  *(undefined1 *)param_4 = 0;
  return;
}



/* Entry: 0068d730; end: 0068d743;  */

void FUN_0068d730(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  int extraout_w8;
  int iVar4;
  int extraout_w8_00;
  int *extraout_x9;
  int *piVar5;
  int *extraout_x9_00;
  int iVar6;
  int extraout_w10;
  
  func_0x0068eb7c();
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0054d638();
    func_0x0054d6bc();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0054d638();
      }
      else {
        func_0x0054d5c0();
        puVar3 = puVar2;
        func_0x0054d6bc();
        *puVar2 = (ulong)puVar3;
        func_0x0054d5f8();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x0054d644();
        piVar5 = extraout_x9;
        iVar6 = extraout_w8;
        iVar4 = extraout_w8;
        if (!bVar1) {
          func_0x0054d5e0();
          return;
        }
      }
      else {
        func_0x0054d5c0();
        func_0x0054d654();
        piVar5 = extraout_x9_00;
        iVar6 = extraout_w10;
        iVar4 = extraout_w8_00;
      }
      *piVar5 = iVar6 + 1;
      *(int *)(param_1 + 1) = iVar4 + 1;
      func_0x0054d6bc();
      *(ulong **)(piVar5 + (long)iVar4 * 2 + 2) = puVar2;
    }
  }
  return;
}



/* Entry: 0068d744; end: 0068d76f;  */

long ** FUN_0068d744(undefined8 *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  long **pplVar5;
  undefined8 uVar6;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [24];
  long *aplStack_218 [2];
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 *apuStack_1c8 [6];
  long **pplStack_198;
  undefined8 uStack_190;
  undefined1 auStack_168 [48];
  long *plStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_58;
  
  FUN_0068d770();
  puVar4 = param_1;
  func_0x0069324c();
  pplVar1 = *(long ***)(puVar4[2] + 0x98);
  func_0x0067409c();
  uStack_58 = extraout_x8;
  FUN_006563a4();
  pplVar5 = pplVar1;
  if (pplVar1 == (long **)0x0) {
    plVar3 = (long *)(unaff_x19 + 0xc0);
    plVar2 = plVar3;
    uStack_208 = (int)param_1;
    plStack_138 = plVar3;
    FUN_00567614();
    func_0x0067676c();
    if (plVar2 == (long *)0x0) {
      pplVar5 = (long **)0x0;
    }
    else {
      pplVar5 = (long **)*puVar4;
    }
    pplVar1 = &plStack_138;
    FUN_00666628();
    if (plVar2 == (long *)0x0) {
      aplStack_218[0] = plVar3;
      FUN_00567528();
      func_0x0067676c();
      if (plVar3 == (long *)0x0) {
        plStack_138 = (long *)unaff_x20[1];
        if (*(char *)((long)plStack_138 + 0x17) < '\0') {
          plStack_138 = (long *)*plStack_138;
        }
        uStack_130 = 0x560e98;
        uStack_128 = (ulong)param_1 & 0xffffffff;
        uStack_120 = 0x5606ac;
        puVar4 = (undefined8 *)&UNK_00911aee;
        FUN_0056189c(auStack_230,&UNK_00911aee,0x18,&plStack_138,2);
        func_0x006559c0();
        uVar6 = puVar4[5];
        func_0x00675de8(&plStack_138);
        func_0x0065bc54(&plStack_138,1);
        func_0x006754e8(&plStack_138);
        func_0x00666688(auStack_168,*puVar4);
        FUN_0065c5b4(&plStack_138,uVar6);
        FUN_006666b4(auStack_168);
        pplVar5 = &plStack_138;
        uVar6 = 1;
        FUN_0065bee4();
        pplVar1 = pplVar5;
        func_0x00673f90(unaff_x20[1]);
        func_0x00674500();
        pplStack_198 = pplVar1;
        uStack_190 = uVar6;
        func_0x00674e80();
        apuStack_1c8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1c8[0] = auStack_230;
        }
        FUN_00575ddc(&uStack_248,auStack_168,&pplStack_198,apuStack_1c8);
        pplVar1 = &plStack_138;
        func_0x00675a18();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1e0,auStack_230);
        FUN_004575b8(pplVar1,auStack_1e0);
        uStack_1f8 = uStack_240;
        uStack_200 = uStack_248;
        uStack_1f0 = uStack_238;
        func_0x00676bc0();
        FUN_004575b8(pplVar1 + 3,&uStack_200);
        func_0x00675adc();
        func_0x00675db0();
        pplVar5[1] = (long *)pplVar1;
        func_0x00674d6c();
        *(int *)((long)pplVar5 + 4) = (int)param_1;
        pplVar5[2] = unaff_x20;
        pplVar5[3] = (long *)&PTR_PTR_00b25f08;
        func_0x00654fac(auStack_168,unaff_x19 + 0x78,pplVar5);
        func_0x00674d88();
      }
      else {
        pplVar5 = (long **)*puVar4;
      }
      pplVar1 = aplStack_218;
      FUN_0066723c();
    }
  }
  func_0x00674120(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00674d88();
    pplVar5 = aplStack_218;
    FUN_0066723c();
    func_0x00674bc8();
    func_0x006758b4();
    *(uint *)(pplVar5 + 2) = extraout_w8 | 1;
    pplVar5 = (long **)pplVar5[3];
    if (pplVar5 == (long **)0x0) {
      pplVar5 = (long **)pplVar1[1];
      if (((ulong)pplVar5 & 1) != 0) {
        func_0x00675018();
      }
      FUN_00667260();
      pplVar1[3] = (long *)pplVar5;
    }
    return pplVar5;
  }
  return pplVar5;
}



/* Entry: 0068d770; end: 0068d82b;  */

undefined4 * FUN_0068d770(uint *param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 *unaff_x23;
  undefined8 ****ppppuVar9;
  code *pcVar10;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      func_0x00692a6c();
      if ((int)param_1 == 8) {
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
          func_0x00692d18();
          if ((param_1 == (uint *)0x0) || (func_0x00692990(), ((ulong)param_1 & 1) != 0)) {
            func_0x00692a00();
            func_0x0068ec74();
            uVar2 = *param_1;
          }
          else {
            func_0x006933dc();
            uVar2 = param_1[1];
          }
          return (undefined4 *)(ulong)uVar2;
        }
        uVar2 = *(uint *)(unaff_x21 + 5);
        uVar3 = unaff_x19[1];
        func_0x006933dc();
        puVar5 = (uint *)(unaff_x20 + (ulong)uVar2);
        func_0x0053a564(puVar5,uVar3,param_1[1]);
        if ((puVar5 != (uint *)0x0) && ((*(byte *)((long)puVar5 + 10) & 1) == 0)) {
          unaff_x19 = (undefined4 *)(ulong)*puVar5;
        }
        return unaff_x19;
      }
      goto LAB_0068d81c;
    }
    func_0x00692d00();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
LAB_0068d81c:
  puVar6 = (undefined4 *)*unaff_x21;
  puVar7 = &UNK_00913f27;
  func_0x00692df0();
  puVar4 = &stack0xffffffffffffff90;
  pcStack_38 = FUN_0068d82c;
  ppppuVar9 = &pppuStack_40;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x00692ec0();
  if (unaff_x23 == puVar6) {
    param_4 = (ulong)*(uint *)(unaff_x20 + 4);
    func_0x00692ac0();
    puVar4 = &stack0xffffffffffffffd0;
    ppppuVar9 = (undefined8 ****)pppuStack_40;
    pcVar10 = pcStack_38;
  }
  else {
    puVar6 = (undefined4 *)*unaff_x22;
    puVar7 = &UNK_00913f34;
    pcVar10 = (code *)0x68d878;
    func_0x0069337c();
  }
  func_0x00693400();
  *(undefined8 *****)(puVar4 + 0x40) = ppppuVar9;
  *(code **)(puVar4 + 0x48) = pcVar10;
  func_0x00692d98();
  *(int *)(puVar4 + 0xc) = (int)param_4;
  if (((byte)puVar7[1] >> 3 & 1) == 0) {
    FUN_0068b640();
    return puVar6;
  }
  func_0x00692adc();
  func_0x00692b58(puVar6);
  func_0x006934a4();
  uVar1 = *(undefined8 *)(puVar4 + 0x40);
  uVar8 = *(undefined8 *)(puVar4 + 0x48);
  func_0x00693338();
  *(long **)(puVar4 + -0x30) = unaff_x22;
  *(ulong *)(puVar4 + -0x28) = param_4;
  *(long *)(puVar4 + -0x20) = unaff_x20;
  *(undefined4 **)(puVar4 + -0x18) = unaff_x19;
  *(undefined8 *)(puVar4 + -0x10) = uVar1;
  *(undefined8 *)(puVar4 + -8) = uVar8;
  func_0x0053a490();
  *(ulong *)(puVar6 + 4) = param_4;
  if ((param_2 & 1) != 0) {
    func_0x0053a948();
  }
  func_0x0053a4e0();
  *puVar6 = (int)unaff_x19;
  return puVar6;
}



/* Entry: 0068d82c; end: 0068d8df;  */

void FUN_0068d82c(undefined4 *param_1,ulong param_2,undefined *param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined4 *unaff_x23;
  undefined1 *unaff_x29;
  undefined1 *puVar4;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xffffffffffffffc0;
  puVar4 = &stack0xfffffffffffffff0;
  func_0x00692ec0();
  if (unaff_x23 == param_1) {
    param_4 = (ulong)*(uint *)(unaff_x20 + 4);
    func_0x00692ac0();
    puVar2 = (undefined1 *)register0x00000008;
    puVar4 = unaff_x29;
  }
  else {
    param_1 = (undefined4 *)*unaff_x22;
    param_3 = &UNK_00913f34;
    unaff_x30 = 0x68d878;
    func_0x0069337c();
  }
  func_0x00693400();
  *(undefined1 **)(puVar2 + 0x40) = puVar4;
  *(undefined8 *)(puVar2 + 0x48) = unaff_x30;
  func_0x00692d98();
  *(int *)(puVar2 + 0xc) = (int)param_4;
  if (((byte)param_3[1] >> 3 & 1) == 0) {
    FUN_0068b640();
    return;
  }
  func_0x00692adc();
  func_0x00692b58(param_1);
  func_0x006934a4();
  uVar1 = *(undefined8 *)(puVar2 + 0x40);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  func_0x00693338();
  *(long **)(puVar2 + -0x30) = unaff_x22;
  *(ulong *)(puVar2 + -0x28) = param_4;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined8 *)(puVar2 + -0x10) = uVar1;
  *(undefined8 *)(puVar2 + -8) = uVar3;
  func_0x0053a490();
  *(ulong *)(param_1 + 4) = param_4;
  if ((param_2 & 1) != 0) {
    func_0x0053a948();
  }
  func_0x0053a4e0();
  *param_1 = (int)unaff_x19;
  return;
}



/* Entry: 0068d8e0; end: 0068d98b;  */

long ***** FUN_0068d8e0(int param_1,long ****param_2,long param_3,long ****param_4)

{
  char in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  char in_OV;
  long *****ppppplVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint extraout_w8;
  undefined8 extraout_x8;
  long lVar6;
  undefined1 *extraout_x10;
  long *****unaff_x19;
  long ****unaff_x20;
  long unaff_x21;
  long *****ppppplVar7;
  undefined8 uVar8;
  undefined8 *unaff_x22;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [24];
  long ****pppplStack_248;
  long ***ppplStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_210 [24];
  undefined1 *apuStack_1f8 [6];
  long ****pppplStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_198 [48];
  long ****pppplStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_88;
  
  func_0x00692978();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if (!(bool)in_CY) {
      func_0x00692ad0();
      in_OV = SBORROW4(param_1,8);
      in_NG = param_1 + -8 < 0;
      in_ZR = 0;
      if (param_1 == 8) {
        ppppplVar1 = unaff_x19;
        FUN_0068b248();
        if (((ulong)ppppplVar1 & 1) == 0) {
          func_0x0069324c();
          param_2 = param_4;
          FUN_00656390();
          if (ppppplVar1 == (long *****)0x0) {
            func_0x00692c2c();
            func_0x006895cc();
            func_0x006a5794();
            lVar6 = *(long *)(unaff_x21 + 8);
            *(int *)(lVar6 + -0x10) = (int)unaff_x20;
            *(undefined4 *)(lVar6 + -0xc) = 0;
            *(long *)(lVar6 + -8) = (long)(int)param_4;
            return ppppplVar1;
          }
        }
        func_0x00692ac0();
        func_0x00693400();
        func_0x00692d98();
        if ((*(byte *)(param_3 + 1) >> 3 & 1) != 0) {
          func_0x00692adc();
          func_0x00692b58(ppppplVar1);
          func_0x006934a4();
          func_0x00693338();
          func_0x0053a490();
          ppppplVar1[2] = param_4;
          if (((ulong)param_2 & 1) != 0) {
            func_0x0053a948();
          }
          func_0x0053a4e0();
          *(int *)ppppplVar1 = (int)unaff_x19;
          return ppppplVar1;
        }
        FUN_0068b640();
        return ppppplVar1;
      }
      goto FUN_00656414;
    }
    func_0x00692d00();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692c24();
  param_4 = unaff_x20;
FUN_00656414:
  puVar4 = (undefined8 *)*unaff_x22;
  func_0x00692df0();
  FUN_0068d9b8();
  puVar5 = puVar4;
  func_0x0069324c();
  ppppplVar1 = *(long ******)(puVar5[2] + 0x98);
  func_0x0067409c();
  uStack_88 = extraout_x8;
  FUN_006563a4();
  ppppplVar7 = ppppplVar1;
  if (ppppplVar1 == (long *****)0x0) {
    ppppplVar3 = unaff_x19 + 0x18;
    ppppplVar2 = ppppplVar3;
    ppplStack_240 = (long ***)param_4;
    uStack_238 = (int)puVar4;
    pppplStack_168 = (long ****)ppppplVar3;
    FUN_00567614();
    func_0x0067676c();
    if (ppppplVar2 == (long *****)0x0) {
      ppppplVar7 = (long *****)0x0;
    }
    else {
      ppppplVar7 = (long *****)*puVar5;
    }
    ppppplVar1 = &pppplStack_168;
    FUN_00666628();
    if (ppppplVar2 == (long *****)0x0) {
      pppplStack_248 = (long ****)ppppplVar3;
      FUN_00567528();
      func_0x0067676c();
      if (ppppplVar3 == (long *****)0x0) {
        pppplStack_168 = (long ****)param_4[1];
        if (*(char *)((long)pppplStack_168 + 0x17) < '\0') {
          pppplStack_168 = (long ****)*pppplStack_168;
        }
        uStack_160 = 0x560e98;
        uStack_158 = (ulong)puVar4 & 0xffffffff;
        uStack_150 = 0x5606ac;
        puVar5 = (undefined8 *)&UNK_00911aee;
        FUN_0056189c(auStack_260,&UNK_00911aee,0x18,&pppplStack_168,2);
        func_0x006559c0();
        uVar8 = puVar5[5];
        func_0x00675de8(&pppplStack_168);
        func_0x0065bc54(&pppplStack_168,1);
        func_0x006754e8(&pppplStack_168);
        func_0x00666688(auStack_198,*puVar5);
        FUN_0065c5b4(&pppplStack_168,uVar8);
        FUN_006666b4(auStack_198);
        ppppplVar7 = &pppplStack_168;
        uVar8 = 1;
        FUN_0065bee4();
        ppppplVar1 = ppppplVar7;
        func_0x00673f90(param_4[1]);
        func_0x00674500();
        pppplStack_1c8 = (long ****)ppppplVar1;
        uStack_1c0 = uVar8;
        func_0x00674e80();
        apuStack_1f8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1f8[0] = auStack_260;
        }
        FUN_00575ddc(&uStack_278,auStack_198,&pppplStack_1c8,apuStack_1f8);
        ppppplVar1 = &pppplStack_168;
        func_0x00675a18();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_210,auStack_260);
        FUN_004575b8(ppppplVar1,auStack_210);
        uStack_228 = uStack_270;
        uStack_230 = uStack_278;
        uStack_220 = uStack_268;
        func_0x00676bc0();
        FUN_004575b8(ppppplVar1 + 3,&uStack_230);
        func_0x00675adc();
        func_0x00675db0();
        ppppplVar7[1] = (long ****)ppppplVar1;
        func_0x00674d6c();
        *(int *)((long)ppppplVar7 + 4) = (int)puVar4;
        ppppplVar7[2] = param_4;
        ppppplVar7[3] = (long ****)&PTR_PTR_00b25f08;
        func_0x00654fac(auStack_198,unaff_x19 + 0xf,ppppplVar7);
        func_0x00674d88();
      }
      else {
        ppppplVar7 = (long *****)*puVar5;
      }
      ppppplVar1 = &pppplStack_248;
      FUN_0066723c();
    }
  }
  func_0x00674120(uStack_88);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00674d88();
    ppppplVar7 = &pppplStack_248;
    FUN_0066723c();
    func_0x00674bc8();
    func_0x006758b4();
    *(uint *)(ppppplVar7 + 2) = extraout_w8 | 1;
    ppppplVar7 = (long *****)ppppplVar7[3];
    if (ppppplVar7 == (long *****)0x0) {
      ppppplVar7 = (long *****)ppppplVar1[1];
      if (((ulong)ppppplVar7 & 1) != 0) {
        func_0x00675018();
      }
      FUN_00667260();
      ppppplVar1[3] = (long ****)ppppplVar7;
    }
    return ppppplVar7;
  }
  return ppppplVar7;
}



/* Entry: 0068d98c; end: 0068d9b7;  */

long ** FUN_0068d98c(undefined8 *param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined1 *extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  long **pplVar5;
  undefined8 uVar6;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [24];
  long *aplStack_218 [2];
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e0 [24];
  undefined1 *apuStack_1c8 [6];
  long **pplStack_198;
  undefined8 uStack_190;
  undefined1 auStack_168 [48];
  long *plStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_58;
  
  FUN_0068d9b8();
  puVar4 = param_1;
  func_0x0069324c();
  pplVar1 = *(long ***)(puVar4[2] + 0x98);
  func_0x0067409c();
  uStack_58 = extraout_x8;
  FUN_006563a4();
  pplVar5 = pplVar1;
  if (pplVar1 == (long **)0x0) {
    plVar3 = (long *)(unaff_x19 + 0xc0);
    plVar2 = plVar3;
    uStack_208 = (int)param_1;
    plStack_138 = plVar3;
    FUN_00567614();
    func_0x0067676c();
    if (plVar2 == (long *)0x0) {
      pplVar5 = (long **)0x0;
    }
    else {
      pplVar5 = (long **)*puVar4;
    }
    pplVar1 = &plStack_138;
    FUN_00666628();
    if (plVar2 == (long *)0x0) {
      aplStack_218[0] = plVar3;
      FUN_00567528();
      func_0x0067676c();
      if (plVar3 == (long *)0x0) {
        plStack_138 = (long *)unaff_x20[1];
        if (*(char *)((long)plStack_138 + 0x17) < '\0') {
          plStack_138 = (long *)*plStack_138;
        }
        uStack_130 = 0x560e98;
        uStack_128 = (ulong)param_1 & 0xffffffff;
        uStack_120 = 0x5606ac;
        puVar4 = (undefined8 *)&UNK_00911aee;
        FUN_0056189c(auStack_230,&UNK_00911aee,0x18,&plStack_138,2);
        func_0x006559c0();
        uVar6 = puVar4[5];
        func_0x00675de8(&plStack_138);
        func_0x0065bc54(&plStack_138,1);
        func_0x006754e8(&plStack_138);
        func_0x00666688(auStack_168,*puVar4);
        FUN_0065c5b4(&plStack_138,uVar6);
        FUN_006666b4(auStack_168);
        pplVar5 = &plStack_138;
        uVar6 = 1;
        FUN_0065bee4();
        pplVar1 = pplVar5;
        func_0x00673f90(unaff_x20[1]);
        func_0x00674500();
        pplStack_198 = pplVar1;
        uStack_190 = uVar6;
        func_0x00674e80();
        apuStack_1c8[0] = extraout_x10;
        if (in_NG == in_OV) {
          apuStack_1c8[0] = auStack_230;
        }
        FUN_00575ddc(&uStack_248,auStack_168,&pplStack_198,apuStack_1c8);
        pplVar1 = &plStack_138;
        func_0x00675a18();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (auStack_1e0,auStack_230);
        FUN_004575b8(pplVar1,auStack_1e0);
        uStack_1f8 = uStack_240;
        uStack_200 = uStack_248;
        uStack_1f0 = uStack_238;
        func_0x00676bc0();
        FUN_004575b8(pplVar1 + 3,&uStack_200);
        func_0x00675adc();
        func_0x00675db0();
        pplVar5[1] = (long *)pplVar1;
        func_0x00674d6c();
        *(int *)((long)pplVar5 + 4) = (int)param_1;
        pplVar5[2] = unaff_x20;
        pplVar5[3] = (long *)&PTR_PTR_00b25f08;
        func_0x00654fac(auStack_168,unaff_x19 + 0x78,pplVar5);
        func_0x00674d88();
      }
      else {
        pplVar5 = (long **)*puVar4;
      }
      pplVar1 = aplStack_218;
      FUN_0066723c();
    }
  }
  func_0x00674120(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00674d88();
    pplVar5 = aplStack_218;
    FUN_0066723c();
    func_0x00674bc8();
    func_0x006758b4();
    *(uint *)(pplVar5 + 2) = extraout_w8 | 1;
    pplVar5 = (long **)pplVar5[3];
    if (pplVar5 == (long **)0x0) {
      pplVar5 = (long **)pplVar1[1];
      if (((ulong)pplVar5 & 1) != 0) {
        func_0x00675018();
      }
      FUN_00667260();
      pplVar1[3] = (long *)pplVar5;
    }
    return pplVar5;
  }
  return pplVar5;
}



/* Entry: 0068d9b8; end: 0068da47;  */

ulong FUN_0068d9b8(ulong param_1,ulong *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x19;
  ulong *unaff_x20;
  ulong *unaff_x22;
  ulong unaff_x23;
  undefined1 *puVar5;
  undefined8 ****ppppuVar6;
  code *pcVar7;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  
  func_0x00692978();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00692d0c();
      goto LAB_0068da34;
    }
    func_0x00692a3c();
    if ((int)param_1 == 8) {
      if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) {
        func_0x00692ac0();
        FUN_00689890();
        return (ulong)*(uint *)(*(long *)(param_1 + 8) + (long)(int)unaff_x20 * 4);
      }
      func_0x00692a90();
      puVar2 = &stack0xffffffffffffffd0;
      puVar5 = &stack0xfffffffffffffff0;
      func_0x0053a564();
      if (param_1 != 0) {
        func_0x0053a5c4();
        return (ulong)*(uint *)(extraout_x8 + (long)(int)unaff_x19 * 4);
      }
      func_0x0053a214();
      func_0x0053a544();
      func_0x0053a244();
      pcVar7 = FUN_005345f8;
      func_0x0053a53c();
      unaff_x22 = param_2;
      goto code_r0x005345f8;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068da34:
    func_0x00692c24();
  }
  uVar3 = *unaff_x22;
  puVar4 = &UNK_00913f49;
  func_0x00692df0();
  puVar2 = &stack0xffffffffffffff90;
  pcStack_38 = FUN_0068da48;
  ppppuVar6 = &pppuStack_40;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x00692ec0();
  if (unaff_x23 == uVar3) {
    param_4 = *(undefined4 *)((long)unaff_x20 + 4);
    func_0x00692ac0();
    puVar2 = &stack0xffffffffffffffd0;
    ppppuVar6 = (undefined8 ****)pppuStack_40;
    pcVar7 = pcStack_38;
  }
  else {
    uVar3 = *unaff_x22;
    func_0x00693524();
    pcVar7 = (code *)0x68da90;
    func_0x0069337c();
  }
  func_0x00693400();
  *(undefined8 *****)(puVar2 + 0x40) = ppppuVar6;
  *(code **)(puVar2 + 0x48) = pcVar7;
  func_0x00692d98();
  *(undefined4 *)(puVar2 + 0xc) = param_4;
  if (((byte)puVar4[1] >> 3 & 1) == 0) {
    FUN_0068b7e4();
    return uVar3;
  }
  uVar1 = *(uint *)(uVar3 + 0x28);
  func_0x00692adc();
  FUN_00659660(unaff_x19);
  param_1 = (long)unaff_x20 + (ulong)uVar1;
  func_0x0069345c(param_1,unaff_x22,(uint)uVar3 & 0xff,unaff_x19);
  puVar5 = *(undefined1 **)(puVar2 + 0x40);
  pcVar7 = *(code **)(puVar2 + 0x48);
  func_0x00693338();
code_r0x005345f8:
  func_0x0053abec();
  *(undefined1 **)(puVar2 + 0x40) = puVar5;
  *(code **)(puVar2 + 0x48) = pcVar7;
  func_0x0053a308();
  func_0x0053a9c4();
  if (((ulong)unaff_x22 & 1) == 0) {
    param_1 = *unaff_x20;
  }
  else {
    func_0x0053a27c();
    FUN_00538194();
    *unaff_x20 = param_1;
  }
  FUN_00533cb4();
  return param_1;
}



/* Entry: 0068da48; end: 0068db0b;  */

void FUN_0068da48(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined8 unaff_x30;
  
  puVar3 = &stack0xffffffffffffffc0;
  puVar6 = &stack0xfffffffffffffff0;
  func_0x00692ec0();
  if (unaff_x23 == param_1) {
    param_4 = *(undefined4 *)((long)unaff_x20 + 4);
    func_0x00692ac0();
    puVar3 = (undefined1 *)register0x00000008;
    puVar6 = unaff_x29;
  }
  else {
    param_1 = *unaff_x22;
    func_0x00693524();
    unaff_x30 = 0x68da90;
    func_0x0069337c();
  }
  func_0x00693400();
  *(undefined1 **)(puVar3 + 0x40) = puVar6;
  *(undefined8 *)(puVar3 + 0x48) = unaff_x30;
  func_0x00692d98();
  *(undefined4 *)(puVar3 + 0xc) = param_4;
  if ((*(byte *)(param_3 + 1) >> 3 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    func_0x00692adc();
    FUN_00659660(unaff_x19);
    lVar4 = (long)unaff_x20 + (ulong)uVar2;
    func_0x0069345c(lVar4,unaff_x22,(uint)param_1 & 0xff,unaff_x19);
    uVar1 = *(undefined8 *)(puVar3 + 0x40);
    uVar5 = *(undefined8 *)(puVar3 + 0x48);
    func_0x00693338();
    func_0x0053abec();
    *(undefined8 *)(puVar3 + 0x40) = uVar1;
    *(undefined8 *)(puVar3 + 0x48) = uVar5;
    func_0x0053a308();
    func_0x0053a9c4();
    if (((ulong)unaff_x22 & 1) != 0) {
      func_0x0053a27c();
      FUN_00538194();
      *unaff_x20 = lVar4;
    }
    FUN_00533cb4();
    return;
  }
  FUN_0068b7e4();
  return;
}



/* Entry: 0068db0c; end: 0068dc6b;  */

void FUN_0068db0c(int param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar2;
  long lVar3;
  ulong unaff_x19;
  long *unaff_x20;
  long *plVar4;
  long unaff_x21;
  ulong uVar5;
  ulong *unaff_x22;
  
  func_0x00692978();
  if ((bool)in_ZR) {
    func_0x00692d68();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692ad0();
      if (param_1 == 8) {
        uVar2 = unaff_x19;
        FUN_0068b248();
        if ((uVar2 & 1) == 0) {
          func_0x0069324c();
          FUN_00656390();
          if (uVar2 == 0) {
            func_0x00692c2c();
            func_0x006895cc();
            func_0x006a5794();
            lVar3 = *(long *)(unaff_x21 + 8);
            *(int *)(lVar3 + -0x10) = (int)unaff_x20;
            *(undefined4 *)(lVar3 + -0xc) = 0;
            *(long *)(lVar3 + -8) = (long)(int)param_4;
            return;
          }
        }
        func_0x00692ac0();
        func_0x00693400();
        func_0x00692d98();
        if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
          FUN_0068b7e4();
          return;
        }
        uVar1 = *(uint *)(uVar2 + 0x28);
        func_0x00692adc();
        FUN_00659660(unaff_x19);
        lVar3 = (long)unaff_x20 + (ulong)uVar1;
        func_0x0069345c(lVar3,unaff_x22,(uint)uVar2 & 0xff,unaff_x19);
        func_0x00693338();
        func_0x0053abec();
        func_0x0053a308();
        func_0x0053a9c4();
        if (((ulong)unaff_x22 & 1) != 0) {
          func_0x0053a27c();
          FUN_00538194();
          *unaff_x20 = lVar3;
        }
        FUN_00533cb4();
        return;
      }
      goto LAB_0068dba0;
    }
    func_0x00693524();
    func_0x00692d0c();
  }
  else {
    func_0x00693524();
    func_0x00692c5c();
  }
  func_0x00692c24();
  param_4 = unaff_x20;
LAB_0068dba0:
  uVar2 = *unaff_x22;
  func_0x00693524();
  func_0x00692df0();
  func_0x00692d80();
  uVar5 = *(ulong *)(uVar2 + 0x58);
  FUN_006994c8();
  if (uVar5 == uVar2) {
    lVar3 = *(long *)(unaff_x19 + 0x50);
    if (lVar3 == 0) {
      plVar4 = (long *)param_4[0xb];
      func_0x006930bc();
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar3);
      *(long *)(unaff_x19 + 0x50) = (long)plVar4;
    }
    return;
  }
  if (((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) &&
     ((*(byte *)(*(long *)(unaff_x19 + 0x38) + 0x8c) & 1) == 0)) {
    func_0x00692cd0();
    FUN_0068dc6c();
    if (((uVar2 & 1) == 0) && (func_0x00692d18(), uVar2 == 0)) {
      plVar4 = param_4 + 1;
      FUN_0069252c();
      uVar2 = 0;
      if (*plVar4 != 0) {
        return;
      }
    }
  }
  plVar4 = (long *)param_4[0xb];
  func_0x006930bc();
                    /* WARNING: Could not recover jumptable at 0x0068dc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
  return;
}



/* Entry: 0068dc6c; end: 0068dc97;  */

ulong FUN_0068dc6c(ulong param_1)

{
  FUN_006895ec();
  if ((param_1 & 1) == 0) {
    func_0x00692cdc();
  }
  return param_1;
}



/* Entry: 0068dc98; end: 0068dd93;  */

/* WARNING: Possible PIC construction at 0x0068de3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0068de48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0068de6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0068de4c) */
/* WARNING: Removing unreachable block (ram,0x0068de54) */
/* WARNING: Removing unreachable block (ram,0x0068de5c) */
/* WARNING: Removing unreachable block (ram,0x0068de40) */
/* WARNING: Removing unreachable block (ram,0x0068de70) */
/* WARNING: Removing unreachable block (ram,0x0068de78) */
/* WARNING: Removing unreachable block (ram,0x0068de80) */

ulong * FUN_0068dc98(ulong *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  byte bVar4;
  ulong **ppuVar5;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar13;
  undefined8 *unaff_x21;
  ulong *unaff_x22;
  ulong uVar14;
  undefined1 **unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_c8;
  ulong *puStack_70;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar9 = param_1;
  func_0x00692a1c();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      puVar13 = param_4;
      goto LAB_0068dd7c;
    }
    puVar13 = param_4;
    func_0x00692ad0();
    in_CY = 9 < (uint)puVar9;
    in_ZR = 0;
    if ((uint)puVar9 == 10) {
      if (param_4 == (ulong *)0x0) {
        param_4 = (ulong *)param_1[0xb];
      }
      if ((*(byte *)((long)param_3 + 1) >> 3 & 1) != 0) {
        uVar11 = param_1[5];
        uVar3 = *(undefined4 *)((long)param_3 + 4);
        func_0x006930bc();
        puVar1 = (undefined8 *)((long)unaff_x21 + (ulong)(uint)uVar11);
        puVar7 = puVar1;
        func_0x005339b8(puVar1,uVar3);
        if ((puVar7 != (undefined8 *)0x0) && ((*(byte *)((long)puVar7 + 10) & 1) == 0)) {
          puVar13 = (ulong *)*puVar7;
          if ((*(byte *)((long)puVar7 + 10) >> 4 & 1) != 0) {
            (**(code **)(*param_4 + 0x10))(param_4,puVar9);
                    /* WARNING: Could not recover jumptable at 0x00686958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*puVar13 + 0x18))(puVar13,param_4,*puVar1);
            return puVar13;
          }
          return puVar13;
        }
                    /* WARNING: Could not recover jumptable at 0x0068690c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_4 + 0x10))(param_4,puVar9);
        return param_4;
      }
      func_0x00692d18();
      if (puVar9 == (ulong *)0x0) {
LAB_0068dcfc:
        func_0x00692d20();
        FUN_00689b8c();
        puVar9 = (ulong *)0x0;
        if ((ulong *)*param_1 != (ulong *)0x0) {
          return (ulong *)*param_1;
        }
      }
      else {
        puVar9 = param_1;
        func_0x00692d20();
        FUN_00689ae8();
        if (((ulong)puVar9 & 1) != 0) goto LAB_0068dcfc;
      }
      func_0x00692cd0();
      ppuVar5 = (ulong **)register0x00000008;
      param_3 = unaff_x19;
      param_1 = unaff_x20;
      goto SUB_0068dbac;
    }
  }
  else {
    func_0x00692c5c();
    puVar13 = param_4;
LAB_0068dd7c:
    func_0x00692c24();
    param_4 = unaff_x22;
  }
  unaff_x22 = (ulong *)*param_1;
  func_0x00692ee4(unaff_x22,param_3,&UNK_00913f66);
  ppuVar5 = &puStack_70;
  uStack_48 = 0x68dd94;
  unaff_x29 = &puStack_50;
  puStack_70 = param_4;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068deac;
    }
    func_0x00692a6c();
    if ((int)unaff_x22 != 10) goto LAB_0068deb0;
    if (puVar13 == (ulong *)0x0) {
      puVar13 = (ulong *)unaff_x21[0xb];
    }
    if ((*(byte *)((long)param_3 + 1) >> 3 & 1) != 0) {
      plVar2 = (long *)((long)param_1 + (ulong)*(uint *)(unaff_x21 + 5));
      uVar11 = (ulong)*(uint *)((long)param_3 + 4);
      plVar8 = plVar2;
      FUN_0053572c(plVar2,uVar11,puVar13);
      plVar8[2] = (long)param_3;
      if ((uVar11 & 1) == 0) {
        bVar4 = *(byte *)((long)plVar8 + 10);
        *(byte *)((long)plVar8 + 10) = bVar4 & 0xf0;
        param_3 = (ulong *)*plVar8;
        if ((bVar4 >> 4 & 1) != 0) {
          func_0x00688510();
          func_0x00688404();
                    /* WARNING: Could not recover jumptable at 0x00686a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_3 + 0x28))(param_3,plVar8,*plVar2);
          return param_3;
        }
      }
      else {
        FUN_006538b4();
        *(char *)(plVar8 + 1) = (char)param_3;
        *(undefined1 *)((long)plVar8 + 9) = 0;
        *(undefined1 *)((long)plVar8 + 0xb) = 0;
        func_0x00688510();
        func_0x00688404();
        *(byte *)((long)plVar8 + 10) = *(byte *)((long)plVar8 + 10) & 0xf;
        func_0x006884e4();
        *plVar8 = (long)param_3;
        *(byte *)((long)plVar8 + 10) = *(byte *)((long)plVar8 + 10) & 0xf0;
      }
      return param_3;
    }
    func_0x00692928();
    puVar9 = unaff_x22;
    func_0x00692d18();
    if (puVar9 == (ulong *)0x0) {
      func_0x00692a00();
      FUN_0068aaa4();
LAB_0068de24:
      puVar9 = (ulong *)*unaff_x22;
      if (puVar9 != (ulong *)0x0) {
        return puVar9;
      }
      func_0x00692c50();
      unaff_x30 = 0x68de70;
SUB_0068dbac:
      *(ulong **)((long)ppuVar5 + -0x30) = unaff_x22;
      *(undefined8 **)((long)ppuVar5 + -0x28) = unaff_x21;
      *(ulong **)((long)ppuVar5 + -0x20) = param_1;
      *(ulong **)((long)ppuVar5 + -0x18) = param_3;
      *(undefined1 ***)((long)ppuVar5 + -0x10) = unaff_x29;
      *(undefined8 *)((long)ppuVar5 + -8) = unaff_x30;
      func_0x00692d80();
      puVar13 = (ulong *)puVar9[0xb];
      FUN_006994c8();
      if (puVar13 != puVar9) {
        if (((*(byte *)((long)param_3 + 1) >> 3 & 1) == 0) &&
           ((*(byte *)(param_3[7] + 0x8c) & 1) == 0)) {
          func_0x00692cd0();
          FUN_0068dc6c();
          if ((((ulong)puVar9 & 1) == 0) && (func_0x00692d18(), puVar9 == (ulong *)0x0)) {
            puVar13 = param_1 + 1;
            FUN_0069252c(puVar13,param_3);
            puVar9 = (ulong *)0x0;
            if ((ulong *)*puVar13 != (ulong *)0x0) {
              return (ulong *)*puVar13;
            }
          }
        }
        puVar13 = (ulong *)param_1[0xb];
        func_0x006930bc();
                    /* WARNING: Could not recover jumptable at 0x0068dc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*puVar13 + 0x10))(puVar13,puVar9);
        return puVar13;
      }
      puVar9 = (ulong *)param_3[10];
      if (puVar9 != (ulong *)0x0) {
        return puVar9;
      }
      puVar13 = (ulong *)param_1[0xb];
      func_0x006930bc();
      (**(code **)(*puVar13 + 0x10))(puVar13,puVar9);
      param_3[10] = (ulong)puVar13;
      return puVar13;
    }
    func_0x00692990();
    if (((ulong)puVar9 & 1) != 0) goto LAB_0068de24;
    func_0x00692b68();
    func_0x00692a00();
  }
  else {
    func_0x00692c5c();
LAB_0068deac:
    func_0x00692c24();
LAB_0068deb0:
    puVar9 = (ulong *)*unaff_x21;
    func_0x00692ee4(puVar9,param_3,&UNK_00913f71);
  }
  func_0x0069294c();
  if (puVar9 == (ulong *)0x0) {
    func_0x00692a00();
    FUN_0068aaa4();
  }
  else {
    func_0x00692a00();
    FUN_0068e05c();
  }
  func_0x00692a00();
  func_0x00692914();
  if (puVar9 != (ulong *)0x0) {
    func_0x00692a84();
    return (ulong *)((long)param_3 + ((ulong)puVar9 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928e4();
  if ((int)puVar9 == 0) {
    func_0x00692a78();
    return (ulong *)((long)param_3 + ((ulong)puVar9 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x00692d98();
  puVar13 = puVar9;
  func_0x00692c68();
  FUN_0068eafc();
  uVar11 = (ulong)*(uint *)((long)puVar9 + 0x44);
  lVar12 = *(long *)((long)param_1 + uVar11);
  if (lVar12 != *(long *)(puVar9[1] + uVar11)) goto LAB_0068ea64;
  uVar14 = (ulong)(uint)puVar9[9];
  uVar10 = param_1[1];
  if ((uVar10 & 1) == 0) {
    if (uVar10 == 0) goto LAB_0068ea44;
LAB_0068ea28:
    FUN_0053ff40(uVar10,uVar14,8);
    uVar14 = uVar10;
  }
  else {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    if (uVar10 != 0) goto LAB_0068ea28;
LAB_0068ea44:
    __Znwm();
  }
  *(ulong *)((long)param_1 + uVar11) = uVar14;
  _memcpy();
  lVar12 = *(long *)((long)param_1 + (ulong)*(uint *)((long)puVar9 + 0x44));
LAB_0068ea64:
  puVar9 = (ulong *)(lVar12 + ((ulong)puVar13 & 0xffffffff));
  puVar13 = puVar9;
  if ((*(byte *)((long)param_3 + 1) >> 5 & 1) != 0) {
    uVar11 = param_1[1];
    if ((uVar11 & 1) != 0) {
      uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
    }
    puVar13 = (ulong *)*puVar9;
    if (puVar13 == (ulong *)&UNK_00810e00) {
      func_0x00692c1c();
      iVar6 = (int)puVar13;
      uStack_c8 = uVar11;
      if ((iVar6 < 9) || ((func_0x00692c1c(), iVar6 == 9 && (func_0x00693264(), iVar6 == 1)))) {
        puVar13 = &uStack_c8;
        FUN_00538194();
      }
      else {
        puVar13 = &uStack_c8;
        func_0x00544ca4();
      }
      *puVar9 = (ulong)puVar13;
    }
  }
  return puVar13;
}



/* Entry: 0068dd94; end: 0068defb;  */

/* WARNING: Possible PIC construction at 0x0068de3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0068de40) */
/* WARNING: Removing unreachable block (ram,0x0068de54) */
/* WARNING: Removing unreachable block (ram,0x0068de5c) */

ulong * FUN_0068dd94(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong *unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar12;
  ulong uStack_88;
  
  func_0x00692960();
  if ((bool)in_ZR) {
    func_0x00692d74();
    if ((bool)in_CY) {
      func_0x00692d00();
      goto LAB_0068deac;
    }
    func_0x00692a6c();
    if ((int)param_1 != 10) goto LAB_0068deb0;
    if (param_4 == 0) {
      param_4 = unaff_x21[0xb];
    }
    if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + (ulong)(uint)unaff_x21[5]);
      uVar10 = (ulong)*(uint *)((long)unaff_x19 + 4);
      puVar4 = puVar1;
      FUN_0053572c(puVar1,uVar10,param_4);
      puVar4[2] = unaff_x19;
      if ((uVar10 & 1) == 0) {
        bVar2 = *(byte *)((long)puVar4 + 10);
        *(byte *)((long)puVar4 + 10) = bVar2 & 0xf0;
        unaff_x19 = (ulong *)*puVar4;
        if ((bVar2 >> 4 & 1) != 0) {
          func_0x00688510();
          func_0x00688404();
                    /* WARNING: Could not recover jumptable at 0x00686a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x19 + 0x28))(unaff_x19,puVar4,*puVar1);
          return unaff_x19;
        }
      }
      else {
        FUN_006538b4();
        *(char *)(puVar4 + 1) = (char)unaff_x19;
        *(undefined1 *)((long)puVar4 + 9) = 0;
        *(undefined1 *)((long)puVar4 + 0xb) = 0;
        func_0x00688510();
        func_0x00688404();
        *(byte *)((long)puVar4 + 10) = *(byte *)((long)puVar4 + 10) & 0xf;
        func_0x006884e4();
        *puVar4 = unaff_x19;
        *(byte *)((long)puVar4 + 10) = *(byte *)((long)puVar4 + 10) & 0xf0;
      }
      return unaff_x19;
    }
    func_0x00692928();
    plVar6 = param_1;
    func_0x00692d18();
    if (plVar6 == (long *)0x0) {
      func_0x00692a00();
      FUN_0068aaa4();
LAB_0068de24:
      puVar5 = (ulong *)*param_1;
      if (puVar5 != (ulong *)0x0) {
        return puVar5;
      }
      func_0x00692c50();
      func_0x0068dbac();
      func_0x00692f78();
      *param_1 = (long)puVar5;
      return puVar5;
    }
    func_0x00692990();
    if (((ulong)plVar6 & 1) != 0) goto LAB_0068de24;
    func_0x00692b68();
    func_0x00692a00();
  }
  else {
    func_0x00692c5c();
LAB_0068deac:
    func_0x00692c24();
LAB_0068deb0:
    plVar6 = (long *)*unaff_x21;
    func_0x00692ee4();
  }
  func_0x0069294c();
  if (plVar6 == (long *)0x0) {
    func_0x00692a00();
    FUN_0068aaa4();
  }
  else {
    func_0x00692a00();
    FUN_0068e05c();
  }
  func_0x00692a00();
  func_0x00692914();
  if (plVar6 != (long *)0x0) {
    func_0x00692a84();
    return (ulong *)((long)unaff_x19 + ((ulong)plVar6 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928e4();
  if ((int)plVar6 == 0) {
    func_0x00692a78();
    return (ulong *)((long)unaff_x19 + ((ulong)plVar6 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x00692d98();
  plVar7 = plVar6;
  func_0x00692c68();
  FUN_0068eafc();
  uVar10 = (ulong)*(uint *)((long)plVar6 + 0x44);
  lVar11 = *(long *)(unaff_x20 + uVar10);
  if (lVar11 != *(long *)(plVar6[1] + uVar10)) goto LAB_0068ea64;
  uVar12 = (ulong)*(uint *)(plVar6 + 9);
  uVar8 = *(ulong *)(unaff_x20 + 8);
  if ((uVar8 & 1) == 0) {
    if (uVar8 == 0) goto LAB_0068ea44;
LAB_0068ea28:
    FUN_0053ff40(uVar8,uVar12,8);
    uVar12 = uVar8;
  }
  else {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    if (uVar8 != 0) goto LAB_0068ea28;
LAB_0068ea44:
    __Znwm();
  }
  *(ulong *)(unaff_x20 + uVar10) = uVar12;
  _memcpy();
  lVar11 = *(long *)(unaff_x20 + (ulong)*(uint *)((long)plVar6 + 0x44));
LAB_0068ea64:
  puVar5 = (ulong *)(lVar11 + ((ulong)plVar7 & 0xffffffff));
  puVar9 = puVar5;
  if ((*(byte *)((long)unaff_x19 + 1) >> 5 & 1) != 0) {
    uVar10 = *(ulong *)(unaff_x20 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
    }
    puVar9 = (ulong *)*puVar5;
    if (puVar9 == (ulong *)&UNK_00810e00) {
      func_0x00692c1c();
      iVar3 = (int)puVar9;
      uStack_88 = uVar10;
      if ((iVar3 < 9) || ((func_0x00692c1c(), iVar3 == 9 && (func_0x00693264(), iVar3 == 1)))) {
        puVar9 = &uStack_88;
        FUN_00538194();
      }
      else {
        puVar9 = &uStack_88;
        func_0x00544ca4();
      }
      *puVar5 = (ulong)puVar9;
    }
  }
  return puVar9;
}



/* Entry: 0068defc; end: 0068e05b;  */

void FUN_0068defc(undefined8 *param_1,ulong param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  uint extraout_w8;
  long extraout_x8;
  code *pcVar12;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar13;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  plVar9 = (long *)*param_1;
  bVar5 = plVar9 <= *(long **)(param_4 + 0x20);
  if (*(long **)(param_4 + 0x20) == plVar9) {
    lVar11 = param_4;
    func_0x00693308();
    if (bVar5) {
      func_0x00692d00();
      goto LAB_0068e048;
    }
    func_0x00692be0();
    if ((int)plVar9 == 10) {
      if ((*(byte *)(param_4 + 1) >> 3 & 1) != 0) {
        func_0x00692db0();
        func_0x006932f0();
        if (param_3 == 0) goto FUN_00533aac;
        plVar8 = plVar9;
        FUN_0053572c();
        plVar8[2] = lVar11;
        if ((param_2 & 1) == 0) {
          if ((*(byte *)((long)plVar8 + 10) >> 4 & 1) != 0) {
            (**(code **)(*(long *)*plVar8 + 0x38))((long *)*plVar8,param_3,*plVar9);
            goto LAB_005348ec;
          }
          if ((*plVar9 == 0) && (*plVar8 != 0)) {
            func_0x0053a5c4();
            (*extraout_x8_00)();
          }
        }
        else {
          func_0x0053aaf4();
        }
        *plVar8 = param_3;
LAB_005348ec:
        *(byte *)((long)plVar8 + 10) = *(byte *)((long)plVar8 + 10) & 0xf0;
        return;
      }
      func_0x00692e94();
      if (plVar9 == (long *)0x0) {
        func_0x00692a5c();
        if (param_3 == 0) {
          FUN_0068b0c8();
        }
        else {
          FUN_0068aaa4();
        }
        func_0x00692a5c();
        func_0x0068eb7c();
        uVar13 = unaff_x21[1];
        if ((uVar13 & 1) != 0) {
          func_0x006931f8();
          uVar13 = extraout_x8_07;
        }
        if ((uVar13 == 0) && (*plVar9 != 0)) {
          func_0x00692ca4();
        }
        *plVar9 = param_3;
        return;
      }
      if (param_3 == 0) {
        if ((*(byte *)(param_4 + 1) >> 4 & 1) == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(long *)(param_4 + 0x28);
        }
        func_0x00692c2c();
        puVar2 = (undefined1 *)register0x00000008;
        uVar13 = unaff_x20;
        while( true ) {
          unaff_x20 = param_2;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(long **)(puVar2 + -0x28) = unaff_x21;
          *(ulong *)(puVar2 + -0x20) = uVar13;
          *(long *)(puVar2 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar2 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar2 + -8) = unaff_x30;
          uVar4 = *(int *)(lVar11 + 4) != 0;
          uVar6 = *(int *)(lVar11 + 4) == 1;
          if ((!(bool)uVar6) || ((*(byte *)(*(long *)(lVar11 + 0x30) + 1) >> 1 & 1) == 0)) {
            func_0x006930c4();
            if (*(int *)(unaff_x20 + (extraout_x8_04 & 0xffffffff)) != 0) {
              plVar9 = (long *)*plVar9;
              FUN_00656068();
              uVar13 = *(ulong *)(unaff_x20 + 8);
              plVar8 = plVar9;
              if ((uVar13 & 1) != 0) {
                func_0x006931f8();
                uVar13 = extraout_x8_06;
              }
              if (uVar13 == 0) {
                func_0x00693398();
                if ((int)plVar8 == 10) {
                  func_0x00692c50();
                  func_0x0068eb7c();
                  if (*plVar8 != 0) {
                    func_0x00692ca4();
                  }
                }
                else if ((int)plVar8 == 9) {
                  FUN_00689b10();
                  if ((int)plVar9 == 1) {
                    func_0x00692c50();
                    func_0x0068eb7c();
                    if (*plVar9 != 0) {
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
          iVar7 = (int)plVar9;
          uVar1 = *(undefined8 *)(puVar2 + -0x20);
          unaff_x19 = *(long *)(puVar2 + -0x18);
          unaff_x22 = *(undefined8 *)(puVar2 + -0x30);
          unaff_x21 = *(long **)(puVar2 + -0x28);
          register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x50);
          *(undefined8 *)(puVar2 + -0x50) = unaff_d9;
          *(undefined8 *)(puVar2 + -0x48) = unaff_d8;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(long **)(puVar2 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar2 + -0x20) = uVar1;
          *(long *)(puVar2 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
          *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
          func_0x00692960();
          if (!(bool)uVar6) {
            func_0x00692c5c();
            func_0x00692c24();
            *(undefined8 *)(puVar2 + -0x70) = uVar1;
            *(long *)(puVar2 + -0x68) = unaff_x19;
            *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
            *(code **)(puVar2 + -0x58) = FUN_0068aaa4;
            func_0x00692d80();
            func_0x00692c68();
            func_0x0068b0fc();
            if (iVar7 != -1) {
              func_0x00693210();
              *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
            }
            return;
          }
          if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) != 0) break;
          if ((*(byte *)(unaff_x19 + 1) >> 5 & 1) != 0) {
            FUN_00656c60();
            func_0x00692f84();
            if (!(bool)uVar4 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0068a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_00827603)[extraout_x8_02] * 4 + 0x68a870))();
              return;
            }
LAB_0068aa80:
            func_0x00693490();
            return;
          }
          lVar11 = unaff_x19;
          FUN_00659454();
          if (lVar11 == 0) {
            func_0x00692a00();
            iVar7 = (int)lVar11;
            FUN_0068a604();
            if (iVar7 != 0) {
              func_0x00692a00();
              FUN_0068b0c8();
              func_0x00692c1c();
              func_0x00692f84();
              if (!(bool)uVar4 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0068a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)(byte)(&UNK_0082760d)[extraout_x8_03] * 4 + 0x68a8b4))();
                return;
              }
            }
            goto LAB_0068aa80;
          }
          func_0x00692990();
          if ((int)lVar11 == 0) goto LAB_0068aa80;
          if ((*(byte *)(unaff_x19 + 1) >> 4 & 1) == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(long *)(unaff_x19 + 0x28);
          }
          unaff_x29 = *(undefined8 *)(puVar2 + -0x10);
          unaff_x30 = *(undefined8 *)(puVar2 + -8);
          plVar9 = unaff_x21;
          param_2 = unaff_x20;
          func_0x00693490();
          puVar2 = puVar2 + -0x50;
          uVar13 = unaff_x20;
        }
        func_0x00692eac();
        plVar9 = (long *)(unaff_x20 + extraout_x8_01);
        unaff_x29 = *(undefined8 *)(puVar2 + -0x10);
        unaff_x30 = *(undefined8 *)(puVar2 + -8);
        func_0x00693490();
FUN_00533aac:
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        func_0x005339b8();
        if (plVar9 == (long *)0x0) {
          return;
        }
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        bVar3 = *(char *)((long)plVar9 + 9) != '\0';
        bVar5 = *(char *)((long)plVar9 + 9) == '\x01';
        if (bVar5) {
          func_0x0053a4c8((char)plVar9[1]);
          if (!bVar3 || bVar5) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
            return;
          }
        }
        else if ((*(byte *)((long)plVar9 + 10) & 1) == 0) {
          if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(plVar9 + 1) * 4) == 10) {
            if ((*(byte *)((long)plVar9 + 10) >> 4 & 1) == 0) {
              pcVar12 = *(code **)(*(long *)*plVar9 + 0x18);
            }
            else {
              pcVar12 = *(code **)(*(long *)*plVar9 + 0x88);
            }
            (*pcVar12)();
          }
          else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(plVar9 + 1) * 4) == 9) {
            func_0x0048d000(*plVar9);
          }
          *(byte *)((long)plVar9 + 10) = *(byte *)((long)plVar9 + 10) & 0xf0 | 1;
        }
        return;
      }
      if ((*(byte *)(param_4 + 1) >> 4 & 1) == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = *(undefined **)(param_4 + 0x28);
      }
      func_0x00692c2c();
      FUN_0068d0dc();
      func_0x00692a5c();
      func_0x0068eb7c();
      *plVar9 = param_3;
      func_0x00692a5c();
      goto FUN_0068e05c;
    }
  }
  else {
    func_0x00692c5c(plVar9,param_2,&UNK_00913f80);
LAB_0068e048:
    func_0x00692e58();
  }
  plVar9 = (long *)*param_1;
  puVar10 = &UNK_00913f80;
  func_0x00692da4();
FUN_0068e05c:
  *(undefined4 *)
   (param_2 +
   (uint)(*(int *)((long)plVar9 + 0x2c) +
         (int)((*(long *)(puVar10 + 0x28) -
               *(long *)(*(long *)(*(long *)(puVar10 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar10 + 4);
  return;
}



/* Entry: 0068e05c; end: 0068e087;  */

void FUN_0068e05c(long param_1,long param_2,long param_3)

{
  *(undefined4 *)
   (param_2 +
   (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                (int)((*(long *)(param_3 + 0x28) -
                      *(long *)(*(long *)(*(long *)(param_3 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(param_3 + 4);
  return;
}



/* Entry: 0068e088; end: 0068e1cf;  */

code * FUN_0068e088(code *param_1,code *param_2,code *param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  uint extraout_w8;
  long extraout_x8;
  code *pcVar9;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar10;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  code *pcVar11;
  code *extraout_x8_08;
  long extraout_x9;
  ulong extraout_x10;
  uint extraout_w11;
  code *unaff_x19;
  code *unaff_x20;
  code *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_48 [8];
  
  if (param_3 == (code *)0x0) {
    func_0x00692c2c();
  }
  else {
    param_1 = *(code **)(param_2 + 8);
    if (((ulong)param_1 & 1) != 0) {
      param_1 = *(code **)((ulong)param_1 & 0xfffffffffffffffe);
    }
    pcVar11 = *(code **)(param_3 + 8);
    UNRECOVERED_JUMPTABLE = param_3;
    if (((ulong)pcVar11 & 1) != 0) {
      func_0x006931f8();
      pcVar11 = extraout_x8_08;
    }
    if (param_1 != pcVar11) {
      if (pcVar11 != (code *)0x0) {
        func_0x00692ac0();
        FUN_0068dd94();
        if (param_3 != param_1) {
          func_0x0069b0dc();
          func_0x0069af04();
          UNRECOVERED_JUMPTABLE = param_1;
          func_0x0069aef4();
          if (UNRECOVERED_JUMPTABLE != (code *)0x0 && UNRECOVERED_JUMPTABLE == param_1) {
            (**(code **)(*(long *)unaff_x20 + 0x18))(unaff_x20);
            UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
            func_0x0069aff0();
                    /* WARNING: Could not recover jumptable at 0x00699198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return unaff_x20;
          }
          FUN_00699298();
          FUN_00699298();
          param_1 = (code *)auStack_48;
          FUN_0068e61c(param_1,&stack0xffffffffffffffc8,&UNK_00914b0e);
          if (param_1 != (code *)0x0) {
            lVar8 = (long)(char)param_1[0x17];
            UNRECOVERED_JUMPTABLE = param_1;
            if (lVar8 < 0) {
              UNRECOVERED_JUMPTABLE = *(code **)param_1;
              lVar8 = *(long *)(param_1 + 8);
            }
            FUN_00776714(auStack_48,&UNK_00914b31,0x66,UNRECOVERED_JUMPTABLE,lVar8);
            UNRECOVERED_JUMPTABLE = (code *)auStack_48;
            FUN_00699214(UNRECOVERED_JUMPTABLE,&UNK_00914b63);
            FUN_00555478();
            FUN_00682fec();
            FUN_00699298();
            lVar8 = *(long *)(unaff_x19 + 8) + 0x18;
            FUN_00555478(UNRECOVERED_JUMPTABLE,lVar8);
            FUN_005558a0(auStack_48);
            func_0x0069b0dc();
            _strlen(lVar8);
            func_0x0069aff0();
            FUN_00554ab4();
            return UNRECOVERED_JUMPTABLE;
          }
          func_0x0069b0d0();
          FUN_0069b200();
        }
        return param_1;
      }
      UNRECOVERED_JUMPTABLE = FUN_00538668;
      FUN_00550ffc();
      param_2 = param_3;
    }
    func_0x00692a5c();
    param_3 = UNRECOVERED_JUMPTABLE;
  }
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  bVar5 = UNRECOVERED_JUMPTABLE <= *(code **)(param_4 + 0x20);
  if (*(code **)(param_4 + 0x20) == UNRECOVERED_JUMPTABLE) {
    lVar8 = param_4;
    func_0x00693308();
    if (bVar5) {
      func_0x00692d00();
      goto LAB_0068e048;
    }
    func_0x00692be0();
    if ((int)UNRECOVERED_JUMPTABLE == 10) {
      if ((*(byte *)(param_4 + 1) >> 3 & 1) != 0) {
        func_0x00692db0();
        func_0x006932f0();
        if (param_3 == (code *)0x0) goto FUN_00533aac;
        pcVar11 = UNRECOVERED_JUMPTABLE;
        FUN_0053572c();
        *(long *)(pcVar11 + 0x10) = lVar8;
        pcVar9 = pcVar11;
        if (((ulong)param_2 & 1) == 0) {
          if (((byte)pcVar11[10] >> 4 & 1) != 0) {
            pcVar9 = *(code **)pcVar11;
            (**(code **)(*(long *)pcVar9 + 0x38))
                      (pcVar9,param_3,*(undefined8 *)UNRECOVERED_JUMPTABLE);
            goto LAB_005348ec;
          }
          if ((*(long *)UNRECOVERED_JUMPTABLE == 0) &&
             (pcVar9 = *(code **)pcVar11, pcVar9 != (code *)0x0)) {
            func_0x0053a5c4();
            (*extraout_x8_00)();
          }
        }
        else {
          func_0x0053aaf4();
        }
        *(code **)pcVar11 = param_3;
LAB_005348ec:
        pcVar11[10] = (code)((byte)pcVar11[10] & 0xf0);
        return pcVar9;
      }
      func_0x00692e94();
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        func_0x00692a5c();
        if (param_3 == (code *)0x0) {
          FUN_0068b0c8();
        }
        else {
          FUN_0068aaa4();
        }
        func_0x00692a5c();
        func_0x0068eb7c();
        uVar10 = *(ulong *)(unaff_x21 + 8);
        pcVar11 = UNRECOVERED_JUMPTABLE;
        if ((uVar10 & 1) != 0) {
          func_0x006931f8();
          uVar10 = extraout_x8_07;
        }
        if ((uVar10 == 0) && (pcVar11 = *(code **)UNRECOVERED_JUMPTABLE, pcVar11 != (code *)0x0)) {
          func_0x00692ca4();
        }
        *(code **)UNRECOVERED_JUMPTABLE = param_3;
        return pcVar11;
      }
      if (param_3 == (code *)0x0) {
        if ((*(byte *)(param_4 + 1) >> 4 & 1) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(param_4 + 0x28);
        }
        func_0x00692c2c();
        puVar2 = (undefined1 *)register0x00000008;
        pcVar11 = unaff_x20;
        while( true ) {
          unaff_x20 = param_2;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(code **)(puVar2 + -0x28) = unaff_x21;
          *(code **)(puVar2 + -0x20) = pcVar11;
          *(code **)(puVar2 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar2 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar2 + -8) = unaff_x30;
          uVar4 = *(int *)(lVar8 + 4) != 0;
          uVar6 = *(int *)(lVar8 + 4) == 1;
          if ((!(bool)uVar6) || ((*(byte *)(*(long *)(lVar8 + 0x30) + 1) >> 1 & 1) == 0)) {
            pcVar11 = UNRECOVERED_JUMPTABLE;
            func_0x006930c4();
            if (*(int *)(unaff_x20 + (extraout_x8_04 & 0xffffffff)) != 0) {
              UNRECOVERED_JUMPTABLE = *(code **)UNRECOVERED_JUMPTABLE;
              FUN_00656068();
              uVar10 = *(ulong *)(unaff_x20 + 8);
              pcVar11 = UNRECOVERED_JUMPTABLE;
              if ((uVar10 & 1) != 0) {
                func_0x006931f8();
                uVar10 = extraout_x8_06;
              }
              if (uVar10 == 0) {
                func_0x00693398();
                if ((int)pcVar11 == 10) {
                  func_0x00692c50();
                  func_0x0068eb7c();
                  pcVar11 = *(code **)pcVar11;
                  if (pcVar11 != (code *)0x0) {
                    func_0x00692ca4();
                  }
                }
                else if ((int)pcVar11 == 9) {
                  FUN_00689b10();
                  if ((int)UNRECOVERED_JUMPTABLE == 1) {
                    func_0x00692c50();
                    func_0x0068eb7c();
                    pcVar11 = *(code **)UNRECOVERED_JUMPTABLE;
                    if (pcVar11 != (code *)0x0) {
                      FUN_00543968();
                    }
                    __ZdlPv();
                  }
                  else {
                    func_0x00692c50();
                    FUN_0068d284();
                    func_0x00532f74();
                    pcVar11 = UNRECOVERED_JUMPTABLE;
                  }
                }
              }
              func_0x006930c4();
              *(undefined4 *)(unaff_x20 + (extraout_x8_05 & 0xffffffff)) = 0;
            }
            return pcVar11;
          }
          func_0x00692c50();
          uVar1 = *(undefined8 *)(puVar2 + -0x20);
          unaff_x19 = *(code **)(puVar2 + -0x18);
          unaff_x22 = *(undefined8 *)(puVar2 + -0x30);
          unaff_x21 = *(code **)(puVar2 + -0x28);
          register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x50);
          *(undefined8 *)(puVar2 + -0x50) = unaff_d9;
          *(undefined8 *)(puVar2 + -0x48) = unaff_d8;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(code **)(puVar2 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar2 + -0x20) = uVar1;
          *(code **)(puVar2 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
          *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
          func_0x00692960();
          if (!(bool)uVar6) {
            func_0x00692c5c();
            func_0x00692c24();
            *(undefined8 *)(puVar2 + -0x70) = uVar1;
            *(code **)(puVar2 + -0x68) = unaff_x19;
            *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
            *(code **)(puVar2 + -0x58) = FUN_0068aaa4;
            func_0x00692d80();
            func_0x00692c68();
            func_0x0068b0fc();
            if ((int)UNRECOVERED_JUMPTABLE != -1) {
              func_0x00693210();
              *(uint *)(extraout_x9 + (extraout_x10 & 0xffffffff) * 4) = extraout_w11 | extraout_w8;
            }
            return UNRECOVERED_JUMPTABLE;
          }
          if (((byte)unaff_x19[1] >> 3 & 1) != 0) break;
          if (((byte)unaff_x19[1] >> 5 & 1) != 0) {
            FUN_00656c60();
            func_0x00692f84();
            UNRECOVERED_JUMPTABLE = unaff_x19;
            if (!(bool)uVar4 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0068a86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_00827603)[extraout_x8_02] * 4 + 0x68a870))();
              return unaff_x19;
            }
LAB_0068aa80:
            func_0x00693490();
            return UNRECOVERED_JUMPTABLE;
          }
          UNRECOVERED_JUMPTABLE = unaff_x19;
          FUN_00659454();
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            func_0x00692a00();
            FUN_0068a604();
            if ((int)UNRECOVERED_JUMPTABLE != 0) {
              func_0x00692a00();
              FUN_0068b0c8();
              func_0x00692c1c();
              func_0x00692f84();
              if (!(bool)uVar4 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0068a8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)(byte)(&UNK_0082760d)[extraout_x8_03] * 4 + 0x68a8b4))();
                return UNRECOVERED_JUMPTABLE;
              }
            }
            goto LAB_0068aa80;
          }
          func_0x00692990();
          if ((int)UNRECOVERED_JUMPTABLE == 0) goto LAB_0068aa80;
          if (((byte)unaff_x19[1] >> 4 & 1) == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(unaff_x19 + 0x28);
          }
          unaff_x29 = *(undefined8 *)(puVar2 + -0x10);
          unaff_x30 = *(undefined8 *)(puVar2 + -8);
          UNRECOVERED_JUMPTABLE = unaff_x21;
          param_2 = unaff_x20;
          func_0x00693490();
          puVar2 = puVar2 + -0x50;
          pcVar11 = unaff_x20;
        }
        func_0x00692eac();
        UNRECOVERED_JUMPTABLE = unaff_x20 + extraout_x8_01;
        unaff_x29 = *(undefined8 *)(puVar2 + -0x10);
        unaff_x30 = *(undefined8 *)(puVar2 + -8);
        func_0x00693490();
FUN_00533aac:
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        func_0x005339b8();
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return (code *)0x0;
        }
        *(code **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(code **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        bVar3 = UNRECOVERED_JUMPTABLE[9] != (code)0x0;
        bVar5 = UNRECOVERED_JUMPTABLE[9] == (code)0x1;
        if (bVar5) {
          func_0x0053a4c8(UNRECOVERED_JUMPTABLE[8]);
          pcVar11 = UNRECOVERED_JUMPTABLE;
          if (!bVar3 || bVar5) {
                    /* WARNING: Could not recover jumptable at 0x00533b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_00810bd6)[extraout_x8] * 4 + 0x533b0c))();
            return UNRECOVERED_JUMPTABLE;
          }
        }
        else {
          pcVar11 = UNRECOVERED_JUMPTABLE;
          if (((byte)UNRECOVERED_JUMPTABLE[10] & 1) == 0) {
            if (*(int *)(&UNK_00810e40 + (ulong)(byte)UNRECOVERED_JUMPTABLE[8] * 4) == 10) {
              pcVar11 = *(code **)UNRECOVERED_JUMPTABLE;
              if (((byte)UNRECOVERED_JUMPTABLE[10] >> 4 & 1) == 0) {
                pcVar9 = *(code **)(*(long *)pcVar11 + 0x18);
              }
              else {
                pcVar9 = *(code **)(*(long *)pcVar11 + 0x88);
              }
              (*pcVar9)();
            }
            else if (*(int *)(&UNK_00810e40 + (ulong)(byte)UNRECOVERED_JUMPTABLE[8] * 4) == 9) {
              pcVar11 = *(code **)UNRECOVERED_JUMPTABLE;
              func_0x0048d000(pcVar11);
            }
            UNRECOVERED_JUMPTABLE[10] = (code)((byte)UNRECOVERED_JUMPTABLE[10] & 0xf0 | 1);
          }
        }
        return pcVar11;
      }
      if ((*(byte *)(param_4 + 1) >> 4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = *(undefined **)(param_4 + 0x28);
      }
      func_0x00692c2c();
      FUN_0068d0dc();
      func_0x00692a5c();
      func_0x0068eb7c();
      *(code **)UNRECOVERED_JUMPTABLE = param_3;
      func_0x00692a5c();
      goto FUN_0068e05c;
    }
  }
  else {
    func_0x00692c5c();
LAB_0068e048:
    func_0x00692e58();
  }
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  puVar7 = &UNK_00913f80;
  func_0x00692da4();
FUN_0068e05c:
  *(undefined4 *)
   (param_2 +
   (uint)(*(int *)(UNRECOVERED_JUMPTABLE + 0x2c) +
         (int)((*(long *)(puVar7 + 0x28) -
               *(long *)(*(long *)(*(long *)(puVar7 + 0x28) + 0x10) + 0x40)) / 0x38) * 4)) =
       *(undefined4 *)(puVar7 + 4);
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 0068e1d0; end: 0068e313;  */

ulong * FUN_0068e1d0(int param_1,long param_2,long param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong *puVar3;
  undefined1 **ppuVar4;
  undefined1 **ppuVar5;
  ulong *puVar6;
  ulong *puVar7;
  long unaff_x19;
  ulong *unaff_x22;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  func_0x006929c8();
  if ((bool)in_ZR) {
    func_0x006934f0();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00692e6c();
      unaff_x19 = param_2;
      if (param_1 == 10) {
        if (param_4 == (ulong *)0x0) {
          param_4 = (ulong *)unaff_x22[0xb];
        }
        if ((*(byte *)(param_3 + 1) >> 3 & 1) == 0) {
          func_0x00693390();
          func_0x0068eb7c();
          if (param_1 != 0) {
            FUN_00696894();
          }
          puVar6 = unaff_x22;
          FUN_0068e314();
          if (puVar6 == (ulong *)0x0) {
            if ((int)unaff_x22[1] == 0) {
              func_0x006931a0();
              (**(code **)(*param_4 + 0x10))(param_4,puVar6);
            }
            else {
              param_4 = unaff_x22;
              if ((*unaff_x22 & 1) != 0) {
                param_4 = (ulong *)(*unaff_x22 + 7);
              }
              param_4 = (ulong *)*param_4;
            }
            func_0x00692f78();
            FUN_0068e368(unaff_x22,param_4);
            puVar6 = param_4;
          }
          return puVar6;
        }
        puVar6 = (ulong *)(param_2 + (ulong)(uint)unaff_x22[5]);
        FUN_00686ad0(puVar6,param_3,param_4);
        puVar3 = (ulong *)*puVar6;
        FUN_00686c10();
        if (puVar3 == (ulong *)0x0) {
          puVar7 = (ulong *)*puVar6;
          if ((int)puVar7[1] == 0) {
            func_0x00688510();
            func_0x00688404();
            if (puVar3 == (ulong *)0x0) {
              FUN_00533884(&lStack_60,&UNK_0091353a);
              FUN_00776794(&puStack_50,&UNK_009134fc,0xeb,lStack_60,lStack_58);
              ppuVar4 = &puStack_50;
              FUN_005558a0();
              iVar1 = *(int *)(ppuVar4 + 1);
              ppuVar5 = ppuVar4;
              FUN_0048cf58();
              if (iVar1 < (int)ppuVar5) {
                iVar1 = *(int *)(ppuVar4 + 1);
                *(int *)(ppuVar4 + 1) = iVar1 + 1;
                if (((ulong)*ppuVar4 & 1) != 0) {
                  ppuVar4 = (undefined1 **)(*ppuVar4 + (long)iVar1 * 8 + 7);
                }
                puVar6 = (ulong *)*ppuVar4;
              }
              else {
                puVar6 = (ulong *)0x0;
              }
              return puVar6;
            }
          }
          else {
            if ((*puVar7 & 1) != 0) {
              puVar7 = (ulong *)(*puVar7 + 7);
            }
            puVar3 = (ulong *)*puVar7;
          }
          func_0x006884e4();
          FUN_00687fdc(*puVar6,puVar3);
        }
        return puVar3;
      }
      goto LAB_0068e304;
    }
    func_0x00692d0c();
  }
  else {
    func_0x00692c5c();
  }
  func_0x00692e58();
LAB_0068e304:
  puVar6 = (ulong *)*unaff_x22;
  func_0x00692da4();
  pcStack_48 = FUN_0068e314;
  uVar2 = puVar6[1];
  puVar3 = puVar6;
  lStack_60 = param_3;
  lStack_58 = unaff_x19;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_0048cf58();
  if ((int)uVar2 < (int)puVar3) {
    uVar2 = puVar6[1];
    *(int *)(puVar6 + 1) = (int)uVar2 + 1;
    if ((*puVar6 & 1) != 0) {
      puVar6 = (ulong *)(*puVar6 + (long)(int)uVar2 * 8 + 7);
    }
    puVar6 = (ulong *)*puVar6;
  }
  else {
    puVar6 = (ulong *)0x0;
  }
  return puVar6;
}



/* Entry: 0068e314; end: 0068e367;  */

ulong FUN_0068e314(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  puVar1 = param_1;
  FUN_0048cf58();
  if ((int)uVar2 < (int)puVar1) {
    uVar2 = param_1[1];
    *(int *)(param_1 + 1) = (int)uVar2 + 1;
    if ((*param_1 & 1) != 0) {
      param_1 = (ulong *)(*param_1 + (long)(int)uVar2 * 8 + 7);
    }
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 0068e368; end: 0068e50b;  */

void FUN_0068e368(long param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  
  func_0x00692d80();
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    FUN_0054cdf0();
LAB_0068e390:
    uVar3 = *unaff_x20;
  }
  else {
    FUN_0068808c();
    uVar4 = unaff_x20[1];
    iVar2 = (int)param_1;
    if (iVar2 != 0) {
      uVar3 = *unaff_x20;
      puVar1 = unaff_x20;
      if ((uVar3 & 1) != 0) {
        puVar1 = (ulong *)(uVar3 + (long)(int)uVar4 * 8 + 7);
      }
      if ((*puVar1 != 0) && (unaff_x20[2] == 0)) {
        func_0x00692ca4();
        uVar3 = *unaff_x20;
      }
      goto LAB_0068e3a0;
    }
    func_0x00693198();
    if ((int)uVar4 < iVar2) {
      puVar1 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar1 = (ulong *)(*unaff_x20 + (long)(int)unaff_x20[1] * 8 + 7);
      }
      uVar4 = *puVar1;
      func_0x00693198();
      puVar1 = unaff_x20;
      if ((*unaff_x20 & 1) != 0) {
        puVar1 = (ulong *)(*unaff_x20 + (long)iVar2 * 8 + 7);
      }
      *puVar1 = uVar4;
      goto LAB_0068e390;
    }
    uVar3 = *unaff_x20;
    if ((uVar3 & 1) == 0) goto LAB_0068e3a0;
  }
  *(int *)(uVar3 - 1) = *(int *)(uVar3 - 1) + 1;
LAB_0068e3a0:
  uVar4 = unaff_x20[1];
  *(int *)(unaff_x20 + 1) = (int)uVar4 + 1;
  if ((uVar3 & 1) != 0) {
    unaff_x20 = (ulong *)(uVar3 + (long)(int)uVar4 * 8 + 7);
  }
  *unaff_x20 = unaff_x19;
  return;
}



/* Entry: 0068e50c; end: 0068e61b;  */

undefined ***
FUN_0068e50c(undefined ***param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
            long param_6)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined1 auStack_188 [56];
  undefined8 uStack_150;
  char cStack_139;
  undefined **appuStack_128 [19];
  undefined8 uStack_90;
  long alStack_58 [2];
  long lStack_48;
  
  func_0x00692d8c();
  lStack_48 = param_6;
  if (*(byte *)(param_3 + 1) < 0xc0) {
    func_0x00692d0c(*unaff_x21);
    func_0x00692c24();
  }
  else {
    func_0x00692a6c();
    unaff_x22 = param_4;
    if (((int)param_1 == (int)param_4) ||
       (func_0x00692c1c(), (int)param_4 == 1 && (int)param_1 == 8)) {
      if (param_6 == 0) {
LAB_0068e56c:
        if ((*(byte *)((long)unaff_x19 + 1) >> 3 & 1) == 0) {
          func_0x006930ac();
          pppuVar5 = param_1;
          func_0x00692a00();
          FUN_0068eb40();
          if ((int)param_1 != 0) {
            FUN_00696894();
          }
        }
        else {
          uVar2 = *(uint *)(unaff_x21 + 5);
          uVar3 = *(undefined4 *)((long)unaff_x19 + 4);
          func_0x00692cdc();
          FUN_00659660();
          pppuVar5 = (undefined ***)(unaff_x20 + (ulong)uVar2);
          FUN_0053445c(pppuVar5,uVar3,(uint)param_1 & 0xff,unaff_x19);
        }
        return pppuVar5;
      }
      func_0x006930bc();
      func_0x00692f30();
      bVar1 = param_1 == (undefined ***)0x0;
      param_1 = (undefined ***)0x0;
      if (bVar1) goto LAB_0068e56c;
      func_0x00693108();
      func_0x00693044();
      plVar6 = alStack_58;
      puVar9 = (undefined *)0xa27;
      FUN_00776714();
      func_0x00693124();
      unaff_x19 = param_2;
      goto LAB_0068e618;
    }
  }
  plVar6 = (long *)*unaff_x21;
  puVar9 = &UNK_00913fdb;
  FUN_00777344();
LAB_0068e618:
  func_0x0069308c();
  lVar7 = *plVar6;
  lVar8 = *unaff_x19;
  if (lVar7 == lVar8) {
    return (undefined ***)0x0;
  }
  uStack_90 = unaff_x22;
  FUN_004799f4(&ppuStack_198);
  puVar4 = puVar9;
  _strlen(puVar9);
  FUN_00462690(&ppuStack_198,puVar9,puVar4);
  FUN_00462690();
  if (lVar7 == 0) {
    FUN_00462690(&ppuStack_198,"(null)",6);
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(&ppuStack_198,lVar7);
  }
  FUN_00462690(&ppuStack_198," vs. ",5);
  if (lVar8 == 0) {
    FUN_00462690(&ppuStack_198,"(null)",6);
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(&ppuStack_198,lVar8);
  }
  pppuVar5 = &ppuStack_198;
  FUN_00554368(pppuVar5);
  appuStack_128[0] = &PTR_FUN_009e7e18;
  ppuStack_198 = &PTR_FUN_009e7df0;
  ppuStack_190 = &PTR_FUN_009e5de0;
  if (cStack_139 < '\0') {
    __ZdlPv(uStack_150);
  }
  ppuStack_190 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_188);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_198,&PTR_PTR_009e7e30);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_128);
  return pppuVar5;
}



/* Entry: 0068e61c; end: 0068e633;  */

undefined *** FUN_0068e61c(long *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  long lVar3;
  long lVar4;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if (lVar3 == lVar4) {
    return (undefined ***)0x0;
  }
  FUN_004799f4(&ppuStack_138);
  uVar1 = param_3;
  _strlen(param_3);
  FUN_00462690(&ppuStack_138,param_3,uVar1);
  FUN_00462690();
  if (lVar3 == 0) {
    FUN_00462690(&ppuStack_138,"(null)",6);
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(&ppuStack_138,lVar3);
  }
  FUN_00462690(&ppuStack_138," vs. ",5);
  if (lVar4 == 0) {
    FUN_00462690(&ppuStack_138,"(null)",6);
  }
  else {
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(&ppuStack_138,lVar4);
  }
  pppuVar2 = &ppuStack_138;
  FUN_00554368(pppuVar2);
  appuStack_c8[0] = &PTR_FUN_009e7e18;
  ppuStack_138 = &PTR_FUN_009e7df0;
  ppuStack_130 = &PTR_FUN_009e5de0;
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  ppuStack_130 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_00998de8 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_128);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_138,&PTR_PTR_009e7e30);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_c8);
  return pppuVar2;
}



/* Entry: 0068e634; end: 0068e78b;  */

long * FUN_0068e634(long *param_1,undefined8 param_2,long param_3,int param_4,ulong param_5,
                   long param_6)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long alStack_58 [2];
  long lStack_48;
  
  func_0x00692d8c();
  lStack_48 = param_6;
  if (*(byte *)(param_3 + 1) < 0xc0) {
    func_0x00692d0c(*unaff_x21);
    func_0x00692c24();
  }
  else {
    func_0x00692a6c();
    if (((int)param_1 == param_4) || (func_0x00692c1c(), param_4 == 1 && (int)param_1 == 8)) {
      if (((int)param_5 < 0) ||
         (iVar2 = *(int *)(*(long *)(unaff_x19 + 0x38) + 0x80), param_1 = (long *)(long)iVar2,
         iVar2 == (int)param_5)) {
        if (param_6 != 0) {
          func_0x006930bc();
          func_0x00692f30();
          bVar1 = param_1 != (long *)0x0;
          param_1 = (long *)0x0;
          if (bVar1) {
            func_0x00693108();
            func_0x00693044();
            plVar3 = alStack_58;
            FUN_00776714();
            func_0x00693124();
            goto LAB_0068e788;
          }
        }
        if ((*(byte *)(unaff_x19 + 1) >> 3 & 1) == 0) {
          func_0x006930ac();
          if ((int)param_1 == 0) {
            func_0x00692a00();
            func_0x0068e7c8();
          }
          else {
            func_0x00692a00();
            FUN_0068e78c();
            func_0x006967ec();
          }
        }
        else {
          func_0x00692eac();
          param_1 = (long *)(unaff_x20 + extraout_x8);
          func_0x00534438(param_1);
        }
        return param_1;
      }
      FUN_00554520(param_1,param_5 & 0xffffffff,&UNK_00914051);
      func_0x00693108();
      func_0x00693044();
      FUN_00776714(alStack_58);
      plVar3 = alStack_58;
      func_0x00537a5c(plVar3,&UNK_00914073);
      goto LAB_0068e788;
    }
  }
  plVar3 = (long *)*unaff_x21;
  FUN_00777344();
LAB_0068e788:
  func_0x0069308c();
  func_0x006928e4();
  if ((int)plVar3 == 0) {
    func_0x00692a78();
    return (long *)(unaff_x19 + ((ulong)plVar3 & 0xffffffff));
  }
  func_0x00692a2c();
  func_0x006928fc();
  func_0x00692e60();
  if ((extraout_w8 >> 5 & 1) != 0) {
    plVar3 = (long *)*plVar3;
  }
  return plVar3;
}



/* Entry: 0068e78c; end: 0068e803;  */

ulong * FUN_0068e78c(ulong *param_1)

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



/* Entry: 0068e804; end: 0068e863;  */

long FUN_0068e804(long *param_1,long param_2,long param_3)

{
  int iVar1;
  ulong extraout_x8;
  long lVar2;
  
  if ((*(int *)(param_3 + 4) == 1) &&
     (lVar2 = *(long *)(param_3 + 0x30), (*(byte *)(lVar2 + 1) >> 1 & 1) != 0)) {
    FUN_0068ae9c(param_1,param_2,lVar2);
    if ((int)param_1 == 0) {
      lVar2 = 0;
    }
  }
  else {
    func_0x00693414();
    iVar1 = *(int *)(param_2 + (extraout_x8 & 0xffffffff));
    if (iVar1 != 0) {
      lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x98);
      FUN_0065609c(lVar2,*param_1,iVar1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 1) & 8) != 0)) {
        lVar2 = 0;
      }
      return lVar2;
    }
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 0068e864; end: 0068e90b;  */

ulong * FUN_0068e864(ulong *param_1,ulong *param_2,long *param_3,long param_4,undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  ulong *puVar8;
  ulong *puVar9;
  long lStack_200;
  undefined4 uStack_1f8;
  long lStack_1f0;
  ulong *puStack_1e8;
  undefined1 ****ppppuStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1c0;
  undefined8 uStack_e8;
  undefined1 ***pppuStack_b0;
  code *pcStack_a8;
  ulong *puStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  ulong *puStack_70;
  long *plStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  plVar4 = param_3;
  func_0x006595dc();
  if (((ulong)plVar4 & 1) != 0) {
    plVar4 = param_3;
    FUN_00656024();
    func_0x0069327c();
    if ((bool)in_ZR) {
      iVar2 = (int)plVar4[7] + 0x58;
    }
    else {
      iVar2 = 0;
    }
    FUN_00656c60();
    *(int *)(param_5 + 1) = iVar2;
    func_0x00689a70(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0068e8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return param_1;
  }
  param_1 = (ulong *)*param_1;
  func_0x0069332c();
  plVar4 = param_3;
  FUN_007772c4();
  uVar6 = SUB84(plVar4,0);
  pcStack_48 = FUN_0068e90c;
  puStack_70 = param_2;
  plStack_68 = param_3;
  lStack_60 = param_4;
  puStack_58 = param_5;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00692f48();
  if (((ulong)param_1 & 1) == 0) {
    param_1 = (ulong *)*param_2;
    func_0x0069332c();
    func_0x00692e58();
    func_0x00692fe8();
    func_0x00693388();
    pcStack_78 = FUN_0068e95c;
    puStack_a0 = param_2;
    plStack_98 = param_3;
    lStack_90 = param_4;
    puStack_88 = param_5;
    ppuStack_80 = &puStack_50;
    func_0x00692f48();
    if (((ulong)param_1 & 1) == 0) {
      plVar4 = (long *)*param_2;
      func_0x0069332c();
      func_0x00692e58();
      func_0x00692fe8();
      func_0x00693388();
      uVar1 = (int)plVar4[5] == -1;
      if ((bool)uVar1) {
        return (ulong *)0x0;
      }
      puVar8 = (ulong *)plVar4[10];
      lVar5 = *plVar4;
      pcStack_a8 = FUN_0068e9ac;
      pppuStack_b0 = &ppuStack_80;
      func_0x006743c8();
      uStack_e8 = extraout_x8;
      uVar7 = uVar6;
      if (*(int *)(lVar5 + 0x88) == 0) {
        puVar3 = (ulong *)0x0;
      }
      else {
        func_0x00675410();
        if (*puVar8 != 0) {
          uStack_1c0 = *puVar8;
          FUN_00567614();
          puVar3 = (ulong *)param_3[5];
          func_0x00675854();
          puVar8 = puVar3;
          func_0x00675f98();
          if (puVar3 != (ulong *)0x0) goto LAB_00655da4;
        }
        func_0x006757e0();
        lVar5 = *param_3;
        func_0x00675b2c();
        if (param_3[1] != 0) {
          func_0x00675ec0(param_3[5]);
          func_0x00675fb8(param_3[5]);
        }
        puVar8 = (ulong *)param_3[5];
        func_0x00675854();
        if ((puVar8 == (ulong *)0x0) &&
           ((puVar8 = (ulong *)param_3[3], puVar8 == (ulong *)0x0 ||
            (uVar7 = uVar6, FUN_00655ca0(), lVar5 = param_4, puVar8 == (ulong *)0x0)))) {
          func_0x006753c8();
          uVar7 = uVar6;
          FUN_00655e48();
          if ((int)puVar8 == 0) {
            puVar9 = (ulong *)0x0;
          }
          else {
            puVar8 = (ulong *)param_3[5];
            func_0x00675854();
            puVar9 = puVar8;
          }
          puVar3 = (ulong *)0x0;
          param_4 = 1;
        }
        else {
          param_4 = 0;
          puVar9 = puVar8;
          puVar3 = puVar8;
        }
        func_0x00675210();
        if ((int)param_4 != 0) {
          func_0x00675f90();
          uVar1 = (int)puVar8 == 0;
          puVar3 = puVar9;
          if ((bool)uVar1) {
            puVar3 = (ulong *)0x0;
          }
        }
        func_0x00675428();
      }
LAB_00655da4:
      func_0x00674120(uStack_e8);
      if ((bool)uVar1) {
        return puVar3;
      }
      ___stack_chk_fail();
      puVar9 = puVar8;
      func_0x00675428();
      func_0x00674bc8();
      plVar4 = &lStack_200;
      pcStack_1d8 = FUN_00655dec;
      puVar3 = puVar9 + 0x21;
      lStack_200 = lVar5;
      uStack_1f8 = uVar7;
      lStack_1f0 = param_4;
      puStack_1e8 = puVar8;
      ppppuStack_1e0 = &pppuStack_b0;
      FUN_00666b20();
      if ((ulong *)puVar9[0x22] == puVar3 &&
          (uint)plVar4 == (uint)*(byte *)((long)puVar9[0x22] + 10)) {
        puVar8 = (ulong *)0x0;
      }
      else {
        puVar8 = (ulong *)puVar3[((ulong)plVar4 & 0xff) * 3 + 4];
      }
      return puVar8;
    }
    func_0x0069323c();
    func_0x00692a5c();
    func_0x00689a70();
    *param_5 = 0;
    param_5[1] = 0;
    *(undefined4 *)(param_5 + 2) = 0;
  }
  else {
    func_0x0069323c();
    func_0x00692a5c();
    func_0x00689a70();
    FUN_00696774();
  }
  return param_1;
}



/* Entry: 0068e90c; end: 0068e95b;  */

long * FUN_0068e90c(long *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long *plVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong *unaff_x22;
  long lStack_1c0;
  undefined4 uStack_1b8;
  long lStack_1b0;
  long *plStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  long lStack_180;
  undefined8 uStack_a8;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x00692f48();
  if (((ulong)param_1 & 1) == 0) {
    param_1 = (long *)*unaff_x22;
    func_0x0069332c();
    func_0x00692e58();
    func_0x00692fe8();
    func_0x00693388();
    pcStack_38 = FUN_0068e95c;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00692f48();
    if (((ulong)param_1 & 1) == 0) {
      plVar2 = (long *)*unaff_x22;
      func_0x0069332c();
      func_0x00692e58();
      func_0x00692fe8();
      func_0x00693388();
      uVar1 = (int)plVar2[5] == -1;
      if ((bool)uVar1) {
        return (long *)0x0;
      }
      plVar6 = (long *)plVar2[10];
      lVar4 = *plVar2;
      pcStack_68 = FUN_0068e9ac;
      ppuStack_70 = &puStack_40;
      func_0x006743c8();
      uStack_a8 = extraout_x8;
      uVar5 = param_2;
      if (*(int *)(lVar4 + 0x88) == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        func_0x00675410();
        if (*plVar6 != 0) {
          lStack_180 = *plVar6;
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
      func_0x00674120(uStack_a8);
      if ((bool)uVar1) {
        return plVar2;
      }
      ___stack_chk_fail();
      plVar7 = plVar6;
      func_0x00675428();
      func_0x00674bc8();
      plVar3 = &lStack_1c0;
      pcStack_198 = FUN_00655dec;
      plVar2 = plVar7 + 0x21;
      lStack_1c0 = lVar4;
      uStack_1b8 = uVar5;
      lStack_1b0 = unaff_x20;
      plStack_1a8 = plVar6;
      pppuStack_1a0 = &ppuStack_70;
      FUN_00666b20();
      if ((long *)plVar7[0x22] == plVar2 && (uint)plVar3 == (uint)*(byte *)(plVar7[0x22] + 10)) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = (long *)plVar2[((ulong)plVar3 & 0xff) * 3 + 4];
      }
      return plVar2;
    }
    func_0x0069323c();
    func_0x00692a5c();
    func_0x00689a70();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined4 *)(unaff_x19 + 2) = 0;
  }
  else {
    func_0x0069323c();
    func_0x00692a5c();
    func_0x00689a70();
    FUN_00696774();
  }
  return param_1;
}



/* Entry: 0068e95c; end: 0068e9ab;  */

long * FUN_0068e95c(long *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 extraout_x8;
  long *plVar6;
  long *plVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lStack_190;
  undefined4 uStack_188;
  long lStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long lStack_150;
  undefined8 uStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  func_0x00692f48();
  if (((ulong)param_1 & 1) != 0) {
    func_0x0069323c();
    func_0x00692a5c();
    func_0x00689a70();
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined4 *)(unaff_x19 + 2) = 0;
    return param_1;
  }
  plVar2 = (long *)*unaff_x22;
  func_0x0069332c();
  func_0x00692e58();
  func_0x00692fe8();
  func_0x00693388();
  uVar1 = (int)plVar2[5] == -1;
  if ((bool)uVar1) {
    return (long *)0x0;
  }
  plVar6 = (long *)plVar2[10];
  lVar4 = *plVar2;
  pcStack_38 = FUN_0068e9ac;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x006743c8();
  uStack_78 = extraout_x8;
  uVar5 = param_2;
  if (*(int *)(lVar4 + 0x88) == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    func_0x00675410();
    if (*plVar6 != 0) {
      lStack_150 = *plVar6;
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
  func_0x00674120(uStack_78);
  if ((bool)uVar1) {
    return plVar2;
  }
  ___stack_chk_fail();
  plVar7 = plVar6;
  func_0x00675428();
  func_0x00674bc8();
  plVar3 = &lStack_190;
  pcStack_168 = FUN_00655dec;
  plVar2 = plVar7 + 0x21;
  lStack_190 = lVar4;
  uStack_188 = uVar5;
  lStack_180 = unaff_x20;
  plStack_178 = plVar6;
  ppuStack_170 = &puStack_40;
  FUN_00666b20();
  if ((long *)plVar7[0x22] == plVar2 && (uint)plVar3 == (uint)*(byte *)(plVar7[0x22] + 10)) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)plVar2[((ulong)plVar3 & 0xff) * 3 + 4];
  }
  return plVar2;
}


