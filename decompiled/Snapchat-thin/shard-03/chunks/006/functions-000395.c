/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a51614; end: 102a5164f;  */

void FUN_102a51614(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a51650; end: 102a51653;  */

void FUN_102a51650(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  long extraout_x12;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined *apuStack_b8 [2];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  uStack_f0 = param_3;
  uStack_e8 = param_5;
  puStack_e0 = (undefined *)param_1;
  uStack_d8 = param_2;
  func_0x000107c5f7fc();
  lStack_f8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f8 + 0x40));
  puVar16 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lStack_108 = *(long *)(lVar3 + -8);
  lStack_100 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar12 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eec8();
  lStack_c8 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lStack_c8 + 0x40);
  lStack_c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar12 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar17 - extraout_x12;
  puVar4 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  puStack_d0 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar4 = &UNK_11058ce90;
    func_0x000107c613fc(&UNK_11058ce90,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_6;
    *(undefined8 *)(puVar4 + 0x18) = param_7;
    pcStack_80 = FUN_102a5324c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    ppuStack_90 = (undefined **)&UNK_1000b0c7c;
    puStack_88 = &UNK_11058cea8;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c6157c(param_7);
    func_0x000107c5f808(lVar12);
    puStack_a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar10 = 0x112d4af88;
    FUN_102a53394(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar11 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = uVar11;
    func_0x0001001c7f30();
    func_0x000107c60264(puVar16,&puStack_a8,uVar11,uVar8,lVar2,uVar10);
    func_0x000107c5ffe8(0,lVar12,puVar16,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    (**(code **)(lStack_f8 + 8))(puVar16,lVar2);
    (**(code **)(lStack_108 + 8))(lVar12,lStack_100);
    func_0x000107c61574(puStack_78);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
    lStack_100 = param_6;
    lStack_f8 = param_7;
    func_0x000107c5fadc(uVar10,*(undefined8 *)(unaff_x20 + 0x20));
    puVar4 = puStack_e0;
    func_0x000107c5fadc(puStack_e0,uStack_d8);
    uVar11 = 0;
    if (param_4 != 0) {
      uVar11 = uStack_f0;
      func_0x000107c5fadc(uStack_f0,param_4);
    }
    puVar5 = PTR_PTR_1126b4bc0;
    func_0x000107c610f8();
    *(undefined1 *)(lVar3 + -0x10) = 1;
    func_0x000107c491d0();
    puStack_e0 = puVar5;
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar11);
    lVar18 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c5eec4(lVar3);
    uVar10 = *(undefined8 *)(lVar18 + 0x10);
    ppuStack_90 = (undefined **)lVar3;
    func_0x000107c6157c(uVar10);
    func_0x000100075034(FUN_102a53290,&puStack_a0,PTR___sytN_11034f1b0 + 8);
    uStack_d8 = 0;
    func_0x000107c61574(uVar10);
    puVar4 = &UNK_11058cee0;
    func_0x000107c613fc(&UNK_11058cee0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar18);
    lVar12 = lStack_c0;
    lVar2 = lStack_c8;
    (**(code **)(lStack_c8 + 0x10))(lVar17,lVar3,lStack_c0);
    uVar9 = (ulong)*(byte *)(lVar2 + 0x50);
    uVar13 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
    uVar15 = lVar14 + uVar13 + 7 & 0xfffffffffffffff8;
    puVar5 = &UNK_11058cf08;
    func_0x000107c613fc(&UNK_11058cf08,uVar15 + 0x10,uVar9 | 7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    (**(code **)(lVar2 + 0x20))(puVar5 + uVar13,lVar17,lVar12);
    puVar4 = puStack_e0;
    lVar2 = lStack_f8;
    *(long *)(puVar5 + uVar15) = lStack_100;
    *(long *)((long)(puVar5 + uVar15) + 8) = lStack_f8;
    pcStack_80 = FUN_102a532c8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    ppuStack_90 = (undefined **)FUN_102880cb8;
    puStack_88 = &UNK_11058cf20;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_78;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(puVar5);
    puVar5 = puStack_d0;
    puVar6 = puStack_d0;
    func_0x000107c43070();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    uVar11 = *(undefined8 *)(lVar18 + 0x10);
    ppuStack_90 = &puStack_a8;
    puStack_a8 = puVar6;
    puStack_88 = (undefined *)lVar3;
    pcStack_80 = (code *)lVar18;
    func_0x000107c6157c(uVar11);
    uVar10 = 0x112ee5250;
    func_0x0001000285a8(0x112ee5250,&UNK_10db10218);
    func_0x000100075034(apuStack_b8,FUN_102a53348,&puStack_a0,uVar10);
    func_0x000107c61574(uVar11);
    if (apuStack_b8[0] == (undefined *)0x0) {
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(puVar6);
    }
    else {
      pcVar1 = *(code **)(lVar18 + 0x20);
      puStack_a0 = apuStack_b8[0];
      func_0x000107c615f0(apuStack_b8[0]);
      (*pcVar1)(&puStack_a0);
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(puVar6);
      func_0x000107c615ec(apuStack_b8[0],2);
    }
    (**(code **)(lStack_c8 + 8))(lVar3,lStack_c0);
  }
  return;
}



/* Entry: 102a51654; end: 102a516db;  */

void FUN_102a51654(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112ee5270;
  func_0x0001000285a8(0x112ee5270,&UNK_10db10238);
  func_0x000100075034(&uStack_38,FUN_102a52ea8,0,uVar1);
  func_0x000107c61574(uVar2);
  FUN_102a4fd1c(*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28),uStack_38);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 102a516dc; end: 102a51b8b;  */

/* WARNING: Possible PIC construction at 0x000102a51878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a51970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a5187c) */
/* WARNING: Removing unreachable block (ram,0x000102a51974) */
/* WARNING: Removing unreachable block (ram,0x000102a5197c) */

void FUN_102a516dc(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 == 0) {
    (*param_1)();
  }
  else {
    uVar11 = uVar2;
    func_0x000107c51d0c();
    func_0x000107c61180();
    if (uVar11 != 0) {
      uVar3 = 0;
      FUN_102a535d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar2 = uVar11;
      func_0x000107c5fc54(uVar11,uVar3);
      func_0x000107c61170(uVar11);
      if (uVar2 >> 0x3e == 0) {
        uVar11 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar11 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar11 = uVar2;
        }
        func_0x000107c60480();
      }
      if (uVar11 != 0) {
        uVar9 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
        puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100403514(0,uVar9,0);
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102a519b8);
          (*pcVar1)();
        }
        uVar12 = 0;
        do {
          puVar7 = puStack_90;
          if ((uVar2 & 0xc000000000000001) == 0) {
            uVar4 = *(ulong *)(uVar2 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
            uVar10 = uVar9;
          }
          else {
            uVar4 = uVar12;
            uVar10 = uVar2;
            FUN_102a52360(uVar12,uVar2,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
          }
          func_0x000107c61174();
          uVar5 = uVar4;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          uVar6 = uVar5;
          func_0x000107c5faec();
          uVar9 = uVar10;
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar5);
          uVar5 = *(ulong *)(puVar7 + 0x10);
          uVar4 = uVar5 + 1;
          puStack_90 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
            uVar9 = uVar4;
            func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar4,1);
          }
          uVar12 = uVar12 + 1;
          *(ulong *)(puStack_90 + 0x10) = uVar4;
          *(ulong *)(puStack_90 + uVar5 * 0x10 + 0x20) = uVar6;
          *(ulong *)(puStack_90 + uVar5 * 0x10 + 0x28) = uVar10;
        } while (uVar11 != uVar12);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
      return;
    }
    uVar11 = uVar2;
    func_0x000107c432a4(uVar2);
    func_0x000107c61180();
    puVar7 = &UNK_11058d0c0;
    func_0x000107c613fc(&UNK_11058d0c0,0x20,7);
    *(code **)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = param_2;
    pcStack_70 = FUN_102a5358c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100bcda3c;
    puStack_78 = &UNK_11058d0d8;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_68;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar7);
    func_0x000107c5dc64(uVar11);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar11);
  }
  return;
}



