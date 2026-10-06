/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102528040; end: 102528087; -[_TtC28MapEmojiPickerImplementation31MapReactionPickerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102528040(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3e50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3e58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea3e60));
  return;
}



/* Entry: 102528088; end: 1025280a7;  */

void FUN_102528088(void)

{
  func_0x000107c61168(&PTR_PTR_11284c290);
  return;
}



/* Entry: 1025280a8; end: 102528147;  */

undefined8
FUN_1025280a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  long lVar1;
  
  lVar1 = param_6;
  func_0x0001000c6518(param_6,*(undefined8 *)(param_6 + 0x18));
  func_0x00010252b6a8(param_1,param_2,param_3,param_4,param_5,lVar1);
  FUN_10252ba48(param_6);
  return param_1;
}



/* Entry: 102528148; end: 102528547;  */

undefined *
FUN_102528148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar8 = *(long *)(lVar7 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar7 + 0xfU & 0xfffffffffffffff0);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = &UNK_11051d3e0;
  func_0x000107c613fc(&UNK_11051d3e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000100029394(param_5,(long)&puStack_a0 - extraout_x8);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar5 + 0x40 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_11051d408;
  func_0x000107c613fc(&UNK_11051d408,uVar6 + lVar7,uVar5 | 7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  *(undefined8 *)(puVar3 + 0x38) = param_4;
  func_0x0001001021cc((long)&puStack_a0 - extraout_x8,puVar3 + uVar6);
  pcStack_80 = FUN_10252b780;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1004725e8;
  puStack_88 = &UNK_11051d420;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_78;
  func_0x000107c61174(param_6);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c408f0(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 102528548; end: 10252856b;  */

void FUN_102528548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_8;
  *(undefined8 *)(unaff_x22 + 0x78) = param_9;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252856c,0,0);
  return;
}



/* Entry: 10252856c; end: 10252862b;  */

void FUN_10252856c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x80) = lVar3;
  if (lVar3 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x48);
    func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x28,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x88) = lVar2;
    if (lVar2 != 0) {
      plVar1 = (long *)0xc0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x90) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_10252862c;
      lVar2 = *(long *)(unaff_x22 + 0x60);
      lVar4 = *(long *)(unaff_x22 + 0x50);
      lVar5 = *(long *)(unaff_x22 + 0x58);
      plVar1[0x14] = *(long *)(unaff_x22 + 0x68);
      plVar1[0x15] = lVar3;
      plVar1[0x13] = lVar2;
      plVar1[0x11] = lVar4;
      plVar1[0x12] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1025287a0,0,0);
      return;
    }
    func_0x000107c61170(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000102528628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10252862c; end: 10252867b;  */

void FUN_10252862c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252867c,0,0);
  return;
}



/* Entry: 10252867c; end: 10252877f;  */

void FUN_10252867c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x98);
  if (lVar5 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x80));
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar4 = uVar6;
    FUN_102528b40(uVar6);
    lVar2 = lVar5;
    func_0x000107c4e7c0(lVar5);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    func_0x000102528e2c(lVar3,param_2,uVar6,uVar4,uVar1);
    func_0x000107c6142c();
    func_0x000107c5fd5c();
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    if ((param_2 & 1) == 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c4d664(uVar7);
      func_0x000107c3fedc(uVar7);
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010252877c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102528780; end: 10252879f;  */

void FUN_102528780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025287a0,0,0);
  return;
}



/* Entry: 1025287a0; end: 1025288eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025287a0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112ea3e90);
  func_0x000107c4e7e4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1025288ec;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar3 = &UNK_11051d610;
    func_0x000107c613fc(&UNK_11051d610,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x10252bc8c;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1025214c0;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051d628;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c431f8(uVar6,uVar5,lVar2);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001025288e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1025288ec; end: 10252892b;  */

void FUN_1025288ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252892c,0,0);
  return;
}



/* Entry: 10252892c; end: 102528b3f;  */

void FUN_10252892c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x22;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x80);
  if (uVar6 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar8 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102528ae8);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar6 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
        uVar10 = param_2;
      }
      else {
        uVar3 = uVar7;
        uVar10 = uVar6;
        FUN_10252b3e8(uVar7,uVar6,&PTR_PTR_1126cd890,0x112ea3b90);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102528ae4);
        (*pcVar2)();
      }
      lVar11 = *(long *)(unaff_x22 + 0x98);
      param_2 = *(ulong *)(unaff_x22 + 0xa0);
      uVar9 = uVar3;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      uVar4 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      FUN_10252a0f4(uVar4,uVar10);
      FUN_10252a0f4();
      if ((*(long *)(uVar4 + 0x10) == 0) || (*(long *)(lVar11 + 0x10) == 0)) {
        func_0x000107c6142c(uVar10);
        func_0x000107c6142c(lVar11);
        func_0x000107c6142c(uVar4);
      }
      else {
        func_0x000107c61434(uVar4);
        lVar5 = lVar11;
        param_2 = uVar4;
        func_0x000101157854();
        func_0x000107c6142c(uVar10);
        uVar9 = *(ulong *)(uVar4 + 0x10);
        func_0x000107c6142c(uVar4);
        uVar10 = *(ulong *)(lVar11 + 0x10);
        func_0x000107c6142c(lVar11);
        lVar11 = *(long *)(lVar5 + 0x10);
        func_0x000107c61574(lVar5);
        if (lVar11 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102528aec);
          (*pcVar2)();
        }
        if (uVar9 <= uVar10) {
          uVar10 = uVar9;
        }
        if (uVar10 < (ulong)(lVar11 << 1)) {
          func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb0));
          func_0x000107c6142c(uVar6);
          goto LAB_102528b18;
        }
      }
      func_0x000107c61170(uVar3);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar8);
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c6142c(uVar6);
  uVar3 = 0;
LAB_102528b18:
                    /* WARNING: Could not recover jumptable at 0x000102528b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 102528b40; end: 1025292b3;  */

