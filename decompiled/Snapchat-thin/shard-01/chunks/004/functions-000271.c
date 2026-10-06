/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fb5010; end: 100fb5153;  */

undefined * FUN_100fb5010(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb5154);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112d515e0;
    func_0x0001000285a8(0x112d515e0,&UNK_10d9182b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d515e8;
    func_0x0001000285a8(0x112d515e8,&UNK_10d9282e0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100fb5154; end: 100fb5167;  */

ulong FUN_100fb5154(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb53ec);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100fb5640(uVar2,uVar4,0x100fb0a84);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb53e8);
      (*pcVar1)();
    }
    FUN_100fb58f0(0,uVar2,uVar3 + 0x20,param_4,&UNK_103a76890);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100fb5168; end: 100fb5283;  */

undefined * FUN_100fb5168(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fb5284);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d51620;
    func_0x0001000285a8(0x112d51620,&UNK_10d918318);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110371818);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100fb5284; end: 100fb52ab;  */

ulong FUN_100fb5284(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb53ec);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100fb5640(uVar2,uVar4,0x100fb0b28);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb53e8);
      (*pcVar1)();
    }
    FUN_100fb58f0(0,uVar2,uVar3 + 0x20,param_4,0x100fa3f74);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100fb52ac; end: 100fb53eb;  */

ulong FUN_100fb52ac(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb53ec);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100fb5640(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb53e8);
      (*pcVar1)();
    }
    FUN_100fb58f0(0,uVar2,uVar3 + 0x20,param_4,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100fb53ec; end: 100fb563f;  */

ulong FUN_100fb53ec(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb551c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100fb5640(uVar2,uVar4,0x100fb0b44);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb5518);
      (*pcVar1)();
    }
    func_0x000100fb59f8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100fb5640; end: 100fb56bf;  */

undefined * FUN_100fb5640(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100fb56c0; end: 100fb58ef;  */

long FUN_100fb56c0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb57d4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb57d8);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000100fb7b4c(0,0x112d513a0,&PTR_PTR_1126b3060);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000100fb7b4c(0,0x112d513a0,&PTR_PTR_1126b3060);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb57d0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100fb58f0; end: 100fb60cf;  */

long FUN_100fb58f0(long param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb59f4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb59f8);
        (*pcVar3)();
      }
      uVar4 = 0;
      (*param_5)(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      (*param_5)(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100fb59f0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100fb60d0; end: 100fb6b7f;  */

void FUN_100fb60d0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112d50c90;
  func_0x0001000285a8(0x112d50c90,&UNK_10d917638);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_100fb6338:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100fb6368);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_100fb6338;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100fb636c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 100fb6b80; end: 100fb6c7f;  */

/* WARNING: Removing unreachable block (ram,0x000100fb6c74) */

undefined1  [16] FUN_100fb6b80(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61434(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_11034da80;
  func_0x000107c5fbd4(pppuVar1,PTR___sSSN_11034da80,
                      PTR___sSSs25LosslessStringConvertiblesWP_11034dad0,PTR___sSSSTsWP_11034daa0);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_100edbde8();
    func_0x000107c6142c(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      func_0x000107c60358();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_100fb6c80(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_100fb6c80(pppuVar2,puVar4,param_3);
  }
  func_0x000107c6142c(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 100fb6c80; end: 100fb6efb;  */

undefined1  [16] FUN_100fb6c80(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar8 = (int)param_3;
  uVar7 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100fb6efc);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) goto LAB_100fb6eec;
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100fb6eec;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_100fb6ed0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar8 + 0x30;
        uVar2 = 0x61;
        if (10 < param_3) {
          uVar2 = iVar8 + 0x57;
        }
        uVar5 = 0x41;
        if (10 < param_3) {
          uVar1 = 0x3a;
          uVar5 = iVar8 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar9 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar10 = (uint)bVar3;
            if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
              uVar7 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100fb6eec;
              cVar12 = -0x57;
            }
            else {
              cVar12 = -0x37;
            }
          }
          else {
            cVar12 = -0x30;
          }
          lVar11 = uVar9 * param_3;
          if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar11 >> 0x3f) ||
             (uVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
             SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar9;
            return auVar15;
          }
        } while( true );
      }
LAB_100fb6ed0:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100fb6ef8);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) {
LAB_100fb6eec:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      return auVar4 << 0x40;
    }
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100fb6eec;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_100fb6ed0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar9;
  return auVar14;
}



/* Entry: 100fb6efc; end: 100fb702f;  */

void FUN_100fb6efc(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_100fac3bc();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb6fc0);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x000100fb6608(lVar5);
    uVar2 = param_2;
    FUN_100fac3bc();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_100f99ab0(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb6f8c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000100fb5dfc();
    lVar5 = *unaff_x20;
    goto joined_r0x000100fb6fd4;
  }
  lVar5 = *unaff_x20;
joined_r0x000100fb6fd4:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fb7030);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 100fb7030; end: 100fb742b;  */

undefined * FUN_100fb7030(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  puVar2 = PTR_PTR_1126c4258;
  func_0x000107c610f8(PTR_PTR_1126c4258);
  func_0x000107c453e4();
  lVar3 = 0;
  func_0x0001038e5950();
  puVar1 = (undefined8 *)(param_4 + *(int *)(lVar3 + 0x1c));
  if (puVar1[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar1;
    func_0x000107c5fadc(uVar4);
  }
  func_0x000107c53910(puVar2);
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126c81a8;
  func_0x000107c610f8(PTR_PTR_1126c81a8);
  func_0x000107c453e4();
  uVar4 = 0x78;
  func_0x000107c3119c(0x78);
  func_0x000107c61180();
  func_0x000107c5a0a0(puVar5);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_4 + *(int *)(lVar3 + 0x18));
  func_0x000107c311a4(uVar4);
  func_0x000107c61180();
  func_0x000107c59c50(puVar5);
  func_0x000107c61170(uVar4);
  if (param_2 != 0) {
    func_0x000107c61434(param_2);
    func_0x000107c61174();
    uVar4 = param_3;
    func_0x000107c5cd58();
    func_0x000107c61180();
    uVar6 = uVar4;
    func_0x000107c5cda4();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c2bb50();
    func_0x000107c61170(uVar6);
    puVar7 = PTR___ss6UInt64VN_11034f048;
    puVar9 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
    func_0x000107c56894(puVar2);
    func_0x000107c61170(puVar7);
    uVar4 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c55d70(puVar2);
    func_0x000107c61170(uVar4);
    uVar4 = 0x35;
    func_0x000107c311a8(0x35);
    func_0x000107c61180();
    func_0x000107c55e78(puVar5);
    func_0x000107c61170(uVar4);
    puVar7 = PTR_PTR_1126a6128;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c55d70(puVar7);
    func_0x000107c61170(uVar4);
    lVar8 = 0x35;
    func_0x000107c311a8();
    func_0x000107c61180();
    func_0x000107c55e7c(puVar7);
    func_0x000107c61170();
    func_0x000100fb0b7c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x20) = puVar7;
    uVar4 = 0;
    func_0x000100fb7b4c(0,0x112d51358,&PTR_PTR_1126a6128);
    func_0x000107c61174(puVar7);
    lVar3 = lVar8;
    func_0x000107c5fc48(lVar8,uVar4);
    func_0x000107c61574(lVar8);
    func_0x000107c55cb4(puVar5);
    func_0x000107c61170(lVar3);
    puVar9 = PTR_PTR_1126a6120;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c55d70(puVar9);
    func_0x000107c61170(param_1);
    lVar8 = 0x35;
    func_0x000107c311a8();
    func_0x000107c61180();
    func_0x000107c55e78(puVar9);
    func_0x000107c61170();
    func_0x000100fb0b58();
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x20) = puVar9;
    uVar4 = 0;
    func_0x000100fb7b4c(0,0x112d51348,&PTR_PTR_1126a6120);
    func_0x000107c61174(puVar9);
    lVar3 = lVar8;
    func_0x000107c5fc48(lVar8,uVar4);
    func_0x000107c61574(lVar8);
    func_0x000107c55dbc(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c524e8(puVar2);
  func_0x000107c61170(puVar5);
  return puVar2;
}



/* Entry: 100fb742c; end: 100fb764b;  */

undefined * FUN_100fb742c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100faca28();
  puVar3 = PTR_PTR_1126c81b0;
  func_0x000107c610f8(PTR_PTR_1126c81b0);
  func_0x000107c453e4();
  puVar1 = PTR_PTR_1133bb570;
  func_0x0001038ec560(0);
  func_0x000107c610f8();
  puVar4 = puVar3;
  func_0x000107c61174(puVar3);
  func_0x0001038ec390(puVar3,0);
  puVar5 = puVar2;
  func_0x000107c61558(puVar2);
  FUN_100fb6efc(puVar3,puVar1,puVar5);
  puVar3 = PTR_PTR_1126d2670;
  func_0x000107c610f8(PTR_PTR_1126d2670);
  func_0x000107c453e4();
  func_0x000100fb7b4c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar6 = 1;
  func_0x000107c6010c(1);
  func_0x000107c555d8(puVar3);
  func_0x000107c61170(uVar6);
  puVar1 = PTR_PTR_1133bb560;
  func_0x000107c61174(puVar3);
  puVar5 = puVar2;
  func_0x000107c61558(puVar2);
  FUN_100fb6efc(puVar3,puVar1,puVar5);
  puVar5 = PTR_PTR_1126c81a0;
  func_0x000107c610f8(PTR_PTR_1126c81a0);
  func_0x000107c453e4();
  func_0x000107c560f8();
  puVar1 = PTR_PTR_1133bb550;
  func_0x000107c61174(puVar5);
  puVar7 = puVar2;
  func_0x000107c61558(puVar2);
  FUN_100fb6efc(puVar5,puVar1,puVar7);
  puVar7 = PTR_PTR_1126c81f0;
  func_0x000107c610f8(PTR_PTR_1126c81f0);
  func_0x000107c453e4();
  func_0x000107c52810();
  func_0x000107c5a4b0(puVar7);
  puVar1 = PTR_PTR_1133bb590;
  func_0x000107c61174(puVar7);
  puVar8 = puVar2;
  func_0x000107c61558(puVar2);
  FUN_100fb6efc(puVar7,puVar1,puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  return puVar2;
}



