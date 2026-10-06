/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1025055f0; end: 10250572f;  */

void FUN_1025055f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_b0 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar3 = &UNK_11051a760;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_11051a760,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_11051a760,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,param_2);
  puStack_70 = puVar2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  func_0x000107c613fc(&UNK_11051a760,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,param_2);
  puStack_a0 = puVar3;
  uStack_98 = param_3;
  uStack_90 = param_4;
  func_0x000103b3598c(FUN_1025086c4,puVar1,FUN_102505874,0,0x102505878,0,0x1025086cc,auStack_80,
                      FUN_102505c24,0,0x102505c28,0,0x1025086d8,auStack_b0,FUN_102505cd0,0);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 102505730; end: 102505873;  */

void FUN_102505730(byte param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0xb0);
    if (lVar3 == 0) {
      func_0x000107c61574();
    }
    else {
      lVar1 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 2;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(undefined **)(lVar1 + 0x38) = PTR___sSbN_11034dd40;
      *(byte *)(lVar1 + 0x20) = param_1 & 1;
      func_0x000107c615f0(lVar3);
      lVar2 = lVar1;
      func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61574(lVar1);
      lVar1 = lVar3;
      func_0x000107c4e5f4();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar3);
        func_0x000107c61574(param_2);
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x000107c60234(&uStack_80,lVar1);
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar3);
        func_0x000107c61574(param_2);
      }
      func_0x00010006e7f4(&uStack_80);
    }
  }
  return;
}



/* Entry: 102505874; end: 10250587b;  */

void FUN_102505874(void)

{
  return;
}



/* Entry: 10250587c; end: 10250594b;  */

void FUN_10250587c(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    uVar1 = param_5;
    func_0x000107c4c458(param_5);
    func_0x000107c61180();
    func_0x000107c3f750();
    uVar2 = param_1;
    func_0x000107c615e8(uVar1);
    func_0x000107c4c458(param_5);
    func_0x000107c61180();
    func_0x000107c5ea20();
    func_0x000107c615e8(param_5);
    FUN_10250594c(param_1,param_2,uVar2,param_3 & 1);
    func_0x000107c61574(param_4);
  }
  return;
}



/* Entry: 10250594c; end: 102505c23;  */

void FUN_10250594c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR___sypN_11034f1a8;
  lVar7 = *(long *)(unaff_x20 + 0xa0);
  if (lVar7 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c615f0(lVar7);
    func_0x000107c466c0(param_1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(param_2);
    lVar4 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 4;
    *(undefined8 *)(lVar4 + 0x10) = 2;
    lVar5 = lVar4;
    func_0x000100673624();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 5;
    *(undefined8 *)(lVar5 + 0x10) = 2;
    *(undefined **)(lVar5 + 0x20) = puVar2;
    *(undefined **)(lVar5 + 0x28) = puVar3;
    uVar6 = 0x112da1fa0;
    func_0x0001000285a8(0x112da1fa0,&UNK_10d945e90);
    *(undefined8 *)(lVar4 + 0x38) = uVar6;
    *(long *)(lVar4 + 0x20) = lVar5;
    *(undefined **)(lVar4 + 0x58) = PTR___sSbN_11034dd40;
    *(byte *)(lVar4 + 0x40) = param_4 & 1;
    func_0x000107c61174(puVar2);
    func_0x000107c61174(puVar3);
    lVar5 = lVar4;
    func_0x000107c5fc48(lVar4,puVar1 + 8);
    func_0x000107c61574(lVar4);
    lVar4 = lVar7;
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar4 == 0) {
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c60234(&uStack_90,lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
    }
    func_0x00010006e7f4(&uStack_90);
  }
  lVar7 = *(long *)(unaff_x20 + 0xa8);
  if (lVar7 != 0) {
    lVar4 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c615f0(lVar7);
    func_0x000107c466c0(param_3);
    uVar6 = 0;
    FUN_1025086e4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(lVar4 + 0x38) = uVar6;
    *(undefined **)(lVar4 + 0x20) = puVar2;
    lVar5 = lVar4;
    func_0x000107c5fc48(lVar4,puVar1 + 8);
    func_0x000107c61574(lVar4);
    lVar4 = lVar7;
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar4 == 0) {
      func_0x000107c615e8(lVar7);
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x000107c60234(&uStack_90,lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(lVar7);
    }
    func_0x00010006e7f4(&uStack_90);
  }
  return;
}



/* Entry: 102505c24; end: 102505c2b;  */

void FUN_102505c24(void)

{
  return;
}



/* Entry: 102505c2c; end: 102505ccf;  */

void FUN_102505c2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  uVar1 = param_1;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x000107c4c458(param_4);
    func_0x000107c61180();
    func_0x000107c5ea20();
    func_0x000107c615e8(param_4);
    FUN_10250594c(param_1,param_2,uVar1,0);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 102505cd0; end: 102505cd3;  */

void FUN_102505cd0(void)

{
  return;
}



/* Entry: 102505cd4; end: 102505d2f;  */

void FUN_102505cd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c3eca4(param_2);
  func_0x000107c61180();
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c5a3c8(param_2);
  func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102505d30; end: 102505f5b;  */

