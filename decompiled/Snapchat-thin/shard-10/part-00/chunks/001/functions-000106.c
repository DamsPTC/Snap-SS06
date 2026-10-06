/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1074b3b48; end: 1074b3bb3;  */

void FUN_1074b3b48(long param_1,long param_2)

{
  func_0x00010729b464();
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  return;
}



/* Entry: 1074b3bb4; end: 1074b3bbf;  */

long FUN_1074b3bb4(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x0001074b56f8();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 0x10);
    lVar2 = **(long **)(param_1 + 8);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x1b8;
      func_0x00010729abec();
    }
  }
  return param_1;
}



/* Entry: 1074b3bc0; end: 1074b3c03;  */

long FUN_1074b3bc0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 0x10);
    lVar2 = **(long **)(param_1 + 8);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x1b8;
      func_0x00010729abec();
    }
  }
  return param_1;
}



/* Entry: 1074b3c04; end: 1074b3c23;  */

void FUN_1074b3c04(long param_1)

{
  if (*(char *)(param_1 + 0x1b8) == '\x01') {
    func_0x00010729abec();
  }
  return;
}



/* Entry: 1074b3c24; end: 1074b4303;  */

undefined1 *
FUN_1074b3c24(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  float *pfVar1;
  long lVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  float fVar17;
  float fVar18;
  undefined8 in_stack_00000050;
  undefined1 auStack_580 [440];
  undefined8 uStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 *puStack_3a0;
  code *pcStack_398;
  undefined1 *puStack_390;
  undefined1 *puStack_388;
  undefined1 auStack_380 [440];
  undefined1 auStack_1c8 [432];
  float fStack_18;
  undefined8 uStack_10;
  
  func_0x0001074b6e18();
  puVar6 = param_3;
  func_0x0001074b591c();
  func_0x0001074b56e8();
  uStack_10 = extraout_x8;
  do {
    puVar10 = unaff_x19 + -0x1b8;
    puStack_388 = unaff_x19 + -0x370;
    puStack_390 = unaff_x19 + -0x528;
LAB_1074b3c68:
    uVar7 = (long)unaff_x19 - (long)unaff_x20;
    uVar16 = (long)uVar7 / 0x1b8;
    bVar4 = (long)(uVar16 - 5) < 0;
    uVar5 = uVar16 == 5;
    switch(uVar16) {
    case 0:
    case 1:
      goto LAB_1074b428c;
    case 2:
      func_0x0001074b6a7c(*(undefined4 *)(unaff_x19 + -8));
      if (bVar4) {
        param_1 = unaff_x20;
        func_0x0001074b69cc();
      }
      goto LAB_1074b428c;
    case 3:
      param_2 = unaff_x20 + 0x1b8;
      param_1 = unaff_x20;
      func_0x0001074b6790();
      goto LAB_1074b428c;
    case 4:
      param_2 = unaff_x20 + 0x1b8;
      puVar6 = unaff_x20 + 0x370;
      param_1 = unaff_x20;
      func_0x0001074b4394();
      goto LAB_1074b428c;
    case 5:
      param_2 = unaff_x20 + 0x1b8;
      puVar6 = unaff_x20 + 0x370;
      param_1 = unaff_x20;
      FUN_1074b43f8();
      goto LAB_1074b428c;
    }
    if ((long)uVar7 < 0x2940) {
      uVar5 = unaff_x20 == unaff_x19;
      if ((param_4 & 1) == 0) {
        if (!(bool)uVar5) {
          while( true ) {
            puVar10 = unaff_x20;
            unaff_x20 = puVar10 + 0x1b8;
            bVar4 = (long)unaff_x20 - (long)unaff_x19 < 0;
            uVar5 = 1;
            if (unaff_x20 == unaff_x19) break;
            func_0x0001074b6748(*(undefined4 *)(puVar10 + 0x368));
            if (bVar4) {
              func_0x0001074b5d20(auStack_1c8);
              do {
                param_1 = puVar10;
                FUN_1074b46d0(param_1 + 0x1b8,param_1);
                puVar10 = param_1 + -0x1b8;
              } while (fStack_18 < *(float *)(param_1 + -8));
              param_2 = auStack_1c8;
              FUN_1074b46d0();
              func_0x0001074b5ce4();
            }
          }
        }
        break;
      }
      if ((bool)uVar5) break;
      param_3 = (undefined1 *)0x0;
      puVar15 = unaff_x20;
      goto LAB_1074b3f98;
    }
    if (param_3 == (undefined1 *)0x0) {
      uVar5 = 1;
      if (unaff_x20 == unaff_x19) break;
      uVar11 = uVar16 - 2 >> 1;
      uVar7 = uVar11;
      goto LAB_1074b4028;
    }
    puVar15 = unaff_x20 + (uVar16 >> 1) * 0x1b8;
    uVar5 = (long)(uVar7 - 0xdc01) < 0;
    if (uVar7 < 0xdc01) {
      func_0x0001074b6790(puVar15,unaff_x20);
    }
    else {
      func_0x0001074b6c9c();
      func_0x0001074b6790();
      unaff_x27 = puVar15 + -0x1b8;
      FUN_1074b4304(unaff_x20 + 0x1b8,unaff_x27,puStack_388);
      FUN_1074b4304(unaff_x20 + 0x370,puVar15 + 0x1b8,puStack_390);
      puVar6 = puVar15 + 0x1b8;
      FUN_1074b4304(unaff_x27,puVar15);
      func_0x0001074b6c9c();
      FUN_1074b4654();
    }
    param_3 = param_3 + -1;
    if (((param_4 & 1) == 0) && (func_0x0001074b6a7c(*(undefined4 *)(unaff_x20 + -8)), !(bool)uVar5)
       ) {
      func_0x0001074b5d20(auStack_1c8);
      puVar15 = unaff_x20;
      if (*(float *)(unaff_x19 + -8) <= fStack_18) {
        do {
          puVar9 = puVar15 + 0x1b8;
          if (unaff_x19 <= puVar9) break;
          pfVar1 = (float *)(puVar15 + 0x368);
          puVar15 = puVar9;
        } while (*pfVar1 <= fStack_18);
      }
      else {
        do {
          puVar9 = puVar15 + 0x1b8;
          pfVar1 = (float *)(puVar15 + 0x368);
          puVar15 = puVar9;
        } while (*pfVar1 <= fStack_18);
      }
      puVar15 = unaff_x19;
      puVar14 = unaff_x19;
      if (puVar9 < unaff_x19) {
        do {
          puVar14 = puVar15 + -0x1b8;
          pfVar1 = (float *)(puVar15 + -8);
          puVar15 = puVar14;
        } while (fStack_18 < *pfVar1);
      }
      while (puVar9 < puVar14) {
        FUN_1074b4654(puVar9,puVar14);
        do {
          pfVar1 = (float *)(puVar9 + 0x368);
          puVar9 = puVar9 + 0x1b8;
        } while (*pfVar1 <= fStack_18);
        do {
          pfVar1 = (float *)(puVar14 + -8);
          puVar14 = puVar14 + -0x1b8;
        } while (fStack_18 < *pfVar1);
      }
      param_1 = puVar9 + -0x1b8;
      if (unaff_x20 != param_1) {
        FUN_1074b46d0(unaff_x20,param_1);
      }
      param_2 = auStack_1c8;
      FUN_1074b46d0();
      func_0x0001074b5ce4();
      unaff_x20 = puVar9;
      goto LAB_1074b3efc;
    }
    func_0x0001074b5d20(auStack_1c8);
    lVar8 = 0;
    do {
      lVar2 = lVar8 + 0x368;
      lVar8 = lVar8 + 0x1b8;
    } while (*(float *)(unaff_x20 + lVar2) < fStack_18);
    puVar9 = unaff_x20 + lVar8;
    puVar14 = unaff_x19;
    puVar15 = puVar9;
    if (lVar8 == 0x1b8) {
      do {
        puVar12 = puVar14;
        if (puVar14 <= puVar9) break;
        puVar12 = puVar14 + -0x1b8;
        pfVar1 = (float *)(puVar14 + -8);
        puVar14 = puVar12;
      } while (fStack_18 <= *pfVar1);
    }
    else {
      do {
        puVar12 = puVar14 + -0x1b8;
        pfVar1 = (float *)(puVar14 + -8);
        puVar14 = puVar12;
      } while (fStack_18 <= *pfVar1);
    }
    while (puVar15 < puVar12) {
      FUN_1074b4654(puVar15,puVar12);
      do {
        pfVar1 = (float *)(puVar15 + 0x368);
        puVar15 = puVar15 + 0x1b8;
      } while (*pfVar1 < fStack_18);
      do {
        pfVar1 = (float *)(puVar12 + -8);
        puVar12 = puVar12 + -0x1b8;
      } while (fStack_18 <= *pfVar1);
    }
    unaff_x27 = puVar15 + -0x1b8;
    if (unaff_x20 != unaff_x27) {
      func_0x0001074b6394();
      FUN_1074b46d0();
    }
    param_2 = auStack_1c8;
    unaff_x28 = unaff_x27;
    FUN_1074b46d0();
    func_0x0001074b5ce4();
    uVar5 = puVar9 == puVar14;
    param_1 = unaff_x28;
    if (puVar9 < puVar14) goto LAB_1074b3e0c;
    func_0x0001074b6394();
    FUN_1074b448c();
    param_1 = puVar15;
    param_2 = unaff_x19;
    FUN_1074b448c();
    if ((int)param_1 == 0) goto code_r0x0001074b3e08;
    unaff_x19 = unaff_x27;
  } while (((ulong)unaff_x28 & 1) == 0);
  goto LAB_1074b428c;
LAB_1074b3f98:
  puVar10 = puVar15 + 0x1b8;
  uVar5 = 1;
  if (puVar10 == unaff_x19) goto LAB_1074b428c;
  if (*(float *)(puVar15 + 0x368) < *(float *)(puVar15 + 0x1b0)) {
    func_0x0001074b67a0();
    puVar15 = param_3;
    do {
      FUN_1074b46d0(unaff_x20 + (long)puVar15 + 0x1b8);
      param_1 = unaff_x20;
      if (puVar15 == (undefined1 *)0x0) goto LAB_1074b3ff4;
      puVar9 = unaff_x20 + (long)puVar15;
      puVar15 = puVar15 + -0x1b8;
    } while (fStack_18 < *(float *)(puVar9 + -8));
    param_1 = unaff_x20 + (long)puVar15 + 0x1b8;
LAB_1074b3ff4:
    param_2 = auStack_1c8;
    FUN_1074b46d0();
    func_0x0001074b5ce4();
  }
  param_3 = param_3 + 0x1b8;
  puVar15 = puVar10;
  goto LAB_1074b3f98;
code_r0x0001074b3e08:
  unaff_x20 = puVar15;
  puVar9 = unaff_x28;
  if (((ulong)unaff_x28 & 1) == 0) {
LAB_1074b3e0c:
    func_0x0001074b6394();
    puVar6 = param_3;
    FUN_1074b3c24();
    unaff_x20 = puVar15;
    unaff_x28 = puVar9;
LAB_1074b3efc:
    param_4 = 0;
  }
  goto LAB_1074b3c68;
LAB_1074b4028:
  do {
    if ((long)uVar7 <= (long)uVar11) {
      unaff_x27 = (undefined1 *)((uVar7 & 0x3fffffffffffffff) << 1 | 1);
      unaff_x28 = unaff_x20 + (long)unaff_x27 * 0x1b8;
      puVar10 = (undefined1 *)(uVar7 * 2 + 2);
      if (((long)puVar10 < (long)uVar16) &&
         (*(float *)(unaff_x28 + 0x1b0) < *(float *)(unaff_x28 + 0x368))) {
        unaff_x28 = unaff_x28 + 0x1b8;
        unaff_x27 = puVar10;
      }
      param_3 = unaff_x20 + uVar7 * 0x1b8;
      if (*(float *)(param_3 + 0x1b0) <= *(float *)(unaff_x28 + 0x1b0)) {
        FUN_1074b3b48(auStack_1c8,param_3);
        do {
          param_1 = unaff_x28;
          FUN_1074b46d0(param_3,param_1);
          unaff_x28 = param_1;
          if ((long)uVar11 < (long)unaff_x27) break;
          puVar15 = (undefined1 *)((long)unaff_x27 << 1 | 1);
          unaff_x28 = unaff_x20 + (long)puVar15 * 0x1b8;
          puVar10 = (undefined1 *)((long)unaff_x27 * 2 + 2);
          unaff_x27 = puVar15;
          if (((long)puVar10 < (long)uVar16) &&
             (*(float *)(unaff_x28 + 0x1b0) < *(float *)(unaff_x28 + 0x368))) {
            unaff_x28 = unaff_x28 + 0x1b8;
            unaff_x27 = puVar10;
          }
          param_3 = param_1;
        } while (fStack_18 <= *(float *)(unaff_x28 + 0x1b0));
        param_2 = auStack_1c8;
        FUN_1074b46d0();
        func_0x0001074b5ce4();
      }
    }
    uVar7 = uVar7 - 1;
  } while (-1 < (long)uVar7);
  while( true ) {
    puVar10 = (undefined1 *)(uVar16 - 2);
    uVar5 = puVar10 == (undefined1 *)0x0;
    if ((long)uVar16 < 2) break;
    func_0x0001074b5d20(auStack_380);
    param_3 = (undefined1 *)((ulong)puVar10 >> 1);
    puVar10 = unaff_x20;
    uVar7 = 0;
    do {
      uVar13 = uVar7 << 1 | 1;
      uVar11 = uVar7 * 2 + 2;
      puVar15 = puVar10 + uVar7 * 0x1b8 + 0x1b8;
      if (((long)uVar11 < (long)uVar16) &&
         (*(float *)(puVar10 + uVar7 * 0x1b8 + 0x368) < *(float *)(puVar10 + uVar7 * 0x1b8 + 0x520))
         ) {
        puVar15 = puVar10 + uVar7 * 0x1b8 + 0x370;
        uVar13 = uVar11;
      }
      FUN_1074b46d0(puVar10,puVar15);
      puVar10 = puVar15;
      uVar7 = uVar13;
    } while ((long)uVar13 <= (long)param_3);
    unaff_x19 = unaff_x19 + -0x1b8;
    if (puVar15 == unaff_x19) {
      param_2 = auStack_380;
      FUN_1074b46d0(puVar15);
    }
    else {
      FUN_1074b46d0(puVar15,unaff_x19);
      param_2 = auStack_380;
      FUN_1074b46d0(unaff_x19);
      bVar4 = (long)(puVar15 + (-1 - (long)unaff_x20)) < 0;
      if (0x1b8 < (long)(puVar15 + (0x1b8 - (long)unaff_x20))) {
        uVar7 = (ulong)(puVar15 + (0x1b8 - (long)unaff_x20)) / 0x1b8 - 2 >> 1;
        func_0x0001074b6748(*(undefined4 *)(unaff_x20 + uVar7 * 0x1b8 + 0x1b0));
        if (bVar4) {
          func_0x0001074b67a0();
          puVar10 = unaff_x20 + uVar7 * 0x1b8;
          do {
            param_3 = puVar10;
            FUN_1074b46d0(puVar15,param_3);
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            puVar15 = param_3;
            puVar10 = unaff_x20 + uVar7 * 0x1b8;
          } while (*(float *)(unaff_x20 + uVar7 * 0x1b8 + 0x1b0) < fStack_18);
          param_2 = auStack_1c8;
          FUN_1074b46d0(param_3);
          func_0x0001074b5ce4();
        }
      }
    }
    param_1 = auStack_380;
    func_0x00010729abec();
    uVar16 = uVar16 - 1;
  }
LAB_1074b428c:
  func_0x0001074b5698(uStack_10);
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar15 = auStack_1c8;
  func_0x00010729abec();
  func_0x0001074b58b8();
  pcStack_398 = FUN_1074b4304;
  fVar17 = *(float *)(param_2 + 0x1b0);
  fVar18 = *(float *)(puVar6 + 0x1b0);
  puVar9 = puVar15;
  puStack_3c0 = param_3;
  puStack_3b8 = puVar10;
  puStack_3b0 = unaff_x20;
  puStack_3a8 = param_1;
  puStack_3a0 = &stack0x00000050;
  if (fVar17 < *(float *)(puVar15 + 0x1b0)) {
    uVar3 = fVar18 == fVar17;
    uVar5 = fVar18 < fVar17;
    if (!(bool)uVar5) {
      FUN_1074b4654(puVar15,param_2);
      func_0x0001074b6db8(*(undefined4 *)(puVar6 + 0x1b0));
      puVar9 = param_2;
      if (!(bool)uVar5) {
        return puVar15;
      }
    }
LAB_1074b4384:
    puVar15 = puStack_3a8;
    puVar10 = puStack_3b0;
    puVar14 = auStack_580;
    puStack_3c0 = unaff_x28;
    puStack_3b8 = unaff_x27;
    func_0x0001074b591c(puVar9,puVar6);
    func_0x0001074b56e8();
    uStack_3c8 = extraout_x8_00;
    func_0x0001074b5d20(auStack_580);
    func_0x0001074b6388();
    FUN_1074b46d0();
    FUN_1074b46d0(puVar15,auStack_580);
    func_0x00010729abec();
    func_0x0001074b5698(uStack_3c8);
    if ((bool)uVar3) {
      return puVar14;
    }
    ___stack_chk_fail();
    func_0x0001074b58b8();
    func_0x0001074b591c();
    func_0x00010729bf90();
    *(undefined4 *)(puVar10 + 0x1b0) = *(undefined4 *)(puVar14 + 0x1b0);
    return puVar10;
  }
  uVar3 = fVar18 == fVar17;
  uVar5 = fVar18 < fVar17;
  if ((bool)uVar5) {
    func_0x0001074b6d80();
    FUN_1074b4654();
    func_0x0001074b6748(*(undefined4 *)(param_2 + 0x1b0));
    puVar6 = param_2;
    if ((bool)uVar5) goto LAB_1074b4384;
  }
  return puVar15;
}



