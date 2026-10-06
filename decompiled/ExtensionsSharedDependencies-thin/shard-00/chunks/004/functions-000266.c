/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00534900; end: 0053497b;  */

void FUN_00534900(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iStack_24;
  
  piVar2 = *(int **)(param_1 + 0x10);
  iStack_24 = param_2;
  if ((long)*(short *)(param_1 + 10) < 0) {
    FUN_00537910(piVar2,&iStack_24);
  }
  else {
    piVar1 = piVar2 + (long)*(short *)(param_1 + 10) * 8;
    func_0x005378ec(piVar2,piVar1,&iStack_24);
    if ((piVar2 != piVar1) && (*piVar2 == iStack_24)) {
      if (piVar1 != piVar2 + 8) {
        _memmove();
      }
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    }
  }
  return;
}



/* Entry: 0053497c; end: 005349b7;  */

void FUN_0053497c(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  undefined1 unaff_w22;
  undefined8 uStack_28;
  
  func_0x0053a564();
  if (param_1 == (long *)0x0) {
    func_0x0053a214();
    func_0x0053a544();
    func_0x0053a244();
    func_0x0053a53c();
    func_0x0053abec();
    func_0x0053a5d0();
    param_1[2] = param_5;
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = unaff_w22;
      *(undefined1 *)((long)param_1 + 9) = 1;
      uStack_28 = *unaff_x21;
      puVar1 = &uStack_28;
      func_0x00538630();
      *param_1 = (long)puVar1;
    }
    func_0x0054d168();
    return;
  }
  func_0x0053a344();
  return;
}



/* Entry: 005349b8; end: 00534a1b;  */

void FUN_005349b8(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *unaff_x21;
  undefined1 unaff_w22;
  undefined8 in_stack_00000008;
  
  func_0x0053abec();
  func_0x0053a5d0();
  param_1[2] = param_5;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 1) = unaff_w22;
    *(undefined1 *)((long)param_1 + 9) = 1;
    in_stack_00000008 = *unaff_x21;
    puVar1 = &stack0x00000008;
    func_0x00538630();
    *param_1 = (long)puVar1;
  }
  func_0x0054d168();
  return;
}



/* Entry: 00534a1c; end: 00534aa7;  */

void FUN_00534a1c(long param_1)

{
  char cVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x005339b8();
  if (param_1 == 0) {
    func_0x0053a214();
    func_0x0053a544();
    func_0x0053a244();
    func_0x0053a53c();
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    if ((long)*(short *)(param_1 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        FUN_00533acc(lVar2 + 0x18);
        func_0x0053a9bc();
      }
    }
    else {
      for (lVar4 = (long)*(short *)(param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        FUN_00533acc(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    return;
  }
  func_0x0053a4c8(*(undefined1 *)(param_1 + 8));
  if ((bool)in_CY && !(bool)in_ZR) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00534a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_00810bea)[extraout_x8] * 4 + 0x534a54))();
  return;
}



/* Entry: 00534aa8; end: 00534b27;  */

void FUN_00534aa8(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if ((long)*(short *)(param_1 + 10) < 0) {
    lVar4 = puVar3[1];
    lVar2 = *(long *)*puVar3;
    cVar1 = *(char *)(lVar4 + 10);
    while (lVar2 != lVar4 || cVar1 != '\0') {
      FUN_00533acc(lVar2 + 0x18);
      func_0x0053a9bc();
    }
  }
  else {
    for (lVar4 = (long)*(short *)(param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
      FUN_00533acc(puVar3 + 1);
      puVar3 = puVar3 + 4;
    }
  }
  return;
}



/* Entry: 00534b28; end: 00534d73;  */

void FUN_00534b28(long param_1,long param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if (-1 < (long)*(short *)(param_1 + 10)) {
    lVar8 = (long)*(short *)(param_3 + 10);
    piVar11 = *(int **)(param_1 + 0x10);
    piVar1 = piVar11 + (long)*(short *)(param_1 + 10) * 8;
    piVar5 = *(int **)(param_3 + 0x10);
    if (-1 < lVar8) {
      lVar9 = 0;
      lVar7 = lVar8 << 5;
      piVar2 = piVar5 + lVar8 * 8;
      do {
        lVar8 = (long)piVar1 - (long)piVar11;
        lVar9 = -lVar9;
LAB_00534b80:
        if (piVar11 == piVar1 || piVar5 == piVar2) {
          lVar9 = (lVar8 >> 5) - lVar9;
          for (; lVar7 != 0; lVar7 = lVar7 + -0x20) {
            lVar9 = lVar9 + ((ulong)~(uint)*(byte *)((long)piVar5 + 0x12) & 1);
            piVar5 = piVar5 + 8;
          }
          goto LAB_00534c04;
        }
        if (*piVar11 < *piVar5) goto code_r0x00534b9c;
        if (*piVar11 == *piVar5) {
          piVar11 = piVar11 + 8;
          uVar10 = 1;
        }
        else {
          uVar10 = (ulong)~(uint)*(byte *)((long)piVar5 + 0x12) & 1;
        }
        lVar9 = uVar10 - lVar9;
        piVar5 = piVar5 + 8;
        lVar7 = lVar7 + -0x20;
      } while( true );
    }
    lVar9 = 0;
    lVar8 = *(long *)(piVar5 + 2);
    lStack_78 = **(long **)piVar5;
    bVar4 = *(byte *)(lVar8 + 10);
    uStack_70 = 0;
    while ((piVar5 = piVar1, piVar11 != piVar1 &&
           (piVar5 = piVar11, lStack_78 != lVar8 || (uint)uStack_70 != bVar4))) {
      lVar7 = lStack_78 + (uStack_70 & 0xff) * 0x20;
      iVar3 = *(int *)(lVar7 + 0x10);
      if (*piVar11 < iVar3) {
LAB_00534d1c:
        lVar9 = lVar9 + 1;
        piVar11 = piVar11 + 8;
      }
      else {
        if (*piVar11 == iVar3) {
          func_0x0053a6e0();
          goto LAB_00534d1c;
        }
        lVar9 = lVar9 + ((ulong)~(uint)*(byte *)(lVar7 + 0x22) & 1);
        func_0x0053a6e0();
      }
    }
    lVar9 = lVar9 + ((long)piVar1 - (long)piVar5 >> 5);
    while (lStack_78 != lVar8 || (uint)uStack_70 != bVar4) {
      lVar9 = lVar9 + ((ulong)~(uint)*(byte *)(lStack_78 + (uStack_70 & 0xff) * 0x20 + 0x22) & 1);
      func_0x0053a6e0();
    }
LAB_00534c04:
    FUN_00534d74(param_1,lVar9);
  }
  puVar6 = *(undefined8 **)(param_3 + 0x10);
  lStack_78 = param_2;
  uStack_70 = param_1;
  lStack_68 = param_3;
  if ((long)*(short *)(param_3 + 10) < 0) {
    lVar8 = puVar6[1];
    lStack_60 = *(long *)*puVar6;
    bVar4 = *(byte *)(lVar8 + 10);
    uStack_58 = 0;
    uStack_58._0_4_ = 0;
    while (lStack_60 != lVar8 || (uint)uStack_58 != bVar4) {
      lVar9 = lStack_60 + (ulong)((uint)uStack_58 & 0xff) * 0x20;
      func_0x005386d4(&lStack_78,*(undefined4 *)(lVar9 + 0x10),lVar9 + 0x18);
      func_0x005387bc(&lStack_60);
    }
  }
  else {
    for (lVar8 = (long)*(short *)(param_3 + 10) << 5; lVar8 != 0; lVar8 = lVar8 + -0x20) {
      func_0x005386d4(&lStack_78,*(undefined4 *)puVar6,puVar6 + 1);
      puVar6 = puVar6 + 4;
    }
  }
  return;
code_r0x00534b9c:
  piVar11 = piVar11 + 8;
  lVar8 = lVar8 + -0x20;
  lVar9 = lVar9 + -1;
  goto LAB_00534b80;
}



/* Entry: 00534d74; end: 0053501f;  */

void FUN_00534d74(undefined **param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined **ppuVar14;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_94;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined **ppuStack_70;
  ulong uStack_68;
  
  uVar5 = *(ushort *)((long)param_1 + 10);
  if ((-1 < (short)uVar5) && (uVar20 = (ulong)*(ushort *)(param_1 + 1), uVar20 < param_2)) {
    do {
      uVar6 = (int)uVar20 << 2;
      if ((uVar20 & 0xffff) == 0) {
        uVar6 = 1;
      }
      uVar20 = (ulong)uVar6;
      uVar15 = uVar20 & 0xffff;
    } while (uVar15 < param_2);
    piVar18 = (int *)param_1[2];
    uVar20 = (ulong)uVar5 << 5;
    ppuVar16 = (undefined **)*param_1;
    if ((uVar6 & 0xffff) < 0x101) {
      ppuStack_90 = (undefined **)0x7ffffffffffffff;
      puVar11 = &uStack_b8;
      pppuVar13 = &ppuStack_90;
      uStack_b8 = uVar15;
      func_0x0048b1cc(puVar11,pppuVar13,
                      "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
      if (puVar11 != (undefined8 *)0x0) {
        func_0x0053ac34();
        if (param_5 < 0) {
          param_4 = (undefined8 *)*param_4;
        }
        func_0x0053a3a4();
        func_0x0053a4a0();
        func_0x0053a67c();
        uVar8 = *(char *)((long)param_4 + 9) != '\0';
        uVar9 = *(char *)((long)param_4 + 9) == '\x01';
        if ((bool)uVar9) {
          uVar17 = param_4[2];
          func_0x0053ab24();
          puVar11[2] = uVar17;
          bVar4 = *(byte *)(param_4 + 1);
          if (((ulong)pppuVar13 & 1) != 0) {
            *(byte *)(puVar11 + 1) = bVar4;
            *(undefined1 *)((long)puVar11 + 0xb) = *(undefined1 *)((long)param_4 + 0xb);
            *(undefined1 *)((long)puVar11 + 9) = 1;
          }
          func_0x0053a7c4(*(undefined4 *)(&UNK_00810e40 + (ulong)bVar4 * 4));
          if (!(bool)uVar8 || (bool)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x005350a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_00810bfe)[extraout_x8] * 4 + 0x5350ac))();
            return;
          }
        }
        else if (((*(byte *)((long)param_4 + 10) & 1) == 0) &&
                (func_0x0053a7c4(*(undefined4 *)(&UNK_00810e40 + (ulong)*(byte *)(param_4 + 1) * 4))
                , !(bool)uVar8 || (bool)uVar9)) {
                    /* WARNING: Could not recover jumptable at 0x005350ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_00810bf4)[extraout_x8_00] * 4 + 0x5350f0))();
          return;
        }
        return;
      }
      ppuVar14 = (undefined **)(uVar15 << 5);
      if (ppuVar16 == (undefined **)0x0) {
        __Znam();
      }
      else {
        ppuVar12 = ppuVar16;
        func_0x0048b21c(ppuVar16,ppuVar14,8);
        ppuVar14 = ppuVar12;
      }
      if (uVar5 != 0) {
        _memmove(ppuVar14,piVar18,uVar20);
      }
    }
    else {
      if (ppuVar16 == (undefined **)0x0) {
        ppuVar14 = param_1;
        func_0x0053ab58();
      }
      else {
        ppuVar14 = ppuVar16;
        FUN_00550e54(ppuVar16,0x18,8,FUN_005399ec);
      }
      *ppuVar14 = (undefined *)&PTR_LOOP_00a01140;
      ppuVar14[1] = (undefined *)&PTR_LOOP_00a01140;
      ppuVar14[2] = (undefined *)0x0;
      piVar1 = piVar18;
      uVar15 = 0;
      ppuVar12 = &PTR_LOOP_00a01140;
      uVar7 = (ulong)uVar5;
      while (uVar7 != 0) {
        uVar19 = uVar15 & 0xffffffff;
        iVar2 = *piVar1;
        uVar7 = uStack_b8 >> 0x20;
        uStack_b8 = CONCAT44((int)uVar7,iVar2);
        uStack_a8 = *(undefined8 *)(piVar1 + 4);
        uStack_b0 = *(undefined8 *)(piVar1 + 2);
        uStack_a0 = *(undefined8 *)(piVar1 + 6);
        iStack_94 = iVar2;
        ppuStack_70 = ppuVar12;
        uStack_68 = uVar19;
        if (ppuVar14[2] == (undefined *)0x0) {
LAB_00534f24:
          FUN_00538f14(&ppuStack_90,ppuVar14,&iStack_94,&uStack_b8);
          ppuVar12 = ppuStack_90;
          uVar19 = uStack_88;
        }
        else {
          if (((undefined **)ppuVar14[1] == ppuVar12 &&
               (uint)uVar15 == (uint)*(byte *)((long)ppuVar14[1] + 10)) ||
             (iVar3 = *(int *)((long)ppuVar12 + ((long)(uVar15 << 0x20) >> 0x1b) + 0x10),
             iVar2 < iVar3)) {
            if ((*(undefined ***)*ppuVar14 != ppuVar12 || (uint)uVar15 != 0) &&
               (ppuStack_90 = ppuVar12, uStack_88 = uVar19,
               FUN_005399f0(&ppuStack_90,0xffffffffffffffff),
               iVar2 <= *(int *)((long)ppuStack_90 + ((long)(uStack_88 << 0x20) >> 0x1b) + 0x10)))
            goto LAB_00534f24;
          }
          else {
            if (iVar2 <= iVar3) goto LAB_00534f38;
            func_0x005387bc(&ppuStack_70);
            ppuVar12 = ppuStack_70;
            uVar19 = uStack_68;
            if ((ppuStack_70 != (undefined **)ppuVar14[1] ||
                 (uint)uStack_68 != *(byte *)((long)ppuVar14[1] + 10)) &&
               (*(int *)(ppuStack_70 + (long)(int)(uint)uStack_68 * 4 + 2) <= iVar2))
            goto LAB_00534f24;
          }
          ppuVar10 = ppuVar14;
          FUN_00538fe8(ppuVar14,ppuVar12,uVar19,&uStack_b8);
          uStack_88 = CONCAT44(uStack_88._4_4_,(int)ppuVar12);
          ppuVar12 = ppuVar10;
          uVar19 = uStack_88;
        }
LAB_00534f38:
        uStack_88 = uVar19;
        ppuStack_90 = ppuVar12;
        piVar1 = piVar1 + 8;
        uVar20 = uVar20 - 0x20;
        uVar15 = uStack_88;
        ppuVar12 = ppuStack_90;
        uVar7 = uVar20;
      }
      *(undefined2 *)((long)param_1 + 10) = 0xffff;
    }
    if (ppuVar16 == (undefined **)0x0) {
      __ZdaPv(piVar18);
    }
    *(short *)(param_1 + 1) = (short)uVar6;
    param_1[2] = (undefined *)ppuVar14;
  }
  return;
}



/* Entry: 00535020; end: 00535463;  */

void FUN_00535020(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar4;
  
  uVar2 = *(char *)(param_4 + 9) != '\0';
  uVar3 = *(char *)(param_4 + 9) == '\x01';
  if ((bool)uVar3) {
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    func_0x0053ab24();
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    bVar1 = *(byte *)(param_4 + 8);
    if ((param_2 & 1) != 0) {
      *(byte *)(param_1 + 8) = bVar1;
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_4 + 0xb);
      *(undefined1 *)(param_1 + 9) = 1;
    }
    func_0x0053a7c4(*(undefined4 *)(&UNK_00810e40 + (ulong)bVar1 * 4));
    if (!(bool)uVar2 || (bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x005350a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00810bfe)[extraout_x8] * 4 + 0x5350ac))();
      return;
    }
  }
  else if (((*(byte *)(param_4 + 10) & 1) == 0) &&
          (func_0x0053a7c4(*(undefined4 *)(&UNK_00810e40 + (ulong)*(byte *)(param_4 + 8) * 4)),
          !(bool)uVar2 || (bool)uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x005350ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00810bf4)[extraout_x8_00] * 4 + 0x5350f0))();
    return;
  }
  return;
}



/* Entry: 00535464; end: 0053553b;  */

undefined1  [16] FUN_00535464(undefined8 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  long extraout_x8;
  undefined4 *puVar4;
  long extraout_x9;
  undefined4 *puVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    func_0x0053a7a4();
    func_0x005386f0();
    func_0x0053a790();
    puVar3 = (undefined4 *)(extraout_x8 + extraout_x9 * 4);
    puVar1 = *(undefined4 **)(unaff_x20 + 8);
    puVar4 = puVar1;
    puVar5 = puVar3;
    while (0 < iVar2) {
      *puVar5 = *puVar4;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + -1;
    }
    auVar7._8_8_ = puVar3;
    auVar7._0_8_ = puVar1;
    return auVar7;
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 0053553c; end: 00535563;  */

void FUN_0053553c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00534670();
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



/* Entry: 00535564; end: 005355ab;  */

undefined8 FUN_00535564(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_19 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_18 = param_2;
  FUN_00535adc(param_1,2,param_3,&uStack_18,&uStack_50,&uStack_19);
  if ((int)param_1 == 0) {
    uStack_40 = 0;
  }
  return uStack_40;
}



/* Entry: 005355ac; end: 005355ef;  */

void FUN_005355ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar1 = *(undefined2 *)(param_1 + 1);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)(param_2 + 1) = uVar1;
  uVar1 = *(undefined2 *)((long)param_1 + 10);
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 10);
  *(undefined2 *)((long)param_2 + 10) = uVar1;
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar2;
  return;
}



/* Entry: 005355f0; end: 0053572b;  */