undefined8 FUN_102528b40(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  char *pcStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&pcStack_90 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar8 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12;
  func_0x000100029394(param_1,lVar8);
  lVar1 = lVar8;
  (**(code **)(lVar15 + 0x30))(lVar8,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar8);
LAB_102528c28:
    uVar3 = 0;
  }
  else {
    uStack_78 = 0xd0000000000000a3;
    pcStack_80 = *(code **)(lVar15 + 0x20);
    lVar4 = lVar11;
    (*pcStack_80)(lVar11,lVar8,lVar2);
    func_0x000107c5edbc();
    lVar1 = 0;
    if (lVar8 != 0) {
      lVar1 = lVar4;
    }
    lVar5 = -0x2000000000000000;
    if (lVar8 != 0) {
      lVar5 = lVar8;
    }
    lStack_70 = lVar1;
    lStack_68 = lVar5;
    func_0x000100e8b654();
    uVar10 = 0;
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c6022c(&UNK_10dab6cd0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar4,lVar4);
    if ((uVar10 & 1) == 0) {
      uVar10 = 0;
      puVar9 = PTR___sSSN_11034da80;
      lStack_70 = lVar1;
      lStack_68 = lVar5;
      func_0x000107c6022c(&UNK_10dab6ce0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar4,lVar4);
      func_0x000107c6142c(lVar5);
      if ((uVar10 & 1) == 0) {
        (**(code **)(lVar15 + 8))(lVar11,lVar2);
        goto LAB_102528c28;
      }
      uStack_78 = 0xd0000000000000af;
      pcStack_90 = "ernalPlaceUrlDataProvider";
      uStack_88 = 1;
    }
    else {
      func_0x000107c6142c(lVar5);
      pcStack_90 = "0xMjB4MTIwLnBuZw._RS60,60_FMpng";
      uStack_88 = 0;
    }
    func_0x000107c5ed70();
    puVar6 = &UNK_11051d3e0;
    func_0x000107c613fc(&UNK_11051d3e0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    (**(code **)(lVar15 + 0x10))(lVar12,lVar11,lVar2);
    uVar10 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar14 = uVar10 + 0x18 & (uVar10 ^ 0xffffffffffffffff);
    puVar7 = &UNK_11051d5e8;
    func_0x000107c613fc(&UNK_11051d5e8,uVar14 + lVar13,uVar10 | 7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    (*pcStack_80)(puVar7 + uVar14,lVar12,lVar2);
    func_0x00010451da9c(0);
    func_0x000107c610f8();
    func_0x000107c6157c(puVar6);
    uVar3 = uStack_88;
    func_0x00010451da30(uStack_88,uStack_78,(ulong)pcStack_90 | 0x8000000000000000,lVar5,puVar9,
                        FUN_10252ba8c,puVar7);
    (**(code **)(lVar15 + 8))(lVar11,lVar2);
    func_0x000107c61574(puVar6);
  }
  return uVar3;
}



/* Entry: 1025292b4; end: 1025293ef; -[_TtC41MapExternalPlaceUrlServicesImplementation31MapExternalPlaceUrlDataProvider getPlaceCardContextObservableFromCoordinate:placeName:sourceUrl:presentingViewController:] */

void FUN_1025292b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0x112d36580;
  puVar2 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  func_0x000107c5faec(param_5);
  if (param_6 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar3,param_6);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_6 == 0,1);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_3);
  FUN_102528148(param_1,param_2,param_5,puVar2,puVar3,param_7);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c6142c(puVar2);
  func_0x0001000293e4(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 1025293f0; end: 1025297f3;  */

undefined *
FUN_1025293f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar5 = 0x112d36580;
  uStack_a0 = param_3;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar5 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar7 + 0xfU & 0xfffffffffffffff0);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  puVar2 = &UNK_11051d3e0;
  puStack_98 = puVar1;
  func_0x000107c613fc(&UNK_11051d3e0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000100029394(param_5,(long)&uStack_a0 - extraout_x8);
  uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar4 + 0x40 & (uVar4 ^ 0xffffffffffffffff);
  puVar1 = &UNK_11051d458;
  func_0x000107c613fc(&UNK_11051d458,uVar6 + lVar7,uVar4 | 7);
  *(undefined **)(puVar1 + 0x10) = puVar2;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = uStack_a0;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  func_0x0001001021cc((long)&uStack_a0 - extraout_x8,puVar1 + uVar6);
  pcStack_70 = FUN_10252b7f0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1004725e8;
  puStack_78 = &UNK_11051d470;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar1;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_68;
  func_0x000107c61174(param_6);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61574(puVar2);
  puVar2 = puStack_98;
  func_0x000107c408f0(puStack_98);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  return puVar2;
}



/* Entry: 1025297f4; end: 10252981f;  */

void FUN_1025297f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x98) = param_9;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102529820,0,0);
  return;
}



/* Entry: 102529820; end: 1025298db;  */

void FUN_102529820(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x30,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  if (lVar3 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x68);
    func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0xa8) = lVar2;
    if (lVar2 != 0) {
      plVar1 = (long *)0xb0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb0) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_1025298dc;
      lVar2 = *(long *)(unaff_x22 + 0x70);
      plVar1[0x12] = *(long *)(unaff_x22 + 0x78);
      plVar1[0x13] = lVar3;
      plVar1[0x11] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102529b3c,0,0);
      return;
    }
    func_0x000107c61170(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001025298d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1025298dc; end: 102529933;  */

void FUN_1025298dc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x28) = param_3;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined1 *)(lVar1 + 200) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102529934,0,0);
  return;
}



/* Entry: 102529934; end: 1025299cb;  */

void FUN_102529934(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  if (*(char *)(unaff_x22 + 200) == '\x01') {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010252997c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar4 = *(long *)(unaff_x22 + 0x18);
  lVar5 = *(long *)(unaff_x22 + 0x20);
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1025299cc;
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  lVar1 = *(long *)(unaff_x22 + 0x80);
  plVar2[0x14] = *(long *)(unaff_x22 + 0x88);
  plVar2[0x15] = lVar3;
  plVar2[0x13] = lVar1;
  plVar2[0x11] = lVar4;
  plVar2[0x12] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1025287a0,0,0);
  return;
}



/* Entry: 1025299cc; end: 102529a1b;  */

void FUN_1025299cc(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xc0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102529a1c,0,0);
  return;
}



/* Entry: 102529a1c; end: 102529b1f;  */

