/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010ad194; end: 1010ad19b;  */

/* WARNING: Possible PIC construction at 0x0001010ad13c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ad150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010ad140) */
/* WARNING: Removing unreachable block (ram,0x0001010ad154) */

void FUN_1010ad194(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c42454();
  func_0x000107c61180();
  uVar1 = 0;
  FUN_100c70ba8(0);
  uVar2 = param_1;
  func_0x000107c5fc54(param_1,uVar1);
  func_0x000107c61170(param_1);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar4 != 0) {
      FUN_1010ad19c(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1010ad19c; end: 1010ad4bf;  */

void FUN_1010ad19c(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long extraout_x8;
  ulong uVar10;
  code *pcVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  long alStack_d0 [2];
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_80;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lStack_a8 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = (long)&uStack_c0 + lVar2;
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100bc7fa4();
  if (param_1 >> 0x3e == 0) {
    uVar12 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar12 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar12 != 0) {
    if ((long)uVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1010ad4c0);
      (*pcVar11)();
    }
    uVar13 = 0;
    uVar10 = param_1 & 0xc000000000000001;
    uStack_c0 = uVar12;
    uStack_b8 = param_1;
    do {
      if (uVar10 == 0) {
        uVar3 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
        uVar7 = param_2;
      }
      else {
        uVar3 = uVar13;
        uVar7 = param_1;
        func_0x000100ff3f88();
      }
      uVar4 = uVar3;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c5faec();
      param_2 = uVar7;
      func_0x000107c61170(uVar4);
      uVar4 = uVar3;
      func_0x000107c44ea0();
      func_0x000107c61180();
      if (uVar4 == 0) {
        func_0x000107c61170(uVar3);
      }
      else {
        uVar12 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        uVar4 = uVar3;
        func_0x000107c44ea8();
        func_0x000107c61180();
        if (uVar4 == 0) {
          uStack_80 = 0;
        }
        else {
          uStack_80 = uVar4;
          func_0x000107c5f9e8();
          func_0x000107c61170(uVar4);
        }
        func_0x000107c602fc(0x10);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(uVar5,uVar7);
        uVar6 = 0x3a;
        uVar8 = 0xe100000000000000;
        func_0x000107c5fb78(0x3a,0xe100000000000000);
        lVar1 = lStack_b0;
        func_0x000107c5eec4(lStack_b0);
        func_0x000107c5eeac();
        (**(code **)(lStack_a8 + 8))(lVar1,lStack_a0);
        func_0x000107c5fb78(uVar6,uVar8);
        func_0x000107c6142c(uVar8);
        func_0x000107c5fb78(0x6469686f7475613a,0xeb000000006e6564);
        uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
        lVar1 = *(long *)(unaff_x20 + 0x40);
        func_0x0001000a8868(unaff_x20 + 0x20,uVar6);
        pcVar11 = *(code **)(lVar1 + 8);
        *(long *)((long)alStack_d0 + lVar2) = lVar1;
        uVar4 = param_2;
        (*pcVar11)(uVar12,param_2,uStack_80,1,1,0x6b736154746e6968,0xeb000000003a6449,uVar6);
        func_0x000107c6142c(0xeb000000003a6449);
        uVar9 = uVar4;
        FUN_1010ae408(uVar12,uVar4,uVar5,uVar7);
        func_0x000107c61170(uVar3);
        func_0x000107c6142c(uVar7);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(uVar4);
        param_2 = uVar9;
        param_1 = uStack_b8;
        uVar12 = uStack_c0;
        uVar7 = uStack_80;
      }
      uVar13 = uVar13 + 1;
      func_0x000107c6142c(uVar7);
    } while (uVar12 != uVar13);
  }
  return;
}



/* Entry: 1010ad4c0; end: 1010ad4db;  */

void FUN_1010ad4c0(long param_1,long param_2)

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



/* Entry: 1010ad4dc; end: 1010ad623;  */

/* WARNING: Possible PIC construction at 0x0001010ad5b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ad5d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010ad5b8) */
/* WARNING: Removing unreachable block (ram,0x0001010ad5dc) */

void FUN_1010ad4dc(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c42454();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_100c70ba8(0);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c614f0(*(undefined8 *)(param_2 + 0x48));
      func_0x000100bc7fa4();
      uVar4 = uVar3;
      FUN_1010ad8c4();
      if (*(long *)(uVar4 + 0x10) == 0) {
        func_0x000107c6142c();
        func_0x000107c61574(param_2);
      }
      else {
        uVar2 = *(undefined8 *)(param_2 + 0x38);
        lVar1 = *(long *)(param_2 + 0x40);
        func_0x0001000a8868(param_2 + 0x20,uVar2);
        (**(code **)(lVar1 + 0x18))(uVar4,uVar2,lVar1);
        uVar3 = uVar4;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1010ad624; end: 1010ad62b;  */

/* WARNING: Possible PIC construction at 0x0001010ad5b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ad5d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010ad5b8) */
/* WARNING: Removing unreachable block (ram,0x0001010ad5dc) */

void FUN_1010ad624(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c42454();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_100c70ba8(0);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar5 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar5 != 0) {
      func_0x000107c614f0(*(undefined8 *)(lVar5 + 0x48));
      func_0x000100bc7fa4();
      uVar4 = uVar3;
      FUN_1010ad8c4();
      if (*(long *)(uVar4 + 0x10) == 0) {
        func_0x000107c6142c();
        func_0x000107c61574(lVar5);
      }
      else {
        uVar2 = *(undefined8 *)(lVar5 + 0x38);
        lVar1 = *(long *)(lVar5 + 0x40);
        func_0x0001000a8868(lVar5 + 0x20,uVar2);
        (**(code **)(lVar1 + 0x18))(uVar4,uVar2,lVar1);
        uVar3 = uVar4;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1010ad62c; end: 1010ad687;  */

void FUN_1010ad62c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1010ad690(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1010ad688; end: 1010ad68f;  */

void FUN_1010ad688(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1010ad690(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1010ad690; end: 1010ad877;  */

void FUN_1010ad690(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100bc7fa4();
  puVar2 = &UNK_110380328;
  func_0x000107c613fc(&UNK_110380328,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1010ae008;
  *(long *)(puVar2 + 0x18) = unaff_x20;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1010ae2b8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1010ae2d8;
  puStack_78 = &UNK_110380340;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110380378;
  func_0x000107c613fc(&UNK_110380378,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1010ae384;
  *(long *)(puVar4 + 0x18) = unaff_x20;
  pcStack_70 = FUN_1010ae388;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100de6bdc;
  puStack_78 = &UNK_110380390;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c708(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x66,0x55,0x21,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ad874);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x66,0x5a,0x19,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ad878);
  (*pcVar1)();
}



/* Entry: 1010ad878; end: 1010ad8c3;  */

void FUN_1010ad878(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1010ad8c4; end: 1010ae007;  */

undefined * FUN_1010ad8c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100bc7fa4();
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar14 = *(undefined8 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar14 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar14 = param_1;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (puVar14 != (undefined8 *)0x0) {
    uStack_90 = (ulong)param_1 & 0xffffffffffffff8;
    puVar18 = (undefined8 *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined8 **)(uStack_90 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010adb54);
            (*pcVar2)();
          }
          puVar3 = (undefined8 *)param_1[(long)puVar18 + 4];
          func_0x000107c61174();
          puVar6 = param_2;
        }
        else {
          puVar3 = puVar18;
          puVar6 = param_1;
          func_0x000100ff3f88();
        }
        puVar1 = (undefined8 *)((long)puVar18 + 1);
        if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010adb50);
          (*pcVar2)();
        }
        puVar12 = puVar3;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        puVar4 = puVar12;
        func_0x000107c5faec();
        func_0x000107c61170(puVar12);
        param_2 = &uStack_88;
        func_0x000107c61428(unaff_x20 + 0x60,param_2,0x20,0);
        puVar12 = *(undefined8 **)(unaff_x20 + 0x60);
        if (puVar12[2] != 0) break;
LAB_1010ad934:
        func_0x000107c6142c(puVar6);
        func_0x000107c614a8(&uStack_88);
        func_0x000107c61170(puVar3);
        puVar18 = (undefined8 *)((long)puVar18 + 1);
        if (puVar1 == puVar14) goto LAB_1010adb78;
      }
      func_0x000107c61434(puVar12);
      param_2 = puVar6;
      func_0x000100029284();
      if (((ulong)param_2 & 1) == 0) {
        func_0x000107c6142c(puVar6);
        puVar6 = puVar12;
        goto LAB_1010ad934;
      }
      lVar15 = *(long *)(puVar12[7] + (long)puVar4 * 8);
      func_0x000107c61434(lVar15);
      func_0x000107c614a8(&uStack_88);
      func_0x000107c6142c(puVar12);
      func_0x000107c6142c(puVar6);
      puVar18 = *(undefined8 **)(lVar15 + 0x10);
      if (puVar18 == (undefined8 *)0x0) {
        func_0x000107c6142c(lVar15);
        func_0x000107c61170(puVar3);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar5 = (undefined *)0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        puVar8 = puVar5;
        func_0x000107c610a4();
        puVar7 = puVar8 + -0x11;
        if (0x1f < (long)puVar8) {
          puVar7 = puVar8 + -0x20;
        }
        *(undefined8 **)(puVar5 + 0x10) = puVar18;
        *(long *)(puVar5 + 0x18) = ((long)puVar7 >> 4) << 1;
        puVar6 = &uStack_88;
        FUN_10109b930(puVar6,puVar5 + 0x20,puVar18,lVar15);
        func_0x000107c61170(puVar3);
        param_2 = puStack_80;
        FUN_10109bac0(uStack_88,puStack_80,uStack_78,uStack_70,uStack_68);
        if (puVar6 != puVar18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010adcc0);
          (*pcVar2)();
        }
      }
      puVar7 = puVar9;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        param_2 = (undefined8 *)(*(long *)(puVar9 + 0x10) + 1);
        puVar8 = (undefined *)0x0;
        FUN_1010ab424(0,param_2,1,puVar9);
      }
      uVar11 = *(ulong *)(puVar8 + 0x10);
      puVar18 = (undefined8 *)(uVar11 + 1);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar11) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        param_2 = puVar18;
        FUN_1010ab424(puVar9,puVar18,1,puVar8);
      }
      *(undefined8 **)(puVar9 + 0x10) = puVar18;
      *(undefined **)(puVar9 + uVar11 * 8 + 0x20) = puVar5;
      puVar18 = puVar1;
    } while (puVar1 != puVar14);
  }
LAB_1010adb78:
  puVar5 = PTR___sSSN_11034da80;
  uVar11 = *(ulong *)(puVar9 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar16 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (*(ulong *)(puVar9 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010adcac);
        (*pcVar2)();
      }
      lVar15 = *(long *)(puVar9 + uVar16 * 8 + 0x20);
      uVar13 = *(ulong *)(lVar15 + 0x10);
      lVar17 = *(long *)(puVar8 + 0x10);
      if (SCARRY8(lVar17,uVar13)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010adcb0);
        (*pcVar2)();
      }
      func_0x000107c61434(lVar15);
      puVar7 = puVar8;
      func_0x000107c61558();
      if (((int)puVar7 == 0) ||
         (uVar10 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar10 < (long)(lVar17 + uVar13))) {
        func_0x0001000d182c();
        uVar10 = *(ulong *)(puVar7 + 0x18) >> 1;
        puVar8 = puVar7;
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_1010adb9c;
LAB_1010adc2c:
        if (uVar10 - *(long *)(puVar7 + 0x10) < uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010adcb8);
          (*pcVar2)();
        }
        func_0x000107c6140c(puVar7 + *(long *)(puVar7 + 0x10) * 0x10 + 0x20,lVar15 + 0x20,uVar13,
                            puVar5);
        func_0x000107c6142c(lVar15);
        if (uVar13 != 0) {
          if (SCARRY8(*(long *)(puVar7 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010adcbc);
            (*pcVar2)();
          }
          *(ulong *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + uVar13;
        }
      }
      else {
        puVar7 = puVar8;
        if (*(long *)(lVar15 + 0x10) != 0) goto LAB_1010adc2c;
LAB_1010adb9c:
        func_0x000107c6142c(lVar15);
        puVar7 = puVar8;
        if (uVar13 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010adcb4);
          (*pcVar2)();
        }
      }
      uVar16 = uVar16 + 1;
      puVar8 = puVar7;
    } while (uVar11 != uVar16);
  }
  func_0x000107c6142c(puVar9);
  return puVar7;
}