void FUN_005355f0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  long extraout_x8;
  
  bVar1 = *(char *)((long)param_1 + 9) != '\0';
  bVar2 = *(char *)((long)param_1 + 9) == '\x01';
  if (bVar2) {
    func_0x0053a7c4();
    if (!bVar1 || bVar2) {
                    /* WARNING: Could not recover jumptable at 0x00535634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_00810c08)[extraout_x8] * 4 + 0x535638))();
      return;
    }
  }
  else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
    if ((long *)*param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00535684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_1 + 8))();
      return;
    }
  }
  else if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(param_1 + 1) * 4) == 9) {
    if (*param_1 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0053572c; end: 0053585f;  */

void FUN_0053572c(long param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  int iStack_38;
  int iStack_34;
  
  iStack_38 = param_2;
  if ((long)*(short *)(param_1 + 10) < 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    aiStack_70[0] = param_2;
    iStack_34 = param_2;
    FUN_00538f14(auStack_50,*(undefined8 *)(param_1 + 0x10),&iStack_34,aiStack_70);
    return;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  piVar1 = piVar4 + (long)*(short *)(param_1 + 10) * 8;
  func_0x005378ec(piVar4,piVar1,&iStack_38);
  iVar3 = iStack_38;
  if (piVar4 == piVar1) {
    uVar2 = *(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar2) goto LAB_005357e8;
  }
  else {
    if (*piVar4 == iStack_38) {
      return;
    }
    uVar2 = *(ushort *)(param_1 + 10);
    if (*(ushort *)(param_1 + 8) <= uVar2) {
LAB_005357e8:
      FUN_00534d74(param_1,(ulong)uVar2 + 1);
      FUN_0053572c(param_1,iStack_38);
      return;
    }
    _memmove(piVar4 + 8,piVar4,(long)piVar1 - (long)piVar4);
    uVar2 = *(ushort *)(param_1 + 10);
  }
  *(ushort *)(param_1 + 10) = uVar2 + 1;
  *piVar4 = iVar3;
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  return;
}



/* Entry: 00535860; end: 00535927;  */

bool FUN_00535860(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  
  func_0x0053abec();
  func_0x0053a61c();
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (*(short *)(param_1 + 10) < 0) {
    lVar7 = *(long *)*puVar6;
    lVar8 = puVar6[1];
    cVar1 = *(char *)(lVar8 + 10);
    while (bVar3 = cVar1 == '\0', bVar2 = lVar7 == lVar8 && bVar3, lVar7 != lVar8 || !bVar3) {
      iVar4 = (int)lVar7 + 0x18;
      func_0x0053a8fc();
      if (iVar4 == 0) {
        return bVar2;
      }
      func_0x0053a9bc();
    }
  }
  else {
    do {
      if (puVar6 == (undefined8 *)
                    (*(long *)(unaff_x20 + 0x10) + (ulong)*(ushort *)(unaff_x20 + 10) * 0x20)) {
        return true;
      }
      puVar5 = puVar6 + 1;
      func_0x0053a8fc();
      bVar2 = false;
      puVar6 = puVar6 + 4;
    } while (((ulong)puVar5 & 1) != 0);
  }
  return bVar2;
}



/* Entry: 00535928; end: 00535a13;  */

long * FUN_00535928(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  
  if (*(int *)(&UNK_00810e40 + (ulong)*(byte *)(param_1 + 1) * 4) == 10) {
    if (*(char *)((long)param_1 + 9) == '\x01') {
      lVar5 = -1;
      lVar2 = 8;
      do {
        puVar3 = (ulong *)*param_1;
        lVar5 = lVar5 + 1;
        plVar4 = (long *)(ulong)((int)puVar3[1] <= lVar5);
        if ((int)puVar3[1] <= lVar5) {
          return plVar4;
        }
        if ((*puVar3 & 1) != 0) {
          puVar3 = (ulong *)(*puVar3 + lVar2 + -1);
        }
        uVar1 = *puVar3;
        FUN_00549a28();
        lVar2 = lVar2 + 8;
      } while ((uVar1 & 1) != 0);
      return plVar4;
    }
    if ((*(byte *)((long)param_1 + 10) & 1) == 0) {
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) != 0) {
        FUN_00535564(param_2,param_3,param_4);
        param_1 = (long *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00535a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x50))(param_1,param_2,param_5);
        return param_1;
      }
      param_1 = (long *)*param_1;
      plVar4 = param_1;
      func_0x0054ad90();
      if ((code *)plVar4[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00549a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar4[2])(param_1);
        return param_1;
      }
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
  }
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 00535a14; end: 00535adb;  */

void FUN_00535a14(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar1 = param_1;
  uStack_48 = param_4;
  FUN_00535adc(param_1,(uint)param_2 & 7,param_2 >> 3,&uStack_48,&uStack_80,&uStack_49);
  if ((uVar1 & 1) == 0) {
    if ((*param_5 & 1) == 0) {
      FUN_00538108(param_5);
    }
    else {
      param_5 = (ulong *)((*param_5 & 0xfffffffffffffffe) + 8);
    }
    FUN_0054bac4(param_2,param_5,param_3,param_6);
  }
  else {
    FUN_00535b58(param_1,param_2 >> 3,uStack_49,&uStack_80,param_5,param_3,param_6);
  }
  return;
}



/* Entry: 00535adc; end: 00535b57;  */

void FUN_00535adc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined1 *param_6)

{
  int iVar1;
  
  FUN_005332ec(param_4,param_3,param_5);
  if ((int)param_4 != 0) {
    iVar1 = *(int *)(&UNK_00810e8c + (ulong)*(byte *)(param_5 + 0xc) * 4);
    *param_6 = 0;
    if (((param_2 == 2) && ((*(byte *)(param_5 + 0xd) & 1) != 0)) && (iVar1 - 5U < 0xfffffffd)) {
      *param_6 = 1;
    }
  }
  return;
}



/* Entry: 00535b58; end: 0053648f;  */

/* WARNING: Type propagation algorithm not settling */

qword * FUN_00535b58(qword *param_1,qword *param_2,int param_3,qword *param_4,qword *param_5,
                    qword *param_6,qword *param_7)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  qword **ppqVar7;
  qword qVar8;
  qword *pqVar9;
  long lVar10;
  qword *pqVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  qword *pqVar15;
  byte *pbVar16;
  qword *pqVar17;
  qword *pqVar18;
  char *pcVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  qword *pqVar22;
  undefined4 uVar23;
  qword *pqVar24;
  qword *pqVar25;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  undefined8 *puVar26;
  qword *extraout_x8;
  qword *extraout_x8_00;
  qword *extraout_x8_01;
  qword *extraout_x8_02;
  qword *extraout_x8_03;
  qword *extraout_x8_04;
  qword *extraout_x8_05;
  qword *extraout_x8_06;
  qword *extraout_x8_07;
  qword *extraout_x8_08;
  qword *extraout_x8_09;
  qword *extraout_x8_10;
  undefined8 extraout_x8_11;
  long *plVar27;
  int iVar28;
  qword *pqVar29;
  int iVar30;
  int iVar31;
  bool bVar32;
  int iVar33;
  long lVar34;
  qword *pqVar35;
  undefined8 ******ppppppuVar36;
  undefined8 uVar37;
  undefined8 unaff_x30;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined8 uStack_258;
  qword *pqStack_250;
  qword *pqStack_248;
  qword *pqStack_240;
  qword *pqStack_238;
  qword *pqStack_230;
  undefined8 *******pppppppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  qword qStack_200;
  char cStack_1f3;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  qword *pqStack_1e0;
  undefined8 uStack_1d8;
  uint auStack_1c8 [3];
  uint uStack_1bc;
  undefined8 *******pppppppuStack_1b8;
  qword *pqStack_1b0;
  undefined8 uStack_1a8;
  qword *pqStack_1a0;
  qword *pqStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  int iStack_148;
  undefined8 uStack_128;
  ulong uStack_f8;
  undefined8 uStack_e8;
  qword *pqStack_e0;
  qword *pqStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  qword *pqStack_c0;
  qword *pqStack_b8;
  undefined1 auStack_b0 [8];
  qword *pqStack_a8;
  qword *pqStack_a0;
  long lStack_98;
  qword qStack_90;
  undefined2 uStack_88;
  undefined4 uStack_7c;
  qword *pqStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  ppqVar7 = &pqStack_c0;
  pqVar15 = (qword *)&pqStack_c0;
  pqVar17 = (qword *)&pqStack_c0;
  pqVar22 = param_2;
  pqVar24 = param_4;
  pqVar25 = param_5;
  pqVar29 = param_6;
  func_0x0053a9e0();
  iVar28 = *(byte *)((long)pqVar24 + 0xc) - 1;
  cVar4 = SBORROW4(iVar28,0x11);
  cVar5 = (int)(*(byte *)((long)pqVar24 + 0xc) - 0x12) < 0;
  uVar6 = iVar28 == 0x11;
  pqStack_e0 = param_2;
  pqStack_d8 = param_6;
  pqStack_c0 = pqVar29;
  if (param_3 == 0) {
    switch(iVar28) {
    case 0:
      func_0x0053a7e8(*param_6);
      if ((bool)uVar6) {
        func_0x0053a268();
        FUN_00534268();
        param_6 = param_6 + 1;
      }
      else {
        pqVar24 = (qword *)param_4[4];
        func_0x0053a530();
        FUN_005341e0();
        param_6 = param_6 + 1;
      }
      break;
    case 1:
      func_0x0053a7e8((int)*param_6);
      if ((bool)uVar6) {
        func_0x0053a268();
        FUN_005340f8();
        param_6 = (qword *)((long)param_6 + 4);
      }
      else {
        pqVar24 = (qword *)param_4[4];
        func_0x0053a530();
        FUN_00534070();
        param_6 = (qword *)((long)param_6 + 4);
      }
      break;
    case 2:
      func_0x0053a370();
      param_6 = param_1;
      if (param_1 != (qword *)0x0) {
        func_0x0053a7e8();
        if ((bool)uVar6) {
          pqVar24 = (qword *)(ulong)*(byte *)((long)param_4 + 0xe);
          pqVar25 = pqStack_b8;
          func_0x0053a530();
          FUN_00533d84();
        }
        else {
          pqVar25 = (qword *)param_4[4];
          pqVar24 = pqStack_b8;
          func_0x0053a530();
          FUN_00533d14();
        }
      }
      break;
    case 3:
      func_0x0053a370();
      param_6 = param_1;
      if (param_1 != (qword *)0x0) {
        func_0x0053a7e8();
        if ((bool)uVar6) {
          pqVar24 = (qword *)(ulong)*(byte *)((long)param_4 + 0xe);
          pqVar25 = pqStack_b8;
          func_0x0053a530();
          FUN_00533fbc();
        }
        else {
          pqVar25 = (qword *)param_4[4];
          pqVar24 = pqStack_b8;
          func_0x0053a530();
          FUN_00533f4c();
        }
      }
      break;
    case 4:
      func_0x0053a370();
      param_6 = param_1;
      if (param_1 != (qword *)0x0) {
        func_0x0053a7e8();
        if ((bool)uVar6) {
          pqVar24 = (qword *)(ulong)*(byte *)((long)param_4 + 0xe);
          pqVar25 = (qword *)((ulong)pqStack_b8 & 0xffffffff);
          func_0x0053a530();
          FUN_00533c68();
        }
        else {
          pqVar24 = (qword *)((ulong)pqStack_b8 & 0xffffffff);
          pqVar25 = (qword *)param_4[4];
          func_0x0053a530();
          FUN_00533bd8();
        }
      }
      break;
    case 5:
      func_0x0053a9b0(*param_6);
      if ((bool)uVar6) {
        func_0x0053a8e0();
        func_0x0053a530();
        pqVar25 = extraout_x8_03;
        FUN_00533fbc();
        param_6 = param_6 + 1;
      }
      else {
        func_0x0053a2ec();
        pqVar24 = extraout_x8_07;
        FUN_00533f4c();
        param_6 = param_6 + 1;
      }
      break;
    case 6:
      func_0x0053a9b0((int)*param_6);
      if ((bool)uVar6) {
        func_0x0053a8e0();
        func_0x0053a530();
        pqVar25 = extraout_x8_04;
        FUN_00533ea0();
        param_6 = (qword *)((long)param_6 + 4);
      }
      else {
        func_0x0053a2ec();
        pqVar24 = extraout_x8_08;
        FUN_00533e30();
        param_6 = (qword *)((long)param_6 + 4);
      }
      break;
    case 7:
      func_0x0053a370();
      param_6 = param_1;
      if (param_1 != (qword *)0x0) {
        func_0x0053a7e8();
        if ((bool)uVar6) {
          pqVar24 = (qword *)(ulong)*(byte *)((long)param_4 + 0xe);
          uVar6 = pqStack_b8 == (qword *)0x0;
          pqVar25 = (qword *)(ulong)!(bool)uVar6;
          func_0x0053a530();
          FUN_005343b8();
        }
        else {
          uVar6 = pqStack_b8 == (qword *)0x0;
          pqVar24 = (qword *)(ulong)!(bool)uVar6;
          pqVar25 = (qword *)param_4[4];
          func_0x0053a530();
          FUN_00534348();
        }
      }
      break;
    case 8:
    case 0xb:
      pqVar24 = (qword *)param_4[4];
      func_0x0053a530(*(byte *)((long)param_4 + 0xd));
      uVar6 = extraout_w8 == 1;
      if ((bool)uVar6) {
        FUN_00534704();
      }
      else {
        FUN_00534670();
      }
      FUN_00533034(&pqStack_c0);
      if (pqStack_c0 == (qword *)0x0) goto code_r0x005363dc;
      param_6 = param_7;
      FUN_00533074(param_7,pqStack_c0,ppqVar7);
      pqVar24 = param_1;
      break;
    case 9:
      pqVar24 = (qword *)param_4[2];
      func_0x0053a2ec(*(byte *)((long)param_4 + 0xd));
      if (extraout_w8_01 == 1) {
        FUN_005349b8();
      }
      else {
        FUN_005347ac();
      }
      iVar28 = *(int *)(param_7 + 0xb);
      iVar31 = iVar28 + -1;
      uVar6 = iVar31 == 0;
      *(int *)(param_7 + 0xb) = iVar31;
      if (0 < iVar28) {
        uVar3 = (int)param_2 << 3 | 3;
        param_2 = (qword *)(ulong)uVar3;
        *(int *)((long)param_7 + 0x5c) = *(int *)((long)param_7 + 0x5c) + 1;
        func_0x0053a7b8();
        FUN_00549a60();
        param_7[0xb] = CONCAT44((int)(param_7[0xb] >> 0x20) + -1,(int)param_7[0xb] + 1);
        uVar1 = *(uint *)(param_7 + 10);
        pbVar16 = (byte *)(param_7 + 10);
        pbVar16[0] = 0;
        pbVar16[1] = 0;
        pbVar16[2] = 0;
        pbVar16[3] = 0;
        uVar6 = uVar1 == uVar3;
        goto code_r0x00536388;
      }
code_r0x005363dc:
      param_6 = (qword *)0x0;
      break;
    case 10:
      pqVar24 = (qword *)param_4[2];
      func_0x0053a2ec(*(byte *)((long)param_4 + 0xd));
      uVar6 = extraout_w8_00 == 1;
      if ((bool)uVar6) {
        FUN_005349b8();
      }
      else {
        FUN_005347ac();
      }
      func_0x0053a22c();
      if ((bool)uVar6) {
        func_0x0053aba8();
        pqVar22 = param_7;
        func_0x0054b68c();
        if (pqVar22 == (qword *)0x0) {
          return (qword *)0x0;
        }
        FUN_00549a60(param_1,pqVar22,param_7);
        *(int *)(param_7 + 0xb) = *(int *)(param_7 + 0xb) + 1;
        uStack_e8 = (qword *)CONCAT44(uStack_e8._4_4_,uStack_e8._4_4_);
        FUN_005439fc(param_7,&uStack_e8);
        if ((int)param_7 != 0) {
          return param_1;
        }
        return (qword *)0x0;
      }
      goto LAB_00536434;
    case 0xc:
      func_0x0053a370();
      param_6 = param_1;
      if (param_1 != (qword *)0x0) {
        func_0x0053a7e8();
        if ((bool)uVar6) {
          pqVar24 = (qword *)(ulong)*(byte *)((long)param_4 + 0xe);
          pqVar25 = (qword *)((ulong)pqStack_b8 & 0xffffffff);
          func_0x0053a530();
          FUN_00533ea0();
        }
        else {
          pqVar24 = (qword *)((ulong)pqStack_b8 & 0xffffffff);
          pqVar25 = (qword *)param_4[4];
          func_0x0053a530();
          FUN_00533e30();
        }
      }
      break;
    case 0xd:
      func_0x0053a370();
      pqVar22 = pqStack_b8;
      param_6 = param_1;
      if (param_1 != (qword *)0x0) {
        qVar8 = param_4[3];
        (*(code *)param_4[2])(qVar8,pqStack_b8);
        param_7 = pqVar22;
        if ((qVar8 & 1) == 0) {
          if ((*param_5 & 1) == 0) {
            FUN_00538108(param_5);
          }
          else {
            param_5 = (qword *)((*param_5 & 0xfffffffffffffffe) + 8);
          }
          func_0x0054b764(param_2,(long)(int)pqVar22,param_5);
        }
        else {
          func_0x0053a7e8();
          if ((bool)uVar6) {
            func_0x0053a8e0();
            func_0x0053a530();
            pqVar25 = pqVar22;
            FUN_005345f8();
          }
          else {
            pqVar25 = (qword *)param_4[4];
            func_0x0053a530();
            pqVar24 = pqVar22;
            FUN_00534588();
          }
        }
      }
      break;
    case 0xe:
      func_0x0053a9b0((int)*param_6);
      if ((bool)uVar6) {
        func_0x0053a8e0();
        func_0x0053a530();
        pqVar25 = extraout_x8_00;
        FUN_00533c68();
        param_6 = (qword *)((long)param_6 + 4);
      }
      else {
        func_0x0053a2ec();
        pqVar24 = extraout_x8_05;
        FUN_00533bd8();
        param_6 = (qword *)((long)param_6 + 4);
      }
      break;
    case 0xf:
      func_0x0053a9b0(*param_6);
      if ((bool)uVar6) {
        func_0x0053a8e0();
        func_0x0053a530();
        pqVar25 = extraout_x8_01;
        FUN_00533d84();
        param_6 = param_6 + 1;
      }
      else {
        func_0x0053a2ec();
        pqVar24 = extraout_x8_06;
        FUN_00533d14();
        param_6 = param_6 + 1;
      }
      break;
    case 0x10:
      func_0x0053a370();
      param_6 = param_1;
      if (param_1 != (qword *)0x0) {
        func_0x0053a9b0(-((uint)pqStack_b8 & 1) ^ (uint)pqStack_b8 >> 1);
        if ((bool)uVar6) {
          func_0x0053a8e0();
          func_0x0053a530();
          pqVar25 = extraout_x8;
          FUN_00533c68();
        }
        else {
          pqVar25 = (qword *)param_4[4];
          func_0x0053a530();
          pqVar24 = extraout_x8_09;
          FUN_00533bd8();
        }
      }
      break;
    case 0x11:
      func_0x0053a370();
      param_6 = param_1;
      if (param_1 != (qword *)0x0) {
        func_0x0053a9b0(-((ulong)pqStack_b8 & 1) ^ (ulong)pqStack_b8 >> 1);
        if ((bool)uVar6) {
          func_0x0053a8e0();
          func_0x0053a530();
          pqVar25 = extraout_x8_02;
          FUN_00533d84();
        }
        else {
          pqVar25 = (qword *)param_4[4];
          func_0x0053a530();
          pqVar24 = extraout_x8_10;
          FUN_00533d14();
        }
      }
    }
    goto LAB_005363e0;
  }
  pqVar9 = pqVar24;
  pqVar18 = pqVar25;
  pqVar29 = param_6;
  uStack_e8 = param_7;
  switch(iVar28) {
  case 0:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a7b8();
      func_0x0053aba8();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_0054c670();
      return param_1;
    }
    break;
  case 1:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a7b8();
      func_0x0053aba8();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_0054c568();
      return param_1;
    }
    break;
  case 2:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a518();
      func_0x0053aba8();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (qword *)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_0054bf28();
          pqStack_a8 = param_1;
          if (param_1 == (qword *)0x0) goto LAB_0054bf00;
          func_0x0054cb64();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x0054ca84();
            if (param_1 != (qword *)0x0) goto LAB_0054bf1c;
            func_0x0054cb7c();
            FUN_0054bf28();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x0054cd1c();
            }
            else {
LAB_0054befc:
              param_1 = (qword *)0x0;
            }
            goto LAB_0054bf00;
          }
          func_0x0054cce8();
          if (cVar5 != cVar4) goto LAB_0054befc;
          func_0x0054ccb0();
          if (param_1 == (qword *)0x0) goto LAB_0054bf00;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054bf28();
        func_0x0054cd28();
      }
LAB_0054bf00:
      func_0x0054cb2c();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054bf1c:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054bf28;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while ((param_6 < param_7 && (func_0x0054cbf0(), param_6 = param_1, param_1 != (qword *)0x0)))
      {
        param_1 = param_2;
        FUN_00533dd0(param_2,uStack_f8);
      }
      return param_6;
    }
    break;
  case 3:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a518();
      func_0x0053aba8();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (qword *)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_0054c01c();
          pqStack_a8 = param_1;
          if (param_1 == (qword *)0x0) goto LAB_0054bff4;
          func_0x0054cb64();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x0054ca84();
            if (param_1 != (qword *)0x0) goto LAB_0054c010;
            func_0x0054cb7c();
            FUN_0054c01c();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x0054cd1c();
            }
            else {
LAB_0054bff0:
              param_1 = (qword *)0x0;
            }
            goto LAB_0054bff4;
          }
          func_0x0054cce8();
          if (cVar5 != cVar4) goto LAB_0054bff0;
          func_0x0054ccb0();
          if (param_1 == (qword *)0x0) goto LAB_0054bff4;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054c01c();
        func_0x0054cd28();
      }
LAB_0054bff4:
      func_0x0054cb2c();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054c010:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054c01c;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pqVar22 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pqVar22 == (qword *)0x0) break;
        param_1 = param_2;
        FUN_00534008(param_2,uStack_f8);
        param_6 = pqVar22;
      }
      return (qword *)0x0;
    }
    break;
  case 4:
    func_0x0053a268();
    pqVar29 = (qword *)((long)&MACH_HEADER.cputype + 1);
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a518();
      func_0x0053aba8();
      func_0x0054cdd0();
      pqStack_78 = *(qword **)PTR____stack_chk_guard_00999f88;
      pqVar24 = (qword *)&pqStack_a8;
      pqStack_a8 = pqVar22;
      FUN_00533034();
      func_0x0054cd00();
      pqVar25 = pqVar24;
      if (pqVar24 != (qword *)0x0) {
        while( true ) {
          pqVar22 = (qword *)param_1[1];
          iVar31 = (int)pqVar22 - (int)pqVar24;
          iVar28 = (int)param_7;
          uVar6 = iVar28 == iVar31;
          if (iVar28 <= iVar31) break;
          func_0x0054cd84();
          pqVar25 = (qword *)0x0;
          pqStack_a8 = pqVar24;
          if (pqVar24 == (qword *)0x0) goto LAB_0054bcf8;
          plVar27 = (long *)param_1[1];
          lVar34 = (long)iVar28 - (long)iVar31;
          if ((int)lVar34 < 0x11) {
            uStack_88 = 0;
            qStack_90 = 0;
            lStack_98 = plVar27[1];
            pqStack_a0 = (qword *)*plVar27;
            pqStack_c0 = (qword *)CONCAT44(pqStack_c0._4_4_,(int)lVar34);
            auStack_b0._4_4_ = 0x10;
            pqVar22 = (qword *)(auStack_b0 + 4);
            func_0x005389ec(&pqStack_c0,pqVar22,"size - chunk_size <= kSlopBytes");
            if (pqVar15 != (qword *)0x0) goto LAB_0054bd18;
            param_7 = (qword *)((long)&pqStack_a0 + lVar34);
            pbVar16 = (byte *)((long)&pqStack_a0 + (long)((int)pqVar24 - (int)plVar27));
            pqVar22 = param_7;
            func_0x0054cd84(pbVar16,param_7);
            uVar6 = (qword *)pbVar16 == param_7;
            if ((bool)uVar6) {
              pqVar25 = (qword *)(param_1[1] + lVar34);
            }
            else {
LAB_0054bcf4:
              pqVar25 = (qword *)0x0;
            }
            goto LAB_0054bcf8;
          }
          uVar6 = *(int *)((long)param_1 + 0x1c) == 0x11;
          if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_0054bcf4;
          pqVar25 = param_1;
          FUN_0054aed0();
          if (pqVar25 == (qword *)0x0) goto LAB_0054bcf8;
          func_0x0054cba0();
          pqVar24 = pqVar25;
        }
        param_1 = (qword *)((long)pqVar24 + (long)iVar28);
        pqVar22 = param_1;
        func_0x0054cd84();
        uVar6 = param_1 == pqVar24;
        pqVar25 = pqVar24;
        if (!(bool)uVar6) {
          pqVar25 = (qword *)0x0;
        }
      }
LAB_0054bcf8:
      func_0x0054cb2c();
      if ((bool)uVar6) {
        return pqVar25;
      }
      ___stack_chk_fail();
      pqVar15 = pqVar25;
LAB_0054bd18:
      func_0x00533528();
      FUN_00776794(&pqStack_c0,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/parse_context.h"
                   ,0x4ce,pqVar15,pqVar22);
      func_0x0054cc78();
      __Unwind_Resume();
      pcStack_c8 = FUN_0054bd40;
      uStack_e8 = param_7;
      pqStack_e0 = pqVar29;
      pqStack_d8 = param_1;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pqVar22 = pqVar17;
        if (param_7 <= param_1) {
          return param_1;
        }
        func_0x0054cbf0();
        if (pqVar22 == (qword *)0x0) break;
        pqVar17 = pqVar29;
        FUN_00533cb4(pqVar29,uStack_f8 & 0xffffffff);
        param_1 = pqVar22;
      }
      return (qword *)0x0;
    }
    break;
  case 5:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a7b8();
      func_0x0053aba8();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_00543378();
      return param_1;
    }
    break;
  case 6:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a7b8();
      func_0x0053aba8();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_00543490();
      return param_1;
    }
    break;
  case 7:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a518();
      func_0x0053aba8();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (qword *)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_0054c308();
          pqStack_a8 = param_1;
          if (param_1 == (qword *)0x0) goto LAB_0054c2e0;
          func_0x0054cb64();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x0054ca84();
            if (param_1 != (qword *)0x0) goto LAB_0054c2fc;
            func_0x0054cb7c();
            FUN_0054c308();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x0054cd1c();
            }
            else {
LAB_0054c2dc:
              param_1 = (qword *)0x0;
            }
            goto LAB_0054c2e0;
          }
          func_0x0054cce8();
          if (cVar5 != cVar4) goto LAB_0054c2dc;
          func_0x0054ccb0();
          if (param_1 == (qword *)0x0) goto LAB_0054c2e0;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054c308();
        func_0x0054cd28();
      }