void FUN_102505d30(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      puVar2 = &UNK_11051abc0;
      func_0x000107c613fc(&UNK_11051abc0,0x30,7);
      *(undefined8 *)(puVar2 + 0x10) = param_4;
      *(undefined8 *)(puVar2 + 0x18) = param_5;
      *(long *)(puVar2 + 0x20) = lVar1;
      *(undefined8 *)(puVar2 + 0x28) = uVar9;
      pcVar8 = *(code **)(*param_3 + 0x60);
      func_0x000107c61434(param_5);
      func_0x000107c61174(lVar1);
      pcVar3 = FUN_102508674;
      puVar7 = puVar2;
      (*pcVar8)(FUN_102508674);
      func_0x000107c61574(puVar2);
      func_0x000107c614f0(pcVar3);
      uVar9 = *(undefined8 *)(param_1 + 0x120);
      pcVar8 = *(code **)(puVar7 + 0x10);
      func_0x000107c6157c(uVar9);
      (*pcVar8)();
      func_0x000107c615e8(pcVar3);
      func_0x000107c61574(uVar9);
      lVar4 = *(long *)(param_1 + 0xf0);
      if (lVar4 != 0) {
        func_0x000107c61174();
        lVar5 = lVar4;
        func_0x000107c3deb4();
        func_0x000107c61180();
        func_0x000107c614f0();
        plVar6 = (long *)0x0;
        func_0x000103b3dff8();
        FUN_10267c6f8();
        func_0x000107c615e8(lVar5);
        puVar2 = &UNK_11051abe8;
        func_0x000107c613fc(&UNK_11051abe8,0x20,7);
        *(undefined8 *)(puVar2 + 0x10) = param_6;
        *(undefined8 *)(puVar2 + 0x18) = param_7;
        pcVar8 = *(code **)(*plVar6 + 0x60);
        func_0x000107c6157c(param_7);
        pcVar3 = FUN_102508680;
        puVar7 = puVar2;
        (*pcVar8)(FUN_102508680);
        func_0x000107c61574(plVar6);
        func_0x000107c61574(puVar2);
        pcVar8 = pcVar3;
        func_0x000107c614f0(pcVar3);
        (**(code **)(puVar7 + 0x10))(*(undefined8 *)(param_1 + 0x120),pcVar8,puVar7);
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(pcVar3);
        func_0x000107c61574(param_1);
        func_0x000107c61170(lVar1);
        return;
      }
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102505f5c; end: 10250601b;  */

/* WARNING: Possible PIC construction at 0x000102505fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102506000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102505fd4) */
/* WARNING: Removing unreachable block (ram,0x000102506004) */

void FUN_102505f5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c5fb78(param_2,param_3);
  uVar1 = 0x2d656d6f68;
  func_0x000107c5fadc(0x2d656d6f68,0xe500000000000000);
  func_0x000107c6142c(0xe500000000000000);
  func_0x00010676a7fc(uVar2,uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10250601c; end: 1025069a3;  */

void FUN_10250601c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  ppuVar12 = &puStack_a0;
  ppuVar13 = &puStack_a0;
  ppuVar14 = &puStack_a0;
  ppuVar15 = &puStack_a0;
  ppuVar16 = &puStack_a0;
  ppuVar17 = &puStack_a0;
  ppuVar18 = &puStack_a0;
  ppuVar19 = &puStack_a0;
  ppuVar20 = &puStack_a0;
  ppuVar21 = &puStack_a0;
  ppuVar23 = &puStack_a0;
  ppuVar24 = &puStack_a0;
  if (param_1 != 0) {
    uVar2 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010f0a7990);
    puVar22 = &UNK_11051a760;
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_102507e3c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101279ab8;
    puStack_88 = &UNK_11051a778;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e44;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10127a6c0;
    puStack_88 = &UNK_11051a7a0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c3e908(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a79b0);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e4c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101279ab8;
    puStack_88 = &UNK_11051a7c8;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e54;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10127a6c0;
    puStack_88 = &UNK_11051a7f0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c3e908(param_1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f0a79d0);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e5c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101279ab8;
    puStack_88 = &UNK_11051a818;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e64;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10127a6c0;
    puStack_88 = &UNK_11051a840;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c3e908(param_1);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar2);
    uVar2 = 0x64696f72746e6563;
    func_0x000107c5fadc(0x64696f72746e6563,0xe800000000000000);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e6c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_102506cfc;
    puStack_88 = &UNK_11051a868;
    puStack_78 = puVar3;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    pcStack_80 = FUN_102506da8;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101138058;
    puStack_88 = &UNK_11051a890;
    func_0x000107c60bc4();
    func_0x000107c3e8f0(param_1);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6576654c6d6f6f7a;
    func_0x000107c5fadc(0x6576654c6d6f6f7a,0xe90000000000006c);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e74;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10137c71c;
    puStack_88 = &UNK_11051a8b8;
    puStack_78 = puVar3;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    pcStack_80 = FUN_102506e18;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101138058;
    puStack_88 = &UNK_11051a8e0;
    func_0x000107c60bc4();
    func_0x000107c3e8f8(param_1);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f0a79f0);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e7c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101279ab8;
    puStack_88 = &UNK_11051a908;
    puStack_78 = puVar3;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e84;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10127a6c0;
    puStack_88 = &UNK_11051a930;
    puStack_78 = puVar3;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    func_0x000107c3e908(param_1);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(uVar2);
    uVar2 = 0x63616c50776f6873;
    func_0x000107c5fadc(0x63616c50776f6873,0xec0000006e695065);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e8c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10137c454;
    puStack_88 = &UNK_11051a958;
    puStack_78 = puVar3;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e94;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101138058;
    puStack_88 = &UNK_11051a980;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c3e8f4(param_1);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c61170(uVar2);
    uVar2 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f0a7a10);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507e9c;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1013e6cc8;
    puStack_88 = &UNK_11051a9a8;
    puStack_78 = puVar3;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    pcStack_80 = FUN_1025073ec;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101138058;
    puStack_88 = &UNK_11051a9d0;
    func_0x000107c60bc4();
    func_0x000107c3e904(param_1);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c61170(uVar2);
    uVar2 = 0x6863746970;
    func_0x000107c5fadc(0x6863746970,0xe500000000000000);
    puVar3 = puVar22;
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_80 = (code *)0x102507ea4;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10137c71c;
    puStack_88 = &UNK_11051a9f8;
    puStack_78 = puVar3;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    pcStack_80 = FUN_10250745c;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101138058;
    puStack_88 = &UNK_11051aa20;
    func_0x000107c60bc4();
    func_0x000107c3e8f8(param_1);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar20);
    func_0x000107c61170(uVar2);
    uVar2 = 0x7461746f5270616d;
    func_0x000107c5fadc(0x7461746f5270616d,0xeb000000006e6f69);
    func_0x000107c613fc(&UNK_11051a760,0x18,7);
    func_0x000107c61644(puVar22 + 0x10);
    pcStack_80 = (code *)0x102507eac;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_10137c71c;
    puStack_88 = &UNK_11051aa48;
    puStack_78 = puVar22;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_78);
    pcStack_80 = FUN_1025074d8;
    puStack_78 = (undefined *)0x0;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101138058;
    puStack_88 = &UNK_11051aa70;
    func_0x000107c60bc4();
    func_0x000107c3e8f8(param_1);
    func_0x000107c60bd0(ppuVar24);
    func_0x000107c60bd0(ppuVar23);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1025069a4; end: 102506a17;  */

void FUN_1025069a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0xb0);
    *(undefined8 *)(param_3 + 0xb0) = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102506a18; end: 102506a6f;  */

void FUN_102506a18(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0xb0) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102506a70; end: 102506ae3;  */

void FUN_102506a70(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0xa0) = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102506ae4; end: 102506b3b;  */

void FUN_102506ae4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102506b3c; end: 102506baf;  */

void FUN_102506b3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0xa8);
    *(undefined8 *)(param_3 + 0xa8) = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102506bb0; end: 102506c07;  */

void FUN_102506bb0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0xa8) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102506c08; end: 102506cfb;  */

void FUN_102506c08(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  uVar3 = 0;
  uVar4 = 0;
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) == 2)) {
      func_0x0001000bb420(param_2 + 0x20,auStack_68);
      puVar1 = PTR___sypN_11034f1a8;
      func_0x000107c6147c(&uStack_70,auStack_68,PTR___sypN_11034f1a8 + 8,PTR___sSdN_11034dd90,6);
      uVar2 = uStack_70;
      if ((uVar3 & 1) != 0) {
        func_0x0001000bb420(param_2 + 0x40,auStack_68);
        func_0x000107c6147c(&uStack_70,auStack_68,puVar1 + 8,PTR___sSdN_11034dd90,6);
        if ((uVar4 & 1) != 0) {
          *(undefined8 *)(param_4 + 0xc0) = uVar2;
          *(undefined8 *)(param_4 + 200) = uStack_70;
          *(undefined1 *)(param_4 + 0xd0) = 0;
          FUN_1025074dc();
          func_0x000107c61574(param_4);
          return;
        }
      }
    }
    func_0x000107c61574(param_4);
  }
  return;
}