/* Entry: 1010ae008; end: 1010ae00f;  */

void FUN_1010ae008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  code *pcVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long alStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_80 + lVar1;
  FUN_1010ae010(param_1,param_2);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x10);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0x6b736154746e6968;
  uStack_68 = 0xeb000000003a6449;
  func_0x000107c5fb78(param_1,param_2);
  uVar4 = 0x3a;
  uVar5 = 0xe100000000000000;
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  func_0x000107c5eec4(lVar9);
  func_0x000107c5eeac();
  (**(code **)(lVar8 + 8))(lVar9,lVar3);
  func_0x000107c5fb78(uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  uVar2 = uStack_68;
  uVar5 = uStack_70;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  func_0x0001000a8868(unaff_x20 + 0x20,uVar4);
  pcVar7 = *(code **)(lVar3 + 8);
  *(long *)((long)alStack_90 + lVar1) = lVar3;
  uVar6 = uStack_80;
  (*pcVar7)(param_3,uStack_80,uStack_78,1,0,uVar5,uVar2,uVar4);
  func_0x000107c6142c(uVar2);
  FUN_1010ae408(param_3,uVar6,param_1,param_2);
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 1010ae010; end: 1010ae2b7;  */

void FUN_1010ae010(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  code *pcVar15;
  ulong uVar16;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(unaff_x20 + 0x60,auStack_a0,0x20,0);
  lVar10 = *(long *)(unaff_x20 + 0x60);
  if (*(long *)(lVar10 + 0x10) != 0) {
    func_0x000107c61434(lVar10);
    plVar6 = param_1;
    uVar11 = param_2;
    func_0x000100029284();
    if ((uVar11 & 1) != 0) {
      lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + (long)plVar6 * 8);
      func_0x000107c61434(lVar13);
      func_0x000107c614a8(auStack_a0);
      func_0x000107c6142c(lVar10);
      lVar10 = lVar13;
      FUN_1010af968();
      func_0x000107c6142c(lVar13);
      if (*(long *)(lVar10 + 0x10) != 0) {
        puVar14 = (ulong *)(lVar10 + 0x38);
        uVar9 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
        uVar11 = 0xffffffffffffffff;
        if (-uVar9 < 0x40) {
          uVar11 = ~(-1L << (-uVar9 & 0x3f));
        }
        uVar11 = uVar11 & *puVar14;
        uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
        uVar2 = (ulong)param_1 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar2 = param_2 >> 0x38 & 0xf;
        }
        func_0x000107c6157c(lVar10);
        lVar13 = 0;
        lVar12 = lVar13;
        while( true ) {
          for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
            uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
            uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
            uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            puVar1 = (ulong *)(*(long *)(lVar10 + 0x30) +
                               LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 0x10 + lVar13 * 0x400);
            uVar3 = *puVar1;
            uVar16 = puVar1[1];
            uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
            lVar12 = *(long *)(unaff_x20 + 0x40);
            func_0x0001000a8868(unaff_x20 + 0x20,uVar4);
            pcVar15 = *(code **)(lVar12 + 0x10);
            func_0x000107c61434(uVar16);
            (*pcVar15)(uVar3,uVar16,1,uVar4,lVar12);
            func_0x000107c614f0(uVar8);
            func_0x000100bc7fa4();
            uVar7 = uVar3 & 0xffffffffffff;
            if ((uVar16 & 0x2000000000000000) != 0) {
              uVar7 = uVar16 >> 0x38 & 0xf;
            }
            if (uVar7 != 0 && uVar2 != 0) {
              func_0x000107c61428(unaff_x20 + 0x60,auStack_80,0x21,0);
              pcVar15 = (code *)auStack_a0;
              plVar6 = param_1;
              FUN_1010ae5a0(pcVar15,param_1,param_2);
              if (*plVar6 == 0) {
                (*pcVar15)(auStack_a0,0);
                func_0x000107c614a8(auStack_80);
              }
              else {
                uVar7 = uVar16;
                FUN_1010af1e4(uVar3,uVar16);
                (*pcVar15)(auStack_a0,0);
                func_0x000107c614a8(auStack_80);
                func_0x000107c6142c(uVar16);
                uVar16 = uVar7;
              }
            }
            func_0x000107c6142c(uVar16);
            lVar12 = lVar13;
          }
          bVar5 = SCARRY8(lVar13,1);
          lVar13 = lVar13 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1010ae2b8);
            (*pcVar15)();
          }
          if ((long)(0x3f - uVar9 >> 6) <= lVar13) break;
          uVar11 = puVar14[lVar13];
        }
        FUN_10109bac0(lVar10,puVar14,~uVar9,lVar12,0);
      }
      func_0x000107c61574(lVar10);
      return;
    }
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c614a8(auStack_a0);
  return;
}