/* Entry: 100fb764c; end: 100fb77cb;  */

void FUN_100fb764c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_PTR_1126c81d8;
  func_0x000107c610f8(PTR_PTR_1126c81d8);
  func_0x000107c453e4();
  if (lRam0000000112d515a8 != -1) {
    func_0x000107c61568(0x112d515a8,FUN_100fb2c88);
  }
  uVar7 = uRam0000000112d515b0;
  lVar4 = 0x112d515b8;
  func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar2 = PTR_PTR_1133bb588;
  puVar1 = PTR_PTR_1133bb558;
  *(undefined **)(lVar4 + 0x20) = PTR_PTR_1133bb558;
  *(undefined **)(lVar4 + 0x28) = puVar2;
  func_0x000107c61434(uVar7);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(puVar2);
  func_0x000100fb2a80(lVar4);
  uVar5 = 0;
  FUN_100f99ab0(0);
  uVar6 = uVar7;
  func_0x000107c5fc48(uVar7,uVar5);
  func_0x000107c6142c(uVar7);
  func_0x000107c57538(puVar3);
  func_0x000107c61170(uVar6);
  FUN_100fb7030(param_1,param_2,param_3,param_4);
  uVar7 = param_1;
  FUN_100fb742c();
  func_0x000107c61170(param_1);
  func_0x0001038e138c(0);
  func_0x000107c610f8();
  func_0x0001038e11e8(puVar3,uVar7);
  return;
}



/* Entry: 100fb77cc; end: 100fb781b;  */

undefined8 FUN_100fb77cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d515d0;
  func_0x0001000285a8(0x112d515d0,&UNK_10d918288);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100fb781c; end: 100fb785b;  */

void FUN_100fb781c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d515d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9183f8;
  func_0x000107c61520(&UNK_10d9183f8,&UNK_110372628);
  puRam0000000112d515d8 = puVar1;
  return;
}



/* Entry: 100fb785c; end: 100fb789b;  */

void FUN_100fb785c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100fb789c; end: 100fb79e7;  */

/* WARNING: Possible PIC construction at 0x000100fb79c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fb79cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb789c(byte param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d51540);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = &UNK_110372540;
  func_0x000107c613fc(&UNK_110372540,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110372568;
  func_0x000107c613fc(&UNK_110372568,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_1 & 1;
  puVar3[0x19] = param_2 & 1;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  puVar2 = &UNK_110372590;
  func_0x000107c613fc(&UNK_110372590,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d9182c8;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_3);
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d9182d0,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 100fb79e8; end: 100fb7a5f;  */

void FUN_100fb79e8(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x22;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x19);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  plVar8 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100fb7a60;
  plVar8[0x16] = lVar9;
  plVar8[0x17] = lVar6;
  *(undefined1 *)((long)plVar8 + 0xf9) = uVar2;
  *(undefined1 *)(plVar8 + 0x1f) = uVar1;
  plVar8[0x15] = lVar10;
  lVar9 = 0x112d515d0;
  func_0x0001000285a8(0x112d515d0,&UNK_10d918288);
  uVar4 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x18] = uVar4;
  lVar9 = 0x112d515a0;
  func_0x0001000285a8(0x112d515a0,&UNK_10d918670);
  plVar8[0x19] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar8[0x1a] = lVar9;
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x1b] = uVar4;
  lVar9 = 0x112d515f0;
  func_0x0001000285a8(0x112d515f0,&UNK_10d9182d8);
  uVar4 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x1c] = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x1d] = uVar4;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar9 = lVar6;
  func_0x000107c5fce8();
  plVar8[0x1e] = lVar9;
  uVar7 = 0x112d45220;
  FUN_100fb785c(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar6,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb4660,lVar6,uVar7);
  return;
}



/* Entry: 100fb7a60; end: 100fb7a9b;  */

void FUN_100fb7a60(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fb7a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fb7a9c; end: 100fb7b0b;  */

void FUN_100fb7a9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fb7cc4;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 100fb7b0c; end: 100fb7b8b;  */

undefined8 FUN_100fb7b0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100fb7b8c; end: 100fb7c7f;  */

uint FUN_100fb7b8c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 100fb7c80; end: 100fb7cbf;  */

void FUN_100fb7c80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9183d0;
  func_0x000107c61520(&UNK_10d9183d0,&UNK_110372628);
  puRam0000000112d51630 = puVar1;
  return;
}



/* Entry: 100fb7cc0; end: 100fb7cc7;  */

void FUN_100fb7cc0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fb44a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fb7cc8; end: 100fb7cf3;  */

void FUN_100fb7cc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 100fb7cf4; end: 100fb7cff;  */

void FUN_100fb7cf4(void)

{
  return;
}



/* Entry: 100fb7d00; end: 100fb7d63;  */

void FUN_100fb7d00(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb7d64);
  return;
}



/* Entry: 100fb7d64; end: 100fb7e6f;  */

void FUN_100fb7d64(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar9,1,1,lVar2);
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  lVar2 = 0x112d516f0;
  func_0x0001000285a8(0x112d516f0,&UNK_10d918520);
  lVar4 = 0x112d515e8;
  func_0x0001000285a8(0x112d515e8,&UNK_10d9282e0);
  lVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar6 = lVar5;
  FUN_100fb86ac();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fb7e70;
  puVar1 = PTR___ss5ErrorWS_11034ee10;
  lVar7 = *(long *)(unaff_x22 + 0x48);
  plVar3[0x16] = unaff_x22 + 0x28;
  plVar3[0x17] = unaff_x22 + 0x30;
  plVar3[0x14] = lVar6;
  plVar3[0x15] = (long)puVar1;
  plVar3[0x12] = lVar4;
  plVar3[0x13] = lVar5;
  plVar3[0x10] = 0;
  plVar3[0x11] = lVar2;
  plVar3[0xe] = lVar7;
  plVar3[0xf] = (long)&UNK_10d918518;
  lVar2 = *(long *)(lVar5 + -8);
  plVar3[0x18] = lVar2;
  uVar8 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[0x19] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
  return;
}



/* Entry: 100fb7e70; end: 100fb7ee3;  */

void FUN_100fb7e70(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar3 + 0x58) = param_1;
    func_0x0001000abe54(*(undefined8 *)(lVar3 + 0x48));
    pcVar1 = FUN_100fb7ee4;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x40);
    pcVar1 = FUN_100fb7f50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 100fb7ee4; end: 100fb7f4f;  */

void FUN_100fb7ee4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61428(*(long *)(unaff_x22 + 0x40) + 0x78,unaff_x22 + 0x10,0x21,0);
  func_0x000100fb2b7c(uVar2);
  func_0x000107c614a8(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fb7f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb7f50; end: 100fb7f8f;  */

void FUN_100fb7f50(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x0001000abe54(uVar1);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fb7f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb7f90; end: 100fb7fab;  */

void FUN_100fb7f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb7fac,0,0);
  return;
}



/* Entry: 100fb7fac; end: 100fb8047;  */

void FUN_100fb7fac(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100fb8048;
                    /* WARNING: Could not recover jumptable at 0x000100fb8044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x20),"add(leases:)",0xc,0x5000000000000002,0x38,
             unaff_x22 + 0x10,uVar2,lVar3);
  return;
}



/* Entry: 100fb8048; end: 100fb80b7;  */

void FUN_100fb8048(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
  if (unaff_x20 != 0) {
    *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined1 *)(lVar1 + 0x19) = *(undefined1 *)(lVar1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb80b8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fb80b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 100fb80b8; end: 100fb811f;  */

void FUN_100fb80b8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x19);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x30);
  func_0x000100fb86fc();
  puVar2 = &UNK_11072cfa8;
  func_0x000107c613f8(&UNK_11072cfa8,param_1,0,0);
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *puVar4 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x000100fb811c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb8120; end: 100fb813b;  */

void FUN_100fb8120(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb813c);
  return;
}



/* Entry: 100fb813c; end: 100fb81db;  */

void FUN_100fb813c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x90) + 0x70);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fb8194;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100fb81dc; end: 100fb8277;  */

void FUN_100fb81dc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fb8278;
                    /* WARNING: Could not recover jumptable at 0x000100fb8274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
             "add(unclaimedSnapDoc:)",0x16,0x5000000000000002,0x41,unaff_x22 + 0x78,uVar2,lVar3);
  return;
}



/* Entry: 100fb8278; end: 100fb82db;  */

void FUN_100fb8278(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x90);
    pcVar1 = FUN_100fb8334;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x90);
    *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(lVar3 + 0x78);
    pcVar1 = FUN_100fb82dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 100fb82dc; end: 100fb8333;  */

void FUN_100fb82dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  FUN_100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar1;
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100fb8330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb8334; end: 100fb8423;  */