/* Entry: 102506cfc; end: 102506da7;  */

uint FUN_102506cfc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fc54(param_3,PTR___sypN_11034f1a8 + 8);
  }
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_4);
  uVar3 = param_2;
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_4);
  func_0x000107c6142c(param_3);
  return (uint)uVar3 & 1;
}



/* Entry: 102506da8; end: 102506dab;  */

void FUN_102506da8(void)

{
  return;
}



/* Entry: 102506dac; end: 102506e17;  */

bool FUN_102506dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    *(undefined8 *)(param_4 + 0xd8) = param_1;
    FUN_1025074dc();
    func_0x000107c61574(param_4);
  }
  return param_4 != 0;
}



/* Entry: 102506e18; end: 102506e1b;  */

void FUN_102506e18(void)

{
  return;
}



/* Entry: 102506e1c; end: 102506f83;  */

void FUN_102506e1c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if ((param_2 == 0) || (lVar7 = *(long *)(param_3 + 0xf0), lVar7 == 0)) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c615f0(param_2);
      func_0x000107c61174(lVar7);
      lVar1 = lVar7;
      func_0x000107c3deb4();
      func_0x000107c61180();
      func_0x000107c614f0();
      plVar2 = (long *)0x0;
      func_0x000103b3c7ec();
      FUN_10267c6f8();
      func_0x000107c615e8(lVar1);
      puVar3 = &UNK_11051a760;
      func_0x000107c613fc(&UNK_11051a760,0x18,7);
      func_0x000107c61644(puVar3 + 0x10,param_3);
      puVar4 = &UNK_11051aaa8;
      func_0x000107c613fc(&UNK_11051aaa8,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(long *)(puVar4 + 0x18) = param_2;
      pcVar8 = *(code **)(*plVar2 + 0x60);
      func_0x000107c615f0(param_2);
      pcVar5 = FUN_1025085cc;
      puVar3 = puVar4;
      (*pcVar8)();
      func_0x000107c61574(plVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(param_2);
      uVar6 = *(undefined8 *)(param_3 + 0x110);
      *(code **)(param_3 + 0x110) = pcVar5;
      *(undefined **)(param_3 + 0x118) = puVar3;
      func_0x000107c61574(param_3);
      func_0x000107c615e8(uVar6);
    }
  }
  return;
}



/* Entry: 102506f84; end: 102506fdb;  */

void FUN_102506f84(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined8 *)(param_2 + 0x118) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102506fdc; end: 10250721b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102506fdc(undefined8 param_1,byte param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    *(byte *)(param_4 + 0x108) = param_2 & 1;
    lVar3 = *(long *)(param_4 + 0x100);
    if (lVar3 == 0) {
      func_0x000107c61574(param_4);
    }
    else if ((param_2 & 1) == 0) {
      uVar1 = *(undefined8 *)(lVar3 + _DAT_112fed3c0);
      uVar2 = ((undefined8 *)(lVar3 + _DAT_112fed3c0))[1];
      func_0x000107c61174();
      func_0x000107c61434(uVar2);
      func_0x000102507b08(uVar1,uVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61574(param_4);
      func_0x000107c6142c(uVar2);
    }
    else {
      func_0x000107c61174();
      FUN_1025079a8();
      func_0x000107c61574(param_4);
      func_0x000107c61170(lVar3);
    }
  }
  return param_4 != 0;
}



/* Entry: 10250721c; end: 1025073eb;  */

/* WARNING: Possible PIC construction at 0x000102507270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102507298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025072bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025072e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025073b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025073c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025073b8) */
/* WARNING: Removing unreachable block (ram,0x0001025072ec) */
/* WARNING: Removing unreachable block (ram,0x0001025072c0) */
/* WARNING: Removing unreachable block (ram,0x00010250730c) */
/* WARNING: Removing unreachable block (ram,0x000102507314) */
/* WARNING: Removing unreachable block (ram,0x0001025072d4) */
/* WARNING: Removing unreachable block (ram,0x00010250729c) */
/* WARNING: Removing unreachable block (ram,0x000102507274) */
/* WARNING: Removing unreachable block (ram,0x000102507288) */
/* WARNING: Removing unreachable block (ram,0x0001025073c8) */

void FUN_10250721c(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0xf0);
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c4aad8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c4223c();
    lVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1025073ec; end: 1025073ef;  */

void FUN_1025073ec(void)

{
  return;
}



/* Entry: 1025073f0; end: 10250745b;  */

bool FUN_1025073f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    *(undefined8 *)(param_4 + 0xe0) = param_1;
    FUN_1025074dc();
    func_0x000107c61574(param_4);
  }
  return param_4 != 0;
}



/* Entry: 10250745c; end: 10250745f;  */

void FUN_10250745c(void)

{
  return;
}



/* Entry: 102507460; end: 1025074d7;  */

bool FUN_102507460(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  if (param_1 < 0.0) {
    return false;
  }
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    *(double *)(param_4 + 0xe8) = param_1;
    FUN_1025074dc();
    func_0x000107c61574(param_4);
  }
  return param_4 != 0;
}



/* Entry: 1025074d8; end: 1025074db;  */

void FUN_1025074d8(void)

{
  return;
}



/* Entry: 1025074dc; end: 1025076eb;  */

/* WARNING: Possible PIC construction at 0x000102507590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102507628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102507638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102507664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102507674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102507668) */
/* WARNING: Removing unreachable block (ram,0x00010250763c) */
/* WARNING: Removing unreachable block (ram,0x00010250762c) */
/* WARNING: Removing unreachable block (ram,0x000102507594) */
/* WARNING: Removing unreachable block (ram,0x000102507680) */
/* WARNING: Removing unreachable block (ram,0x000102507598) */
/* WARNING: Removing unreachable block (ram,0x000102507678) */
/* WARNING: Removing unreachable block (ram,0x0001025076d0) */

void FUN_1025074dc(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  if (*(char *)(unaff_x20 + 0xd0) != '\x01') {
    uStack_98 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_90 = *(undefined8 *)(unaff_x20 + 200);
    if ((*(long *)(unaff_x20 + 0x58) < 0) && (*(long *)(unaff_x20 + 0x70) == 0)) {
      lVar1 = *(long *)(unaff_x20 + 0xf0);
      if (lVar1 != 0) {
        func_0x000107c61174();
        func_0x000107c3f140();
        func_0x000107c61180();
        func_0x000107c49cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar1);
        return;
      }
    }
    else {
      uStack_80 = *(undefined8 *)(unaff_x20 + 0xe0);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0xd8);
      uStack_70 = *(undefined8 *)(unaff_x20 + 0x40);
      uStack_78 = *(undefined8 *)(unaff_x20 + 0x38);
      uStack_60 = *(undefined8 *)(unaff_x20 + 0x50);
      uStack_68 = *(undefined8 *)(unaff_x20 + 0x48);
      uStack_58 = 0;
      func_0x0001002a64a8(*(undefined8 *)(unaff_x20 + 0xb8),&uStack_98);
    }
  }
  return;
}



