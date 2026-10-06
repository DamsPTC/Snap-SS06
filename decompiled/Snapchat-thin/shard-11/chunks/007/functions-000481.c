/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10888600c; end: 10888602b;  */

void FUN_10888600c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x198);
  FUN_108885c24();
  (**(code **)(*plVar1 + 0x48))();
  return;
}



/* Entry: 10888602c; end: 1088868bb;  */

void FUN_10888602c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 **ppuVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  int iVar26;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = (undefined8 *)0x1f8;
  __Znwm();
  *puVar17 = FUN_1088a5428;
  puVar17[1] = FUN_1088a5b74;
  puVar1 = puVar17 + 0x2c;
  uVar23 = (long)puVar17 + 0x1f5;
  puVar19 = puVar17 + 0x14;
  puVar2 = puVar17 + 0x19;
  puVar3 = puVar17 + 0x1e;
  puVar4 = puVar17 + 0x2f;
  puVar5 = puVar17 + 0xe;
  puVar6 = puVar17 + 0x28;
  puVar7 = puVar17 + 0x23;
  puVar8 = puVar17 + 0x32;
  puVar9 = puVar17 + 0x34;
  puVar10 = puVar17 + 0x38;
  puVar11 = puVar17 + 0x39;
  puVar12 = puVar17 + 0x3a;
  puVar13 = puVar17 + 0x3b;
  uVar14 = (long)puVar17 + 0x1f6;
  puVar15 = puVar17 + 2;
  puVar17[0x3c] = param_2;
  FUN_1088868bc(puVar1,param_3);
  func_0x000107c2a184(puVar15);
  func_0x000107c287c4(param_1,puVar15);
  func_0x000107c2a188(puVar15);
  uVar18 = uVar23;
  func_0x000107c2a18c();
  if ((uVar18 & 1) == 0) {
    *(undefined1 *)((long)puVar17 + 500) = 0;
    func_0x000107c2a194();
    ppuVar22 = &puStack_c0;
    puStack_c0 = puVar17;
    func_0x000107c2a198(ppuVar22);
    FUN_108885f40(uVar23,ppuVar22);
  }
  else {
    func_0x000107c2a19c(uVar23);
    lVar24 = puVar17[0x3c];
    FUN_108885a44(puVar19,0x23c);
    FUN_108681bac(puVar17 + 4,lVar24 + 0x1a0,puVar19,1,1);
    lVar24 = puVar17[0x3c];
    FUN_108657130(puVar19);
    func_0x0001088868f8(puVar2);
    func_0x00010888692c(puVar3);
    lVar24 = lVar24 + 0x1a0;
    FUN_108885a70(lVar24);
    FUN_108681d54(puVar4,lVar24,0x23e);
    FUN_108886960(puVar5,puVar17[0x3c],puVar1);
    do {
      func_0x0001088869a0(puVar6,puVar5);
      puVar19 = puVar6;
      func_0x0001088869d4();
      if (((ulong)puVar19 & 1) == 0) {
        iVar26 = 5;
      }
      else {
        FUN_1088869fc(puVar7);
        puVar19 = puVar6;
        FUN_108886a30();
        puVar20 = puVar19;
        FUN_108886a54();
        *puVar8 = puVar20;
        func_0x000108886a98();
        puVar17[0x33] = puVar19;
        while (puVar19 = puVar8, func_0x000108886adc(puVar8,puVar17 + 0x33),
              (((uint)puVar19 ^ 1) & 1) != 0) {
          puVar19 = puVar8;
          FUN_108886b24();
          puVar19 = puVar19 + 10;
          FUN_108886b3c();
          func_0x000108886b60();
          puVar20 = puVar19;
          func_0x000108886b84();
          *puVar9 = puVar20;
          FUN_108886bc4();
          puVar17[0x35] = puVar19;
          while (puVar19 = puVar9, FUN_108886c24(puVar9,puVar17 + 0x35), ((ulong)puVar19 & 1) != 0)
          {
            puVar19 = puVar9;
            func_0x000108886c54();
            puVar20 = puVar19;
            FUN_108886c70();
            FUN_108886d3c(puVar19);
            puVar21 = puVar7;
            FUN_108886c94(puVar7,puVar19);
            puVar19 = puVar20;
            func_0x000108886d60();
            puVar17[0x36] = puVar19;
            FUN_108886da0();
            puVar17[0x37] = puVar20;
            func_0x000107c2a1b8(puVar21,puVar17[0x36],puVar17[0x37]);
            func_0x000108886e00(puVar9);
          }
          func_0x000108886e20(puVar8);
        }
        FUN_108886e40(puVar11,puVar17[0x3c],puVar7,puVar2,puVar3);
        func_0x000107c2a1a0(puVar11);
        puVar19 = puVar10;
        func_0x000107c2a1a4();
        if (((ulong)puVar19 & 1) == 0) {
          *(undefined1 *)((long)puVar17 + 500) = 1;
          puVar19 = puVar17;
          func_0x000107c2a194();
          ppuVar22 = &puStack_b8;
          puStack_b8 = puVar19;
          func_0x000107c2a198(ppuVar22);
          puVar19 = puVar10;
          func_0x000107c28830(puVar10,ppuVar22);
          if (((ulong)puVar19 & 1) != 0) goto LAB_10888681c;
        }
        func_0x000107c28834(puVar10);
        FUN_108885f54(puVar10);
        func_0x000107c2a1ac(puVar11);
        uVar25 = puVar17[0x3c];
        puVar19 = puVar6;
        FUN_108886a30(puVar6);
        FUN_108887acc(puVar13,uVar25,puVar1,puVar19,puVar2);
        FUN_1088881a8(puVar12,puVar13);
        puVar19 = puVar12;
        func_0x000107c2a1a4();
        if (((ulong)puVar19 & 1) == 0) {
          *(undefined1 *)((long)puVar17 + 500) = 2;
          puVar19 = puVar17;
          func_0x000107c2a194();
          ppuVar22 = &puStack_b0;
          puStack_b0 = puVar19;
          func_0x000107c2a198(ppuVar22);
          puVar19 = puVar12;
          func_0x000107c28830(puVar12,ppuVar22);
          if (((ulong)puVar19 & 1) != 0) goto LAB_10888681c;
        }
        puVar19 = puVar12;
        FUN_1088881d4();
        *(undefined4 *)(puVar17 + 0x3d) = *(undefined4 *)puVar19;
        *(undefined4 *)((long)puVar17 + 0x1ec) = *(undefined4 *)((long)puVar19 + 4);
        FUN_108888254(puVar12);
        func_0x000108888288(puVar13);
        puVar19 = puVar6;
        FUN_1088882bc(puVar6);
        FUN_1088882e0();
        FUN_108681d9c(puVar4,puVar19);
        *(undefined4 *)(puVar17 + 0x3e) = 4;
        puVar19 = puVar17 + 0x3d;
        FUN_108888308();
        if (((ulong)puVar19 & 1) == 0) {
          iVar26 = 0;
        }
        else {
          iVar26 = 5;
        }
        func_0x000108888360(puVar7);
        if (iVar26 == 0) {
          iVar26 = 0;
        }
      }
      func_0x000108888394(puVar6);
    } while (iVar26 == 0);
    iVar16 = iVar26 + -5;
    if (iVar16 == 0) {
      iVar26 = 0;
    }
    func_0x0001088883c8(iVar16,puVar5);
    FUN_108681d9c(puVar4);
    func_0x0001088883fc(puVar3);
    func_0x000108888430(puVar2);
    FUN_108681bac(puVar17 + 4);
    if (iVar26 == 0) {
      func_0x000107c287c8(puVar15);
      FUN_108885f88(puVar15);
      uVar23 = uVar14;
      func_0x000107c2a18c();
      if ((uVar23 & 1) == 0) {
        *puVar17 = 0;
        *(undefined1 *)((long)puVar17 + 500) = 3;
        func_0x000107c2a194();
        ppuVar22 = apuStack_a8;
        apuStack_a8[0] = puVar17;
        func_0x000107c2a198(ppuVar22);
        FUN_108885f40(uVar14,ppuVar22);
        goto LAB_10888681c;
      }
      func_0x000107c2a19c(uVar14);
    }
    FUN_108885f98(puVar15);
    func_0x000108888464(puVar1);
    __ZdlPv(puVar17);
  }
LAB_10888681c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70);
  }
  return;
}



/* Entry: 1088868bc; end: 10888695f;  */

undefined8 FUN_1088868bc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010888e3e8(param_1,param_2);
  return param_1;
}



/* Entry: 108886960; end: 1088869fb;  */

void FUN_108886960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_40 = 0;
  uStack_38 = param_2;
  uStack_30 = param_3;
  uStack_28 = param_3;
  uStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010888c698(param_1,&uStack_40);
  return;
}



/* Entry: 1088869fc; end: 108886a2f;  */

undefined8 FUN_1088869fc(undefined8 param_1)

{
  func_0x000108895ba4(param_1);
  return param_1;
}



/* Entry: 108886a30; end: 108886a53;  */

void FUN_108886a30(undefined8 param_1)

{
  func_0x00010888e4dc(param_1);
  return;
}



/* Entry: 108886a54; end: 108886b23;  */

undefined8 * FUN_108886a54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_10888e520(uVar1);
  FUN_10888e4f0(param_1,uVar1);
  return param_1;
}



/* Entry: 108886b24; end: 108886b3b;  */

undefined8 FUN_108886b24(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 108886b3c; end: 108886bc3;  */

void FUN_108886b3c(undefined8 param_1)

{
  FUN_10888e5a8(param_1);
  return;
}



/* Entry: 108886bc4; end: 108886c23;  */

undefined8 FUN_108886bc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  lStack_30 = param_1;
  func_0x000108896474(param_1);
  FUN_108896604(param_1);
  FUN_108896498(auStack_38,lVar1 + (long)(int)param_1 * 8);
  func_0x0001088964d4(&uStack_28,auStack_38);
  return uStack_28;
}



/* Entry: 108886c24; end: 108886c6f;  */

bool FUN_108886c24(long *param_1,long *param_2)

{
  return *param_1 != *param_2;
}



/* Entry: 108886c70; end: 108886c93;  */

void FUN_108886c70(undefined8 param_1)

{
  func_0x00010888e60c(param_1);
  return;
}



/* Entry: 108886c94; end: 108886d3b;  */

void FUN_108886c94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  uStack_48 = param_2;
  uStack_40 = param_1;
  FUN_1088969b8();
  uStack_60 = uVar1;
  FUN_1088969e4();
  FUN_108896640(param_1,param_2,&uStack_60,&uStack_61);
  uStack_30._0_1_ = (undefined1)param_2;
  uStack_50 = (undefined1)uStack_30;
  puVar2 = &uStack_58;
  uStack_58 = param_1;
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_1088969e8(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28,puVar2 + 4);
  }
  return;
}