void FUN_100fb8334(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x10);
  FUN_100fb8650(uVar3,unaff_x22 + 0x38);
  func_0x000107c61428(lVar5 + 0x78,unaff_x22 + 0x60,0x21,0);
  uVar4 = *(ulong *)(lVar5 + 0x78);
  uVar1 = uVar4;
  func_0x000107c61558();
  *(ulong *)(lVar5 + 0x78) = uVar4;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_100fb5010(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(lVar5 + 0x78) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_100fb5010(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  FUN_100fb8694(unaff_x22 + 0x38,uVar4 + uVar1 * 0x28 + 0x20);
  *(ulong *)(lVar5 + 0x78) = uVar4;
  func_0x000107c614a8(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000100fb83dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb8424; end: 100fb8473;  */

void FUN_100fb8424(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fb873c;
  plVar3[7] = param_1;
  plVar3[8] = lVar4;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[9] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb7d64,lVar4,0);
  return;
}



/* Entry: 100fb8474; end: 100fb84d7;  */

void FUN_100fb8474(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fb84d8;
  plVar1[0x11] = param_2;
  plVar1[0x12] = lVar2;
  plVar1[0x10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb813c,lVar2,0);
  return;
}



/* Entry: 100fb84d8; end: 100fb8513;  */

void FUN_100fb84d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fb8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fb8514; end: 100fb852b;  */

void FUN_100fb8514(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fb852c,uVar1,0);
  return;
}



/* Entry: 100fb852c; end: 100fb857f;  */

void FUN_100fb852c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar2 + 0x78,unaff_x22 + 0x10,1,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined **)(lVar2 + 0x78) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fb857c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fb8580; end: 100fb85ef;  */

void FUN_100fb8580(void)

{
  ulong *unaff_x20;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if (1 < *unaff_x20) {
    func_0x000107c614cc(*unaff_x20,auStack_28,auStack_40);
    FUN_101010328(uStack_38,uStack_30);
  }
  return;
}



/* Entry: 100fb85f0; end: 100fb864f;  */

void FUN_100fb85f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb8068;
  func_0x000107c61520(&UNK_10dcb8068,&UNK_11072cd20);
  puRam0000000112d51638 = puVar1;
  return;
}



/* Entry: 100fb8650; end: 100fb8693;  */