/* Entry: 102a51b8c; end: 102a51b97;  */

/* WARNING: Possible PIC construction at 0x000102a51878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a51970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a5187c) */
/* WARNING: Removing unreachable block (ram,0x000102a51974) */
/* WARNING: Removing unreachable block (ram,0x000102a5197c) */

void FUN_102a51b8c(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar2 == 0) {
    (*param_1)();
  }
  else {
    uVar11 = uVar2;
    func_0x000107c51d0c();
    func_0x000107c61180();
    if (uVar11 != 0) {
      uVar3 = 0;
      FUN_102a535d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar2 = uVar11;
      func_0x000107c5fc54(uVar11,uVar3);
      func_0x000107c61170(uVar11);
      if (uVar2 >> 0x3e == 0) {
        uVar11 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar11 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar11 = uVar2;
        }
        func_0x000107c60480();
      }
      if (uVar11 != 0) {
        uVar9 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
        puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100403514(0,uVar9,0);
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102a519b8);
          (*pcVar1)();
        }
        uVar12 = 0;
        do {
          puVar7 = puStack_90;
          if ((uVar2 & 0xc000000000000001) == 0) {
            uVar4 = *(ulong *)(uVar2 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
            uVar10 = uVar9;
          }
          else {
            uVar4 = uVar12;
            uVar10 = uVar2;
            FUN_102a52360(uVar12,uVar2,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
          }
          func_0x000107c61174();
          uVar5 = uVar4;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          uVar6 = uVar5;
          func_0x000107c5faec();
          uVar9 = uVar10;
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar5);
          uVar5 = *(ulong *)(puVar7 + 0x10);
          uVar4 = uVar5 + 1;
          puStack_90 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
            uVar9 = uVar4;
            func_0x000100403514(1 < *(ulong *)(puVar7 + 0x18),uVar4,1);
          }
          uVar12 = uVar12 + 1;
          *(ulong *)(puStack_90 + 0x10) = uVar4;
          *(ulong *)(puStack_90 + uVar5 * 0x10 + 0x20) = uVar6;
          *(ulong *)(puStack_90 + uVar5 * 0x10 + 0x28) = uVar10;
        } while (uVar11 != uVar12);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
      return;
    }
    uVar11 = uVar2;
    func_0x000107c432a4(uVar2);
    func_0x000107c61180();
    puVar7 = &UNK_11058d0c0;
    func_0x000107c613fc(&UNK_11058d0c0,0x20,7);
    *(code **)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = param_2;
    pcStack_70 = FUN_102a5358c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100bcda3c;
    puStack_78 = &UNK_11058d0d8;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_68;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar7);
    func_0x000107c5dc64(uVar11);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar11);
  }
  return;
}



/* Entry: 102a51b98; end: 102a51ecf;  */

void FUN_102a51b98(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)&uStack_d0 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar7 - extraout_x12;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  lStack_b8 = lVar3;
  if (lVar3 == 0) {
    (*param_3)();
  }
  else {
    lVar12 = *(long *)(unaff_x20 + 0x18);
    pcStack_c0 = param_3;
    func_0x000107c5eec4(lVar11);
    uVar9 = *(undefined8 *)(lVar12 + 0x10);
    plStack_90 = (long *)lVar11;
    func_0x000107c6157c(uVar9);
    uStack_d0 = param_4;
    func_0x000100075034(0x102a533f0,&puStack_a0,PTR___sytN_11034f1b0 + 8);
    uStack_c8 = 0;
    func_0x000107c61574(uVar9);
    func_0x000107c5fadc(param_1,param_2);
    lVar3 = lStack_b8;
    func_0x000107c430c8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar4 = &UNK_11058cf58;
    func_0x000107c613fc(&UNK_11058cf58,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar12);
    (**(code **)(lVar15 + 0x10))(lVar7,lVar11,lVar2);
    uVar8 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar13 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
    puVar5 = &UNK_11058cf80;
    func_0x000107c613fc(&UNK_11058cf80,uVar13 + lVar14,uVar8 | 7);
    uVar9 = uStack_d0;
    *(code **)(puVar5 + 0x10) = pcStack_c0;
    *(undefined8 *)(puVar5 + 0x18) = uStack_d0;
    *(undefined **)(puVar5 + 0x20) = puVar4;
    pcStack_c0 = (code *)lVar15;
    (**(code **)(lVar15 + 0x20))(puVar5 + uVar13,lVar7,lVar2);
    pcStack_80 = FUN_102a53428;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    plStack_90 = (long *)&UNK_100f152a0;
    puStack_88 = &UNK_11058cf98;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_78;
    func_0x000107c6157c(uVar9);
    func_0x000107c61574(puVar4);
    lVar7 = lVar3;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
    uVar10 = *(undefined8 *)(lVar12 + 0x10);
    plStack_90 = &lStack_a8;
    lStack_a8 = lVar7;
    puStack_88 = (undefined *)lVar11;
    pcStack_80 = (code *)lVar12;
    func_0x000107c61174(lVar7);
    func_0x000107c6157c(uVar10);
    uVar9 = 0x112ee5260;
    func_0x0001000285a8(0x112ee5260,&UNK_10dc2a4c0);
    func_0x000100075034(&puStack_b0,FUN_102a5346c,&puStack_a0,uVar9);
    func_0x000107c61574(uVar10);
    if (puStack_b0 == (undefined *)0x0) {
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(lStack_b8);
    }
    else {
      pcVar1 = *(code **)(lVar12 + 0x20);
      puStack_a0 = puStack_b0;
      puVar4 = puStack_b0;
      func_0x000107c61174();
      (*pcVar1)(&puStack_a0);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(lStack_b8);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
    }
    (**(code **)((long)pcStack_c0 + 8))(lVar11,lVar2);
  }
  return;
}