/* Entry: 1025076ec; end: 1025079a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025076ec(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  
  lVar11 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar9 = *(long *)(lVar11 + _DAT_112fed990);
    if (lVar9 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      lVar4 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      uVar7 = *(undefined8 *)(lVar11 + _DAT_112fed980);
      uVar8 = ((undefined8 *)(lVar11 + _DAT_112fed980))[1];
      *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar4 + 0x20) = uVar7;
      *(undefined8 *)(lVar4 + 0x28) = uVar8;
      func_0x000107c61438(uVar8,2);
      func_0x000107c61174();
      puVar3 = PTR___sypN_11034f1a8;
      lVar5 = lVar4;
      func_0x000107c5fc48(lVar4,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61574(lVar4);
      func_0x000107c4e5f4();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (param_3 == 0) {
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_d0,param_3);
        func_0x000107c615e8(param_3);
      }
      func_0x00010006e7f4(&uStack_d0);
      uVar10 = *(undefined8 *)(lVar9 + _DAT_112fed468);
      uVar1 = *(undefined8 *)(lVar9 + _DAT_112fed460);
      uVar2 = ((undefined8 *)(lVar9 + _DAT_112fed460))[1];
      uVar13 = *(undefined8 *)(lVar11 + _DAT_112fed988);
      uVar14 = ((undefined8 *)(lVar11 + _DAT_112fed988))[1];
      uVar15 = *(undefined8 *)(lVar9 + _DAT_112fed470);
      uVar16 = ((undefined8 *)(lVar9 + _DAT_112fed470))[1];
      uVar17 = *(undefined8 *)(lVar9 + _DAT_112fed478);
      uVar18 = ((undefined8 *)(lVar9 + _DAT_112fed478))[1];
      uVar12 = *(undefined8 *)(lVar9 + _DAT_112fed480);
      func_0x000107c61434(uVar10);
      func_0x000107c61434(uVar2);
      func_0x000107c5f9dc(uVar12,PTR___sSSN_11034da80,puVar3 + 8,PTR___sSSSHsWP_11034da90);
      uVar6 = 0;
      func_0x000103b390e4(0);
      func_0x000107c610f8();
      func_0x000103b386bc(uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar7,uVar8,uVar10,uVar1,uVar2,
                          uVar12,uVar6);
      if (*(char *)(param_2 + 0x108) == '\x01') {
        FUN_1025079a8(uVar7);
        func_0x000107c61574(param_2);
        func_0x000107c61170(lVar9);
        uVar8 = uVar7;
      }
      else {
        func_0x000107c61170(lVar9);
        uVar8 = *(undefined8 *)(param_2 + 0x100);
        *(undefined8 *)(param_2 + 0x100) = uVar7;
        func_0x000107c61574(param_2);
      }
      func_0x000107c61170(uVar8);
    }
  }
  return;
}



/* Entry: 1025079a8; end: 102507c17;  */

/* WARNING: Possible PIC construction at 0x000102507a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102507aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102507ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102507aac) */
/* WARNING: Removing unreachable block (ram,0x000102507a44) */
/* WARNING: Removing unreachable block (ram,0x000102507abc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025079a8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x20 + 0xf0);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = *(long *)(unaff_x20 + 0x100);
  if (lVar7 == 0) {
LAB_102507a50:
    func_0x000107c61174(lVar6);
  }
  else {
    uVar1 = *(ulong *)(lVar7 + _DAT_112fed3c0);
    uVar3 = ((ulong *)(lVar7 + _DAT_112fed3c0))[1];
    uVar2 = *(ulong *)(param_1 + _DAT_112fed3c0);
    uVar4 = ((ulong *)(param_1 + _DAT_112fed3c0))[1];
    if (uVar1 == uVar2 && uVar3 == uVar4) goto LAB_102507a50;
    uVar5 = uVar1;
    func_0x000107c605b8(uVar1,uVar3,uVar2,uVar4,0);
    func_0x000107c61174(lVar6);
    if ((uVar5 & 1) == 0) {
      func_0x000107c61174(lVar7);
      func_0x000107c61434(uVar3);
      func_0x000102507b08(uVar1,uVar3);
      lVar6 = lVar7;
      goto code_r0x000107c61170;
    }
  }
  func_0x0001067693a8(param_1);
  func_0x000107c61180();
  func_0x000107c51a88(lVar6);
  func_0x000107c61180();
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110e30138);
  func_0x000107c3d68c(lVar6);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 102507c18; end: 102507c3b;  */

void FUN_102507c18(long param_1,long param_2)

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



/* Entry: 102507c3c; end: 102507d03;  */

void FUN_102507c3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(uVar7);
  FUN_102507dcc(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  return;
}



/* Entry: 102507d04; end: 102507d23;  */

void FUN_102507d04(void)

{
  FUN_102507c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102507d24; end: 102507d63;  */

void FUN_102507d24(void)

{
  FUN_10250482c();
  return;
}



/* Entry: 102507d64; end: 102507dcb;  */

/* WARNING: Possible PIC construction at 0x000102507d94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102507d98) */
/* WARNING: Removing unreachable block (ram,0x000102507d9c) */

void FUN_102507d64(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112ea31d0;
    plVar5 = (long *)&UNK_10dab5698;
  }
  else {
    puVar3 = (ulong *)0x112ea31b8;
    plVar5 = (long *)&UNK_10dab5680;
    unaff_x30 = 0x102507d98;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 102507dcc; end: 102507e0b;  */

/* WARNING: Possible PIC construction at 0x000102507df0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102507df4) */

void FUN_102507dcc(ulong param_1)

{
  if ((long)param_1 < 0) {
    param_1 = param_1 & 0x7fffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102507e0c; end: 102507e1b;  */

undefined1  [16] FUN_102507e0c(void)

{
  return ZEXT816(0x11051a740);
}



/* Entry: 102507e1c; end: 102507e3b;  */

void FUN_102507e1c(void)

{
  func_0x000107c61168(&PTR_PTR_112ea2f78);
  return;
}



/* Entry: 102507e3c; end: 102507eb3;  */

void FUN_102507e3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0xb0) = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 102507eb4; end: 102507fdb;  */

ulong FUN_102507eb4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102507fdc);
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
  FUN_102507fdc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102507fd8);
      (*pcVar1)();
    }
    FUN_10250805c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102507fdc; end: 10250805b;  */