/* Entry: 1010ae2b8; end: 1010ae2d7;  */

void FUN_1010ae2b8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1010ae2d8; end: 1010ae383;  */

/* WARNING: Possible PIC construction at 0x0001010ae35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010ae360) */

void FUN_1010ae2d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  uVar3 = uVar2;
  func_0x000107c5faec(param_3);
  if (param_4 != 0) {
    func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  (*pcVar1)(param_2,uVar2,param_3,uVar3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1010ae384; end: 1010ae387;  */

void FUN_1010ae384(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  code *pcVar15;
  ulong uVar16;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  func_0x000107c61428(unaff_x20 + 0x60,auStack_a0,0x20,0);
  lVar10 = *(long *)(unaff_x20 + 0x60);
  if (*(long *)(lVar10 + 0x10) != 0) {
    func_0x000107c61434(lVar10);
    plVar6 = param_1;
    uVar11 = param_2;
    func_0x000100029284();
    if ((uVar11 & 1) != 0) {
      lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + (long)plVar6 * 8);
      func_0x000107c61434(lVar13);
      func_0x000107c614a8(auStack_a0);
      func_0x000107c6142c(lVar10);
      lVar10 = lVar13;
      FUN_1010af968();
      func_0x000107c6142c(lVar13);
      if (*(long *)(lVar10 + 0x10) != 0) {
        puVar14 = (ulong *)(lVar10 + 0x38);
        uVar9 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
        uVar11 = 0xffffffffffffffff;
        if (-uVar9 < 0x40) {
          uVar11 = ~(-1L << (-uVar9 & 0x3f));
        }
        uVar11 = uVar11 & *puVar14;
        uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
        uVar2 = (ulong)param_1 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar2 = param_2 >> 0x38 & 0xf;
        }
        func_0x000107c6157c(lVar10);
        lVar13 = 0;
        lVar12 = lVar13;
        while( true ) {
          for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
            uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
            uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
            uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
            uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
            puVar1 = (ulong *)(*(long *)(lVar10 + 0x30) +
                               LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 0x10 + lVar13 * 0x400);
            uVar3 = *puVar1;
            uVar16 = puVar1[1];
            uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
            lVar12 = *(long *)(unaff_x20 + 0x40);
            func_0x0001000a8868(unaff_x20 + 0x20,uVar4);
            pcVar15 = *(code **)(lVar12 + 0x10);
            func_0x000107c61434(uVar16);
            (*pcVar15)(uVar3,uVar16,1,uVar4,lVar12);
            func_0x000107c614f0(uVar8);
            func_0x000100bc7fa4();
            uVar7 = uVar3 & 0xffffffffffff;
            if ((uVar16 & 0x2000000000000000) != 0) {
              uVar7 = uVar16 >> 0x38 & 0xf;
            }
            if (uVar7 != 0 && uVar2 != 0) {
              func_0x000107c61428(unaff_x20 + 0x60,auStack_80,0x21,0);
              pcVar15 = (code *)auStack_a0;
              plVar6 = param_1;
              FUN_1010ae5a0(pcVar15,param_1,param_2);
              if (*plVar6 == 0) {
                (*pcVar15)(auStack_a0,0);
                func_0x000107c614a8(auStack_80);
              }
              else {
                uVar7 = uVar16;
                FUN_1010af1e4(uVar3,uVar16);
                (*pcVar15)(auStack_a0,0);
                func_0x000107c614a8(auStack_80);
                func_0x000107c6142c(uVar16);
                uVar16 = uVar7;
              }
            }
            func_0x000107c6142c(uVar16);
            lVar12 = lVar13;
          }
          bVar5 = SCARRY8(lVar13,1);
          lVar13 = lVar13 + 1;
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1010ae2b8);
            (*pcVar15)();
          }
          if ((long)(0x3f - uVar9 >> 6) <= lVar13) break;
          uVar11 = puVar14[lVar13];
        }
        FUN_10109bac0(lVar10,puVar14,~uVar9,lVar12,0);
      }
      func_0x000107c61574(lVar10);
      return;
    }
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c614a8(auStack_a0);
  return;
}



/* Entry: 1010ae388; end: 1010ae407;  */

void FUN_1010ae388(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1010ae408; end: 1010ae59f;  */

void FUN_1010ae408(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined *puStack_58;
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100bc7fa4();
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    return;
  }
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + 0x60,auStack_70,0x20,0);
  lVar5 = *(long *)(unaff_x20 + 0x60);
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    uVar1 = param_3;
    uVar3 = param_4;
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      puVar6 = *(undefined **)(*(long *)(lVar5 + 0x38) + uVar1 * 8);
      func_0x000107c61434(puVar6);
      func_0x000107c614a8(auStack_70);
      func_0x000107c6142c(lVar5);
      puStack_58 = puVar6;
      goto LAB_1010ae4e4;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c614a8(auStack_70);
  puStack_58 = PTR___swiftEmptySetSingleton_11034f1d8;
LAB_1010ae4e4:
  func_0x000107c61434(param_2);
  func_0x000100403b00(auStack_70,param_1,param_2);
  func_0x000107c6142c(uStack_68);
  puVar6 = puStack_58;
  func_0x000107c61428(unaff_x20 + 0x60,auStack_70,0x21,0);
  func_0x000107c61434(param_4);
  func_0x000107c61434(puVar6);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
  func_0x000107c61558(uVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = 0x8000000000000000;
  FUN_1010af74c(puVar6,param_3,param_4,uVar2);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar4;
  func_0x000107c614a8(auStack_70);
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 1010ae5a0; end: 1010ae613;  */

code * FUN_1010ae5a0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x7984);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_1010af110();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_1010ae614;
}



/* Entry: 1010ae614; end: 1010ae643;  */

void FUN_1010ae614(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1010ae644; end: 1010ae7f3;  */

void FUN_1010ae644(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_1010ae738:
          if ((long)param_1 < (long)uVar8) goto LAB_1010ae6c0;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_1010ae738;
LAB_1010ae6c0:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ae7f4);
  (*pcVar5)();
}



/* Entry: 1010ae7f4; end: 1010ae963;  */

void FUN_1010ae7f4(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112d5a4b0,&UNK_10d9212e0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_1010ae8d0;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_1010ae8d0:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1010ae964);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1010ae93c;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1010ae93c:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1010ae964; end: 1010aebff;  */

void FUN_1010ae964(long param_1,ulong param_2)

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
  uVar6 = 0x112d5a4b0;
  func_0x0001000285a8(0x112d5a4b0,&UNK_10d9212e0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1010aebcc:
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1010aebfc);
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
          goto LAB_1010aebcc;
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
      func_0x000107c61434(uVar18);
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1010aec00);
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



/* Entry: 1010aec00; end: 1010aed7f;  */

void FUN_1010aec00(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lStack_58;
  
  puVar1 = PTR___sSSN_11034da80;
  lStack_58 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x38);
  lVar4 = param_1;
  lVar5 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar9 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010aed80);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar9) {
          func_0x000107c6157c(param_3);
          FUN_1010aeef0(param_1,param_2,lStack_58,param_3);
          return;
        }
        uVar10 = ((ulong *)(param_3 + 0x38))[lVar9];
        lVar5 = lVar5 + 1;
      } while (uVar10 == 0);
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar9 = lVar5;
    }
    uVar7 = LZCOUNT(uVar6);
    lVar5 = *(long *)(*(long *)(param_3 + 0x30) + (uVar7 | lVar9 << 6) * 0x10 + 8);
    FUN_100e8b654();
    func_0x000107c61434(lVar5);
    uVar6 = 0;
    func_0x000107c6022c(&UNK_10d9212f0,puVar1,puVar1,lVar4,lVar4);
    func_0x000107c6142c();
    lVar4 = lVar5;
    lVar5 = lVar9;
    if ((uVar6 & 1) == 0) {
      uVar6 = (uVar7 & 0xffffffffffffffc0 | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) | 1L << (uVar7 & 0x3f);
      bVar3 = SCARRY8(lStack_58,1);
      lStack_58 = lStack_58 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010aed3c);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 1010aed80; end: 1010aeeef;  */