/* Entry: 108886d3c; end: 108886d9f;  */

void FUN_108886d3c(undefined8 param_1)

{
  FUN_10888e630(param_1);
  return;
}



/* Entry: 108886da0; end: 108886dff;  */

undefined8 FUN_108886da0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  lStack_30 = param_1;
  func_0x000108896474(param_1);
  FUN_108897af0(param_1);
  FUN_108897a34(auStack_38,lVar1 + (long)(int)param_1 * 8);
  func_0x000108897a70(&uStack_28,auStack_38);
  return uStack_28;
}



/* Entry: 108886e00; end: 108886e3f;  */

void FUN_108886e00(long *param_1)

{
  *param_1 = *param_1 + 8;
  return;
}



/* Entry: 108886e40; end: 108887acb;  */

void FUN_108886e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 **ppuVar25;
  long *plVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  undefined1 *puVar31;
  ulong uVar32;
  int iVar33;
  long lVar34;
  undefined8 *puVar35;
  long lVar36;
  undefined1 auStack_410 [80];
  long *plStack_3c0;
  long *plStack_3b8;
  undefined1 auStack_3b0 [40];
  long lStack_388;
  undefined1 uStack_380;
  long lStack_378;
  undefined1 *puStack_370;
  byte bStack_361;
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [32];
  undefined8 **ppuStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_300;
  long lStack_228;
  long lStack_220;
  undefined8 *puStack_218;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = (undefined8 *)0x248;
  lStack_d0 = param_5;
  lStack_c8 = param_4;
  uStack_c0 = param_3;
  uStack_b8 = param_2;
  uStack_b0 = param_1;
  __Znwm();
  *puVar22 = FUN_1088a2f6c;
  puVar22[1] = FUN_1088a3b70;
  puVar30 = puVar22 + 0x37;
  plVar29 = puVar22 + 0x38;
  plVar1 = puVar22 + 0x39;
  uVar32 = (long)puVar22 + 0x241;
  puVar2 = puVar22 + 0x2b;
  puVar35 = puVar22 + 0x3a;
  puVar27 = puVar22 + 0x3b;
  plVar26 = puVar22 + 0x3d;
  plVar28 = puVar22 + 0x3e;
  puVar3 = puVar22 + 0x17;
  puVar4 = puVar22 + 0x3f;
  puVar5 = puVar22 + 0x40;
  puVar6 = puVar22 + 0x2e;
  puVar7 = puVar22 + 0xe;
  puVar8 = puVar22 + 0x1c;
  puVar9 = puVar22 + 0x41;
  puVar10 = puVar22 + 0x42;
  puVar11 = puVar22 + 0x31;
  puVar12 = puVar22 + 0x21;
  puVar13 = puVar22 + 0x43;
  puVar14 = puVar22 + 0x44;
  puVar15 = puVar22 + 0x45;
  puVar16 = puVar22 + 0x34;
  plVar17 = puVar22 + 0x46;
  puVar18 = puVar22 + 0x26;
  uVar19 = (long)puVar22 + 0x242;
  puVar20 = puVar22 + 2;
  puVar22[0x47] = param_2;
  *puVar30 = uStack_c0;
  *plVar29 = lStack_c8;
  *plVar1 = lStack_d0;
  func_0x000107c2a184(puVar20);
  func_0x000107c287c4(param_1,puVar20);
  func_0x000107c2a188(puVar20);
  uVar23 = uVar32;
  func_0x000107c2a18c();
  if ((uVar23 & 1) == 0) {
    *(undefined1 *)(puVar22 + 0x48) = 0;
    func_0x000107c2a194();
    ppuVar25 = &puStack_a8;
    puStack_a8 = puVar22;
    func_0x000107c2a198(ppuVar25);
    FUN_108885f40(uVar32,ppuVar25);
    goto LAB_1088879f8;
  }
  func_0x000107c2a19c(uVar32);
  func_0x00010888b450(puVar2);
  *puVar35 = *puVar30;
  uVar24 = *puVar35;
  FUN_10888b484();
  *puVar27 = uVar24;
  uVar24 = *puVar35;
  func_0x00010888b4bc();
  puVar22[0x3c] = uVar24;
  while (puVar35 = puVar27, func_0x00010888b4f4(puVar27,puVar22 + 0x3c),
        (((uint)puVar35 ^ 1) & 1) != 0) {
    puVar35 = puVar27;
    func_0x00010888b524();
    *plVar26 = (long)puVar35;
    *plVar28 = *plVar26;
    lVar34 = *plVar29;
    func_0x00010888b548(lVar34,*plVar28);
    if (lVar34 == 0) {
      lVar34 = puVar22[0x47];
      func_0x000107c29ee0(puVar6,*plVar28);
      FUN_1086682a4(puVar5,lVar34 + 0xe8,puVar6);
      func_0x00010888b574(puVar4,puVar5);
      puVar35 = puVar4;
      func_0x000107c2a1a4();
      if (((ulong)puVar35 & 1) == 0) {
        *(undefined1 *)(puVar22 + 0x48) = 1;
        puVar35 = puVar22;
        func_0x000107c2a194();
        ppuVar25 = &puStack_a0;
        puStack_a0 = puVar35;
        func_0x000107c2a198(ppuVar25);
        puVar35 = puVar4;
        func_0x000107c28830(puVar4,ppuVar25);
        if (((ulong)puVar35 & 1) != 0) goto LAB_1088879f8;
      }
      puVar35 = puVar4;
      FUN_10866291c(puVar4);
      FUN_10888b59c(puVar3,puVar35);
      func_0x00010888b5d8(puVar4);
      func_0x00010888b60c(puVar5);
      func_0x000108888464(puVar6);
      lVar34 = *plVar29;
      lVar36 = *plVar28;
      FUN_10888b6c8(puVar8,puVar22[0x47],puVar3);
      func_0x00010888b9c4(puVar7,lVar36,puVar8);
      puVar35 = puVar7;
      FUN_10888b640();
      lStack_220 = lVar34;
      puStack_218 = puVar35;
      func_0x00010888ba08(puVar7);
      func_0x00010888ba3c(puVar8);
      func_0x00010888ba70(puVar3);
    }
    lVar34 = *plVar1;
    FUN_10888baa4(lVar34,*plVar28);
    if (lVar34 == 0) {
      lVar34 = *plVar26 + 0x20;
      lVar36 = *plVar29;
      FUN_10888bb44(lVar36,*plVar28);
      func_0x00010888bad0(lVar34,lVar36);
      lStack_228 = lVar34;
      if (lVar34 != 0) {
        FUN_10888bbec(puVar2,*plVar28);
      }
    }
    func_0x00010888bc18(puVar27);
  }
  puVar35 = puVar2;
  FUN_10888bc3c();
  if (((ulong)puVar35 & 1) == 0) {
    lVar34 = puVar22[0x47];
    FUN_10888bc64(puVar11);
    FUN_108885a44(puVar12,0x243);
    FUN_108681bac(puVar22 + 4,lVar34 + 0x1a0,puVar12,0,1);
    lVar34 = puVar22[0x47];
    FUN_108657130(puVar12);
    plVar26 = (long *)(lVar34 + 400);
    FUN_10888c0b8();
    FUN_10888c0d0(puVar16,puVar2);
    (**(code **)(*plVar26 + 0x10))(puVar15,plVar26,puVar16,0x5d0207);
    FUN_10888bc98(puVar14,lVar34 + 0x88,puVar15);
    FUN_10888c1cc(puVar13,puVar14);
    puVar35 = puVar13;
    func_0x000107c2a1a4();
    if (((ulong)puVar35 & 1) == 0) {
      *(undefined1 *)(puVar22 + 0x48) = 3;
      puVar35 = puVar22;
      func_0x000107c2a194();
      ppuVar25 = &puStack_90;
      puStack_90 = puVar35;
      func_0x000107c2a198(ppuVar25);
      puVar35 = puVar13;
      func_0x000107c28830(puVar13,ppuVar25);
      if (((ulong)puVar35 & 1) != 0) goto LAB_1088879f8;
    }
    puVar35 = puVar13;
    FUN_10865ae40(puVar13);
    puVar27 = puVar11;
    FUN_10888c1f4(puVar11,puVar35);
    puStack_300 = puVar27;
    func_0x00010888c264(puVar13);
    func_0x00010888c298(puVar14);
    func_0x00010888c298(puVar15);
    func_0x00010888c2cc(puVar16);
    FUN_108681bac(puVar22 + 4);
    *plVar17 = 0;
    puVar35 = puVar11;
    puStack_310 = puVar11;
    FUN_10888c300();
    puVar27 = puStack_310;
    puStack_318 = puVar35;
    func_0x00010888c32c();
    puStack_320 = puVar27;
    while( true ) {
      ppuVar25 = &puStack_318;
      func_0x00010888c358(ppuVar25,&puStack_320);
      if (((ulong)ppuVar25 & 1) == 0) break;
      ppuVar25 = &puStack_318;
      func_0x00010888c38c();
      ppuStack_328 = ppuVar25;
      FUN_108847298(auStack_360,ppuVar25);
      func_0x000107c29ee4(auStack_348,auStack_360);
      func_0x000108888464(auStack_360);
      bStack_361 = *(int *)(ppuStack_328 + 3) == 1;
      lVar34 = *plVar1;
      puVar31 = auStack_348;
      FUN_1086a30ac();
      lStack_378 = lVar34;
      puStack_370 = puVar31;
      if ((bStack_361 & 1) != 0) {
        *plVar17 = *plVar17 + 1;
        lVar34 = *plVar29;
        FUN_10888b6c8(auStack_3b0,puVar22[0x47],ppuStack_328 + 3);
        puVar31 = auStack_348;
        FUN_10888c3b8(lVar34,puVar31,auStack_3b0);
        puStack_78._0_1_ = SUB81(puVar31,0);
        uStack_380 = puStack_78._0_1_;
        lStack_388 = lVar34;
        lStack_80 = lVar34;
        puStack_78 = puVar31;
        func_0x00010888ba3c(auStack_3b0);
        plVar26 = &lStack_388;
        FUN_10888c474();
        plVar28 = &lStack_388;
        plStack_3b8 = plVar26;
        func_0x00010888c498();
        uVar24 = *puVar30;
        plStack_3c0 = plVar28;
        func_0x00010888c524(uVar24,auStack_348);
        plVar26 = plStack_3b8;
        FUN_10888c594(plStack_3b8);
        func_0x00010888c4bc(puVar22[0x47],uVar24,plVar26 + 4);
      }
      func_0x0001088bf334(auStack_348);
      func_0x00010888c5bc(&puStack_318);
    }
    plVar29 = (long *)(puVar22[0x47] + 0x1a0);
    FUN_108885c24();
    FUN_108885a44(auStack_410,0x243);
    puVar35 = (undefined8 *)*plVar17;
    puVar30 = puVar11;
    func_0x00010888c5dc();
    uVar21 = 0x30011;
    if (puVar35 != puVar30) {
      uVar21 = 0x30012;
    }
    puVar31 = auStack_410;
    FUN_108659af8(puVar31,uVar21);
    func_0x00010888c5f4(puVar18,puVar31);
    (**(code **)(*plVar29 + 0x50))(plVar29,puVar18);
    FUN_108657130(puVar18);
    FUN_108657130(auStack_410);
    func_0x00010888c630(puVar11);
    iVar33 = 0;
  }
  else {
    func_0x00010bcd3464(puVar10);
    func_0x000107c2a1a0(puVar9,puVar10);
    puVar30 = puVar9;
    func_0x000107c2a1a4();
    if (((ulong)puVar30 & 1) == 0) {
      *(undefined1 *)(puVar22 + 0x48) = 2;
      puVar30 = puVar22;
      func_0x000107c2a194();
      ppuVar25 = &puStack_98;
      puStack_98 = puVar30;
      func_0x000107c2a198(ppuVar25);
      puVar30 = puVar9;
      func_0x000107c28830(puVar9,ppuVar25);
      if (((ulong)puVar30 & 1) != 0) goto LAB_1088879f8;
    }
    func_0x000107c28834(puVar9);
    FUN_108885f54(puVar9);
    func_0x000107c2a1ac(puVar10);
    func_0x000107c287c8(puVar20);
    iVar33 = 3;
  }
  func_0x00010888c664(puVar2);
  if (iVar33 == 0) {
    func_0x000107c287c8(puVar20);
LAB_10888795c:
    FUN_108885f88(puVar20);
    uVar32 = uVar19;
    func_0x000107c2a18c();
    if ((uVar32 & 1) == 0) {
      *puVar22 = 0;
      *(undefined1 *)(puVar22 + 0x48) = 4;
      func_0x000107c2a194();
      ppuVar25 = &puStack_88;
      puStack_88 = puVar22;
      func_0x000107c2a198(ppuVar25);
      FUN_108885f40(uVar19,ppuVar25);
      goto LAB_1088879f8;
    }
    func_0x000107c2a19c(uVar19);
  }
  else if (iVar33 == 3) goto LAB_10888795c;
  FUN_108885f98(puVar20);
  __ZdlPv(puVar22);