undefined * FUN_102507fdc(undefined *param_1,undefined *param_2)

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
    FUN_102507d64();
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



/* Entry: 10250805c; end: 1025085cb;  */

long FUN_10250805c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10250817c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102508180);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ea31b8;
        func_0x0001000285a8(0x112ea31b8,&UNK_10dab5680);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ea31b8;
      func_0x0001000285a8(0x112ea31b8,&UNK_10dab5680);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102508178);
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



/* Entry: 1025085cc; end: 1025085df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025085cc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar13 = *param_1;
  func_0x000107c61428(lVar4 + 0x10,auStack_a8,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lVar11 = *(long *)(lVar13 + _DAT_112fed990);
    if (lVar11 == 0) {
      func_0x000107c61574(lVar4);
    }
    else {
      lVar5 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      uVar9 = *(undefined8 *)(lVar13 + _DAT_112fed980);
      uVar10 = ((undefined8 *)(lVar13 + _DAT_112fed980))[1];
      *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar5 + 0x20) = uVar9;
      *(undefined8 *)(lVar5 + 0x28) = uVar10;
      func_0x000107c61438(uVar10,2);
      func_0x000107c61174();
      puVar3 = PTR___sypN_11034f1a8;
      lVar6 = lVar5;
      func_0x000107c5fc48(lVar5,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61574(lVar5);
      func_0x000107c4e5f4();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 == 0) {
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x000107c60234(&uStack_d0,lVar7);
        func_0x000107c615e8(lVar7);
      }
      func_0x00010006e7f4(&uStack_d0);
      uVar12 = *(undefined8 *)(lVar11 + _DAT_112fed468);
      uVar1 = *(undefined8 *)(lVar11 + _DAT_112fed460);
      uVar2 = ((undefined8 *)(lVar11 + _DAT_112fed460))[1];
      uVar15 = *(undefined8 *)(lVar13 + _DAT_112fed988);
      uVar16 = ((undefined8 *)(lVar13 + _DAT_112fed988))[1];
      uVar17 = *(undefined8 *)(lVar11 + _DAT_112fed470);
      uVar18 = ((undefined8 *)(lVar11 + _DAT_112fed470))[1];
      uVar19 = *(undefined8 *)(lVar11 + _DAT_112fed478);
      uVar20 = ((undefined8 *)(lVar11 + _DAT_112fed478))[1];
      uVar14 = *(undefined8 *)(lVar11 + _DAT_112fed480);
      func_0x000107c61434(uVar12);
      func_0x000107c61434(uVar2);
      func_0x000107c5f9dc(uVar14,PTR___sSSN_11034da80,puVar3 + 8,PTR___sSSSHsWP_11034da90);
      uVar8 = 0;
      func_0x000103b390e4(0);
      func_0x000107c610f8();
      func_0x000103b386bc(uVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar9,uVar10,uVar12,uVar1,uVar2,
                          uVar14,uVar8);
      if (*(char *)(lVar4 + 0x108) == '\x01') {
        FUN_1025079a8(uVar9);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(lVar11);
        uVar10 = uVar9;
      }
      else {
        func_0x000107c61170(lVar11);
        uVar10 = *(undefined8 *)(lVar4 + 0x100);
        *(undefined8 *)(lVar4 + 0x100) = uVar9;
        func_0x000107c61574(lVar4);
      }
      func_0x000107c61170(uVar10);
    }
  }
  return;
}



/* Entry: 1025085e0; end: 10250860b;  */

void FUN_1025085e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10250860c; end: 102508633;  */

void FUN_10250860c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar5 = &UNK_11051a760;
  puVar3 = puVar5;
  func_0x000107c613fc(&UNK_11051a760,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,uVar1);
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_11051a760,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,uVar1);
  puStack_70 = puVar4;
  uStack_68 = uVar2;
  uStack_60 = uVar6;
  func_0x000107c613fc(&UNK_11051a760,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,uVar1);
  puStack_a0 = puVar5;
  uStack_98 = uVar2;
  uStack_90 = uVar6;
  func_0x000103b3598c(FUN_1025086c4,puVar3,FUN_102505874,0,0x102505878,0,0x1025086cc,auStack_80,
                      FUN_102505c24,0,0x102505c28,0,0x1025086d8,auStack_b0,FUN_102505cd0,0);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 102508634; end: 102508673;  */

/* WARNING: Possible PIC construction at 0x000102508658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010250865c) */

void FUN_102508634(ulong param_1)

{
  if ((long)param_1 < 0) {
    param_1 = param_1 & 0x7fffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 102508674; end: 10250867f;  */

/* WARNING: Possible PIC construction at 0x000102505fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102506000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102505fd4) */
/* WARNING: Removing unreachable block (ram,0x000102506004) */

void FUN_102508674(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = 0x2d656d6f68;
  func_0x000107c5fadc(0x2d656d6f68,0xe500000000000000);
  func_0x000107c6142c(0xe500000000000000);
  func_0x00010676a7fc(uVar2,uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102508680; end: 1025086c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102508680(long *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(*param_1 + _DAT_112fedc58),*(undefined8 *)(*param_1 + _DAT_112fedc60));
  return;
}



/* Entry: 1025086c4; end: 1025086e3;  */

void FUN_1025086c4(byte param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 0xb0);
    if (lVar4 == 0) {
      func_0x000107c61574();
    }
    else {
      lVar2 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined **)(lVar2 + 0x38) = PTR___sSbN_11034dd40;
      *(byte *)(lVar2 + 0x20) = param_1 & 1;
      func_0x000107c615f0(lVar4);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61574(lVar2);
      lVar2 = lVar4;
      func_0x000107c4e5f4();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 == 0) {
        func_0x000107c615e8(lVar4);
        func_0x000107c61574(lVar1);
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x000107c60234(&uStack_80,lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar4);
        func_0x000107c61574(lVar1);
      }
      func_0x00010006e7f4(&uStack_80);
    }
  }
  return;
}



/* Entry: 1025086e4; end: 102508723;  */

void FUN_1025086e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102508724; end: 1025087e3;  */

void FUN_102508724(long param_1,long param_2)

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



/* Entry: 1025087e4; end: 102508eaf;  */

void FUN_1025087e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea31d8,&UNK_10dab56a0);
  puVar1 = &UNK_11051ac18;
  func_0x000107c613fc(&UNK_11051ac18,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_102508eb0,puVar1);
  return;
}



/* Entry: 102508eb0; end: 102508ee3;  */

void FUN_102508eb0(void)