/* Entry: 102a51ed0; end: 102a521b7;  */

void FUN_102a51ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar2 = &UNK_11058cfd0;
  func_0x000107c613fc(&UNK_11058cfd0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar3 = &UNK_11058cff8;
  func_0x000107c613fc(&UNK_11058cff8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x102a534f0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102a534f8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100f15b68;
  puStack_88 = &UNK_11058d010;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar5 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_11058d048;
  func_0x000107c613fc(&UNK_11058d048,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  puVar6 = &UNK_11058d070;
  func_0x000107c613fc(&UNK_11058d070,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x102a53518;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_80 = (code *)0x102a54144;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11058d088;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_78;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61428(param_4 + 0x10,auStack_b8,0,0);
  puVar8 = (undefined *)(param_4 + 0x10);
  func_0x000107c61648();
  if (puVar8 != (undefined *)0x0) {
    uVar11 = *(undefined8 *)(puVar8 + 0x10);
    puStack_90 = param_5;
    puStack_88 = puVar8;
    func_0x000107c6157c(uVar11);
    uVar9 = 0x112ee5260;
    func_0x0001000285a8(0x112ee5260,&UNK_10dc2a4c0);
    func_0x000100075034(&puStack_c0,FUN_102a53540,&puStack_a0,uVar9);
    func_0x000107c61574(uVar11);
    if (puStack_c0 != (undefined *)0x0) {
      pcVar1 = *(code **)(puVar8 + 0x20);
      puStack_a0 = puStack_c0;
      puVar10 = puStack_c0;
      func_0x000107c61174();
      (*pcVar1)(&puStack_a0);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(puVar8);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      goto LAB_102a52124;
    }
    func_0x000107c61574(puVar2);
    puVar2 = puVar8;
  }
  func_0x000107c61574(puVar2);
LAB_102a52124:
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x6a,0x12a,0x25,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a521b4);
    (*pcVar1)();
  }
  puVar2 = puVar6;
  func_0x000107c61544(puVar6,"",0x6a,300,0x1d,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a521b8);
    (*pcVar1)();
  }
  return;
}



/* Entry: 102a521b8; end: 102a5220f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102a521b8(ulong param_1,code *param_2)

{
  uint uVar1;
  code *pcVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
    pcVar2 = (code *)0xf000000000000000;
  }
  else {
    pcVar2 = param_2;
    func_0x000107c5ee30();
  }
  (*param_2)(param_1,pcVar2);
  if ((ulong)pcVar2 >> 0x3c < 0xf) {
    uVar1 = (uint)((ulong)pcVar2 >> 0x3e);
    if (uVar1 == 1) {
      param_1 = (ulong)pcVar2 & 0x3fffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 102a52210; end: 102a5223b;  */

void FUN_102a52210(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a5223c; end: 102a5223f;  */

void FUN_102a5223c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x12;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)&uStack_d0 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar7 - extraout_x12;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  lStack_b8 = lVar3;
  if (lVar3 == 0) {
    (*param_3)();
  }
  else {
    lVar12 = *(long *)(unaff_x20 + 0x18);
    pcStack_c0 = param_3;
    func_0x000107c5eec4(lVar11);
    uVar9 = *(undefined8 *)(lVar12 + 0x10);
    plStack_90 = (long *)lVar11;
    func_0x000107c6157c(uVar9);
    uStack_d0 = param_4;
    func_0x000100075034(0x102a533f0,&puStack_a0,PTR___sytN_11034f1b0 + 8);
    uStack_c8 = 0;
    func_0x000107c61574(uVar9);
    func_0x000107c5fadc(param_1,param_2);
    lVar3 = lStack_b8;
    func_0x000107c430c8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar4 = &UNK_11058cf58;
    func_0x000107c613fc(&UNK_11058cf58,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar12);
    (**(code **)(lVar15 + 0x10))(lVar7,lVar11,lVar2);
    uVar8 = (ulong)*(byte *)(lVar15 + 0x50);
    uVar13 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
    puVar5 = &UNK_11058cf80;
    func_0x000107c613fc(&UNK_11058cf80,uVar13 + lVar14,uVar8 | 7);
    uVar9 = uStack_d0;
    *(code **)(puVar5 + 0x10) = pcStack_c0;
    *(undefined8 *)(puVar5 + 0x18) = uStack_d0;
    *(undefined **)(puVar5 + 0x20) = puVar4;
    pcStack_c0 = (code *)lVar15;
    (**(code **)(lVar15 + 0x20))(puVar5 + uVar13,lVar7,lVar2);
    pcStack_80 = FUN_102a53428;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    plStack_90 = (long *)&UNK_100f152a0;
    puStack_88 = &UNK_11058cf98;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_78;
    func_0x000107c6157c(uVar9);
    func_0x000107c61574(puVar4);
    lVar7 = lVar3;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
    uVar10 = *(undefined8 *)(lVar12 + 0x10);
    plStack_90 = &lStack_a8;
    lStack_a8 = lVar7;
    puStack_88 = (undefined *)lVar11;
    pcStack_80 = (code *)lVar12;
    func_0x000107c61174(lVar7);
    func_0x000107c6157c(uVar10);
    uVar9 = 0x112ee5260;
    func_0x0001000285a8(0x112ee5260,&UNK_10dc2a4c0);
    func_0x000100075034(&puStack_b0,FUN_102a5346c,&puStack_a0,uVar9);
    func_0x000107c61574(uVar10);
    if (puStack_b0 == (undefined *)0x0) {
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(lStack_b8);
    }
    else {
      pcVar1 = *(code **)(lVar12 + 0x20);
      puStack_a0 = puStack_b0;
      puVar4 = puStack_b0;
      func_0x000107c61174();
      (*pcVar1)(&puStack_a0);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(lStack_b8);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
    }
    (**(code **)((long)pcStack_c0 + 8))(lVar11,lVar2);
  }
  return;
}



/* Entry: 102a52240; end: 102a522c7;  */

void FUN_102a52240(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112ee5278;
  func_0x0001000285a8(0x112ee5278,&UNK_10db10240);
  func_0x000100075034(&uStack_38,FUN_102a52e80,0,uVar1);
  func_0x000107c61574(uVar2);
  FUN_102a4fc0c(*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28),uStack_38);
  func_0x000107c6142c(uStack_38);
  return;
}



/* Entry: 102a522c8; end: 102a5235f;  */