long FUN_100fb8650(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fb8694; end: 100fb86ab;  */

undefined8 * FUN_100fb8694(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100fb86ac; end: 100fb873b;  */

void FUN_100fb86ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d516f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d516f0;
  func_0x00010002969c(0x112d516f0,&UNK_10d918520);
  puVar2 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
  puRam0000000112d516f8 = puVar2;
  return;
}



/* Entry: 100fb873c; end: 100fb873f;  */

void FUN_100fb873c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fb8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fb8740; end: 100fb9f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb8740(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined *param_19,ulong param_20,
                  undefined8 param_21,long param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined **ppuVar4;
  code **ppcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  long *plVar18;
  undefined *puVar19;
  long lVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar21;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  code *apcStack_3f0 [4];
  undefined8 *puStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  long lStack_388;
  ulong uStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  long *plStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  code *pcStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined1 *puStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 auStack_1c0 [3];
  long lStack_1a8;
  undefined **ppuStack_1a0;
  long alStack_198 [3];
  long lStack_180;
  undefined **ppuStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined **appuStack_128 [5];
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [40];
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined *apuStack_90 [3];
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puVar11;
  
  uStack_218 = param_23;
  lStack_238 = param_22;
  uStack_228 = param_21;
  uStack_2a0 = param_14;
  uStack_2b0 = param_13;
  uStack_240 = param_28;
  uStack_210 = param_27;
  uStack_2c0 = param_5;
  uStack_2a8 = param_7;
  pcStack_290 = (code *)param_2;
  pcStack_270 = (code *)param_3;
  puStack_268 = param_1;
  uStack_250 = param_4;
  uStack_248 = param_6;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  uVar8 = 0x112d51708;
  lStack_2b8 = unaff_x20;
  func_0x0001000285a8(0x112d51708,&UNK_10d918530);
  uStack_220 = param_8;
  func_0x000107c4cca8();
  func_0x000107c61180();
  uVar26 = param_8;
  uStack_288 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(param_8);
  puVar16 = &UNK_110372730;
  func_0x000107c613fc(&UNK_110372730,0x18,7);
  *(undefined8 *)(puVar16 + 0x10) = param_16;
  func_0x0001000285a8(0x112d51710,&UNK_10d918ad0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar8 = 0x100fb9f24;
  uStack_2d0 = param_16;
  func_0x0001000bdd8c(0x100fb9f24,puVar16);
  pcStack_278 = (code *)_DAT_11305e778;
  uVar23 = 0x112d51718;
  uStack_200 = uVar8;
  func_0x0001000285a8(0x112d51718,&UNK_10d918540);
  pcVar9 = FUN_100fc4b90;
  func_0x0001000cb480(FUN_100fc4b90,0,uVar23);
  puVar16 = &UNK_110372758;
  func_0x000107c613fc(&UNK_110372758,0x28,7);
  *(long *)(puVar16 + 0x10) = param_11;
  *(long *)(puVar16 + 0x18) = param_9;
  *(undefined8 *)(puVar16 + 0x20) = param_10;
  func_0x0001000285a8(0x112d51720,&UNK_10d918548);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  lStack_1f8 = param_9;
  func_0x000107c61174();
  pcVar10 = FUN_100fbaa50;
  func_0x0001000bdd8c(FUN_100fbaa50,puVar16);
  uVar8 = 0x112d51728;
  func_0x0001000285a8(0x112d51728,&UNK_10d918550);
  uStack_230 = param_15;
  func_0x000107c4cd6c();
  func_0x000107c61180();
  uVar29 = param_15;
  lStack_310 = uVar8;
  func_0x0001000bda74();
  func_0x000107c61170(param_15);
  puStack_260 = (undefined1 *)_DAT_1130806b8;
  lStack_258 = param_11;
  func_0x0001000d224c(&puStack_148);
  puVar16 = puStack_148;
  puVar11 = puStack_148;
  func_0x000107c614f0();
  uVar6 = SUB84(puVar11,0);
  apuStack_90[0] = puVar16;
  (**(code **)(*(long *)((long)ppuStack_140 + 0x20) + 0x48))();
  func_0x000107c615e8(puVar16);
  puVar16 = &UNK_110372780;
  func_0x000107c613fc(&UNK_110372780,0x49,7);
  uVar8 = uStack_250;
  pcVar12 = pcStack_270;
  *(code **)(puVar16 + 0x10) = pcStack_270;
  *(undefined8 *)(puVar16 + 0x18) = uStack_250;
  *(undefined8 *)(puVar16 + 0x20) = param_10;
  *(undefined8 *)(puVar16 + 0x28) = uVar26;
  *(code **)(puVar16 + 0x30) = pcVar10;
  *(undefined8 *)(puVar16 + 0x38) = uVar29;
  *(code **)(puVar16 + 0x40) = pcVar9;
  uStack_280 = (undefined *)(CONCAT44(uStack_280._4_4_,uVar6) & 0xffffffff00000001);
  puVar16[0x48] = (byte)uVar6 & 1;
  func_0x0001000285a8(0x112d51730,&UNK_10d918558);
  func_0x000107c613fc();
  func_0x000107c61174();
  uStack_2e0 = param_10;
  func_0x000107c61174();
  uStack_2e8 = pcVar12;
  func_0x000107c61174();
  uStack_2f0 = uVar8;
  func_0x000107c6157c(uVar26);
  pcStack_2d8 = pcVar10;
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(pcVar9);
  uVar8 = 0x100fbaa5c;
  func_0x0001000bdd8c(0x100fbaa5c,puVar16);
  func_0x0001000d224c(&puStack_148);
  ppuVar4 = appuStack_128[0];
  puVar16 = puStack_130;
  ppuVar13 = &puStack_148;
  func_0x0001000a8868(ppuVar13,puStack_130);
  uVar14 = 2;
  func_0x000100774b74(2,8,0,puVar16,ppuVar4,ppuVar13);
  func_0x0001000834e4(&puStack_148);
  puVar16 = &UNK_1103727a8;
  func_0x000107c613fc(&UNK_1103727a8,0x18,7);
  uVar23 = uStack_210;
  *(undefined8 *)(puVar16 + 0x10) = uStack_210;
  func_0x0001000285a8(0x112d51738,&UNK_10d918560);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar11 = (undefined *)0x100fbaa60;
  uStack_2f8 = uVar23;
  func_0x0001000bdd8c(0x100fbaa60,puVar16);
  uVar15 = 0;
  FUN_100f9f050();
  uVar23 = uVar15;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar29);
  func_0x000107c61174();
  puVar16 = puVar11;
  func_0x000100fbb860(puVar11,uVar29,uVar14,uVar23);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(uVar29);
  uStack_300 = uVar14;
  func_0x000107c61170(uVar14);
  lVar17 = lStack_1f8;
  plVar18 = (long *)(puStack_268 + _DAT_112facaf0);
  uVar22 = plVar18[1];
  puStack_308 = puVar16;
  uStack_2c8 = uVar26;
  uStack_250 = uVar8;
  uStack_210 = uVar29;
  pcStack_208 = pcVar9;
  if ((uVar22 & 0x3000000000000000) == 0x2000000000000000) {
    puVar25 = (undefined *)*plVar18;
    func_0x000107c6157c(uVar26);
    FUN_100fbbc54(puVar25,uVar22);
    func_0x000107c6157c(puVar16);
    func_0x000100fbb584(puVar25,uVar26,puVar16,(ulong)uStack_280 & 0xffffffff);
    puVar16 = (undefined *)0x0;
    FUN_100fb21bc();
    ppuStack_70 = &PTR_DAT_110372440;
    ppcVar5 = apcStack_3f0;
    puStack_78 = puVar16;
  }
  else {
    puVar11 = &UNK_1103727d0;
    plStack_328 = plVar18;
    func_0x000107c613fc(&UNK_1103727d0,0x18,7);
    uVar23 = uStack_2a8;
    *(undefined8 *)(puVar11 + 0x10) = uStack_2a8;
    func_0x0001000285a8(0x112d51740,&UNK_10d918568);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar8);
    func_0x000107c61174(uVar23);
    pcVar9 = FUN_100fbbb30;
    func_0x0001000bdd8c(FUN_100fbbb30,puVar11);
    uVar23 = *(undefined8 *)(lVar17 + _DAT_112faccc0);
    puVar11 = &UNK_1103727f8;
    pcStack_278 = pcVar9;
    func_0x000107c613fc(&UNK_1103727f8,0x18,7);
    lVar17 = lStack_258;
    *(long *)(puVar11 + 0x10) = lStack_258;
    appuStack_128[0] = &PTR_DAT_110371488;
    puVar25 = (undefined *)0x0;
    puStack_148 = puVar16;
    puStack_130 = (undefined *)uVar15;
    FUN_100fa0f18();
    puStack_330 = puVar25;
    func_0x000107c613fc();
    func_0x000107c61174(lVar17);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(puVar16);
    pcStack_270 = (code *)uVar23;
    func_0x000107c6157c(uVar23);
    func_0x000107c61474(puVar25);
    *(undefined8 *)(puVar25 + _DAT_112d50a78) = 0;
    *(undefined **)(puVar25 + _DAT_112d50a80) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined8 *)(puVar25 + 0x70) = uVar8;
    *(code **)(puVar25 + 0x78) = pcVar9;
    *(undefined8 *)(puVar25 + 0x80) = uVar23;
    *(undefined8 *)(puVar25 + 0x88) = uVar29;
    FUN_100fbbbdc(&puStack_148,puVar25 + _DAT_112d50a70);
    *(undefined8 *)(puVar25 + 0x90) = 0x100fbbb38;
    *(undefined **)(puVar25 + 0x98) = puVar11;
    uVar22 = 0x112d50c58;
    func_0x0001000285a8(0x112d50c58,&UNK_10d9175c0);
    puStack_298 = *(undefined **)(uVar22 - 8);
    puStack_340 = apcStack_3f0;
    uStack_280 = (undefined *)uVar22;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)((long)puStack_298 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar21 = (long)apcStack_3f0 - extraout_x8;
    lVar17 = 0x112d50c48;
    func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
    lStack_320 = *(long *)(lVar17 + -8);
    lStack_350 = lVar21;
    lStack_318 = lVar17;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(lStack_320 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = lVar21 - extraout_x8_00;
    lVar17 = 0x112d51748;
    func_0x0001000285a8(0x112d51748,&UNK_10d918570);
    lVar27 = *(long *)(lVar17 + -8);
    lStack_348 = lVar20;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar24 = (undefined8 *)(lVar20 - extraout_x8_01);
    *puVar24 = 1;
    uStack_380 = CONCAT44(uStack_380._4_4_,
                          *(undefined4 *)
                           PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
                         );
    (**(code **)(lVar27 + 0x68))
              (puVar24,*(undefined4 *)
                        PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
               ,lVar17);
    iVar7 = 2;
    func_0x000100029b9c(2,0x11,0,0);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(uStack_250);
    func_0x000107c6157c(pcStack_270);
    func_0x000107c6157c(pcStack_278);
    puStack_338 = puVar11;
    func_0x000107c6157c(puVar11);
    if (iVar7 == 0) {
      func_0x000100fbaea8(lVar21,lVar20,puVar24);
    }
    else {
      func_0x000107c5fd10(lVar21,lVar20,&UNK_110376aa8,puVar24,&UNK_110376aa8);
    }
    (**(code **)(lVar27 + 8))(puVar24,lVar17);
    lVar27 = lStack_348;
    lStack_348 = lVar21;
    (**(code **)((long)puStack_298 + 0x10))(puVar25 + _DAT_112d50a50,lVar21,uStack_280);
    lStack_358 = lVar20;
    (**(code **)(lStack_320 + 0x10))(puVar25 + _DAT_112d50a58,lVar20,lStack_318);
    lVar17 = 0x112d50c50;
    func_0x0001000285a8(0x112d50c50,&UNK_10d9175b8);
    lStack_360 = lVar27;
    lStack_378 = *(long *)(lVar17 + -8);
    lStack_368 = lVar17;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(lStack_378 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar27 = lVar27 - extraout_x8_02;
    lVar17 = 0x112d50c88;
    func_0x0001000285a8(0x112d50c88,&UNK_10d917610);
    lStack_388 = *(long *)(lVar17 + -8);
    lStack_370 = lVar27;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(lStack_388 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar20 = lVar27 - extraout_x8_03;
    lVar21 = 0x112d51528;
    func_0x0001000285a8(0x112d51528,&UNK_10d9181c0);
    lVar28 = *(long *)(lVar21 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar24 = (undefined8 *)(lVar20 - extraout_x8_04);
    *puVar24 = 1;
    (**(code **)(lVar28 + 0x68))(puVar24,uStack_380 & 0xffffffff,lVar21);
    if (iVar7 == 0) {
      func_0x000100fbac88(lVar27,lVar20,puVar24);
    }
    else {
      func_0x000107c5fd10(lVar27,lVar20,PTR___sSiN_11034deb0,puVar24,PTR___sSiN_11034deb0);
    }
    (**(code **)(lVar28 + 8))(puVar24,lVar21);
    lVar2 = lStack_368;
    lVar1 = lStack_378;
    (**(code **)(lStack_378 + 0x10))(puVar25 + _DAT_112d50a60,lVar27,lStack_368);
    lVar28 = lStack_388;
    lStack_390 = lVar27;
    (**(code **)(lStack_388 + 0x10))(puVar25 + _DAT_112d50a68,lVar20,lVar17);
    lVar21 = 0x112d50c80;
    func_0x0001000285a8(0x112d50c80,&UNK_10d918580);
    lVar27 = *(long *)(lVar21 + -8);
    uStack_380 = lVar20;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0);
    apuStack_90[0] = (undefined *)0x0;
    func_0x000107c5fd28(lVar20 - extraout_x8_05,apuStack_90,lVar17);
    func_0x000107c61574(uStack_250);
    func_0x000107c61574(pcStack_278);
    func_0x000107c61574(pcStack_270);
    func_0x000107c61574(uStack_210);
    func_0x000107c61574(puStack_338);
    (**(code **)(lVar27 + 8))(lVar20 - extraout_x8_05,lVar21);
    (**(code **)(lVar28 + 8))(lVar20,lVar17);
    (**(code **)(lVar1 + 8))(lStack_390,lVar2);
    (**(code **)(lStack_320 + 8))(lStack_358,lStack_318);
    (**(code **)((long)puStack_298 + 8))(lStack_348,uStack_280);
    func_0x0001000834e4(&puStack_148);
    ppuStack_70 = &PTR_DAT_110371630;
    ppcVar5 = (code **)puStack_340;
    puStack_78 = puStack_330;
    plVar18 = plStack_328;
    pcVar9 = pcStack_208;
  }
  lVar17 = lStack_1f8;
  uVar8 = uStack_200;
  puStack_338 = (undefined *)param_29;
  puStack_340 = (undefined8 *)param_26;
  lStack_348 = param_25;
  lStack_350 = param_24;
  pcStack_270 = (code *)param_18;
  pcStack_278 = (code *)param_17;
  lStack_358 = param_12;
  apuStack_90[0] = puVar25;
  if ((plVar18[1] & 0x3000000000000000U) == 0x2000000000000000) {
    lVar27 = 0;
    ppuStack_98 = (undefined **)0x0;
    plStack_b8 = (long *)0x0;
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    lVar21 = *(long *)(lStack_258 + (long)puStack_260);
    puVar16 = &UNK_110372820;
    lStack_318 = lVar21;
    func_0x000107c613fc(&UNK_110372820,0x18,7);
    *(undefined8 *)(puVar16 + 0x10) = param_12;
    func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
    func_0x000107c613fc();
    func_0x000107c6157c(uStack_210);
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(lVar21);
    func_0x000107c61174(param_12);
    lVar21 = 0x100fbbb40;
    func_0x0001000bdd8c(0x100fbbb40,puVar16);
    puStack_298 = param_19;
    uVar29 = *(undefined8 *)(lVar17 + _DAT_112faccc0);
    lVar27 = 0;
    lStack_320 = lVar21;
    FUN_100f9b1c4();
    lVar21 = lVar27;
    func_0x000107c610f8();
    lVar17 = _DAT_112d50830;
    puStack_148 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001000285a8(0x112d51750,&UNK_10d918590);
    func_0x000107c613fc();
    func_0x000107c6157c(pcVar9);
    uVar23 = uStack_2b0;
    func_0x000107c61174();
    uStack_280 = (undefined *)param_20;
    uVar26 = uStack_2a0;
    func_0x000107c61174();
    func_0x000107c6157c(uVar29);
    ppuVar13 = &puStack_148;
    func_0x00010006c248();
    *(undefined ***)(lVar21 + lVar17) = ppuVar13;
    lVar17 = _DAT_112d50838;
    puStack_148 = (undefined *)0x0;
    func_0x0001000285a8(0x112d51758,&UNK_10d97eb40);
    func_0x000107c613fc();
    ppuVar13 = &puStack_148;
    func_0x00010006c248();
    *(undefined ***)(lVar21 + lVar17) = ppuVar13;
    lVar17 = lVar21 + _DAT_112d50880;
    *(undefined8 *)(lVar17 + 8) = 0;
    func_0x000107c61614(lVar17,0);
    func_0x000107c61614(lVar21 + _DAT_112d50888,0);
    param_20 = (ulong)uStack_280;
    param_19 = puStack_298;
    *(undefined8 *)(lVar21 + _DAT_112d50840) = uStack_210;
    *(undefined8 *)(lVar21 + _DAT_112d50848) = uVar8;
    *(long *)(lVar21 + _DAT_112d50850) = lStack_318;
    *(long *)(lVar21 + _DAT_112d50858) = lStack_320;
    *(undefined8 *)(lVar21 + _DAT_112d50860) = uVar23;
    *(undefined8 *)(lVar21 + _DAT_112d50868) = uVar26;
    *(undefined8 *)(lVar21 + _DAT_112d50870) = uVar29;
    *(code **)(lVar21 + _DAT_112d50878) = pcVar9;
    plVar18 = &lStack_c8;
    lStack_c8 = lVar21;
    lStack_c0 = lVar27;
    func_0x000107c61154(plVar18,PTR_s_init_1125d9248);
    ppuStack_98 = &PTR_DAT_110371398;
    plStack_b8 = plVar18;
  }
  puVar16 = &UNK_110372848;
  lStack_a0 = lVar27;
  func_0x000107c613fc(&UNK_110372848,0x18,7);
  puVar19 = puStack_268;
  *(undefined **)(puVar16 + 0x10) = puStack_268;
  uStack_280 = puVar16;
  FUN_100fbbbdc(apuStack_90,appuStack_128);
  puVar11 = &UNK_110372870;
  func_0x000107c613fc(&UNK_110372870,0x30,7);
  pcVar10 = pcStack_270;
  pcVar9 = pcStack_278;
  *(code **)(puVar11 + 0x10) = pcStack_278;
  *(code **)(puVar11 + 0x18) = pcStack_270;
  *(undefined **)(puVar11 + 0x20) = param_19;
  *(ulong *)(puVar11 + 0x28) = param_20;
  puVar25 = &UNK_110372898;
  func_0x000107c613fc(&UNK_110372898,0x20,7);
  *(code **)(puVar25 + 0x10) = FUN_100fbbb90;
  *(undefined **)(puVar25 + 0x18) = puVar11;
  func_0x0001000285a8(0x112d51760,&UNK_10d9185b0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lStack_318 = (long)pcVar9;
  func_0x000107c61174();
  lStack_320 = (long)pcVar10;
  func_0x000107c61174();
  plStack_328 = (long *)param_19;
  func_0x000107c61174();
  uVar8 = 0x100fbbb9c;
  func_0x0001000bdd8c(0x100fbbb9c,puVar25);
  puVar11 = &UNK_1103728c0;
  pcStack_278 = (code *)uVar8;
  func_0x000107c613fc(&UNK_1103728c0,0x18,7);
  *(ulong *)(puVar11 + 0x10) = param_20;
  func_0x0001000285a8(0x112d51768,&UNK_10d918bc0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar9 = FUN_100fbbba0;
  puStack_330 = (undefined *)param_20;
  func_0x0001000bdd8c(FUN_100fbbba0,puVar11);
  puStack_298 = puVar19;
  pcStack_270 = pcVar9;
  func_0x000107c61170(puVar19);
  FUN_100fbc0ec(&plStack_b8,auStack_f0,0x112d50e30,&UNK_10d9185c0);
  ppuStack_140 = &PTR_DAT_1106a7b10;
  puStack_138 = &UNK_10d9185a8;
  uVar23 = uStack_220;
  puStack_148 = puVar19;
  puStack_130 = puVar16;
  uStack_100 = uVar8;
  pcStack_f8 = pcVar9;
  func_0x000107c4cca8();
  func_0x000107c61180();
  uVar8 = uVar23;
  func_0x0001000bda74();
  uStack_398 = uVar8;
  func_0x000107c61170(uVar23);
  uVar8 = uStack_230;
  func_0x000107c4cd6c();
  func_0x000107c61180();
  uVar23 = uVar8;
  func_0x0001000bda74();
  uStack_3a8 = uVar23;
  func_0x000107c61170(uVar8);
  uVar23 = *(undefined8 *)(lStack_1f8 + _DAT_112faccc0);
  FUN_100fbc0ec(auStack_f0,&lStack_170,0x112d50e30,&UNK_10d9185c0);
  uVar8 = uVar23;
  apcStack_3f0[3] = (code *)uVar23;
  func_0x000107c6157c();
  func_0x000103fbdbb8();
  uVar26 = *(undefined8 *)(lStack_238 + _DAT_112facd00);
  lVar20 = 0;
  func_0x000100faa680();
  lVar17 = lVar20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar17 + 0x10) = uVar23;
  *(undefined8 *)(lVar17 + 0x18) = uVar8;
  *(undefined8 *)(lVar17 + 0x20) = uVar26;
  puStack_268 = (undefined *)lVar17;
  func_0x0001000285a8(0x112d51770,&UNK_10d918bd0);
  func_0x000107c6157c(uVar26);
  uVar8 = uStack_218;
  func_0x000107c5b900();
  func_0x000107c61180();
  uVar23 = uVar8;
  func_0x0001000bda74();
  uStack_288 = uVar23;
  func_0x000107c61170(uVar8);
  puVar16 = &UNK_1103728e8;
  func_0x000107c613fc(&UNK_1103728e8,0x40,7);
  lVar27 = lStack_258;
  pcVar10 = pcStack_290;
  puVar11 = puStack_338;
  puVar24 = puStack_340;
  lVar21 = lStack_348;
  lVar17 = lStack_350;
  *(long *)(puVar16 + 0x10) = lStack_258;
  *(long *)(puVar16 + 0x18) = lStack_350;
  *(long *)(puVar16 + 0x20) = lStack_348;
  *(undefined8 **)(puVar16 + 0x28) = puStack_340;
  *(undefined **)(puVar16 + 0x30) = puStack_338;
  *(code **)(puVar16 + 0x38) = pcStack_290;
  func_0x0001000285a8(0x112d51778,&UNK_10d9185d0);
  func_0x000107c613fc();
  func_0x000107c61174();
  lStack_310 = lVar27;
  func_0x000107c61174();
  func_0x000107c61174();
  lStack_350 = lVar21;
  func_0x000107c61174();
  lStack_360 = (long)puVar24;
  func_0x000107c61174();
  lStack_368 = (long)puVar11;
  func_0x000107c61174();
  pcVar9 = FUN_100fbbbd0;
  lStack_370 = (long)pcVar10;
  func_0x0001000bdd8c();
  apcStack_3f0[2] = pcVar9;
  lStack_348 = lVar17;
  func_0x000103a7f694();
  uVar8 = 0x100fc4a98;
  puStack_340 = (undefined8 *)puVar16;
  pcStack_290 = pcVar9;
  func_0x0001000cb480(0x100fc4a98,0,PTR___sSbN_11034dd40);
  puVar16 = &UNK_110372910;
  apcStack_3f0[1] = (code *)uVar8;
  func_0x000107c613fc(&UNK_110372910,0x18,7);
  lVar17 = lStack_358;
  *(long *)(puVar16 + 0x10) = lStack_358;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar23 = 0x100fbbbd4;
  puStack_338 = (undefined *)lVar17;
  func_0x0001000bdd8c(0x100fbbbd4,puVar16);
  puVar16 = puStack_268;
  ppuStack_178 = &PTR_DAT_110371cc0;
  alStack_198[0] = (long)puStack_268;
  lVar27 = 0;
  lStack_258 = uVar23;
  lStack_180 = lVar20;
  FUN_100fc3470();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_198,lVar20);
  puStack_260 = (undefined1 *)ppcVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  puVar24 = (undefined8 *)((long)ppcVar5 + -(extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar24);
  auStack_1c0[0] = *puVar24;
  ppuStack_1a0 = &PTR_DAT_110371cc0;
  lStack_1a8 = lVar20;
  func_0x000107c61614(lVar27 + _DAT_112d51890,0);
  func_0x000107c61614(lVar27 + _DAT_112d51898,0);
  *(undefined8 *)(lVar27 + _DAT_1137ff110) = 0;
  lVar17 = _DAT_112d518a0;
  lStack_1f0 = 0;
  func_0x0001000285a8(0x112d51780,&UNK_10d9186d0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar16);
  plVar18 = &lStack_1f0;
  func_0x00010006c248();
  *(long **)(lVar27 + lVar17) = plVar18;
  *(undefined **)(lVar27 + 0x10) = puStack_298;
  *(undefined ***)(lVar27 + 0x18) = &PTR_DAT_1106a7b10;
  *(undefined **)(lVar27 + 0x20) = &UNK_10d9185a8;
  *(undefined **)(lVar27 + 0x28) = uStack_280;
  FUN_100fbbbdc(appuStack_128,lVar27 + 0x30);
  uVar29 = uStack_398;
  pcVar9 = apcStack_3f0[3];
  *(undefined8 *)(lVar27 + 0x58) = uStack_248;
  *(code **)(lVar27 + 0x60) = pcStack_278;
  *(code **)(lVar27 + 0x68) = pcStack_270;
  *(undefined8 *)(lVar27 + 0x70) = uStack_398;
  *(code **)(lVar27 + 0x78) = apcStack_3f0[3];
  FUN_100fbc0ec(&lStack_170,lVar27 + 0x80,0x112d50e30,&UNK_10d9185c0);
  FUN_100fbbbdc(auStack_1c0,lVar27 + 0xa8);
  uVar15 = uStack_200;
  pcVar3 = pcStack_208;
  pcVar12 = pcStack_290;
  uVar26 = uStack_3a8;
  pcVar10 = apcStack_3f0[2];
  *(undefined8 *)(lVar27 + 0xd0) = uStack_3a8;
  *(undefined8 *)(lVar27 + 0xd8) = uStack_200;
  *(code **)(lVar27 + 0xe0) = pcStack_208;
  *(undefined8 *)(lVar27 + 0xe8) = uStack_288;
  *(undefined8 *)(lVar27 + 0xf0) = uVar8;
  *(undefined8 *)(lVar27 + 0xf8) = uVar23;
  *(code **)(lVar27 + 0x100) = apcStack_3f0[2];
  *(code **)(lVar27 + 0x108) = pcStack_290;
  *(undefined8 **)(lVar27 + 0x110) = puStack_340;
  lVar17 = 0x112d51788;
  func_0x0001000285a8(0x112d51788,&UNK_10d9185e0);
  uStack_380 = *(long *)(lVar17 + -8);
  lStack_378 = lVar17;
  puStack_340 = puVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(uStack_380 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)puVar24 - extraout_x8_07;
  lVar17 = 0x112d51790;
  lStack_388 = lVar21;
  func_0x0001000285a8(0x112d51790,&UNK_10d918ae0);
  lStack_3a0 = *(long *)(lVar17 + -8);
  lStack_390 = lVar17;
  lStack_358 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_3a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar21 - extraout_x8_08;
  lVar17 = 0x112d51798;
  lStack_3b0 = lVar21;
  func_0x0001000285a8(0x112d51798,&UNK_10d9185f0);
  lStack_3b8 = lVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar24 = (undefined8 *)(lVar21 - extraout_x8_09);
  *puVar24 = 1;
  puStack_3d0 = puVar24;
  lStack_3c8 = extraout_x12_00;
  lStack_3c0 = lVar17;
  (**(code **)(extraout_x12_00 + 0x68))
            (puVar24,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
            );
  iVar7 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar15);
  func_0x000107c61174(puStack_298);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(uStack_280);
  func_0x000107c61174();
  uVar8 = uStack_288;
  func_0x000107c6157c(pcStack_278);
  func_0x000107c6157c(pcStack_270);
  func_0x000107c6157c(uVar29);
  func_0x000107c6157c(uVar26);
  func_0x000107c6157c(uVar8);
  pcVar9 = apcStack_3f0[1];
  func_0x000107c6157c();
  func_0x000107c6157c(lStack_258);
  func_0x000107c6157c(pcVar10);
  func_0x000107c615f0(pcVar12);
  lVar21 = lStack_388;
  lVar17 = lStack_3b0;
  puVar24 = puStack_3d0;
  if (iVar7 == 0) {
    func_0x000100fbb2e8(lStack_388,lStack_3b0,puStack_3d0);
  }
  else {
    func_0x000107c5fd10(lStack_388,lStack_3b0,&UNK_110376c30,puStack_3d0,&UNK_110376c30);
  }
  func_0x000107c61170(lStack_348);
  func_0x000107c61170(lStack_350);
  func_0x000107c61170(lStack_360);
  func_0x000107c61170(lStack_368);
  func_0x000107c61170(lStack_370);
  func_0x000107c61574(puStack_268);
  func_0x000107c61170(uStack_248);
  func_0x000107c61574(uVar29);
  func_0x000107c61574(uVar26);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(lStack_258);
  func_0x000107c61574(pcVar10);
  func_0x000107c615e8(pcStack_290);
  func_0x000107c61170(uStack_240);
  func_0x000107c61170(lStack_310);
  func_0x000107c61170(lStack_238);
  func_0x000107c61170(uStack_2c0);
  func_0x000107c61170(uStack_220);
  func_0x000107c61170(uStack_230);
  func_0x000107c61170(uStack_228);
  func_0x000107c61170(uStack_218);
  func_0x000107c61574(puStack_308);
  func_0x000107c61170(uStack_2d0);
  func_0x000107c61170(uStack_2e0);
  func_0x000107c61170(uStack_2e8);
  func_0x000107c61170(uStack_2f0);
  func_0x000107c61574(uStack_2c8);
  func_0x000107c61574(pcStack_2d8);
  func_0x000107c61574(uStack_210);
  func_0x000107c61574(pcStack_208);
  func_0x000107c61170(uStack_2f8);
  func_0x000107c61170(uStack_300);
  func_0x000107c61574(uStack_250);
  func_0x000107c61170(uStack_2a8);
  func_0x000107c61574(uStack_200);
  func_0x000107c61170(puStack_338);
  func_0x000107c61170(uStack_2b0);
  func_0x000107c61170(uStack_2a0);
  func_0x000107c61170(lStack_318);
  func_0x000107c61170(lStack_320);
  func_0x000107c61170(plStack_328);
  func_0x000107c61170(puStack_330);
  (**(code **)(lStack_3c8 + 8))(puVar24,lStack_3c0);
  func_0x000107c61170(lStack_1f8);
  func_0x0001000834e4(auStack_1c0);
  (**(code **)(uStack_380 + 0x20))(lVar27 + _DAT_112d51880,lVar21,lStack_378);
  (**(code **)(lStack_3a0 + 0x20))(lVar27 + _DAT_112d51888,lVar17,lStack_390);
  uStack_1e8 = uStack_168;
  lStack_1f0 = lStack_170;
  lStack_1d8 = lStack_158;
  uStack_1e0 = uStack_160;
  uStack_1d0 = uStack_150;
  if (lStack_158 == 0) {
    func_0x000100fbc134(&lStack_1f0,0x112d50e30,&UNK_10d9185c0);
  }
  else {
    plVar18 = &lStack_1f0;
    func_0x0001000a8868();
    lVar17 = *plVar18 + _DAT_112d50880;
    *(undefined ***)(lVar17 + 8) = &PTR_DAT_110372a58;
    func_0x000107c61604(lVar17,lVar27);
    func_0x0001000834e4(&lStack_1f0);
  }
  func_0x0001000834e4(alStack_198);
  func_0x000100fbbc20(&puStack_148);
  func_0x000100fbc134(&plStack_b8,0x112d50e30,&UNK_10d9185c0);
  func_0x0001000834e4(apuStack_90);
  *(long *)(lStack_2b8 + 0x10) = lVar27;
  return;
}



/* Entry: 100fb9f04; end: 100fb9f43;  */

void FUN_100fb9f04(void)

{
  func_0x000103a76c34();
  return;
}



/* Entry: 100fb9f44; end: 100fba11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fb9f44(long *param_1,float param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_80;
  long lStack_78;
  
  func_0x0001000d224c(&lStack_80);
  lVar4 = lStack_78;
  lVar2 = lStack_80;
  lVar3 = lStack_80;
  func_0x000107c614f0();
  lVar6 = *(long *)(lVar4 + 0x20);
  lVar4 = lVar3;
  (**(code **)(lVar6 + 0x18))();
  (**(code **)(lVar6 + 0x20))(lVar3,lVar6);
  uVar7 = *(undefined8 *)(param_5 + _DAT_112d62a10);
  bVar1 = lVar4 < 1;
  if (bVar1) {
    lVar3 = 0;
    FUN_100f99990();
    lVar4 = lVar3;
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(double *)(lVar4 + 0x18) = (double)param_2;
    *(undefined1 *)(lVar4 + 0x20) = 0;
    param_1[3] = lVar3;
    param_1[4] = (long)&PTR_DAT_110371150;
    *param_1 = lVar4;
    func_0x000107c6157c(uVar7);
    func_0x0001000d224c(&lStack_80);
    lVar3 = lStack_80;
    func_0x000107c614f0(lStack_80);
    pcVar5 = *(code **)(lStack_78 + 8);
    lVar4 = 0;
    lVar6 = lStack_80;
  }
  else {
    lVar6 = 0;
    func_0x000100f99e34();
    func_0x000107c613fc();
    func_0x000107c6157c(uVar7);
    lVar3 = lVar4;
    FUN_100f99d6c(lVar4,uVar7,(double)param_2,0);
    param_1[3] = lVar6;
    param_1[4] = (long)&PTR_DAT_110371368;
    *param_1 = lVar3;
    func_0x0001000d224c(&lStack_80);
    lVar3 = lStack_80;
    func_0x000107c614f0(lStack_80);
    pcVar5 = *(code **)(lStack_78 + 8);
    lVar6 = lStack_80;
  }
  (*pcVar5)(lVar4,bVar1,lVar3,lStack_78);
  func_0x000107c615e8(lVar6);
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 100fba120; end: 100fba273;  */

/* WARNING: Possible PIC construction at 0x000100fba234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fba244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fba238) */
/* WARNING: Removing unreachable block (ram,0x000100fba248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fba120(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  uVar5 = *(undefined8 *)(param_4 + _DAT_112d62a10);
  lVar3 = 0;
  func_0x000100fae29c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(undefined8 *)(lVar4 + 0x28) = param_5;
  *(undefined8 *)(lVar4 + 0x30) = param_6;
  *(undefined8 *)(lVar4 + 0x38) = param_7;
  *(undefined8 *)(lVar4 + 0x40) = param_8;
  *(undefined1 *)(lVar4 + 0x48) = param_9;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1103722d8;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar5);
  return;
}



/* Entry: 100fba274; end: 100fba40f;  */

void FUN_100fba274(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3ef74();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100fba410; end: 100fba44f;  */

void FUN_100fba410(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fba428,0,0);
  return;
}



/* Entry: 100fba450; end: 100fba4bf;  */

void FUN_100fba450(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar1 + 0x70,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x70;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fba4c0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fba4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fba4c0; end: 100fba553;  */

void FUN_100fba4c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  lVar1 = lVar3;
  func_0x000107c4ffc8(lVar3,param_2,*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  func_0x000107c615e8(lVar3);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    func_0x000107c614f0();
    plVar2 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100fba554;
    plVar2[3] = lVar3;
    plVar2[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc3c4,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fba550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fba554; end: 100fba597;  */

void FUN_100fba554(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fba594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 100fba598; end: 100fba69b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fba598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  func_0x000107c42d48();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_100fb2dc4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112d51558;
  lVar5 = 0x112d515a0;
  func_0x0001000285a8(0x112d515a0,&UNK_10d918670);
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar4 + lVar2,1,1,lVar5);
  *(undefined8 *)(lVar4 + _DAT_112d51538) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112d51540) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112d51548) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112d51550) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_60,puVar1);
  return;
}