{
  long unaff_x20;
  
  func_0x0001025088e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102508ee4; end: 102509413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102508ee4(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar11 = _DAT_112ea31e0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea31e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea31e8) = 0;
  lVar2 = *(long *)(param_2 + _DAT_112fcd498);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_102509010:
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61574(param_9);
    func_0x000107c615e8(*(undefined8 *)(unaff_x20 + lVar11));
    func_0x000107c61464(unaff_x20);
    return (undefined1 *)0x0;
  }
  lVar3 = *(long *)(param_3 + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(lVar2);
    goto LAB_102509010;
  }
  lVar11 = ((undefined8 *)(param_4 + _DAT_112ed0ce8))[1];
  if (lVar11 == 0) {
    func_0x000107c615f0(lVar3);
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_4 + _DAT_112ed0ce8);
    func_0x000107c615f0(lVar3);
    func_0x000107c5fadc(uVar10,lVar11);
  }
  puVar4 = PTR_PTR_1126c6550;
  func_0x000107c610f8();
  func_0x000107c488bc();
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(uVar10);
  *(undefined **)(unaff_x20 + _DAT_112ea31f0) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea31f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3200) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea3208) = param_9;
  func_0x000107c6157c();
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  lVar11 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102509410);
    (*pcVar1)();
  }
  uVar10 = param_8;
  func_0x000107c4c440(param_8);
  func_0x000107c61180();
  uVar5 = uVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  puVar6 = auStack_70;
  func_0x000107c61154(0,0,0x4070000000000000,0x4070000000000000,0x4032000000000000,puVar6,
                      PTR_s_initWithFrame_maxMapZoomLevel_na_1125e2c08,lVar2,lVar11,0,uVar5,0);
  func_0x000107c615e8(lVar11);
  func_0x000107c615e8(uVar5);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0x70616d5f70616e73;
  func_0x000107c5fadc(0x70616d5f70616e73,0xe800000000000000);
  func_0x000107c520f4(puVar6);
  func_0x000107c61170(uVar10);
  puVar4 = PTR_PTR_1126c63b8;
  func_0x000107c61168(PTR_PTR_1126c63b8);
  func_0x000107c5e8dc();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c49684(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c5a378(puVar6);
  func_0x000107c61170(puVar6);
  lVar11 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102509414);
    (*pcVar1)();
  }
  lVar9 = lVar11;
  func_0x0001090219b4();
  func_0x000107c615e8(lVar11);
  if ((int)lVar9 != 0) {
    puVar7 = puVar6;
    func_0x000107c4c3e4();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c4438c();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    if (puVar8 != (undefined1 *)0x0) {
      lVar9 = 0;
      func_0x000102702b24();
      func_0x000107c613fc();
      *(undefined1 **)(lVar9 + 0x10) = puVar8;
      lStack_80 = lVar9;
      func_0x000107c61174(puVar8);
      func_0x00010008a7c8(&uStack_78,&lStack_80);
      func_0x000100083b20(&lStack_80);
      func_0x000107c61574(uStack_78);
      lVar11 = _DAT_112ea31e0;
      uVar10 = *(undefined8 *)(puVar6 + _DAT_112ea31e0);
      *(long *)(puVar6 + _DAT_112ea31e0) = lStack_80;
      func_0x000107c615e8(uVar10);
      lVar11 = *(long *)(puVar6 + lVar11);
      if (lVar11 != 0) {
        func_0x000107c615f0(lVar11);
        func_0x000107c5ba38();
        func_0x000107c615e8(lVar11);
      }
      func_0x000107c61574(lVar9);
      goto LAB_10250936c;
    }
  }
  puVar8 = puVar6;
  func_0x000107c61174(puVar6);
  FUN_102509670();
LAB_10250936c:
  func_0x000107c61170(puVar8);
  func_0x000107c61174(puVar6);
  FUN_102509af0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(puVar6);
  return puVar6;
}



/* Entry: 102509414; end: 10250948f; -[SCComposerEmbeddedMapView didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102509414(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_102509cb8();
  puVar1 = PTR_s_didMoveToSuperview_1125bb968;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  lVar2 = _DAT_112ea31e8;
  if ((*(byte *)(param_1 + _DAT_112ea31e8) & 1) == 0) {
    func_0x000107c4bfb8(*(undefined8 *)(param_1 + _DAT_112ea31f0));
    *(undefined1 *)(param_1 + lVar2) = 1;
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102509490; end: 1025094bb; -[SCComposerEmbeddedMapView initWithFrame:maxMapZoomLevel:nativeMapSDK:configProvider:viewportMetadataProvider:mapUserPreferences:tabPosition:] */

void FUN_102509490(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EmbeddedMapImplementation.EmbeddedMapView",0x29,
                      "init(frame:maxMapZoomLevel:nativeMapSDK:configProvider:viewportMetadataProvider:mapUserPreferences:tabPosition:)"
                      ,0x70,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025094bc);
  (*pcVar1)();
}



/* Entry: 1025094bc; end: 1025094e7; -[SCComposerEmbeddedMapView initWithFrame:maxMapZoomLevel:nativeMapSDK:configProvider:] */

void FUN_1025094bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("EmbeddedMapImplementation.EmbeddedMapView",0x29,
                      "init(frame:maxMapZoomLevel:nativeMapSDK:configProvider:)",0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025094e8);
  (*pcVar1)();
}



/* Entry: 1025094e8; end: 10250959f; -[SCComposerEmbeddedMapView initWithFrame:styleURL:mapSdk:] */

void FUN_1025094e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 != 0) {
    func_0x000107c5edb4(&stack0xffffffffffffffe0 + -extraout_x8,param_3);
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  else {
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))
            (&stack0xffffffffffffffe0 + -extraout_x8,param_3 == 0,1);
  func_0x000107c60eb0("EmbeddedMapImplementation.EmbeddedMapView",0x29,
                      "init(frame:styleURL:mapSdk:)",0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025095a0);
  (*pcVar1)();
}



/* Entry: 1025095a0; end: 1025095cf;  */

void FUN_1025095a0(void)

{
  FUN_102509cb8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1025095d0; end: 10250966f; -[SCComposerEmbeddedMapView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025095d0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea31f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3200));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea31f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3208));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea31e0));
  return;
}



/* Entry: 102509670; end: 102509aef;  */

/* WARNING: Possible PIC construction at 0x0001025096bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102509724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025099d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025099e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025099f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102509a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102509a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102509a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102509a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102509a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102509a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102509adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102509a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102509ae0) */
/* WARNING: Removing unreachable block (ram,0x000102509a5c) */
/* WARNING: Removing unreachable block (ram,0x000102509a44) */
/* WARNING: Removing unreachable block (ram,0x000102509a34) */
/* WARNING: Removing unreachable block (ram,0x000102509a24) */
/* WARNING: Removing unreachable block (ram,0x000102509a14) */
/* WARNING: Removing unreachable block (ram,0x0001025099fc) */
/* WARNING: Removing unreachable block (ram,0x0001025099ec) */
/* WARNING: Removing unreachable block (ram,0x0001025099dc) */
/* WARNING: Removing unreachable block (ram,0x000102509728) */
/* WARNING: Removing unreachable block (ram,0x000102509a94) */
/* WARNING: Removing unreachable block (ram,0x00010250972c) */
/* WARNING: Removing unreachable block (ram,0x000102509818) */
/* WARNING: Removing unreachable block (ram,0x000102509830) */
/* WARNING: Removing unreachable block (ram,0x000102509acc) */
/* WARNING: Removing unreachable block (ram,0x0001025098e0) */
/* WARNING: Removing unreachable block (ram,0x000102509ad8) */
/* WARNING: Removing unreachable block (ram,0x0001025098f8) */
/* WARNING: Removing unreachable block (ram,0x000102509ae4) */
/* WARNING: Removing unreachable block (ram,0x000102509918) */
/* WARNING: Removing unreachable block (ram,0x0001025096c0) */
/* WARNING: Removing unreachable block (ram,0x000102509a74) */
/* WARNING: Removing unreachable block (ram,0x0001025096c8) */
/* WARNING: Removing unreachable block (ram,0x000102509ac8) */
/* WARNING: Removing unreachable block (ram,0x00010250970c) */
/* WARNING: Removing unreachable block (ram,0x000102509a9c) */