void FUN_102a522c8(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  lVar2 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,param_2,lVar2);
  *(undefined8 *)(*(long *)(param_4 + 0x38) + param_1 * 8) = param_3;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a52360);
  (*pcVar1)();
}



/* Entry: 102a52360; end: 102a5251b;  */

ulong FUN_102a52360(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a52444);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a52448);
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
  FUN_102a535d8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a5251c);
  (*pcVar2)();
}



/* Entry: 102a5251c; end: 102a52e7f;  */

void FUN_102a5251c(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  uVar4 = param_2;
  UNRECOVERED_JUMPTABLE = param_7;
  uStack_70 = param_5;
  uStack_68 = param_6;
  func_0x000107c5eec8();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  func_0x0001000c8928();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar8 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a52644);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar8) {
    param_3 = param_3 & 1;
    func_0x000102a528c8(lVar8,param_3,param_4,uStack_70,uStack_68);
    uVar3 = param_2;
    func_0x0001000c8928();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(lVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a52600);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000102a526b0(param_4,uStack_70,uStack_68);
    lVar8 = *unaff_x20;
    goto joined_r0x000102a52660;
  }
  lVar8 = *unaff_x20;
joined_r0x000102a52660:
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000102a5263c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar6);
    return;
  }
  (**(code **)(lVar10 + 0x10))
            (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,lVar2);
  FUN_102a522c8(uVar3,auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,lVar8);
  return;
}



/* Entry: 102a52e80; end: 102a52ea7;  */

void FUN_102a52e80(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_102a50870();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102a52ea8; end: 102a52ecf;  */

void FUN_102a52ea8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_102a50a5c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102a52ed0; end: 102a53047;  */

undefined *
FUN_102a52ed0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long alStack_70 [2];
  
  alStack_70[0] = param_2;
  alStack_70[1] = param_3;
  func_0x0001000285a8(param_2,param_3);
  lVar11 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar9 = (long)alStack_70 - extraout_x8;
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(param_4,param_5);
    puVar3 = puVar10;
    func_0x000107c60498();
    iVar1 = *(int *)(param_2 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      uVar6 = uVar9;
      func_0x000102a53618(param_1,uVar9,alStack_70[0],alStack_70[1]);
      uVar4 = uVar9;
      func_0x0001000c8928();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a53044);
        (*pcVar2)();
      }
      uVar7 = *(undefined8 *)(uVar9 + (long)iVar1);
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      lVar8 = *(long *)(puVar3 + 0x30);
      lVar5 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar5 + -8) + 0x20))
                (lVar8 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar4,uVar9,lVar5);
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 8) = uVar7;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a53048);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar11;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 102a53048; end: 102a53087;  */

void FUN_102a53048(void)

{
  func_0x000107c61168(&PTR_PTR_112ee4ef0);
  return;
}



/* Entry: 102a53088; end: 102a5308b;  */

void FUN_102a53088(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x60))();
  return;
}



/* Entry: 102a5308c; end: 102a530c7;  */

void FUN_102a5308c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x60))();
  return;
}



/* Entry: 102a530c8; end: 102a530cb;  */

void FUN_102a530c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 102a530cc; end: 102a53127;  */

void FUN_102a530cc(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBoWV_11034d678 + 0x40;
  puStack_20 = &UNK_10db100a8;
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x58);
  return;
}



/* Entry: 102a53128; end: 102a53143;  */

void FUN_102a53128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e70e848);
  return;
}



/* Entry: 102a53144; end: 102a531bb;  */

undefined1 * FUN_102a53144(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a531bc; end: 102a5324b;  */

int FUN_102a531bc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a5324c; end: 102a53273;  */

void FUN_102a5324c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0xf000000000000000);
  return;
}



/* Entry: 102a53274; end: 102a5328f;  */

void FUN_102a53274(long param_1,long param_2)

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



/* Entry: 102a53290; end: 102a532c7;  */

void FUN_102a53290(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102a5016c(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112ee5258,&UNK_10db10220,0x102a53384,
                0x102a53374);
  return;
}



/* Entry: 102a532c8; end: 102a53347;  */

void FUN_102a532c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long alStack_90 [2];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar4 = 0;
  func_0x000107c5eec8();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 +
                     (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8));
  func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    lStack_80 = unaff_x20 + uVar6;
    lStack_78 = lVar5;
    func_0x000107c6157c(uVar7);
    uVar3 = 0x112ee5250;
    func_0x0001000285a8(0x112ee5250,&UNK_10db10218);
    func_0x000100075034(&lStack_70,FUN_102a533d4,alStack_90,uVar3);
    func_0x000107c61574(uVar7);
    if (lStack_70 == 0) {
      func_0x000107c61574(lVar5);
    }
    else {
      pcVar1 = *(code **)(lVar5 + 0x20);
      alStack_90[0] = lStack_70;
      func_0x000107c615f0(lStack_70);
      (*pcVar1)(alStack_90);
      func_0x000107c61574(lVar5);
      func_0x000107c615ec(lStack_70,2);
    }
  }
  (*pcVar2)(param_1,param_2);
  return;
}



/* Entry: 102a53348; end: 102a53363;  */

void FUN_102a53348(undefined8 param_1)

{
  FUN_102a53488(param_1,FUN_102a5020c);
  return;
}



/* Entry: 102a53364; end: 102a53393;  */

void FUN_102a53364(ulong param_1)