/* Entry: 1074b4304; end: 1074b43f7;  */

undefined1 * FUN_1074b4304(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  float fVar5;
  float fVar6;
  undefined1 auStack_1f0 [440];
  undefined8 uStack_38;
  
  fVar5 = *(float *)(param_2 + 0x1b0);
  fVar6 = *(float *)(param_3 + 0x1b0);
  puVar3 = param_1;
  if (*(float *)(param_1 + 0x1b0) <= fVar5) {
    uVar2 = fVar6 == fVar5;
    uVar1 = fVar6 < fVar5;
    if ((bool)uVar1) {
      func_0x0001074b6d80();
      FUN_1074b4654();
      func_0x0001074b6748(*(undefined4 *)(param_2 + 0x1b0));
      param_3 = param_2;
      if ((bool)uVar1) goto LAB_1074b4384;
    }
    return param_1;
  }
  uVar2 = fVar6 == fVar5;
  uVar1 = fVar6 < fVar5;
  if (!(bool)uVar1) {
    FUN_1074b4654(param_1,param_2);
    func_0x0001074b6db8(*(undefined4 *)(param_3 + 0x1b0));
    puVar3 = param_2;
    if (!(bool)uVar1) {
      return param_1;
    }
  }
LAB_1074b4384:
  puVar4 = auStack_1f0;
  func_0x0001074b591c(puVar3,param_3);
  func_0x0001074b56e8();
  uStack_38 = extraout_x8;
  func_0x0001074b5d20(auStack_1f0);
  func_0x0001074b6388();
  FUN_1074b46d0();
  FUN_1074b46d0(unaff_x19,auStack_1f0);
  func_0x00010729abec();
  func_0x0001074b5698(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001074b58b8();
    func_0x0001074b591c();
    func_0x00010729bf90();
    *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(puVar4 + 0x1b0);
    return unaff_x20;
  }
  return puVar4;
}