LAB_0054c2e0:
      func_0x0054cb2c();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054c2fc:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054c308;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pqVar22 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pqVar22 == (qword *)0x0) break;
        param_1 = param_2;
        FUN_00534404(param_2,uStack_f8 != 0);
        param_6 = pqVar22;
      }
      return (qword *)0x0;
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    goto code_r0x00536438;
  case 0xc:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a518();
      func_0x0053aba8();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (qword *)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_0054be34();
          pqStack_a8 = param_1;
          if (param_1 == (qword *)0x0) goto LAB_0054be0c;
          func_0x0054cb64();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x0054ca84();
            if (param_1 != (qword *)0x0) goto LAB_0054be28;
            func_0x0054cb7c();
            FUN_0054be34();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x0054cd1c();
            }
            else {
LAB_0054be08:
              param_1 = (qword *)0x0;
            }
            goto LAB_0054be0c;
          }
          func_0x0054cce8();
          if (cVar5 != cVar4) goto LAB_0054be08;
          func_0x0054ccb0();
          if (param_1 == (qword *)0x0) goto LAB_0054be0c;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054be34();
        func_0x0054cd28();
      }
LAB_0054be0c:
      func_0x0054cb2c();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054be28:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054be34;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pqVar22 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pqVar22 == (qword *)0x0) break;
        param_1 = param_2;
        FUN_00533eec(param_2,uStack_f8 & 0xffffffff);
        param_6 = pqVar22;
      }
      return (qword *)0x0;
    }
    break;
  case 0xd:
    func_0x0053a268();
    FUN_0053445c();
    pqStack_a8 = (qword *)param_4[3];
    auStack_b0 = (undefined1  [8])param_4[2];
    lStack_98 = CONCAT44(lStack_98._4_4_,(int)param_2);
    pqVar29 = (qword *)&pqStack_78;
    pqStack_b8 = param_1;
    pqStack_a0 = param_5;
    pqStack_78 = param_6;
    FUN_00533034();
    if (pqStack_78 == (qword *)0x0) goto code_r0x005363dc;
    while( true ) {
      param_2 = (qword *)(param_7[1] - (long)pqStack_78);
      iVar28 = (int)pqVar29;
      iVar31 = (int)param_2;
      uVar6 = iVar28 == iVar31;
      if (iVar28 <= iVar31) break;
      FUN_00538954(pqStack_78,param_7[1],&pqStack_b8);
      if (pqStack_78 == (qword *)0x0) goto code_r0x005363dc;
      puVar26 = (undefined8 *)param_7[1];
      iVar30 = (int)pqStack_78 - (int)puVar26;
      lVar34 = (long)iVar28 - (long)iVar31;
      iVar33 = (int)lVar34;
      uVar6 = iVar33 == 0x10;
      if (iVar33 < 0x11) {
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_68 = puVar26[1];
        uStack_70 = *puVar26;
        qStack_90 = CONCAT44(qStack_90._4_4_,iVar33);
        uStack_7c = 0x10;
        pqVar9 = &qStack_90;
        pqVar18 = (qword *)&uStack_7c;
        func_0x005389ec(pqVar9,pqVar18,"size - chunk_size <= kSlopBytes");
        if (pqVar9 != (qword *)0x0) {
          func_0x00533528();
          pcVar19 = 
          "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/parse_context.h"
          ;
          pqVar17 = (qword *)(section_000004c8.sectname + 6);
          FUN_00776794(&qStack_90);
          pqVar22 = &qStack_90;
          FUN_005558a0();
          goto LAB_00536488;
        }
        lVar10 = (long)&uStack_70 + (long)iVar30;
        func_0x0053abcc();
        uVar6 = lVar10 == (long)&uStack_70 + lVar34;
        if (!(bool)uVar6) goto code_r0x005363dc;
        param_6 = (qword *)(param_7[1] + lVar34);
        goto LAB_005363e0;
      }
      uVar6 = *(int *)((long)param_7 + 0x1c) == 0x11;
      if ((*(int *)((long)param_7 + 0x1c) < 0x11) ||
         (pqVar22 = param_7, FUN_0054aed0(), pqVar22 == (qword *)0x0)) goto code_r0x005363dc;
      pqVar29 = (qword *)(ulong)(uint)((iVar28 - iVar31) - iVar30);
      pqStack_78 = (qword *)((long)pqVar22 + (long)iVar30);
    }
    pbVar16 = (byte *)((long)pqStack_78 + (long)iVar28);
    param_1 = pqStack_78;
    func_0x0053abcc();
    uVar6 = (qword *)pbVar16 == param_1;
code_r0x00536388:
    param_6 = param_1;
    if (!(bool)uVar6) {
      param_6 = (qword *)0x0;
    }
  default:
LAB_005363e0:
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053aba8(param_6,unaff_x30);
      return param_6;
    }
    break;
  case 0xe:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a7b8();
      func_0x0053aba8();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_0054c358();
      return param_1;
    }
    break;
  case 0xf:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a7b8();
      func_0x0053aba8();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_0054c460();
      return param_1;
    }
    break;
  case 0x10:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a518();
      func_0x0053aba8();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (qword *)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_0054c110();
          pqStack_a8 = param_1;
          if (param_1 == (qword *)0x0) goto LAB_0054c0e8;
          func_0x0054cb64();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x0054ca84();
            if (param_1 != (qword *)0x0) goto LAB_0054c104;
            func_0x0054cb7c();
            FUN_0054c110();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x0054cd1c();
            }
            else {
LAB_0054c0e4:
              param_1 = (qword *)0x0;
            }
            goto LAB_0054c0e8;
          }
          func_0x0054cce8();
          if (cVar5 != cVar4) goto LAB_0054c0e4;
          func_0x0054ccb0();
          if (param_1 == (qword *)0x0) goto LAB_0054c0e8;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054c110();
        func_0x0054cd28();
      }
LAB_0054c0e8:
      func_0x0054cb2c();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054c104:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054c110;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pqVar22 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pqVar22 == (qword *)0x0) break;
        param_1 = param_2;
        FUN_00533cb4(param_2,-((uint)uStack_f8 & 1) ^ (uint)uStack_f8 >> 1);
        param_6 = pqVar22;
      }
      return (qword *)0x0;
    }
    break;
  case 0x11:
    func_0x0053a268();
    FUN_0053445c();
    func_0x0053a22c();
    if ((bool)uVar6) {
      func_0x0053a518();
      func_0x0053aba8();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (qword *)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar6 && cVar5 == cVar4) {
          FUN_0054c20c();
          pqStack_a8 = param_1;
          if (param_1 == (qword *)0x0) goto LAB_0054c1e4;
          func_0x0054cb64();
          if ((bool)uVar6 || cVar5 != cVar4) {
            func_0x0054ca84();
            if (param_1 != (qword *)0x0) goto LAB_0054c200;
            func_0x0054cb7c();
            FUN_0054c20c();
            uVar6 = param_1 == param_7;
            if ((bool)uVar6) {
              func_0x0054cd1c();
            }
            else {
LAB_0054c1e0:
              param_1 = (qword *)0x0;
            }
            goto LAB_0054c1e4;
          }
          func_0x0054cce8();
          if (cVar5 != cVar4) goto LAB_0054c1e0;
          func_0x0054ccb0();
          if (param_1 == (qword *)0x0) goto LAB_0054c1e4;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054c20c();
        func_0x0054cd28();
      }
LAB_0054c1e4:
      func_0x0054cb2c();
      if ((bool)uVar6) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054c200:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054c20c;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pqVar22 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pqVar22 == (qword *)0x0) break;
        param_1 = param_2;
        FUN_00533dd0(param_2,-(uStack_f8 & 1) ^ uStack_f8 >> 1);
        param_6 = pqVar22;
      }
      return (qword *)0x0;
    }
  }
LAB_00536434:
  uVar6 = 0;
  ___stack_chk_fail();
  pqVar9 = pqVar24;
  pqVar18 = pqVar25;
  pqVar29 = param_6;
code_r0x00536438:
  pqVar17 = &segment_command_00000020.vmaddr;
  FUN_0077670c(&pqStack_b8,
               "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/extension_set_inl.h"
              );
  pcVar19 = "Non-primitive types can\'t be packed.";
  pqVar22 = (qword *)&pqStack_b8;
  FUN_00537844();
LAB_00536488:
  func_0x0053a67c();
  __Unwind_Resume();
  pcStack_c8 = FUN_00536490;
  uVar37 = 0;
  pqVar24 = pqVar17;
  pqVar25 = pqVar9;
  pqVar15 = pqVar18;
  uStack_e8 = param_7;
  pqStack_e0 = param_2;
  pqStack_d8 = pqVar29;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x0053a9e0();
  uStack_1a8 = 0;
  pppppppuStack_1b8 = (undefined8 *******)0x0;
  pqStack_1b0 = (qword *)0x0;
  pqVar29 = (qword *)0x0;
  pqStack_1a0 = (qword *)pcVar19;
  uStack_128 = extraout_x8_11;
LAB_005364e0:
  do {
    while( true ) {
      uVar23 = SUB84(pqVar24,0);
      pqVar35 = pqVar18;
      func_0x00538a04(pqVar18,&pqStack_1a0);
      pqVar24 = pqStack_1a0;
      iVar28 = (int)pqVar25;
      if (((ulong)pqVar35 & 1) != 0) goto LAB_0053671c;
      pqVar35 = (qword *)((long)pqStack_1a0 + 1);
      uStack_1bc = (uint)(byte)*pqStack_1a0;
      iVar31 = (int)uVar37;
      if (uStack_1bc != 0x1a) break;
      uVar6 = iVar31 == 1;
      if ((bool)uVar6) {
        pqVar24 = pqVar22;
        pqStack_1a0 = pqVar35;
        func_0x0053a8ec(pqVar22,(long)pqVar29 << 3 | 2);
        iVar28 = (int)pqVar25;
        uVar23 = SUB84(pqVar35,0);
        pqStack_1a0 = pqVar24;
        if (pqVar24 == (qword *)0x0) goto LAB_00536704;
        uVar37 = 3;
        pqVar24 = pqVar35;
      }
      else {
        pqStack_198 = (qword *)0x0;
        uStack_190 = 0;
        uStack_188 = 0;
        pqVar24 = (qword *)&pqStack_1a0;
        pqStack_1a0 = pqVar35;
        FUN_00533034();
        if (pqStack_1a0 == (qword *)0x0) {
LAB_00536654:
          pqVar24 = pqVar35;
          bVar32 = false;
        }
        else {
          pqVar25 = (qword *)&pqStack_198;
          pqVar11 = pqVar18;
          FUN_00533074();
          pqVar35 = pqVar24;
          pqStack_1a0 = pqVar11;
          if (pqVar11 == (qword *)0x0) goto LAB_00536654;
          if (iVar31 == 0) {
            FUN_004575b8(&pppppppuStack_1b8,&pqStack_198);
            uVar37 = 2;
          }
          bVar32 = true;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pqStack_198);
        iVar28 = (int)pqVar25;
        uVar23 = SUB84(pqVar24,0);
        if (!bVar32) goto LAB_00536704;
      }
    }
    uVar6 = (byte)*pqStack_1a0 == 0x10;
    if ((bool)uVar6) {
      pqVar24 = pqVar35;
      pqStack_1a0 = pqVar35;
      func_0x00538a0c(pqVar35,auStack_1c8);
      iVar28 = (int)pqVar25;
      uVar23 = SUB84(pqVar24,0);
      pqStack_1a0 = pqVar35;
      if ((pqVar35 == (qword *)0x0) ||
         (pqVar35 = (qword *)(ulong)auStack_1c8[0], auStack_1c8[0] == 0)) goto LAB_00536704;
      if (iVar31 == 0) {
        uVar37 = 1;
        pqVar29 = pqVar35;
      }
      else {
        uVar6 = 0;
        if (iVar31 == 2) {
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          pqStack_1e0 = (qword *)0x0;
          uStack_1f8 = 0;
          qStack_200 = 0;
          pqVar15 = &qStack_200;
          pqVar24 = pqVar22;
          pqStack_198 = pqVar17;
          FUN_00535adc(pqVar22,2,pqVar35,&pqStack_198,pqVar15,&uStack_201);
          if (((ulong)pqVar24 & 1) == 0) {
            uVar6 = uStack_1a8._7_1_ == 0;
            pqVar24 = pqStack_1b0;
            pppppppuVar12 = pppppppuStack_1b8;
            if (-1 < uStack_1a8) {
              pqVar24 = (qword *)(ulong)uStack_1a8._7_1_;
              pppppppuVar12 = &pppppppuStack_1b8;
            }
            if ((*pqVar9 & 1) == 0) {
              pqVar25 = pqVar9;
              FUN_00538108();
            }
            else {
              pqVar25 = (qword *)((*pqVar9 & 0xfffffffffffffffe) + 8);
            }
            FUN_0054b7dc(pqVar35,pppppppuVar12);
          }
          else {
            uVar6 = cStack_1f3 == '\x01';
            pqVar29 = pqVar22;
            pqVar15 = pqStack_1e0;
            if ((bool)uVar6) {
              FUN_005349b8(pqVar22,pqVar35,0xb);
            }
            else {
              FUN_005347ac(pqVar22,pqVar35,0xb,uStack_1f0,pqStack_1e0);
            }
            pqVar25 = (qword *)&pppppppuStack_1b8;
            func_0x00538b48(&pqStack_198,pqVar18,&uStack_210);
            pqVar24 = (qword *)&pqStack_198;
            pqVar11 = pqVar29;
            FUN_00549a60(pqVar29,uStack_210);
            iVar28 = (int)pqVar25;
            uVar23 = SUB84(pqVar24,0);
            if ((pqVar11 == (qword *)0x0) || (iStack_148 != 0)) goto LAB_00536704;
          }
          uVar37 = 3;
          pqVar29 = pqVar35;
        }
      }
      goto LAB_005364e0;
    }
    uVar23 = 0;
    pqStack_1a0 = pqVar35;
    func_0x00538a80(pqVar24,&uStack_1bc);
    iVar28 = (int)pqVar25;
    if ((uStack_1bc == 0) || (uVar6 = (uStack_1bc & 7) == 4, (bool)uVar6)) {
      *(uint *)(pqVar18 + 10) = uStack_1bc - 1;
      pqVar24 = pqStack_1a0;
      goto LAB_0053671c;
    }
    pqVar35 = pqVar22;
    func_0x0053a8ec();
    iVar28 = (int)pqVar25;
    uVar23 = SUB84(pqStack_1a0,0);
    pqVar24 = pqStack_1a0;
    pqStack_1a0 = pqVar35;
    if (pqVar35 == (qword *)0x0) {
LAB_00536704:
      pqVar24 = (qword *)0x0;
LAB_0053671c:
      pppppppuVar12 = &pppppppuStack_1b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0053a254(uStack_128);
      if ((bool)uVar6) {
        return pqVar24;
      }
      ___stack_chk_fail();
      pppppppuVar13 = &pppppppuStack_1b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0053a6d8();
      uStack_260 = 2;
      pcStack_218 = FUN_0053678c;
      ppppppuVar14 = pppppppuVar13[2];
      uStack_264 = uVar23;
      uStack_258 = uVar37;
      pqStack_250 = pqVar29;
      pqStack_248 = pqVar24;
      pqStack_240 = pqVar22;
      pqStack_238 = pqVar17;
      pqStack_230 = pqVar9;
      pppppppuStack_228 = pppppppuVar12;
      ppuStack_220 = &puStack_d0;
      if ((long)*(short *)((long)pppppppuVar13 + 10) < 0) {
        ppppppuVar36 = (undefined8 ******)ppppppuVar14[1];
        bVar2 = *(byte *)((long)ppppppuVar36 + 10);
        puVar20 = &uStack_264;
        FUN_00536874();
        puVar21 = puVar20;
        while ((ppppppuVar14 != ppppppuVar36 || (uint)puVar21 != (uint)bVar2 &&
               (uVar1 = (uint)puVar21 & 0xff, *(int *)(ppppppuVar14 + (ulong)uVar1 * 4 + 2) < iVar28
               ))) {
          pqVar15 = (qword *)(ppppppuVar14 + (ulong)uVar1 * 4 + 3);
          func_0x0053a860(pqVar15);
          func_0x0053a6e0();
          puVar21 = (undefined4 *)((ulong)puVar20 & 0xffffffff);
        }
      }
      else {
        ppppppuVar36 = ppppppuVar14 + (long)*(short *)((long)pppppppuVar13 + 10) * 4;
        FUN_00537210(ppppppuVar14,ppppppuVar36,&uStack_264);
        for (; (ppppppuVar14 != ppppppuVar36 && (*(int *)ppppppuVar14 < iVar28));
            ppppppuVar14 = ppppppuVar14 + 4) {
          pqVar15 = (qword *)(ppppppuVar14 + 1);
          func_0x0053a860();
        }
      }
      func_0x0053a7f4(pqVar15);
      return pqVar15;
    }
  } while( true );
}



/* Entry: 00536490; end: 0053678b;  */

byte *****
FUN_00536490(byte *****param_1,byte *****param_2,byte *****param_3,byte *****param_4,
            byte *****param_5)