void FUN_102529a1c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0xc0);
  if (lVar5 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar4 = uVar6;
    FUN_102528b40(uVar6);
    lVar2 = lVar5;
    func_0x000107c4e7c0(lVar5);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    func_0x000102528e2c(lVar3,param_2,uVar6,uVar4,uVar1);
    func_0x000107c6142c();
    func_0x000107c5fd5c();
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    if ((param_2 & 1) == 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
      func_0x000107c4d664(uVar7);
      func_0x000107c3fedc(uVar7);
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102529b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102529b20; end: 102529b3b;  */

void FUN_102529b20(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102529b3c,0,0);
  return;
}



/* Entry: 102529b3c; end: 102529ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102529b3c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x98) + _DAT_112ea3e98);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    FUN_10252babc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61434(uVar1);
    uVar3 = 10;
    func_0x000107c60110(10);
    uVar4 = 0;
    func_0x000103a2c22c(0);
    func_0x000107c610f8();
    func_0x000103a2bf80(uVar5,uVar1,0,0,uVar3,uVar4);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102529ccc;
    lVar6 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar6,0);
    puVar7 = &UNK_11051d660;
    func_0x000107c613fc(&UNK_11051d660,0x18,7);
    puVar8 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar7 + 0x10) = lVar6;
    *(code **)(unaff_x22 + 0x70) = FUN_10252bafc;
    *(undefined **)(unaff_x22 + 0x78) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_10252a070;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051d678;
    func_0x000107c60bc4(puVar8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c43190(lVar2);
    func_0x000107c60bd0(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102529cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102529ccc; end: 102529d0b;  */

void FUN_102529ccc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102529d0c,0,0);
  return;
}



/* Entry: 102529d0c; end: 102529e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102529d0c(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x80);
  if (uVar6 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar2 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar2 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c61170(uVar7);
    func_0x000107c6142c(uVar6);
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 1;
  }
  else {
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102529e44);
        (*pcVar1)();
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar3 = *(long *)(uVar6 + 0x20);
      func_0x000107c61174();
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar6);
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112fcd430);
      uVar5 = ((undefined8 *)(lVar3 + _DAT_112fcd430))[1];
      func_0x000107c61170(lVar3);
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
      lVar3 = 0;
      FUN_10252b24c(0,uVar6);
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uVar6);
      uVar7 = *(undefined8 *)(lVar3 + _DAT_112fcd430);
      uVar5 = ((undefined8 *)(lVar3 + _DAT_112fcd430))[1];
      func_0x000107c615e8(lVar3);
    }
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102529df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7,uVar5,uVar4);
  return;
}



/* Entry: 102529e44; end: 102529f93; -[_TtC41MapExternalPlaceUrlServicesImplementation31MapExternalPlaceUrlDataProvider getPlaceCardContextObservableFromAddress:placeName:sourceUrl:presentingViewController:] */

void FUN_102529e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  lVar1 = 0x112d36580;
  puVar2 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  func_0x000107c5faec(param_3);
  puVar3 = puVar2;
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar4,param_5);
    lVar1 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar4,param_5 == 0,1);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_1025293f0(param_3,puVar2,param_4,puVar3,puVar4,param_6);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puVar2);
  func_0x000107c6142c(puVar3);
  func_0x0001000293e4(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102529f94; end: 102529ff3; -[_TtC41MapExternalPlaceUrlServicesImplementation31MapExternalPlaceUrlDataProvider init] */

void FUN_102529f94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapExternalPlaceUrlServicesImplementation.MapExternalPlaceUrlDataProvider",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102529fc0);
  (*pcVar1)();
}



/* Entry: 102529ff4; end: 10252a06f; -[_TtC41MapExternalPlaceUrlServicesImplementation31MapExternalPlaceUrlDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102529ff4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3e90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3e98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3ea0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3ea8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3eb0));
  FUN_10252ba48(param_1 + _DAT_112ea3eb8);
  return;
}



/* Entry: 10252a070; end: 10252a0f3;  */

void FUN_10252a070(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x000103a2c460(0);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10252a0f4; end: 10252a443;  */

undefined * FUN_10252a0f4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  code *pcVar19;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fb1c();
  uVar5 = 0x2f9480e29380e22d;
  puStack_70 = (undefined *)param_1;
  uStack_68 = param_2;
  func_0x000107c5eb6c(lVar14,0x2f9480e29380e22d,0xab000000002c7c5c);
  func_0x000100e8b654();
  puVar10 = PTR___sSSN_11034da80;
  lVar16 = lVar14;
  func_0x000107c601d8(lVar14,PTR___sSSN_11034da80,uVar5);
  pcVar19 = *(code **)(lVar13 + 8);
  (*pcVar19)(lVar14,lVar4);
  func_0x000107c6142c(param_2);
  uVar6 = 0x112d38270;
  puStack_70 = (undefined *)lVar16;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar7 = uVar6;
  func_0x00010011d734();
  puVar8 = (undefined *)0x20;
  uVar11 = 0xe100000000000000;
  func_0x000107c5fa80(0x20,0xe100000000000000,uVar6,uVar7);
  func_0x000107c6142c(lVar16);
  puStack_70 = puVar8;
  uStack_68 = uVar11;
  func_0x000107c5eb68(lVar14);
  lVar13 = lVar14;
  uStack_80 = uVar5;
  func_0x000107c601d8(lVar14,puVar10,uVar5);
  lStack_88 = lVar4;
  (*pcVar19)(lVar14,lVar4);
  func_0x000107c6142c(uVar11);
  lVar16 = *(long *)(lVar13 + 0x10);
  if (lVar16 == 0) {
    func_0x000107c6142c(lVar13);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar16,0);
    puVar18 = (undefined8 *)(lVar13 + 0x28);
    lStack_90 = lVar13;
    do {
      puVar10 = puStack_78;
      puStack_70 = (undefined *)puVar18[-1];
      uVar6 = *puVar18;
      uStack_68 = uVar6;
      func_0x000107c61434(uVar6);
      func_0x000107c5eb84(lVar14);
      lVar13 = lVar14;
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar14,PTR___sSSN_11034da80,uStack_80);
      (*pcVar19)(lVar14,lStack_88);
      func_0x000107c6142c(uVar6);
      puStack_78 = puVar10;
      uVar15 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar15) {
        func_0x000100403514(1 < *(ulong *)(puVar10 + 0x18),uVar15 + 1,1);
      }
      puVar10 = puStack_78;
      puVar18 = puVar18 + 2;
      *(ulong *)(puStack_78 + 0x10) = uVar15 + 1;
      *(long *)(puStack_78 + uVar15 * 0x10 + 0x20) = lVar13;
      *(undefined **)(puStack_78 + uVar15 * 0x10 + 0x28) = puVar8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    func_0x000107c6142c(lStack_90);
  }
  uVar15 = 0;
  uVar17 = *(ulong *)(puVar10 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar12 = (ulong *)(puVar10 + uVar15 * 0x10 + 0x28);
    do {
      if (uVar17 == uVar15) {
        func_0x000107c6142c(puVar10);
        puVar10 = puVar8;
        func_0x000100403a6c(puVar8);
        func_0x000107c61574(puVar8);
        return puVar10;
      }
      if (*(ulong *)(puVar10 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x10252a444);
        (*pcVar19)();
      }
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      puVar12 = puVar12 + 2;
      uVar15 = uVar15 + 1;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar2 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    func_0x000107c61434(uVar3);
    puVar9 = puVar8;
    func_0x000107c61558();
    puStack_70 = puVar8;
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000100403514(0,*(long *)(puVar8 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puStack_70 + 0x10);
    if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar2) {
      func_0x000100403514(1 < *(ulong *)(puStack_70 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puStack_70 + 0x10) = uVar2 + 1;
    *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(puStack_70 + uVar2 * 0x10 + 0x28) = uVar3;
    puVar8 = puStack_70;
  } while( true );
}



/* Entry: 10252a444; end: 10252a45f;  */

void FUN_10252a444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252a460,0,0);
  return;
}