/* Entry: 1074b43f8; end: 1074b448b;  */

undefined1 *
FUN_1074b43f8(undefined1 *param_1,undefined8 param_2,long param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_1f0 [432];
  
  func_0x0001074b591c();
  func_0x0001074b4394();
  uVar2 = *(float *)(param_5 + 0x1b0) == *(float *)(param_4 + 0x1b0);
  uVar1 = *(float *)(param_5 + 0x1b0) < *(float *)(param_4 + 0x1b0);
  if ((bool)uVar1) {
    param_1 = param_4;
    FUN_1074b4654(param_4,param_5);
    func_0x0001074b6748(*(undefined4 *)(param_4 + 0x1b0));
    if ((bool)uVar1) {
      func_0x0001074b682c();
      func_0x0001074b6db8(*(undefined4 *)(param_3 + 0x1b0));
      if ((bool)uVar1) {
        param_1 = unaff_x19;
        func_0x0001074b69cc();
        func_0x0001074b6a7c(*(undefined4 *)(unaff_x19 + 0x1b0));
        if ((bool)uVar1) {
          func_0x0001074b6388();
          puVar3 = auStack_1f0;
          func_0x0001074b591c();
          func_0x0001074b56e8();
          func_0x0001074b5d20(auStack_1f0);
          func_0x0001074b6388();
          FUN_1074b46d0();
          FUN_1074b46d0(unaff_x19,auStack_1f0);
          func_0x00010729abec();
          func_0x0001074b5698(extraout_x8);
          if ((bool)uVar2) {
            return puVar3;
          }
          ___stack_chk_fail();
          func_0x0001074b58b8();
          func_0x0001074b591c();
          func_0x00010729bf90();
          *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(puVar3 + 0x1b0);
          return unaff_x20;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 1074b448c; end: 1074b4653;  */

void FUN_1074b448c(long param_1,long param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_400 [440];
  undefined8 uStack_248;
  undefined1 auStack_210 [432];
  float fStack_60;
  undefined8 uStack_58;
  
  func_0x0001074b5a14();
  func_0x0001074b56e8();
  lVar7 = (param_2 - param_1) / 0x1b8;
  bVar1 = lVar7 + -5 < 0;
  uVar2 = lVar7 == 5;
  uStack_58 = extraout_x8;
  switch(lVar7) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001074b6db8(*(undefined4 *)(unaff_x20 + -8),1);
    if (bVar1) {
      FUN_1074b4654();
    }
    break;
  case 3:
    FUN_1074b4304();
    break;
  case 4:
    func_0x0001074b4394();
    break;
  case 5:
    FUN_1074b43f8();
    break;
  default:
    FUN_1074b4304();
    lVar7 = 0;
    iVar8 = 0;
    lVar6 = unaff_x19 + 0x528;
    lVar5 = unaff_x19 + 0x370;
    while (lVar4 = lVar6, uVar2 = lVar4 == unaff_x20, !(bool)uVar2) {
      if (*(float *)(lVar4 + 0x1b0) < *(float *)(lVar5 + 0x1b0)) {
        FUN_1074b3b48(auStack_210,lVar4);
        lVar6 = lVar7;
        do {
          FUN_1074b46d0(unaff_x19 + lVar6 + 0x528,unaff_x19 + lVar6 + 0x370);
          if (lVar6 == -0x370) break;
          lVar5 = unaff_x19 + lVar6;
          lVar6 = lVar6 + -0x1b8;
        } while (fStack_60 < *(float *)(lVar5 + 0x368));
        FUN_1074b46d0();
        iVar8 = iVar8 + 1;
        func_0x00010729abec(auStack_210);
        if (iVar8 == 8) {
          uVar2 = lVar4 + 0x1b8 == unaff_x20;
          break;
        }
      }
      lVar7 = lVar7 + 0x1b8;
      lVar5 = lVar4;
      lVar6 = lVar4 + 0x1b8;
    }
  }
  func_0x0001074b5698(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074b5da4();
  func_0x00010729abec();
  func_0x0001074b58b8();
  puVar3 = auStack_400;
  func_0x0001074b591c();
  func_0x0001074b56e8();
  uStack_248 = extraout_x8_00;
  func_0x0001074b5d20(auStack_400);
  func_0x0001074b6388();
  FUN_1074b46d0();
  FUN_1074b46d0();
  func_0x00010729abec();
  func_0x0001074b5698(uStack_248);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001074b58b8();
    func_0x0001074b591c();
    func_0x00010729bf90();
    *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(puVar3 + 0x1b0);
    return;
  }
  return;
}



/* Entry: 1074b4654; end: 1074b46cf;  */

void FUN_1074b4654(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_1f0 [440];
  undefined8 uStack_38;
  
  puVar1 = auStack_1f0;
  func_0x0001074b591c();
  func_0x0001074b56e8();
  uStack_38 = extraout_x8;
  func_0x0001074b5d20(auStack_1f0);
  func_0x0001074b6388();
  FUN_1074b46d0();
  FUN_1074b46d0();
  func_0x00010729abec();
  func_0x0001074b5698(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074b58b8();
  func_0x0001074b591c();
  func_0x00010729bf90();
  *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(puVar1 + 0x1b0);
  return;
}



/* Entry: 1074b46d0; end: 1074b4737;  */

void FUN_1074b46d0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001074b591c();
  func_0x00010729bf90();
  *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(unaff_x19 + 0x1b0);
  return;
}



/* Entry: 1074b4738; end: 1074b47ff;  */

long FUN_1074b4738(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010784b2bc();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001073bc1c0(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1074b4800; end: 1074b4817;  */

void FUN_1074b4800(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074b4818; end: 1074b483f;  */

void FUN_1074b4818(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001074b5d98();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1074b4840; end: 1074b4843;  */

void FUN_1074b4840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b45e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074b4844; end: 1074b4857;  */

void FUN_1074b4844(void)

{
  func_0x0001074b4864();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074b4858; end: 1074b4873;  */

undefined8 * FUN_1074b4858(long param_1)

{
  func_0x0001074ae9e8(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1074b4874; end: 1074b48e7;  */

undefined8 FUN_1074b4874(void)

{
  undefined8 unaff_x19;
  
  func_0x0001074b6094();
  func_0x0001074b4898();
  func_0x0001074b5fd4();
  FUN_1074b48e8();
  return unaff_x19;
}



/* Entry: 1074b48e8; end: 1074b48ff;  */

void FUN_1074b48e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074b4900; end: 1074b496f;  */

undefined8 FUN_1074b4900(void)

{
  undefined8 unaff_x19;
  
  func_0x0001074b6094();
  func_0x0001074b4924();
  func_0x0001074b5fd4();
  FUN_1074b4970();
  return unaff_x19;
}



/* Entry: 1074b4970; end: 1074b4987;  */

void FUN_1074b4970(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074b4988; end: 1074b49f7;  */

undefined8 FUN_1074b4988(void)

{
  undefined8 unaff_x19;
  
  func_0x0001074b6094();
  func_0x0001074b49ac();
  func_0x0001074b5fd4();
  FUN_1074b49f8();
  return unaff_x19;
}



/* Entry: 1074b49f8; end: 1074b4a0f;  */

void FUN_1074b49f8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074b4a10; end: 1074b4a83;  */

undefined8 FUN_1074b4a10(void)

{
  undefined8 unaff_x19;
  
  func_0x0001074b6094();
  func_0x0001074b4a34();
  func_0x0001074b5fd4();
  FUN_1074b4a84();
  return unaff_x19;
}



/* Entry: 1074b4a84; end: 1074b4a9b;  */

void FUN_1074b4a84(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074b4a9c; end: 1074b4b0f;  */

undefined8 FUN_1074b4a9c(void)

{
  undefined8 unaff_x19;
  
  func_0x0001074b6094();
  func_0x0001074b4ac0();
  func_0x0001074b5fd4();
  FUN_1074b4b10();
  return unaff_x19;
}



/* Entry: 1074b4b10; end: 1074b4b27;  */

void FUN_1074b4b10(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074b4b28; end: 1074b4b9b;  */

undefined8 FUN_1074b4b28(void)

{
  undefined8 unaff_x19;
  
  func_0x0001074b6094();
  func_0x0001074b4b4c();
  func_0x0001074b5fd4();
  FUN_1074b4b9c();
  return unaff_x19;
}



/* Entry: 1074b4b9c; end: 1074b4bb3;  */

void FUN_1074b4b9c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074b4bb4; end: 1074b4bcb;  */

void FUN_1074b4bb4(void)

{
  FUN_1074b4bcc();
  return;
}



/* Entry: 1074b4bcc; end: 1074b4c2f;  */

undefined1  [16] FUN_1074b4bcc(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  ulong auStack_38 [3];
  
  FUN_1074b4c30(auStack_38);
  uVar1 = auStack_38[0];
  FUN_1074b4ca8(param_1);
  if ((uVar1 & 1) != 0) {
    auStack_38[0] = 0;
  }
  FUN_1074b50b8(auStack_38);
  auVar2._8_8_ = uVar1 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1074b4c30; end: 1074b4ca7;  */

void FUN_1074b4c30(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_1074b4cf0(puVar1 + 2,param_3,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  puVar1[1] = (ulong)*(uint *)(puVar1 + 2);
  return;
}



/* Entry: 1074b4ca8; end: 1074b4cef;  */

undefined1  [16] FUN_1074b4ca8(long param_1,long param_2)

{
  bool bVar1;
  long unaff_x19;
  undefined1 auVar2 [16];
  
  func_0x0001074b591c();
  *(ulong *)(param_2 + 8) = (ulong)*(uint *)(param_2 + 0x10);
  FUN_1074b4db4();
  bVar1 = param_1 == 0;
  if (bVar1) {
    func_0x0001074b6388();
    FUN_1074b4e98();
    param_1 = unaff_x19;
  }
  auVar2[8] = bVar1;
  auVar2._0_8_ = param_1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 1074b4cf0; end: 1074b4d47;  */

void FUN_1074b4cf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  uStack_20 = param_4[2];
  func_0x0001074b4d24(param_1,*param_3,&uStack_30);
  return;
}



/* Entry: 1074b4d48; end: 1074b4db3;  */

undefined4 * FUN_1074b4d48(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 extraout_w8;
  undefined4 uVar2;
  int extraout_w11;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = *(undefined4 *)*param_2;
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined4 *)*param_3;
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  if (puVar1[1] != 0) {
    do {
      func_0x0001074b5f90();
      uVar2 = extraout_w8;
    } while (extraout_w11 != 0);
  }
  uVar6 = ((undefined8 *)param_3[2])[1];
  uVar5 = *(undefined8 *)param_3[2];
  param_1[2] = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar6;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  func_0x0001073ad47c(&uStack_30);
  return param_1;
}



/* Entry: 1074b4db4; end: 1074b4e97;  */

long FUN_1074b4db4(undefined8 param_1,long *param_2,ulong param_3,int *param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  ulong uVar3;
  ulong extraout_x9;
  long extraout_x9_00;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_2[1];
  if (uVar3 != 0) {
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      lVar4 = 0;
      uVar6 = uVar5 & param_3;
    }
    else {
      lVar4 = param_3 - uVar3;
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = param_3 / uVar3;
      }
      uVar6 = param_3;
      if (uVar3 <= param_3) {
        uVar6 = param_3 - uVar7 * uVar3;
      }
    }
    in_NG = lVar4 < 0;
    plVar2 = *(long **)(*param_2 + uVar6 * 8);
    if (plVar2 != (long *)0x0) {
      do {
        while( true ) {
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) goto LAB_1074b4e44;
          uVar7 = plVar2[1];
          if (uVar7 != param_3) break;
          in_NG = *(int *)(plVar2 + 2) - *param_4 < 0;
          if (*(int *)(plVar2 + 2) == *param_4) {
            return (long)plVar2;
          }
        }
        if ((uVar3 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar3 <= uVar7) {
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar7 / uVar3;
          }
          uVar7 = uVar7 - uVar1 * uVar3;
        }
        in_NG = (long)(uVar7 - uVar6) < 0;
      } while (uVar7 == uVar6);
    }
  }
LAB_1074b4e44:
  func_0x0001074b5b58(param_2[3]);
  lVar4 = 0;
  if ((extraout_x9 == 0) ||
     (func_0x0001074b5a74(param_1,(int)param_2[4],(float)extraout_x9), lVar4 = extraout_x9_00,
     (bool)in_NG)) {
    func_0x0001074b56ac(lVar4 << 1);
    FUN_1074b4f34();
  }
  return 0;
}



/* Entry: 1074b4e98; end: 1074b4f33;  */

void FUN_1074b4e98(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar2 = param_1[1];
  uVar5 = param_2[1];
  uVar3 = uVar2 - 1;
  if ((uVar2 & uVar3) == 0) {
    uVar5 = uVar3 & uVar5;
  }
  else if (uVar2 <= uVar5) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uVar5 / uVar2;
    }
    uVar5 = uVar5 - uVar1 * uVar2;
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + uVar5 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    *(long **)(lVar4 + uVar5 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar5 = *(ulong *)(*param_2 + 8);
      if ((uVar2 & uVar3) == 0) {
        uVar5 = uVar5 & uVar3;
      }
      else if (uVar2 <= uVar5) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar5 / uVar2;
        }
        uVar5 = uVar5 - uVar3 * uVar2;
      }
      *(long **)(lVar4 + uVar5 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1074b4f34; end: 1074b4fcb;  */

void FUN_1074b4f34(ulong param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar5;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar6;
  long *extraout_x9_04;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar7;
  
  uVar2 = param_1;
  uVar3 = param_2;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar2 = param_2;
  }
  uVar7 = *(ulong *)(param_1 + 8);
  if (uVar7 < param_2) {
LAB_1074b4f7c:
    func_0x0001074b6d80();
    if (uVar3 == 0) {
      FUN_1074b5084(uVar2);
      *(undefined8 *)(uVar2 + 8) = 0;
    }
    else {
      FUN_1074b509c(uVar2 + 8);
      func_0x0001074b664c();
      FUN_1074b5084();
      func_0x0001074b5a98();
      uVar7 = extraout_x9;
      while (uVar1 = uVar3 == uVar7, !(bool)uVar1) {
        func_0x0001074b5b64();
        uVar7 = extraout_x9_00;
      }
      if (*(long *)(uVar2 + 0x10) != 0) {
        func_0x0001074b5814();
        func_0x0001074b5800();
        plVar5 = extraout_x9_01;
        while (*plVar5 != 0) {
          func_0x0001074b65d4();
          lVar4 = extraout_x8_00;
          plVar5 = extraout_x12;
          plVar6 = extraout_x9_02;
          uVar2 = extraout_x11;
          if ((bool)uVar1) {
            uVar7 = extraout_x13 & extraout_x10;
          }
          else {
            uVar7 = extraout_x13;
            if (uVar3 <= extraout_x13) {
              func_0x0001074b6640();
              lVar4 = extraout_x8_01;
              plVar6 = extraout_x9_03;
              uVar2 = extraout_x11_00;
              plVar5 = extraout_x12_00;
              uVar7 = extraout_x13_00;
            }
          }
          uVar1 = uVar7 == uVar2;
          if (!(bool)uVar1) {
            if (*(long *)(lVar4 + uVar7 * 8) == 0) {
              func_0x0001074b661c();
              plVar5 = extraout_x12_01;
            }
            else {
              *plVar6 = *plVar5;
              func_0x0001074b5650();
              plVar5 = extraout_x9_04;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    func_0x0001074b572c();
    if ((uVar7 < 3) || (func_0x0001074b6610(), extraout_x8 != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001074b5610();
    }
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (param_2 < uVar7) goto LAB_1074b4f7c;
  }
  return;
}



/* Entry: 1074b4fcc; end: 1074b5083;  */

void FUN_1074b4fcc(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *plVar5;
  long *extraout_x9_04;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar6;
  
  if (param_2 == 0) {
    FUN_1074b5084(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_1074b509c(param_1 + 8);
    func_0x0001074b664c();
    FUN_1074b5084();
    func_0x0001074b5a98();
    uVar3 = extraout_x9;
    while (uVar1 = param_2 == uVar3, !(bool)uVar1) {
      func_0x0001074b5b64();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001074b5814();
      func_0x0001074b5800();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001074b65d4();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        plVar5 = extraout_x9_02;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar6 = extraout_x13 & extraout_x10;
        }
        else {
          uVar6 = extraout_x13;
          if (param_2 <= extraout_x13) {
            func_0x0001074b6640();
            lVar2 = extraout_x8_00;
            plVar5 = extraout_x9_03;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar6 = extraout_x13_00;
          }
        }
        uVar1 = uVar6 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar6 * 8) == 0) {
            func_0x0001074b661c();
            plVar4 = extraout_x12_01;
          }
          else {
            *plVar5 = *plVar4;
            func_0x0001074b5650();
            plVar4 = extraout_x9_04;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1074b5084; end: 1074b509b;  */

void FUN_1074b5084(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074b509c; end: 1074b50b7;  */

void FUN_1074b509c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001074b5fd4();
  FUN_1074b50d8();
  return;
}



/* Entry: 1074b50b8; end: 1074b50d7;  */

void FUN_1074b50b8(void)

{
  func_0x0001074b5fd4();
  FUN_1074b50d8();
  return;
}



/* Entry: 1074b50d8; end: 1074b50ef;  */

void FUN_1074b50d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001074b5130(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1074b50f0; end: 1074b5213;  */

void FUN_1074b50f0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001074b5130(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1074b5214; end: 1074b521b;  */

void FUN_1074b5214(void)

{
  return;
}



/* Entry: 1074b521c; end: 1074b5243;  */

void FUN_1074b521c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001074b5a28();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109b4638;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1074b5244; end: 1074b526f;  */

void FUN_1074b5244(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b4638;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074b5270; end: 1074b5297;  */

void FUN_1074b5270(undefined8 param_1)

{
  func_0x0001074b66a0();
  func_0x0001074b60f8(param_1,&PTR_DAT_1109b46a8);
  func_0x0001074b5aa8();
  return;
}



/* Entry: 1074b5298; end: 1074b52a3;  */

undefined ** FUN_1074b5298(void)

{
  return &PTR_DAT_1109b46a8;
}



/* Entry: 1074b52a4; end: 1074b52df;  */

long FUN_1074b52a4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x0001074b6810(uVar1);
  return param_1;
}



/* Entry: 1074b52e0; end: 1074b52e7;  */

void FUN_1074b52e0(void)

{
  return;
}



/* Entry: 1074b52e8; end: 1074b531b;  */

void FUN_1074b52e8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b46c8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074b531c; end: 1074b5343;  */

void FUN_1074b531c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b46c8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074b5344; end: 1074b53d3;  */

undefined1 FUN_1074b5344(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  long *plVar3;
  ulong *puVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  
  if (**(char **)(param_1 + 8) == '\x01') {
    puVar4 = *(ulong **)(param_1 + 0x10);
    puVar1 = (undefined8 *)((undefined8 *)puVar4[5])[1];
    for (puVar6 = *(undefined8 **)puVar4[5]; uVar5 = 0, puVar6 != puVar1; puVar6 = puVar6 + 1) {
      puVar2 = puVar4;
      FUN_1074e3c98(puVar4,*puVar6,(char)puVar4[7]);
      if (puVar2 != (ulong *)0x0) {
        plVar3 = (long *)*puVar2;
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
        if (((ulong)plVar3 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 1074b53d4; end: 1074b53fb;  */

void FUN_1074b53d4(undefined8 param_1)

{
  func_0x0001074b66a0();
  func_0x0001074b60f8(param_1,&PTR_DAT_1109b4728);
  func_0x0001074b5aa8();
  return;
}



/* Entry: 1074b53fc; end: 1074b5407;  */

undefined ** FUN_1074b53fc(void)

{
  return &PTR_DAT_1109b4728;
}



/* Entry: 1074b5408; end: 1074b543b;  */

void FUN_1074b5408(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 0x18) == 1) {
    return;
  }
  func_0x00010563ab98();
  return;
}



/* Entry: 1074b543c; end: 1074b5443;  */

void FUN_1074b543c(void)

{
  return;
}



/* Entry: 1074b5444; end: 1074b546b;  */

void FUN_1074b5444(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001074b5a28();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109b4748;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1074b546c; end: 1074b548f;  */

void FUN_1074b546c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b4748;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074b5490; end: 1074b54b7;  */

void FUN_1074b5490(undefined8 param_1)

{
  func_0x0001074b66a0();
  func_0x0001074b60f8(param_1,&PTR_DAT_1109b47b8);
  func_0x0001074b5aa8();
  return;
}



/* Entry: 1074b54b8; end: 1074b54c3;  */

undefined ** FUN_1074b54b8(void)

{
  return &PTR_DAT_1109b47b8;
}



/* Entry: 1074b54c4; end: 1074b54ff;  */

long FUN_1074b54c4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x0001074b6810(uVar1);
  return param_1;
}



/* Entry: 1074b5500; end: 1074b5507;  */

void FUN_1074b5500(void)

{
  return;
}



/* Entry: 1074b5508; end: 1074b552f;  */

void FUN_1074b5508(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001074b5a28();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109b47d8;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1074b5530; end: 1074b5553;  */

void FUN_1074b5530(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b47d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074b5554; end: 1074b557b;  */

void FUN_1074b5554(undefined8 param_1)

{
  func_0x0001074b66a0();
  func_0x0001074b60f8(param_1,&PTR_DAT_1109b4838);
  func_0x0001074b5aa8();
  return;
}



/* Entry: 1074b557c; end: 1074b558f;  */

undefined ** FUN_1074b557c(void)

{
  return &PTR_DAT_1109b4838;
}



/* Entry: 1074b5590; end: 1074b55b7;  */

void FUN_1074b5590(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001074b5a28();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109b4858;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1074b55b8; end: 1074b55db;  */

void FUN_1074b55b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109b4858;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074b55dc; end: 1074b5603;  */

void FUN_1074b55dc(undefined8 param_1)

{
  func_0x0001074b66a0();
  func_0x0001074b60f8(param_1,&PTR_DAT_1109b48b8);
  func_0x0001074b5aa8();
  return;
}



/* Entry: 1074b5604; end: 1074b6e47;  */

undefined ** FUN_1074b5604(void)

{
  return &PTR_DAT_1109b48b8;
}



/* Entry: 1074b6e48; end: 1074b6ef3;  */

undefined8 * FUN_1074b6e48(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x0001074b6eb4(auStack_40,param_2);
  FUN_1074b71c4(auStack_30,auStack_40);
  func_0x0001074e3a1c(param_1,auStack_30);
  FUN_1073ad37c(auStack_30);
  FUN_1074b6f68(auStack_40);
  *param_1 = &PTR_FUN_1109b4908;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



/* Entry: 1074b6ef4; end: 1074b6ef7;  */

undefined8 * FUN_1074b6ef4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074b6ef8; end: 1074b6f0b;  */

void FUN_1074b6ef8(void)

{
  func_0x0001073ad268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074b6f0c; end: 1074b6f67;  */

void FUN_1074b6f0c(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1074b6f68; end: 1074b6f8f;  */

long FUN_1074b6f68(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1074b6f90; end: 1074b6fb3;  */

void FUN_1074b6f90(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1074b6fb4(&uStack_11,param_1);
  return;
}



/* Entry: 1074b6fb4; end: 1074b7053;  */

undefined1 * FUN_1074b6fb4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1074b7054(auStack_40,1);
  FUN_1074b70ac(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001074b71b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001074b71b4(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_3;
  puVar3 = puVar2;
  FUN_1074b707c();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1074b7054; end: 1074b707b;  */

long FUN_1074b7054(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1074b707c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1074b707c; end: 1074b70ab;  */

undefined8 * FUN_1074b707c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b4a30;
  FUN_1074b7114(param_1 + 3);
  return param_1;
}



/* Entry: 1074b70ac; end: 1074b70ef;  */

undefined8 * FUN_1074b70ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b4a30;
  FUN_1074b7114(param_1 + 3);
  return param_1;
}



/* Entry: 1074b70f0; end: 1074b70f3;  */

void FUN_1074b70f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b4a30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074b70f4; end: 1074b7107;  */

void FUN_1074b70f4(void)

{
  FUN_1074b71a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074b7108; end: 1074b7113;  */

undefined8 * FUN_1074b7108(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1074b7114; end: 1074b718b;  */

undefined8 * FUN_1074b7114(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  *param_1 = &PTR_DAT_1109ab0d0;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  func_0x0001073ad4c4(&uStack_30);
  func_0x0001073e65f8(&uStack_40);
  *param_1 = &PTR_FUN_1109b4a80;
  func_0x0001073e65f8(&uStack_50);
  return param_1;
}



/* Entry: 1074b718c; end: 1074b718f;  */

undefined8 * FUN_1074b718c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 1074b7190; end: 1074b71a3;  */

void FUN_1074b7190(void)

{
  FUN_1073ad750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074b71a4; end: 1074b71c3;  */

void FUN_1074b71a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b4a30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074b71c4; end: 1074b722b;  */

undefined8 * FUN_1074b71c4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001074b7204(&uStack_30);
  return param_1;
}



/* Entry: 1074b722c; end: 1074b723b;  */

undefined8 FUN_1074b722c(void)

{
  return 0;
}



/* Entry: 1074b723c; end: 1074b72ef;  */

undefined8 * FUN_1074b723c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_1074b72f0(auStack_40,param_2);
  FUN_1074b9318(auStack_30,auStack_40);
  func_0x0001074e3a1c(param_1,auStack_30);
  FUN_1073ad37c(auStack_30);
  FUN_1074b8c2c(auStack_40);
  *param_1 = &PTR_FUN_1109b4ac0;
  FUN_1074b7328(param_1 + 0xc,param_1[3] + 0x168);
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  return param_1;
}



/* Entry: 1074b72f0; end: 1074b7327;  */

void FUN_1074b72f0(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1074b915c(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1074b8c2c(&uStack_30);
  return;
}



/* Entry: 1074b7328; end: 1074b75bb;  */

void FUN_1074b7328(undefined8 param_1,long param_2)

{
  undefined1 auStack_4b0 [56];
  undefined1 auStack_478 [88];
  undefined1 auStack_420 [56];
  undefined1 auStack_3e8 [8];
  undefined1 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [56];
  undefined1 auStack_390 [56];
  undefined1 auStack_358 [88];
  undefined1 auStack_300 [56];
  undefined1 auStack_2c8 [88];
  undefined1 auStack_270 [56];
  undefined1 auStack_238 [88];
  undefined1 auStack_1e0 [56];
  undefined1 auStack_1a8 [88];
  undefined1 auStack_150 [56];
  undefined1 auStack_118 [88];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [88];
  
  func_0x00010727d614(auStack_c0,param_2);
  func_0x00010743b0a8(auStack_88,auStack_c0);
  func_0x00010727d614(auStack_150,param_2 + 0x60);
  func_0x00010743b0a8(auStack_118,auStack_150);
  func_0x00010727d614(auStack_1e0,param_2 + 0xc0);
  func_0x00010743b0a8(auStack_1a8,auStack_1e0);
  func_0x00010727d614(auStack_270,param_2 + 0x120);
  func_0x00010743b0a8(auStack_238,auStack_270);
  func_0x00010727d614(auStack_300,param_2 + 0x180);
  func_0x00010743b0a8(auStack_2c8,auStack_300);
  func_0x00010727d614(auStack_390,param_2 + 0x1e0);
  func_0x00010743b0a8(auStack_358,auStack_390);
  FUN_1074b9378(auStack_420,param_2 + 0x240);
  auStack_3e8[0] = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_3d0 = 0;
  FUN_1074b8eb8(auStack_3c8,auStack_420);
  func_0x00010727d614(auStack_4b0,param_2 + 0x2a0);
  func_0x00010743b0a8(auStack_478,auStack_4b0);
  FUN_1074b9424(param_1,auStack_88,auStack_118,auStack_1a8,auStack_238,auStack_2c8,auStack_358,
                auStack_3e8,auStack_478);
  func_0x000107410c2c(auStack_478);
  func_0x000107266a30(auStack_4b0);
  func_0x0001074b8cac(auStack_3e8);
  FUN_1074b8cd4(auStack_420);
  func_0x000107410c2c(auStack_358);
  func_0x000107266a30(auStack_390);
  func_0x000107410c2c(auStack_2c8);
  func_0x000107266a30(auStack_300);
  func_0x000107410c2c(auStack_238);
  func_0x000107266a30(auStack_270);
  func_0x000107410c2c(auStack_1a8);
  func_0x000107266a30(auStack_1e0);
  func_0x000107410c2c(auStack_118);
  func_0x000107266a30(auStack_150);
  func_0x000107410c2c(auStack_88);
  func_0x000107266a30(auStack_c0);
  return;
}



/* Entry: 1074b75bc; end: 1074b75fb;  */

undefined8 * FUN_1074b75bc(undefined8 *param_1)

{
  func_0x00010730b284(param_1 + 0x71);
  FUN_1073eb118(param_1 + 0x6c);
  FUN_1073eb118(param_1 + 0x69);
  func_0x0001074b8c54(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074b75fc; end: 1074b75ff;  */

undefined8 * FUN_1074b75fc(undefined8 *param_1)

{
  func_0x00010730b284(param_1 + 0x71);
  FUN_1073eb118(param_1 + 0x6c);
  FUN_1073eb118(param_1 + 0x69);
  func_0x0001074b8c54(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 1074b7600; end: 1074b7613;  */

void FUN_1074b7600(void)

{
  FUN_1074b75bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074b7614; end: 1074b79e3;  */

void FUN_1074b7614(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_890 [88];
  undefined1 auStack_838 [88];
  undefined1 auStack_7e0 [88];
  undefined1 auStack_788 [88];
  undefined1 auStack_730 [88];
  undefined1 auStack_6d8 [88];
  undefined1 auStack_680 [16];
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined1 auStack_660 [56];
  undefined1 auStack_628 [88];
  undefined1 auStack_5d0 [88];
  undefined1 auStack_578 [88];
  undefined1 auStack_520 [8];
  undefined1 uStack_518;
  long lStack_510;
  long lStack_508;
  undefined1 auStack_500 [56];
  undefined1 auStack_4c8 [88];
  undefined1 auStack_470 [88];
  undefined1 auStack_418 [88];
  undefined1 auStack_3c0 [88];
  undefined1 auStack_368 [88];
  undefined1 auStack_310 [88];
  undefined1 auStack_2b8 [88];
  undefined1 auStack_260 [88];
  undefined1 auStack_208 [88];
  undefined1 auStack_1b0 [88];
  undefined1 auStack_158 [88];
  undefined1 auStack_100 [88];
  undefined1 auStack_a8 [88];
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  func_0x0001074b98e0();
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x000107432f04(auStack_158,unaff_x19 + 0x60);
  func_0x0001074b9754(auStack_100,lVar4 + 0x168);
  func_0x000107432f04(auStack_208,unaff_x19 + 0xb8);
  func_0x0001074b9754(auStack_1b0,lVar4 + 0x1c8);
  func_0x000107432f04(auStack_2b8,unaff_x19 + 0x110);
  func_0x0001074b9754(auStack_260,lVar4 + 0x228);
  func_0x000107432f04(auStack_368,unaff_x19 + 0x168);
  func_0x0001074b9754(auStack_310,lVar4 + 0x288);
  func_0x000107432f04(auStack_418,unaff_x19 + 0x1c0);
  func_0x0001074b9754(auStack_3c0,lVar4 + 0x2e8);
  func_0x000107432f04(auStack_4c8,unaff_x19 + 0x218);
  func_0x0001074b9754(auStack_470,lVar4 + 0x348);
  FUN_1074b8e64(auStack_578,unaff_x19 + 0x270);
  FUN_1074b9378(auStack_5d0,lVar4 + 0x3a8);
  FUN_1074b8e64(auStack_a8,auStack_578);
  plVar1 = (long *)(lVar4 + 0x3e0);
  if (*(char *)(lVar4 + 1000) == '\0') {
    plVar1 = unaff_x20 + 1;
  }
  lStack_508 = *plVar1;
  uVar2 = *(uint *)(plVar1 + 1);
  plVar1 = (long *)(lVar4 + 0x3e0);
  if (*(char *)(lVar4 + 0x3f8) == '\0') {
    plVar1 = unaff_x20 + 1;
  }
  lStack_510 = plVar1[2];
  uVar3 = *(uint *)(plVar1 + 3);
  auStack_520[0] = 0;
  uStack_518 = 0;
  if ((uVar3 & 1) == 0) {
    lStack_510 = 0;
  }
  lStack_510 = lStack_510 + *unaff_x20;
  if ((uVar2 & 1) == 0) {
    lStack_508 = 0;
  }
  lStack_508 = lStack_510 + lStack_508;
  FUN_1074b8eb8(auStack_500,auStack_5d0);
  if (((uVar2 & 1) != 0) || ((uVar3 & 1) != 0)) {
    FUN_1074b8e38(auStack_50,auStack_a8);
    uStack_48 = 1;
    FUN_1074b8da8(auStack_520,auStack_50);
    FUN_1074b8d30(auStack_50);
  }
  func_0x0001074b8cac(auStack_a8);
  FUN_1074b8cd4(auStack_5d0);
  func_0x000107432f04(auStack_5d0,unaff_x19 + 0x2c8);
  func_0x0001074b9754(auStack_a8,lVar4 + 0x408);
  FUN_1074b9424(auStack_890,auStack_100,auStack_1b0,auStack_260,auStack_310,auStack_3c0,auStack_470,
                auStack_520,auStack_a8);
  func_0x000107410c2c(auStack_a8);
  func_0x000107410c2c(auStack_5d0);
  func_0x0001074b8cac(auStack_520);
  func_0x0001074b8cac(auStack_578);
  func_0x000107410c2c(auStack_470);
  func_0x000107410c2c(auStack_4c8);
  func_0x000107410c2c(auStack_3c0);
  func_0x000107410c2c(auStack_418);
  func_0x000107410c2c(auStack_310);
  func_0x000107410c2c(auStack_368);
  func_0x000107410c2c(auStack_260);
  func_0x000107410c2c(auStack_2b8);
  func_0x000107410c2c(auStack_1b0);
  func_0x000107410c2c(auStack_208);
  func_0x000107410c2c(auStack_100);
  func_0x000107410c2c(auStack_158);
  func_0x0001074334a8(unaff_x19 + 0x60,auStack_890);
  func_0x0001074334a8(unaff_x19 + 0xb8,auStack_838);
  func_0x0001074334a8(unaff_x19 + 0x110,auStack_7e0);
  func_0x0001074334a8(unaff_x19 + 0x168,auStack_788);
  func_0x0001074334a8(unaff_x19 + 0x1c0,auStack_730);
  func_0x0001074334a8(unaff_x19 + 0x218,auStack_6d8);
  FUN_1074b8da8(unaff_x19 + 0x270,auStack_680);
  *(undefined8 *)(unaff_x19 + 0x288) = uStack_668;
  *(undefined8 *)(unaff_x19 + 0x280) = uStack_670;
  FUN_1074b8f58(unaff_x19 + 0x290,auStack_660);
  func_0x0001074334a8(unaff_x19 + 0x2c8,auStack_628);
  func_0x0001074b8c54(auStack_890);
  return;
}



/* Entry: 1074b79e4; end: 1074b7bbb;  */

undefined8 * FUN_1074b79e4(undefined4 param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  func_0x0001074b98e0();
  func_0x0001074b9914();
  uStack_78 = extraout_x8;
  FUN_1073e6900(&uStack_e0,param_2 + 0x18);
  lVar5 = *unaff_x20;
  func_0x0001074b99e8();
  func_0x0001074b975c(unaff_x19 + 0x60);
  uVar6 = param_1;
  func_0x0001074b9804();
  func_0x0001074b975c(unaff_x19 + 0xb8);
  uVar7 = uVar6;
  func_0x0001074b9804();
  func_0x0001074b975c(unaff_x19 + 0x110);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,0x43960000);
  uVar8 = uVar7;
  uStack_c0 = lVar5;
  func_0x0001074b975c(unaff_x19 + 0x168);
  uVar9 = uVar8;
  func_0x0001074b9804();
  func_0x0001074b975c(unaff_x19 + 0x1c0);
  uVar10 = uVar9;
  func_0x0001074b99e8();
  func_0x0001074b975c(unaff_x19 + 0x218);
  uStack_b8 = uStack_b8 & 0xffffffffffffff00;
  lVar2 = unaff_x19 + 0x270;
  uVar11 = uVar10;
  uStack_c0 = lVar5;
  FUN_1074b94d0(lVar2,&uStack_c0,*(undefined8 *)(lVar5 + 0x10));
  func_0x0001074b9804();
  func_0x0001074b975c(unaff_x19 + 0x2c8);
  FUN_1074b9204(&uStack_90,1);
  puStack_80[1] = 0;
  puStack_80[2] = 0;
  *puStack_80 = &PTR_FUN_1109b4c30;
  uStack_98 = uStack_d8;
  uStack_a0 = uStack_e0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_c0 = CONCAT44(uVar6,param_1);
  uStack_b8 = CONCAT44(uVar8,uVar7);
  uStack_a8 = (undefined1)lVar2;
  uStack_b0 = uVar9;
  uStack_ac = uVar10;
  uStack_a4 = uVar11;
  func_0x00010779d2b4(puStack_80 + 3,&uStack_a0,&uStack_c0);
  FUN_1073e6950(&uStack_a0);
  puVar3 = puStack_80;
  puStack_80 = (undefined8 *)0x0;
  func_0x0001074b9308(&uStack_90);
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_1074b8c2c(&uStack_c0);
  func_0x0001074b99ac();
  uVar1 = *(float *)(puVar3 + 9) == 0.0;
  uVar4 = 4;
  if (*(float *)(puVar3 + 9) <= 0.0) {
    uVar4 = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x38) = uVar4;
  *(undefined1 *)(puVar3 + 6) = uVar4;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_b8 = *(undefined8 *)(unaff_x19 + 0x10);
  uStack_c0 = *(undefined8 *)(unaff_x19 + 8);
  *(undefined8 **)(unaff_x19 + 8) = puVar3 + 3;
  *(undefined8 **)(unaff_x19 + 0x10) = puVar3;
  FUN_1073ad37c(&uStack_c0);
  func_0x0001074b9350(&uStack_90);
  puVar3 = &uStack_d0;
  FUN_1074b8c2c();
  func_0x0001074b976c(uStack_78);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001074b99ac();
  func_0x0001074b9764();
  return (undefined8 *)
         (ulong)((((*(char *)(puVar3 + 0x18) != '\0' || *(char *)(puVar3 + 0xd) != '\0') ||
                  (*(char *)(puVar3 + 0x23) != '\0' || *(char *)(puVar3 + 0x2e) != '\0')) ||
                 ((*(char *)(puVar3 + 0x39) != '\0' || *(char *)(puVar3 + 0x44) != '\0') ||
                 *(char *)(puVar3 + 0x4f) != '\0')) || *(char *)(puVar3 + 0x5a) != '\0');
}



/* Entry: 1074b7bbc; end: 1074b7c0b;  */

bool FUN_1074b7bbc(long param_1)

{
  return (((*(char *)(param_1 + 0xc0) != '\0' || *(char *)(param_1 + 0x68) != '\0') ||
          (*(char *)(param_1 + 0x118) != '\0' || *(char *)(param_1 + 0x170) != '\0')) ||
         ((*(char *)(param_1 + 0x1c8) != '\0' || *(char *)(param_1 + 0x220) != '\0') ||
         *(char *)(param_1 + 0x278) != '\0')) || *(char *)(param_1 + 0x2d0) != '\0';
}



/* Entry: 1074b7c0c; end: 1074b7c6f;  */

undefined8 FUN_1074b7c0c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x0001074b9864();
  (**(code **)(*(long *)*param_2 + 0x60))(auStack_30);
  FUN_107486e5c(unaff_x20 + 0x28,auStack_30);
  func_0x0001073ad4a0(auStack_30);
  plVar1 = (long *)*unaff_x19;
  (**(code **)(*plVar1 + 0x70))();
  *(long **)(unaff_x20 + 800) = plVar1;
  return 0;
}