{
  uint uVar1;
  byte bVar2;
  byte ****ppppbVar3;
  undefined1 in_ZR;
  byte *****pppppbVar4;
  byte *****pppppbVar5;
  byte *****pppppbVar6;
  byte *****pppppbVar7;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 ****ppppuVar10;
  byte *****pppppbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 extraout_x8;
  bool bVar16;
  byte *****pppppbVar17;
  undefined8 ****ppppuVar18;
  int iVar19;
  undefined8 uVar20;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  byte ****ppppbStack_190;
  byte ****ppppbStack_188;
  byte ****ppppbStack_180;
  byte ****ppppbStack_178;
  byte ****ppppbStack_170;
  undefined8 ****ppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined1 uStack_141;
  byte ***pppbStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte ****ppppbStack_120;
  undefined8 uStack_118;
  uint auStack_108 [3];
  uint uStack_fc;
  undefined8 ****ppppuStack_f8;
  byte ****ppppbStack_f0;
  undefined8 uStack_e8;
  byte ****ppppbStack_e0;
  byte ****ppppbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_88;
  undefined8 uStack_68;
  
  uVar20 = 0;
  pppppbVar4 = param_3;
  pppppbVar7 = param_4;
  pppppbVar11 = param_5;
  func_0x0053a9e0();
  uStack_e8 = 0;
  ppppuStack_f8 = (undefined8 *****)0x0;
  ppppbStack_f0 = (byte ****)0x0;
  pppppbVar6 = (byte *****)0x0;
  ppppbStack_e0 = (byte ****)param_2;
  uStack_68 = extraout_x8;
LAB_005364e0:
  do {
    while( true ) {
      uVar14 = SUB84(pppppbVar4,0);
      pppppbVar4 = param_5;
      func_0x00538a04(param_5,&ppppbStack_e0);
      ppppbVar3 = ppppbStack_e0;
      iVar15 = (int)pppppbVar7;
      pppppbVar17 = (byte *****)ppppbStack_e0;
      if (((ulong)pppppbVar4 & 1) != 0) goto LAB_0053671c;
      pppppbVar17 = (byte *****)((long)ppppbStack_e0 + 1);
      uStack_fc = (uint)*(byte *)ppppbStack_e0;
      iVar19 = (int)uVar20;
      if (uStack_fc != 0x1a) break;
      in_ZR = iVar19 == 1;
      if ((bool)in_ZR) {
        pppppbVar4 = param_1;
        ppppbStack_e0 = (byte ****)pppppbVar17;
        func_0x0053a8ec(param_1,(long)pppppbVar6 << 3 | 2);
        iVar15 = (int)pppppbVar7;
        uVar14 = SUB84(pppppbVar17,0);
        ppppbStack_e0 = (byte ****)pppppbVar4;
        if (pppppbVar4 == (byte *****)0x0) goto LAB_00536704;
        uVar20 = 3;
        pppppbVar4 = pppppbVar17;
      }
      else {
        ppppbStack_d8 = (byte ****)0x0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        pppppbVar4 = &ppppbStack_e0;
        ppppbStack_e0 = (byte ****)pppppbVar17;
        FUN_00533034();
        if ((byte *****)ppppbStack_e0 == (byte *****)0x0) {
LAB_00536654:
          pppppbVar4 = pppppbVar17;
          bVar16 = false;
        }
        else {
          pppppbVar7 = &ppppbStack_d8;
          pppppbVar5 = param_5;
          FUN_00533074();
          pppppbVar17 = pppppbVar4;
          ppppbStack_e0 = (byte ****)pppppbVar5;
          if (pppppbVar5 == (byte *****)0x0) goto LAB_00536654;
          if (iVar19 == 0) {
            FUN_004575b8(&ppppuStack_f8,&ppppbStack_d8);
            uVar20 = 2;
          }
          bVar16 = true;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppbStack_d8);
        iVar15 = (int)pppppbVar7;
        uVar14 = SUB84(pppppbVar4,0);
        if (!bVar16) goto LAB_00536704;
      }
    }
    in_ZR = *(byte *)ppppbStack_e0 == 0x10;
    if ((bool)in_ZR) {
      pppppbVar4 = pppppbVar17;
      ppppbStack_e0 = (byte ****)pppppbVar17;
      func_0x00538a0c(pppppbVar17,auStack_108);
      iVar15 = (int)pppppbVar7;
      uVar14 = SUB84(pppppbVar4,0);
      ppppbStack_e0 = (byte ****)pppppbVar17;
      if ((pppppbVar17 == (byte *****)0x0) ||
         (pppppbVar17 = (byte *****)(ulong)auStack_108[0], auStack_108[0] == 0)) goto LAB_00536704;
      if (iVar19 == 0) {
        uVar20 = 1;
        pppppbVar6 = pppppbVar17;
      }
      else {
        in_ZR = 0;
        if (iVar19 == 2) {
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          ppppbStack_120 = (byte ****)0x0;
          uStack_138 = 0;
          pppbStack_140 = (byte ***)0x0;
          pppppbVar11 = (byte *****)&pppbStack_140;
          pppppbVar4 = param_1;
          ppppbStack_d8 = (byte ****)param_3;
          FUN_00535adc(param_1,2,pppppbVar17,&ppppbStack_d8,pppppbVar11,&uStack_141);
          if (((ulong)pppppbVar4 & 1) == 0) {
            in_ZR = uStack_e8._7_1_ == 0;
            pppppbVar4 = (byte *****)ppppbStack_f0;
            pppppuVar8 = (undefined8 *****)ppppuStack_f8;
            if (-1 < uStack_e8) {
              pppppbVar4 = (byte *****)(ulong)uStack_e8._7_1_;
              pppppuVar8 = &ppppuStack_f8;
            }
            if (((ulong)*param_4 & 1) == 0) {
              pppppbVar7 = param_4;
              FUN_00538108();
            }
            else {
              pppppbVar7 = (byte *****)(((ulong)*param_4 & 0xfffffffffffffffe) + 8);
            }
            FUN_0054b7dc(pppppbVar17,pppppuVar8);
          }
          else {
            in_ZR = uStack_138._5_1_ == '\x01';
            pppppbVar6 = param_1;
            pppppbVar11 = (byte *****)ppppbStack_120;
            if ((bool)in_ZR) {
              FUN_005349b8(param_1,pppppbVar17,0xb);
            }
            else {
              FUN_005347ac(param_1,pppppbVar17,0xb,uStack_130,ppppbStack_120);
            }
            pppppbVar7 = (byte *****)&ppppuStack_f8;
            func_0x00538b48(&ppppbStack_d8,param_5,&uStack_150);
            pppppbVar4 = &ppppbStack_d8;
            pppppbVar5 = pppppbVar6;
            FUN_00549a60(pppppbVar6,uStack_150);
            iVar15 = (int)pppppbVar7;
            uVar14 = SUB84(pppppbVar4,0);
            if ((pppppbVar5 == (byte *****)0x0) || (iStack_88 != 0)) goto LAB_00536704;
          }
          uVar20 = 3;
          pppppbVar6 = pppppbVar17;
        }
      }
      goto LAB_005364e0;
    }
    uVar14 = 0;
    ppppbStack_e0 = (byte ****)pppppbVar17;
    func_0x00538a80(ppppbVar3,&uStack_fc);
    iVar15 = (int)pppppbVar7;
    if ((uStack_fc == 0) || (in_ZR = (uStack_fc & 7) == 4, (bool)in_ZR)) {
      *(uint *)(param_5 + 10) = uStack_fc - 1;
      pppppbVar17 = (byte *****)ppppbStack_e0;
      goto LAB_0053671c;
    }
    pppppbVar17 = param_1;
    func_0x0053a8ec();
    iVar15 = (int)pppppbVar7;
    uVar14 = SUB84(ppppbStack_e0,0);
    pppppbVar4 = (byte *****)ppppbStack_e0;
    ppppbStack_e0 = (byte ****)pppppbVar17;
    if (pppppbVar17 == (byte *****)0x0) {
LAB_00536704:
      pppppbVar17 = (byte *****)0x0;
LAB_0053671c:
      pppppuVar8 = &ppppuStack_f8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x0053a254(uStack_68);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        pppppuVar9 = &ppppuStack_f8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x0053a6d8();
        uStack_1a0 = 2;
        pcStack_158 = FUN_0053678c;
        ppppuVar10 = pppppuVar9[2];
        uStack_1a4 = uVar14;
        uStack_198 = uVar20;
        ppppbStack_190 = (byte ****)pppppbVar6;
        ppppbStack_188 = (byte ****)pppppbVar17;
        ppppbStack_180 = (byte ****)param_1;
        ppppbStack_178 = (byte ****)param_3;
        ppppbStack_170 = (byte ****)param_4;
        ppppuStack_168 = pppppuVar8;
        puStack_160 = &stack0xfffffffffffffff0;
        if ((long)*(short *)((long)pppppuVar9 + 10) < 0) {
          ppppuVar18 = (undefined8 ****)ppppuVar10[1];
          bVar2 = *(byte *)((long)ppppuVar18 + 10);
          puVar12 = &uStack_1a4;
          FUN_00536874();
          puVar13 = puVar12;
          while ((ppppuVar10 != ppppuVar18 || (uint)puVar13 != (uint)bVar2 &&
                 (uVar1 = (uint)puVar13 & 0xff, *(int *)(ppppuVar10 + (ulong)uVar1 * 4 + 2) < iVar15
                 ))) {
            pppppbVar11 = (byte *****)(ppppuVar10 + (ulong)uVar1 * 4 + 3);
            func_0x0053a860(pppppbVar11);
            func_0x0053a6e0();
            puVar13 = (undefined4 *)((ulong)puVar12 & 0xffffffff);
          }
        }
        else {
          ppppuVar18 = ppppuVar10 + (long)*(short *)((long)pppppuVar9 + 10) * 4;
          FUN_00537210(ppppuVar10,ppppuVar18,&uStack_1a4);
          for (; (ppppuVar10 != ppppuVar18 && (*(int *)ppppuVar10 < iVar15));
              ppppuVar10 = ppppuVar10 + 4) {
            pppppbVar11 = (byte *****)(ppppuVar10 + 1);
            func_0x0053a860();
          }
        }
        func_0x0053a7f4(pppppbVar11);
        return pppppbVar11;
      }
      return pppppbVar17;
    }
  } while( true );
}



/* Entry: 0053678c; end: 00536873;  */

void FUN_0053678c(long param_1,undefined8 param_2,undefined4 param_3,int param_4,int *param_5)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uStack_54;
  
  piVar3 = *(int **)(param_1 + 0x10);
  uStack_54 = param_3;
  if ((long)*(short *)(param_1 + 10) < 0) {
    piVar6 = *(int **)(piVar3 + 2);
    bVar2 = *(byte *)((long)piVar6 + 10);
    puVar4 = &uStack_54;
    FUN_00536874();
    puVar5 = puVar4;
    while ((piVar3 != piVar6 || (uint)puVar5 != (uint)bVar2 &&
           (uVar1 = (uint)puVar5 & 0xff, piVar3[(ulong)uVar1 * 8 + 4] < param_4))) {
      param_5 = piVar3 + (ulong)uVar1 * 8 + 6;
      func_0x0053a860(param_5);
      func_0x0053a6e0();
      puVar5 = (undefined4 *)((ulong)puVar4 & 0xffffffff);
    }
  }
  else {
    piVar6 = piVar3 + (long)*(short *)(param_1 + 10) * 8;
    FUN_00537210(piVar3,piVar6,&uStack_54);
    for (; (piVar3 != piVar6 && (*piVar3 < param_4)); piVar3 = piVar3 + 8) {
      param_5 = piVar3 + 2;
      func_0x0053a860();
    }
  }
  func_0x0053a7f4(param_5);
  return;
}



/* Entry: 00536874; end: 0053688b;  */

void FUN_00536874(void)

{
  FUN_00538c4c();
  return;
}



/* Entry: 0053688c; end: 0053720f;  */

/* WARNING: Possible PIC construction at 0x005368f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00536fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0053716c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0053702c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00537094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00537100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00537050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x005370dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x005370b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00536dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00536a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00536f08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00536cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0054db18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0054da9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0054db1c) */
/* WARNING: Removing unreachable block (ram,0x00536cc0) */
/* WARNING: Removing unreachable block (ram,0x00536f0c) */
/* WARNING: Removing unreachable block (ram,0x00536a84) */
/* WARNING: Removing unreachable block (ram,0x00536dc4) */
/* WARNING: Removing unreachable block (ram,0x005370bc) */
/* WARNING: Removing unreachable block (ram,0x005370e0) */
/* WARNING: Removing unreachable block (ram,0x00537054) */
/* WARNING: Removing unreachable block (ram,0x00537104) */
/* WARNING: Removing unreachable block (ram,0x00537098) */
/* WARNING: Removing unreachable block (ram,0x00537030) */
/* WARNING: Removing unreachable block (ram,0x00537170) */
/* WARNING: Removing unreachable block (ram,0x00536fec) */
/* WARNING: Removing unreachable block (ram,0x005368f8) */
/* WARNING: Removing unreachable block (ram,0x0053690c) */
/* WARNING: Removing unreachable block (ram,0x00536fc8) */
/* WARNING: Removing unreachable block (ram,0x00536fcc) */
/* WARNING: Removing unreachable block (ram,0x00536fd4) */
/* WARNING: Removing unreachable block (ram,0x0053714c) */
/* WARNING: Removing unreachable block (ram,0x00537150) */
/* WARNING: Removing unreachable block (ram,0x00537158) */
/* WARNING: Removing unreachable block (ram,0x00536ff4) */
/* WARNING: Removing unreachable block (ram,0x00536ff8) */
/* WARNING: Removing unreachable block (ram,0x00537000) */
/* WARNING: Removing unreachable block (ram,0x0053705c) */
/* WARNING: Removing unreachable block (ram,0x00537060) */
/* WARNING: Removing unreachable block (ram,0x00537068) */
/* WARNING: Removing unreachable block (ram,0x00537014) */
/* WARNING: Removing unreachable block (ram,0x00537018) */
/* WARNING: Removing unreachable block (ram,0x00537020) */
/* WARNING: Removing unreachable block (ram,0x0053707c) */
/* WARNING: Removing unreachable block (ram,0x00537080) */
/* WARNING: Removing unreachable block (ram,0x00537088) */
/* WARNING: Removing unreachable block (ram,0x005371d0) */
/* WARNING: Removing unreachable block (ram,0x0053720c) */
/* WARNING: Removing unreachable block (ram,0x0053a6e8) */
/* WARNING: Removing unreachable block (ram,0x005370e8) */
/* WARNING: Removing unreachable block (ram,0x005370ec) */
/* WARNING: Removing unreachable block (ram,0x005370f4) */
/* WARNING: Removing unreachable block (ram,0x00537178) */
/* WARNING: Removing unreachable block (ram,0x0053717c) */
/* WARNING: Removing unreachable block (ram,0x00537184) */
/* WARNING: Removing unreachable block (ram,0x0053712c) */
/* WARNING: Removing unreachable block (ram,0x00537130) */
/* WARNING: Removing unreachable block (ram,0x00537138) */
/* WARNING: Removing unreachable block (ram,0x00537038) */
/* WARNING: Removing unreachable block (ram,0x0053703c) */
/* WARNING: Removing unreachable block (ram,0x00537044) */
/* WARNING: Removing unreachable block (ram,0x005370c4) */
/* WARNING: Removing unreachable block (ram,0x005370c8) */
/* WARNING: Removing unreachable block (ram,0x005370d0) */
/* WARNING: Removing unreachable block (ram,0x005370a0) */
/* WARNING: Removing unreachable block (ram,0x005370a4) */
/* WARNING: Removing unreachable block (ram,0x005370ac) */
/* WARNING: Removing unreachable block (ram,0x0053710c) */
/* WARNING: Removing unreachable block (ram,0x00537110) */
/* WARNING: Removing unreachable block (ram,0x00537118) */
/* WARNING: Removing unreachable block (ram,0x00536924) */
/* WARNING: Removing unreachable block (ram,0x00536928) */
/* WARNING: Removing unreachable block (ram,0x00536930) */
/* WARNING: Removing unreachable block (ram,0x0054daa0) */
/* WARNING: Recovered jumptable eliminated as dead code */

ulong * FUN_0053688c(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulong *param_5,ulong *param_6)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  ulong uVar8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  undefined8 uVar9;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  undefined8 extraout_x8_12;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  long *plVar10;
  long lVar11;
  int iVar12;
  long unaff_x23;
  int iVar13;
  ulong unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x30;
  
  if (*(byte *)((long)param_1 + 9) == 1) {
    if (*(byte *)((long)param_1 + 0xb) != 1) {
      iVar12 = (byte)param_1[1] - 1;
      cVar2 = SBORROW4(iVar12,0x11);
      cVar3 = (int)((byte)param_1[1] - 0x12) < 0;
      switch(iVar12) {
      case 0:
        func_0x0053aa60();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          func_0x0053a5bc();
          func_0x0053aa80();
        }
        break;
      case 1:
        func_0x0053aa70();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          func_0x0053a5bc();
          func_0x0053aa90();
        }
        break;
      case 2:
        func_0x0053a7d0();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          param_5 = *(ulong **)(extraout_x8_05 + unaff_x23 * 8);
          func_0x0053a5bc();
          func_0x0053ab78();
          func_0x0053a784();
        }
        break;
      case 3:
        func_0x0053a7d0();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          param_5 = *(ulong **)(extraout_x8_06 + unaff_x23 * 8);
          func_0x0053a5bc();
          func_0x0053ab78();
          func_0x0053a784();
        }
        break;
      case 4:
        func_0x0053a7d0();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          param_5 = (ulong *)(ulong)*(uint *)(extraout_x8_03 + unaff_x23 * 4);
          func_0x0053a5bc();
          func_0x0053ab84();
          func_0x0053a784();
        }
        break;
      case 5:
        func_0x0053aa60();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          func_0x0053a5bc();
          func_0x0053aa80();
        }
        break;
      case 6:
        func_0x0053aa70();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          func_0x0053a5bc();
          func_0x0053aa90();
        }
        break;
      case 7:
        func_0x0053a7d0();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          param_5 = (ulong *)(ulong)*(byte *)(extraout_x8_07 + unaff_x23);
          func_0x0053a5bc();
          func_0x0053ab90();
          func_0x0053a784();
        }
        break;
      case 8:
        puVar4 = param_1;
        func_0x0053ac9c();
        while( true ) {
          lVar11 = (long)*(int *)(*param_1 + 8);
          cVar2 = SBORROW8(unaff_x26,lVar11);
          cVar3 = unaff_x26 - lVar11 < 0;
          if (lVar11 <= unaff_x26) break;
          func_0x0053a2b0();
          func_0x0053a71c();
          if ((long)unaff_x24 < 0) {
            unaff_x24 = param_5[1];
            cVar2 = SBORROW8(unaff_x24,0x7f);
            cVar3 = (long)(unaff_x24 - 0x7f) < 0;
            if ((long)unaff_x24 < 0x80) goto code_r0x00536f74;
code_r0x00536fbc:
            func_0x0053a814();
            param_5 = puVar4;
          }
          else {
code_r0x00536f74:
            func_0x0053ab9c();
            func_0x0053aac4();
            if (cVar3 != cVar2) goto code_r0x00536fbc;
            uVar9 = unaff_x27;
            while (0x7f < (uint)uVar9) {
              func_0x0053ac40();
              uVar9 = extraout_x8_10;
            }
            *unaff_x25 = (char)uVar9;
            unaff_x25[1] = (char)unaff_x24;
            func_0x0053a988();
            param_5 = (ulong *)(unaff_x25 + 2 + unaff_x24);
            unaff_x25 = unaff_x25 + 2;
          }
          unaff_x26 = unaff_x26 + 1;
        }
        break;
      case 9:
        if (*(int *)(*param_1 + 8) < 1) break;
        func_0x0053a2b0();
        goto FUN_0054da68;
      case 10:
        param_1 = (ulong *)*param_1;
        if ((int)param_1[1] < 1) break;
        if ((*param_1 & 1) != 0) {
          param_1 = (ulong *)(*param_1 + 7);
        }
        (**(code **)(*(long *)*param_1 + 0x30))();
        goto SUB_0054dae0;
      case 0xb:
        puVar4 = param_1;
        func_0x0053ac9c();
        while( true ) {
          lVar11 = (long)*(int *)(*param_1 + 8);
          cVar2 = SBORROW8(unaff_x26,lVar11);
          cVar3 = unaff_x26 - lVar11 < 0;
          if (lVar11 <= unaff_x26) break;
          func_0x0053a2b0();
          func_0x0053a71c();
          if ((long)unaff_x24 < 0) {
            unaff_x24 = param_5[1];
            cVar2 = SBORROW8(unaff_x24,0x7f);
            cVar3 = (long)(unaff_x24 - 0x7f) < 0;
            if ((long)unaff_x24 < 0x80) goto code_r0x00536b3c;
code_r0x00536b84:
            func_0x0053a814();
            param_5 = puVar4;
          }
          else {
code_r0x00536b3c:
            func_0x0053ab9c();
            func_0x0053aac4();
            if (cVar3 != cVar2) goto code_r0x00536b84;
            uVar9 = unaff_x27;
            while (0x7f < (uint)uVar9) {
              func_0x0053ac40();
              uVar9 = extraout_x8_01;
            }
            *unaff_x25 = (char)uVar9;
            unaff_x25[1] = (char)unaff_x24;
            func_0x0053a988();
            param_5 = (ulong *)(unaff_x25 + 2 + unaff_x24);
            unaff_x25 = unaff_x25 + 2;
          }
          unaff_x26 = unaff_x26 + 1;
        }
        break;
      case 0xc:
        func_0x0053a7d0();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          param_5 = (ulong *)(ulong)*(uint *)(extraout_x8_04 + unaff_x23 * 4);
          func_0x0053a5bc();
          func_0x0053ab90();
          func_0x0053a784();
        }
        break;
      case 0xd:
        func_0x0053a7d0();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          param_5 = (ulong *)(ulong)*(uint *)(extraout_x8_09 + unaff_x23 * 4);
          func_0x0053a5bc();
          func_0x0053ab84();
          func_0x0053a784();
        }
        break;
      case 0xe:
        func_0x0053aa70();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          func_0x0053a5bc();
          func_0x0053aa90();
        }
        break;
      case 0xf:
        func_0x0053aa60();
        while (func_0x0053a334(), cVar3 != cVar2) {
          func_0x0053a2b0();
          func_0x0053a2dc();
          func_0x0053a5bc();
          func_0x0053aa80();
        }
        break;
      case 0x10:
        func_0x0053a7d0();
        func_0x0053a334();
        if (cVar3 == cVar2) break;
        func_0x0053a2b0();
        func_0x0053a2dc();
        iVar12 = *(int *)(extraout_x8 + unaff_x23 * 4);
        func_0x0053a5bc();
        puVar4 = (ulong *)(ulong)(uint)(iVar12 << 1 ^ iVar12 >> 0x1f);
        param_6 = param_1;
        goto LAB_00487cc4;
      case 0x11:
        func_0x0053a7d0();
        func_0x0053a334();
        if (cVar3 == cVar2) break;
        func_0x0053a2b0();
        func_0x0053a2dc();
        lVar11 = *(long *)(extraout_x8_08 + unaff_x23 * 8);
        func_0x0053a5bc();
        uVar5 = lVar11 << 1 ^ lVar11 >> 0x3f;
        goto LAB_00487cf8;
      }
      goto LAB_0053694c;
    }
    if (*(int *)((long)param_1 + 0xc) == 0) goto LAB_0053694c;
    puVar4 = param_1;
    func_0x0053a2b0();
    func_0x0053abc4(2);
    iVar12 = *(int *)((long)param_1 + 0xc);
    param_1 = puVar4;
SUB_00487ce8:
    uVar5 = (ulong)iVar12;
    goto LAB_00487cf8;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) goto LAB_0053694c;
  iVar12 = (byte)param_1[1] - 1;
  cVar2 = SBORROW4(iVar12,0x11);
  cVar3 = (int)((byte)param_1[1] - 0x12) < 0;
  iVar13 = (int)param_6;
  puVar4 = param_1;
  switch(iVar12) {
  case 0:
  case 5:
  case 0xf:
    puVar4 = param_1;
    func_0x0053a2b0();
    uVar5 = *param_1;
    func_0x0053abc4(1);
    param_5 = puVar4 + 1;
    *puVar4 = uVar5;
    break;
  case 1:
  case 6:
  case 0xe:
    func_0x0053a2b0();
    func_0x0053ac14();
    func_0x0053abc4(5);
    param_5 = (ulong *)((long)param_1 + 4);
    *(int *)param_1 = iVar13;
    break;
  case 2:
  case 3:
    func_0x0053a2b0();
    uVar5 = *param_1;
    func_0x0053a844();
    goto code_r0x00536de8;
  case 4:
  case 0xd:
    func_0x0053a2b0();
    func_0x0053ac14();
    func_0x0053a844();
    func_0x0053a650(param_6,param_1,unaff_x30);
    iVar12 = (int)param_6;
    goto SUB_00487ce8;
  case 7:
    puVar7 = param_1;
    func_0x0053a2b0();
    puVar4 = (ulong *)(ulong)(byte)*param_1;
    goto code_r0x00536f28;
  case 8:
    func_0x0053a2b0();
    param_1 = (ulong *)*param_1;
    uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar5 < 0) {
      uVar5 = param_1[1];
      cVar2 = SBORROW8(uVar5,0x7f);
      cVar3 = (long)(uVar5 - 0x7f) < 0;
      if (0x7f < (long)uVar5) goto code_r0x005371e8;
    }
    func_0x0053a9a0();
    func_0x0053aadc();
    if (cVar3 != cVar2) {
code_r0x005371e8:
      func_0x0053a650(param_6,param_4);
      func_0x0054f58c();
      func_0x0054f618();
      uVar9 = extraout_x10;
      while (0x7f < (uint)uVar9) {
        func_0x0054f6c4();
        uVar9 = extraout_x10_00;
      }
      func_0x0054f600();
      uVar9 = extraout_x8_11;
      while (0x7f < (uint)uVar9) {
        func_0x0054f69c();
        uVar9 = extraout_x8_12;
      }
      func_0x0054f5b0();
      if ((long)(*param_6 - (long)puVar4) < (long)(int)param_1) {
        while( true ) {
          iVar13 = ((int)*param_6 - (int)puVar4) + 0x10;
          iVar12 = (int)param_1;
          param_1 = (ulong *)(ulong)(uint)(iVar12 - iVar13);
          if (iVar12 - iVar13 == 0 || iVar12 < iVar13) break;
          func_0x0054f690();
          pbVar1 = (byte *)((long)puVar4 + (long)iVar13);
          puVar4 = param_6;
          func_0x0054ed58(param_6,pbVar1);
        }
        func_0x0054f690();
        return (ulong *)((long)puVar4 + (long)iVar12);
      }
      _memcpy(puVar4);
      return (ulong *)((long)puVar4 + (long)(int)param_1);
    }
    uVar8 = (ulong)((uint)unaff_x24 | 2);
    while (0x7f < (uint)uVar8) {
      func_0x0053ac54();
      uVar8 = extraout_x8_02;
    }
    goto code_r0x00536bd4;
  case 9:
    puVar4 = param_1;
    func_0x0053a2b0();
    func_0x0053a650(param_4,*param_1,puVar4);
    param_1 = puVar4;