/* Entry: 10252a460; end: 10252a5eb;  */

void FUN_10252a460(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x60) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x10252a4ec;
    lVar1 = *(long *)(unaff_x22 + 0x48);
    plVar2[0x14] = *(long *)(unaff_x22 + 0x50);
    plVar2[0x15] = lVar3;
    plVar2[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10252a6c0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010252a4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10252a5ec; end: 10252a6a3;  */

void FUN_10252a5ec(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x80);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0x30);
  }
  uVar1 = 0xe000000000000000;
  if (uVar3 != 0) {
    uVar1 = uVar3;
  }
  uVar3 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    func_0x000107c6142c(uVar1);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c5fadc(uVar2,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c57084(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(uVar5);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010252a6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10252a6a4; end: 10252a6bf;  */

void FUN_10252a6a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252a6c0,0,0);
  return;
}



/* Entry: 10252a6c0; end: 10252a807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252a6c0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112ea3e90);
  func_0x000107c4e7e4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0xa0));
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
    uVar3 = 0x54414843;
    func_0x000107c5fadc(0x54414843,0xe400000000000000);
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10252a808;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar3 = 0x112ea3ef0;
    func_0x0001000285a8(0x112ea3ef0,&UNK_10dab6cc8);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_10252b048;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051d5b0;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    func_0x000107c43130(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c610f8(PTR_PTR_1126b2160);
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010252a804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10252a808; end: 10252a85f;  */

void FUN_10252a808(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 200) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10252a860;
  }
  else {
    pcVar1 = FUN_10252ac4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10252a860; end: 10252ac4b;  */

void FUN_10252a860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(ulong *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61170(uVar11);
  uVar2 = uVar10;
  func_0x000107c4e7c0();
  func_0x000107c61180();
  uVar11 = param_3;
  if (uVar2 == 0) {
    func_0x000107c5faec();
    uVar11 = param_3;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  uVar3 = uVar10;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  uVar9 = uVar11;
  if (uVar3 == 0) {
    func_0x000107c5faec();
    uVar9 = uVar11;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar11);
  }
  func_0x000107c49d60(uVar10);
  puVar4 = PTR_PTR_1126b2160;
  func_0x000107c610f8(PTR_PTR_1126b2160);
  func_0x000107c47edc();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c4aad8(uVar10);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c55ab8(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c4b6f0(uVar10);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c55fc4(puVar4);
  func_0x000107c61170(puVar5);
  uVar2 = uVar10;
  func_0x000107c3f6f4();
  func_0x000107c61180();
  uVar11 = uVar9;
  if (uVar2 == 0) {
    func_0x000107c5faec();
    uVar11 = uVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c53288(puVar4);
  func_0x000107c61170(uVar2);
  uVar2 = uVar10;
  func_0x000107c3ec58(uVar10);
  func_0x000107c61180();
  func_0x000107c52e40(puVar4);
  func_0x000107c61170(uVar2);
  uVar2 = uVar10;
  func_0x000107c3f704();
  func_0x000107c61180();
  uVar9 = uVar11;
  if (uVar2 == 0) {
    func_0x000107c5faec();
    uVar9 = uVar11;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar11);
  }
  func_0x000107c55208(puVar4);
  func_0x000107c61170(uVar2);
  uVar2 = uVar10;
  func_0x000107c4f214();
  func_0x000107c61180();
  if (uVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c5782c(puVar4);
  func_0x000107c61170(uVar2);
  uVar2 = uVar10;
  func_0x000107c4a920(uVar10);
  func_0x000107c61180();
  func_0x000107c559d8(puVar4);
  func_0x000107c61170(uVar2);
  uVar2 = uVar10;
  func_0x000107c4e7d4();
  func_0x000107c61180();
  lVar8 = 0;
  if (uVar2 == 0) goto LAB_10252ab90;
  uVar6 = 0;
  FUN_10252babc(0,0x112ea3ef8,&PTR_PTR_1126cd848);
  uVar3 = uVar2;
  func_0x000107c5fc54(uVar2,uVar6);
  func_0x000107c61170(uVar2);
  if (uVar3 >> 0x3e == 0) {
    if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_10252ab10;
LAB_10252ab84:
    lVar8 = 0;
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
    if (uVar2 == 0) goto LAB_10252ab84;
LAB_10252ab10:
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10252ac4c);
        (*pcVar1)();
      }
      lVar7 = *(long *)(uVar3 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar7 = 0;
      uVar6 = uVar3;
      FUN_10252b3e8(0,uVar3,&PTR_PTR_1126cd848,0x112ea3ef8);
    }
    func_0x000107c6142c(uVar3);
    lVar8 = lVar7;
    func_0x000107c4e70c();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 != 0) goto LAB_10252ab90;
    lVar8 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    uVar3 = uVar6;
  }
  func_0x000107c6142c(uVar3);
LAB_10252ab90:
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c579c8(puVar4);
  func_0x000107c61170(lVar8);
  uVar2 = uVar10;
  func_0x000107c4de84(uVar10);
  func_0x000107c61180();
  func_0x000107c56ff4(puVar4);
  func_0x000107c61170(uVar2);
  uVar2 = uVar10;
  func_0x000107c4e7b8(uVar10);
  func_0x000107c61180();
  func_0x000107c548d0(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010252ac24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4);
  return;
}