void FUN_1010aed80(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  long lStack_80;
  
  lStack_80 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x38);
  lVar6 = 0;
  do {
    if (uVar9 == 0) {
      do {
        lVar8 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010aeef0);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar8) {
          func_0x000107c6157c(param_3);
          FUN_1010aeef0(param_1,param_2,lStack_80,param_3);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x38))[lVar8];
        lVar6 = lVar6 + 1;
      } while (uVar9 == 0);
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar8 = lVar6;
    }
    uVar5 = LZCOUNT(uVar4);
    uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x30) + (uVar5 | lVar8 << 6) * 0x10 + 8);
    func_0x000107c61434(uVar1);
    uVar4 = 0;
    (*param_4)();
    func_0x000107c6142c(uVar1);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar8;
    if ((uVar4 & 1) != 0) {
      uVar4 = (uVar5 & 0xffffffffffffffc0 | lVar8 << 6) >> 3;
      *(ulong *)(param_1 + uVar4) = *(ulong *)(param_1 + uVar4) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(lStack_80,1);
      lStack_80 = lStack_80 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010aeea8);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Entry: 1010aeef0; end: 1010af10f;  */

undefined * FUN_1010aeef0(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_a8 [72];
  
  puVar6 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
    puVar6 = param_3;
    func_0x000107c602e8();
    if (param_2 < 1) {
      uVar13 = 0;
    }
    else {
      uVar13 = *param_1;
    }
    lVar9 = 0;
    do {
      if (uVar13 == 0) {
        do {
          lVar14 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1010af108);
            (*pcVar4)();
          }
          if (param_2 <= lVar14) goto LAB_1010aef6c;
          uVar13 = param_1[lVar14];
          lVar9 = lVar9 + 1;
        } while (uVar13 == 0);
        uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
      }
      else {
        uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
        lVar14 = lVar9;
      }
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar8) | lVar14 << 6) * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar6 + 0x28));
      func_0x000107c61434(uVar3);
      puVar7 = auStack_a8;
      func_0x000107c5fb58(puVar7,uVar2,uVar3);
      func_0x000107c606a8();
      uVar12 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
      uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
      uVar10 = uVar11 >> 6;
      uVar8 = -1L << (uVar11 & 0x3f) & (*(ulong *)(puVar6 + uVar10 * 8 + 0x38) ^ 0xffffffffffffffff)
      ;
      if (uVar8 == 0) {
        bVar5 = false;
        uVar8 = 0x3f - uVar12 >> 6;
        do {
          uVar11 = uVar10 + 1;
          if ((uVar11 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1010af10c);
            (*pcVar4)();
          }
          uVar10 = 0;
          if (uVar11 != uVar8) {
            uVar10 = uVar11;
          }
          bVar5 = (bool)(uVar11 == uVar8 | bVar5);
        } while (*(ulong *)(puVar6 + uVar10 * 8 + 0x38) == 0xffffffffffffffff);
        uVar8 = ~*(ulong *)(puVar6 + uVar10 * 8 + 0x38);
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
      }
      else {
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 & 0x7fffffffffffffc0;
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar10 + 0x38) = 1L << (uVar8 & 0x3f) | *(ulong *)(puVar6 + uVar10 + 0x38)
      ;
      puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      bVar5 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1010af110);
        (*pcVar4)();
      }
      lVar9 = lVar14;
    } while (param_3 != (undefined *)0x0);
  }
LAB_1010aef6c:
  func_0x000107c61574(param_4);
  return puVar6;
}



/* Entry: 1010af110; end: 1010af1a7;  */

code * FUN_1010af110(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0x8ecb);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_1010af728();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  func_0x0001010af4bc(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_1010af1a8;
}



/* Entry: 1010af1a8; end: 1010af1e3;  */

void FUN_1010af1a8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 1010af1e4; end: 1010af5f7;  */

undefined1  [16] FUN_1010af1e4(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  ulong auStack_98 [9];
  
  uVar9 = *unaff_x20;
  func_0x000107c6068c(auStack_98,*(undefined8 *)(uVar9 + 0x28));
  puVar3 = auStack_98;
  func_0x000107c5fb58(puVar3,param_1,param_2);
  func_0x000107c606a8();
  uVar5 = -1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f);
  uVar6 = (ulong)puVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar9 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar3 = (ulong *)(*(long *)(uVar9 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar3;
      uVar2 = puVar3[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (func_0x000107c605b8(uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = *unaff_x20;
        func_0x000107c61558();
        auStack_98[0] = *unaff_x20;
        if ((uVar5 & 1) == 0) {
          FUN_100f06404();
        }
        uVar5 = auStack_98[0];
        puVar1 = (undefined8 *)(*(long *)(auStack_98[0] + 0x30) + uVar6 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        func_0x0001010af310(uVar6);
        *unaff_x20 = uVar5;
        goto LAB_1010af2dc;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(uVar9 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_1010af2dc:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 1010af5f8; end: 1010af727;  */

void FUN_1010af5f8(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  param_1 = (long *)*param_1;
  lVar9 = *param_1;
  bVar3 = *(byte *)(param_1 + 5);
  if ((param_2 & 1) == 0) {
    if (lVar9 == 0) goto LAB_1010af688;
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) goto LAB_1010af67c;
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1010af728);
      (*pcVar4)();
    }
  }
  else {
    if (lVar9 == 0) {
LAB_1010af688:
      if ((bVar3 & 1) != 0) {
        lVar6 = param_1[4];
        lVar7 = *(long *)param_1[3];
        func_0x000100bcb1dc(*(long *)(lVar7 + 0x30) + lVar6 * 0x10);
        FUN_1010ae644(lVar6,lVar7);
      }
      goto LAB_1010af6fc;
    }
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) {
LAB_1010af67c:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
      goto LAB_1010af6fc;
    }
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1010af66c);
      (*pcVar4)();
    }
  }
  lVar5 = param_1[2];
  *(long *)(lVar6 + 0x10) = lVar7 + 1;
  func_0x000107c61434(lVar5);
LAB_1010af6fc:
  lVar6 = *param_1;
  func_0x000107c61434(lVar9);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1010af728; end: 1010af74b;  */

undefined1  [16] FUN_1010af728(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x1010af740;
  return auVar1;
}



/* Entry: 1010af74c; end: 1010af89b;  */

void FUN_1010af74c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010af824);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1010ae964(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010af7ec);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1010ae7f4();
    lVar6 = *unaff_x20;
    goto joined_r0x0001010af838;
  }
  lVar6 = *unaff_x20;
joined_r0x0001010af838:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010af89c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1010af89c; end: 1010af967;  */

void FUN_1010af89c(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010af968);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_1010aed80(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010af964);
  (*pcVar1)();
}



/* Entry: 1010af968; end: 1010afb5b;  */

/* WARNING: Possible PIC construction at 0x0001010af9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010afad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010afad4) */
/* WARNING: Removing unreachable block (ram,0x0001010afad8) */
/* WARNING: Removing unreachable block (ram,0x0001010af9c4) */
/* WARNING: Removing unreachable block (ram,0x0001010afa14) */
/* WARNING: Removing unreachable block (ram,0x0001010afa18) */
/* WARNING: Removing unreachable block (ram,0x0001010afa1c) */
/* WARNING: Removing unreachable block (ram,0x0001010afae8) */
/* WARNING: Removing unreachable block (ram,0x0001010afb30) */
/* WARNING: Removing unreachable block (ram,0x0001010afb20) */
/* WARNING: Removing unreachable block (ram,0x0001010afb3c) */
/* WARNING: Removing unreachable block (ram,0x0001010afa34) */
/* WARNING: Removing unreachable block (ram,0x0001010afa50) */
/* WARNING: Removing unreachable block (ram,0x0001010afa78) */
/* WARNING: Removing unreachable block (ram,0x0001010afb54) */
/* WARNING: Removing unreachable block (ram,0x0001010afa7c) */
/* WARNING: Removing unreachable block (ram,0x0001010afb58) */
/* WARNING: Removing unreachable block (ram,0x0001010ad4c0) */
/* WARNING: Removing unreachable block (ram,0x0001010afa94) */

void FUN_1010af968(long param_1)