/* Entry: 100fba69c; end: 100fba707;  */

void FUN_100fba69c(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  
  (*param_2)();
  uVar1 = 0;
  FUN_100fb2dc4();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110372510;
  *param_1 = param_2;
  return;
}



/* Entry: 100fba708; end: 100fba7ff;  */

undefined * FUN_100fba708(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_110372938;
  func_0x000107c613fc(&UNK_110372938,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  func_0x000107c61174(puVar1);
  func_0x000107c6157c(uVar3);
  uVar3 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10d918600,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  puVar2 = puVar1;
  func_0x000107c4f3ec(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100fba800; end: 100fba817;  */

void FUN_100fba800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fba818,0,0);
  return;
}



/* Entry: 100fba818; end: 100fba913;  */

void FUN_100fba818(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  FUN_100fbbbdc(lVar4 + 0x30,unaff_x22 + 0x10);
  puVar1 = &UNK_110372978;
  func_0x000107c613fc(&UNK_110372978,0x50,7);
  *(long *)(puVar1 + 0x10) = lVar4;
  FUN_100fbbf40(unaff_x22 + 0x10,puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x48) = uVar6;
  *(undefined8 *)(puVar1 + 0x40) = uVar5;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(lVar4);
  uVar3 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918680,puVar1,PTR___sytN_11034f1b0 + 8);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  func_0x000107c61574(puVar1);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fba914;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 100fba914; end: 100fba9bf;  */

void FUN_100fba914(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fba964,0,0);
  return;
}