FUN_0054da68:
    func_0x00487c24(param_6,param_1);
    puVar4 = (ulong *)(ulong)((int)param_4 << 3 | 3);
    goto LAB_00487cc4;
  case 10:
    if ((*(byte *)((long)param_1 + 10) >> 4 & 1) != 0) {
      func_0x0053abe4(param_3);
      param_1 = (ulong *)*param_1;
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x98);
      func_0x0053a650(param_1,param_3,param_4,param_5,param_6,UNRECOVERED_JUMPTABLE,unaff_x30);
                    /* WARNING: Could not recover jumptable at 0x005371cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_1;
    }
    plVar10 = (long *)*param_1;
    plVar6 = plVar10;
    (**(code **)(*plVar10 + 0x30))();
    func_0x0053a650(param_4,plVar10,*(undefined4 *)((long)plVar10 + (ulong)*(uint *)(plVar6 + 3)),
                    param_5);
SUB_0054dae0:
    func_0x00487c24(param_6,param_5);
    puVar4 = (ulong *)(ulong)((int)param_4 << 3 | 2);
    goto LAB_00487cc4;
  case 0xb:
    func_0x0053a2b0();
    param_1 = (ulong *)*param_1;
    uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar5 < 0) {
      uVar5 = param_1[1];
      cVar2 = SBORROW8(uVar5,0x7f);
      cVar3 = (long)(uVar5 - 0x7f) < 0;
      if (0x7f < (long)uVar5) goto code_r0x005371e8;
    }
    func_0x0053a9a0();
    func_0x0053aadc();
    if (cVar3 != cVar2) goto code_r0x005371e8;
    uVar8 = (ulong)((uint)unaff_x24 | 2);
    while (0x7f < (uint)uVar8) {
      func_0x0053ac54();
      uVar8 = extraout_x8_00;
    }
code_r0x00536bd4:
    *(byte *)puVar4 = (byte)uVar8;
    *(byte *)((long)puVar4 + 1) = (byte)uVar5;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1 = (ulong *)*param_1;
    }
    _memcpy((byte *)((long)puVar4 + 2),param_1,uVar5);
    param_5 = (ulong *)((byte *)((long)puVar4 + 2) + uVar5);
    break;
  case 0xc:
    func_0x0053a2b0();
    func_0x0053ac14();
    puVar7 = param_1;
    puVar4 = param_6;
code_r0x00536f28:
    func_0x0053a844();
code_r0x00536f34:
    func_0x0053a650(puVar4,puVar7,unaff_x30);
    param_6 = puVar7;
LAB_00487cc4:
    while( true ) {
      if ((uint)puVar4 < 0x80) break;
      *(byte *)param_6 = (byte)puVar4 | 0x80;
      puVar4 = (ulong *)(ulong)((uint)puVar4 >> 7);
      param_6 = (ulong *)((long)param_6 + 1);
    }
    *(byte *)param_6 = (byte)puVar4;
    return (ulong *)((long)param_6 + 1);
  case 0x10:
    func_0x0053a2b0();
    func_0x0053ac14();
    func_0x0053a844();
    puVar4 = (ulong *)(ulong)(uint)(iVar13 << 1 ^ iVar13 >> 0x1f);
    puVar7 = param_1;
    goto code_r0x00536f34;
  case 0x11:
    func_0x0053a2b0();
    uVar5 = *param_1;
    func_0x0053a844();
    uVar5 = uVar5 << 1 ^ (long)uVar5 >> 0x3f;
code_r0x00536de8:
    func_0x0053a650(uVar5,puVar4,unaff_x30);
    param_1 = puVar4;
LAB_00487cf8:
    while( true ) {
      if (uVar5 < 0x80) break;
      *(byte *)param_1 = (byte)uVar5 | 0x80;
      uVar5 = uVar5 >> 7;
      param_1 = (ulong *)((long)param_1 + 1);
    }
    *(byte *)param_1 = (byte)uVar5;
    return (ulong *)((long)param_1 + 1);
  }
LAB_0053694c:
  func_0x0053a650(param_5,unaff_x30);
  return param_5;
}



/* Entry: 00537210; end: 00537233;  */

void FUN_00537210(void)

{
  FUN_00538078();
  return;
}



/* Entry: 00537234; end: 005372c3;  */

undefined8 FUN_00537234(long param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long extraout_x8_00;
  ulong uVar1;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  int unaff_w20;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = (undefined1 *)&uStack_40;
  uStack_40 = 0;
  if ((long)*(short *)(param_1 + 10) < 0) {
    func_0x0053a750();
    uStack_30 = 0;
    uVar1 = extraout_x8;
    puStack_38 = (undefined1 *)extraout_x9;
    puStack_28 = (undefined1 *)&uStack_40;
    while (puStack_38 != (undefined1 *)unaff_x19 || (int)uVar1 != unaff_w20) {
      func_0x0053a9f0();
      FUN_00538da8(&puStack_28,param_2,extraout_x8_00 + 0x18);
      func_0x0053a6e0();
      uVar1 = uStack_30 & 0xffffffff;
    }
  }
  else {
    for (lVar2 = (long)*(short *)(param_1 + 10) << 5; lVar2 != 0; lVar2 = lVar2 + -0x20) {
      func_0x0053ac00();
      FUN_00538da8();
    }
  }
  return uStack_40;
}



/* Entry: 005372c4; end: 00537823;  */

ulong FUN_005372c4(uint *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
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
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  ulong extraout_x8_17;
  long extraout_x8_18;
  ulong extraout_x8_19;
  long extraout_x8_20;
  ulong extraout_x8_21;
  long extraout_x8_22;
  ulong extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  int extraout_w9;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  uint *puVar4;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  uint uVar5;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  undefined8 extraout_x10_03;
  undefined8 extraout_x10_04;
  undefined8 extraout_x10_05;
  undefined8 extraout_x10_06;
  undefined8 extraout_x10_07;
  undefined8 extraout_x10_08;
  undefined8 extraout_x10_09;
  undefined8 uVar6;
  undefined8 extraout_x10_10;
  ulong extraout_x11;
  long extraout_x11_00;
  ulong extraout_x11_01;
  long extraout_x11_02;
  ulong extraout_x11_03;
  long extraout_x11_04;
  ulong extraout_x11_05;
  long extraout_x11_06;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong unaff_x20;
  ulong unaff_x21;
  long lVar7;
  
  func_0x0053abec();
  if (*(char *)((long)param_1 + 9) == '\x01') {
    if (*(char *)((long)param_1 + 0xb) == '\x01') {
      switch((byte)param_1[2]) {
      case 1:
      case 6:
      case 0x10:
        unaff_x21 = (ulong)**(uint **)param_1 << 3;
        break;
      case 2:
      case 7:
      case 0xf:
        unaff_x21 = (ulong)**(uint **)param_1 << 2;
        break;
      case 3:
        func_0x0053a42c();
        lVar1 = (extraout_x11_03 & 0xffffffff) << 3;
        lVar7 = extraout_x8_06;
        while (lVar1 != lVar7) {
          func_0x0053a594();
          lVar1 = extraout_x11_04;
          lVar7 = extraout_x8_07 + 8;
        }
        break;
      case 4:
        func_0x0053a42c();
        lVar1 = (extraout_x11_05 & 0xffffffff) << 3;
        lVar7 = extraout_x8_08;
        while (lVar1 != lVar7) {
          func_0x0053a594();
          lVar1 = extraout_x11_06;
          lVar7 = extraout_x8_09 + 8;
        }
        break;
      case 5:
        func_0x0053a42c();
        lVar1 = (extraout_x11_01 & 0xffffffff) << 2;
        lVar7 = extraout_x8_04;
        while (lVar1 != lVar7) {
          func_0x0053a594();
          lVar1 = extraout_x11_02;
          lVar7 = extraout_x8_05 + 4;
        }
        break;
      case 8:
        unaff_x21 = (ulong)**(uint **)param_1;
        break;
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        func_0x0053a54c();
        FUN_0077670c();
        func_0x0053a91c();
        func_0x0053a53c();
        return (ulong)((int)LZCOUNT((long)register0x00000008 << 1 ^ (long)register0x00000008 >> 0x3f
                                   ) * -9 + 0x280U >> 6);
      case 0xd:
        func_0x0053a8a0();
        lVar7 = extraout_x8_02;
        lVar1 = extraout_x10;
        while (lVar1 != lVar7) {
          func_0x0053a580();
          unaff_x21 = unaff_x21 + extraout_x12;
          lVar1 = extraout_x10_00;
          lVar7 = extraout_x8_03 + 4;
        }
        break;
      case 0xe:
        func_0x0053a42c();
        lVar1 = (extraout_x11 & 0xffffffff) << 2;
        lVar7 = extraout_x8;
        while (lVar1 != lVar7) {
          func_0x0053a594();
          lVar1 = extraout_x11_00;
          lVar7 = extraout_x8_00 + 4;
        }
        break;
      case 0x11:
        func_0x0053a8a0();
        lVar7 = extraout_x8_10;
        lVar1 = extraout_x10_01;
        while (lVar1 != lVar7) {
          func_0x0053a580();
          unaff_x21 = unaff_x21 + extraout_x12_00;
          lVar1 = extraout_x10_02;
          lVar7 = extraout_x8_11 + 4;
        }
        break;
      case 0x12:
        unaff_x21 = 0;
        for (lVar7 = 0; lVar7 < **(int **)param_1; lVar7 = lVar7 + 1) {
          lVar1 = *(long *)(*(long *)(*(int **)param_1 + 2) + lVar7 * 8);
          FUN_00537824();
          unaff_x21 = lVar1 + unaff_x21;
        }
        break;
      default:
        param_1[3] = 0;
        return 0;
      }
      param_1[3] = (uint)unaff_x21;
      if (unaff_x21 != 0) {
        func_0x0053a764(LZCOUNT((uint)unaff_x21));
        return unaff_x21 + extraout_x8_01 +
               (ulong)((uint)(extraout_w9 + (int)LZCOUNT(param_2 << 3 | 2) * -9) >> 6);
      }
    }
    else {
      uVar5 = (uint)(byte)param_1[2];
      if (uVar5 - 1 < 0x12) {
        uVar3 = (ulong)((int)LZCOUNT(param_2 << 3) * -9 + 0x160U >> 6) << (uVar5 == 10);
        switch(uVar5) {
        default:
          uVar3 = uVar3 + 8;
          break;
        case 2:
        case 7:
        case 0xf:
          uVar3 = uVar3 + 4;
          break;
        case 3:
          func_0x0053a410();
          lVar1 = (extraout_x8_21 & 0xffffffff) << 3;
          lVar7 = extraout_x9_07;
          while (lVar1 != lVar7) {
            func_0x0053a5a8();
            lVar1 = extraout_x8_22;
            lVar7 = extraout_x9_08 + 8;
          }
          return unaff_x20;
        case 4:
          func_0x0053a410();
          lVar1 = (extraout_x8_23 & 0xffffffff) << 3;
          lVar7 = extraout_x9_09;
          while (lVar1 != lVar7) {
            func_0x0053a5a8();
            lVar1 = extraout_x8_24;
            lVar7 = extraout_x9_10 + 8;
          }
          return unaff_x20;
        case 5:
          func_0x0053a410();
          lVar1 = (extraout_x8_19 & 0xffffffff) << 2;
          lVar7 = extraout_x9_05;
          while (lVar1 != lVar7) {
            func_0x0053a5a8();
            lVar1 = extraout_x8_20;
            lVar7 = extraout_x9_06 + 4;
          }
          return unaff_x20;
        case 8:
          return (ulong)**(uint **)param_1 + (ulong)**(uint **)param_1 * (uVar3 & 0xffffffff);
        case 9:
          func_0x0053a500();
          uVar6 = extraout_x10_09;
          while ((long)unaff_x21 < (long)(int)uVar6) {
            func_0x0053a448();
            FUN_0048910c();
            unaff_x20 = (long)param_1 + unaff_x20;
            func_0x0053a56c();
            uVar6 = extraout_x10_10;
          }
          return unaff_x20;
        case 10:
          func_0x0053a500();
          uVar6 = extraout_x10_03;
          while ((long)unaff_x21 < (long)(int)uVar6) {
            func_0x0053a448();
            func_0x0053a778();
            unaff_x20 = (long)param_1 + unaff_x20;
            func_0x0053a56c();
            uVar6 = extraout_x10_04;
          }
          return unaff_x20;
        case 0xb:
          func_0x0053a500();
          uVar6 = extraout_x10_05;
          while ((long)unaff_x21 < (long)(int)uVar6) {
            func_0x0053a448();
            func_0x0053a778();
            unaff_x20 = (long)param_1 + ((int)LZCOUNT((int)param_1) * -9 + 0x160U >> 6) + unaff_x20;
            func_0x0053a56c();
            uVar6 = extraout_x10_06;
          }
          return unaff_x20;
        case 0xc:
          func_0x0053a500();
          uVar6 = extraout_x10_07;
          while ((long)unaff_x21 < (long)(int)uVar6) {
            func_0x0053a448();
            func_0x00487c3c();
            unaff_x20 = (long)param_1 + unaff_x20;
            func_0x0053a56c();
            uVar6 = extraout_x10_08;
          }
          return unaff_x20;
        case 0xd:
          func_0x0053a880();
          lVar1 = extraout_x8_14;
          lVar7 = extraout_x9_01;
          while (lVar1 != lVar7) {
            func_0x0053a580();
            unaff_x20 = unaff_x20 + extraout_x12_02;
            lVar1 = extraout_x8_15;
            lVar7 = extraout_x9_02 + 4;
          }
          return unaff_x20;
        case 0xe:
          func_0x0053a410();
          lVar1 = (extraout_x8_17 & 0xffffffff) << 2;
          lVar7 = extraout_x9_03;
          while (lVar1 != lVar7) {
            func_0x0053a5a8();
            lVar1 = extraout_x8_18;
            lVar7 = extraout_x9_04 + 4;
          }
          return unaff_x20;
        case 0x11:
          func_0x0053a880();
          lVar1 = extraout_x8_12;
          lVar7 = extraout_x9;
          while (lVar1 != lVar7) {
            func_0x0053a580();
            unaff_x20 = unaff_x20 + extraout_x12_01;
            lVar1 = extraout_x8_13;
            lVar7 = extraout_x9_00 + 4;
          }
          return unaff_x20;
        case 0x12:
          puVar4 = *(uint **)param_1;
          uVar5 = *puVar4;
          uVar3 = (uVar3 & 0xffffffff) * (ulong)uVar5;
          for (lVar7 = 0; lVar7 < (int)uVar5; lVar7 = lVar7 + 1) {
            lVar1 = *(long *)(*(long *)(puVar4 + 2) + lVar7 * 8);
            FUN_00537824(lVar1);
            uVar3 = lVar1 + uVar3;
            puVar4 = *(uint **)param_1;
            uVar5 = *puVar4;
          }
          return uVar3;
        }
        return (uVar3 & 0xffffffff) * (ulong)**(uint **)param_1;
      }
    }
    return 0;
  }
  if ((*(byte *)((long)param_1 + 10) & 1) != 0) {
    return 0;
  }
  uVar3 = (ulong)((int)LZCOUNT(param_2 << 3) * -9 + 0x160U >> 6) << ((char)param_1[2] == '\n');
  switch((char)param_1[2]) {
  case '\x01':
  case '\x06':
  case '\x10':
    uVar3 = uVar3 + 8;
    break;
  case '\x02':
  case '\a':
  case '\x0f':
    uVar3 = uVar3 + 4;
    break;
  case '\x03':
  case '\x04':
    lVar7 = *(long *)param_1;
    goto code_r0x00537410;
  case '\x05':
  case '\x0e':
    lVar7 = (long)(int)*param_1;
code_r0x00537410:
    uVar3 = ((int)LZCOUNT(lVar7) * -9 + 0x280U >> 6) + uVar3;
    break;
  case '\b':
    uVar3 = uVar3 + 1;
    break;
  case '\t':
    lVar7 = *(long *)param_1;
    FUN_0048910c(lVar7);
    goto code_r0x005376fc;
  case '\n':
    lVar7 = *(long *)param_1;
    func_0x0053a778(lVar7);
    goto code_r0x005376fc;
  case '\v':
    plVar2 = *(long **)param_1;
    lVar7 = 0x28;
    if ((*(byte *)((long)param_1 + 10) & 0x10) != 0) {
      lVar7 = 0x68;
    }
    (**(code **)(*plVar2 + lVar7))();
    func_0x0053a764(LZCOUNT((int)plVar2));
    uVar3 = (long)plVar2 + extraout_x8_25 + uVar3;
    break;
  case '\f':
    lVar7 = *(long *)param_1;
    func_0x00487c3c(lVar7);
    goto code_r0x005376fc;
  case '\r':
    uVar5 = *param_1;
    goto code_r0x00537694;
  case '\x11':
    uVar5 = *param_1 << 1 ^ (int)*param_1 >> 0x1f;
code_r0x00537694:
    func_0x0053a764(LZCOUNT(uVar5));
    uVar3 = uVar3 + extraout_x8_16;
    break;
  case '\x12':
    lVar7 = *(long *)param_1;
    FUN_00537824(lVar7);
code_r0x005376fc:
    uVar3 = lVar7 + uVar3;
  }
  return uVar3;
}



/* Entry: 00537824; end: 00537843;  */

uint FUN_00537824(long param_1)

{
  return (int)LZCOUNT(param_1 << 1 ^ param_1 >> 0x3f) * -9 + 0x280U >> 6;
}



/* Entry: 00537844; end: 005378d3;  */

void FUN_00537844(void)

{
  func_0x0053a2bc();
  func_0x0053a2cc();
  return;
}



/* Entry: 005378d4; end: 0053790f;  */

void FUN_005378d4(void)

{
  FUN_00538e98();
  return;
}



/* Entry: 00537910; end: 005379c7;  */

undefined8 FUN_00537910(undefined8 param_1)

{
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_00539d00(&uStack_40);
  FUN_00539a34(auStack_58,param_1,uStack_40,uStack_38,uStack_30,uStack_28);
  return auStack_58[0];
}



/* Entry: 005379c8; end: 00537a3b;  */

undefined8 FUN_005379c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_138 [264];
  
  FUN_005542d4(auStack_138,param_3);
  FUN_00554790(auStack_138,param_1);
  FUN_00554338(auStack_138);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(auStack_138,param_2);
  FUN_00554368(auStack_138);
  func_0x0053ab6c();
  return param_2;
}



/* Entry: 00537a3c; end: 00537a7b;  */

void FUN_00537a3c(void)

{
  func_0x0053a2bc();
  func_0x0053a2cc();
  return;
}



/* Entry: 00537a7c; end: 00537a9b;  */

void FUN_00537a7c(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_00554988(param_1,&uStack_14);
  return;
}



/* Entry: 00537a9c; end: 00537be7;  */

void FUN_00537a9c(void)

{
  func_0x0053a2bc();
  func_0x0053a2cc();
  return;
}



/* Entry: 00537be8; end: 00537cb7;  */

void FUN_00537be8(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar1 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  lVar8 = param_1[2];
  param_1[2] = param_2;
  FUN_00537cb8();
  lVar10 = param_1[1];
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      puVar4 = puVar7;
      func_0x0053796c(puVar7,puVar7 + 1);
      plVar3 = param_1;
      func_0x00553d3c(param_1,puVar4);
      bVar2 = (byte)puVar4 & 0x7f;
      uVar5 = param_1[2];
      lVar6 = *param_1;
      *(byte *)(lVar6 + (long)plVar3) = bVar2;
      *(byte *)(lVar6 + ((long)plVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      puVar4 = (undefined8 *)(lVar10 + (long)plVar3 * 0x30);
      uVar14 = puVar7[3];
      uVar13 = puVar7[2];
      uVar12 = puVar7[5];
      uVar11 = puVar7[4];
      uVar15 = *puVar7;
      puVar4[1] = puVar7[1];
      *puVar4 = uVar15;
      puVar4[3] = uVar14;
      puVar4[2] = uVar13;
      puVar4[5] = uVar12;
      puVar4[4] = uVar11;
    }
    puVar7 = puVar7 + 6;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 00537cb8; end: 00537d07;  */

void FUN_00537cb8(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uVar2 = param_1[2] + 0x17U & 0xfffffffffffffff8;
  puVar1 = &uStack_21;
  FUN_00537d08(puVar1,uVar2 + param_1[2] * 0x30);
  *param_1 = (long)(puVar1 + 8);
  param_1[1] = (long)(puVar1 + uVar2);
  FUN_00537d24(param_1,0x30);
  return;
}



/* Entry: 00537d08; end: 00537d23;  */

void FUN_00537d08(undefined8 param_1,long param_2)

{
  func_0x0053abd8(param_2 + 7);
  return;
}



/* Entry: 00537d24; end: 00537d6b;  */

void FUN_00537d24(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  lVar2 = *param_1;
  _memset(lVar2,0x80,lVar3 + 8);
  *(undefined1 *)(lVar2 + lVar3) = 0xff;
  uVar1 = param_1[2];
  lVar2 = 6;
  if (uVar1 != 7) {
    lVar2 = uVar1 - (uVar1 >> 3);
  }
  *(long *)(*param_1 + -8) = lVar2 - param_1[3];
  return;
}



/* Entry: 00537d6c; end: 00537d87;  */

void FUN_00537d6c(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 << 3);
    return;
  }
  FUN_0040cee8();
  uVar2 = param_1[2];
  lVar1 = 6;
  if (uVar2 != 7) {
    lVar1 = uVar2 - (uVar2 >> 3);
  }
  *(long *)(*param_1 + -8) = lVar1 - param_1[3];
  return;
}