{
  if (0xd < (*(byte *)(param_1 + 0x20) & 0x3f)) {
    func_0x000100029b9c((1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3f,2,0xf,4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 1010afb5c; end: 1010afb83;  */

void FUN_1010afb5c(long param_1,long param_2)

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



/* Entry: 1010afb84; end: 1010afc23;  */

void FUN_1010afb84(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c42454(uVar3);
    func_0x000107c61180();
    uVar1 = 0;
    FUN_100c70ba8(0);
    uVar2 = uVar3;
    func_0x000107c5fc54(uVar3,uVar1);
    func_0x000107c61170(uVar3);
    FUN_1010afc24(uVar2);
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 1010afc24; end: 1010afd2f;  */

void FUN_1010afc24(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_70 [16];
  
  uVar6 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar5 = uVar6;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  uVar4 = 0;
  do {
    if (uVar5 == uVar4) break;
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010afd1c);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_1 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = uVar4;
      func_0x000100ff3f88(uVar4,param_1);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010afcc4);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c4a72c();
    func_0x000107c61170(uVar2);
    uVar4 = uVar4 + 1;
  } while ((int)uVar3 == 0);
  func_0x000100087bd4(*(undefined8 *)(unaff_x20 + 0x50),0x1010b010c,auStack_70,
                      PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 1010afd30; end: 1010afeff;  */

void FUN_1010afd30(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar7 = *param_1;
  puVar2 = &UNK_1103803c8;
  func_0x000107c613fc(&UNK_1103803c8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1010b0064;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1010b0088;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100de6bdc;
  puStack_78 = &UNK_1103803e0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110380418;
  func_0x000107c613fc(&UNK_110380418,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1010b00ac;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_70 = (code *)0x1010b00f4;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100de6bdc;
  puStack_78 = &UNK_110380430;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c6cc(uVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x6d,0x2f,0x28,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010afefc);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x6d,0x31,0x20,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010aff00);
  (*pcVar1)();
}



/* Entry: 1010aff00; end: 1010aff87;  */

void FUN_1010aff00(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 uStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lStack_60 = param_3;
    uStack_58 = param_4;
    func_0x000100087bd4(param_5,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 1010aff88; end: 1010affff;  */

void FUN_1010aff88(long param_1,byte param_2)

{
  long lVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x58);
  *(byte *)(param_1 + 0x58) = param_2;
  if ((param_2 & 1) != bVar2) {
    func_0x0001000a8868(param_1 + 0x10,*(undefined8 *)(param_1 + 0x28));
    FUN_1010a84b8(0);
    lVar1 = 8;
    if ((param_2 & 1) == 0) {
      lVar1 = 0x10;
    }
    (**(code **)((long)&PTR_DAT_11037fbb8 + lVar1))();
  }
  return;
}



/* Entry: 1010b0000; end: 1010b0087;  */

void FUN_1010b0000(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010b0088; end: 1010b00ab;  */

void FUN_1010b0088(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1010b00ac; end: 1010b00eb;  */

void FUN_1010b00ac(void)

{
  FUN_1010aff00();
  return;
}



/* Entry: 1010b00ec; end: 1010b00f7;  */

void FUN_1010b00ec(long param_1,long param_2)

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



/* Entry: 1010b00f8; end: 1010b011f;  */

void FUN_1010b00f8(void)

{
  func_0x0001010b00d0();
  return;
}



/* Entry: 1010b0120; end: 1010b012b; -[SCLensHintsControllerEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0120(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5a580;
  func_0x000107c61428(param_1 + _DAT_112d5a580,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010b012c; end: 1010b0137; -[SCLensHintsControllerEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b012c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5a580;
  func_0x000107c61428(param_1 + _DAT_112d5a580,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010b0138; end: 1010b0143; -[SCLensHintsControllerEntryPoint lensProcessingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0138(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5a588;
  func_0x000107c61428(param_1 + _DAT_112d5a588,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010b0144; end: 1010b014f; -[SCLensHintsControllerEntryPoint setLensProcessingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0144(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5a588;
  func_0x000107c61428(param_1 + _DAT_112d5a588,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010b0150; end: 1010b015b; -[SCLensHintsControllerEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0150(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5a590;
  func_0x000107c61428(param_1 + _DAT_112d5a590,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010b015c; end: 1010b0167; -[SCLensHintsControllerEntryPoint setCameraUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b015c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5a590;
  func_0x000107c61428(param_1 + _DAT_112d5a590,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010b0168; end: 1010b0173; -[SCLensHintsControllerEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0168(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5a598;
  func_0x000107c61428(param_1 + _DAT_112d5a598,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010b0174; end: 1010b017f; -[SCLensHintsControllerEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5a598;
  func_0x000107c61428(param_1 + _DAT_112d5a598,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010b0180; end: 1010b018b; -[SCLensHintsControllerEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0180(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5a5a0;
  func_0x000107c61428(param_1 + _DAT_112d5a5a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010b018c; end: 1010b0197; -[SCLensHintsControllerEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b018c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5a5a0;
  func_0x000107c61428(param_1 + _DAT_112d5a5a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010b0198; end: 1010b01a3; -[SCLensHintsControllerEntryPoint lensHintProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0198(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5a5a8;
  func_0x000107c61428(param_1 + _DAT_112d5a5a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010b01a4; end: 1010b01af; -[SCLensHintsControllerEntryPoint setLensHintProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b01a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5a5a8;
  func_0x000107c61428(param_1 + _DAT_112d5a5a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010b01b0; end: 1010b01bb; -[SCLensHintsControllerEntryPoint voiceMLLensAppEventsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b01b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5a5b0;
  func_0x000107c61428(param_1 + _DAT_112d5a5b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010b01bc; end: 1010b01ff;  */

void FUN_1010b01bc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010b0200; end: 1010b020b; -[SCLensHintsControllerEntryPoint setVoiceMLLensAppEventsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0200(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5a5b0;
  func_0x000107c61428(param_1 + _DAT_112d5a5b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010b020c; end: 1010b025f;  */

void FUN_1010b020c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010b0260; end: 1010b04e7;  */

/* WARNING: Possible PIC construction at 0x0001010b03ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b03bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b03cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b03dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b04ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b04bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b047c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b048c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b045c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b046c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b044c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010b0470) */
/* WARNING: Removing unreachable block (ram,0x0001010b0460) */
/* WARNING: Removing unreachable block (ram,0x0001010b0490) */
/* WARNING: Removing unreachable block (ram,0x0001010b0480) */
/* WARNING: Removing unreachable block (ram,0x0001010b04c0) */
/* WARNING: Removing unreachable block (ram,0x0001010b04b0) */
/* WARNING: Removing unreachable block (ram,0x0001010b03e0) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001010b03d0) */
/* WARNING: Removing unreachable block (ram,0x0001010b03c0) */
/* WARNING: Removing unreachable block (ram,0x0001010b03b0) */
/* WARNING: Removing unreachable block (ram,0x0001010b0450) */

void FUN_1010b0260(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c4b364();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c3f2a4();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c61170(lVar6);
        lVar6 = lVar1;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c3f284();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar6);
          lVar6 = lVar1;
        }
        else {
          lVar4 = unaff_x20;
          func_0x000107c4b2f4();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c4b1b4();
            func_0x000107c61180();
            if (lVar5 != 0) {
              func_0x000107c5e018();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar6);
                lVar6 = lVar1;
              }
              else {
                lVar6 = 0;
                FUN_1010a54fc();
                func_0x000107c613fc();
                *(undefined8 *)(lVar6 + 0x48) = 0;
                *(undefined8 *)(lVar6 + 0x40) = 0;
                *(undefined8 *)(lVar6 + 0x58) = 0;
                *(undefined8 *)(lVar6 + 0x50) = 0;
                *(undefined8 *)(lVar6 + 0x60) = 0;
                *(long *)(lVar6 + 0x10) = lVar1;
                *(long *)(lVar6 + 0x18) = lVar2;
                *(long *)(lVar6 + 0x20) = lVar4;
                *(long *)(lVar6 + 0x28) = lVar5;
                *(long *)(lVar6 + 0x30) = unaff_x20;
                *(long *)(lVar6 + 0x38) = lVar3;
                func_0x000107c61174(lVar1);
                func_0x000107c61174(lVar2);
                func_0x000107c61174(lVar3);
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(unaff_x20);
                FUN_1010a512c();
                lVar6 = unaff_x20;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 1010b04e8; end: 1010b050f; -[SCLensHintsControllerEntryPoint begin] */

void FUN_1010b04e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010b0260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010b0510; end: 1010b0603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0510(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d5a5b8);
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + 0x40,auStack_58,0,0);
    if (*(long *)(lVar2 + 0x58) != 0) {
      plVar1 = (long *)(lVar2 + 0x40);
      FUN_1010b09f4();
      lVar4 = *plVar1;
      uVar3 = *(undefined8 *)(lVar4 + _DAT_112d59e38);
      *(undefined8 *)(lVar4 + _DAT_112d59e38) = 0;
      func_0x000107c6157c(lVar2);
      func_0x000107c61574(uVar3);
      uVar3 = *(undefined8 *)(lVar4 + _DAT_112d59e40);
      *(undefined8 *)(lVar4 + _DAT_112d59e40) = 0;
      func_0x000107c61574(uVar3);
      uVar3 = *(undefined8 *)(lVar4 + _DAT_112d59e48);
      *(undefined8 *)(lVar4 + _DAT_112d59e48) = 0;
      func_0x000107c61574(uVar3);
      uVar3 = *(undefined8 *)(lVar4 + _DAT_112d59e30);
      *(undefined8 *)(lVar4 + _DAT_112d59e30) = 0;
      func_0x000107c61574(lVar2);
      func_0x000107c61574(uVar3);
    }
  }
  func_0x000107c61154(&stack0xffffffffffffff98,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1010b0604; end: 1010b0637; -[SCLensHintsControllerEntryPoint end] */

void FUN_1010b0604(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1010b0510();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1010b0638; end: 1010b09f3;  */

void FUN_1010b0638(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_2 != -0x2fffffffffffffee || param_3 != -0x7ffffffef10ef650) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10dc330)) ||
         (func_0x000107c605b8(0xd000000000000016,0x800000010ef23cd0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_1010b09f4(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55e20();
      }
      else {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ecf90)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0x49556172656d6163;
            if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
               (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_1010b09f4(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c530ec();
            }
            else {
              uVar2 = 0xd000000000000015;
              if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a10)) ||
                 (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_1010b09f4(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55df4();
              }
              else {
                uVar2 = 0xd000000000000019;
                if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10dc310)) ||
                   (func_0x000107c605b8(0xd000000000000019,0x800000010ef23cf0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  FUN_1010b09f4(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55d60();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10dc2f0)) &&
                     (func_0x000107c605b8(0xd00000000000001c,0x800000010ef23d10,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "LensHintController/SCLensHintsControllerEntryPoint.swift",
                                        0x38,2,0x3f,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010b09f4);
                    (*pcVar1)();
                  }
                  FUN_1010b09f4(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5a5f8();
                }
              }
            }
            goto LAB_1010b06c8;
          }
        }
        FUN_1010b09f4(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53104();
      }
      goto LAB_1010b06c8;
    }
  }
  FUN_1010b09f4(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_1010b06c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010b09f4; end: 1010b0a17;  */

long * FUN_1010b09f4(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 1010b0a18; end: 1010b0ac3; -[SCLensHintsControllerEntryPoint setValue:forIvarName:] */

void FUN_1010b0a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1010b0638(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010b0ac4; end: 1010b0b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0ac4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5a580,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5a588,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5a590,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5a598,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5a5a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5a5a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5a5b0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5a5b8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010b0b9c; end: 1010b0bbb; -[SCLensHintsControllerEntryPoint init] */

void FUN_1010b0b9c(void)

{
  FUN_1010b0ac4();
  return;
}



/* Entry: 1010b0bbc; end: 1010b0bef;  */

void FUN_1010b0bbc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010b0bf0; end: 1010b0c87; -[SCLensHintsControllerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b0bf0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5a580);
  func_0x000107c61610(param_1 + _DAT_112d5a588);
  func_0x000107c61610(param_1 + _DAT_112d5a590);
  func_0x000107c61610(param_1 + _DAT_112d5a598);
  func_0x000107c61610(param_1 + _DAT_112d5a5a0);
  func_0x000107c61610(param_1 + _DAT_112d5a5a8);
  func_0x000107c61610(param_1 + _DAT_112d5a5b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5a5b8));
  return;
}



/* Entry: 1010b0c88; end: 1010b0ca7;  */

void FUN_1010b0c88(void)

{
  func_0x000107c61168(&PTR_PTR_1127ae140);
  return;
}



/* Entry: 1010b0ca8; end: 1010b11cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1010b0ca8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  func_0x000107c613fc();
  uVar13 = *(undefined8 *)(param_3 + _DAT_11303ff30);
  func_0x0001000285a8(0x112d5a5e8,&UNK_10d921370);
  func_0x000107c6157c(uVar13);
  uVar9 = param_4;
  func_0x000107c5cdc8();
  func_0x000107c61180();
  uVar1 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  func_0x0001000285a8(0x112d5a5f0,&UNK_10d921378);
  uVar2 = *(undefined8 *)(param_5 + _DAT_1130354a0);
  func_0x000107c61174(uVar2);
  uVar9 = uVar2;
  func_0x000100759c94();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar2 = param_6;
  func_0x000107c4b2ec(param_6);
  func_0x000107c61180();
  uVar6 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  uVar2 = param_1;
  func_0x000107c3dff0(param_1);
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(param_7 + _DAT_112fcab48);
  uVar12 = *(undefined8 *)(param_7 + _DAT_112fcab60);
  func_0x0001000285a8(0x112d5a600,&UNK_10d921388);
  uVar10 = *(undefined8 *)(param_8 + _DAT_113074f68);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174(uVar10);
  uVar3 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
  uVar10 = param_9;
  func_0x000107c4af30();
  func_0x000107c61180();
  uVar4 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  uVar10 = 0;
  FUN_1010b94bc(0);
  func_0x000107c610f8();
  FUN_1010b4c88(uVar10,uVar13,uVar1,uVar9,uVar6,uVar2,uVar11,uVar12,uVar3,uVar4);
  if (lRam0000000112d5a780 != -1) {
    func_0x000107c61568(0x112d5a780,0x1010b16e0);
  }
  uVar2 = uRam00000001137ff1b0;
  uVar1 = uRam00000001137ff1a8;
  puVar5 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8(PTR_PTR_1126b1cb0);
  func_0x000107c61438(uVar2,2);
  func_0x000107c61174(uVar13);
  uVar9 = uVar1;
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  uVar6 = 0x65672f636973756d;
  func_0x000107c5fadc(0x65672f636973756d,0xef73636972794c74);
  func_0x000107c46c6c(puVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  uVar9 = param_1;
  func_0x000107c5d7e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar9);
  puVar7 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8(PTR_PTR_1126b1cb0);
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar13);
  uVar6 = uVar1;
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  uVar9 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef23d70);
  func_0x000107c46c6c(puVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  uVar9 = param_1;
  func_0x000107c5d7e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar9);
  puVar8 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8(PTR_PTR_1126b1cb0);
  func_0x000107c61174(uVar13);
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef23d90);
  func_0x000107c46c6c(puVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar9);
  uVar9 = param_1;
  func_0x000107c5d7e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  return unaff_x20;
}



/* Entry: 1010b11cc; end: 1010b11e7;  */

void FUN_1010b11cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010b11e8; end: 1010b12fb;  */

undefined * FUN_1010b11e8(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d5a6a8,&UNK_10d9869e0);
    puVar8 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar12 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar12[-3];
      uVar5 = puVar12[-2];
      uVar4 = puVar12[-1];
      uVar6 = *puVar12;
      func_0x000107c61434(uVar5);
      func_0x00010006c00c(uVar4,uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      func_0x000100029284();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1010b12f8);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1010b12fc);
        (*pcVar7)();
      }
      puVar12 = puVar12 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 1010b12fc; end: 1010b131b;  */

void FUN_1010b12fc(void)

{
  func_0x000107c61168(&PTR_PTR_112d5a650);
  return;
}



/* Entry: 1010b131c; end: 1010b139f;  */

undefined8
FUN_1010b131c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1010b13bc(param_1,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 1010b13a0; end: 1010b13bb;  */

void FUN_1010b13a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010b13bc; end: 1010b16bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1010b13bc(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(param_2 + _DAT_112fe84d0);
  uVar8 = *(undefined8 *)(param_3 + _DAT_112fcab00);
  FUN_1010b2fd4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  FUN_1010b1a58(uVar7,uVar8);
  if (lRam0000000112d5a780 != -1) {
    func_0x000107c61568(0x112d5a780,0x1010b16e0);
  }
  uVar1 = uRam00000001137ff1b0;
  uVar6 = uRam00000001137ff1a8;
  puVar2 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8(PTR_PTR_1126b1cb0);
  func_0x000107c61438(uVar1,2);
  func_0x000107c61174(uVar7);
  uVar8 = uVar6;
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  uVar3 = 0x65672f636973756d;
  func_0x000107c5fadc(0x65672f636973756d,0xef73636972794c74);
  func_0x000107c46c6c(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  uVar8 = param_1;
  func_0x000107c5d7e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar8);
  puVar4 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8(PTR_PTR_1126b1cb0);
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar7);
  uVar3 = uVar6;
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  uVar8 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef23d70);
  func_0x000107c46c6c(puVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  uVar8 = param_1;
  func_0x000107c5d7e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar8);
  puVar5 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8(PTR_PTR_1126b1cb0);
  func_0x000107c61174(uVar7);
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef23d90);
  func_0x000107c46c6c(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c5d7e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 1010b16c0; end: 1010b1737;  */

void FUN_1010b16c0(void)

{
  func_0x000107c61168(&PTR_PTR_112d5a6f0);
  return;
}



/* Entry: 1010b1738; end: 1010b199f;  */

undefined * FUN_1010b1738(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = 0xea00000000007363;
  func_0x000100403514(0,3,0);
  uVar8 = 0x800000010ef23db0;
  if (cRam0000000112d5a770 == '\0') {
    uVar6 = 0x6972794c7465672f;
    uVar9 = 0xea00000000007363;
  }
  else if (cRam0000000112d5a770 == '\x01') {
    uVar6 = 0xd000000000000013;
    uVar9 = uVar8;
  }
  else {
    uVar6 = 0x6e756f537465672f;
    uVar9 = 0xed0000636e795364;
  }
  uVar3 = *(ulong *)(puVar4 + 0x10);
  uVar1 = uVar3 + 1;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar3) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar1,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + uVar3 * 0x10 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + uVar3 * 0x10 + 0x28) = uVar9;
  if (cRam0000000112d5a771 == '\0') {
    uVar6 = 0x6972794c7465672f;
    uVar9 = 0xea00000000007363;
  }
  else if (cRam0000000112d5a771 == '\x01') {
    uVar6 = 0xd000000000000013;
    uVar9 = uVar8;
  }
  else {
    uVar6 = 0x6e756f537465672f;
    uVar9 = 0xed0000636e795364;
  }
  uVar2 = uVar3 + 2;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar9;
  if (cRam0000000112d5a772 == '\0') {
    uVar9 = 0x6972794c7465672f;
  }
  else if (cRam0000000112d5a772 == '\x01') {
    uVar9 = 0xd000000000000013;
    uVar7 = uVar8;
  }
  else {
    uVar9 = 0x6e756f537465672f;
    uVar7 = 0xed0000636e795364;
  }
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
    func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar3 + 3,1);
  }
  *(ulong *)(puVar4 + 0x10) = uVar3 + 3;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar9;
  *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar7;
  puVar5 = puVar4;
  func_0x000100403a6c(puVar4);
  func_0x000107c61574(puVar4);
  return puVar5;
}



/* Entry: 1010b19a0; end: 1010b1a57;  */

void FUN_1010b19a0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1010b1a58(param_1,param_2);
  return;
}



/* Entry: 1010b1a58; end: 1010b1ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1010b1a58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined *puStack_58;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d5a790) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a798) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d5a7a0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d5a7a8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  lVar2 = _DAT_112d5a7b0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d5a7b8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1010b11e8();
  uVar3 = 0x112d5a788;
  puStack_58 = puVar4;
  func_0x0001000285a8(0x112d5a788,&UNK_10d921460);
  func_0x000107c613fc();
  ppuVar5 = &puStack_58;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar5;
  lVar2 = _DAT_112d5a7c0;
  FUN_1010b11e8();
  puStack_58 = puVar6;
  func_0x000107c613fc(uVar3,0x20,7);
  ppuVar5 = &puStack_58;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d5a7c8) = param_2;
  puVar6 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_2);
  puVar7 = &stack0xffffffffffffff98;
  func_0x000107c61154(puVar7,puVar6);
  func_0x000107c61180();
  func_0x0001010b1bf4(param_1);
  func_0x000107c61170(puVar7);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar7;
}



/* Entry: 1010b1ddc; end: 1010b1e57; -[_TtC34ExternalMusicPlaybackEventProvider41ExternalMusicPlaybackOffscreenUriDelegate handleWithRequest:completion:] */

/* WARNING: Possible PIC construction at 0x0001010b1e40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010b1e44) */

void FUN_1010b1ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001010b43ac(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010b1e58; end: 1010b1ef3; -[_TtC34ExternalMusicPlaybackEventProvider41ExternalMusicPlaybackOffscreenUriDelegate reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b1e58(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d5a7a0);
  uVar7 = *puVar1;
  uVar4 = puVar1[1];
  uVar2 = puVar1[2];
  uVar5 = puVar1[3];
  uVar3 = puVar1[4];
  uVar6 = puVar1[5];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  func_0x000107c61174();
  func_0x0001010b2f98(uVar7,uVar4,uVar2,uVar5,uVar3,uVar6);
  puVar1 = (undefined8 *)(param_1 + _DAT_112d5a7a8);
  uVar7 = puVar1[1];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 1010b1ef4; end: 1010b20bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b1ef4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_40 = param_1[4];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x3e);
    uStack_88 = uStack_b0;
    uStack_80 = uStack_a8;
    func_0x000107c5fb78(0xd00000000000003c,0x800000010ef23fa0);
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_90 = param_1[4];
    func_0x000107c603d0(&uStack_b0,&uStack_88,&UNK_1106cc9f0,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_80);
    uVar3 = uStack_48;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c3fefc(uVar3);
    func_0x000107c61170(puVar2);
  }
  else {
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x1e);
    uStack_88 = uStack_b0;
    uStack_80 = uStack_a8;
    func_0x000107c5fb78(0xd00000000000001c,0x800000010ef23fe0);
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_90 = param_1[4];
    func_0x000107c603d0(&uStack_b0,&uStack_88,&UNK_1106cc9f0,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_80);
    FUN_1010b20c0(&uStack_60);
    puVar1 = (undefined8 *)(param_2 + _DAT_112d5a7a8);
    uVar3 = puVar1[1];
    *puVar1 = uStack_60;
    puVar1[1] = uStack_58;
    puVar1[2] = uStack_50;
    func_0x000107c61434();
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 1010b20c0; end: 1010b21e7;  */

void FUN_1010b20c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = unaff_x20;
  func_0x000107c614f0();
  uVar2 = param_1[4];
  func_0x000107c61174(uVar2);
  uVar3 = uVar2;
  func_0x00010007c020();
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uVar5 = param_1[3];
  puVar4 = &UNK_110380728;
  func_0x000107c613fc(&UNK_110380728,0x48,7);
  uVar6 = *param_1;
  uVar8 = param_1[3];
  uVar7 = param_1[2];
  *(undefined8 *)(puVar4 + 0x18) = param_1[1];
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  *(undefined8 *)(puVar4 + 0x30) = param_1[4];
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x40) = uVar1;
  func_0x000107c61174(uVar2);
  func_0x000100402194(&uStack_70,auStack_80);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar1 = uVar3;
  func_0x0001001ca524(uVar3,param_2,param_3,3,0,0,&UNK_10d9214e8,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar1);
  func_0x00010007d980(uVar3,param_2,param_3);
  return;
}