void FUN_102509670(undefined8 param_1)

{
  func_0x000107c51a88();
  func_0x000107c61180();
  func_0x000107c4438c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102509af0; end: 102509cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102509af0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + _DAT_11302eac8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    puVar3 = &UNK_11051ac68;
    func_0x000107c613fc(&UNK_11051ac68,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    uStack_50 = 0x102509ce8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x102509d1c;
    puStack_58 = &UNK_11051ac80;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c3e4fc(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    puVar3 = PTR_PTR_1126c6388;
    func_0x000107c610f8();
    func_0x000107c475f8();
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    *(undefined **)(param_2 + 0x28) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar8);
    lVar6 = _DAT_113053888;
    lVar9 = *(long *)(param_2 + 0x18);
    lVar5 = *(long *)(lVar9 + _DAT_113053888);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c4fc5c();
      func_0x000107c615e8(lVar5);
    }
    lVar6 = *(long *)(lVar9 + lVar6);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      puVar7 = puVar3;
      func_0x000107c61174(puVar3);
      func_0x000107c4fbb8(lVar6);
      func_0x000107c615e8(lVar6);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102509cb8; end: 102509cd7;  */

void FUN_102509cb8(void)

{
  func_0x000107c61168(&PTR_PTR_11284b038);
  return;
}



/* Entry: 102509cd8; end: 102509d23;  */

undefined1  [16] FUN_102509cd8(void)

{
  return ZEXT816(0x11051ac48);
}



/* Entry: 102509d24; end: 102509e43;  */

void FUN_102509d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea3238,&UNK_10dab5730);
  puVar1 = &UNK_11051ad10;
  func_0x000107c613fc(&UNK_11051ad10,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102509e44,puVar1);
  return;
}



/* Entry: 102509e44; end: 102509e4f;  */

void FUN_102509e44(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102509ee4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_48;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x10) = uStack_50;
  *(undefined8 *)(lVar1 + 0x18) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 102509e50; end: 102509e93;  */

void FUN_102509e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 102509e94; end: 102509e97;  */

void FUN_102509e94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 102509e98; end: 102509ed3;  */

void FUN_102509e98(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102509ed4; end: 102509ee3;  */

undefined1  [16] FUN_102509ed4(void)

{
  return ZEXT816(0x11051ad38);
}



/* Entry: 102509ee4; end: 102509f03;  */

void FUN_102509ee4(void)

{
  func_0x000107c61168(&PTR_PTR_112ea3280);
  return;
}



/* Entry: 102509f04; end: 10250a203;  */

void FUN_102509f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea32f8,&UNK_10dab57b0);
  puVar1 = &UNK_11051ad58;
  func_0x000107c613fc(&UNK_11051ad58,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(FUN_10250a204,puVar1);
  return;
}



/* Entry: 10250a204; end: 10250a23f;  */

void FUN_10250a204(void)

{
  long unaff_x20;
  
  func_0x00010250a050(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10250a240; end: 10250a2f3;  */

void FUN_10250a240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_3;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x30) = param_9;
  *(undefined8 *)(unaff_x20 + 0x38) = param_12;
  *(undefined8 *)(unaff_x20 + 0x78) = param_7;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_14;
  return;
}



/* Entry: 10250a2f4; end: 10250a317;  */