LAB_1088879f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70);
  }
  return;
}



/* Entry: 108887acc; end: 1088881a7;  */

void FUN_108887acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  byte bVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 **ppuVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_428 [47];
  byte bStack_3f9;
  undefined8 *puStack_3f8;
  undefined4 auStack_3dc [151];
  undefined1 auStack_180 [208];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar15 = (undefined8 *)0x338;
  uStack_b0 = param_5;
  uStack_a8 = param_4;
  uStack_a0 = param_3;
  uStack_98 = param_2;
  uStack_90 = param_1;
  __Znwm();
  *puVar15 = FUN_1088a4ca0;
  puVar15[1] = FUN_1088a52dc;
  puVar1 = puVar15 + 0x5d;
  puVar2 = puVar15 + 0x5e;
  puVar20 = puVar15 + 0x5f;
  uVar23 = (long)puVar15 + 0x331;
  puVar18 = puVar15 + 0x4f;
  puVar3 = puVar15 + 0x54;
  puVar22 = puVar15 + 0x57;
  puVar4 = puVar15 + 4;
  puVar5 = puVar15 + 0x49;
  puVar6 = puVar15 + 0x60;
  puVar7 = puVar15 + 0x61;
  puVar8 = puVar15 + 0x62;
  puVar9 = puVar15 + 99;
  puVar10 = puVar15 + 0x5a;
  uVar11 = (long)puVar15 + 0x332;
  puVar12 = puVar15 + 2;
  puVar15[0x65] = param_2;
  *puVar1 = uStack_a0;
  *puVar2 = uStack_a8;
  *puVar20 = uStack_b0;
  FUN_10888cd30(puVar12);
  FUN_10888cd64(param_1,puVar12);
  func_0x000107c2a188(puVar12);
  uVar16 = uVar23;
  func_0x000107c2a18c();
  if ((uVar16 & 1) == 0) {
    *(undefined1 *)(puVar15 + 0x66) = 0;
    FUN_10888cdb8();
    ppuVar19 = &puStack_88;
    puStack_88 = puVar15;
    func_0x00010888cde8(ppuVar19);
    FUN_108885f40(uVar23,ppuVar19);
  }
  else {
    func_0x000107c2a19c(uVar23);
    lVar24 = puVar15[0x65];
    FUN_108885a44(auStack_180,0x23d);
    func_0x000107c2a17c(puVar3,&DAT_10f3a381b);
    puVar17 = auStack_180;
    func_0x000107c28818(puVar17,puVar3,1);
    FUN_10888c5f4(puVar18,puVar17);
    FUN_108681bac(puVar15 + 0x3f,lVar24 + 0x1a0,puVar18,0,1);
    FUN_108657130(puVar18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar3);
    FUN_108657130(auStack_180);
    FUN_10888ce18(puVar22,1);
    uVar25 = puVar15[0x65];
    func_0x00010888ce54(puVar4);
    FUN_1088884b8(puVar7,uVar25,*puVar1,*puVar2,*puVar20,puVar4,0);
    FUN_10888ce88(puVar6,puVar7);
    puVar18 = puVar6;
    func_0x000107c2a1a4();
    if (((ulong)puVar18 & 1) == 0) {
      *(undefined1 *)(puVar15 + 0x66) = 1;
      puVar18 = puVar15;
      FUN_10888cdb8();
      ppuVar19 = &puStack_80;
      puStack_80 = puVar18;
      func_0x00010888cde8(ppuVar19);
      puVar18 = puVar6;
      func_0x000107c28830(puVar6,ppuVar19);
      if (((ulong)puVar18 & 1) != 0) {
        return;
      }
    }
    puVar18 = puVar6;
    FUN_10888ceb0(puVar6);
    FUN_10888cf30(puVar5,puVar18);
    func_0x00010888cf6c(puVar6);
    func_0x00010888cfa0(puVar7);
    auStack_3dc[0] = 5;
    puVar18 = puVar5;
    FUN_108888308(puVar5,auStack_3dc);
    if (((ulong)puVar18 & 1) != 0) {
      FUN_1088884b8(puVar9,puVar15[0x65],*puVar1,*puVar2,*puVar20,puVar4,1);
      FUN_10888ce88(puVar8,puVar9);
      puVar20 = puVar8;
      func_0x000107c2a1a4();
      if (((ulong)puVar20 & 1) == 0) {
        *(undefined1 *)(puVar15 + 0x66) = 2;
        puVar20 = puVar15;
        FUN_10888cdb8();
        ppuVar19 = &puStack_78;
        puStack_78 = puVar20;
        func_0x00010888cde8(ppuVar19);
        puVar20 = puVar8;
        func_0x000107c28830(puVar8,ppuVar19);
        if (((ulong)puVar20 & 1) != 0) {
          return;
        }
      }
      puVar20 = puVar8;
      FUN_10888ceb0(puVar8);
      puVar18 = puVar5;
      func_0x00010888cfd4(puVar5,puVar20);
      puStack_3f8 = puVar18;
      func_0x00010888cf6c(puVar8);
      func_0x00010888cfa0(puVar9);
    }
    lVar24 = puVar15[0x65];
    puVar20 = puVar5;
    FUN_10888d028();
    bStack_3f9 = (byte)puVar20 ^ 1;
    plVar21 = (long *)(lVar24 + 0x1a0);
    FUN_108885c24();
    FUN_108885a44(auStack_428,0x23d);
    uVar13 = 0x30011;
    if ((bStack_3f9 & 1) == 0) {
      uVar13 = 0x30012;
    }
    puVar17 = auStack_428;
    FUN_108659af8(puVar17,uVar13);
    func_0x000107c2a17c(puVar10,&DAT_10f3a381b);
    func_0x000107c28818(puVar17,puVar10,1);
    uVar25 = *puVar2;
    FUN_1088882e0(uVar25);
    (**(code **)(*plVar21 + 0x58))(plVar21,puVar17,uVar25);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(puVar10);
    FUN_108657130(auStack_428);
    bVar14 = bStack_3f9;
    uVar25 = *puVar2;
    uVar26 = *puVar1;
    func_0x000107c2825c();
    puVar15[100] = puVar22;
    FUN_10888d044(puVar15[0x65],uVar25,uVar26,puVar4,bVar14 & 1,puVar5,puVar15 + 0x4a,puVar15[100]);
    FUN_10888d558(puVar12,puVar5);
    func_0x0001088895a0(puVar5);
    FUN_108889488(puVar4);
    FUN_108681bac(puVar15 + 0x3f);
    FUN_108885f88(puVar12);
    uVar23 = uVar11;
    func_0x000107c2a18c();
    if ((uVar23 & 1) == 0) {
      *puVar15 = 0;
      *(undefined1 *)(puVar15 + 0x66) = 3;
      FUN_10888cdb8();
      ppuVar19 = apuStack_70;
      apuStack_70[0] = puVar15;
      func_0x00010888cde8(ppuVar19);
      FUN_108885f40(uVar11,ppuVar19);
    }
    else {
      func_0x000107c2a19c(uVar11);
      func_0x00010888d5a4(puVar12);
      __ZdlPv(puVar15);
    }
  }
  return;
}



/* Entry: 1088881a8; end: 1088881d3;  */

void FUN_1088881a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10888e670(param_1,param_2);
  return;
}



/* Entry: 1088881d4; end: 108888253;  */

void FUN_1088881d4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auStack_30 [8];
  ulong uStack_28;
  
  uVar2 = param_1;
  uStack_28 = param_1;
  func_0x000107c2a1f0();
  FUN_10888e2bc();
  if ((uVar2 & 1) == 0) {
    func_0x000107c2a1f0(param_1);
    FUN_10888e6e8();
    return;
  }
  func_0x000107c2a1f0(param_1);
  __ZNSt13exception_ptrC1ERKS_(auStack_30,param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10888823c);
  (*pcVar1)();
}



/* Entry: 108888254; end: 1088882bb;  */

undefined8 FUN_108888254(undefined8 param_1)

{
  FUN_10888e750(param_1);
  return param_1;
}



/* Entry: 1088882bc; end: 1088882df;  */

void FUN_1088882bc(undefined8 param_1)

{
  func_0x00010888e4dc(param_1);
  return;
}



/* Entry: 1088882e0; end: 108888307;  */