/* Entry: 1010b21e8; end: 1010b22d7;  */

void FUN_1010b21e8(undefined8 *param_1,long param_2)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_40 = *(undefined1 *)(param_1 + 4);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x1b);
    uStack_88 = uStack_b0;
    uStack_80 = uStack_a8;
    func_0x000107c5fb78(0xd000000000000019,0x800000010ef23f40);
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_90 = *(undefined1 *)(param_1 + 4);
    func_0x000107c603d0(&uStack_b0,&uStack_88,&UNK_1106cc968,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c6142c(uStack_80);
    FUN_1010b22d8(&uStack_60);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1010b22d8; end: 1010b2743;  */

/* WARNING: Removing unreachable block (ram,0x0001010b2474) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b22d8(ulong *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  ulong uStack_c8;
  code *pcStack_c0;
  ulong uStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar1 = (ulong *)(unaff_x20 + _DAT_112d5a7a0);
  uVar13 = puVar1[1];
  if (uVar13 != 0) {
    uVar4 = *puVar1;
    pcVar2 = (code *)puVar1[4];
    uVar10 = puVar1[5];
    puVar6 = (undefined *)puVar1[2];
    uVar5 = puVar1[3];
    if (((uVar4 == *param_1 && uVar13 == param_1[1]) ||
        (func_0x000107c605b8(uVar4,uVar13,*param_1,param_1[1],0), (uVar4 & 1) != 0)) &&
       (puVar6 == (undefined *)param_1[2])) {
      uVar15 = param_1[3];
      uVar4 = uVar15;
      if ((uVar15 & 0xfffffffffffff) != 0) {
        uVar4 = 0;
      }
      if (((uVar15 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
        uVar4 = uVar15;
      }
      uVar15 = param_1[4];
      pcStack_c0 = pcVar2;
      puStack_a8 = puVar6;
      func_0x000107c61434(uVar13);
      func_0x000107c61174();
      uStack_b8 = uVar5;
      func_0x000107c6157c(uVar10);
      puVar6 = PTR___ss6UInt64VN_11034f048;
      puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c();
      uStack_98 = 0x474e4959414c50;
      if ((char)uVar15 != '\0') {
        uStack_98 = 0x444550504f5453;
      }
      puVar7 = &DAT_112d5a798;
      uStack_c8 = uVar10;
      func_0x0001010b19e0(&DAT_112d5a798,PTR___s10Foundation11JSONEncoderCMa_1103503e0,
                          PTR___s10Foundation11JSONEncoderCACycfc_1103503d8);
      uStack_90 = 0xe700000000000000;
      uStack_78 = 0;
      puVar8 = puVar7;
      puStack_a8 = puVar6;
      puStack_a0 = puVar11;
      uStack_88 = uVar4;
      uStack_80 = uVar4;
      FUN_1010b49e8();
      puVar6 = &UNK_110380e98;
      ppuVar9 = &puStack_a8;
      func_0x000107c5eb4c(ppuVar9,&UNK_110380e98,puVar8);
      func_0x000107c6142c(0xe700000000000000);
      func_0x000107c6142c(puVar11);
      func_0x000107c61574(puVar7);
      uVar10 = uStack_b8;
      func_0x000107c5d7e0(uStack_b8);
      func_0x000107c61180();
      func_0x000107c5edb4(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c61170(uVar10);
      uStack_e0 = 200;
      ppuStack_d8 = ppuVar9;
      func_0x00010006c00c(ppuVar9,puVar6);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8();
      puVar7 = PTR_PTR_1126b1ce0;
      puStack_d0 = puVar11;
      func_0x000107c610f8();
      puStack_e8 = puVar7;
      func_0x000107c5ed90();
      uVar12 = 0xd00000000000001f;
      func_0x000107c5fadc(0xd00000000000001f,0x800000010ef23f80);
      func_0x000107c5f9dc(puVar11,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90
                         );
      func_0x000107c5ee20(ppuVar9,puVar6);
      puVar8 = puStack_e8;
      func_0x000107c4913c(puStack_e8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(ppuVar9);
      uVar10 = uStack_c8;
      (*pcStack_c0)(puVar8);
      func_0x000107c61574(uVar10);
      func_0x000107c61170(uStack_b8);
      func_0x000107c6142c(uVar13);
      func_0x000107c6142c(puStack_d0);
      func_0x000107c61170(puVar8);
      ppuVar9 = ppuStack_d8;
      func_0x00010006c090(ppuStack_d8,puVar6);
      func_0x00010006c090(ppuVar9,puVar6);
      (**(code **)(lVar14 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    }
  }
  return;
}



/* Entry: 1010b2744; end: 1010b2797;  */

void FUN_1010b2744(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(unaff_x22 + 0x20) = param_2;
  *(long *)(unaff_x22 + 0x28) = lVar2;
  plVar1 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1010b2798;
  plVar1[0x1e] = lVar2;
  plVar1[0x1f] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010b2964,0,0);
  return;
}