undefined8 FUN_10250a2f4(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 10250a318; end: 10250a3c3;  */

void FUN_10250a318(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10250a3c4; end: 10250a3d3;  */

undefined1  [16] FUN_10250a3c4(void)

{
  return ZEXT816(0x11051ad80);
}



/* Entry: 10250a3d4; end: 10250a3f3;  */

void FUN_10250a3d4(void)

{
  func_0x000107c61168(&PTR_PTR_112ea3340);
  return;
}



/* Entry: 10250a3f4; end: 10250a50f;  */

void FUN_10250a3f4(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0xd000000000000035;
    func_0x000107c5fadc(0xd000000000000035,0x800000010f0a7b80);
    lVar2 = param_2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    func_0x000107c61170(uVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10250a510; end: 10250a577;  */

void FUN_10250a510(long *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_28 = puVar1;
  func_0x0001000285a8(0x112d61fb0,&UNK_10d927f60);
  func_0x000107c613fc();
  ppuVar2 = &puStack_28;
  func_0x00010042e6a0();
  *param_1 = (long)ppuVar2;
  return;
}



/* Entry: 10250a578; end: 10250a70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250a578(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    pcVar4 = (code *)PTR_PTR_1126ae6b8;
    func_0x000107c61168();
    func_0x00010250c414(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c4a8a4();
    func_0x000107c61180();
  }
  else {
    FUN_10250a70c();
    lVar6 = *(long *)(puVar1 + _DAT_112ea3448);
    if (lVar6 == 0) {
      pcVar4 = (code *)PTR_PTR_1126ae6b8;
      func_0x000107c61168();
      func_0x00010250c414(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c4a8a4();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
    }
    else {
      uVar2 = 0;
      func_0x00010250c414(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c6157c(lVar6);
      pcVar3 = FUN_10250b704;
      func_0x0001000bfde0(FUN_10250b704,0,uVar2);
      pcVar4 = pcVar3;
      func_0x0001004575f0();
      func_0x000107c61574(lVar6);
      func_0x000107c61574(pcVar3);
    }
  }
  func_0x000107c61170(puVar1);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10250a70c; end: 10250a97b;  */

/* WARNING: Possible PIC construction at 0x00010250a954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010250a958) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250a70c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea3440);
  func_0x000107c4c3ac();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  lVar1 = _DAT_112ea3448;
  if (puVar3 == (undefined *)0x0) {
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112ea3448) == 0) {
    puVar2 = puVar3;
    func_0x000107c448d0();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c4fd74(0,puVar3);
    }
    puVar2 = puVar3;
    func_0x000107c3db8c();
    func_0x000107c61180();
    uVar4 = 0;
    func_0x00010250c414(0,0x112d5ecd8,&PTR_PTR_1126bf130);
    uVar8 = 0x112d60390;
    func_0x00010250c3d4(0x112d60390,0x112d5ecd8,&PTR_PTR_1126bf130,
                        PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
    puVar5 = puVar2;
    func_0x000107c5fe10(puVar2,uVar4,uVar8);
    func_0x000107c61170(puVar2);
    if (((ulong)puVar5 & 0xc000000000000001) == 0) {
      puVar2 = *(undefined **)(puVar5 + 0x10);
    }
    else {
      puVar2 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar2 = puVar5;
      }
      func_0x000107c6029c();
    }
    func_0x000107c6142c(puVar5);
    puStack_80 = puVar2;
    func_0x0001000285a8(0x112e65788,&UNK_10da70730);
    func_0x000107c613fc();
    func_0x00010042e6a0();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined ***)(unaff_x20 + lVar1) = ppuVar6;
    func_0x000107c61574(uVar8);
    puVar5 = puVar3;
    func_0x000107c4b93c(puVar3);
    func_0x000107c61180();
    puVar2 = &UNK_11051ae28;
    func_0x000107c613fc(&UNK_11051ae28,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_60 = FUN_10250c3cc;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101114e8c;
    puStack_68 = &UNK_11051ae68;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    puVar2 = puVar5;
    func_0x000107c5c320(puVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c3e924(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar3);
  return;
}



/* Entry: 10250a97c; end: 10250aa7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250a97c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar4 = &puStack_50;
  ppuVar6 = &puStack_50;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_50 = puVar2;
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d61fb0,&UNK_10d927f60);
    func_0x000107c613fc();
    func_0x00010042e6a0();
  }
  else {
    lVar3 = 0x112d61fb0;
    func_0x0001000285a8(0x112d61fb0,&UNK_10d927f60);
    uVar7 = (ulong)*(uint *)(lVar3 + 0x30);
    func_0x000107c613fc();
    func_0x00010042e6a0();
    puVar5 = (undefined1 *)ppuVar4;
    FUN_10250b014();
    puVar1 = (undefined8 *)(param_2 + _DAT_112ea3418);
    uVar8 = *puVar1;
    *puVar1 = puVar5;
    puVar1[1] = uVar7;
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar8);
    ppuVar6 = ppuVar4;
  }
  *param_1 = ppuVar6;
  return;
}



/* Entry: 10250aa7c; end: 10250ab23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250aa7c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112ea3410));
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea3418);
  if (lVar2 != 0) {
    lVar3 = ((long *)(unaff_x20 + _DAT_112ea3418))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10250ab24; end: 10250ab47; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin dealloc] */

void FUN_10250ab24(void)

{
  func_0x000107c61174();
  FUN_10250aa7c();
  return;
}



/* Entry: 10250ab48; end: 10250abf3; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250ab48(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea3430 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3438));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3440));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3410));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3448));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3428));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3450));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea3420));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea3418));
  return;
}



/* Entry: 10250abf4; end: 10250ad33;  */

/* WARNING: Removing unreachable block (ram,0x00010250c384) */

undefined ** FUN_10250abf4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_60;
  if ((param_1 != 0) && (param_1 != 2)) {
    ppuVar3 = (undefined **)PTR_PTR_1126ae6b8;
    if (param_1 == 1) {
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar1 = &UNK_11051ae28;
      func_0x000107c613fc(&UNK_11051ae28,0x18,7);
      func_0x000107c61614(puVar1 + 0x10);
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1011ea2b4;
      puStack_48 = &UNK_11051ae40;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puVar1);
      func_0x000107c41654(ppuVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
    }
    else {
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar1 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      func_0x000107c4d73c();
      func_0x000107c61180();
      func_0x000107c4a8a4(ppuVar3);
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
    }
    return ppuVar3;
  }
  puVar1 = PTR_PTR_1126b1490;
  func_0x000107c61168(PTR_PTR_1126b1490);
  puVar2 = puVar1;
  FUN_10250da00();
  uVar5 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c5c388(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e20eb8;
  func_0x000107c61174();
  ppuVar4 = ppuVar3;
  func_0x00010250dad0();
  puVar2 = PTR_PTR_1126b1498;
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  func_0x000107c5fadc(ppuVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c48694();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(ppuVar3);
  func_0x000107c61170(ppuVar4);
  func_0x0001000285a8(0x112e642b0,&UNK_10dab58c0);
  ppuVar4 = &puStack_48;
  puStack_48 = puVar2;
  func_0x000100854cb0(ppuVar4);
  ppuVar3 = ppuVar4;
  func_0x000104877210();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61574(ppuVar4);
  return ppuVar3;
}



/* Entry: 10250ad34; end: 10250ad6f; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin shortcutForSource:] */

void FUN_10250ad34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10250abf4(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10250ad70; end: 10250ad87; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin shortcutId] */

/* WARNING: Removing unreachable block (ram,0x00010250ad84) */

void FUN_10250ad70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10250ad88; end: 10250ad93; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin shouldShowForSource:] */

bool FUN_10250ad88(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return param_3 < 3;
}



/* Entry: 10250ad94; end: 10250ad9b; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin alwaysShow] */

undefined8 FUN_10250ad94(void)

{
  return 0;
}



/* Entry: 10250ad9c; end: 10250aebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10250ad9c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_38;
  
  if ((param_1 == 0) || (param_1 == 2)) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea3420);
    func_0x000107c6157c(uVar4);
    func_0x0001000d224c(&puStack_38);
    func_0x000107c61574(uVar4);
    pcVar1 = FUN_10250aec0;
    func_0x00010487de38(FUN_10250aec0,0);
    func_0x000107c61574(puStack_38);
    puVar2 = puStack_38;
    func_0x0001004575f0();
    func_0x000107c61574(pcVar1);
  }
  else if (param_1 == 1) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea3428);
    func_0x000107c6157c(uVar4);
    func_0x0001000d224c(&puStack_38);
    func_0x000107c61574(uVar4);
    puVar2 = puStack_38;
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x00010250c414(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c4a8a4(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
  }
  return puVar2;
}



/* Entry: 10250aec0; end: 10250af0f;  */

uint FUN_10250aec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  uVar1 = 0;
  func_0x00010250c414(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c60118(uVar2,uVar3,uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 10250af10; end: 10250af4b; -[_TtC25NearMeShortcutsDataPlugin25NearMeShortcutsDataPlugin recipientsForSource:] */

void FUN_10250af10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10250ad9c(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10250af4c; end: 10250b013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10250af4c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lStack_48;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112ea3418);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    param_2 = plVar1[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(param_2 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2);
    func_0x000107c615e8(lVar3);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ea3420);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&lStack_48);
  func_0x000107c61574(uVar4);
  lVar3 = lStack_48;
  FUN_10250b014();
  func_0x000107c61574(lStack_48);
  lVar2 = *plVar1;
  *plVar1 = lVar3;
  plVar1[1] = param_2;
  func_0x000107c615e8(lVar2);
  return;
}