long FUN_1088882e0(long *param_1)

{
  return (param_1[1] - *param_1) / 0x1a8;
}



/* Entry: 108888308; end: 10888835f;  */

bool FUN_108888308(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = param_1;
  FUN_10888b3cc();
  if (((ulong)piVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    FUN_10888e7b8();
    bVar1 = *param_1 == *param_2;
  }
  return bVar1;
}



/* Entry: 108888360; end: 108888497;  */

undefined8 FUN_108888360(undefined8 param_1)

{
  FUN_108895f18(param_1);
  return param_1;
}



/* Entry: 108888498; end: 1088884b7;  */

void FUN_108888498(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 **ppuVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  int iVar26;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *apuStack_a8 [7];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = (undefined8 *)0x1f8;
  __Znwm();
  *puVar17 = FUN_1088a5428;
  puVar17[1] = FUN_1088a5b74;
  puVar1 = puVar17 + 0x2c;
  uVar23 = (long)puVar17 + 0x1f5;
  puVar19 = puVar17 + 0x14;
  puVar2 = puVar17 + 0x19;
  puVar3 = puVar17 + 0x1e;
  puVar4 = puVar17 + 0x2f;
  puVar5 = puVar17 + 0xe;
  puVar6 = puVar17 + 0x28;
  puVar7 = puVar17 + 0x23;
  puVar8 = puVar17 + 0x32;
  puVar9 = puVar17 + 0x34;
  puVar10 = puVar17 + 0x38;
  puVar11 = puVar17 + 0x39;
  puVar12 = puVar17 + 0x3a;
  puVar13 = puVar17 + 0x3b;
  uVar14 = (long)puVar17 + 0x1f6;
  puVar15 = puVar17 + 2;
  puVar17[0x3c] = param_2 + -8;
  FUN_1088868bc(puVar1,param_3);
  func_0x000107c2a184(puVar15);
  func_0x000107c287c4(param_1,puVar15);
  func_0x000107c2a188(puVar15);
  uVar18 = uVar23;
  func_0x000107c2a18c();
  if ((uVar18 & 1) == 0) {
    *(undefined1 *)((long)puVar17 + 500) = 0;
    func_0x000107c2a194();
    ppuVar22 = &puStack_c0;
    puStack_c0 = puVar17;
    func_0x000107c2a198(ppuVar22);
    FUN_108885f40(uVar23,ppuVar22);
  }
  else {
    func_0x000107c2a19c(uVar23);
    lVar24 = puVar17[0x3c];
    FUN_108885a44(puVar19,0x23c);
    FUN_108681bac(puVar17 + 4,lVar24 + 0x1a0,puVar19,1,1);
    lVar24 = puVar17[0x3c];
    FUN_108657130(puVar19);
    func_0x0001088868f8(puVar2);
    func_0x00010888692c(puVar3);
    lVar24 = lVar24 + 0x1a0;
    FUN_108885a70(lVar24);
    FUN_108681d54(puVar4,lVar24,0x23e);
    FUN_108886960(puVar5,puVar17[0x3c],puVar1);
    do {
      func_0x0001088869a0(puVar6,puVar5);
      puVar19 = puVar6;
      func_0x0001088869d4();
      if (((ulong)puVar19 & 1) == 0) {
        iVar26 = 5;
      }
      else {
        FUN_1088869fc(puVar7);
        puVar19 = puVar6;
        FUN_108886a30();
        puVar20 = puVar19;
        FUN_108886a54();
        *puVar8 = puVar20;
        func_0x000108886a98();
        puVar17[0x33] = puVar19;
        while (puVar19 = puVar8, func_0x000108886adc(puVar8,puVar17 + 0x33),
              (((uint)puVar19 ^ 1) & 1) != 0) {
          puVar19 = puVar8;
          FUN_108886b24();
          puVar19 = puVar19 + 10;
          FUN_108886b3c();
          func_0x000108886b60();
          puVar20 = puVar19;
          func_0x000108886b84();
          *puVar9 = puVar20;
          FUN_108886bc4();
          puVar17[0x35] = puVar19;
          while (puVar19 = puVar9, FUN_108886c24(puVar9,puVar17 + 0x35), ((ulong)puVar19 & 1) != 0)
          {
            puVar19 = puVar9;
            func_0x000108886c54();
            puVar20 = puVar19;
            FUN_108886c70();
            FUN_108886d3c(puVar19);
            puVar21 = puVar7;
            FUN_108886c94(puVar7,puVar19);
            puVar19 = puVar20;
            func_0x000108886d60();
            puVar17[0x36] = puVar19;
            FUN_108886da0();
            puVar17[0x37] = puVar20;
            func_0x000107c2a1b8(puVar21,puVar17[0x36],puVar17[0x37]);
            func_0x000108886e00(puVar9);
          }
          func_0x000108886e20(puVar8);
        }
        FUN_108886e40(puVar11,puVar17[0x3c],puVar7,puVar2,puVar3);
        func_0x000107c2a1a0(puVar11);
        puVar19 = puVar10;
        func_0x000107c2a1a4();
        if (((ulong)puVar19 & 1) == 0) {
          *(undefined1 *)((long)puVar17 + 500) = 1;
          puVar19 = puVar17;
          func_0x000107c2a194();
          ppuVar22 = &puStack_b8;
          puStack_b8 = puVar19;
          func_0x000107c2a198(ppuVar22);
          puVar19 = puVar10;
          func_0x000107c28830(puVar10,ppuVar22);
          if (((ulong)puVar19 & 1) != 0) goto LAB_10888681c;
        }
        func_0x000107c28834(puVar10);
        FUN_108885f54(puVar10);
        func_0x000107c2a1ac(puVar11);
        uVar25 = puVar17[0x3c];
        puVar19 = puVar6;
        FUN_108886a30(puVar6);
        FUN_108887acc(puVar13,uVar25,puVar1,puVar19,puVar2);
        FUN_1088881a8(puVar12,puVar13);
        puVar19 = puVar12;
        func_0x000107c2a1a4();
        if (((ulong)puVar19 & 1) == 0) {
          *(undefined1 *)((long)puVar17 + 500) = 2;
          puVar19 = puVar17;
          func_0x000107c2a194();
          ppuVar22 = &puStack_b0;
          puStack_b0 = puVar19;
          func_0x000107c2a198(ppuVar22);
          puVar19 = puVar12;
          func_0x000107c28830(puVar12,ppuVar22);
          if (((ulong)puVar19 & 1) != 0) goto LAB_10888681c;
        }
        puVar19 = puVar12;
        FUN_1088881d4();
        *(undefined4 *)(puVar17 + 0x3d) = *(undefined4 *)puVar19;
        *(undefined4 *)((long)puVar17 + 0x1ec) = *(undefined4 *)((long)puVar19 + 4);
        FUN_108888254(puVar12);
        func_0x000108888288(puVar13);
        puVar19 = puVar6;
        FUN_1088882bc(puVar6);
        FUN_1088882e0();
        FUN_108681d9c(puVar4,puVar19);
        *(undefined4 *)(puVar17 + 0x3e) = 4;
        puVar19 = puVar17 + 0x3d;
        FUN_108888308();
        if (((ulong)puVar19 & 1) == 0) {
          iVar26 = 0;
        }
        else {
          iVar26 = 5;
        }
        func_0x000108888360(puVar7);
        if (iVar26 == 0) {
          iVar26 = 0;
        }
      }
      func_0x000108888394(puVar6);
    } while (iVar26 == 0);
    iVar16 = iVar26 + -5;
    if (iVar16 == 0) {
      iVar26 = 0;
    }
    func_0x0001088883c8(iVar16,puVar5);
    FUN_108681d9c(puVar4);
    func_0x0001088883fc(puVar3);
    func_0x000108888430(puVar2);
    FUN_108681bac(puVar17 + 4);
    if (iVar26 == 0) {
      func_0x000107c287c8(puVar15);
      FUN_108885f88(puVar15);
      uVar23 = uVar14;
      func_0x000107c2a18c();
      if ((uVar23 & 1) == 0) {
        *puVar17 = 0;
        *(undefined1 *)((long)puVar17 + 500) = 3;
        func_0x000107c2a194();
        ppuVar22 = apuStack_a8;
        apuStack_a8[0] = puVar17;
        func_0x000107c2a198(ppuVar22);
        FUN_108885f40(uVar14,ppuVar22);
        goto LAB_10888681c;
      }
      func_0x000107c2a19c(uVar14);
    }
    FUN_108885f98(puVar15);
    func_0x000108888464(puVar1);
    __ZdlPv(puVar17);
  }
LAB_10888681c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_70);
  }
  return;
}



/* Entry: 1088884b8; end: 10888935b;  */