/* Entry: 00537d88; end: 00537dd7;  */

void FUN_00537d88(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_1[2];
  lVar1 = 6;
  if (uVar2 != 7) {
    lVar1 = uVar2 - (uVar2 >> 3);
  }
  *(long *)(*param_1 + -8) = lVar1 - param_1[3];
  return;
}



/* Entry: 00537dd8; end: 00537e03;  */

undefined8 * FUN_00537dd8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  _strlen();
  param_1[1] = param_2;
  return param_1;
}



/* Entry: 00537e04; end: 00537e27;  */

undefined8 FUN_00537e04(undefined8 param_1)

{
  FUN_00537e28();
  return param_1;
}



/* Entry: 00537e28; end: 00537e5f;  */

void FUN_00537e28(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    FUN_00537e60(*param_1);
  }
  *param_1 = &PTR_LOOP_00a01140;
  param_1[1] = &PTR_LOOP_00a01140;
  param_1[2] = 0;
  return;
}



/* Entry: 00537e60; end: 00537f53;  */

void FUN_00537e60(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    if (*(char *)((long)param_1 + 10) != '\0') {
      puVar4 = (undefined8 *)*param_1;
      do {
        func_0x00537fb4();
      } while (*(char *)((long)param_1 + 0xb) == '\0');
      uVar5 = (ulong)*(byte *)(param_1 + 1);
      puVar3 = (undefined8 *)*param_1;
      do {
        func_0x0053a954();
        param_1 = (undefined8 *)param_1[uVar5];
        cVar2 = *(char *)((long)param_1 + 0xb);
        if (cVar2 == '\0') {
          while (cVar2 == '\0') {
            func_0x00537fb4();
            cVar2 = *(char *)((long)param_1 + 0xb);
          }
          uVar5 = (ulong)*(byte *)(param_1 + 1);
          puVar3 = (undefined8 *)*param_1;
        }
        FUN_00537f54(cVar2);
        __ZdlPv();
        if (*(byte *)((long)puVar3 + 10) <= uVar5) {
          do {
            param_1 = puVar3;
            bVar1 = *(byte *)(param_1 + 1);
            uVar5 = (ulong)bVar1;
            puVar3 = (undefined8 *)*param_1;
            func_0x00537f88();
            __ZdlPv();
            if (puVar3 == puVar4) {
              return;
            }
          } while (*(byte *)((long)puVar3 + 10) <= bVar1);
        }
        uVar5 = uVar5 + 1;
      } while( true );
    }
    func_0x00537f88();
  }
  else {
    FUN_00537f54();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00537f54; end: 00537fcb;  */

void FUN_00537f54(undefined8 param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_38 = 0;
  uStack_40 = 1;
  uStack_30 = 4;
  uStack_20 = 0;
  uStack_28 = param_1;
  FUN_00537fec(&uStack_40);
  return;
}



/* Entry: 00537fcc; end: 00537feb;  */

ulong FUN_00537fcc(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + 7U & 0xfffffffffffffff8;
}



/* Entry: 00537fec; end: 00538077;  */

long FUN_00537fec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00538010();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 00538078; end: 00538107;  */

void FUN_00538078(int *param_1,long param_2,int *param_3)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  uVar2 = param_2 - (long)param_1 >> 5;
  while (piVar3 = param_1, uVar2 != 0) {
    uVar4 = uVar2 >> 1;
    piVar1 = piVar3 + uVar4 * 8;
    uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    param_1 = piVar1 + 8;
    if (*param_3 <= *piVar1) {
      uVar2 = uVar4;
      param_1 = piVar3;
    }
  }
  return;
}



/* Entry: 00538108; end: 0053814b;  */

ulong * FUN_00538108(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_28;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
  }
  puVar1 = &uStack_28;
  uStack_28 = uVar2;
  FUN_0053814c();
  *param_1 = (ulong)puVar1 | 1;
  *puVar1 = uVar2;
  return puVar1 + 1;
}



/* Entry: 0053814c; end: 0053818b;  */

void FUN_0053814c(undefined8 *param_1)

{
  segment_command *psVar1;
  
  psVar1 = (segment_command *)*param_1;
  if (psVar1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    FUN_00550e54(psVar1,0x20,8,FUN_0053818c);
  }
  psVar1->segname[0] = '\0';
  psVar1->segname[1] = '\0';
  psVar1->segname[2] = '\0';
  psVar1->segname[3] = '\0';
  psVar1->segname[4] = '\0';
  psVar1->segname[5] = '\0';
  psVar1->segname[6] = '\0';
  psVar1->segname[7] = '\0';
  psVar1->cmd = 0;
  psVar1->cmdsize = 0;
  psVar1->vmaddr = 0;
  psVar1->segname[8] = '\0';
  psVar1->segname[9] = '\0';
  psVar1->segname[10] = '\0';
  psVar1->segname[0xb] = '\0';
  psVar1->segname[0xc] = '\0';
  psVar1->segname[0xd] = '\0';
  psVar1->segname[0xe] = '\0';
  psVar1->segname[0xf] = '\0';
  return;
}



/* Entry: 0053818c; end: 00538193;  */

void FUN_0053818c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1 + 8);
  return;
}



/* Entry: 00538194; end: 00538283;  */

void FUN_00538194(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x0053a674();
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x0053a464();
    *param_1 = 0;
    param_1[1] = lVar1;
  }
  return;
}



/* Entry: 00538284; end: 00538287;  */

void FUN_00538284(long param_1,long param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  int extraout_w8;
  int extraout_w8_00;
  int iVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long lVar12;
  
  lVar11 = param_2;
  func_0x0053a97c();
  lVar12 = *(long *)(param_1 + 8);
  if (extraout_w8 == 0) {
    cVar3 = param_3 + -2 < 0;
    iVar9 = 0;
    if (param_3 < 2) goto LAB_005382d4;
  }
  else {
    lVar12 = *(long *)(lVar12 + -8);
    cVar2 = SBORROW4(param_3,2);
    cVar3 = param_3 + -2 < 0;
    bVar4 = param_3 == 2;
    if (param_3 < 2) {
LAB_005382d4:
      cVar2 = SBORROW4(param_3,2);
      goto LAB_005382ec;
    }
    func_0x0053aa40();
    iVar9 = extraout_w8_00;
    if (!bVar4 && cVar3 == cVar2) goto LAB_005382ec;
  }
  iVar9 = iVar9 * 2 + 2;
  cVar2 = SBORROW4(iVar9,param_3);
  cVar3 = iVar9 - param_3 < 0;
LAB_005382ec:
  if (lVar12 == 0) {
    func_0x0053abbc();
    func_0x0053aa30(lVar11 - 8U >> 2);
  }
  else {
    func_0x0053a3f0();
    if (param_1 != 0) {
      func_0x0053ac34();
      func_0x0053a3a4();
      func_0x0053a4a0();
      func_0x0053a67c();
      plVar7 = (long *)(*(long *)(param_1 + 8) + -8);
      if (*plVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar7);
        return;
      }
      uVar8 = (long)*(int *)(param_1 + 4) * 4 + 8;
      ppuVar5 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar7);
      if (ppuVar5[1] == (undefined *)*extraout_x8) {
        puVar6 = ppuVar5[2];
        uVar10 = 0x3b - LZCOUNT(uVar8);
        bVar1 = puVar6[0x50];
        if (uVar10 < bVar1) {
          lVar11 = *(long *)(puVar6 + 0x58);
          *plVar7 = *(long *)(lVar11 + uVar10 * 8);
          *(long **)(lVar11 + uVar10 * 8) = plVar7;
        }
        else {
          if (bVar1 == 0) {
            lVar11 = 0;
          }
          else {
            _memmove(plVar7,*(undefined8 *)(puVar6 + 0x58),(ulong)bVar1 << 3);
            lVar11 = (ulong)(byte)puVar6[0x50] << 3;
          }
          uVar10 = uVar8 >> 3;
          if (0 < (long)((uVar8 & 0xfffffffffffffff8) - lVar11)) {
            _bzero((long)plVar7 + lVar11);
          }
          *(long **)(puVar6 + 0x58) = plVar7;
          if (0x3f < uVar10) {
            uVar10 = 0x40;
          }
          puVar6[0x50] = (char)uVar10;
        }
        return;
      }
      return;
    }
    func_0x0053a5f4();
  }
  func_0x0053aa20();
  if (cVar3 == cVar2) {
    if (0 < (int)param_2) {
      func_0x0053ab44();
    }
    FUN_0053836c();
  }
  func_0x0053aa10();
  return;
}



/* Entry: 00538288; end: 0053836b;  */

void FUN_00538288(long param_1,long param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  int extraout_w8;
  int extraout_w8_00;
  int iVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long lVar12;
  
  lVar11 = param_2;
  func_0x0053a97c();
  lVar12 = *(long *)(param_1 + 8);
  if (extraout_w8 == 0) {
    cVar3 = param_3 + -2 < 0;
    iVar9 = 0;
    if (param_3 < 2) goto LAB_005382d4;
  }
  else {
    lVar12 = *(long *)(lVar12 + -8);
    cVar2 = SBORROW4(param_3,2);
    cVar3 = param_3 + -2 < 0;
    bVar4 = param_3 == 2;
    if (param_3 < 2) {
LAB_005382d4:
      cVar2 = SBORROW4(param_3,2);
      goto LAB_005382ec;
    }
    func_0x0053aa40();
    iVar9 = extraout_w8_00;
    if (!bVar4 && cVar3 == cVar2) goto LAB_005382ec;
  }
  iVar9 = iVar9 * 2 + 2;
  cVar2 = SBORROW4(iVar9,param_3);
  cVar3 = iVar9 - param_3 < 0;
LAB_005382ec:
  if (lVar12 == 0) {
    func_0x0053abbc();
    func_0x0053aa30(lVar11 - 8U >> 2);
  }
  else {
    func_0x0053a3f0();
    if (param_1 != 0) {
      func_0x0053ac34();
      func_0x0053a3a4();
      func_0x0053a4a0();
      func_0x0053a67c();
      plVar7 = (long *)(*(long *)(param_1 + 8) + -8);
      if (*plVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar7);
        return;
      }
      uVar8 = (long)*(int *)(param_1 + 4) * 4 + 8;
      ppuVar5 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar7);
      if (ppuVar5[1] == (undefined *)*extraout_x8) {
        puVar6 = ppuVar5[2];
        uVar10 = 0x3b - LZCOUNT(uVar8);
        bVar1 = puVar6[0x50];
        if (uVar10 < bVar1) {
          lVar11 = *(long *)(puVar6 + 0x58);
          *plVar7 = *(long *)(lVar11 + uVar10 * 8);
          *(long **)(lVar11 + uVar10 * 8) = plVar7;
        }
        else {
          if (bVar1 == 0) {
            lVar11 = 0;
          }
          else {
            _memmove(plVar7,*(undefined8 *)(puVar6 + 0x58),(ulong)bVar1 << 3);
            lVar11 = (ulong)(byte)puVar6[0x50] << 3;
          }
          uVar10 = uVar8 >> 3;
          if (0 < (long)((uVar8 & 0xfffffffffffffff8) - lVar11)) {
            _bzero((long)plVar7 + lVar11);
          }
          *(long **)(puVar6 + 0x58) = plVar7;
          if (0x3f < uVar10) {
            uVar10 = 0x40;
          }
          puVar6[0x50] = (char)uVar10;
        }
        return;
      }
      return;
    }
    func_0x0053a5f4();
  }
  func_0x0053aa20();
  if (cVar3 == cVar2) {
    if (0 < (int)param_2) {
      func_0x0053ab44();
    }
    FUN_0053836c();
  }
  func_0x0053aa10();
  return;
}



/* Entry: 0053836c; end: 0053838b;  */

void FUN_0053836c(long param_1)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  
  plVar4 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar4);
    return;
  }
  uVar5 = (long)*(int *)(param_1 + 4) * 4 + 8;
  ppuVar2 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar4);
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar6 = 0x3b - LZCOUNT(uVar5);
    bVar1 = puVar3[0x50];
    if (uVar6 < bVar1) {
      lVar7 = *(long *)(puVar3 + 0x58);
      *plVar4 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar4;
    }
    else {
      if (bVar1 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar4,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar7 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar6 = uVar5 >> 3;
      if (0 < (long)((uVar5 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar4 + lVar7);
      }
      *(long **)(puVar3 + 0x58) = plVar4;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar3[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 0053838c; end: 005383bb;  */

void FUN_0053838c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x0053a674();
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x0053a464();
    *param_1 = 0;
    param_1[1] = lVar1;
  }
  return;
}



/* Entry: 005383bc; end: 005383bf;  */

void FUN_005383bc(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  int extraout_w8;
  int extraout_w8_00;
  int iVar10;
  ulong uVar11;
  undefined8 *extraout_x8;
  long lVar12;
  long lVar13;
  
  lVar12 = param_2;
  func_0x0053a97c();
  lVar13 = *(long *)(param_1 + 8);
  if (extraout_w8 == 0) {
    cVar4 = param_3 + -1 < 0;
    iVar10 = 0;
    if (param_3 < 1) goto LAB_00538424;
  }
  else {
    lVar13 = *(long *)(lVar13 + -8);
    cVar3 = SBORROW4(param_3,1);
    cVar4 = param_3 + -1 < 0;
    bVar5 = param_3 == 1;
    if (param_3 < 1) {
LAB_00538424:
      cVar3 = SBORROW4(param_3,1);
      goto LAB_00538428;
    }
    func_0x0053aa40();
    iVar10 = extraout_w8_00;
    if (!bVar5 && cVar4 == cVar3) goto LAB_00538428;
  }
  uVar1 = iVar10 << 1 | 1;
  cVar3 = SBORROW4(uVar1,param_3);
  cVar4 = (int)(uVar1 - param_3) < 0;
LAB_00538428:
  if (lVar13 == 0) {
    func_0x0053abbc();
    func_0x0053aa30(lVar12 - 8U >> 3);
  }
  else {
    func_0x0053a3f0();
    if (param_1 != 0) {
      func_0x0053ac34();
      func_0x0053a3a4();
      func_0x0053a4a0();
      func_0x0053a67c();
      plVar8 = (long *)(*(long *)(param_1 + 8) + -8);
      if (*plVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar8);
        return;
      }
      uVar9 = (long)*(int *)(param_1 + 4) * 8 + 8;
      ppuVar6 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar8);
      if (ppuVar6[1] == (undefined *)*extraout_x8) {
        puVar7 = ppuVar6[2];
        uVar11 = 0x3b - LZCOUNT(uVar9);
        bVar2 = puVar7[0x50];
        if (uVar11 < bVar2) {
          lVar12 = *(long *)(puVar7 + 0x58);
          *plVar8 = *(long *)(lVar12 + uVar11 * 8);
          *(long **)(lVar12 + uVar11 * 8) = plVar8;
        }
        else {
          if (bVar2 == 0) {
            lVar12 = 0;
          }
          else {
            _memmove(plVar8,*(undefined8 *)(puVar7 + 0x58),(ulong)bVar2 << 3);
            lVar12 = (ulong)(byte)puVar7[0x50] << 3;
          }
          uVar11 = uVar9 >> 3;
          if (0 < (long)((uVar9 & 0xfffffffffffffff8) - lVar12)) {
            _bzero((long)plVar8 + lVar12);
          }
          *(long **)(puVar7 + 0x58) = plVar8;
          if (0x3f < uVar11) {
            uVar11 = 0x40;
          }
          puVar7[0x50] = (char)uVar11;
        }
        return;
      }
      return;
    }
    func_0x0053a5f4();
  }
  func_0x0053aa20();
  if (cVar4 == cVar3) {
    if (0 < (int)param_2) {
      func_0x0053ab44();
    }
    FUN_005384a8();
  }
  func_0x0053aa10();
  return;
}



/* Entry: 005383c0; end: 005384a7;  */

void FUN_005383c0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  int extraout_w8;
  int extraout_w8_00;
  int iVar10;
  ulong uVar11;
  undefined8 *extraout_x8;
  long lVar12;
  long lVar13;
  
  lVar12 = param_2;
  func_0x0053a97c();
  lVar13 = *(long *)(param_1 + 8);
  if (extraout_w8 == 0) {
    cVar4 = param_3 + -1 < 0;
    iVar10 = 0;
    if (param_3 < 1) goto LAB_00538424;
  }
  else {
    lVar13 = *(long *)(lVar13 + -8);
    cVar3 = SBORROW4(param_3,1);
    cVar4 = param_3 + -1 < 0;
    bVar5 = param_3 == 1;
    if (param_3 < 1) {
LAB_00538424:
      cVar3 = SBORROW4(param_3,1);
      goto LAB_00538428;
    }
    func_0x0053aa40();
    iVar10 = extraout_w8_00;
    if (!bVar5 && cVar4 == cVar3) goto LAB_00538428;
  }
  uVar1 = iVar10 << 1 | 1;
  cVar3 = SBORROW4(uVar1,param_3);
  cVar4 = (int)(uVar1 - param_3) < 0;
LAB_00538428:
  if (lVar13 == 0) {
    func_0x0053abbc();
    func_0x0053aa30(lVar12 - 8U >> 3);
  }
  else {
    func_0x0053a3f0();
    if (param_1 != 0) {
      func_0x0053ac34();
      func_0x0053a3a4();
      func_0x0053a4a0();
      func_0x0053a67c();
      plVar8 = (long *)(*(long *)(param_1 + 8) + -8);
      if (*plVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar8);
        return;
      }
      uVar9 = (long)*(int *)(param_1 + 4) * 8 + 8;
      ppuVar6 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar8);
      if (ppuVar6[1] == (undefined *)*extraout_x8) {
        puVar7 = ppuVar6[2];
        uVar11 = 0x3b - LZCOUNT(uVar9);
        bVar2 = puVar7[0x50];
        if (uVar11 < bVar2) {
          lVar12 = *(long *)(puVar7 + 0x58);
          *plVar8 = *(long *)(lVar12 + uVar11 * 8);
          *(long **)(lVar12 + uVar11 * 8) = plVar8;
        }
        else {
          if (bVar2 == 0) {
            lVar12 = 0;
          }
          else {
            _memmove(plVar8,*(undefined8 *)(puVar7 + 0x58),(ulong)bVar2 << 3);
            lVar12 = (ulong)(byte)puVar7[0x50] << 3;
          }
          uVar11 = uVar9 >> 3;
          if (0 < (long)((uVar9 & 0xfffffffffffffff8) - lVar12)) {
            _bzero((long)plVar8 + lVar12);
          }
          *(long **)(puVar7 + 0x58) = plVar8;
          if (0x3f < uVar11) {
            uVar11 = 0x40;
          }
          puVar7[0x50] = (char)uVar11;
        }
        return;
      }
      return;
    }
    func_0x0053a5f4();
  }
  func_0x0053aa20();
  if (cVar4 == cVar3) {
    if (0 < (int)param_2) {
      func_0x0053ab44();
    }
    FUN_005384a8();
  }
  func_0x0053aa10();
  return;
}



/* Entry: 005384a8; end: 005384c7;  */