{
  if (param_1 == 2) {
    return;
  }
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102a53394; end: 102a533d3;  */

void FUN_102a53394(long *param_1,code *param_2,long param_3)

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



/* Entry: 102a533d4; end: 102a53427;  */

void FUN_102a533d4(undefined8 param_1)

{
  FUN_102a5355c(param_1,FUN_102a50600);
  return;
}



/* Entry: 102a53428; end: 102a5346b;  */

void FUN_102a53428(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar11 = 0;
  func_0x000107c5eec8();
  uVar12 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11058cfd0;
  func_0x000107c613fc(&UNK_11058cfd0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar13;
  puVar3 = &UNK_11058cff8;
  func_0x000107c613fc(&UNK_11058cff8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x102a534f0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102a534f8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100f15b68;
  puStack_88 = &UNK_11058d010;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar5 = puStack_78;
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_11058d048;
  func_0x000107c613fc(&UNK_11058d048,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x18) = uVar13;
  puVar6 = &UNK_11058d070;
  func_0x000107c613fc(&UNK_11058d070,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x102a53518;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_80 = (code *)0x102a54144;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_11058d088;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_78;
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61428(lVar11 + 0x10,auStack_b8,0,0);
  puVar8 = (undefined *)(lVar11 + 0x10);
  func_0x000107c61648();
  if (puVar8 != (undefined *)0x0) {
    uVar13 = *(undefined8 *)(puVar8 + 0x10);
    puStack_90 = (undefined *)(unaff_x20 + (uVar12 + 0x28 & (uVar12 ^ 0xffffffffffffffff)));
    puStack_88 = puVar8;
    func_0x000107c6157c(uVar13);
    uVar9 = 0x112ee5260;
    func_0x0001000285a8(0x112ee5260,&UNK_10dc2a4c0);
    func_0x000100075034(&puStack_c0,FUN_102a53540,&puStack_a0,uVar9);
    func_0x000107c61574(uVar13);
    if (puStack_c0 != (undefined *)0x0) {
      pcVar1 = *(code **)(puVar8 + 0x20);
      puStack_a0 = puStack_c0;
      puVar10 = puStack_c0;
      func_0x000107c61174();
      (*pcVar1)(&puStack_a0);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(puVar8);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      goto LAB_102a52124;
    }
    func_0x000107c61574(puVar2);
    puVar2 = puVar8;
  }
  func_0x000107c61574(puVar2);
LAB_102a52124:
  puVar2 = puVar3;
  func_0x000107c61544(puVar3,"",0x6a,0x12a,0x25,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a521b4);
    (*pcVar1)();
  }
  puVar2 = puVar6;
  func_0x000107c61544(puVar6,"",0x6a,300,0x1d,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar2 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a521b8);
    (*pcVar1)();
  }
  return;
}



/* Entry: 102a5346c; end: 102a53487;  */

void FUN_102a5346c(undefined8 param_1)

{
  FUN_102a53488(param_1,FUN_102a50394);
  return;
}



/* Entry: 102a53488; end: 102a534bf;  */

void FUN_102a53488(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (*param_3)(param_2,**(undefined8 **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102a534c0; end: 102a534f7;  */

void FUN_102a534c0(ulong param_1)

{
  if (param_1 == 2) {
    return;
  }
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102a534f8; end: 102a5353f;  */

void FUN_102a534f8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102a53540; end: 102a5355b;  */

void FUN_102a53540(undefined8 param_1)

{
  FUN_102a5355c(param_1,FUN_102a50738);
  return;
}



/* Entry: 102a5355c; end: 102a5358b;  */

void FUN_102a5355c(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (*param_3)(param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102a5358c; end: 102a5359b;  */

/* WARNING: Possible PIC construction at 0x000102a51b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a51b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a51b30) */
/* WARNING: Removing unreachable block (ram,0x000102a51b54) */

void FUN_102a5358c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puStack_68;
  
  pcVar3 = *(code **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    puStack_68 = (undefined *)0x0;
    uVar4 = 0;
    FUN_102a535d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c5fc50(param_1,&puStack_68,uVar4);
    puVar8 = puStack_68;
    if (puStack_68 != (undefined *)0x0) {
      if ((ulong)puStack_68 >> 0x3e == 0) {
        puVar11 = *(undefined **)((undefined *)((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar11 = puStack_68;
        if (-1 < (long)puStack_68) {
          puVar11 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
        }
        func_0x000107c60480();
      }
      if (puVar11 != (undefined *)0x0) {
        puVar9 = (undefined *)((ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU));
        puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100403514(0,puVar9,0);
        if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a51b8c);
          (*pcVar3)();
        }
        puVar12 = (undefined *)0x0;
        do {
          puVar2 = puStack_68;
          if (((ulong)puVar8 & 0xc000000000000001) == 0) {
            puVar5 = *(undefined **)(puVar8 + (long)puVar12 * 8 + 0x20);
            func_0x000107c61174();
            puVar10 = puVar9;
          }
          else {
            puVar5 = puVar12;
            puVar10 = puVar8;
            FUN_102a52360(puVar12,puVar8,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
          }
          func_0x000107c61174();
          puVar6 = puVar5;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          puVar7 = puVar6;
          func_0x000107c5faec();
          puVar9 = puVar10;
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar6);
          uVar1 = *(ulong *)(puVar2 + 0x10);
          puVar5 = (undefined *)(uVar1 + 1);
          puStack_68 = puVar2;
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
            puVar9 = puVar5;
            func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),puVar5,1);
          }
          puVar12 = puVar12 + 1;
          *(undefined **)(puStack_68 + 0x10) = puVar5;
          *(undefined **)(puStack_68 + uVar1 * 0x10 + 0x20) = puVar7;
          *(undefined **)(puStack_68 + uVar1 * 0x10 + 0x28) = puVar10;
        } while (puVar11 != puVar12);
      }
      goto code_r0x000107c6142c;
    }
  }
  (*pcVar3)(0);
  puVar8 = (undefined *)0x0;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar8);
  return;
}



/* Entry: 102a5359c; end: 102a535b3;  */

void FUN_102a5359c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102a50c48(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102a535b4; end: 102a535bf;  */

void FUN_102a535b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e70e9ac);
  return;
}



/* Entry: 102a535c0; end: 102a535d7;  */

void FUN_102a535c0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102a50d90(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102a535d8; end: 102a5365f;  */

void FUN_102a535d8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102a53660; end: 102a53667;  */

void FUN_102a53660(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 102a53668; end: 102a536bf;  */

void FUN_102a53668(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    func_0x000107c61530(param_1,0,*(long *)(lVar1 + -8) + 0x40,2);
  }
  return;
}



/* Entry: 102a536c0; end: 102a5385b;  */

long * FUN_102a536c0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar8 + -8);
  uVar1 = *(uint *)(lVar9 + 0x54);
  uVar7 = *(ulong *)(lVar9 + 0x40);
  uVar6 = (uint)uVar7;
  uVar4 = uVar7;
  if (uVar1 < 2) {
    if (uVar6 < 4) {
      uVar2 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar6 << 3 & 0x1f);
      uVar4 = 2;
      if (0xfffe < uVar2) {
        uVar4 = 4;
      }
      if (uVar2 < 0xff) {
        uVar4 = (ulong)(uVar2 != 0);
      }
    }
    else {
      uVar4 = 1;
    }
    uVar4 = uVar4 + uVar7;
  }
  uVar5 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  if (((uint)uVar5 < 8 && uVar4 < 0x19) && (*(uint *)(lVar9 + 0x50) & 0x100000) == 0) {
    plVar3 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,2,lVar8);
    if ((int)plVar3 != 0) {
      if (uVar1 < 2) {
        if (uVar6 < 4) {
          uVar1 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar6 << 3 & 0x1f);
          uVar4 = 2;
          if (0xfffe < uVar1) {
            uVar4 = 4;
          }
          if (uVar1 < 0xff) {
            uVar4 = (ulong)(uVar1 != 0);
          }
        }
        else {
          uVar4 = 1;
        }
        uVar7 = uVar4 + uVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar7);
      return param_1;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar9 + 0x38))(param_1,0,2,lVar8);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102a5385c; end: 102a539ab;  */