/* Entry: 1010b2798; end: 1010b27e7;  */

void FUN_1010b2798(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x38) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010b27e8,0,0);
  return;
}



/* Entry: 1010b27e8; end: 1010b294b;  */

void FUN_1010b27e8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x38) & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c602fc(0x2c);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
    puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    func_0x000107c6142c(0x800000010ef24000);
  }
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c602fc(0x21);
  func_0x000107c6142c(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
  puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c6142c(0x800000010ef24030);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(uVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001010b2948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1010b294c; end: 1010b2963;  */

void FUN_1010b294c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xf8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010b2964,0,0);
  return;
}



/* Entry: 1010b2964; end: 1010b29fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b2964(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar2 = *(long *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x108) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1010b29fc;
                    /* WARNING: Could not recover jumptable at 0x0001010b29f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0xf0),uVar3,lVar2);
  return;
}



/* Entry: 1010b29fc; end: 1010b2a63;  */

void FUN_1010b29fc(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x100);
  *(undefined8 *)(lVar3 + 0x110) = param_1;
  *(long *)(lVar3 + 0x118) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x108));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1010b2a64;
  }
  else {
    pcVar2 = FUN_1010b2c2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1010b2a64; end: 1010b2c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b2a64(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  lVar1 = *(long *)(unaff_x22 + 0x118);
  FUN_1010bd674(unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x110));
  puVar3 = &DAT_112d5a798;
  func_0x0001010b19e0(&DAT_112d5a798,PTR___s10Foundation11JSONEncoderCMa_1103503e0,
                      PTR___s10Foundation11JSONEncoderCACycfc_1103503d8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x68);
  puVar4 = puVar3;
  func_0x0001010b4acc();
  puVar6 = &UNK_110381058;
  lVar5 = unaff_x22 + 0x70;
  func_0x000107c5eb4c(lVar5,&UNK_110381058,puVar4);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
  if (lVar1 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar2 = *(long *)(unaff_x22 + 0xf8);
    func_0x000107c61574(puVar3);
    FUN_1010b4b0c(unaff_x22 + 0x38);
    uVar7 = *(undefined8 *)(lVar2 + _DAT_112d5a7c0);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
    *(long *)(unaff_x22 + 0x28) = lVar5;
    *(undefined **)(unaff_x22 + 0x30) = puVar6;
    func_0x000107c6157c(uVar7);
    func_0x000100075034(FUN_1010b4b40,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(uVar9);
    func_0x00010006c090(lVar5,puVar6);
    func_0x000107c61574(uVar7);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x000107c614ac(lVar1);
    func_0x000107c61574(puVar3);
    FUN_1010b4b0c(unaff_x22 + 0x38);
    func_0x000107c602fc(0x33);
    func_0x000107c5fb78(0xd000000000000031,0x800000010ef240a0);
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
    puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    func_0x000107c61170(uVar9);
    func_0x000107c6142c(0xe000000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x0001010b2c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 1010b2c2c; end: 1010b2ddf;  */

void FUN_1010b2c2c(void)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000107c614b0();
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = unaff_x22 + 0x120;
  func_0x000107c6147c(uVar2,(undefined8 *)(unaff_x22 + 0xd0),uVar4,&UNK_1106bf798,0);
  if ((uVar2 & 1) != 0) {
    bVar1 = *(byte *)(unaff_x22 + 0x120) >> 6;
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
        func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
        func_0x000107c602fc(0x2c);
        func_0x000107c6142c(0xe000000000000000);
        *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
        puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                            PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar3);
        func_0x000107c6142c(0x800000010ef24070);
      }
      else {
        func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x118));
      }
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xd0));
      goto LAB_1010b2dc0;
    }
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c614cc(uVar5,unaff_x22 + 0xd8,unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0xb0),uVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c614ac(uVar5);
  func_0x000107c6142c(0x800000010ef24050);