/* Entry: 10252ac4c; end: 10252accb;  */

void FUN_10252ac4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61654();
  func_0x000107c614ac(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  puVar5 = PTR_PTR_1126b2160;
  func_0x000107c610f8(PTR_PTR_1126b2160);
  func_0x000107c453e4();
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010252acc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar5);
  return;
}



/* Entry: 10252accc; end: 10252ace7;  */

void FUN_10252accc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252ace8,0,0);
  return;
}



/* Entry: 10252ace8; end: 10252adef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252ace8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xb0) + _DAT_112ea3ea8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x22 + 0xa8));
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10252adf0;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,1);
    uVar2 = 0x112ea3ee8;
    func_0x0001000285a8(0x112ea3ee8,&UNK_10dab7500);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x10252b0f4;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051d588;
    *(long *)(unaff_x22 + 0x70) = lVar3;
    func_0x000107c4324c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010252adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10252adf0; end: 10252ae47;  */

void FUN_10252adf0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 200) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10252ae48;
  }
  else {
    pcVar1 = FUN_10252aef8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10252ae48; end: 10252aef7;  */

void FUN_10252ae48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c61170(uVar3);
  lVar2 = lVar1;
  func_0x000107c5d7e8();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  if (lVar2 == 0) {
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar3);
    lVar4 = 0;
    param_2 = 0;
  }
  else {
    lVar4 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010252aef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar4,param_2);
  return;
}



/* Entry: 10252aef8; end: 10252af5f;  */

void FUN_10252aef8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010252af5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 10252af60; end: 10252b047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252af60(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar1 = param_1 + _DAT_112ea3eb8;
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      lVar3 = *(long *)(lVar1 + 0x20);
      func_0x00010252ba68(lVar1,uVar2);
      (**(code **)(lVar3 + 8))(param_3,param_4,param_5,param_2,uVar2,lVar3);
      func_0x000107c61170(param_1);
      param_1 = param_2;
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10252b048; end: 10252b1b3;  */

void FUN_10252b048(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x00010252ba68(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10252b0f4);
  (*pcVar1)();
}



/* Entry: 10252b1b4; end: 10252b24b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252b1b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112ea3eb8;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x00010252ba68(lVar1,uVar2);
    (**(code **)(lVar3 + 0x10))(param_2,uVar2,lVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10252b24c; end: 10252b3e7;  */

ulong FUN_10252b24c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10252b31c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10252b320);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103a2c460(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103a2c460(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f0a85c0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10252b3e8);
  (*pcVar2)();
}



/* Entry: 10252b3e8; end: 10252b5a3;  */

ulong FUN_10252b3e8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10252b4cc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10252b4d0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10252babc(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10252b5a4);
  (*pcVar2)();
}



/* Entry: 10252b5a4; end: 10252b77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10252b5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,long param_7,long param_8,
                    undefined8 param_9)

{
  long lVar1;
  long *plVar2;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_7;
  func_0x000107c614f0();
  uStack_68 = param_9;
  lStack_70 = param_8;
  func_0x0001000c5db4(auStack_88);
  (**(code **)(*(long *)(param_8 + -8) + 0x20))();
  *(undefined8 *)(param_7 + _DAT_112ea3e90) = param_1;
  *(undefined8 *)(param_7 + _DAT_112ea3e98) = param_2;
  *(undefined8 *)(param_7 + _DAT_112ea3ea0) = param_3;
  *(undefined8 *)(param_7 + _DAT_112ea3ea8) = param_4;
  *(undefined8 *)(param_7 + _DAT_112ea3eb0) = param_5;
  FUN_10252bc14(auStack_88,param_7 + _DAT_112ea3eb8);
  plVar2 = &lStack_98;
  lStack_98 = param_7;
  lStack_90 = lVar1;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  FUN_10252ba48(auStack_88);
  return plVar2;
}



/* Entry: 10252b780; end: 10252b7d3;  */