void FUN_005384a8(long param_1)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  
  plVar4 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar4);
    return;
  }
  uVar5 = (long)*(int *)(param_1 + 4) * 8 + 8;
  ppuVar2 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar4);
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar6 = 0x3b - LZCOUNT(uVar5);
    bVar1 = puVar3[0x50];
    if (uVar6 < bVar1) {
      lVar7 = *(long *)(puVar3 + 0x58);
      *plVar4 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar4;
    }
    else {
      if (bVar1 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar4,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar7 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar6 = uVar5 >> 3;
      if (0 < (long)((uVar5 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar4 + lVar7);
      }
      *(long **)(puVar3 + 0x58) = plVar4;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar3[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 005384c8; end: 005384f7;  */

void FUN_005384c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x0053a674();
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x0053a464();
    *param_1 = 0;
    param_1[1] = lVar1;
  }
  return;
}



/* Entry: 005384f8; end: 005384fb;  */

void FUN_005384f8(long param_1,long param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  int extraout_w8;
  int extraout_w8_00;
  int iVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long lVar12;
  
  lVar11 = param_2;
  func_0x0053a97c();
  lVar12 = *(long *)(param_1 + 8);
  if (extraout_w8 == 0) {
    cVar3 = param_3 + -8 < 0;
    iVar9 = 0;
    if (param_3 < 8) goto LAB_00538548;
  }
  else {
    lVar12 = *(long *)(lVar12 + -8);
    cVar2 = SBORROW4(param_3,8);
    cVar3 = param_3 + -8 < 0;
    bVar4 = param_3 == 8;
    if (param_3 < 8) {
LAB_00538548:
      cVar2 = SBORROW4(param_3,8);
      goto LAB_00538560;
    }
    func_0x0053aa40();
    iVar9 = extraout_w8_00;
    if (!bVar4 && cVar3 == cVar2) goto LAB_00538560;
  }
  iVar9 = iVar9 * 2 + 8;
  cVar2 = SBORROW4(iVar9,param_3);
  cVar3 = iVar9 - param_3 < 0;
LAB_00538560:
  if (lVar12 == 0) {
    func_0x0053abbc();
    func_0x0053aa30(lVar11 + -8);
  }
  else {
    func_0x0053a3f0();
    if (param_1 != 0) {
      func_0x0053ac34();
      func_0x0053a3a4();
      func_0x0053a4a0();
      func_0x0053a67c();
      plVar7 = (long *)(*(long *)(param_1 + 8) + -8);
      if (*plVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar7);
        return;
      }
      uVar8 = (long)*(int *)(param_1 + 4) + 8;
      ppuVar5 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar7);
      if (ppuVar5[1] == (undefined *)*extraout_x8) {
        puVar6 = ppuVar5[2];
        uVar10 = 0x3b - LZCOUNT(uVar8);
        bVar1 = puVar6[0x50];
        if (uVar10 < bVar1) {
          lVar11 = *(long *)(puVar6 + 0x58);
          *plVar7 = *(long *)(lVar11 + uVar10 * 8);
          *(long **)(lVar11 + uVar10 * 8) = plVar7;
        }
        else {
          if (bVar1 == 0) {
            lVar11 = 0;
          }
          else {
            _memmove(plVar7,*(undefined8 *)(puVar6 + 0x58),(ulong)bVar1 << 3);
            lVar11 = (ulong)(byte)puVar6[0x50] << 3;
          }
          uVar10 = uVar8 >> 3;
          if (0 < (long)((uVar8 & 0xfffffffffffffff8) - lVar11)) {
            _bzero((long)plVar7 + lVar11);
          }
          *(long **)(puVar6 + 0x58) = plVar7;
          if (0x3f < uVar10) {
            uVar10 = 0x40;
          }
          puVar6[0x50] = (char)uVar10;
        }
        return;
      }
      return;
    }
    func_0x0053a5f4();
  }
  func_0x0053aa20();
  if (cVar3 == cVar2) {
    if (0 < (int)param_2) {
      func_0x0053ab44();
    }
    FUN_005385dc();
  }
  func_0x0053aa10();
  return;
}



/* Entry: 005384fc; end: 005385db;  */

void FUN_005384fc(long param_1,long param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  int extraout_w8;
  int extraout_w8_00;
  int iVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long lVar12;
  
  lVar11 = param_2;
  func_0x0053a97c();
  lVar12 = *(long *)(param_1 + 8);
  if (extraout_w8 == 0) {
    cVar3 = param_3 + -8 < 0;
    iVar9 = 0;
    if (param_3 < 8) goto LAB_00538548;
  }
  else {
    lVar12 = *(long *)(lVar12 + -8);
    cVar2 = SBORROW4(param_3,8);
    cVar3 = param_3 + -8 < 0;
    bVar4 = param_3 == 8;
    if (param_3 < 8) {
LAB_00538548:
      cVar2 = SBORROW4(param_3,8);
      goto LAB_00538560;
    }
    func_0x0053aa40();
    iVar9 = extraout_w8_00;
    if (!bVar4 && cVar3 == cVar2) goto LAB_00538560;
  }
  iVar9 = iVar9 * 2 + 8;
  cVar2 = SBORROW4(iVar9,param_3);
  cVar3 = iVar9 - param_3 < 0;
LAB_00538560:
  if (lVar12 == 0) {
    func_0x0053abbc();
    func_0x0053aa30(lVar11 + -8);
  }
  else {
    func_0x0053a3f0();
    if (param_1 != 0) {
      func_0x0053ac34();
      func_0x0053a3a4();
      func_0x0053a4a0();
      func_0x0053a67c();
      plVar7 = (long *)(*(long *)(param_1 + 8) + -8);
      if (*plVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_0099c620)(plVar7);
        return;
      }
      uVar8 = (long)*(int *)(param_1 + 4) + 8;
      ppuVar5 = &PTR___tlv_bootstrap_00b2c348;
      (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar7);
      if (ppuVar5[1] == (undefined *)*extraout_x8) {
        puVar6 = ppuVar5[2];
        uVar10 = 0x3b - LZCOUNT(uVar8);
        bVar1 = puVar6[0x50];
        if (uVar10 < bVar1) {
          lVar11 = *(long *)(puVar6 + 0x58);
          *plVar7 = *(long *)(lVar11 + uVar10 * 8);
          *(long **)(lVar11 + uVar10 * 8) = plVar7;
        }
        else {
          if (bVar1 == 0) {
            lVar11 = 0;
          }
          else {
            _memmove(plVar7,*(undefined8 *)(puVar6 + 0x58),(ulong)bVar1 << 3);
            lVar11 = (ulong)(byte)puVar6[0x50] << 3;
          }
          uVar10 = uVar8 >> 3;
          if (0 < (long)((uVar8 & 0xfffffffffffffff8) - lVar11)) {
            _bzero((long)plVar7 + lVar11);
          }
          *(long **)(puVar6 + 0x58) = plVar7;
          if (0x3f < uVar10) {
            uVar10 = 0x40;
          }
          puVar6[0x50] = (char)uVar10;
        }
        return;
      }
      return;
    }
    func_0x0053a5f4();
  }
  func_0x0053aa20();
  if (cVar3 == cVar2) {
    if (0 < (int)param_2) {
      func_0x0053ab44();
    }
    FUN_005385dc();
  }
  func_0x0053aa10();
  return;
}



/* Entry: 005385dc; end: 005385f7;  */

void FUN_005385dc(long param_1)

{
  byte bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  
  plVar4 = (long *)(*(long *)(param_1 + 8) + -8);
  if (*plVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar4);
    return;
  }
  uVar5 = (long)*(int *)(param_1 + 4) + 8;
  ppuVar2 = &PTR___tlv_bootstrap_00b2c348;
  (*(code *)PTR___tlv_bootstrap_00b2c348)(*plVar4);
  if (ppuVar2[1] == (undefined *)*extraout_x8) {
    puVar3 = ppuVar2[2];
    uVar6 = 0x3b - LZCOUNT(uVar5);
    bVar1 = puVar3[0x50];
    if (uVar6 < bVar1) {
      lVar7 = *(long *)(puVar3 + 0x58);
      *plVar4 = *(long *)(lVar7 + uVar6 * 8);
      *(long **)(lVar7 + uVar6 * 8) = plVar4;
    }
    else {
      if (bVar1 == 0) {
        lVar7 = 0;
      }
      else {
        _memmove(plVar4,*(undefined8 *)(puVar3 + 0x58),(ulong)bVar1 << 3);
        lVar7 = (ulong)(byte)puVar3[0x50] << 3;
      }
      uVar6 = uVar5 >> 3;
      if (0 < (long)((uVar5 & 0xfffffffffffffff8) - lVar7)) {
        _bzero((long)plVar4 + lVar7);
      }
      *(long **)(puVar3 + 0x58) = plVar4;
      if (0x3f < uVar6) {
        uVar6 = 0x40;
      }
      puVar3[0x50] = (char)uVar6;
    }
    return;
  }
  return;
}



/* Entry: 005385f8; end: 00538667;  */

void FUN_005385f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x0053ab58();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  else {
    func_0x0053ab4c();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = lVar1;
  }
  return;
}



/* Entry: 00538668; end: 005387e7;  */

void FUN_00538668(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00538674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 005387e8; end: 00538887;  */

void FUN_005387e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uStack_28;
  
  plVar1 = (long *)*param_1;
  if (*(char *)((long)plVar1 + 0xb) == '\0') {
    lVar2 = param_1[1];
    func_0x0053803c();
    lVar2 = plVar1[(int)lVar2 + 1U & 0xff];
    while (*param_1 = lVar2, *(char *)(lVar2 + 0xb) == '\0') {
      func_0x00537fb4();
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar5 = param_1[1];
    lVar2 = *param_1;
    uVar3 = *(uint *)(param_1 + 1);
    while (uVar3 == *(byte *)((long)plVar1 + 10)) {
      plVar4 = (long *)*plVar1;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar2;
        uStack_28 = (undefined4)lVar5;
        *(undefined4 *)(param_1 + 1) = uStack_28;
        return;
      }
      uVar3 = (uint)*(byte *)(plVar1 + 1);
      *(uint *)(param_1 + 1) = uVar3;
      *param_1 = (long)plVar4;
      plVar1 = plVar4;
    }
  }
  return;
}



/* Entry: 00538888; end: 00538953;  */

long FUN_00538888(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *param_1;
  if (((uint)uVar2 >> 7 & 1) == 0) {
    *param_2 = uVar2 & 0x7f;
    return (long)param_1 + 1;
  }
  if (((uint)uVar2 >> 0xf & 1) == 0) {
    *param_2 = uVar2 & 0x7f | (uVar2 >> 8 & 0x7f) << 7;
    return (long)param_1 + 2;
  }
  uVar3 = *(ulong *)((long)param_1 + 2);
  uVar4 = (uVar3 ^ 0xffffffffffffffff) & 0x8080808080808080;
  if (uVar4 == 0) {
    lVar1 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar4 >> 7;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
    lVar1 = (long)param_1 + (uVar5 >> 3) + 3;
    uVar4 = uVar2 & 0x7f | (uVar2 >> 8 & 0x7f) << 7 |
            (uVar2 >> 0x10 & 0x7f | (uVar2 >> 0x18 & 0x7f) << 7) << 0xe |
            (uVar2 >> 0x20 & 0x7f | (uVar2 >> 0x28 & 0x7f) << 7) << 0x1c;
    if (((uint)uVar5 >> 5 & 1) != 0) {
      uVar4 = (uVar2 >> 0x30 & 0x7f | (uVar2 >> 0x38 & 0x7f) << 7) << 0x2a |
              (uVar3 >> 0x30 & 0x7f | (uVar3 >> 0x38 & 0x7f) << 7) << 0x38 | uVar4;
    }
    uVar4 = uVar4 & (-0x4000L << (uVar5 - (uVar5 >> 3) & 0x3f) ^ 0xffffffffffffffffU);
  }
  *param_2 = uVar4;
  return lVar1;
}



/* Entry: 00538954; end: 005389eb;  */

ulong FUN_00538954(ulong param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 in_stack_00000008;
  
  func_0x0053abec();
  uVar3 = param_1;
  while ((uVar3 < param_2 && (func_0x0053a370(), uVar3 = param_1, param_1 != 0))) {
    uVar1 = param_3[2];
    (*(code *)param_3[1])(uVar1,in_stack_00000008);
    if ((int)uVar1 == 0) {
      param_1 = (ulong)(uint)param_3[4];
      puVar2 = (ulong *)param_3[3];
      if ((*puVar2 & 1) == 0) {
        FUN_00538108();
      }
      else {
        puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
      }
      func_0x0054b764(param_1,(long)(int)in_stack_00000008,puVar2);
    }
    else {
      param_1 = *param_3;
      FUN_00533cb4(param_1,in_stack_00000008);
    }
  }
  return uVar3;
}



/* Entry: 005389ec; end: 00538a7f;  */

undefined *** FUN_005389ec(int *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined **appuStack_c8 [19];
  
  iVar2 = *param_1;
  iVar1 = *param_2;
  if (iVar2 <= iVar1) {
    return (undefined ***)0x0;
  }
  FUN_004799f4(&ppuStack_138);
  uVar3 = param_3;
  _strlen(param_3);
  FUN_00462690(&ppuStack_138,param_3,uVar3);
  FUN_00462690();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(&ppuStack_138,(long)iVar2);
  FUN_00462690(&ppuStack_138," vs. ",5);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEx(&ppuStack_138,iVar1);
  pppuVar4 = &ppuStack_138;
  FUN_00554368(pppuVar4);
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
  return pppuVar4;
}



/* Entry: 00538a80; end: 00538bab;  */

void FUN_00538a80(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    uVar2 = ((uint)bVar1 + (uint)param_1[1] * 0x80) - 0x80;
    if ((char)param_1[1] < '\0') {
      FUN_0054b830();
      *param_2 = uVar2;
    }
    else {
      *param_2 = uVar2;
    }
  }
  else {
    *param_2 = (uint)bVar1;
  }
  return;
}



/* Entry: 00538bac; end: 00538c4b;  */

void FUN_00538bac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  
  uVar1 = param_3;
  func_0x0053a61c();
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (uVar1 < 0x11) {
    if (param_3 != 0) {
      func_0x0053a7b8(unaff_x20 + 5);
      _memcpy();
    }
    *(undefined4 *)((long)unaff_x20 + 0x1c) = 0;
    lVar2 = (long)(unaff_x20 + 5) + param_3;
    *unaff_x20 = lVar2;
    unaff_x20[1] = lVar2;
    unaff_x20[2] = 0;
    if (unaff_x20[9] == 1) {
      unaff_x20[9] = unaff_x19 - (long)(unaff_x20 + 5);
    }
  }
  else {
    *(undefined4 *)((long)unaff_x20 + 0x1c) = 0x10;
    lVar2 = unaff_x19 + param_3 + -0x10;
    *unaff_x20 = lVar2;
    unaff_x20[1] = lVar2;
    unaff_x20[2] = (long)(unaff_x20 + 5);
    if (unaff_x20[9] == 1) {
      unaff_x20[9] = 2;
    }
  }
  return;
}



/* Entry: 00538c4c; end: 00538c83;  */

void FUN_00538c4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_00538ca4();
  FUN_00538c84(param_1,uVar1,param_2);
  return;
}



/* Entry: 00538c84; end: 00538ca3;  */

undefined1  [16] FUN_00538c84(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    uVar1 = 0;
    param_2 = *(long *)(param_1 + 8);
    param_3 = (ulong)*(byte *)(param_2 + 10);
  }
  else {
    uVar1 = param_3 & 0xffffffff00000000;
  }
  auVar2._8_8_ = uVar1 | param_3 & 0xffffffff;
  auVar2._0_8_ = param_2;
  return auVar2;
}



/* Entry: 00538ca4; end: 00538ccb;  */

void FUN_00538ca4(void)

{
  FUN_00538ccc();
  FUN_00538d28();
  return;
}



/* Entry: 00538ccc; end: 00538d27;  */

undefined1  [16] FUN_00538ccc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  func_0x0053a61c();
  while( true ) {
    uVar2 = *param_1;
    uVar1 = uVar2;
    func_0x00538d5c();
    if (*(char *)(uVar2 + 0xb) != '\0') break;
    uVar2 = uVar1;
    func_0x0053a684();
    param_1 = (ulong *)(uVar2 + (uVar1 & 0xff) * 8);
  }
  auVar3._8_8_ = uVar1 & 0xffffffff;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 00538d28; end: 00538da7;  */

undefined1  [16] FUN_00538d28(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  do {
    if ((uint)uVar1 != (uint)*(byte *)((long)param_1 + 10)) goto LAB_00538d4c;
    uVar1 = (ulong)*(byte *)(param_1 + 1);
    param_1 = (long *)*param_1;
  } while (*(char *)((long)param_1 + 0xb) == '\0');
  param_1 = (long *)0x0;
LAB_00538d4c:
  auVar2._8_8_ = param_2 & 0xffffffff00000000 | uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 00538da8; end: 00538dcb;  */

void FUN_00538da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_005372c4(param_3);
  func_0x0053ac20();
  return;
}



/* Entry: 00538dcc; end: 00538dfb;  */

void FUN_00538dcc(void)

{
  int extraout_w8;
  
  func_0x0053a97c();
  if (0 < extraout_w8) {
    FUN_00538dfc();
  }
  return;
}



/* Entry: 00538dfc; end: 00538e0f;  */

void FUN_00538dfc(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00538e10; end: 00538e3f;  */

void FUN_00538e10(void)

{
  int extraout_w8;
  
  func_0x0053a97c();
  if (0 < extraout_w8) {
    FUN_00538e40();
  }
  return;
}



/* Entry: 00538e40; end: 00538e53;  */

void FUN_00538e40(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00538e54; end: 00538e83;  */

void FUN_00538e54(void)

{
  int extraout_w8;
  
  func_0x0053a97c();
  if (0 < extraout_w8) {
    FUN_00538e84();
  }
  return;
}



/* Entry: 00538e84; end: 00538e97;  */

void FUN_00538e84(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00538e98; end: 00538f13;  */

void FUN_00538e98(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00538ecc();
  FUN_00538c84(param_1,uVar1,param_2 & 0xffffffff);
  return;
}



/* Entry: 00538f14; end: 00538fb3;  */

void FUN_00538f14(undefined8 *param_1,undefined8 *param_2,int *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 uVar7;
  
  if (param_2[2] == 0) {
    uVar1 = 1;
    FUN_00538fb4();
    *param_2 = uVar1;
    param_2[1] = uVar1;
  }
  puVar2 = param_2;
  piVar5 = param_3;
  FUN_00538ccc();
  puVar3 = puVar2;
  piVar6 = piVar5;
  FUN_00538d28();
  uVar4 = SUB84(piVar6,0);
  if ((puVar3 == (undefined8 *)0x0) ||
     (*param_3 < *(int *)((long)puVar3 + (((long)piVar6 << 0x20) >> 0x1b) + 0x10))) {
    FUN_00538fe8(param_2,puVar2,piVar5,param_4);
    uVar4 = SUB84(puVar2,0);
    uVar7 = 1;
    puVar3 = param_2;
  }
  else {
    uVar7 = 0;
  }
  *param_1 = puVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined1 *)(param_1 + 2) = uVar7;
  return;
}



/* Entry: 00538fb4; end: 00538fe7;  */

void FUN_00538fb4(uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  FUN_00537f54();
  FUN_005391a0();
  *(ulong *)uVar1 = uVar1;
  *(undefined2 *)(uVar1 + 8) = 0;
  *(undefined1 *)(uVar1 + 10) = 0;
  *(char *)(uVar1 + 0xb) = (char)param_1;
  return;
}



/* Entry: 00538fe8; end: 0053919f;  */

undefined1  [16]
FUN_00538fe8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  uint uVar7;
  long lVar8;
  ulong extraout_x9;
  ulong uVar9;
  long extraout_x10;
  undefined8 *extraout_x11;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *in_stack_00000000;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  func_0x0053abec();
  in_stack_00000008 = (uint)param_3;
  in_stack_0000000c = (undefined4)((ulong)param_3 >> 0x20);
  bVar10 = *(byte *)((long)param_2 + 0xb);
  puVar4 = param_1;
  in_stack_00000000 = param_2;
  if (bVar10 == 0) {
    FUN_005393d8();
    in_stack_00000008 = in_stack_00000008 + 1;
    bVar10 = *(byte *)((long)in_stack_00000000 + 0xb);
    puVar4 = (undefined8 *)register0x00000008;
  }
  puVar5 = in_stack_00000000;
  uVar7 = 7;
  if (bVar10 != 0) {
    uVar7 = (uint)bVar10;
  }
  if (*(byte *)((long)in_stack_00000000 + 10) == uVar7) {
    if (uVar7 < 7) {
      uVar7 = (uVar7 & 0x7f) << 1;
      if (6 < uVar7) {
        uVar7 = 7;
      }
      puVar4 = (undefined8 *)(ulong)uVar7;
      FUN_00538fb4();
      bVar10 = *(byte *)((long)puVar5 + 10);
      for (lVar8 = 0x10; (ulong)bVar10 * -0x20 + lVar8 != 0x10; lVar8 = lVar8 + 0x20) {
        puVar1 = (undefined8 *)((long)puVar5 + lVar8);
        puVar2 = (undefined8 *)((long)puVar4 + lVar8);
        uVar11 = *puVar1;
        uVar13 = puVar1[3];
        uVar12 = puVar1[2];
        puVar2[1] = puVar1[1];
        *puVar2 = uVar11;
        puVar2[3] = uVar13;
        puVar2[2] = uVar12;
      }
      *(undefined1 *)((long)puVar4 + 10) = *(undefined1 *)((long)puVar5 + 10);
      *(undefined1 *)((long)puVar5 + 10) = 0;
      in_stack_00000000 = puVar4;
      FUN_00537e60();
      *param_1 = puVar4;
      param_1[1] = puVar4;
      puVar4 = puVar5;
    }
    else {
      puVar4 = param_1;
      FUN_005391bc();
    }
  }
  puVar5 = in_stack_00000000;
  uVar6 = (ulong)in_stack_00000008 & 0xff;
  bVar10 = *(byte *)((long)in_stack_00000000 + 10);
  uVar9 = uVar6;
  if ((in_stack_00000008 & 0xff) < (uint)bVar10) {
    func_0x0053ac68();
    puVar1 = extraout_x11;
    for (lVar8 = extraout_x10; lVar8 != 0; lVar8 = lVar8 + 0x20) {
      puVar1[1] = puVar1[-3];
      *puVar1 = puVar1[-4];
      puVar1[3] = puVar1[-1];
      puVar1[2] = puVar1[-2];
      puVar1 = puVar1 + -4;
    }
    bVar10 = *(byte *)((long)puVar5 + 10);
    uVar6 = extraout_x8;
    uVar9 = extraout_x9;
  }
  *(undefined4 *)(puVar5 + uVar9 * 4 + 2) = *param_4;
  uVar12 = *(undefined8 *)(param_4 + 4);
  uVar11 = *(undefined8 *)(param_4 + 2);
  puVar5[uVar9 * 4 + 5] = *(undefined8 *)(param_4 + 6);
  puVar5[uVar9 * 4 + 4] = uVar12;
  puVar5[uVar9 * 4 + 3] = uVar11;
  bVar10 = bVar10 + 1;
  *(byte *)((long)puVar5 + 10) = bVar10;
  if ((*(char *)((long)puVar5 + 0xb) == '\0') && (uVar7 = (int)uVar6 + 1, uVar7 < bVar10)) {
    while (uVar7 < bVar10) {
      func_0x0053a684();
      puVar1 = puVar4 + (byte)(bVar10 - 1);
      puVar4 = puVar5;
      func_0x00539998(puVar5,bVar10,*puVar1);
      bVar10 = bVar10 - 1;
    }
    func_0x0053a83c();
  }
  param_1[2] = param_1[2] + 1;
  auVar3._8_4_ = in_stack_00000008;
  auVar3._0_8_ = in_stack_00000000;
  auVar3._12_4_ = in_stack_0000000c;
  return auVar3;
}



/* Entry: 005391a0; end: 005391bb;  */

void FUN_005391a0(long param_1)

{
  func_0x0053abd8(param_1 + 7);
  return;
}



/* Entry: 005391bc; end: 005393d7;  */

void FUN_005391bc(long *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long *unaff_x19;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  func_0x0053abec();
  func_0x0053a61c();
  param_2 = (long *)*param_2;
  lVar7 = *param_2;
  if (param_2 == (long *)*param_1) {
    lVar8 = 0;
    FUN_00539764(0,lVar7);
    FUN_005397a8();
    *unaff_x20 = lVar8;
    param_2 = (long *)*unaff_x19;
LAB_00539348:
    bVar3 = (char)param_2[1] + 1;
    if (*(char *)((long)param_2 + 0xb) == '\0') {
      plVar9 = (long *)(ulong)bVar3;
      FUN_00539764(plVar9,lVar8);
      func_0x0053a90c();
    }
    else {
      plVar9 = (long *)((long)&MACH_HEADER.cputype + 3);
      FUN_00537f54();
      FUN_005391a0();
      *plVar9 = lVar8;
      *(byte *)(plVar9 + 1) = bVar3;
      *(undefined2 *)((long)plVar9 + 9) = 0;
      *(undefined1 *)((long)plVar9 + 0xb) = 7;
      func_0x0053a90c();
      if (unaff_x20[1] == *unaff_x19) {
        unaff_x20[1] = (long)plVar9;
      }
    }
  }
  else {
    lVar8 = param_2[1];
    if ((char)lVar8 != '\0') {
      func_0x0053a684();
      plVar9 = (long *)param_1[(byte)((char)lVar8 - 1)];
      bVar3 = *(byte *)((long)plVar9 + 10);
      if (bVar3 < 7) {
        uVar4 = (uint)((byte)(7 - bVar3) >> (*(byte *)(unaff_x19 + 1) < 7));
        if (uVar4 < 2) {
          uVar4 = 1;
        }
        param_2 = (long *)*unaff_x19;
        if (uVar4 <= *(byte *)(unaff_x19 + 1) || (uVar4 + bVar3 & 0xff) < 7) {
          FUN_00539498(plVar9,uVar4);
          iVar6 = *(byte *)(unaff_x19 + 1) - uVar4;
          *(int *)(unaff_x19 + 1) = iVar6;
          if (-1 < iVar6) {
            return;
          }
          iVar6 = iVar6 + (uint)*(byte *)((long)plVar9 + 10) + 1;
          goto LAB_005393c8;
        }
      }
      else {
        param_2 = (long *)*unaff_x19;
      }
    }
    bVar3 = *(byte *)(param_2 + 1);
    bVar5 = *(byte *)(lVar7 + 10);
    if (bVar5 <= bVar3) {
LAB_00539320:
      lVar8 = lVar7;
      if (bVar5 == 7) {
        FUN_005391bc();
        param_2 = (long *)*unaff_x19;
        lVar8 = *param_2;
      }
      goto LAB_00539348;
    }
    func_0x0053a684();
    plVar9 = (long *)param_1[(ulong)bVar3 + 1];
    bVar3 = *(byte *)((long)plVar9 + 10);
    param_2 = (long *)*unaff_x19;
    if (6 < bVar3) {
LAB_0053931c:
      bVar5 = *(byte *)(lVar7 + 10);
      goto LAB_00539320;
    }
    uVar4 = (7 - bVar3 & 0xff) >> (0 < (int)*(uint *)(unaff_x19 + 1));
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    uVar2 = uVar4 + bVar3 & 0xff;
    bVar1 = (int)(*(uint *)(unaff_x19 + 1) & 0xff) <= (int)(*(byte *)((long)param_2 + 10) - uVar4);
    if ((!bVar1 && 5 < uVar2) && (bVar1 || uVar2 != 6)) goto LAB_0053931c;
    func_0x005395f8(param_2,uVar4,plVar9);
  }
  if ((int)unaff_x19[1] <= (int)(uint)*(byte *)(*unaff_x19 + 10)) {
    return;
  }
  iVar6 = (int)unaff_x19[1] + ~(uint)*(byte *)(*unaff_x19 + 10);
LAB_005393c8:
  *(int *)(unaff_x19 + 1) = iVar6;
  *unaff_x19 = (long)plVar9;
  return;
}



/* Entry: 005393d8; end: 005393ff;  */

void FUN_005393d8(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iStack_28;
  
  if ((*(char *)(*param_1 + 0xb) != '\0') &&
     (lVar5 = param_1[1], *(int *)(param_1 + 1) = (int)lVar5 + -1, 0 < (int)lVar5)) {
    return;
  }
  plVar3 = (long *)*param_1;
  if (*(char *)((long)plVar3 + 0xb) == '\0') {
    bVar1 = *(byte *)(param_1 + 1);
    do {
      func_0x0053803c();
      plVar3 = (long *)plVar3[bVar1];
      *param_1 = (long)plVar3;
      bVar1 = *(byte *)((long)plVar3 + 10);
    } while (*(char *)((long)plVar3 + 0xb) == '\0');
    iStack_28 = bVar1 - 1;
LAB_0053948c:
    *(int *)(param_1 + 1) = iStack_28;
  }
  else {
    lVar6 = param_1[1];
    lVar5 = *param_1;
    iVar2 = (int)param_1[1];
    while (iVar2 < 0) {
      plVar4 = (long *)*plVar3;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar5;
        iStack_28 = (int)lVar6;
        goto LAB_0053948c;
      }
      iVar2 = *(byte *)(plVar3 + 1) - 1;
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = (long)plVar4;
      plVar3 = plVar4;
    }
  }
  return;
}