void FUN_1088884b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,byte param_7)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 **ppuVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined4 *puVar29;
  int iVar30;
  long lVar31;
  ulong uVar32;
  undefined4 uStack_660;
  undefined1 uStack_65c;
  undefined1 auStack_658 [48];
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined1 uStack_620;
  undefined4 uStack_61c;
  undefined1 auStack_618 [8];
  undefined1 auStack_610 [44];
  undefined4 auStack_5e4 [11];
  undefined1 auStack_5b8 [56];
  undefined1 auStack_580 [16];
  long *plStack_570;
  undefined1 auStack_558 [64];
  undefined1 auStack_518 [8];
  undefined1 auStack_510 [40];
  undefined8 *puStack_4e8;
  long lStack_4e0;
  undefined1 auStack_4d8 [64];
  undefined1 auStack_498 [8];
  undefined8 *puStack_490;
  long lStack_488;
  undefined1 uStack_47d;
  undefined4 uStack_47c;
  undefined1 auStack_478 [40];
  undefined1 auStack_450 [8];
  undefined1 uStack_448;
  undefined1 auStack_3f8 [108];
  undefined4 uStack_38c;
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [44];
  undefined4 uStack_354;
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [40];
  undefined1 auStack_320 [583];
  byte bStack_d9;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  long alStack_88 [3];
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = (undefined8 *)0x148;
  bStack_d9 = param_7;
  uStack_d8 = param_6;
  uStack_d0 = param_5;
  uStack_c8 = param_4;
  uStack_c0 = param_3;
  uStack_b8 = param_2;
  uStack_b0 = param_1;
  __Znwm();
  *puVar17 = FUN_1088a3d84;
  puVar17[1] = FUN_1088a4af8;
  puVar27 = puVar17 + 0x17;
  puVar1 = puVar17 + 0x1a;
  uVar21 = (long)puVar17 + 0x142;
  puVar22 = puVar17 + 0x1b;
  puVar2 = puVar17 + 0x1c;
  puVar3 = puVar17 + 0x1d;
  puVar4 = puVar17 + 4;
  puVar5 = puVar17 + 0x1e;
  puVar6 = puVar17 + 0xc;
  puVar7 = puVar17 + 0x1f;
  puVar8 = puVar17 + 0x20;
  plVar26 = puVar17 + 0x22;
  plVar9 = puVar17 + 0x11;
  puVar10 = puVar17 + 0x13;
  puVar28 = puVar17 + 0x27;
  puVar11 = puVar17 + 0x23;
  puVar12 = puVar17 + 0x24;
  puVar13 = puVar17 + 0x25;
  uVar14 = (long)puVar17 + 0x143;
  puVar15 = puVar17 + 2;
  puVar17[0x26] = param_2;
  *puVar27 = uStack_c0;
  puVar17[0x18] = uStack_c8;
  puVar17[0x19] = uStack_d0;
  *puVar1 = uStack_d8;
  *(byte *)((long)puVar17 + 0x141) = bStack_d9 & 1;
  FUN_10888935c(puVar15);
  FUN_108889390(param_1,puVar15);
  func_0x000107c2a188(puVar15);
  uVar32 = uVar21;
  func_0x000107c2a18c();
  if ((uVar32 & 1) == 0) {
    *(undefined1 *)(puVar17 + 0x28) = 0;
    FUN_1088893e4();
    ppuVar20 = &puStack_a8;
    puStack_a8 = puVar17;
    func_0x000108889414(ppuVar20);
    FUN_108885f40(uVar21,ppuVar20);
  }
  else {
    func_0x000107c2a19c(uVar21);
    if ((*(byte *)((long)puVar17 + 0x141) & 1) != 0) {
      lVar31 = puVar17[0x26];
      plVar18 = (long *)(lVar31 + 0x1c0);
      FUN_108889444();
      (**(code **)(*plVar18 + 0x18))(puVar3);
      func_0x000107c2883c(puVar2,lVar31 + 0x88,puVar3);
      func_0x000107c2a1a0(puVar22,puVar2);
      puVar19 = puVar22;
      func_0x000107c2a1a4();
      if (((ulong)puVar19 & 1) == 0) {
        *(undefined1 *)(puVar17 + 0x28) = 1;
        puVar19 = puVar17;
        FUN_1088893e4();
        ppuVar20 = &puStack_a0;
        puStack_a0 = puVar19;
        func_0x000108889414(ppuVar20);
        puVar19 = puVar22;
        func_0x000107c28830(puVar22,ppuVar20);
        if (((ulong)puVar19 & 1) != 0) goto LAB_108889274;
      }
      func_0x000107c28834(puVar22);
      FUN_108885f54(puVar22);
      func_0x000107c2a1ac(puVar2);
      func_0x000107c2a1ac(puVar3);
    }
    func_0x000108885a88(puVar17[0x26] + 0x180);
    func_0x000107c29f64(auStack_320);
    FUN_10888945c(*puVar1,auStack_320);
    FUN_108889488(auStack_320);
    uVar21 = *puVar1;
    FUN_1088894bc();
    if ((uVar21 & 1) == 0) {
      uStack_354 = 4;
      func_0x000108889530(auStack_350,&uStack_354);
      func_0x00010888956c(auStack_348);
      func_0x0001088894e4(puVar15,auStack_350);
      func_0x0001088895a0(auStack_350);
    }
    else {
      lVar31 = puVar17[0x26];
      uVar21 = *puVar1;
      FUN_1088895d4();
      uVar21 = uVar21 + 0x18;
      FUN_1086a6a98(uVar21,lVar31 + 0x10);
      if ((uVar21 & 1) == 0) {
        uStack_38c = 4;
        func_0x000108889530(auStack_388,&uStack_38c);
        func_0x00010888956c(auStack_380);
        func_0x0001088894e4(puVar15,auStack_388);
        func_0x0001088895a0(auStack_388);
      }
      else {
        FUN_10865ec40(puVar4);
        puVar22 = puVar4;
        func_0x0001088895f8();
        func_0x000108889624();
        *puVar5 = (ulong)puVar22;
        uVar32 = *puVar5;
        uVar21 = *puVar1;
        FUN_1088895d4();
        func_0x00010888965c(uVar32,*(undefined8 *)(uVar21 + 0x158));
        func_0x000107c29ee4(auStack_3f8,*puVar27);
        func_0x00010865ec64(*puVar5);
        func_0x000107c287d0();
        func_0x0001088bf334(auStack_3f8);
        func_0x00010888956c(puVar6);
        *puVar7 = puVar17[0x18];
        uVar23 = *puVar7;
        FUN_108889688();
        *puVar8 = uVar23;
        uVar23 = *puVar7;
        func_0x0001088896cc();
        puVar17[0x21] = uVar23;
        while (puVar22 = puVar8, func_0x000108889710(puVar8,puVar17 + 0x21),
              (((uint)puVar22 ^ 1) & 1) != 0) {
          puVar22 = puVar8;
          FUN_108889758();
          *plVar26 = (long)puVar22;
          uVar21 = *plVar26 + 0x50;
          FUN_108889770();
          func_0x000108889794();
          func_0x0001088897b8();
          func_0x0001088897dc();
          func_0x000108889800();
          if ((uVar21 & 1) == 0) {
            FUN_10865ece4(auStack_498);
            puVar24 = auStack_498;
            FUN_108889928(puVar24);
            puVar22 = (undefined8 *)(*plVar26 + 0x20);
            func_0x00010888996c();
            func_0x000108889940(puVar24,*puVar22);
            lVar31 = *plVar26;
            puVar24 = auStack_498;
            FUN_108889928(puVar24);
            FUN_10865ed14();
            puVar25 = auStack_498;
            FUN_108889928(puVar25);
            FUN_10888a080();
            FUN_108889990(auStack_4d8,puVar17[0x26],lVar31,puVar24,puVar25,puVar17[0x19]);
            uVar21 = 0;
            func_0x00010888a0ac();
            if ((uVar21 & 1) != 0) {
              lVar31 = *plVar26 + 0x18;
              puVar24 = auStack_4d8;
              func_0x00010888a164(puVar24);
              puVar22 = puVar6;
              func_0x00010888a0d4(puVar6,lVar31,puVar24);
              puStack_4e8 = puVar22;
              lStack_4e0 = lVar31;
            }
            uVar21 = 0;
            func_0x00010888a0ac();
            if ((uVar21 & 1) == 0) {
LAB_108888c30:
              uVar21 = *puVar5;
              func_0x00010888a1ac(uVar21);
              puVar24 = auStack_498;
              FUN_10888a204(puVar24);
              func_0x00010888a1d8(uVar21,puVar24);
            }
            else {
              puVar24 = auStack_4d8;
              func_0x00010888a188();
              if ((puVar24[0x30] & 1) != 0) goto LAB_108888c30;
            }
            FUN_10888a228(auStack_4d8);
            func_0x00010888a25c(auStack_498);
            iVar30 = 0;
          }
          else {
            lVar31 = *plVar26 + 0x18;
            FUN_1088898c0(auStack_478);
            uStack_47d = 1;
            uStack_47c = 0;
            func_0x000108889530(auStack_450,&uStack_47c);
            uStack_448 = 0;
            uStack_47d = 0;
            puVar22 = puVar6;
            func_0x000108889830(puVar6,lVar31,auStack_478);
            puStack_490 = puVar22;
            lStack_488 = lVar31;
            func_0x0001088898f4(auStack_478);
            iVar30 = 5;
          }
          if ((iVar30 != 0) && (iVar30 != 5)) goto LAB_1088892dc;
          FUN_10888a290(0,puVar8);
        }
        uVar21 = *puVar5;
        FUN_10888a2b0();
        func_0x00010888a2d4();
        if ((uVar21 & 1) == 0) {
          FUN_1086e5330(plVar9,puVar17[0x26] + 0x1b0);
          plVar26 = plVar9;
          FUN_10888a36c();
          if (((ulong)plVar26 & 1) == 0) {
            uVar23 = 0x10;
            ___cxa_allocate_exception(0x10);
            FUN_10888a39c(uVar23,&UNK_10f4ea037);
            ___cxa_throw(uVar23,&PTR_DAT_110a60aa8,FUN_10865a9d4);
LAB_1088892dc:
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1088892e0);
            (*pcVar16)();
          }
          FUN_1086708f8(puVar10);
          plVar26 = plVar9;
          FUN_10888a3d8();
          plStack_570 = alStack_88;
          func_0x000107c2a1c0(alStack_88,*puVar27);
          puVar17[0x15] = alStack_88;
          puVar17[0x16] = 1;
          FUN_10888a3f0(auStack_558,puVar17[0x15],puVar17[0x16]);
          FUN_10888a424(auStack_580,puVar10);
          func_0x00010888a460(auStack_5b8);
          (**(code **)(*plVar26 + 0x88))(plVar26,puVar4,auStack_558,auStack_580,auStack_5b8);
          func_0x00010888a494(auStack_5b8);
          func_0x00010888a4c8(auStack_580);
          func_0x00010888a4fc(auStack_558);
          plVar26 = alStack_70;
          do {
            plVar26 = plVar26 + -3;
            func_0x000108888464(plVar26);
          } while (plVar26 != alStack_88);
          lVar31 = puVar17[0x26];
          puVar27 = puVar10;
          FUN_10888a530(puVar10);
          FUN_10888a548(puVar13,puVar27 + 1);
          FUN_108851798(puVar12,lVar31 + 0x88,puVar13);
          func_0x00010888a574(puVar11,puVar12);
          puVar27 = puVar11;
          func_0x000107c2a1a4();
          if (((ulong)puVar27 & 1) == 0) {
            *(undefined1 *)(puVar17 + 0x28) = 2;
            puVar27 = puVar17;
            FUN_1088893e4();
            ppuVar20 = &puStack_98;
            puStack_98 = puVar27;
            func_0x000108889414(ppuVar20);
            puVar27 = puVar11;
            func_0x000107c28830(puVar11,ppuVar20);
            if (((ulong)puVar27 & 1) != 0) goto LAB_108889274;
          }
          puVar27 = puVar11;
          func_0x000107c28a1c();
          *(undefined4 *)puVar28 = *(undefined4 *)puVar27;
          *(undefined4 *)((long)puVar17 + 0x13c) = *(undefined4 *)((long)puVar27 + 4);
          FUN_10888a5a0(puVar11);
          func_0x00010888a5d4(puVar12);
          func_0x00010888a5d4(puVar13);
          auStack_5e4[0] = 3;
          puVar27 = puVar28;
          FUN_10888a608(puVar28,auStack_5e4);
          if (((ulong)puVar27 & 1) == 0) {
            FUN_10888a660();
            if (((ulong)puVar28 & 1) == 0) {
              FUN_10888a2fc(&uStack_624);
            }
            else {
              uStack_628 = 9;
              puVar29 = &uStack_628;
              FUN_10888a67c();
              uStack_624 = SUB84(puVar29,0);
              uStack_620 = (undefined1)((ulong)puVar29 >> 0x20);
            }
            uStack_660 = uStack_624;
            uStack_65c = uStack_620;
            func_0x00010888a6a8(auStack_658,puVar6);
            func_0x0001088894e4(puVar15,&uStack_660);
            func_0x0001088895a0(&uStack_660);
          }
          else {
            uStack_61c = 5;
            func_0x000108889530(auStack_618,&uStack_61c);
            func_0x00010888956c(auStack_610);
            func_0x0001088894e4(puVar15,auStack_618);
            func_0x0001088895a0(auStack_618);
          }
          func_0x00010888a6e4(puVar10);
          func_0x00010888a718(plVar9);
        }
        else {
          plVar26 = (long *)(puVar17[0x26] + 0x1a0);
          FUN_108885c24();
          (**(code **)(*plVar26 + 0x48))();
          FUN_10888a2fc(auStack_518);
          func_0x00010888a330(auStack_510,puVar6);
          func_0x0001088894e4(puVar15,auStack_518);
          func_0x0001088895a0(auStack_518);
        }
        func_0x00010888a74c(puVar6);
        FUN_1088f0578(puVar4);
      }
    }
    FUN_108885f88(puVar15);
    uVar21 = uVar14;
    func_0x000107c2a18c();
    if ((uVar21 & 1) == 0) {
      *puVar17 = 0;
      *(undefined1 *)(puVar17 + 0x28) = 3;
      FUN_1088893e4();
      ppuVar20 = &puStack_90;
      puStack_90 = puVar17;
      func_0x000108889414(ppuVar20);
      FUN_108885f40(uVar14,ppuVar20);
    }
    else {
      func_0x000107c2a19c(uVar14);
      func_0x00010888a780(puVar15);
      __ZdlPv(puVar17);
    }
  }