/* Entry: 100fba9c0; end: 100fbaa4f;  */

/* WARNING: Possible PIC construction at 0x000100fbaa18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fbaa1c) */

void FUN_100fba9c0(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918678,uVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 100fbaa50; end: 100fbaa67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbaa50(long *param_1,float param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lStack_80;
  long lStack_78;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x0001000d224c(&lStack_80);
  lVar4 = lStack_78;
  lVar2 = lStack_80;
  lVar3 = lStack_80;
  func_0x000107c614f0();
  lVar7 = *(long *)(lVar4 + 0x20);
  lVar4 = lVar3;
  (**(code **)(lVar7 + 0x18))();
  (**(code **)(lVar7 + 0x20))(lVar3,lVar7);
  uVar8 = *(undefined8 *)(lVar5 + _DAT_112d62a10);
  bVar1 = lVar4 < 1;
  if (bVar1) {
    lVar3 = 0;
    FUN_100f99990();
    lVar4 = lVar3;
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x10) = uVar8;
    *(double *)(lVar4 + 0x18) = (double)param_2;
    *(undefined1 *)(lVar4 + 0x20) = 0;
    param_1[3] = lVar3;
    param_1[4] = (long)&PTR_DAT_110371150;
    *param_1 = lVar4;
    func_0x000107c6157c(uVar8);
    func_0x0001000d224c(&lStack_80);
    lVar3 = lStack_80;
    func_0x000107c614f0(lStack_80);
    pcVar6 = *(code **)(lStack_78 + 8);
    lVar4 = 0;
    lVar5 = lStack_80;
  }
  else {
    lVar5 = 0;
    func_0x000100f99e34();
    func_0x000107c613fc();
    func_0x000107c6157c(uVar8);
    lVar3 = lVar4;
    FUN_100f99d6c(lVar4,uVar8,(double)param_2,0);
    param_1[3] = lVar5;
    param_1[4] = (long)&PTR_DAT_110371368;
    *param_1 = lVar3;
    func_0x0001000d224c(&lStack_80);
    lVar3 = lStack_80;
    func_0x000107c614f0(lStack_80);
    pcVar6 = *(code **)(lStack_78 + 8);
    lVar5 = lStack_80;
  }
  (*pcVar6)(lVar4,bVar1,lVar3,lStack_78);
  func_0x000107c615e8(lVar5);
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 100fbaa68; end: 100fbb507;  */

void FUN_100fbaa68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lVar2 = 0x112d51860;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112d51860,&UNK_10d9186a0);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar3 = 0x112d50a30;
  func_0x0001000285a8(0x112d50a30,&UNK_10d917400);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0x112d51868;
  func_0x0001000285a8(0x112d51868,&UNK_10d9186b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0x112d50a48;
  func_0x0001000285a8(0x112d50a48,&UNK_10d917438);
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,lVar4);
  (**(code **)(lVar6 + 0x10))(puVar11,uStack_90,lVar2);
  lStack_70 = lVar9;
  func_0x000107c5fd48(lVar7,&UNK_110376b20,puVar11,0x100fbc0b4,auStack_80,&UNK_110376b20);
  (**(code **)(lVar5 + 0x10))(uStack_88,lVar7,lVar3);
  FUN_100fbc0ec(lVar9,lVar8,0x112d51868,&UNK_10d9186b0);
  lVar2 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,lVar3);
    (**(code **)(lVar10 + 0x20))(uStack_98,lVar8,lVar4);
    func_0x000100fbc134(lVar9,0x112d51868,&UNK_10d9186b0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fbac88);
  (*pcVar1)();
}