undefined * FUN_10252b780(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long extraout_x8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar9 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar13 = *(long *)(lVar11 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar11 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_11051d3e0;
  func_0x000107c613fc(&UNK_11051d3e0,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_88,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  puVar5 = &UNK_11051d4a8;
  func_0x000107c613fc(&UNK_11051d4a8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,uVar7);
  func_0x000100029394(unaff_x20 + (uVar9 + 0x40 & (uVar9 ^ 0xffffffffffffffff)),
                      auStack_c0 + -extraout_x8);
  uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar9 + 0x40 & (uVar9 ^ 0xffffffffffffffff);
  uVar12 = lVar11 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_11051d6b0;
  func_0x000107c613fc(&UNK_11051d6b0,uVar12 + 8,uVar9 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar14;
  *(undefined8 *)(puVar6 + 0x28) = uVar15;
  *(undefined8 *)(puVar6 + 0x30) = uVar1;
  *(undefined8 *)(puVar6 + 0x38) = uVar2;
  func_0x0001001021cc(auStack_c0 + -extraout_x8,puVar6 + uVar10);
  *(undefined8 *)(puVar6 + uVar12) = param_1;
  func_0x000107c61434(uVar2);
  func_0x000107c615f0(param_1);
  *(undefined **)((long)alStack_d0 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
  uVar7 = 0;
  func_0x0001001ca524(0,0,0x3c,4,0,0,&UNK_10dab6cf8,puVar6);
  func_0x000107c61574(puVar6);
  puVar3 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  uStack_98 = 0x10252bc9c;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  puStack_a0 = &UNK_11051d6c8;
  ppuVar8 = &puStack_b8;
  uStack_90 = uVar7;
  func_0x000107c60bc4(ppuVar8);
  uVar1 = uStack_90;
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(uVar1);
  func_0x000107c408f0(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(uVar7);
  return puVar3;
}



/* Entry: 10252b7d4; end: 10252b7ef;  */

void FUN_10252b7d4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10252b7f0; end: 10252b843;  */

undefined * FUN_10252b7f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long extraout_x8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar9 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar10 = *(long *)(lVar10 + -8);
  lVar13 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_11051d3e0;
  func_0x000107c613fc(&UNK_11051d3e0,0x18,7);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  puVar5 = &UNK_11051d4a8;
  func_0x000107c613fc(&UNK_11051d4a8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,uVar1);
  func_0x000100029394(unaff_x20 + (uVar9 + 0x40 & (uVar9 ^ 0xffffffffffffffff)),
                      auStack_c0 + -extraout_x8);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar9 + 0x40 & (uVar9 ^ 0xffffffffffffffff);
  uVar12 = lVar13 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar6 = &UNK_11051d4d0;
  func_0x000107c613fc(&UNK_11051d4d0,uVar12 + 8,uVar9 | 7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uStack_b8;
  *(undefined8 *)(puVar6 + 0x28) = uVar7;
  *(undefined8 *)(puVar6 + 0x30) = uStack_b0;
  *(undefined8 *)(puVar6 + 0x38) = uVar2;
  func_0x0001001021cc(auStack_c0 + -extraout_x8,puVar6 + uVar11);
  *(undefined8 *)(puVar6 + uVar12) = param_1;
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar2);
  func_0x000107c615f0(param_1);
  *(undefined **)((long)alStack_d0 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
  uVar7 = 0;
  func_0x0001001ca524(0,0,0x3c,4,0,0,&UNK_10dab6c90,puVar6);
  func_0x000107c61574(puVar6);
  puVar3 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  pcStack_88 = FUN_10252b974;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_11051d4e8;
  ppuVar8 = &puStack_a8;
  uStack_80 = uVar7;
  func_0x000107c60bc4(ppuVar8);
  uVar1 = uStack_80;
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(uVar1);
  func_0x000107c408f0(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(uVar7);
  return puVar3;
}



/* Entry: 10252b844; end: 10252b863;  */

void FUN_10252b844(void)

{
  func_0x000107c61168(&PTR_PTR_11284c360);
  return;
}



/* Entry: 10252b864; end: 10252b937;  */

void FUN_10252b864(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar9 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  uVar8 = uVar8 + 0x40 & (uVar8 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar9 + -8) + 0x40) + uVar8 + 7 & 0xffffffffffffff8));
  plVar7 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10252b938;
  plVar7[0x12] = unaff_x20 + uVar8;
  plVar7[0x13] = lVar9;
  plVar7[0x10] = lVar3;
  plVar7[0x11] = lVar6;
  plVar7[0xe] = lVar2;
  plVar7[0xf] = lVar5;
  plVar7[0xc] = lVar1;
  plVar7[0xd] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102529820,0,0);
  return;
}



/* Entry: 10252b938; end: 10252b973;  */

void FUN_10252b938(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010252b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10252b974; end: 10252b997;  */

void FUN_10252b974(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 10252b998; end: 10252ba0f;  */

void FUN_10252b998(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10252bc94;
  plVar5[10] = lVar2;
  plVar5[0xb] = lVar4;
  plVar5[8] = lVar1;
  plVar5[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252a460,0,0);
  return;
}



/* Entry: 10252ba10; end: 10252ba2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252ba10(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c61428(lVar7 + 0x10,auStack_80,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61618();
    if (lVar7 != 0) {
      lVar1 = lVar6 + _DAT_112ea3eb8;
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      lVar4 = *(long *)(lVar1 + 0x20);
      func_0x00010252ba68(lVar1,uVar2);
      (**(code **)(lVar4 + 8))(uVar3,uVar5,uVar8,lVar7,uVar2,lVar4);
      func_0x000107c61170(lVar6);
      lVar6 = lVar7;
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10252ba30; end: 10252ba47;  */

void FUN_10252ba30(long param_1)

{
  FUN_10252ba48(param_1 + 0x20);
  return;
}



/* Entry: 10252ba48; end: 10252ba8b;  */

void FUN_10252ba48(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010252ba5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10252ba8c; end: 10252babb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252ba8c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar1 = lVar4 + _DAT_112ea3eb8;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x00010252ba68(lVar1,uVar2);
    (**(code **)(lVar3 + 0x10))
              (unaff_x20 + (uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff)),uVar2,lVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10252babc; end: 10252bafb;  */

void FUN_10252babc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10252bafc; end: 10252baff;  */

void FUN_10252bafc(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = puVar1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 10252bb00; end: 10252bb3f;  */

void FUN_10252bb00(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = puVar1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 10252bb40; end: 10252bc13;  */

void FUN_10252bb40(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar6 = uVar6 + 0x40 & (uVar6 ^ 0xffffffffffffffff);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar9 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar7 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar6 + 7 & 0xffffffffffffff8));
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10252bc98;
  plVar5[0xe] = unaff_x20 + uVar6;
  plVar5[0xf] = lVar7;
  plVar5[0xc] = lVar2;
  plVar5[0xd] = lVar4;
  plVar5[10] = lVar8;
  plVar5[0xb] = lVar9;
  plVar5[8] = lVar1;
  plVar5[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252856c,0,0);
  return;
}



/* Entry: 10252bc14; end: 10252bc57;  */

long FUN_10252bc14(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10252bc58; end: 10252bc9f;  */

void FUN_10252bc58(long param_1)

{
  FUN_10252ba48(param_1 + 0x20);
  return;
}



/* Entry: 10252bca0; end: 10252bcdb; -[_TtC41MapExternalPlaceUrlServicesImplementation25MapExternalPlaceUrlParser init] */

void FUN_10252bca0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10252bcdc; end: 10252bdb7; -[_TtC41MapExternalPlaceUrlServicesImplementation25MapExternalPlaceUrlParser getPlaceDataFromExternalUrl:previewTitle:] */

void FUN_10252bcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  puVar2 = puVar3;
  func_0x00010252d5c0(puVar3,param_4,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10252bdb8; end: 10252be43; -[_TtC41MapExternalPlaceUrlServicesImplementation25MapExternalPlaceUrlParser isUrlAnExternalPlaceUrl:] */

uint FUN_10252bdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  puVar2 = puVar3;
  func_0x00010252d930(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return (uint)puVar2 & 1;
}



/* Entry: 10252be44; end: 10252be77;  */

void FUN_10252be44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10252be78; end: 10252dc87;  */

undefined1  [16] FUN_10252be78(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long lStack_80;
  long lStack_78;
  code *pcStack_70;
  long lStack_68;
  
  lVar1 = 0;
  lStack_68 = param_2;
  func_0x000107c5ebbc();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  uVar4 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = uVar4 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_80 = lVar7 - extraout_x12_00;
  lVar6 = *(long *)(param_3 + 0x10);
  if (lVar6 != 0) {
    param_3 = param_3 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
    lStack_78 = *(long *)(lVar8 + 0x48);
    pcStack_70 = *(code **)(lVar8 + 0x10);
    do {
      (*pcStack_70)(lVar7,param_3,lVar1);
      pcVar5 = *(code **)(lVar8 + 0x20);
      uVar2 = uVar4;
      lVar3 = lVar7;
      (*pcVar5)(uVar4,lVar7,lVar1);
      func_0x000107c5ebb4();
      if ((uVar2 == param_1) && (lVar3 == lStack_68)) {
        func_0x000107c6142c(lVar3);
LAB_10252bfd8:
        lVar6 = lStack_80;
        lVar7 = lStack_80;
        (*pcVar5)(lStack_80,uVar4,lVar1);
        func_0x000107c5ebb8();
        (**(code **)(lVar8 + 8))(lVar6,lVar1);
        goto LAB_10252c014;
      }
      func_0x000107c605b8();
      func_0x000107c6142c(lVar3);
      if ((uVar2 & 1) != 0) goto LAB_10252bfd8;
      (**(code **)(lVar8 + 8))(uVar4,lVar1);
      param_3 = param_3 + lStack_78;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  lVar7 = 0;
  uVar4 = 0;
LAB_10252c014:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = lVar7;
  return auVar9;
}



/* Entry: 10252dc88; end: 10252dca7;  */

void FUN_10252dc88(void)

{
  func_0x000107c61168(&PTR_PTR_11284c448);
  return;
}



/* Entry: 10252dca8; end: 10252dcfb;  */

uint FUN_10252dca8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 10252dcfc; end: 10252dd5f;  */

void FUN_10252dcfc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ea3f30 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ea3f28;
  func_0x00010002969c(0x112ea3f28,&UNK_10dab6d60);
  puVar2 = PTR___ss10ArraySliceVyxGSKsMc_11034e2e0;
  func_0x000107c61520(PTR___ss10ArraySliceVyxGSKsMc_11034e2e0,uVar1);
  puRam0000000112ea3f30 = puVar2;
  return;
}



/* Entry: 10252dd60; end: 10252ddd7;  */

void FUN_10252dd60(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c60eb4(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 10252ddd8; end: 10252de3b;  */

void FUN_10252ddd8(void)

{
  func_0x00010252dd4c();
  return;
}



/* Entry: 10252de3c; end: 10252de87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252de3c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea3f38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10252de88; end: 10252dfb7;  */

/* WARNING: Possible PIC construction at 0x00010252df80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010252df84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252de88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea3f38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_11051d700;
    func_0x000107c613fc(&UNK_11051d700,0x38,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined8 *)(puVar2 + 0x28) = param_4;
    *(long *)(puVar2 + 0x30) = lVar1;
    puVar3 = &UNK_11051d728;
    func_0x000107c613fc(&UNK_11051d728,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10dab6d78;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c615f0(lVar1);
    func_0x000107c61434(param_2);
    func_0x0001001ca524(0,0,0x3c,4,0,0,&UNK_10dab6d88,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10252dfb8; end: 10252e04f;  */

void FUN_10252dfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10252e7e8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252e050,uVar2,uVar3);
  return;
}



/* Entry: 10252e050; end: 10252e20f;  */

void FUN_10252e050(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  lVar3 = 0;
  func_0x000100c6f294();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar10 = *(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98;
    uVar11 = *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x00010451c820(0);
    lVar4 = lVar3;
    func_0x000107c5faec(lVar3);
    func_0x000107c61170(lVar3);
    uVar5 = 2;
    func_0x000104519a14(uVar10,uVar11,uVar10,uVar11,2,uVar9,uVar8,lVar4,param_2,0x54414843,
                        0xe400000000000000,0,0,uVar6);
    func_0x000107c6142c(param_2);
    func_0x0001045162e4(0);
    func_0x000107c610f8();
    uVar6 = 6;
    func_0x000104515e00(6,2,10,0x11);
    puVar7 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000104515b14(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar5);
    func_0x000107c61174(uVar6);
    func_0x000107c61174(puVar7);
    uVar8 = uVar5;
    func_0x0001045158a8(uVar5,uVar6,0,puVar7);
    func_0x000107c4ab9c(uVar1);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010252e208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10252e210);
  (*pcVar2)();
}



/* Entry: 10252e210; end: 10252e283;  */

void FUN_10252e210(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar7 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10252e284;
  plVar7[5] = lVar2;
  plVar7[6] = lVar8;
  plVar7[3] = lVar1;
  plVar7[4] = lVar4;
  plVar7[2] = lVar5;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar7[7] = lVar5;
  uVar6 = 0x112d45220;
  FUN_10252e7e8(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252e050,lVar4,uVar6);
  return;
}



/* Entry: 10252e284; end: 10252e2fb;  */

void FUN_10252e284(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010252e2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10252e2fc; end: 10252e36b;  */

void FUN_10252e2fc(undefined8 param_1)

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
  plVar3[1] = (long)FUN_10252e828;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10252e36c; end: 10252e3fb;  */

void FUN_10252e36c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10252e7e8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252e3fc,uVar2,uVar3);
  return;
}



/* Entry: 10252e3fc; end: 10252e4e3;  */

void FUN_10252e3fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar4 = 0;
  func_0x000100dfa6ec(0);
  uVar5 = 0x112d377a8;
  FUN_10252e7e8(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
  puVar6 = puVar3;
  func_0x000107c5f9dc(puVar3,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
  func_0x000107c6142c(puVar3);
  func_0x000107c4de70(puVar1);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010252e4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10252e4e4; end: 10252e543; -[_TtC41MapExternalPlaceUrlServicesImplementation25MapExternalPlaceUrlRouter init] */

void FUN_10252e4e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapExternalPlaceUrlServicesImplementation.MapExternalPlaceUrlRouter",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10252e510);
  (*pcVar1)();
}



/* Entry: 10252e544; end: 10252e553; -[_TtC41MapExternalPlaceUrlServicesImplementation25MapExternalPlaceUrlRouter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252e544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea3f38));
  return;
}



/* Entry: 10252e554; end: 10252e573;  */

void FUN_10252e554(void)

{
  FUN_10252de88();
  return;
}



/* Entry: 10252e574; end: 10252e69b;  */

void FUN_10252e574(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long alStack_50 [2];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar7 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(&stack0xffffffffffffffc0 + lVar1,param_1,lVar2);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &UNK_11051d768;
  func_0x000107c613fc(&UNK_11051d768,uVar9 + lVar7,uVar6 | 7);
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar9,&stack0xffffffffffffffc0 + lVar1,lVar2);
  puVar4 = &UNK_11051d790;
  func_0x000107c613fc(&UNK_11051d790,0x20,7);
  *(undefined **)(puVar4 + 0x10) = &UNK_10dab6df0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(undefined **)((long)alStack_50 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar5 = 0;
  func_0x0001001ca524(0,0,0x3c,4,0,0,&UNK_10dab6df8,puVar4);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 10252e69c; end: 10252e6bb;  */

void FUN_10252e69c(void)

{
  func_0x000107c61168(&PTR_PTR_11284c4f8);
  return;
}



/* Entry: 10252e6bc; end: 10252e713;  */

void FUN_10252e6bc(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10252e714; end: 10252e777;  */

void FUN_10252e714(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10252e82c;
  plVar5[2] = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar5[3] = lVar4;
  uVar3 = 0x112d45220;
  FUN_10252e7e8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10252e3fc,lVar2,uVar3);
  return;
}



/* Entry: 10252e778; end: 10252e7e7;  */

void FUN_10252e778(undefined8 param_1)

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
  plVar3[1] = 0x10252e830;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10252e7e8; end: 10252e827;  */

void FUN_10252e7e8(long *param_1,code *param_2,long param_3)

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



/* Entry: 10252e828; end: 10252e833;  */

void FUN_10252e828(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010252e2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10252e834; end: 10252ea57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252e834(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  func_0x000100083b20(&puStack_b0);
  puVar2 = puStack_b0;
  func_0x000107c4e26c();
  func_0x000107c61180();
  func_0x000107c61170(puStack_b0);
  lVar3 = 0;
  FUN_10252e69c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined **)(lVar4 + _DAT_112ea3f38) = puVar2;
  plVar5 = &lStack_80;
  lStack_80 = lVar4;
  lStack_78 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_10252ea78;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x10252ecb0;
  puStack_98 = &UNK_11051d7f0;
  ppuVar7 = &puStack_b0;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar8 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11051d828;
  func_0x000107c613fc(&UNK_11051d828,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(long **)(puVar2 + 0x38) = plVar5;
  pcStack_90 = FUN_10252ec60;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x10252ecb4;
  puStack_98 = &UNK_11051d840;
  ppuVar7 = &puStack_b0;
  puStack_88 = puVar2;
  func_0x000107c60bc4(ppuVar7);
  puVar2 = puStack_88;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61174(plVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x0001003637a4(0);
  func_0x000107c610f8();
  func_0x00010451d12c(puVar8,puVar6);
  func_0x000107c61170(plVar5);
  *param_1 = puVar8;
  return;
}



/* Entry: 10252ea58; end: 10252ea77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10252ea58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000100083b20(&puStack_b0,*(undefined8 *)(unaff_x20 + 0x10));
  puVar7 = puStack_b0;
  func_0x000107c4e26c();
  func_0x000107c61180();
  func_0x000107c61170(puStack_b0);
  lVar8 = 0;
  FUN_10252e69c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined **)(lVar9 + _DAT_112ea3f38) = puVar7;
  plVar10 = &lStack_80;
  lStack_80 = lVar9;
  lStack_78 = lVar8;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  puVar11 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = FUN_10252ea78;
  puStack_88 = (undefined *)0x0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x10252ecb0;
  puStack_98 = &UNK_11051d7f0;
  ppuVar12 = &puStack_b0;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c3e4fc(puVar11);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  puVar13 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar7 = &UNK_11051d828;
  func_0x000107c613fc(&UNK_11051d828,0x40,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar1;
  *(undefined8 *)(puVar7 + 0x20) = uVar4;
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  *(undefined8 *)(puVar7 + 0x30) = uVar5;
  *(long **)(puVar7 + 0x38) = plVar10;
  pcStack_90 = FUN_10252ec60;
  puStack_b0 = puVar6;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x10252ecb4;
  puStack_98 = &UNK_11051d840;
  ppuVar12 = &puStack_b0;
  puStack_88 = puVar7;
  func_0x000107c60bc4(ppuVar12);
  puVar7 = puStack_88;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c61174(plVar10);
  func_0x000107c61574(puVar7);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  func_0x0001003637a4(0);
  func_0x000107c610f8();
  func_0x00010451d12c(puVar13,puVar11);
  func_0x000107c61170(plVar10);
  *param_1 = puVar13;
  return;
}



/* Entry: 10252ea78; end: 10252ea93;  */

void FUN_10252ea78(void)

{
  FUN_10252dc88(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10252ea94; end: 10252eaaf;  */

void FUN_10252ea94(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}