void FUN_102a5385c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  uVar1 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,2,lVar2);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102a538b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar2);
  return;
}



/* Entry: 102a539ac; end: 102a53b03;  */

undefined8 FUN_102a539ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  uVar2 = param_1;
  (*pcVar8)(param_1,2,lVar6);
  uVar3 = param_2;
  (*pcVar8)(param_2,2,lVar6);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x18))(param_1,param_2,lVar6);
      return param_1;
    }
    (**(code **)(lVar7 + 8))(param_1,lVar6);
    uVar4 = *(uint *)(lVar7 + 0x54);
    lVar6 = *(long *)(lVar7 + 0x40);
    if (1 < uVar4) goto LAB_102a53a8c;
    if (3 < (uint)lVar6) goto LAB_102a53a14;
LAB_102a53a48:
    uVar1 = (int)lVar6 << 3;
    uVar4 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar4) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar5 = 2;
    if (0xfffe < uVar4) {
      uVar5 = 4;
    }
    if (uVar4 < 0xff) {
      uVar5 = (ulong)(uVar4 != 0);
    }
  }
  else {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar6);
      (**(code **)(lVar7 + 0x38))(param_1,0,2,lVar6);
      return param_1;
    }
    uVar4 = *(uint *)(lVar7 + 0x54);
    lVar6 = *(long *)(lVar7 + 0x40);
    if (1 < uVar4) goto LAB_102a53a8c;
    if ((uint)lVar6 < 4) goto LAB_102a53a48;
LAB_102a53a14:
    uVar5 = 1;
  }
  lVar6 = uVar5 + lVar6;
LAB_102a53a8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6);
  return param_1;
}



/* Entry: 102a53b04; end: 102a53bf7;  */

undefined8 FUN_102a53b04(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,2,lVar4);
  if ((int)uVar2 != 0) {
    lVar4 = *(long *)(lVar5 + 0x40);
    if (*(uint *)(lVar5 + 0x54) < 2) {
      if ((uint)lVar4 < 4) {
        uVar1 = (uint)lVar4 << 3;
        uVar1 = (~(-1 << (ulong)(uVar1 & 0x1f)) - *(uint *)(lVar5 + 0x54)) + 2 >>
                (ulong)(uVar1 & 0x1f);
        uVar3 = 2;
        if (0xfffe < uVar1) {
          uVar3 = 4;
        }
        if (uVar1 < 0xff) {
          uVar3 = (ulong)(uVar1 != 0);
        }
      }
      else {
        uVar3 = 1;
      }
      lVar4 = uVar3 + lVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar4);
    return param_1;
  }
  (**(code **)(lVar5 + 0x20))(param_1,param_2,lVar4);
  (**(code **)(lVar5 + 0x38))(param_1,0,2,lVar4);
  return param_1;
}



/* Entry: 102a53bf8; end: 102a53d4f;  */

undefined8 FUN_102a53bf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  uVar2 = param_1;
  (*pcVar8)(param_1,2,lVar6);
  uVar3 = param_2;
  (*pcVar8)(param_2,2,lVar6);
  if ((int)uVar2 == 0) {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x28))(param_1,param_2,lVar6);
      return param_1;
    }
    (**(code **)(lVar7 + 8))(param_1,lVar6);
    uVar4 = *(uint *)(lVar7 + 0x54);
    lVar6 = *(long *)(lVar7 + 0x40);
    if (1 < uVar4) goto LAB_102a53cd8;
    if (3 < (uint)lVar6) goto LAB_102a53c60;
LAB_102a53c94:
    uVar1 = (int)lVar6 << 3;
    uVar4 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar4) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar5 = 2;
    if (0xfffe < uVar4) {
      uVar5 = 4;
    }
    if (uVar4 < 0xff) {
      uVar5 = (ulong)(uVar4 != 0);
    }
  }
  else {
    if ((int)uVar3 == 0) {
      (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar6);
      (**(code **)(lVar7 + 0x38))(param_1,0,2,lVar6);
      return param_1;
    }
    uVar4 = *(uint *)(lVar7 + 0x54);
    lVar6 = *(long *)(lVar7 + 0x40);
    if (1 < uVar4) goto LAB_102a53cd8;
    if ((uint)lVar6 < 4) goto LAB_102a53c94;
LAB_102a53c60:
    uVar5 = 1;
  }
  lVar6 = uVar5 + lVar6;
LAB_102a53cd8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,lVar6);
  return param_1;
}



/* Entry: 102a53d50; end: 102a53ecb;  */

int FUN_102a53d50(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (1 < uVar3) {
    uVar1 = uVar3 - 2;
  }
  lVar7 = *(long *)(lVar5 + 0x40);
  if (uVar3 < 2) {
    if ((uint)lVar7 < 4) {
      uVar4 = (uint)lVar7 << 3;
      uVar4 = (~(-1 << (ulong)(uVar4 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar4 & 0x1f);
      uVar9 = 2;
      if (0xfffe < uVar4) {
        uVar9 = 4;
      }
      if (uVar4 < 0xff) {
        uVar9 = (ulong)(uVar4 != 0);
      }
    }
    else {
      uVar9 = 1;
    }
    lVar7 = uVar9 + lVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_102a53e48;
  uVar6 = (uint)lVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_102a53e48;
      goto LAB_102a53de0;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar7);
    }
  }
  else {
LAB_102a53de0:
    uVar8 = (uint)*(byte *)((long)param_1 + lVar7);
  }
  if (uVar8 != 0) {
    uVar3 = 0;
    if (uVar6 < 4) {
      uVar3 = uVar8 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar4 = (uint)(byte)*param_1;
        }
        else {
          uVar4 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar4 = (uint)(uint3)*param_1;
      }
      else {
        uVar4 = *param_1;
      }
    }
    return uVar1 + (uVar4 | uVar3) + 1;
  }
LAB_102a53e48:
  if (uVar3 < 3) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))();
  iVar2 = 0;
  if (1 < (uint)param_1) {
    iVar2 = (uint)param_1 - 2;
  }
  return iVar2;
}



/* Entry: 102a53ecc; end: 102a540e7;  */

void FUN_102a53ecc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar6 + 0x54);
  uVar2 = 0;
  if (1 < uVar3) {
    uVar2 = uVar3 - 2;
  }
  lVar10 = *(long *)(lVar6 + 0x40);
  if (uVar3 < 2) {
    if ((uint)lVar10 < 4) {
      uVar9 = (uint)lVar10 << 3;
      uVar9 = (~(-1 << (ulong)(uVar9 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 & 0x1f);
      uVar7 = 2;
      if (0xfffe < uVar9) {
        uVar7 = 4;
      }
      if (uVar9 < 0xff) {
        uVar7 = (ulong)(uVar9 != 0);
      }
    }
    else {
      uVar7 = 1;
    }
    lVar10 = uVar7 + lVar10;
  }
  uVar9 = (uint)lVar10;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar9 < 4) {
      bVar5 = bVar8;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar9 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar10);
        uVar4 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar10);
      *param_1 = param_2;
      iVar11 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + lVar10) = (char)iVar11;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + lVar10) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + lVar10) = iVar11;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar10) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar10) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar10) = 0;
    }
    if ((param_2 != 0) && (2 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x000102a54038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_1,param_2 + 2);
      return;
    }
  }
  return;
}