/* Entry: 100fbb508; end: 100fbb583;  */

void FUN_100fbb508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  func_0x000100fbc134(param_2,param_3,param_4);
  func_0x0001000285a8(param_5,param_6);
  lVar1 = *(long *)(param_5 + -8);
  (**(code **)(lVar1 + 0x10))(param_2,param_1,param_5);
                    /* WARNING: Could not recover jumptable at 0x000100fbb580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(param_2,0,1,param_5);
  return;
}



/* Entry: 100fbb584; end: 100fbbb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100fbb584(ulong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long alStack_c0 [4];
  long lStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  uVar3 = 0;
  uStack_90 = param_2;
  FUN_100f9f050();
  ppuStack_68 = &PTR_DAT_110371488;
  lVar4 = 0;
  auStack_88[0] = param_3;
  uStack_70 = uVar3;
  FUN_100fb21bc();
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(lVar4 + _DAT_112d513c0) = 0;
  *(ulong *)(lVar4 + 0x70) = param_1;
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = uStack_90;
  *(ulong *)(lVar4 + 0xb0) = uVar5;
  *(undefined8 *)(lVar4 + 0x78) = uStack_90;
  FUN_100fbbbdc(auStack_88,lVar4 + 0x80);
  *(byte *)(lVar4 + 0xa8) = param_4 & 1;
  lVar6 = 0x112d50c58;
  func_0x0001000285a8(0x112d50c58,&UNK_10d9175c0);
  alStack_c0[3] = *(long *)(lVar6 + -8);
  lStack_a0 = lVar6;
  puStack_98 = (undefined1 *)alStack_c0;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_c0[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)alStack_c0 - extraout_x8;
  lVar6 = 0x112d50c48;
  func_0x0001000285a8(0x112d50c48,&UNK_10d9175b0);
  lVar8 = *(long *)(lVar6 + -8);
  alStack_c0[2] = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_00;
  lVar7 = 0x112d51748;
  func_0x0001000285a8(0x112d51748,&UNK_10d918570);
  lVar9 = *(long *)(lVar7 + -8);
  alStack_c0[1] = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)(lVar11 - extraout_x8_01);
  *puVar12 = 1;
  (**(code **)(lVar9 + 0x68))
            (puVar12,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
             ,lVar7);
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  func_0x000107c6157c(uVar3);
  if (iVar2 == 0) {
    func_0x000100fbaea8(lVar10,lVar11,puVar12);
  }
  else {
    func_0x000107c5fd10(lVar10,lVar11,&UNK_110376aa8,puVar12,&UNK_110376aa8);
  }
  (**(code **)(lVar9 + 8))(puVar12,lVar7);
  lVar1 = lStack_a0;
  lVar9 = alStack_c0[3];
  (**(code **)(alStack_c0[3] + 0x10))(lVar4 + _DAT_112d513b0,lVar10,lStack_a0);
  lVar7 = lVar4 + _DAT_112d513b8;
  (**(code **)(lVar8 + 0x10))(lVar7,lVar11,lVar6);
  func_0x000100fb1730();
  func_0x000107c61574(uStack_90);
  (**(code **)(lVar8 + 8))(lVar11,lVar6);
  (**(code **)(lVar9 + 8))(lVar10,lVar1);
  func_0x0001000834e4(auStack_88);
  uVar3 = *(undefined8 *)(lVar4 + _DAT_112d513c0);
  *(long *)(lVar4 + _DAT_112d513c0) = lVar7;
  func_0x000107c61574(uVar3);
  return lVar4;
}



/* Entry: 100fbbb30; end: 100fbbb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbbb30(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11303eae0);
  lVar2 = 0;
  func_0x000100fb8630();
  lVar3 = lVar2;
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c61474(lVar3);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar3 + 0x70) = uVar4;
  *(undefined **)(lVar3 + 0x78) = puVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1103726e8;
  *param_1 = lVar3;
  return;
}



/* Entry: 100fbbb44; end: 100fbbb8f;  */

void FUN_100fbbb44(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fbc174;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fba428,0,0);
  return;
}



/* Entry: 100fbbb90; end: 100fbbb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbbb90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c42d48();
  func_0x000107c61180();
  lVar7 = 0;
  FUN_100fb2dc4();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar5 = _DAT_112d51558;
  lVar9 = 0x112d515a0;
  func_0x0001000285a8(0x112d515a0,&UNK_10d918670);
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar8 + lVar5,1,1,lVar9);
  *(undefined8 *)(lVar8 + _DAT_112d51538) = uVar1;
  *(undefined8 *)(lVar8 + _DAT_112d51540) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112d51548) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112d51550) = uVar6;
  puVar4 = PTR_s_init_1125d9248;
  lStack_60 = lVar8;
  lStack_58 = lVar7;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61154(&lStack_60,puVar4);
  return;
}



/* Entry: 100fbbba0; end: 100fbbbcf;  */