LAB_1010b2dc0:
                    /* WARNING: Could not recover jumptable at 0x0001010b2ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1010b2de0; end: 1010b2e8f;  */

void FUN_1010b2de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR___ss6UInt64VN_11034f048;
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x00010006c00c(param_3,param_4);
  uVar2 = *param_1;
  func_0x000107c61558(uVar2);
  uVar4 = *param_1;
  FUN_1010b8f18(param_3,param_4,puVar1,puVar3,uVar2);
  func_0x000107c6142c(puVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 1010b2e90; end: 1010b2eef; -[_TtC34ExternalMusicPlaybackEventProvider41ExternalMusicPlaybackOffscreenUriDelegate init] */

void FUN_1010b2e90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicPlaybackEventProvider.ExternalMusicPlaybackOffscreenUriDelegate"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010b2ebc);
  (*pcVar1)();
}



/* Entry: 1010b2ef0; end: 1010b2fd3; -[_TtC34ExternalMusicPlaybackEventProvider41ExternalMusicPlaybackOffscreenUriDelegate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001010b2f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b2f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010b2f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010b2f30) */
/* WARNING: Removing unreachable block (ram,0x0001010b2f10) */
/* WARNING: Removing unreachable block (ram,0x0001010b2f70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010b2ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5a790));
  return;
}