/* Entry: 102a540e8; end: 102a54153;  */

void FUN_102a540e8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000102a540f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x30))(param_1,2);
  return;
}



/* Entry: 102a54154; end: 102a541bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a54154(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102a54548();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ee5328) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102a541c0; end: 102a5422b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a541c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ee5328) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102a5422c; end: 102a5428b; -[_TtC40LensAutoCopyScopedFactoryServiceProvider28SCLensAutoCopyScopedServices init] */

void FUN_102a5422c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensAutoCopyScopedFactoryServiceProvider.SCLensAutoCopyScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a54258);
  (*pcVar1)();
}



/* Entry: 102a5428c; end: 102a5429b; -[_TtC40LensAutoCopyScopedFactoryServiceProvider28SCLensAutoCopyScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a5428c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ee5328));
  return;
}



/* Entry: 102a5429c; end: 102a54307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a5429c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11058d360;
  func_0x000107c613fc(&UNK_11058d360,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102a54624,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102a54308; end: 102a543a3;  */

void FUN_102a54308(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11058d270;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11058d270;
  return;
}



/* Entry: 102a543a4; end: 102a543db;  */

void FUN_102a543a4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102a543dc; end: 102a543e3;  */

undefined8 FUN_102a543dc(void)

{
  return 0x1b;
}



/* Entry: 102a543e4; end: 102a54517;  */