LAB_108889274:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - alStack_70[0] != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - alStack_70[0]);
  }
  return;
}



/* Entry: 10888935c; end: 10888938f;  */

undefined8 FUN_10888935c(undefined8 param_1)

{
  FUN_108897b14(param_1);
  return param_1;
}



/* Entry: 108889390; end: 1088893e3;  */

void FUN_108889390(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c2a1dc(auStack_38,param_2);
  FUN_10889aed8(param_1,auStack_38);
  func_0x000107c27f9c(auStack_38);
  return;
}



/* Entry: 1088893e4; end: 108889443;  */

undefined8 FUN_1088893e4(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  func_0x00010888eb20(auStack_18);
  return param_1;
}



/* Entry: 108889444; end: 10888945b;  */

undefined8 FUN_108889444(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888945c; end: 108889487;  */

void FUN_10888945c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c290ac(param_1,param_2);
  return;
}



/* Entry: 108889488; end: 1088894bb;  */

undefined8 FUN_108889488(undefined8 param_1)

{
  FUN_10888f10c(param_1);
  return param_1;
}



/* Entry: 1088894bc; end: 1088894e3;  */

uint FUN_1088894bc(undefined8 param_1)

{
  func_0x00010888eb84(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 1088894e4; end: 1088895d3;  */

void FUN_1088894e4(long param_1)

{
  FUN_10888e360(param_1 + 8);
  FUN_108898524();
  func_0x000107c27fa0(param_1 + 8,0);
  return;
}



/* Entry: 1088895d4; end: 108889687;  */

void FUN_1088895d4(undefined8 param_1)

{
  FUN_10888f40c(param_1);
  return;
}



/* Entry: 108889688; end: 108889757;  */

undefined8 * FUN_108889688(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_10888e520(uVar1);
  FUN_10888f5b4(param_1,uVar1);
  return param_1;
}



/* Entry: 108889758; end: 10888976f;  */

undefined8 FUN_108889758(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 108889770; end: 1088898bf;  */

void FUN_108889770(undefined8 param_1)

{
  FUN_10888f658(param_1);
  return;
}



/* Entry: 1088898c0; end: 108889927;  */

undefined8 FUN_1088898c0(undefined8 param_1)

{
  FUN_10889880c(param_1);
  return param_1;
}



/* Entry: 108889928; end: 10888993f;  */

undefined8 FUN_108889928(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 108889940; end: 10888998f;  */

void FUN_108889940(undefined8 param_1,undefined8 param_2)

{
  FUN_10888f7ec(param_1,param_2);
  return;
}



/* Entry: 108889990; end: 10888a07f;  */

void FUN_108889990(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined1 uStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [12];
  undefined4 uStack_28c;
  undefined1 *puStack_288;
  long **pplStack_280;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined1 uStack_26c;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [32];
  undefined1 *puStack_1d8;
  long **pplStack_1d0;
  undefined8 **ppuStack_1c8;
  undefined4 uStack_1bc;
  undefined8 **ppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 **ppuStack_1a0;
  long **pplStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  undefined1 auStack_168 [12];
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  long *plStack_138;
  long *plStack_130;
  long lStack_128;
  long alStack_120 [3];
  long lStack_108;
  undefined1 auStack_100 [40];
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined4 uStack_a4;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_3 + 0x50;
  uStack_80 = param_6;
  uStack_78 = param_5;
  uStack_70 = param_4;
  lStack_68 = param_3;
  uStack_60 = param_2;
  uStack_58 = param_1;
  FUN_108889770();
  func_0x000108889794();
  func_0x0001088897b8();
  func_0x0001088897dc();
  lVar3 = lStack_68 + 0x50;
  lStack_88 = lVar2;
  FUN_108889770();
  func_0x000108889794();
  func_0x0001088897b8();
  func_0x00010888ae58();
  lVar2 = lStack_68;
  uVar5 = uStack_70;
  lStack_a0 = param_2 + 0x28;
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  lStack_b0 = param_2 + 0x68;
  uStack_a4 = uVar1;
  lStack_98 = param_2 + 0x10;
  lStack_90 = lVar3;
  FUN_10888aaf4(&uStack_c8,lStack_b0);
  FUN_1086680b4(lVar2,uVar5,param_2 + 0x10,uVar1,uStack_c8,uStack_c0);
  lStack_b8 = lVar2;
  FUN_10888ae7c(auStack_100);
  lVar2 = lStack_68 + 0x50;
  FUN_108886b3c();
  func_0x000108886b60();
  lStack_108 = lVar2;
  func_0x000108886b84();
  lVar3 = lStack_108;
  alStack_120[0] = lVar2;
  FUN_108886bc4();
  lStack_128 = lVar3;
  while( true ) {
    plVar4 = alStack_120;
    FUN_108886c24(plVar4,&lStack_128);
    if (((ulong)plVar4 & 1) == 0) break;
    plVar4 = alStack_120;
    func_0x000108886c54();
    plStack_130 = plVar4;
    FUN_108886d3c();
    uVar5 = uStack_80;
    plStack_138 = plVar4;
    FUN_10888aeb0(uStack_80,plVar4);
    puVar7 = &uStack_148;
    uVar6 = uStack_80;
    uStack_148 = uVar5;
    puStack_140 = puVar7;
    func_0x00010888af20();
    uStack_150 = uVar6;
    func_0x00010888aef0(puVar7,&uStack_150);
    if (((ulong)puVar7 & 1) == 0) {
      FUN_10888af58(auStack_168);
      FUN_10888afbc(auStack_168);
      FUN_1086eae08();
      FUN_10888afd4();
      puVar8 = auStack_168;
      FUN_10888afbc();
      func_0x00010888b000();
      puVar7 = puStack_140;
      puStack_170 = puVar8;
      func_0x00010888b02c();
      puStack_178 = puVar7 + 4;
      plVar4 = plStack_130;
      FUN_108886c70();
      plStack_180 = plVar4;
      func_0x000108886d60();
      plVar9 = plStack_180;
      plStack_188 = plVar4;
      FUN_108886da0();
      plStack_190 = plVar9;
      while( true ) {
        pplVar10 = &plStack_188;
        func_0x000107c2a1c4(pplVar10,&plStack_190);
        if (((ulong)pplVar10 & 1) == 0) break;
        pplVar10 = &plStack_188;
        func_0x000107c2a1c8();
        puVar7 = puStack_178;
        pplStack_198 = pplVar10;
        func_0x00010888b054(puStack_178,pplVar10);
        ppuVar12 = &puStack_1a8;
        puVar11 = puStack_178;
        puStack_1a8 = puVar7;
        ppuStack_1a0 = ppuVar12;
        func_0x00010888b0c4();
        puStack_1b0 = puVar11;
        func_0x00010888b094(ppuVar12,&puStack_1b0);
        if (((ulong)ppuVar12 & 1) == 0) {
          ppuVar12 = ppuStack_1a0;
          func_0x00010888b120();
          ppuStack_1b8 = ppuVar12 + 3;
          ppuVar12 = ppuStack_1a0;
          func_0x00010888b120();
          uStack_1bc = *(undefined4 *)(ppuVar12 + 9);
          ppuVar12 = ppuStack_1a0;
          func_0x00010888b120();
          ppuVar12 = ppuVar12 + 6;
          ppuStack_1c8 = ppuVar12;
          FUN_10888b148();
          if (((ulong)ppuVar12 & 1) == 0) {
            func_0x00010888ab30(&uStack_208,lStack_88);
            func_0x00010888ab30(&uStack_218,lStack_90);
            FUN_10888b170(&uStack_228,lStack_98);
            FUN_10888aaf4(&uStack_238,lStack_a0);
            uVar1 = uStack_a4;
            func_0x00010865ed24(auStack_248,plStack_138);
            FUN_10888aaf4(auStack_258,ppuStack_1b8);
            FUN_10888aaf4(auStack_268,ppuStack_1c8);
            FUN_108667d54(auStack_1f8,uStack_208,uStack_200,uStack_218,uStack_210,uStack_228,
                          uStack_220,uStack_238,uStack_230,uVar1);
            uVar14 = 0;
            FUN_10888b1ac();
            if ((uVar14 & 1) == 0) {
              uStack_274 = 1;
              func_0x000108889530(&uStack_270,&uStack_274);
              uStack_d4 = uStack_26c;
              uStack_d8 = uStack_270;
              puVar8 = auStack_100;
              pplVar10 = pplStack_198;
              func_0x000107c28274();
              uStack_28c = 7;
              puStack_288 = puVar8;
              pplStack_280 = pplVar10;
            }
            else {
              FUN_10888b1c8(auStack_298);
              puVar8 = auStack_298;
              FUN_10888b22c(puVar8);
              puVar13 = auStack_1f8;
              FUN_10888b244(puVar13);
              FUN_10888aaf4(&uStack_2a8,puVar13);
              FUN_10888aaf4(&uStack_2b8,ppuStack_1b8);
              func_0x000108667e14(puVar8,uStack_2a8,uStack_2a0,uStack_2b8,uStack_2b0,uStack_1bc);
              puVar8 = auStack_298;
              FUN_10888b22c(puVar8);
              uVar14 = param_2;
              func_0x00010888a7b4(param_2,puVar8,lStack_68);
              lVar2 = lStack_b8;
              if ((uVar14 & 1) == 0) {
                puVar8 = auStack_298;
                FUN_10888b294(puVar8);
                func_0x00010888b268(lVar2,puVar8);
                func_0x00010888b0fc(puStack_170);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
                uStack_28c = 0;
              }
              else {
                plVar4 = (long *)(param_2 + 0x1a0);
                FUN_108885c24();
                (**(code **)(*plVar4 + 0x48))();
                uStack_2c4 = 10;
                func_0x000108889530(&uStack_2c0,&uStack_2c4);
                uStack_d4 = uStack_2bc;
                uStack_d8 = uStack_2c0;
                func_0x000107c28274();
                uStack_28c = 7;
              }
              func_0x00010888b2b8(auStack_298);
            }
            func_0x00010888b2ec(auStack_1f8);
          }
          else {
            puVar8 = auStack_100;
            pplVar10 = pplStack_198;
            func_0x000107c28274();
            puStack_1d8 = puVar8;
            pplStack_1d0 = pplVar10;
          }
        }
        else {
          func_0x00010888b0fc(puStack_170);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
        }
        func_0x000107c2a1cc(&plStack_188);
      }
      puVar8 = puStack_170;
      FUN_10888b320();
      uVar5 = uStack_78;
      if (((ulong)puVar8 & 1) == 0) {
        puVar8 = auStack_168;
        FUN_10888b374(puVar8);
        func_0x00010888b348(uVar5,puVar8);
        uStack_d0 = 1;
      }
      FUN_10888b398(auStack_168);
    }
    else {
      uStack_15c = 2;
      func_0x000108889530(&uStack_158,&uStack_15c);
      uStack_d8 = uStack_158;
      uStack_d4 = uStack_154;
    }
    FUN_108886e00(alStack_120);
  }
  uVar14 = 0;
  FUN_10888b3cc();
  if ((uVar14 & 1) == 0) {
    FUN_10888b41c(param_1);
  }
  else {
    func_0x00010888b3f4(param_1,auStack_100);
  }
  uStack_28c = 1;
  func_0x0001088898f4(auStack_100);
  return;
}



/* Entry: 10888a080; end: 10888a203;  */

void FUN_10888a080(void)

{
  func_0x00010888f828();
  return;
}



/* Entry: 10888a204; end: 10888a227;  */

undefined8 FUN_10888a204(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



/* Entry: 10888a228; end: 10888a28f;  */

undefined8 FUN_10888a228(undefined8 param_1)

{
  FUN_10888f8a0(param_1);
  return param_1;
}



/* Entry: 10888a290; end: 10888a2af;  */

void FUN_10888a290(long *param_1)

{
  *param_1 = *param_1 + 0x1a8;
  return;
}



/* Entry: 10888a2b0; end: 10888a2fb;  */

void FUN_10888a2b0(undefined8 param_1)

{
  FUN_10888fa0c(param_1);
  return;
}



/* Entry: 10888a2fc; end: 10888a36b;  */

undefined8 FUN_10888a2fc(undefined8 param_1)

{
  FUN_10888fa30(param_1);
  return param_1;
}



/* Entry: 10888a36c; end: 10888a39b;  */

bool FUN_10888a36c(long param_1)

{
  func_0x00010889a8f4(param_1);
  return param_1 != 0;
}



/* Entry: 10888a39c; end: 10888a3d7;  */

undefined8 FUN_10888a39c(undefined8 param_1,undefined8 param_2)

{
  func_0x000108774f90(param_1,param_2);
  return param_1;
}



/* Entry: 10888a3d8; end: 10888a3ef;  */

undefined8 FUN_10888a3d8(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888a3f0; end: 10888a423;  */

void FUN_10888a3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010868c9c4(param_1,param_2,param_3);
  return;
}



/* Entry: 10888a424; end: 10888a52f;  */

undefined8 FUN_10888a424(undefined8 param_1,undefined8 param_2)

{
  FUN_10889ac10(param_1,param_2);
  return param_1;
}



/* Entry: 10888a530; end: 10888a547;  */

undefined8 FUN_10888a530(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888a548; end: 10888a59f;  */

void FUN_10888a548(undefined8 param_1,undefined8 param_2)

{
  FUN_10889ac64(param_1,param_2);
  return;
}



/* Entry: 10888a5a0; end: 10888a607;  */

undefined8 FUN_10888a5a0(undefined8 param_1)

{
  func_0x00010888feec(param_1);
  return param_1;
}



/* Entry: 10888a608; end: 10888a65f;  */

bool FUN_10888a608(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = param_1;
  FUN_10888ff54();
  if (((ulong)piVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010888ff7c();
    bVar1 = *param_1 == *param_2;
  }
  return bVar1;
}



/* Entry: 10888a660; end: 10888a67b;  */

byte FUN_10888a660(long param_1)

{
  return *(byte *)(param_1 + 4) & 1;
}



/* Entry: 10888a67c; end: 10888a6a7;  */

undefined8 FUN_10888a67c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  func_0x000108889530(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10888a6a8; end: 10888a9eb;  */

undefined8 FUN_10888a6a8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889acdc(param_1,param_2);
  return param_1;
}



/* Entry: 10888a9ec; end: 10888aaf3;  */

void FUN_10888a9ec(undefined8 param_1)

{
  FUN_10888ffe8(param_1);
  return;
}



/* Entry: 10888aaf4; end: 10888ab6b;  */

undefined8 FUN_10888aaf4(undefined8 param_1,undefined8 param_2)

{
  func_0x000108894c0c(param_1,param_2);
  return param_1;
}



/* Entry: 10888ab6c; end: 10888abf3;  */

void FUN_10888ab6c(undefined8 param_1)

{
  func_0x000108890168(param_1);
  return;
}



/* Entry: 10888abf4; end: 10888ac53;  */

undefined8 FUN_10888abf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  lStack_30 = param_1;
  func_0x000108896474(param_1);
  FUN_10889b00c(param_1);
  func_0x00010889af50(auStack_38,lVar1 + (long)(int)param_1 * 8);
  func_0x00010889af8c(&uStack_28,auStack_38);
  return uStack_28;
}



/* Entry: 10888ac54; end: 10888ac9f;  */

bool FUN_10888ac54(long *param_1,long *param_2)

{
  return *param_1 != *param_2;
}



/* Entry: 10888aca0; end: 10888ad2f;  */

void FUN_10888aca0(undefined8 param_1)

{
  func_0x0001088901ac(param_1);
  return;
}



/* Entry: 10888ad30; end: 10888ad7f;  */

void FUN_10888ad30(long *param_1)

{
  *param_1 = *param_1 + 8;
  return;
}



/* Entry: 10888ad80; end: 10888ae7b;  */

undefined8 FUN_10888ad80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_2;
  uStack_20 = param_1;
  FUN_108890338();
  uVar2 = uStack_28;
  FUN_108890338();
  FUN_1088902b0(uVar1,uVar2,uStack_30,&uStack_31);
  FUN_10889026c(param_1,uVar1);
  return param_1;
}



/* Entry: 10888ae7c; end: 10888aeaf;  */

undefined8 FUN_10888ae7c(undefined8 param_1)

{
  FUN_108890464(param_1);
  return param_1;
}



/* Entry: 10888aeb0; end: 10888af57;  */

undefined8 FUN_10888aeb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  FUN_10889b1b0(param_1,param_2);
  func_0x00010889b308(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10888af58; end: 10888afbb;  */

void FUN_10888af58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm(0x38);
  FUN_10889b560(uVar1);
  func_0x00010889b598(param_1,uVar1);
  return;
}



/* Entry: 10888afbc; end: 10888afd3;  */

undefined8 FUN_10888afbc(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888afd4; end: 10888b147;  */

void FUN_10888afd4(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088bf408(param_1,param_2);
  return;
}



/* Entry: 10888b148; end: 10888b16f;  */

bool FUN_10888b148(long *param_1)

{
  return *param_1 == param_1[1];
}



/* Entry: 10888b170; end: 10888b1ab;  */

undefined8 FUN_10888b170(undefined8 param_1,undefined8 param_2)

{
  FUN_10888aaf4(param_1,param_2);
  return param_1;
}



/* Entry: 10888b1ac; end: 10888b1c7;  */

byte FUN_10888b1ac(long param_1)

{
  return *(byte *)(param_1 + 0x18) & 1;
}



/* Entry: 10888b1c8; end: 10888b22b;  */

void FUN_10888b1c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x28;
  __Znwm(0x28);
  FUN_10889b788(uVar1);
  func_0x00010889b7c0(param_1,uVar1);
  return;
}



/* Entry: 10888b22c; end: 10888b243;  */

undefined8 FUN_10888b22c(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888b244; end: 10888b293;  */

void FUN_10888b244(undefined8 param_1)

{
  func_0x000108890530(param_1);
  return;
}



/* Entry: 10888b294; end: 10888b2b7;  */

undefined8 FUN_10888b294(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



/* Entry: 10888b2b8; end: 10888b31f;  */

undefined8 FUN_10888b2b8(undefined8 param_1)

{
  FUN_10889b81c(param_1);
  return param_1;
}



/* Entry: 10888b320; end: 10888b373;  */

uint FUN_10888b320(undefined8 param_1)

{
  FUN_108899ef0(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 10888b374; end: 10888b397;  */

undefined8 FUN_10888b374(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



/* Entry: 10888b398; end: 10888b3cb;  */

undefined8 FUN_10888b398(undefined8 param_1)

{
  FUN_10889b5f4(param_1);
  return param_1;
}



/* Entry: 10888b3cc; end: 10888b41b;  */

uint FUN_10888b3cc(undefined8 param_1)

{
  FUN_10888d028(param_1);
  return (uint)param_1 & 1;
}



/* Entry: 10888b41c; end: 10888b483;  */

undefined8 FUN_10888b41c(undefined8 param_1)

{
  func_0x0001088908f0(param_1);
  return param_1;
}



/* Entry: 10888b484; end: 10888b59b;  */

undefined8 FUN_10888b484(undefined8 param_1)

{
  undefined8 uStack_18;
  
  func_0x00010889be34();
  FUN_10889be64(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10888b59c; end: 10888b63f;  */

undefined8 FUN_10888b59c(undefined8 param_1,undefined8 param_2)

{
  FUN_10865a17c(param_1,param_2);
  return param_1;
}



/* Entry: 10888b640; end: 10888b6c7;  */

void FUN_10888b640(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_2;
  uStack_40 = param_1;
  func_0x00010889c4d8();
  uStack_20._0_1_ = (undefined1)param_2;
  uStack_50 = (undefined1)uStack_20;
  uStack_58 = param_1;
  uStack_28 = param_1;
  uStack_20 = param_2;
  FUN_10889c554(&uStack_38,&uStack_58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_18 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_18,uStack_38,uStack_30);
  }
  return;
}



/* Entry: 10888b6c8; end: 10888b9c3;  */

/* WARNING: Removing unreachable block (ram,0x00010888b994) */

void FUN_10888b6c8(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [80];
  undefined1 auStack_110 [24];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_9d;
  undefined1 uStack_99;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_59;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uStack_59 = 0;
  lStack_58 = param_3;
  lStack_50 = param_2;
  uStack_48 = param_1;
  FUN_10888c874(param_1);
  uVar1 = lStack_58 + 8;
  FUN_10888c8a8();
  if ((uVar1 & 1) != 0) {
    lVar2 = lStack_58 + 8;
    func_0x00010888c8f0(lVar2);
    FUN_10888c914();
    func_0x00010888c8c4(param_1,lVar2);
    lVar2 = lStack_58 + 8;
    FUN_10888c93c();
    lStack_78 = lVar2;
    FUN_10888c960();
    lVar3 = lStack_78;
    lStack_80 = lVar2;
    func_0x00010888c9a4();
    lStack_88 = lVar3;
    while( true ) {
      plVar4 = &lStack_80;
      func_0x00010888c9e8(plVar4,&lStack_88);
      if ((((uint)plVar4 ^ 1) & 1) == 0) break;
      plVar4 = &lStack_80;
      FUN_10888ca30();
      plStack_98 = plVar4;
      plStack_90 = plVar4;
      FUN_10888aaf4(&uStack_b0,plVar4);
      uVar5 = uStack_b0;
      FUN_108657e30(uStack_b0,uStack_a8);
      uStack_9d = (undefined4)uVar5;
      uStack_99 = (undefined1)((ulong)uVar5 >> 0x20);
      lVar2 = param_2 + 0xf8;
      FUN_1086629a8(lVar2,plStack_98);
      lStack_b8 = lVar2;
      if (lVar2 == 0) {
        FUN_10888aaf4(&uStack_e8,plStack_98);
        FUN_10888aaf4(&uStack_f8,param_2 + 0x40);
        FUN_108657bec(auStack_d8,uStack_e8,uStack_e0,uStack_f8,uStack_f0);
        uVar1 = 0;
        FUN_10888ca48();
        plVar4 = plStack_98;
        if ((uVar1 & 1) != 0) {
          lVar2 = param_2 + 0xf8;
          puVar6 = auStack_d8;
          FUN_10888b244(puVar6);
          FUN_1086629e0(lVar2,plVar4,puVar6);
          lStack_b8 = lVar2;
        }
        func_0x00010888b2ec(auStack_d8);
      }
      if (lStack_b8 == 0) {
        func_0x000107c2a1d0(auStack_110);
      }
      else {
        func_0x000107c2a1d4(auStack_110,lStack_b8);
      }
      func_0x000107c27cfc(plStack_90 + 3,auStack_110);
      FUN_10888ca70(auStack_110);
      puVar7 = &uStack_9d;
      func_0x00010888cb2c(puVar7);
      puVar8 = &uStack_9d;
      func_0x00010888cb50(puVar8);
      FUN_10888cb78(auStack_178,puVar7,puVar8);
      func_0x00010888cbbc(auStack_160,auStack_178,plStack_90);
      func_0x00010888caa4();
      func_0x00010888cc00(auStack_160);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(auStack_178);
      FUN_10888cc34(&lStack_80);
    }
  }
  return;
}



/* Entry: 10888b9c4; end: 10888baa3;  */

undefined8 FUN_10888b9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108890c48(param_1,param_2,param_3);
  return param_1;
}



/* Entry: 10888baa4; end: 10888bb43;  */

void FUN_10888baa4(undefined8 param_1,undefined8 param_2)

{
  FUN_10889d754(param_1,param_2);
  return;
}



/* Entry: 10888bb44; end: 10888bbeb;  */

void FUN_10888bb44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2;
  uStack_48 = param_2;
  uStack_40 = param_1;
  FUN_1088969b8();
  uStack_60 = uVar1;
  FUN_1088969e4();
  FUN_10889d898(param_1,param_2,&uStack_60,&uStack_61);
  uStack_30._0_1_ = (undefined1)param_2;
  uStack_50 = (undefined1)uStack_30;
  puVar2 = &uStack_58;
  uStack_58 = param_1;
  uStack_38 = param_1;
  uStack_30 = param_2;
  FUN_10889dc10(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28,puVar2 + 4);
  }
  return;
}



/* Entry: 10888bbec; end: 10888bc3b;  */

void FUN_10888bbec(undefined8 param_1,undefined8 param_2)

{
  FUN_1086f7b9c(param_1,param_2);
  return;
}



/* Entry: 10888bc3c; end: 10888bc63;  */

bool FUN_10888bc3c(long *param_1)

{
  return *param_1 == param_1[1];
}



/* Entry: 10888bc64; end: 10888bc97;  */

undefined8 FUN_10888bc64(undefined8 param_1)

{
  FUN_10889def4(param_1);
  return param_1;
}



/* Entry: 10888bc98; end: 10888c0b7;  */

void FUN_10888bc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_f8 [27];
  byte bStack_dd;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *apuStack_70 [2];
  
  puVar7 = (undefined8 *)0x50;
  uStack_a0 = param_3;
  uStack_98 = param_2;
  uStack_90 = param_1;
  __Znwm();
  *puVar7 = FUN_1088a2adc;
  puVar7[1] = FUN_1088a2e54;
  puVar1 = puVar7 + 4;
  uVar14 = (long)puVar7 + 0x49;
  plVar2 = puVar7 + 5;
  puVar13 = puVar7 + 6;
  puVar3 = puVar7 + 7;
  uVar4 = (long)puVar7 + 0x4b;
  puVar5 = puVar7 + 2;
  puVar7[8] = param_2;
  FUN_10889e088(puVar1,param_3);
  func_0x00010889e0c4(puVar5);
  FUN_108658b58(param_1,puVar5);
  func_0x000107c2a188(puVar5);
  uVar8 = uVar14;
  func_0x000107c2a18c();
  if ((uVar8 & 1) == 0) {
    *(undefined1 *)(puVar7 + 9) = 0;
    FUN_10889e0f8();
    ppuVar11 = &puStack_88;
    puStack_88 = puVar7;
    func_0x00010889e128(ppuVar11);
    FUN_108885f40(uVar14,ppuVar11);
  }
  else {
    func_0x000107c2a19c(uVar14);
    FUN_10889e158(puVar13,puVar7[8] + 0x38,puVar1);
    FUN_108894808(plVar2,puVar13);
    plVar9 = plVar2;
    func_0x000107c2a1a4();
    if (((ulong)plVar9 & 1) == 0) {
      *(undefined1 *)(puVar7 + 9) = 1;
      puVar10 = puVar7;
      FUN_10889e0f8();
      ppuVar11 = &puStack_80;
      puStack_80 = puVar10;
      func_0x00010889e128(ppuVar11);
      plVar9 = plVar2;
      func_0x000107c28830(plVar2,ppuVar11);
      if (((ulong)plVar9 & 1) != 0) {
        return;
      }
    }
    plVar9 = plVar2;
    func_0x000107c28870();
    bStack_dd = *plVar9 == 0;
    FUN_108894834(plVar2);
    func_0x000108894868(puVar13);
    *(byte *)((long)puVar7 + 0x4a) = bStack_dd & 1;
    if ((*(byte *)((long)puVar7 + 0x4a) & 1) != 0) {
      lVar15 = puVar7[8];
      uVar12 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_f8,&UNK_10f4afc25,lVar15 + 0x20);
      func_0x00010889489c(uVar12,auStack_f8);
      ___cxa_throw(uVar12,&PTR_DAT_110a60aa8,FUN_10865a9d4);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10888c0b8);
      (*pcVar6)();
    }
    FUN_10888c1cc(puVar3,puVar1);
    puVar13 = puVar3;
    func_0x000107c2a1a4();
    if (((ulong)puVar13 & 1) == 0) {
      *(undefined1 *)(puVar7 + 9) = 2;
      puVar13 = puVar7;
      FUN_10889e0f8();
      ppuVar11 = &puStack_78;
      puStack_78 = puVar13;
      func_0x00010889e128(ppuVar11);
      puVar13 = puVar3;
      func_0x000107c28830(puVar3,ppuVar11);
      if (((ulong)puVar13 & 1) != 0) {
        return;
      }
    }
    puVar13 = puVar3;
    FUN_10865ae40(puVar3);
    FUN_10865ae78(puVar5,puVar13);
    func_0x00010888c264(puVar3);
    FUN_108885f88(puVar5);
    uVar14 = uVar4;
    func_0x000107c2a18c();
    if ((uVar14 & 1) == 0) {
      *puVar7 = 0;
      *(undefined1 *)(puVar7 + 9) = 3;
      FUN_10889e0f8();
      ppuVar11 = apuStack_70;
      apuStack_70[0] = puVar7;
      func_0x00010889e128(ppuVar11);
      FUN_108885f40(uVar4,ppuVar11);
    }
    else {
      func_0x000107c2a19c(uVar4);
      FUN_10889e24c(puVar5);
      func_0x00010888c298(puVar1);
      __ZdlPv(puVar7);
    }
  }
  return;
}



/* Entry: 10888c0b8; end: 10888c0cf;  */

undefined8 FUN_10888c0b8(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10888c0d0; end: 10888c1cb;  */

/* WARNING: Removing unreachable block (ram,0x00010888c1a4) */

void FUN_10888c0d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_70 [24];
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_31 = 0;
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x00010888c6d4(param_1);
  uStack_40 = uStack_30;
  uVar1 = uStack_30;
  func_0x00010888c708();
  uVar2 = uStack_40;
  uStack_48 = uVar1;
  func_0x00010888c74c();
  uStack_50 = uVar2;
  while( true ) {
    puVar3 = &uStack_48;
    func_0x00010888c790(puVar3,&uStack_50);
    if ((((uint)puVar3 ^ 1) & 1) == 0) break;
    puVar3 = &uStack_48;
    FUN_10888c7d8();
    puStack_58 = puVar3;
    func_0x000107c29ee0(auStack_70,puVar3);
    FUN_10888c7f0(param_1,auStack_70);
    func_0x000108888464(auStack_70);
    FUN_10888c854(&uStack_48);
  }
  return;
}