void FUN_100fbbba0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c42d48();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 100fbbbd0; end: 100fbbbdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbbbd0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000d224c(&lStack_90,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar1 = lStack_90;
  func_0x000107c614f0();
  lStack_68 = lStack_90;
  lVar11 = *(long *)(lStack_88 + 0x20);
  (**(code **)(lVar11 + 0x38))();
  func_0x000107c615e8();
  lVar2 = lStack_90;
  func_0x000103a7f694();
  uVar13 = *(undefined8 *)(lVar7 + _DAT_11307a4a0);
  puVar3 = &UNK_110372e38;
  func_0x000107c613fc(&UNK_110372e38,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  func_0x0001000285a8(0x112d51a68,&UNK_10d918aa8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar12);
  pcVar4 = FUN_100fc4b80;
  func_0x0001000bdd8c(FUN_100fc4b80,puVar3);
  puVar3 = &UNK_110372e60;
  func_0x000107c613fc(&UNK_110372e60,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  func_0x0001000285a8(0x112d51a70,&UNK_10d918ab0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  uVar5 = 0x100fc4b88;
  func_0x0001000bdd8c(0x100fc4b88,puVar3);
  lVar6 = 0;
  func_0x000100fa6138();
  lVar7 = lVar6;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined **)(lVar7 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar12 = *(undefined8 *)(lVar9 + _DAT_113091b70);
  *(code **)(lVar7 + 0x70) = pcVar4;
  *(undefined8 *)(lVar7 + 0x78) = uVar5;
  ppuStack_70 = &PTR_DAT_110371a48;
  lVar8 = 0;
  lStack_90 = lVar7;
  lStack_78 = lVar6;
  FUN_100fa5284();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar7 = lVar9 + _DAT_112d50df0;
  *(undefined8 *)(lVar7 + 8) = 0;
  func_0x000107c61614(lVar7,0);
  func_0x000107c61614(lVar9 + _DAT_112d50df8,0);
  *(undefined8 *)(lVar9 + _DAT_112d50e00) = 0;
  *(long *)(lVar9 + _DAT_112d50dc8) = lVar1;
  plVar10 = (long *)(lVar9 + _DAT_112d50dd0);
  *plVar10 = lVar2;
  plVar10[1] = lVar11;
  *(undefined8 *)(lVar9 + _DAT_112d50dd8) = uVar13;
  FUN_100fa7d84(&lStack_90,lVar9 + _DAT_112d50de0);
  *(undefined8 *)(lVar9 + _DAT_112d50de8) = uVar12;
  puVar3 = PTR_s_init_1125d9248;
  lStack_a0 = lVar9;
  lStack_98 = lVar8;
  func_0x000107c61174(uVar13);
  func_0x000107c615f0(uVar12);
  plVar10 = &lStack_a0;
  func_0x000107c61154(plVar10,puVar3);
  func_0x0001000834e4(&lStack_90);
  *param_1 = (long)plVar10;
  param_1[1] = (long)&PTR_DAT_110371918;
  return;
}



/* Entry: 100fbbbdc; end: 100fbbc53;  */

long FUN_100fbbbdc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fbbc54; end: 100fbbc73;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_100fbbc54(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1c & 3;
  if ((uVar2 < 2) && (uVar2 != 0)) {
    uVar1 = uVar1 >> 0x1e;
    if (uVar1 == 1) {
      param_1 = param_2 & 0xfffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 100fbbc74; end: 100fbbcfb;  */

void FUN_100fbbc74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fbbcfc; end: 100fbbd13;  */

/* WARNING: Possible PIC construction at 0x000100fba234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fba244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fba238) */
/* WARNING: Removing unreachable block (ram,0x000100fba248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbbcfc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x48);
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x000107c4cb6c();
  func_0x000107c61180();
  uVar5 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(lVar8 + _DAT_112d62a10);
  lVar7 = 0;
  func_0x000100fae29c();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar6;
  *(undefined8 *)(lVar8 + 0x18) = uVar5;
  *(undefined8 *)(lVar8 + 0x20) = uVar10;
  *(undefined8 *)(lVar8 + 0x28) = uVar2;
  *(undefined8 *)(lVar8 + 0x30) = uVar1;
  *(undefined8 *)(lVar8 + 0x38) = uVar3;
  *(undefined8 *)(lVar8 + 0x40) = uVar9;
  *(undefined1 *)(lVar8 + 0x48) = uVar4;
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_1103722d8;
  *param_1 = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar10);
  return;
}



/* Entry: 100fbbd14; end: 100fbbd57;  */

void FUN_100fbbd14(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010079b778();
  uVar1 = param_2;
  func_0x000107c4cac0();
  func_0x000107c615e8(param_2);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 100fbbd58; end: 100fbbd93;  */

void FUN_100fbbd58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fbbd94; end: 100fbbdd3;  */

void FUN_100fbbd94(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = 0;
  FUN_100fb2dc4();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110372510;
  *param_1 = param_2;
  return;
}



/* Entry: 100fbbdd4; end: 100fbbe1f;  */

void FUN_100fbbdd4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fbbe20; end: 100fbbe2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fbbe20(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000d224c(&lStack_90,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar1 = lStack_90;
  func_0x000107c614f0();
  lStack_68 = lStack_90;
  lVar11 = *(long *)(lStack_88 + 0x20);
  (**(code **)(lVar11 + 0x38))();
  func_0x000107c615e8();
  lVar2 = lStack_90;
  func_0x000103a7f694();
  uVar13 = *(undefined8 *)(lVar7 + _DAT_11307a4a0);
  puVar3 = &UNK_110372e38;
  func_0x000107c613fc(&UNK_110372e38,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar12;
  func_0x0001000285a8(0x112d51a68,&UNK_10d918aa8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar12);
  pcVar4 = FUN_100fc4b80;
  func_0x0001000bdd8c(FUN_100fc4b80,puVar3);
  puVar3 = &UNK_110372e60;
  func_0x000107c613fc(&UNK_110372e60,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  func_0x0001000285a8(0x112d51a70,&UNK_10d918ab0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar5);
  uVar5 = 0x100fc4b88;
  func_0x0001000bdd8c(0x100fc4b88,puVar3);
  lVar6 = 0;
  func_0x000100fa6138();
  lVar7 = lVar6;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined **)(lVar7 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar12 = *(undefined8 *)(lVar9 + _DAT_113091b70);
  *(code **)(lVar7 + 0x70) = pcVar4;
  *(undefined8 *)(lVar7 + 0x78) = uVar5;
  ppuStack_70 = &PTR_DAT_110371a48;
  lVar8 = 0;
  lStack_90 = lVar7;
  lStack_78 = lVar6;
  FUN_100fa5284();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar7 = lVar9 + _DAT_112d50df0;
  *(undefined8 *)(lVar7 + 8) = 0;
  func_0x000107c61614(lVar7,0);
  func_0x000107c61614(lVar9 + _DAT_112d50df8,0);
  *(undefined8 *)(lVar9 + _DAT_112d50e00) = 0;
  *(long *)(lVar9 + _DAT_112d50dc8) = lVar1;
  plVar10 = (long *)(lVar9 + _DAT_112d50dd0);
  *plVar10 = lVar2;
  plVar10[1] = lVar11;
  *(undefined8 *)(lVar9 + _DAT_112d50dd8) = uVar13;
  FUN_100fa7d84(&lStack_90,lVar9 + _DAT_112d50de0);
  *(undefined8 *)(lVar9 + _DAT_112d50de8) = uVar12;
  puVar3 = PTR_s_init_1125d9248;
  lStack_a0 = lVar9;
  lStack_98 = lVar8;
  func_0x000107c61174(uVar13);
  func_0x000107c615f0(uVar12);
  plVar10 = &lStack_a0;
  func_0x000107c61154(plVar10,puVar3);
  func_0x0001000834e4(&lStack_90);
  *param_1 = (long)plVar10;
  param_1[1] = (long)&PTR_DAT_110371918;
  return;
}



/* Entry: 100fbbe30; end: 100fbbe93;  */

void FUN_100fbbe30(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fbc178;
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fba818,0,0);
  return;
}



/* Entry: 100fbbe94; end: 100fbbeeb;  */

void FUN_100fbbe94(void)

{
  func_0x000107c61168(&PTR_PTR_112d517e0);
  return;
}



/* Entry: 100fbbeec; end: 100fbbf3f;  */

void FUN_100fbbeec(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fbc17c;
  plVar1[0x18] = unaff_x20;
  lVar2 = 0;
  func_0x0001038e5950();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x19] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc78c,0,0);
  return;
}



/* Entry: 100fbbf40; end: 100fbbf57;  */

undefined8 * FUN_100fbbf40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100fbbf58; end: 100fbbfcf;  */

void FUN_100fbbf58(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fbbfd0;
  plVar3[4] = lVar1;
  plVar3[5] = lVar2;
  plVar3[2] = lVar5;
  plVar3[3] = unaff_x20 + 0x18;
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  plVar3[6] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_100fbf9b0;
  plVar4[2] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fbbfd0; end: 100fbc0eb;  */

void FUN_100fbbfd0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fbc008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fbc0ec; end: 100fbc173;  */

undefined8 FUN_100fbc0ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100fbc174; end: 100fbc197;  */

void FUN_100fbc174(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fbc008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fbc198; end: 100fbc29b;  */

/* WARNING: Removing unreachable block (ram,0x000100fbc1c4) */

void FUN_100fbc198(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_100fc2e7c();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x0001000285a8(0x112d51a50,&UNK_10d9189d0);
  puVar1 = &UNK_110372c50;
  func_0x000107c613fc(&UNK_110372c50,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  func_0x000107c615f0(uVar2);
  uVar2 = 0;
  func_0x0001048897a0(0,1,0,FUN_100fc405c,puVar1);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fbc29c;
                    /* WARNING: Could not recover jumptable at 0x000100fbc298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fab58c();
  return;
}



/* Entry: 100fbc29c; end: 100fbc2ef;  */

void FUN_100fbc29c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined1 *)(lVar1 + 0x48) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc2f0,0,0);
  return;
}



/* Entry: 100fbc2f0; end: 100fbc3ab;  */

void FUN_100fbc2f0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  if (*(char *)(unaff_x22 + 0x48) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100fbc37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fbc3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}