void FUN_102a543e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11058d388;
  func_0x000107c613fc(&UNK_11058d388,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102a545fc;
  func_0x00010058fa64(FUN_102a545fc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102a54518; end: 102a54547;  */

undefined ** FUN_102a54518(void)

{
  return &PTR_DAT_112ef6630;
}



/* Entry: 102a54548; end: 102a54567;  */

void FUN_102a54548(void)

{
  func_0x000107c61168(&PTR_PTR_112882870);
  return;
}



/* Entry: 102a54568; end: 102a545b7;  */

undefined1  [16] FUN_102a54568(void)

{
  return ZEXT816(0x11058d2c0);
}



/* Entry: 102a545b8; end: 102a545fb;  */

void FUN_102a545b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee5390 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126abdf8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ee5390 = puVar1;
  return;
}



/* Entry: 102a545fc; end: 102a54623;  */

void FUN_102a545fc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102a54624; end: 102a54627;  */

void FUN_102a54624(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102a54628; end: 102a5472f;  */

/* WARNING: Possible PIC construction at 0x000102a546e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a546f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a54704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a546f8) */
/* WARNING: Removing unreachable block (ram,0x000102a546e8) */
/* WARNING: Removing unreachable block (ram,0x000102a54708) */

void FUN_102a54628(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11058d410;
  func_0x000107c613fc(&UNK_11058d410,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  uVar2 = 0x112ee53a0;
  func_0x0001000285a8(0x112ee53a0,&UNK_10db104e0);
  func_0x000107c613fc();
  pcVar3 = FUN_102a54b00;
  func_0x0001000841fc(FUN_102a54b00,puVar1,uVar2);
  func_0x000100084214(&UNK_10db104b0,0x2a,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102a54730; end: 102a54753;  */

/* WARNING: Possible PIC construction at 0x000102a546e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a546f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a54704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a546f8) */
/* WARNING: Removing unreachable block (ram,0x000102a546e8) */
/* WARNING: Removing unreachable block (ram,0x000102a54708) */

void FUN_102a54730(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_11058d410;
  func_0x000107c613fc(&UNK_11058d410,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112ee53a0;
  func_0x0001000285a8(0x112ee53a0,&UNK_10db104e0);
  func_0x000107c613fc();
  pcVar8 = FUN_102a54b00;
  func_0x0001000841fc(FUN_102a54b00,puVar6,uVar7);
  func_0x000100084214(&UNK_10db104b0,0x2a,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102a54754; end: 102a54aab;  */

void FUN_102a54754(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112ee53a8,&UNK_10db104e8);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102a55ef8();
  func_0x000100082720("LensAutoCopyScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ee53b0,&UNK_10db104f0);
  puVar3 = &UNK_11058d438;
  func_0x000107c613fc(&UNK_11058d438,0x50,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  uVar8 = 0x102a54b14;
  func_0x0001000823a8(0x102a54b14,puVar3);
  func_0x000100082720("SCLensAutoCopyOnCameraWorkflowEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102a543a4;
  func_0x0001000823a8(FUN_102a543a4,0);
  func_0x000100082720("SCLensAutoCopyScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ee53b8,&UNK_10db10500);
  puVar3 = &UNK_11058d460;
  func_0x000107c613fc(&UNK_11058d460,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x102a54b28;
  func_0x0001000823a8(0x102a54b28,puVar3);
  func_0x000100082720("SCLensAutoCopyScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ee5330,&UNK_10db102b0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x102a54b34;
  func_0x0001000823a8(0x102a54b34,uVar5);
  func_0x000100082720("SCLensAutoCopyScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ee5320,&UNK_10db102a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x102a54b3c;
  func_0x0001000823a8(0x102a54b3c,uVar6);
  func_0x000100082720("SCLensAutoCopyScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11058d488;
  func_0x000107c613fc(&UNK_11058d488,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x102a54b44;
  func_0x0001000823a8(0x102a54b44,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLensAutoCopyScopeEntryPointProvider",0x25,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102a54aac; end: 102a54aff;  */

void FUN_102a54aac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a54b00; end: 102a54b4b;  */

void FUN_102a54b00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112ee53a8,&UNK_10db104e8);
  puVar3 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar4 = puVar3;
  FUN_102a55ef8();
  func_0x000100082720("LensAutoCopyScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ee53b0,&UNK_10db104f0);
  puVar5 = &UNK_11058d438;
  func_0x000107c613fc(&UNK_11058d438,0x50,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  *(undefined8 *)(puVar5 + 0x48) = uVar11;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar11);
  uVar6 = 0x102a54b14;
  func_0x0001000823a8(0x102a54b14,puVar5);
  func_0x000100082720("SCLensAutoCopyOnCameraWorkflowEntryPointWrapperServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar7 = FUN_102a543a4;
  func_0x0001000823a8(FUN_102a543a4,0);
  func_0x000100082720("SCLensAutoCopyScopedServicesCleanupRelayServiceProvider",0x37,2);
  func_0x0001000285a8(0x112ee53b8,&UNK_10db10500);
  puVar5 = &UNK_11058d460;
  func_0x000107c613fc(&UNK_11058d460,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar3;
  *(undefined8 **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(code **)(puVar5 + 0x28) = pcVar7;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x102a54b28;
  func_0x0001000823a8(0x102a54b28,puVar5);
  func_0x000100082720("SCLensAutoCopyScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112ee5330,&UNK_10db102b0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102a54b34;
  func_0x0001000823a8(0x102a54b34,uVar8);
  func_0x000100082720("SCLensAutoCopyScopeInitializationServiceProvider",0x30,2);
  func_0x0001000285a8(0x112ee5320,&UNK_10db102a0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x102a54b3c;
  func_0x0001000823a8(0x102a54b3c,uVar9);
  func_0x000100082720("SCLensAutoCopyScopedServicesServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11058d488;
  func_0x000107c613fc(&UNK_11058d488,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar7;
  func_0x000107c6157c(pcVar7);
  uVar10 = 0x102a54b44;
  func_0x0001000823a8(0x102a54b44,puVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCLensAutoCopyScopeEntryPointProvider",0x25,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 102a54b4c; end: 102a55483;  */

void FUN_102a54b4c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  FUN_102a55604();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126abe00;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0e53d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc6ad0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar10 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar10 = 0x6553657469766e69;
  func_0x000107c5fadc(0x6553657469766e69,0xee00736563697672);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef35720);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *param_1 = param_2;
  return;
}



/* Entry: 102a55484; end: 102a554f7;  */

void FUN_102a55484(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102a554f8; end: 102a554ff;  */

undefined8 FUN_102a554f8(void)

{
  return 0x1b;
}



/* Entry: 102a55500; end: 102a55583;  */

void FUN_102a55500(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102a55644,param_2,FUN_102a55648,param_2,FUN_102a55670,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102a55584; end: 102a555d3;  */

undefined8 FUN_102a55584(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102a555d4; end: 102a55603;  */

void FUN_102a555d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11058d4a0;
  return;
}



/* Entry: 102a55604; end: 102a55623;  */

void FUN_102a55604(void)

{
  func_0x000107c61168(&PTR_PTR_112ee5428);
  return;
}



/* Entry: 102a55624; end: 102a55647;  */

undefined1  [16] FUN_102a55624(void)

{
  return ZEXT816(0x11058d4e0);
}



/* Entry: 102a55648; end: 102a5566f;  */

void FUN_102a55648(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102a55670; end: 102a55677;  */

undefined8 FUN_102a55670(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102a55678; end: 102a556b3;  */

void FUN_102a55678(undefined8 *param_1,undefined8 param_2)

{
  FUN_102a556b4();
  func_0x0001000a7f38("SCLensAutoCopyScopeInitializationPluginRegistryServiceProvider",0x3e,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102a556b4; end: 102a5589f;  */

void FUN_102a556b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105a1120;
  ppuVar4 = &PTR_DAT_112ef6630;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11058d530;
  func_0x000107c613fc(&UNK_11058d530,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ee54c0;
  func_0x0001000285a8(0x112ee54c0,&UNK_10db10688);
  func_0x0001000a6ee8(&UNK_11058d710,"LensAutoCopyScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_102a558a0,puVar2,uVar3,&UNK_11058d710,&PTR_DAT_112ee5550);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11058d4e0,
                      "SCLensAutoCopyOnCameraWorkflowEntryPointWrapperScopeInitializationPluginKey",
                      0x4b,2,FUN_102a55954,param_3,uVar3,&UNK_11058d4e0,&PTR_DAT_112ee53c0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11058d558;
  func_0x000107c613fc(&UNK_11058d558,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11058d300,"SCLensAutoCopyScopedServicesScopeInitializationPluginKey",0x38
                      ,2,FUN_102a55a04,puVar2,uVar3,&UNK_11058d300,&PTR_DAT_112ee5338);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ee54c8;
  func_0x0001000285a8(0x112ee54c8,&UNK_10db10690);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102a558a0; end: 102a558df;  */

void FUN_102a558a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102a55fdc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensAutoCopyScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102a558e0; end: 102a55953;  */

void FUN_102a558e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102a55a40;
  func_0x0001000823a8(0x102a55a40,param_3);
  func_0x000100082720("SCLensAutoCopyOnCameraWorkflowEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102a55954; end: 102a5595b;  */

void FUN_102a55954(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102a55a40;
  func_0x0001000823a8();
  func_0x000100082720("SCLensAutoCopyOnCameraWorkflowEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x50,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102a5595c; end: 102a55a03;  */

void FUN_102a5595c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11058d580;
  func_0x000107c613fc(&UNK_11058d580,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102a55a38;
  func_0x0001000823a8(FUN_102a55a38,puVar1);
  func_0x000100082720("SCLensAutoCopyScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102a55a04; end: 102a55a0b;  */

void FUN_102a55a04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11058d580;
  func_0x000107c613fc(&UNK_11058d580,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102a55a38;
  func_0x0001000823a8(FUN_102a55a38,puVar3);
  func_0x000100082720("SCLensAutoCopyScopedServicesScopeInitializationPluginProvider",0x3d,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102a55a0c; end: 102a55a37;  */

void FUN_102a55a0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a55a38; end: 102a55a47;  */

void FUN_102a55a38(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11058d388;
  func_0x000107c613fc(&UNK_11058d388,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102a545fc;
  func_0x00010058fa64(FUN_102a545fc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102a55a48; end: 102a55acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a55a48(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102a55e08();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ee54d0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ee54d8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a55ad0);
  (*pcVar1)();
}



/* Entry: 102a55ad0; end: 102a55b2f; -[_TtC28LensAutoCopyScopeGraphBridge43LensAutoCopyScopeGraphBridgeSaberEntryPoint init] */

void FUN_102a55ad0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensAutoCopyScopeGraphBridge.LensAutoCopyScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a55afc);
  (*pcVar1)();
}



/* Entry: 102a55b30; end: 102a55b67; -[_TtC28LensAutoCopyScopeGraphBridge43LensAutoCopyScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a55b4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a55b50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a55b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee54d0));
  return;
}



/* Entry: 102a55b68; end: 102a55b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a55b68(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ee54d8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ee54d0));
  return;
}



/* Entry: 102a55b90; end: 102a55baf;  */

void FUN_102a55b90(void)

{
  func_0x000107c61168(&PTR_PTR_112882930);
  return;
}



/* Entry: 102a55bb0; end: 102a55c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a55bb0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ee5508) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ee5510);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a55c38);
  (*pcVar2)();
}