/* Entry: 00539400; end: 00539497;  */

void FUN_00539400(long *param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iStack_28;
  
  plVar3 = (long *)*param_1;
  if (*(char *)((long)plVar3 + 0xb) == '\0') {
    bVar1 = *(byte *)(param_1 + 1);
    do {
      func_0x0053803c();
      plVar3 = (long *)plVar3[bVar1];
      *param_1 = (long)plVar3;
      bVar1 = *(byte *)((long)plVar3 + 10);
    } while (*(char *)((long)plVar3 + 0xb) == '\0');
    iStack_28 = bVar1 - 1;
LAB_0053948c:
    *(int *)(param_1 + 1) = iStack_28;
  }
  else {
    lVar6 = param_1[1];
    lVar5 = *param_1;
    iVar2 = (int)param_1[1];
    while (iVar2 < 0) {
      plVar4 = (long *)*plVar3;
      if (*(char *)((long)plVar4 + 0xb) != '\0') {
        *param_1 = lVar5;
        iStack_28 = (int)lVar6;
        goto LAB_0053948c;
      }
      iVar2 = *(byte *)(plVar3 + 1) - 1;
      *(int *)(param_1 + 1) = iVar2;
      *param_1 = (long)plVar4;
      plVar3 = plVar4;
    }
  }
  return;
}



/* Entry: 00539498; end: 00539763;  */

void FUN_00539498(long *param_1,uint param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar6 = (ulong)*(byte *)((long)param_1 + 10);
  lVar8 = *param_1 + (ulong)*(byte *)(param_1 + 1) * 0x20;
  lVar7 = *(long *)(lVar8 + 0x10);
  lVar13 = *(long *)(lVar8 + 0x28);
  lVar9 = *(long *)(lVar8 + 0x20);
  param_1[uVar6 * 4 + 3] = *(long *)(lVar8 + 0x18);
  param_1[uVar6 * 4 + 2] = lVar7;
  param_1[uVar6 * 4 + 5] = lVar13;
  param_1[uVar6 * 4 + 4] = lVar9;
  lVar7 = (ulong)param_2 * 0x20 + -0x20;
  lVar13 = param_3 + lVar7;
  uVar11 = (ulong)param_2;
  lVar8 = uVar6 * 0x20 + 0x30;
  lVar9 = 0x10;
  for (; lVar7 != 0; lVar7 = lVar7 + -0x20) {
    puVar2 = (undefined8 *)(param_3 + lVar9);
    puVar3 = (undefined8 *)((long)param_1 + lVar8);
    uVar12 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar12;
    puVar3[3] = uVar15;
    puVar3[2] = uVar14;
    lVar9 = lVar9 + 0x20;
    lVar8 = lVar8 + 0x20;
  }
  lVar8 = *param_1 + (ulong)*(byte *)(param_1 + 1) * 0x20;
  uVar12 = *(undefined8 *)(lVar13 + 0x10);
  uVar15 = *(undefined8 *)(lVar13 + 0x28);
  uVar14 = *(undefined8 *)(lVar13 + 0x20);
  *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar13 + 0x18);
  *(undefined8 *)(lVar8 + 0x10) = uVar12;
  *(undefined8 *)(lVar8 + 0x28) = uVar15;
  *(undefined8 *)(lVar8 + 0x20) = uVar14;
  lVar8 = 0x10;
  for (lVar9 = (ulong)*(byte *)(param_3 + 10) * 0x20 + uVar11 * -0x20; lVar9 != 0;
      lVar9 = lVar9 + -0x20) {
    puVar2 = (undefined8 *)(param_3 + uVar11 * 0x20 + lVar8);
    puVar3 = (undefined8 *)(param_3 + lVar8);
    uVar12 = *puVar2;
    uVar15 = puVar2[3];
    uVar14 = puVar2[2];
    puVar3[1] = puVar2[1];
    *puVar3 = uVar12;
    puVar3[3] = uVar15;
    puVar3[2] = uVar14;
    lVar8 = lVar8 + 0x20;
  }
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    plVar5 = param_1;
    uVar6 = 0;
    while (uVar11 != uVar6) {
      bVar4 = *(byte *)((long)param_1 + 10);
      func_0x0053a954();
      plVar1 = plVar5 + uVar6;
      plVar5 = param_1;
      FUN_005397a8(param_1,(uint)bVar4 + (int)(uVar6 + 1) & 0xff,*plVar1);
      uVar6 = uVar6 + 1;
    }
    for (uVar10 = 0; (int)(uVar10 & 0xff) <= (int)(*(byte *)(param_3 + 10) - param_2);
        uVar10 = uVar10 + 1) {
      func_0x0053a954();
      func_0x0053a80c();
      FUN_0053995c();
    }
  }
  *(char *)((long)param_1 + 10) = *(char *)((long)param_1 + 10) + (char)param_2;
  *(char *)(param_3 + 10) = *(char *)(param_3 + 10) - (char)param_2;
  return;
}



/* Entry: 00539764; end: 005397a7;  */

undefined8 * FUN_00539764(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00537f88();
  FUN_005391a0();
  *puVar1 = param_2;
  *(char *)(puVar1 + 1) = (char)param_1;
  *(undefined2 *)((long)puVar1 + 9) = 0;
  *(undefined1 *)((long)puVar1 + 0xb) = 0;
  FUN_0053995c();
  return puVar1;
}



/* Entry: 005397a8; end: 005397c7;  */

void FUN_005397a8(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0053ac90();
  func_0x00539998();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 005397c8; end: 0053995b;  */

void FUN_005397c8(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  ulong extraout_x8;
  long *extraout_x9;
  long *plVar8;
  long extraout_x10;
  long lVar9;
  undefined8 *extraout_x11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  
  func_0x0053ac90();
  if (param_2 == 7) {
    bVar6 = 0;
  }
  else if (param_2 == 0) {
    bVar6 = *(char *)((long)unaff_x20 + 10) - 1;
  }
  else {
    bVar6 = *(byte *)((long)unaff_x20 + 10) >> 1;
  }
  *(byte *)(unaff_x19 + 10) = bVar6;
  bVar6 = *(char *)((long)unaff_x20 + 10) - bVar6;
  *(byte *)((long)unaff_x20 + 10) = bVar6;
  bVar5 = *(byte *)(unaff_x19 + 10);
  for (lVar9 = 0x10; (ulong)bVar5 * -0x20 + lVar9 != 0x10; lVar9 = lVar9 + 0x20) {
    puVar3 = (undefined8 *)((long)unaff_x20 + lVar9 + (ulong)bVar6 * 0x20);
    puVar4 = (undefined8 *)(unaff_x19 + lVar9);
    uVar10 = *puVar3;
    uVar14 = puVar3[3];
    uVar12 = puVar3[2];
    puVar4[1] = puVar3[1];
    *puVar4 = uVar10;
    puVar4[3] = uVar14;
    puVar4[2] = uVar12;
  }
  bVar6 = *(char *)((long)unaff_x20 + 10) - 1;
  *(byte *)((long)unaff_x20 + 10) = bVar6;
  lVar9 = *unaff_x20;
  uVar7 = (ulong)*(byte *)(unaff_x20 + 1);
  plVar8 = unaff_x20 + (ulong)bVar6 * 4 + 2;
  bVar6 = *(byte *)(lVar9 + 10);
  if (*(byte *)(unaff_x20 + 1) < bVar6) {
    func_0x0053ac68();
    puVar3 = extraout_x11;
    for (lVar2 = extraout_x10; lVar2 != 0; lVar2 = lVar2 + 0x20) {
      puVar3[1] = puVar3[-3];
      *puVar3 = puVar3[-4];
      puVar3[3] = puVar3[-1];
      puVar3[2] = puVar3[-2];
      puVar3 = puVar3 + -4;
    }
    bVar6 = *(byte *)(lVar9 + 10);
    uVar7 = extraout_x8;
    plVar8 = extraout_x9;
  }
  lVar2 = lVar9 + uVar7 * 0x20;
  lVar11 = *plVar8;
  lVar15 = plVar8[3];
  lVar13 = plVar8[2];
  *(long *)(lVar2 + 0x18) = plVar8[1];
  *(long *)(lVar2 + 0x10) = lVar11;
  *(long *)(lVar2 + 0x28) = lVar15;
  *(long *)(lVar2 + 0x20) = lVar13;
  bVar6 = bVar6 + 1;
  *(byte *)(lVar9 + 10) = bVar6;
  if ((*(char *)(lVar9 + 0xb) == '\0') && (uVar1 = (int)uVar7 + 1, uVar1 < bVar6)) {
    while (uVar1 < bVar6) {
      func_0x0053a684();
      puVar3 = (undefined8 *)(param_1 + (ulong)(byte)(bVar6 - 1) * 8);
      param_1 = lVar9;
      func_0x00539998(lVar9,bVar6,*puVar3);
      bVar6 = bVar6 - 1;
    }
    func_0x0053a83c();
  }
  FUN_005399bc(*unaff_x20,(char)unaff_x20[1] + '\x01');
  if (*(char *)((long)unaff_x20 + 0xb) == '\0') {
    for (bVar6 = 0; bVar6 <= *(byte *)(unaff_x19 + 10); bVar6 = bVar6 + 1) {
      func_0x0053ab1c();
      func_0x0053a80c();
      func_0x0053995c();
    }
  }
  return;
}



/* Entry: 0053995c; end: 005399bb;  */

long FUN_0053995c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0053a708(1,4);
  func_0x00538010();
  return param_1 + lVar1;
}



/* Entry: 005399bc; end: 005399eb;  */

void FUN_005399bc(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_0053995c();
  func_0x0053a83c();
  *(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8) = param_3;
  return;
}



/* Entry: 005399ec; end: 005399ef;  */

undefined8 FUN_005399ec(undefined8 param_1)

{
  FUN_00537e28();
  return param_1;
}



/* Entry: 005399f0; end: 00539a33;  */

void FUN_005399f0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0053a61c();
  if (param_2 < 0) {
    for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + 1) {
      FUN_005393d8();
    }
  }
  else {
    while (0 < unaff_x19) {
      func_0x005387bc();
      unaff_x19 = unaff_x19 + -1;
    }
  }
  return;
}



/* Entry: 00539a34; end: 00539cff;  */

void FUN_00539a34(long *param_1,long *param_2,long *param_3,ulong param_4,long *param_5,uint param_6
                 )

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plStack_80;
  ulong uStack_78;
  long *plStack_70;
  uint uStack_68;
  
  uVar10 = (uint)param_4;
  if (param_5 == param_3) {
    if (*(char *)((long)param_5 + 0xb) != '\0') {
      lVar11 = (long)(int)(param_6 - uVar10);
      goto joined_r0x00539b70;
    }
    if (param_6 != uVar10) goto LAB_00539a94;
  }
  else {
LAB_00539a94:
    if (*(char *)((long)param_3 + 0xb) == '\0') {
      plVar12 = param_3;
      func_0x0053803c();
      plVar12 = (long *)plVar12[(ulong)(uVar10 + 1) & 0xff];
      lVar11 = 1;
    }
    else {
      lVar11 = (long)(int)-uVar10;
      plVar12 = param_3;
    }
    while (*(char *)((long)plVar12 + 0xb) == '\0') {
      func_0x00537fb4();
    }
    uVar13 = (ulong)*(byte *)(plVar12 + 1);
    plVar12 = (long *)*plVar12;
    uVar7 = (ulong)(int)param_6;
    while( true ) {
      plVar4 = plVar12;
      func_0x0053803c();
      plVar4 = (long *)plVar4[uVar13 & 0xff];
      cVar3 = '\0';
      if (*(char *)((long)plVar4 + 0xb) == '\0') {
        while (cVar3 == '\0') {
          func_0x00537fb4();
          cVar3 = *(char *)((long)plVar4 + 0xb);
        }
        uVar13 = (ulong)*(byte *)(plVar4 + 1);
        plVar12 = (long *)*plVar4;
      }
      uVar6 = uVar7;
      if ((plVar4 == param_5) ||
         (uVar6 = (ulong)*(byte *)((long)plVar4 + 10), plVar12 == param_5 && uVar13 == uVar7))
      break;
      if (*(byte *)((long)plVar12 + 10) <= uVar13) {
        do {
          pbVar1 = (byte *)(plVar12 + 1);
          uVar13 = (ulong)*pbVar1;
          plVar12 = (long *)*plVar12;
          if (plVar12 == param_5 && uVar7 == uVar13) goto LAB_00539b6c;
        } while (*(byte *)((long)plVar12 + 10) <= *pbVar1);
      }
      lVar11 = lVar11 + uVar6 + 1;
      uVar13 = uVar13 + 1;
    }
LAB_00539b6c:
    lVar11 = uVar6 + lVar11;
joined_r0x00539b70:
    if (lVar11 != 0) {
      uVar7 = param_2[2];
      uVar13 = uVar7 - lVar11;
      if (uVar13 == 0) {
        FUN_00537e28(param_2);
        lVar8 = param_2[1];
        bVar2 = *(byte *)(lVar8 + 10);
        *param_1 = lVar11;
        param_1[1] = lVar8;
        *(uint *)(param_1 + 2) = (uint)bVar2;
        return;
      }
      if (param_5 == param_3) {
        uVar5 = uVar10 & 0xff;
        FUN_00539e30(param_3,uVar5,param_6 - uVar10 & 0xff);
        func_0x0053a84c(param_2[2] - lVar11);
        *param_1 = lVar11;
        param_1[1] = (long)param_3;
        *(uint *)(param_1 + 2) = uVar5;
        return;
      }
      while (uVar6 = uVar7 - uVar13, uVar13 <= uVar7 && uVar6 != 0) {
        uVar10 = (uint)param_4;
        if (*(char *)((long)param_3 + 0xb) == '\0') {
          cVar3 = *(char *)((long)param_3 + 0xb);
          plStack_80 = param_3;
          uStack_78 = param_4;
          if (cVar3 == '\0') {
            FUN_005393d8(&plStack_80);
            lVar8 = (long)(param_4 << 0x20) >> 0x1b;
            lVar14 = plStack_80[(long)(int)uStack_78 * 4 + 2];
            lVar16 = plStack_80[(long)(int)uStack_78 * 4 + 5];
            lVar15 = plStack_80[(long)(int)uStack_78 * 4 + 4];
            *(long *)((long)param_3 + lVar8 + 0x18) = plStack_80[(long)(int)uStack_78 * 4 + 3];
            *(long *)((long)param_3 + lVar8 + 0x10) = lVar14;
            *(long *)((long)param_3 + lVar8 + 0x28) = lVar16;
            *(long *)((long)param_3 + lVar8 + 0x20) = lVar15;
            param_3 = plStack_80;
          }
          else if (((uint)*(byte *)((long)param_3 + 10) - (uVar10 + 1) & 0xff) != 0) {
            do {
              func_0x0053aaac();
            } while (extraout_x9 != 0);
          }
          *(char *)((long)param_3 + 10) = *(char *)((long)param_3 + 10) + -1;
          param_2[2] = param_2[2] + -1;
          plVar12 = param_2;
          plVar4 = plStack_80;
          FUN_00539f00(param_2,plStack_80,uStack_78);
          uStack_68 = (uint)plVar4;
          plStack_70 = plVar12;
          if (cVar3 == '\0') {
            func_0x005387bc(&plStack_70);
          }
          uVar7 = (ulong)uStack_68;
          param_3 = plStack_70;
        }
        else {
          uVar9 = (ulong)(int)(*(byte *)((long)param_3 + 10) - uVar10);
          if (uVar6 <= uVar9) {
            uVar9 = uVar6;
          }
          uVar7 = (ulong)(uVar10 & 0xff);
          FUN_00539e30(param_3,uVar7,(uint)uVar9 & 0xff);
          func_0x0053a84c(param_2[2] - (uVar9 & 0xff));
        }
        param_4 = param_4 & 0xffffffff00000000 | uVar7 & 0xffffffff;
        uVar7 = param_2[2];
      }
      *param_1 = lVar11;
      goto LAB_00539cdc;
    }
  }
  *param_1 = 0;
LAB_00539cdc:
  param_1[1] = (long)param_3;
  param_1[2] = param_4;
  return;
}


